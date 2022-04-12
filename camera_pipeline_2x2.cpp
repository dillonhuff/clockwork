#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: camera_pipeline_2x2_compute.h
#include "camera_pipeline_2x2_compute.h"

struct b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9_cache {
	// RAM Box: {[0, 96], [0, 128]}
	// Capacity: 131
	// # of read delays: 4
  // 0, 1, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}

	inline hw_uint<16> peek_130() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct b_b_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> b_b_stencil[1 + b_gb_s0_y, b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
    // { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> b_b_stencil[1 + b_gb_s0_y, 1 + b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
    // { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> b_b_stencil[1 + b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
    // { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> b_b_stencil[b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[1 + b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[1 + b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_demosaicked_1_stencil_5[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_b_stencil[1 + demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9_cache b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9;
};



inline void b_b_stencil_op_hcompute_b_b_stencil_244_write(hw_uint<16>& b_b_stencil_op_hcompute_b_b_stencil_244, b_b_stencil_cache& b_b_stencil, int root, int b_b_s0_y, int b_b_s0_x, int dynamic_address) {
  b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.push(b_b_stencil_op_hcompute_b_b_stencil_244);
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_gb_stencil_239_select(b_b_stencil_cache& b_b_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_gb_stencil_239 read pattern: { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> b_b_stencil[1 + b_gb_s0_y, b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_1();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_gb_stencil_240_select(b_b_stencil_cache& b_b_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_gb_stencil_240 read pattern: { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> b_b_stencil[1 + b_gb_s0_y, 1 + b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_0();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_gr_stencil_233_select(b_b_stencil_cache& b_b_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_gr_stencil_233 read pattern: { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> b_b_stencil[1 + b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_0();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_gr_stencil_234_select(b_b_stencil_cache& b_b_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_gr_stencil_234 read pattern: { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> b_b_stencil[b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_129();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_223_select(b_b_stencil_cache& b_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_r_stencil_223 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[1 + b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_1();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_224_select(b_b_stencil_cache& b_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_r_stencil_224 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_129();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_225_select(b_b_stencil_cache& b_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_r_stencil_225 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[1 + b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_0();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_226_select(b_b_stencil_cache& b_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_b_r_stencil_226 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> b_b_stencil[b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_130();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

inline hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135_select(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135 read pattern: { op_hcompute_demosaicked_1_stencil_5[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_b_stencil[1 + demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 29] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_b_b_stencil_op_hcompute_b_b_stencil_244 = b_b_stencil.b_b_stencil_op_hcompute_b_b_stencil_244_merged_banks_9.peek_1();
  return value_b_b_stencil_op_hcompute_b_b_stencil_244;
  return 0;
}

// # of bundles = 5
// op_hcompute_b_b_stencil_write
//	b_b_stencil_op_hcompute_b_b_stencil_244
inline void b_b_stencil_op_hcompute_b_b_stencil_write_bundle_write(hw_uint<16>& op_hcompute_b_b_stencil_write, b_b_stencil_cache& b_b_stencil, int root, int b_b_s0_y, int b_b_s0_x, int dynamic_address) {
	hw_uint<16> b_b_stencil_op_hcompute_b_b_stencil_244_res = op_hcompute_b_b_stencil_write.extract<0, 15>();
	b_b_stencil_op_hcompute_b_b_stencil_244_write(b_b_stencil_op_hcompute_b_b_stencil_244_res, b_b_stencil, root, b_b_s0_y, b_b_s0_x, dynamic_address);
}

// op_hcompute_b_gb_stencil_read
//	b_b_stencil_op_hcompute_b_gb_stencil_239
//	b_b_stencil_op_hcompute_b_gb_stencil_240
inline hw_uint<32> b_b_stencil_op_hcompute_b_gb_stencil_read_bundle_read(b_b_stencil_cache& b_b_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // b_b_stencil_op_hcompute_b_gb_stencil_239
    // b_b_stencil_op_hcompute_b_gb_stencil_240

	hw_uint<32> result;
	hw_uint<16> b_b_stencil_op_hcompute_b_gb_stencil_239_res = b_b_stencil_op_hcompute_b_gb_stencil_239_select(b_b_stencil, root, b_gb_s0_y, b_gb_s0_x, dynamic_address);
	set_at<0, 32>(result, b_b_stencil_op_hcompute_b_gb_stencil_239_res);
	hw_uint<16> b_b_stencil_op_hcompute_b_gb_stencil_240_res = b_b_stencil_op_hcompute_b_gb_stencil_240_select(b_b_stencil, root, b_gb_s0_y, b_gb_s0_x, dynamic_address);
	set_at<16, 32>(result, b_b_stencil_op_hcompute_b_gb_stencil_240_res);
	return result;
}

// op_hcompute_b_gr_stencil_read
//	b_b_stencil_op_hcompute_b_gr_stencil_233
//	b_b_stencil_op_hcompute_b_gr_stencil_234
inline hw_uint<32> b_b_stencil_op_hcompute_b_gr_stencil_read_bundle_read(b_b_stencil_cache& b_b_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // b_b_stencil_op_hcompute_b_gr_stencil_233
    // b_b_stencil_op_hcompute_b_gr_stencil_234

	hw_uint<32> result;
	hw_uint<16> b_b_stencil_op_hcompute_b_gr_stencil_233_res = b_b_stencil_op_hcompute_b_gr_stencil_233_select(b_b_stencil, root, b_gr_s0_y, b_gr_s0_x, dynamic_address);
	set_at<0, 32>(result, b_b_stencil_op_hcompute_b_gr_stencil_233_res);
	hw_uint<16> b_b_stencil_op_hcompute_b_gr_stencil_234_res = b_b_stencil_op_hcompute_b_gr_stencil_234_select(b_b_stencil, root, b_gr_s0_y, b_gr_s0_x, dynamic_address);
	set_at<16, 32>(result, b_b_stencil_op_hcompute_b_gr_stencil_234_res);
	return result;
}

// op_hcompute_b_r_stencil_read
//	b_b_stencil_op_hcompute_b_r_stencil_223
//	b_b_stencil_op_hcompute_b_r_stencil_224
//	b_b_stencil_op_hcompute_b_r_stencil_225
//	b_b_stencil_op_hcompute_b_r_stencil_226
inline hw_uint<64> b_b_stencil_op_hcompute_b_r_stencil_read_bundle_read(b_b_stencil_cache& b_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
  // # of ports in bundle: 4
    // b_b_stencil_op_hcompute_b_r_stencil_223
    // b_b_stencil_op_hcompute_b_r_stencil_224
    // b_b_stencil_op_hcompute_b_r_stencil_225
    // b_b_stencil_op_hcompute_b_r_stencil_226

	hw_uint<64> result;
	hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_223_res = b_b_stencil_op_hcompute_b_r_stencil_223_select(b_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<0, 64>(result, b_b_stencil_op_hcompute_b_r_stencil_223_res);
	hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_224_res = b_b_stencil_op_hcompute_b_r_stencil_224_select(b_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<16, 64>(result, b_b_stencil_op_hcompute_b_r_stencil_224_res);
	hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_225_res = b_b_stencil_op_hcompute_b_r_stencil_225_select(b_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<32, 64>(result, b_b_stencil_op_hcompute_b_r_stencil_225_res);
	hw_uint<16> b_b_stencil_op_hcompute_b_r_stencil_226_res = b_b_stencil_op_hcompute_b_r_stencil_226_select(b_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<48, 64>(result, b_b_stencil_op_hcompute_b_r_stencil_226_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_5_read
//	b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135
inline hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_5_read_bundle_read(b_b_stencil_cache& b_b_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135

	hw_uint<16> result;
	hw_uint<16> b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135_res = b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135_select(b_b_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, b_b_stencil_op_hcompute_demosaicked_1_stencil_5_135_res);
	return result;
}

struct b_gb_stencil_op_hcompute_b_gb_stencil_238_to_b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143_cache {
	// RAM Box: {[0, 95], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct b_gb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_11[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_gb_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  b_gb_stencil_op_hcompute_b_gb_stencil_238_to_b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143_cache b_gb_stencil_op_hcompute_b_gb_stencil_238_to_b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143;
};



inline void b_gb_stencil_op_hcompute_b_gb_stencil_238_write(hw_uint<16>& b_gb_stencil_op_hcompute_b_gb_stencil_238, b_gb_stencil_cache& b_gb_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
  b_gb_stencil.b_gb_stencil_op_hcompute_b_gb_stencil_238_to_b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143.push(b_gb_stencil_op_hcompute_b_gb_stencil_238);
}

inline hw_uint<16> b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143_select(b_gb_stencil_cache& b_gb_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143 read pattern: { op_hcompute_demosaicked_1_stencil_11[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_gb_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 35] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_b_gb_stencil_op_hcompute_b_gb_stencil_238 = b_gb_stencil.b_gb_stencil_op_hcompute_b_gb_stencil_238_to_b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143.peek(/* one reader or all rams */ 0);
  return value_b_gb_stencil_op_hcompute_b_gb_stencil_238;
  return 0;
}

// # of bundles = 2
// op_hcompute_b_gb_stencil_write
//	b_gb_stencil_op_hcompute_b_gb_stencil_238
inline void b_gb_stencil_op_hcompute_b_gb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_b_gb_stencil_write, b_gb_stencil_cache& b_gb_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
	hw_uint<16> b_gb_stencil_op_hcompute_b_gb_stencil_238_res = op_hcompute_b_gb_stencil_write.extract<0, 15>();
	b_gb_stencil_op_hcompute_b_gb_stencil_238_write(b_gb_stencil_op_hcompute_b_gb_stencil_238_res, b_gb_stencil, root, b_gb_s0_y, b_gb_s0_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_11_read
//	b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143
inline hw_uint<16> b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_read_bundle_read(b_gb_stencil_cache& b_gb_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143

	hw_uint<16> result;
	hw_uint<16> b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143_res = b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143_select(b_gb_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_143_res);
	return result;
}

struct b_gr_stencil_op_hcompute_b_gr_stencil_232_to_b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141_cache {
	// RAM Box: {[0, 95], [0, 127]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct b_gr_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_gr_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  b_gr_stencil_op_hcompute_b_gr_stencil_232_to_b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141_cache b_gr_stencil_op_hcompute_b_gr_stencil_232_to_b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141;
};



inline void b_gr_stencil_op_hcompute_b_gr_stencil_232_write(hw_uint<16>& b_gr_stencil_op_hcompute_b_gr_stencil_232, b_gr_stencil_cache& b_gr_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
  b_gr_stencil.b_gr_stencil_op_hcompute_b_gr_stencil_232_to_b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141.push(b_gr_stencil_op_hcompute_b_gr_stencil_232);
}

inline hw_uint<16> b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141_select(b_gr_stencil_cache& b_gr_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141 read pattern: { op_hcompute_demosaicked_1_stencil_2[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_gr_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 26] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_b_gr_stencil_op_hcompute_b_gr_stencil_232 = b_gr_stencil.b_gr_stencil_op_hcompute_b_gr_stencil_232_to_b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141.peek(/* one reader or all rams */ (126 - demosaicked_1_s0_x_x >= 0) ? (1) : 0);
  return value_b_gr_stencil_op_hcompute_b_gr_stencil_232;
  return 0;
}

// # of bundles = 2
// op_hcompute_b_gr_stencil_write
//	b_gr_stencil_op_hcompute_b_gr_stencil_232
inline void b_gr_stencil_op_hcompute_b_gr_stencil_write_bundle_write(hw_uint<16>& op_hcompute_b_gr_stencil_write, b_gr_stencil_cache& b_gr_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
	hw_uint<16> b_gr_stencil_op_hcompute_b_gr_stencil_232_res = op_hcompute_b_gr_stencil_write.extract<0, 15>();
	b_gr_stencil_op_hcompute_b_gr_stencil_232_write(b_gr_stencil_op_hcompute_b_gr_stencil_232_res, b_gr_stencil, root, b_gr_s0_y, b_gr_s0_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_2_read
//	b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141
inline hw_uint<16> b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(b_gr_stencil_cache& b_gr_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141

	hw_uint<16> result;
	hw_uint<16> b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141_res = b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141_select(b_gr_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_141_res);
	return result;
}

struct b_r_stencil_op_hcompute_b_r_stencil_222_to_b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129_cache {
	// RAM Box: {[0, 95], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct b_r_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_8[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_r_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  b_r_stencil_op_hcompute_b_r_stencil_222_to_b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129_cache b_r_stencil_op_hcompute_b_r_stencil_222_to_b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129;
};



inline void b_r_stencil_op_hcompute_b_r_stencil_222_write(hw_uint<16>& b_r_stencil_op_hcompute_b_r_stencil_222, b_r_stencil_cache& b_r_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
  b_r_stencil.b_r_stencil_op_hcompute_b_r_stencil_222_to_b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129.push(b_r_stencil_op_hcompute_b_r_stencil_222);
}

inline hw_uint<16> b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129_select(b_r_stencil_cache& b_r_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129 read pattern: { op_hcompute_demosaicked_1_stencil_8[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> b_r_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 32] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_b_r_stencil_op_hcompute_b_r_stencil_222 = b_r_stencil.b_r_stencil_op_hcompute_b_r_stencil_222_to_b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129.peek(/* one reader or all rams */ 0);
  return value_b_r_stencil_op_hcompute_b_r_stencil_222;
  return 0;
}

// # of bundles = 2
// op_hcompute_b_r_stencil_write
//	b_r_stencil_op_hcompute_b_r_stencil_222
inline void b_r_stencil_op_hcompute_b_r_stencil_write_bundle_write(hw_uint<16>& op_hcompute_b_r_stencil_write, b_r_stencil_cache& b_r_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
	hw_uint<16> b_r_stencil_op_hcompute_b_r_stencil_222_res = op_hcompute_b_r_stencil_write.extract<0, 15>();
	b_r_stencil_op_hcompute_b_r_stencil_222_write(b_r_stencil_op_hcompute_b_r_stencil_222_res, b_r_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_8_read
//	b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129
inline hw_uint<16> b_r_stencil_op_hcompute_demosaicked_1_stencil_8_read_bundle_read(b_r_stencil_cache& b_r_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129

	hw_uint<16> result;
	hw_uint<16> b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129_res = b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129_select(b_r_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, b_r_stencil_op_hcompute_demosaicked_1_stencil_8_129_res);
	return result;
}

struct corrected_stencil_op_hcompute_corrected_stencil_10_210_to_corrected_stencil_op_hcompute_curved_stencil_10_169_cache {
	// RAM Box: {[1, 1], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_11_206_to_corrected_stencil_op_hcompute_curved_stencil_11_167_cache {
	// RAM Box: {[2, 2], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_218_to_corrected_stencil_op_hcompute_curved_stencil_173_cache {
	// RAM Box: {[0, 0], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_1_214_to_corrected_stencil_op_hcompute_curved_stencil_1_171_cache {
	// RAM Box: {[1, 1], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_2_202_to_corrected_stencil_op_hcompute_curved_stencil_2_165_cache {
	// RAM Box: {[2, 2], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_3_198_to_corrected_stencil_op_hcompute_curved_stencil_3_163_cache {
	// RAM Box: {[0, 0], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_4_194_to_corrected_stencil_op_hcompute_curved_stencil_4_161_cache {
	// RAM Box: {[1, 1], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_5_190_to_corrected_stencil_op_hcompute_curved_stencil_5_159_cache {
	// RAM Box: {[2, 2], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_6_186_to_corrected_stencil_op_hcompute_curved_stencil_6_157_cache {
	// RAM Box: {[0, 0], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_7_182_to_corrected_stencil_op_hcompute_curved_stencil_7_155_cache {
	// RAM Box: {[1, 1], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_8_178_to_corrected_stencil_op_hcompute_curved_stencil_8_153_cache {
	// RAM Box: {[2, 2], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_op_hcompute_corrected_stencil_9_174_to_corrected_stencil_op_hcompute_curved_stencil_9_151_cache {
	// RAM Box: {[0, 0], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct corrected_stencil_cache {
  // Reader addrs...
    // { op_hcompute_curved_stencil_10[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 1 + 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_11[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 1 + 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_1[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_2[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_3[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 1 + 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_4[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 1 + 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_5[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 1 + 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_6[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_7[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_8[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
    // { op_hcompute_curved_stencil_9[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 1 + 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // # of banks: 12
  corrected_stencil_op_hcompute_corrected_stencil_10_210_to_corrected_stencil_op_hcompute_curved_stencil_10_169_cache corrected_stencil_op_hcompute_corrected_stencil_10_210_to_corrected_stencil_op_hcompute_curved_stencil_10_169;
  corrected_stencil_op_hcompute_corrected_stencil_11_206_to_corrected_stencil_op_hcompute_curved_stencil_11_167_cache corrected_stencil_op_hcompute_corrected_stencil_11_206_to_corrected_stencil_op_hcompute_curved_stencil_11_167;
  corrected_stencil_op_hcompute_corrected_stencil_218_to_corrected_stencil_op_hcompute_curved_stencil_173_cache corrected_stencil_op_hcompute_corrected_stencil_218_to_corrected_stencil_op_hcompute_curved_stencil_173;
  corrected_stencil_op_hcompute_corrected_stencil_1_214_to_corrected_stencil_op_hcompute_curved_stencil_1_171_cache corrected_stencil_op_hcompute_corrected_stencil_1_214_to_corrected_stencil_op_hcompute_curved_stencil_1_171;
  corrected_stencil_op_hcompute_corrected_stencil_2_202_to_corrected_stencil_op_hcompute_curved_stencil_2_165_cache corrected_stencil_op_hcompute_corrected_stencil_2_202_to_corrected_stencil_op_hcompute_curved_stencil_2_165;
  corrected_stencil_op_hcompute_corrected_stencil_3_198_to_corrected_stencil_op_hcompute_curved_stencil_3_163_cache corrected_stencil_op_hcompute_corrected_stencil_3_198_to_corrected_stencil_op_hcompute_curved_stencil_3_163;
  corrected_stencil_op_hcompute_corrected_stencil_4_194_to_corrected_stencil_op_hcompute_curved_stencil_4_161_cache corrected_stencil_op_hcompute_corrected_stencil_4_194_to_corrected_stencil_op_hcompute_curved_stencil_4_161;
  corrected_stencil_op_hcompute_corrected_stencil_5_190_to_corrected_stencil_op_hcompute_curved_stencil_5_159_cache corrected_stencil_op_hcompute_corrected_stencil_5_190_to_corrected_stencil_op_hcompute_curved_stencil_5_159;
  corrected_stencil_op_hcompute_corrected_stencil_6_186_to_corrected_stencil_op_hcompute_curved_stencil_6_157_cache corrected_stencil_op_hcompute_corrected_stencil_6_186_to_corrected_stencil_op_hcompute_curved_stencil_6_157;
  corrected_stencil_op_hcompute_corrected_stencil_7_182_to_corrected_stencil_op_hcompute_curved_stencil_7_155_cache corrected_stencil_op_hcompute_corrected_stencil_7_182_to_corrected_stencil_op_hcompute_curved_stencil_7_155;
  corrected_stencil_op_hcompute_corrected_stencil_8_178_to_corrected_stencil_op_hcompute_curved_stencil_8_153_cache corrected_stencil_op_hcompute_corrected_stencil_8_178_to_corrected_stencil_op_hcompute_curved_stencil_8_153;
  corrected_stencil_op_hcompute_corrected_stencil_9_174_to_corrected_stencil_op_hcompute_curved_stencil_9_151_cache corrected_stencil_op_hcompute_corrected_stencil_9_174_to_corrected_stencil_op_hcompute_curved_stencil_9_151;
};



inline void corrected_stencil_op_hcompute_corrected_stencil_10_210_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_10_210, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_10_210_to_corrected_stencil_op_hcompute_curved_stencil_10_169.push(corrected_stencil_op_hcompute_corrected_stencil_10_210);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_11_206_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_11_206, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_11_206_to_corrected_stencil_op_hcompute_curved_stencil_11_167.push(corrected_stencil_op_hcompute_corrected_stencil_11_206);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_1_214_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_1_214, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_1_214_to_corrected_stencil_op_hcompute_curved_stencil_1_171.push(corrected_stencil_op_hcompute_corrected_stencil_1_214);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_218_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_218, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_218_to_corrected_stencil_op_hcompute_curved_stencil_173.push(corrected_stencil_op_hcompute_corrected_stencil_218);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_2_202_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_2_202, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_2_202_to_corrected_stencil_op_hcompute_curved_stencil_2_165.push(corrected_stencil_op_hcompute_corrected_stencil_2_202);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_3_198_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_3_198, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_3_198_to_corrected_stencil_op_hcompute_curved_stencil_3_163.push(corrected_stencil_op_hcompute_corrected_stencil_3_198);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_4_194_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_4_194, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_4_194_to_corrected_stencil_op_hcompute_curved_stencil_4_161.push(corrected_stencil_op_hcompute_corrected_stencil_4_194);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_5_190_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_5_190, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_5_190_to_corrected_stencil_op_hcompute_curved_stencil_5_159.push(corrected_stencil_op_hcompute_corrected_stencil_5_190);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_6_186_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_6_186, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_6_186_to_corrected_stencil_op_hcompute_curved_stencil_6_157.push(corrected_stencil_op_hcompute_corrected_stencil_6_186);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_7_182_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_7_182, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_7_182_to_corrected_stencil_op_hcompute_curved_stencil_7_155.push(corrected_stencil_op_hcompute_corrected_stencil_7_182);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_8_178_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_8_178, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_8_178_to_corrected_stencil_op_hcompute_curved_stencil_8_153.push(corrected_stencil_op_hcompute_corrected_stencil_8_178);
}

inline void corrected_stencil_op_hcompute_corrected_stencil_9_174_write(hw_uint<16>& corrected_stencil_op_hcompute_corrected_stencil_9_174, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_9_174_to_corrected_stencil_op_hcompute_curved_stencil_9_151.push(corrected_stencil_op_hcompute_corrected_stencil_9_174);
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_10_169_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_10_169 read pattern: { op_hcompute_curved_stencil_10[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 1 + 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 58] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 46] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_10_210 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_10_210_to_corrected_stencil_op_hcompute_curved_stencil_10_169.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_10_210;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_11_167_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_11_167 read pattern: { op_hcompute_curved_stencil_11[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 1 + 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 59] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 47] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_11_206 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_11_206_to_corrected_stencil_op_hcompute_curved_stencil_11_167.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_11_206;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_173_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_173 read pattern: { op_hcompute_curved_stencil[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 48] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 36] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_218 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_218_to_corrected_stencil_op_hcompute_curved_stencil_173.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_218;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_171_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_1_171 read pattern: { op_hcompute_curved_stencil_1[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 49] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 37] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_1_214 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_1_214_to_corrected_stencil_op_hcompute_curved_stencil_1_171.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_1_214;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_165_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_2_165 read pattern: { op_hcompute_curved_stencil_2[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 50] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 38] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_2_202 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_2_202_to_corrected_stencil_op_hcompute_curved_stencil_2_165.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_2_202;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_3_163_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_3_163 read pattern: { op_hcompute_curved_stencil_3[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 1 + 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 51] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 39] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_3_198 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_3_198_to_corrected_stencil_op_hcompute_curved_stencil_3_163.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_3_198;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_4_161_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_4_161 read pattern: { op_hcompute_curved_stencil_4[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 1 + 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 52] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 40] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_4_194 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_4_194_to_corrected_stencil_op_hcompute_curved_stencil_4_161.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_4_194;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_5_159_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_5_159 read pattern: { op_hcompute_curved_stencil_5[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 1 + 2curved_s0_y_yio, 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 53] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 41] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_5_190 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_5_190_to_corrected_stencil_op_hcompute_curved_stencil_5_159.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_5_190;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_6_157_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_6_157 read pattern: { op_hcompute_curved_stencil_6[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 54] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 42] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_6_186 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_6_186_to_corrected_stencil_op_hcompute_curved_stencil_6_157.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_6_186;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_7_155_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_7_155 read pattern: { op_hcompute_curved_stencil_7[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[1, 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 55] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 43] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_7_182 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_7_182_to_corrected_stencil_op_hcompute_curved_stencil_7_155.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_7_182;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_8_153_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_8_153 read pattern: { op_hcompute_curved_stencil_8[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[2, 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 56] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 44] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_8_178 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_8_178_to_corrected_stencil_op_hcompute_curved_stencil_8_153.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_8_178;
  return 0;
}

inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_9_151_select(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // corrected_stencil_op_hcompute_curved_stencil_9_151 read pattern: { op_hcompute_curved_stencil_9[root = 0, curved_s0_y_yio, curved_s0_x_x] -> corrected_stencil[0, 1 + 2curved_s0_y_yio, 1 + 2curved_s0_x_x] : 0 <= curved_s0_y_yio <= 95 and 0 <= curved_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_curved_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 57] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_corrected_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 45] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_corrected_stencil_op_hcompute_corrected_stencil_9_174 = corrected_stencil.corrected_stencil_op_hcompute_corrected_stencil_9_174_to_corrected_stencil_op_hcompute_curved_stencil_9_151.peek(/* one reader or all rams */ 0);
  return value_corrected_stencil_op_hcompute_corrected_stencil_9_174;
  return 0;
}

// # of bundles = 24
// op_hcompute_corrected_stencil_10_write
//	corrected_stencil_op_hcompute_corrected_stencil_10_210
inline void corrected_stencil_op_hcompute_corrected_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_10_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_10_210_res = op_hcompute_corrected_stencil_10_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_10_210_write(corrected_stencil_op_hcompute_corrected_stencil_10_210_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_11_write
//	corrected_stencil_op_hcompute_corrected_stencil_11_206
inline void corrected_stencil_op_hcompute_corrected_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_11_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_11_206_res = op_hcompute_corrected_stencil_11_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_11_206_write(corrected_stencil_op_hcompute_corrected_stencil_11_206_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_1_write
//	corrected_stencil_op_hcompute_corrected_stencil_1_214
inline void corrected_stencil_op_hcompute_corrected_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_1_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_1_214_res = op_hcompute_corrected_stencil_1_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_1_214_write(corrected_stencil_op_hcompute_corrected_stencil_1_214_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_2_write
//	corrected_stencil_op_hcompute_corrected_stencil_2_202
inline void corrected_stencil_op_hcompute_corrected_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_2_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_2_202_res = op_hcompute_corrected_stencil_2_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_2_202_write(corrected_stencil_op_hcompute_corrected_stencil_2_202_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_3_write
//	corrected_stencil_op_hcompute_corrected_stencil_3_198
inline void corrected_stencil_op_hcompute_corrected_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_3_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_3_198_res = op_hcompute_corrected_stencil_3_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_3_198_write(corrected_stencil_op_hcompute_corrected_stencil_3_198_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_4_write
//	corrected_stencil_op_hcompute_corrected_stencil_4_194
inline void corrected_stencil_op_hcompute_corrected_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_4_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_4_194_res = op_hcompute_corrected_stencil_4_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_4_194_write(corrected_stencil_op_hcompute_corrected_stencil_4_194_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_5_write
//	corrected_stencil_op_hcompute_corrected_stencil_5_190
inline void corrected_stencil_op_hcompute_corrected_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_5_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_5_190_res = op_hcompute_corrected_stencil_5_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_5_190_write(corrected_stencil_op_hcompute_corrected_stencil_5_190_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_6_write
//	corrected_stencil_op_hcompute_corrected_stencil_6_186
inline void corrected_stencil_op_hcompute_corrected_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_6_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_6_186_res = op_hcompute_corrected_stencil_6_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_6_186_write(corrected_stencil_op_hcompute_corrected_stencil_6_186_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_7_write
//	corrected_stencil_op_hcompute_corrected_stencil_7_182
inline void corrected_stencil_op_hcompute_corrected_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_7_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_7_182_res = op_hcompute_corrected_stencil_7_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_7_182_write(corrected_stencil_op_hcompute_corrected_stencil_7_182_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_8_write
//	corrected_stencil_op_hcompute_corrected_stencil_8_178
inline void corrected_stencil_op_hcompute_corrected_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_8_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_8_178_res = op_hcompute_corrected_stencil_8_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_8_178_write(corrected_stencil_op_hcompute_corrected_stencil_8_178_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_9_write
//	corrected_stencil_op_hcompute_corrected_stencil_9_174
inline void corrected_stencil_op_hcompute_corrected_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_9_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_9_174_res = op_hcompute_corrected_stencil_9_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_9_174_write(corrected_stencil_op_hcompute_corrected_stencil_9_174_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_corrected_stencil_write
//	corrected_stencil_op_hcompute_corrected_stencil_218
inline void corrected_stencil_op_hcompute_corrected_stencil_write_bundle_write(hw_uint<16>& op_hcompute_corrected_stencil_write, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
	hw_uint<16> corrected_stencil_op_hcompute_corrected_stencil_218_res = op_hcompute_corrected_stencil_write.extract<0, 15>();
	corrected_stencil_op_hcompute_corrected_stencil_218_write(corrected_stencil_op_hcompute_corrected_stencil_218_res, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_10_read
//	corrected_stencil_op_hcompute_curved_stencil_10_169
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_10_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_10_169

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_10_169_res = corrected_stencil_op_hcompute_curved_stencil_10_169_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_10_169_res);
	return result;
}

// op_hcompute_curved_stencil_11_read
//	corrected_stencil_op_hcompute_curved_stencil_11_167
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_11_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_11_167

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_11_167_res = corrected_stencil_op_hcompute_curved_stencil_11_167_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_11_167_res);
	return result;
}

// op_hcompute_curved_stencil_1_read
//	corrected_stencil_op_hcompute_curved_stencil_1_171
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_1_171

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_1_171_res = corrected_stencil_op_hcompute_curved_stencil_1_171_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_1_171_res);
	return result;
}

// op_hcompute_curved_stencil_2_read
//	corrected_stencil_op_hcompute_curved_stencil_2_165
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_2_165

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_2_165_res = corrected_stencil_op_hcompute_curved_stencil_2_165_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_2_165_res);
	return result;
}

// op_hcompute_curved_stencil_3_read
//	corrected_stencil_op_hcompute_curved_stencil_3_163
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_3_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_3_163

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_3_163_res = corrected_stencil_op_hcompute_curved_stencil_3_163_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_3_163_res);
	return result;
}

// op_hcompute_curved_stencil_4_read
//	corrected_stencil_op_hcompute_curved_stencil_4_161
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_4_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_4_161

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_4_161_res = corrected_stencil_op_hcompute_curved_stencil_4_161_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_4_161_res);
	return result;
}

// op_hcompute_curved_stencil_5_read
//	corrected_stencil_op_hcompute_curved_stencil_5_159
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_5_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_5_159

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_5_159_res = corrected_stencil_op_hcompute_curved_stencil_5_159_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_5_159_res);
	return result;
}

// op_hcompute_curved_stencil_6_read
//	corrected_stencil_op_hcompute_curved_stencil_6_157
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_6_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_6_157

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_6_157_res = corrected_stencil_op_hcompute_curved_stencil_6_157_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_6_157_res);
	return result;
}

// op_hcompute_curved_stencil_7_read
//	corrected_stencil_op_hcompute_curved_stencil_7_155
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_7_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_7_155

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_7_155_res = corrected_stencil_op_hcompute_curved_stencil_7_155_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_7_155_res);
	return result;
}

// op_hcompute_curved_stencil_8_read
//	corrected_stencil_op_hcompute_curved_stencil_8_153
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_8_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_8_153

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_8_153_res = corrected_stencil_op_hcompute_curved_stencil_8_153_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_8_153_res);
	return result;
}

// op_hcompute_curved_stencil_9_read
//	corrected_stencil_op_hcompute_curved_stencil_9_151
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_9_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_9_151

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_9_151_res = corrected_stencil_op_hcompute_curved_stencil_9_151_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_9_151_res);
	return result;
}

// op_hcompute_curved_stencil_read
//	corrected_stencil_op_hcompute_curved_stencil_173
inline hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_read_bundle_read(corrected_stencil_cache& corrected_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // corrected_stencil_op_hcompute_curved_stencil_173

	hw_uint<16> result;
	hw_uint<16> corrected_stencil_op_hcompute_curved_stencil_173_res = corrected_stencil_op_hcompute_curved_stencil_173_select(corrected_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
	set_at<0, 16>(result, corrected_stencil_op_hcompute_curved_stencil_173_res);
	return result;
}

struct curved_stencil_op_hcompute_curved_stencil_10_168_to_curved_stencil_op_hcompute_hw_output_glb_stencil_10_67_cache {
	// RAM Box: {[1, 1], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_11_166_to_curved_stencil_op_hcompute_hw_output_glb_stencil_11_65_cache {
	// RAM Box: {[2, 2], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_1_170_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_69_cache {
	// RAM Box: {[1, 1], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_2_164_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_63_cache {
	// RAM Box: {[2, 2], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_3_162_to_curved_stencil_op_hcompute_hw_output_glb_stencil_3_61_cache {
	// RAM Box: {[0, 0], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_4_160_to_curved_stencil_op_hcompute_hw_output_glb_stencil_4_59_cache {
	// RAM Box: {[1, 1], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_5_158_to_curved_stencil_op_hcompute_hw_output_glb_stencil_5_57_cache {
	// RAM Box: {[2, 2], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_6_156_to_curved_stencil_op_hcompute_hw_output_glb_stencil_6_55_cache {
	// RAM Box: {[0, 0], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_172_to_curved_stencil_op_hcompute_hw_output_glb_stencil_71_cache {
	// RAM Box: {[0, 0], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_7_154_to_curved_stencil_op_hcompute_hw_output_glb_stencil_7_53_cache {
	// RAM Box: {[1, 1], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_8_152_to_curved_stencil_op_hcompute_hw_output_glb_stencil_8_51_cache {
	// RAM Box: {[2, 2], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_op_hcompute_curved_stencil_9_150_to_curved_stencil_op_hcompute_hw_output_glb_stencil_9_49_cache {
	// RAM Box: {[0, 0], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct curved_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_glb_stencil_10[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 1 + 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_11[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 1 + 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_3[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 1 + 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_4[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 1 + 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_5[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 1 + 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_6[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_7[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_8[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_glb_stencil_9[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 1 + 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // # of banks: 12
  curved_stencil_op_hcompute_curved_stencil_10_168_to_curved_stencil_op_hcompute_hw_output_glb_stencil_10_67_cache curved_stencil_op_hcompute_curved_stencil_10_168_to_curved_stencil_op_hcompute_hw_output_glb_stencil_10_67;
  curved_stencil_op_hcompute_curved_stencil_11_166_to_curved_stencil_op_hcompute_hw_output_glb_stencil_11_65_cache curved_stencil_op_hcompute_curved_stencil_11_166_to_curved_stencil_op_hcompute_hw_output_glb_stencil_11_65;
  curved_stencil_op_hcompute_curved_stencil_1_170_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_69_cache curved_stencil_op_hcompute_curved_stencil_1_170_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_69;
  curved_stencil_op_hcompute_curved_stencil_2_164_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_63_cache curved_stencil_op_hcompute_curved_stencil_2_164_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_63;
  curved_stencil_op_hcompute_curved_stencil_3_162_to_curved_stencil_op_hcompute_hw_output_glb_stencil_3_61_cache curved_stencil_op_hcompute_curved_stencil_3_162_to_curved_stencil_op_hcompute_hw_output_glb_stencil_3_61;
  curved_stencil_op_hcompute_curved_stencil_4_160_to_curved_stencil_op_hcompute_hw_output_glb_stencil_4_59_cache curved_stencil_op_hcompute_curved_stencil_4_160_to_curved_stencil_op_hcompute_hw_output_glb_stencil_4_59;
  curved_stencil_op_hcompute_curved_stencil_5_158_to_curved_stencil_op_hcompute_hw_output_glb_stencil_5_57_cache curved_stencil_op_hcompute_curved_stencil_5_158_to_curved_stencil_op_hcompute_hw_output_glb_stencil_5_57;
  curved_stencil_op_hcompute_curved_stencil_6_156_to_curved_stencil_op_hcompute_hw_output_glb_stencil_6_55_cache curved_stencil_op_hcompute_curved_stencil_6_156_to_curved_stencil_op_hcompute_hw_output_glb_stencil_6_55;
  curved_stencil_op_hcompute_curved_stencil_172_to_curved_stencil_op_hcompute_hw_output_glb_stencil_71_cache curved_stencil_op_hcompute_curved_stencil_172_to_curved_stencil_op_hcompute_hw_output_glb_stencil_71;
  curved_stencil_op_hcompute_curved_stencil_7_154_to_curved_stencil_op_hcompute_hw_output_glb_stencil_7_53_cache curved_stencil_op_hcompute_curved_stencil_7_154_to_curved_stencil_op_hcompute_hw_output_glb_stencil_7_53;
  curved_stencil_op_hcompute_curved_stencil_8_152_to_curved_stencil_op_hcompute_hw_output_glb_stencil_8_51_cache curved_stencil_op_hcompute_curved_stencil_8_152_to_curved_stencil_op_hcompute_hw_output_glb_stencil_8_51;
  curved_stencil_op_hcompute_curved_stencil_9_150_to_curved_stencil_op_hcompute_hw_output_glb_stencil_9_49_cache curved_stencil_op_hcompute_curved_stencil_9_150_to_curved_stencil_op_hcompute_hw_output_glb_stencil_9_49;
};



inline void curved_stencil_op_hcompute_curved_stencil_10_168_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_10_168, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_10_168_to_curved_stencil_op_hcompute_hw_output_glb_stencil_10_67.push(curved_stencil_op_hcompute_curved_stencil_10_168);
}

inline void curved_stencil_op_hcompute_curved_stencil_11_166_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_11_166, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_11_166_to_curved_stencil_op_hcompute_hw_output_glb_stencil_11_65.push(curved_stencil_op_hcompute_curved_stencil_11_166);
}

inline void curved_stencil_op_hcompute_curved_stencil_172_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_172, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_172_to_curved_stencil_op_hcompute_hw_output_glb_stencil_71.push(curved_stencil_op_hcompute_curved_stencil_172);
}

inline void curved_stencil_op_hcompute_curved_stencil_1_170_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_1_170, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_1_170_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_69.push(curved_stencil_op_hcompute_curved_stencil_1_170);
}

inline void curved_stencil_op_hcompute_curved_stencil_2_164_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_2_164, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_2_164_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_63.push(curved_stencil_op_hcompute_curved_stencil_2_164);
}

inline void curved_stencil_op_hcompute_curved_stencil_3_162_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_3_162, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_3_162_to_curved_stencil_op_hcompute_hw_output_glb_stencil_3_61.push(curved_stencil_op_hcompute_curved_stencil_3_162);
}

inline void curved_stencil_op_hcompute_curved_stencil_4_160_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_4_160, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_4_160_to_curved_stencil_op_hcompute_hw_output_glb_stencil_4_59.push(curved_stencil_op_hcompute_curved_stencil_4_160);
}

inline void curved_stencil_op_hcompute_curved_stencil_5_158_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_5_158, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_5_158_to_curved_stencil_op_hcompute_hw_output_glb_stencil_5_57.push(curved_stencil_op_hcompute_curved_stencil_5_158);
}

inline void curved_stencil_op_hcompute_curved_stencil_6_156_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_6_156, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_6_156_to_curved_stencil_op_hcompute_hw_output_glb_stencil_6_55.push(curved_stencil_op_hcompute_curved_stencil_6_156);
}

inline void curved_stencil_op_hcompute_curved_stencil_7_154_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_7_154, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_7_154_to_curved_stencil_op_hcompute_hw_output_glb_stencil_7_53.push(curved_stencil_op_hcompute_curved_stencil_7_154);
}

inline void curved_stencil_op_hcompute_curved_stencil_8_152_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_8_152, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_8_152_to_curved_stencil_op_hcompute_hw_output_glb_stencil_8_51.push(curved_stencil_op_hcompute_curved_stencil_8_152);
}

inline void curved_stencil_op_hcompute_curved_stencil_9_150_write(hw_uint<16>& curved_stencil_op_hcompute_curved_stencil_9_150, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
  curved_stencil.curved_stencil_op_hcompute_curved_stencil_9_150_to_curved_stencil_op_hcompute_hw_output_glb_stencil_9_49.push(curved_stencil_op_hcompute_curved_stencil_9_150);
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_10_67_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_10_67 read pattern: { op_hcompute_hw_output_glb_stencil_10[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 1 + 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 70] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 58] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_10_168 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_10_168_to_curved_stencil_op_hcompute_hw_output_glb_stencil_10_67.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_10_168;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_11_65_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_11_65 read pattern: { op_hcompute_hw_output_glb_stencil_11[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 1 + 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 71] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 59] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_11_166 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_11_166_to_curved_stencil_op_hcompute_hw_output_glb_stencil_11_65.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_11_166;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_1_69_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_1_69 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 61] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 49] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_1_170 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_1_170_to_curved_stencil_op_hcompute_hw_output_glb_stencil_1_69.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_1_170;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_2_63_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_2_63 read pattern: { op_hcompute_hw_output_glb_stencil_2[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 62] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 50] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_2_164 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_2_164_to_curved_stencil_op_hcompute_hw_output_glb_stencil_2_63.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_2_164;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_3_61_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_3_61 read pattern: { op_hcompute_hw_output_glb_stencil_3[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 1 + 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 63] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 51] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_3_162 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_3_162_to_curved_stencil_op_hcompute_hw_output_glb_stencil_3_61.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_3_162;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_4_59_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_4_59 read pattern: { op_hcompute_hw_output_glb_stencil_4[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 1 + 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 64] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 52] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_4_160 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_4_160_to_curved_stencil_op_hcompute_hw_output_glb_stencil_4_59.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_4_160;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_5_57_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_5_57 read pattern: { op_hcompute_hw_output_glb_stencil_5[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 1 + 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 65] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 53] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_5_158 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_5_158_to_curved_stencil_op_hcompute_hw_output_glb_stencil_5_57.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_5_158;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_6_55_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_6_55 read pattern: { op_hcompute_hw_output_glb_stencil_6[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 66] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 54] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_6_156 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_6_156_to_curved_stencil_op_hcompute_hw_output_glb_stencil_6_55.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_6_156;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_71_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_71 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 2hw_output_s0_y_yi_yio, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 60] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 48] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_172 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_172_to_curved_stencil_op_hcompute_hw_output_glb_stencil_71.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_172;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_7_53_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_7_53 read pattern: { op_hcompute_hw_output_glb_stencil_7[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[1, 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 67] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 55] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_7_154 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_7_154_to_curved_stencil_op_hcompute_hw_output_glb_stencil_7_53.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_7_154;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_8_51_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_8_51 read pattern: { op_hcompute_hw_output_glb_stencil_8[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[2, 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 68] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 56] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_8_152 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_8_152_to_curved_stencil_op_hcompute_hw_output_glb_stencil_8_51.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_8_152;
  return 0;
}

inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_9_49_select(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // curved_stencil_op_hcompute_hw_output_glb_stencil_9_49 read pattern: { op_hcompute_hw_output_glb_stencil_9[root = 0, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi] -> curved_stencil[0, 1 + 2hw_output_s0_y_yi_yio, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi_yio <= 95 and 0 <= hw_output_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 69] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_curved_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 57] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_curved_stencil_op_hcompute_curved_stencil_9_150 = curved_stencil.curved_stencil_op_hcompute_curved_stencil_9_150_to_curved_stencil_op_hcompute_hw_output_glb_stencil_9_49.peek(/* one reader or all rams */ 0);
  return value_curved_stencil_op_hcompute_curved_stencil_9_150;
  return 0;
}

// # of bundles = 24
// op_hcompute_curved_stencil_10_write
//	curved_stencil_op_hcompute_curved_stencil_10_168
inline void curved_stencil_op_hcompute_curved_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_10_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_10_168_res = op_hcompute_curved_stencil_10_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_10_168_write(curved_stencil_op_hcompute_curved_stencil_10_168_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_11_write
//	curved_stencil_op_hcompute_curved_stencil_11_166
inline void curved_stencil_op_hcompute_curved_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_11_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_11_166_res = op_hcompute_curved_stencil_11_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_11_166_write(curved_stencil_op_hcompute_curved_stencil_11_166_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_1_write
//	curved_stencil_op_hcompute_curved_stencil_1_170
inline void curved_stencil_op_hcompute_curved_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_1_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_1_170_res = op_hcompute_curved_stencil_1_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_1_170_write(curved_stencil_op_hcompute_curved_stencil_1_170_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_2_write
//	curved_stencil_op_hcompute_curved_stencil_2_164
inline void curved_stencil_op_hcompute_curved_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_2_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_2_164_res = op_hcompute_curved_stencil_2_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_2_164_write(curved_stencil_op_hcompute_curved_stencil_2_164_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_3_write
//	curved_stencil_op_hcompute_curved_stencil_3_162
inline void curved_stencil_op_hcompute_curved_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_3_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_3_162_res = op_hcompute_curved_stencil_3_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_3_162_write(curved_stencil_op_hcompute_curved_stencil_3_162_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_4_write
//	curved_stencil_op_hcompute_curved_stencil_4_160
inline void curved_stencil_op_hcompute_curved_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_4_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_4_160_res = op_hcompute_curved_stencil_4_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_4_160_write(curved_stencil_op_hcompute_curved_stencil_4_160_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_5_write
//	curved_stencil_op_hcompute_curved_stencil_5_158
inline void curved_stencil_op_hcompute_curved_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_5_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_5_158_res = op_hcompute_curved_stencil_5_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_5_158_write(curved_stencil_op_hcompute_curved_stencil_5_158_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_6_write
//	curved_stencil_op_hcompute_curved_stencil_6_156
inline void curved_stencil_op_hcompute_curved_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_6_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_6_156_res = op_hcompute_curved_stencil_6_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_6_156_write(curved_stencil_op_hcompute_curved_stencil_6_156_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_7_write
//	curved_stencil_op_hcompute_curved_stencil_7_154
inline void curved_stencil_op_hcompute_curved_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_7_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_7_154_res = op_hcompute_curved_stencil_7_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_7_154_write(curved_stencil_op_hcompute_curved_stencil_7_154_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_8_write
//	curved_stencil_op_hcompute_curved_stencil_8_152
inline void curved_stencil_op_hcompute_curved_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_8_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_8_152_res = op_hcompute_curved_stencil_8_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_8_152_write(curved_stencil_op_hcompute_curved_stencil_8_152_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_9_write
//	curved_stencil_op_hcompute_curved_stencil_9_150
inline void curved_stencil_op_hcompute_curved_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_9_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_9_150_res = op_hcompute_curved_stencil_9_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_9_150_write(curved_stencil_op_hcompute_curved_stencil_9_150_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_curved_stencil_write
//	curved_stencil_op_hcompute_curved_stencil_172
inline void curved_stencil_op_hcompute_curved_stencil_write_bundle_write(hw_uint<16>& op_hcompute_curved_stencil_write, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x, int dynamic_address) {
	hw_uint<16> curved_stencil_op_hcompute_curved_stencil_172_res = op_hcompute_curved_stencil_write.extract<0, 15>();
	curved_stencil_op_hcompute_curved_stencil_172_write(curved_stencil_op_hcompute_curved_stencil_172_res, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_10_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_10_67
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_10_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_10_67

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_10_67_res = curved_stencil_op_hcompute_hw_output_glb_stencil_10_67_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_10_67_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_11_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_11_65
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_11_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_11_65

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_11_65_res = curved_stencil_op_hcompute_hw_output_glb_stencil_11_65_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_11_65_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_1_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_1_69
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_1_69

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_1_69_res = curved_stencil_op_hcompute_hw_output_glb_stencil_1_69_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_1_69_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_2_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_2_63
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_2_63

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_2_63_res = curved_stencil_op_hcompute_hw_output_glb_stencil_2_63_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_2_63_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_3_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_3_61
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_3_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_3_61

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_3_61_res = curved_stencil_op_hcompute_hw_output_glb_stencil_3_61_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_3_61_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_4_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_4_59
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_4_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_4_59

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_4_59_res = curved_stencil_op_hcompute_hw_output_glb_stencil_4_59_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_4_59_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_5_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_5_57
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_5_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_5_57

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_5_57_res = curved_stencil_op_hcompute_hw_output_glb_stencil_5_57_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_5_57_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_6_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_6_55
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_6_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_6_55

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_6_55_res = curved_stencil_op_hcompute_hw_output_glb_stencil_6_55_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_6_55_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_7_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_7_53
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_7_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_7_53

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_7_53_res = curved_stencil_op_hcompute_hw_output_glb_stencil_7_53_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_7_53_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_8_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_8_51
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_8_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_8_51

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_8_51_res = curved_stencil_op_hcompute_hw_output_glb_stencil_8_51_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_8_51_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_9_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_9_49
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_9_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_9_49

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_9_49_res = curved_stencil_op_hcompute_hw_output_glb_stencil_9_49_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_9_49_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_read
//	curved_stencil_op_hcompute_hw_output_glb_stencil_71
inline hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(curved_stencil_cache& curved_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // curved_stencil_op_hcompute_hw_output_glb_stencil_71

	hw_uint<16> result;
	hw_uint<16> curved_stencil_op_hcompute_hw_output_glb_stencil_71_res = curved_stencil_op_hcompute_hw_output_glb_stencil_71_select(curved_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, curved_stencil_op_hcompute_hw_output_glb_stencil_71_res);
	return result;
}

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211_cache {
	// RAM Box: {[0, 0], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212_cache {
	// RAM Box: {[1, 1], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213_cache {
	// RAM Box: {[2, 2], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207_cache {
	// RAM Box: {[0, 0], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208_cache {
	// RAM Box: {[1, 1], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209_cache {
	// RAM Box: {[2, 2], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215_cache {
	// RAM Box: {[0, 0], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216_cache {
	// RAM Box: {[1, 1], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217_cache {
	// RAM Box: {[2, 2], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_219_cache {
	// RAM Box: {[0, 0], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_220_cache {
	// RAM Box: {[1, 1], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_221_cache {
	// RAM Box: {[2, 2], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203_cache {
	// RAM Box: {[0, 0], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204_cache {
	// RAM Box: {[1, 1], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205_cache {
	// RAM Box: {[2, 2], [0, 190], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199_cache {
	// RAM Box: {[0, 0], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200_cache {
	// RAM Box: {[1, 1], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201_cache {
	// RAM Box: {[2, 2], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195_cache {
	// RAM Box: {[0, 0], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196_cache {
	// RAM Box: {[1, 1], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197_cache {
	// RAM Box: {[2, 2], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191_cache {
	// RAM Box: {[0, 0], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192_cache {
	// RAM Box: {[1, 1], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193_cache {
	// RAM Box: {[2, 2], [1, 191], [0, 254]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187_cache {
	// RAM Box: {[0, 0], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188_cache {
	// RAM Box: {[1, 1], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189_cache {
	// RAM Box: {[2, 2], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183_cache {
	// RAM Box: {[0, 0], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184_cache {
	// RAM Box: {[1, 1], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185_cache {
	// RAM Box: {[2, 2], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179_cache {
	// RAM Box: {[0, 0], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180_cache {
	// RAM Box: {[1, 1], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181_cache {
	// RAM Box: {[2, 2], [0, 190], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175_cache {
	// RAM Box: {[0, 0], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176_cache {
	// RAM Box: {[1, 1], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177_cache {
	// RAM Box: {[2, 2], [1, 191], [1, 255]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicked_1_stencil_cache {
  // Reader addrs...
    // { op_hcompute_corrected_stencil_10[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_10[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_10[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_11[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_11[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_11[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_3[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_3[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_3[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_4[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_4[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_4[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_5[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_5[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_5[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_6[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_6[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_6[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_7[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_7[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_7[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_8[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_8[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_8[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_9[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_9[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
    // { op_hcompute_corrected_stencil_9[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // # of banks: 36
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_219_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_219;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_220_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_220;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_221_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_221;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176;
  demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177_cache demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177;
};



inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_219.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_220.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_221.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128);
}

inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_write(hw_uint<16>& demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126);
  demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175.push(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126);
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211 read pattern: { op_hcompute_corrected_stencil_10[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 46] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 33] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212 read pattern: { op_hcompute_corrected_stencil_10[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 46] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 34] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213 read pattern: { op_hcompute_corrected_stencil_10[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 46] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 35] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207 read pattern: { op_hcompute_corrected_stencil_11[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 47] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 33] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208 read pattern: { op_hcompute_corrected_stencil_11[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 47] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 34] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209 read pattern: { op_hcompute_corrected_stencil_11[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 47] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 35] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 37] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 24] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 37] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 25] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217 read pattern: { op_hcompute_corrected_stencil_1[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 37] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 26] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_219_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_219 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 36] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 24] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_219.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_220_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_220 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 36] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 25] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_220.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_221_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_221 read pattern: { op_hcompute_corrected_stencil[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 36] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 26] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_221.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 38] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 24] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 38] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 25] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205 read pattern: { op_hcompute_corrected_stencil_2[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 38] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 26] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199 read pattern: { op_hcompute_corrected_stencil_3[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 39] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 27] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200 read pattern: { op_hcompute_corrected_stencil_3[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 39] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 28] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201 read pattern: { op_hcompute_corrected_stencil_3[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 39] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 29] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195 read pattern: { op_hcompute_corrected_stencil_4[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 40] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 27] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196 read pattern: { op_hcompute_corrected_stencil_4[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 40] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 28] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197 read pattern: { op_hcompute_corrected_stencil_4[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 40] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 29] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191 read pattern: { op_hcompute_corrected_stencil_5[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 41] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 27] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192 read pattern: { op_hcompute_corrected_stencil_5[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 41] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 28] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193 read pattern: { op_hcompute_corrected_stencil_5[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 41] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 29] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187 read pattern: { op_hcompute_corrected_stencil_6[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 42] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 30] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188 read pattern: { op_hcompute_corrected_stencil_6[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 42] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 31] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189 read pattern: { op_hcompute_corrected_stencil_6[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 42] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 32] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183 read pattern: { op_hcompute_corrected_stencil_7[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 43] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 30] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184 read pattern: { op_hcompute_corrected_stencil_7[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 43] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 31] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185 read pattern: { op_hcompute_corrected_stencil_7[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 43] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 32] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179 read pattern: { op_hcompute_corrected_stencil_8[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 44] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 30] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180 read pattern: { op_hcompute_corrected_stencil_8[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 44] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 31] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181 read pattern: { op_hcompute_corrected_stencil_8[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 44] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 32] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175 read pattern: { op_hcompute_corrected_stencil_9[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[0, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 45] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 33] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176 read pattern: { op_hcompute_corrected_stencil_9[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[1, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 45] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 34] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144;
  return 0;
}

inline hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177_select(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177 read pattern: { op_hcompute_corrected_stencil_9[root = 0, corrected_s0_y_yio, corrected_s0_x_x] -> demosaicked_1_stencil[2, 1 + 2corrected_s0_y_yio, 1 + 2corrected_s0_x_x] : 0 <= corrected_s0_y_yio <= 95 and 0 <= corrected_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_corrected_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 45] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_demosaicked_1_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 35] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142 = demosaicked_1_stencil.demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_to_demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177.peek(/* one reader or all rams */ 0);
  return value_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142;
  return 0;
}

// # of bundles = 24
// op_hcompute_corrected_stencil_10_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_10_211_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_10_212_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_10_213_res);
	return result;
}

// op_hcompute_corrected_stencil_11_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_11_207_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_11_208_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_11_209_res);
	return result;
}

// op_hcompute_corrected_stencil_1_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_215_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_216_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_1_217_res);
	return result;
}

// op_hcompute_corrected_stencil_2_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_203_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_204_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_2_205_res);
	return result;
}

// op_hcompute_corrected_stencil_3_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_3_199_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_3_200_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_3_201_res);
	return result;
}

// op_hcompute_corrected_stencil_4_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_4_195_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_4_196_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_4_197_res);
	return result;
}

// op_hcompute_corrected_stencil_5_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_5_191_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_5_192_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_5_193_res);
	return result;
}

// op_hcompute_corrected_stencil_6_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_6_187_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_6_188_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_6_189_res);
	return result;
}

// op_hcompute_corrected_stencil_7_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_7_183_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_7_184_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_7_185_res);
	return result;
}

// op_hcompute_corrected_stencil_8_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_8_179_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_8_180_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_8_181_res);
	return result;
}

// op_hcompute_corrected_stencil_9_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_9_175_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_9_176_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_9_177_res);
	return result;
}

// op_hcompute_corrected_stencil_read
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_219
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_220
//	demosaicked_1_stencil_op_hcompute_corrected_stencil_221
inline hw_uint<48> demosaicked_1_stencil_op_hcompute_corrected_stencil_read_bundle_read(demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_219
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_220
    // demosaicked_1_stencil_op_hcompute_corrected_stencil_221

	hw_uint<48> result;
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_219_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_219_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<0, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_219_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_220_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_220_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<16, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_220_res);
	hw_uint<16> demosaicked_1_stencil_op_hcompute_corrected_stencil_221_res = demosaicked_1_stencil_op_hcompute_corrected_stencil_221_select(demosaicked_1_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, dynamic_address);
	set_at<32, 48>(result, demosaicked_1_stencil_op_hcompute_corrected_stencil_221_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_10_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_10_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_res = op_hcompute_demosaicked_1_stencil_10_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_144_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_11_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_11_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_res = op_hcompute_demosaicked_1_stencil_11_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_142_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_1_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_1_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_res = op_hcompute_demosaicked_1_stencil_1_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_146_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_2_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_2_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_res = op_hcompute_demosaicked_1_stencil_2_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_140_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_3_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_3_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_res = op_hcompute_demosaicked_1_stencil_3_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_138_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_4_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_4_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_res = op_hcompute_demosaicked_1_stencil_4_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_136_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_5_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_5_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_res = op_hcompute_demosaicked_1_stencil_5_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_134_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_6_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_6_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_res = op_hcompute_demosaicked_1_stencil_6_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_132_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_7_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_7_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_res = op_hcompute_demosaicked_1_stencil_7_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_130_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_8_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_8_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_res = op_hcompute_demosaicked_1_stencil_8_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_128_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_9_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_9_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_res = op_hcompute_demosaicked_1_stencil_9_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_126_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

// op_hcompute_demosaicked_1_stencil_write
//	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148
inline void demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_demosaicked_1_stencil_write, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
	hw_uint<16> demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_res = op_hcompute_demosaicked_1_stencil_write.extract<0, 15>();
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_148_res, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
}

struct denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_to_denoised_1_stencil_op_hcompute_b_b_stencil_245_cache {
	// RAM Box: {[1, 193], [2, 258]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_to_denoised_1_stencil_op_hcompute_g_gb_stencil_96_cache {
	// RAM Box: {[1, 195], [1, 259]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoised_1_stencil_op_hcompute_denoised_1_stencil_120_to_denoised_1_stencil_op_hcompute_g_gr_stencil_94_cache {
	// RAM Box: {[0, 194], [0, 258]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_to_denoised_1_stencil_op_hcompute_r_r_stencil_1_cache {
	// RAM Box: {[2, 194], [1, 257]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoised_1_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_b_stencil[root = 0, b_b_s0_y, b_b_s0_x] -> denoised_1_stencil[3 + 2b_b_s0_y, 2 + 2b_b_s0_x] : -1 <= b_b_s0_y <= 95 and 0 <= b_b_s0_x <= 128 }
    // { op_hcompute_g_gb_stencil[root = 0, g_gb_s0_y, g_gb_s0_x] -> denoised_1_stencil[3 + 2g_gb_s0_y, 3 + 2g_gb_s0_x] : -1 <= g_gb_s0_y <= 96 and -1 <= g_gb_s0_x <= 128 }
    // { op_hcompute_g_gr_stencil[root = 0, g_gr_s0_y, g_gr_s0_x] -> denoised_1_stencil[2 + 2g_gr_s0_y, 2 + 2g_gr_s0_x] : -1 <= g_gr_s0_y <= 96 and -1 <= g_gr_s0_x <= 128 }
    // { op_hcompute_r_r_stencil[root = 0, r_r_s0_y, r_r_s0_x] -> denoised_1_stencil[2 + 2r_r_s0_y, 3 + 2r_r_s0_x] : 0 <= r_r_s0_y <= 96 and -1 <= r_r_s0_x <= 127 }
  // # of banks: 4
  denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_to_denoised_1_stencil_op_hcompute_b_b_stencil_245_cache denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_to_denoised_1_stencil_op_hcompute_b_b_stencil_245;
  denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_to_denoised_1_stencil_op_hcompute_g_gb_stencil_96_cache denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_to_denoised_1_stencil_op_hcompute_g_gb_stencil_96;
  denoised_1_stencil_op_hcompute_denoised_1_stencil_120_to_denoised_1_stencil_op_hcompute_g_gr_stencil_94_cache denoised_1_stencil_op_hcompute_denoised_1_stencil_120_to_denoised_1_stencil_op_hcompute_g_gr_stencil_94;
  denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_to_denoised_1_stencil_op_hcompute_r_r_stencil_1_cache denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_to_denoised_1_stencil_op_hcompute_r_r_stencil_1;
};



inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_120_write(hw_uint<16>& denoised_1_stencil_op_hcompute_denoised_1_stencil_120, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_120_to_denoised_1_stencil_op_hcompute_g_gr_stencil_94.push(denoised_1_stencil_op_hcompute_denoised_1_stencil_120);
}

inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_write(hw_uint<16>& denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_to_denoised_1_stencil_op_hcompute_b_b_stencil_245.push(denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114);
}

inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_write(hw_uint<16>& denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_to_denoised_1_stencil_op_hcompute_r_r_stencil_1.push(denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108);
}

inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_write(hw_uint<16>& denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_to_denoised_1_stencil_op_hcompute_g_gb_stencil_96.push(denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102);
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_b_b_stencil_245_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int b_b_s0_y, int b_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoised_1_stencil_op_hcompute_b_b_stencil_245 read pattern: { op_hcompute_b_b_stencil[root = 0, b_b_s0_y, b_b_s0_x] -> denoised_1_stencil[3 + 2b_b_s0_y, 2 + 2b_b_s0_x] : -1 <= b_b_s0_y <= 95 and 0 <= b_b_s0_x <= 128 }
  // Read schedule : { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  // Write schedule: { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_to_denoised_1_stencil_op_hcompute_b_b_stencil_245.peek(/* one reader or all rams */ 0);
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gb_stencil_96_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gb_s0_y, int g_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoised_1_stencil_op_hcompute_g_gb_stencil_96 read pattern: { op_hcompute_g_gb_stencil[root = 0, g_gb_s0_y, g_gb_s0_x] -> denoised_1_stencil[3 + 2g_gb_s0_y, 3 + 2g_gb_s0_x] : -1 <= g_gb_s0_y <= 96 and -1 <= g_gb_s0_x <= 128 }
  // Read schedule : { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  // Write schedule: { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_to_denoised_1_stencil_op_hcompute_g_gb_stencil_96.peek(/* one reader or all rams */ 0);
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gr_stencil_94_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gr_s0_y, int g_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoised_1_stencil_op_hcompute_g_gr_stencil_94 read pattern: { op_hcompute_g_gr_stencil[root = 0, g_gr_s0_y, g_gr_s0_x] -> denoised_1_stencil[2 + 2g_gr_s0_y, 2 + 2g_gr_s0_x] : -1 <= g_gr_s0_y <= 96 and -1 <= g_gr_s0_x <= 128 }
  // Read schedule : { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  // Write schedule: { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_120 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_120_to_denoised_1_stencil_op_hcompute_g_gr_stencil_94.peek(/* one reader or all rams */ 0);
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_120;
  return 0;
}

inline hw_uint<16> denoised_1_stencil_op_hcompute_r_r_stencil_1_select(denoised_1_stencil_cache& denoised_1_stencil, int root, int r_r_s0_y, int r_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoised_1_stencil_op_hcompute_r_r_stencil_1 read pattern: { op_hcompute_r_r_stencil[root = 0, r_r_s0_y, r_r_s0_x] -> denoised_1_stencil[2 + 2r_r_s0_y, 3 + 2r_r_s0_x] : 0 <= r_r_s0_y <= 96 and -1 <= r_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  // Write schedule: { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  auto value_denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108 = denoised_1_stencil.denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_to_denoised_1_stencil_op_hcompute_r_r_stencil_1.peek(/* one reader or all rams */ 0);
  return value_denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108;
  return 0;
}

// # of bundles = 8
// op_hcompute_b_b_stencil_read
//	denoised_1_stencil_op_hcompute_b_b_stencil_245
inline hw_uint<16> denoised_1_stencil_op_hcompute_b_b_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int b_b_s0_y, int b_b_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_b_b_stencil_245

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_b_b_stencil_245_res = denoised_1_stencil_op_hcompute_b_b_stencil_245_select(denoised_1_stencil, root, b_b_s0_y, b_b_s0_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_b_b_stencil_245_res);
	return result;
}

// op_hcompute_denoised_1_stencil_1_write
//	denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114
inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_denoised_1_stencil_1_write, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
	hw_uint<16> denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_res = op_hcompute_denoised_1_stencil_1_write.extract<0, 15>();
	denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_1_114_res, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
}

// op_hcompute_denoised_1_stencil_2_write
//	denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108
inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_denoised_1_stencil_2_write, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
	hw_uint<16> denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_res = op_hcompute_denoised_1_stencil_2_write.extract<0, 15>();
	denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_2_108_res, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
}

// op_hcompute_denoised_1_stencil_3_write
//	denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102
inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_denoised_1_stencil_3_write, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
	hw_uint<16> denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_res = op_hcompute_denoised_1_stencil_3_write.extract<0, 15>();
	denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_3_102_res, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
}

// op_hcompute_denoised_1_stencil_write
//	denoised_1_stencil_op_hcompute_denoised_1_stencil_120
inline void denoised_1_stencil_op_hcompute_denoised_1_stencil_write_bundle_write(hw_uint<16>& op_hcompute_denoised_1_stencil_write, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
	hw_uint<16> denoised_1_stencil_op_hcompute_denoised_1_stencil_120_res = op_hcompute_denoised_1_stencil_write.extract<0, 15>();
	denoised_1_stencil_op_hcompute_denoised_1_stencil_120_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_120_res, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
}

// op_hcompute_g_gb_stencil_read
//	denoised_1_stencil_op_hcompute_g_gb_stencil_96
inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gb_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gb_s0_y, int g_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_g_gb_stencil_96

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_g_gb_stencil_96_res = denoised_1_stencil_op_hcompute_g_gb_stencil_96_select(denoised_1_stencil, root, g_gb_s0_y, g_gb_s0_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_g_gb_stencil_96_res);
	return result;
}

// op_hcompute_g_gr_stencil_read
//	denoised_1_stencil_op_hcompute_g_gr_stencil_94
inline hw_uint<16> denoised_1_stencil_op_hcompute_g_gr_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int g_gr_s0_y, int g_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_g_gr_stencil_94

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_g_gr_stencil_94_res = denoised_1_stencil_op_hcompute_g_gr_stencil_94_select(denoised_1_stencil, root, g_gr_s0_y, g_gr_s0_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_g_gr_stencil_94_res);
	return result;
}

// op_hcompute_r_r_stencil_read
//	denoised_1_stencil_op_hcompute_r_r_stencil_1
inline hw_uint<16> denoised_1_stencil_op_hcompute_r_r_stencil_read_bundle_read(denoised_1_stencil_cache& denoised_1_stencil, int root, int r_r_s0_y, int r_r_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // denoised_1_stencil_op_hcompute_r_r_stencil_1

	hw_uint<16> result;
	hw_uint<16> denoised_1_stencil_op_hcompute_r_r_stencil_1_res = denoised_1_stencil_op_hcompute_r_r_stencil_1_select(denoised_1_stencil, root, r_r_s0_y, r_r_s0_x, dynamic_address);
	set_at<0, 16>(result, denoised_1_stencil_op_hcompute_r_r_stencil_1_res);
	return result;
}

struct g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10_cache {
	// RAM Box: {[0, 96], [0, 128]}
	// Capacity: 131
	// # of read delays: 4
  // 0, 1, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}

	inline hw_uint<16> peek_130() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct g_b_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> g_b_stencil[1 + b_gb_s0_y, b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
    // { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> g_b_stencil[1 + b_gb_s0_y, 1 + b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
    // { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> g_b_stencil[1 + b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
    // { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> g_b_stencil[b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[1 + b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[1 + b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_demosaicked_1_stencil_4[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_b_stencil[1 + demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_b_stencil[1 + r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // # of banks: 1
  g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10_cache g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10;
};



inline void g_b_stencil_op_hcompute_g_b_stencil_97_write(hw_uint<16>& g_b_stencil_op_hcompute_g_b_stencil_97, g_b_stencil_cache& g_b_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
  g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.push(g_b_stencil_op_hcompute_g_b_stencil_97);
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_gb_stencil_241_select(g_b_stencil_cache& g_b_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_gb_stencil_241 read pattern: { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> g_b_stencil[1 + b_gb_s0_y, b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_1();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_gb_stencil_242_select(g_b_stencil_cache& g_b_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_gb_stencil_242 read pattern: { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> g_b_stencil[1 + b_gb_s0_y, 1 + b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_0();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_gr_stencil_235_select(g_b_stencil_cache& g_b_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_gr_stencil_235 read pattern: { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> g_b_stencil[1 + b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_0();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_gr_stencil_236_select(g_b_stencil_cache& g_b_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_gr_stencil_236 read pattern: { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> g_b_stencil[b_gr_s0_y, b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_129();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_227_select(g_b_stencil_cache& g_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_r_stencil_227 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[1 + b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_1();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_228_select(g_b_stencil_cache& g_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_r_stencil_228 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_129();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_229_select(g_b_stencil_cache& g_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_r_stencil_229 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[1 + b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_0();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_230_select(g_b_stencil_cache& g_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_b_r_stencil_230 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_b_stencil[b_r_s0_y, b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_130();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137_select(g_b_stencil_cache& g_b_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137 read pattern: { op_hcompute_demosaicked_1_stencil_4[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_b_stencil[1 + demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 28] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_1();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

inline hw_uint<16> g_b_stencil_op_hcompute_r_b_stencil_15_select(g_b_stencil_cache& g_b_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_b_stencil_op_hcompute_r_b_stencil_15 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_b_stencil[1 + r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  auto value_g_b_stencil_op_hcompute_g_b_stencil_97 = g_b_stencil.g_b_stencil_op_hcompute_g_b_stencil_97_merged_banks_10.peek_1();
  return value_g_b_stencil_op_hcompute_g_b_stencil_97;
  return 0;
}

// # of bundles = 6
// op_hcompute_b_gb_stencil_read
//	g_b_stencil_op_hcompute_b_gb_stencil_241
//	g_b_stencil_op_hcompute_b_gb_stencil_242
inline hw_uint<32> g_b_stencil_op_hcompute_b_gb_stencil_read_bundle_read(g_b_stencil_cache& g_b_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_b_stencil_op_hcompute_b_gb_stencil_241
    // g_b_stencil_op_hcompute_b_gb_stencil_242

	hw_uint<32> result;
	hw_uint<16> g_b_stencil_op_hcompute_b_gb_stencil_241_res = g_b_stencil_op_hcompute_b_gb_stencil_241_select(g_b_stencil, root, b_gb_s0_y, b_gb_s0_x, dynamic_address);
	set_at<0, 32>(result, g_b_stencil_op_hcompute_b_gb_stencil_241_res);
	hw_uint<16> g_b_stencil_op_hcompute_b_gb_stencil_242_res = g_b_stencil_op_hcompute_b_gb_stencil_242_select(g_b_stencil, root, b_gb_s0_y, b_gb_s0_x, dynamic_address);
	set_at<16, 32>(result, g_b_stencil_op_hcompute_b_gb_stencil_242_res);
	return result;
}

// op_hcompute_b_gr_stencil_read
//	g_b_stencil_op_hcompute_b_gr_stencil_235
//	g_b_stencil_op_hcompute_b_gr_stencil_236
inline hw_uint<32> g_b_stencil_op_hcompute_b_gr_stencil_read_bundle_read(g_b_stencil_cache& g_b_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_b_stencil_op_hcompute_b_gr_stencil_235
    // g_b_stencil_op_hcompute_b_gr_stencil_236

	hw_uint<32> result;
	hw_uint<16> g_b_stencil_op_hcompute_b_gr_stencil_235_res = g_b_stencil_op_hcompute_b_gr_stencil_235_select(g_b_stencil, root, b_gr_s0_y, b_gr_s0_x, dynamic_address);
	set_at<0, 32>(result, g_b_stencil_op_hcompute_b_gr_stencil_235_res);
	hw_uint<16> g_b_stencil_op_hcompute_b_gr_stencil_236_res = g_b_stencil_op_hcompute_b_gr_stencil_236_select(g_b_stencil, root, b_gr_s0_y, b_gr_s0_x, dynamic_address);
	set_at<16, 32>(result, g_b_stencil_op_hcompute_b_gr_stencil_236_res);
	return result;
}

// op_hcompute_b_r_stencil_read
//	g_b_stencil_op_hcompute_b_r_stencil_227
//	g_b_stencil_op_hcompute_b_r_stencil_228
//	g_b_stencil_op_hcompute_b_r_stencil_229
//	g_b_stencil_op_hcompute_b_r_stencil_230
inline hw_uint<64> g_b_stencil_op_hcompute_b_r_stencil_read_bundle_read(g_b_stencil_cache& g_b_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
  // # of ports in bundle: 4
    // g_b_stencil_op_hcompute_b_r_stencil_227
    // g_b_stencil_op_hcompute_b_r_stencil_228
    // g_b_stencil_op_hcompute_b_r_stencil_229
    // g_b_stencil_op_hcompute_b_r_stencil_230

	hw_uint<64> result;
	hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_227_res = g_b_stencil_op_hcompute_b_r_stencil_227_select(g_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<0, 64>(result, g_b_stencil_op_hcompute_b_r_stencil_227_res);
	hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_228_res = g_b_stencil_op_hcompute_b_r_stencil_228_select(g_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<16, 64>(result, g_b_stencil_op_hcompute_b_r_stencil_228_res);
	hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_229_res = g_b_stencil_op_hcompute_b_r_stencil_229_select(g_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<32, 64>(result, g_b_stencil_op_hcompute_b_r_stencil_229_res);
	hw_uint<16> g_b_stencil_op_hcompute_b_r_stencil_230_res = g_b_stencil_op_hcompute_b_r_stencil_230_select(g_b_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<48, 64>(result, g_b_stencil_op_hcompute_b_r_stencil_230_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_4_read
//	g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137
inline hw_uint<16> g_b_stencil_op_hcompute_demosaicked_1_stencil_4_read_bundle_read(g_b_stencil_cache& g_b_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137

	hw_uint<16> result;
	hw_uint<16> g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137_res = g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137_select(g_b_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, g_b_stencil_op_hcompute_demosaicked_1_stencil_4_137_res);
	return result;
}

// op_hcompute_g_b_stencil_write
//	g_b_stencil_op_hcompute_g_b_stencil_97
inline void g_b_stencil_op_hcompute_g_b_stencil_write_bundle_write(hw_uint<16>& op_hcompute_g_b_stencil_write, g_b_stencil_cache& g_b_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
	hw_uint<16> g_b_stencil_op_hcompute_g_b_stencil_97_res = op_hcompute_g_b_stencil_write.extract<0, 15>();
	g_b_stencil_op_hcompute_g_b_stencil_97_write(g_b_stencil_op_hcompute_g_b_stencil_97_res, g_b_stencil, root, g_b_s0_y, g_b_s0_x, dynamic_address);
}

// op_hcompute_r_b_stencil_read
//	g_b_stencil_op_hcompute_r_b_stencil_15
inline hw_uint<16> g_b_stencil_op_hcompute_r_b_stencil_read_bundle_read(g_b_stencil_cache& g_b_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_b_stencil_op_hcompute_r_b_stencil_15

	hw_uint<16> result;
	hw_uint<16> g_b_stencil_op_hcompute_r_b_stencil_15_res = g_b_stencil_op_hcompute_r_b_stencil_15_select(g_b_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<0, 16>(result, g_b_stencil_op_hcompute_r_b_stencil_15_res);
	return result;
}

struct g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7_cache {
	// RAM Box: {[0, 97], [0, 128]}
	// Capacity: 132
	// # of read delays: 4
  // 0, 1, 130, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 128> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_129() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_130() {
		return f4;
	}

	inline hw_uint<16> peek_131() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 128
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 128 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct g_gb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> g_gb_stencil[1 + b_gb_s0_y, 1 + b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
    // { op_hcompute_demosaicked_1_stencil_10[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_gb_stencil[1 + demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
    // { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gb_stencil[1 + g_b_s0_y, g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
    // { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gb_stencil[1 + g_b_s0_y, 1 + g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
    // { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gb_stencil[g_r_s0_y, 1 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
    // { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gb_stencil[1 + g_r_s0_y, 1 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
    // { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> g_gb_stencil[1 + r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
  // # of banks: 1
  g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7_cache g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7;
};



inline void g_gb_stencil_op_hcompute_g_gb_stencil_95_write(hw_uint<16>& g_gb_stencil_op_hcompute_g_gb_stencil_95, g_gb_stencil_cache& g_gb_stencil, int root, int g_gb_s0_y, int g_gb_s0_x, int dynamic_address) {
  g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.push(g_gb_stencil_op_hcompute_g_gb_stencil_95);
}

inline hw_uint<16> g_gb_stencil_op_hcompute_b_gb_stencil_243_select(g_gb_stencil_cache& g_gb_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_b_gb_stencil_243 read pattern: { op_hcompute_b_gb_stencil[root = 0, b_gb_s0_y, b_gb_s0_x] -> g_gb_stencil[1 + b_gb_s0_y, 1 + b_gb_s0_x] : 0 <= b_gb_s0_y <= 95 and 0 <= b_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_131();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145_select(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145 read pattern: { op_hcompute_demosaicked_1_stencil_10[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_gb_stencil[1 + demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 34] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_131();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_g_b_stencil_98_select(g_gb_stencil_cache& g_gb_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_g_b_stencil_98 read pattern: { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gb_stencil[1 + g_b_s0_y, g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
  // Read schedule : { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_131();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_g_b_stencil_99_select(g_gb_stencil_cache& g_gb_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_g_b_stencil_99 read pattern: { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gb_stencil[1 + g_b_s0_y, 1 + g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
  // Read schedule : { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_130();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_g_r_stencil_89_select(g_gb_stencil_cache& g_gb_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_g_r_stencil_89 read pattern: { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gb_stencil[g_r_s0_y, 1 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_131();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_g_r_stencil_90_select(g_gb_stencil_cache& g_gb_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_g_r_stencil_90 read pattern: { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gb_stencil[1 + g_r_s0_y, 1 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_1();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

inline hw_uint<16> g_gb_stencil_op_hcompute_r_gb_stencil_9_select(g_gb_stencil_cache& g_gb_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gb_stencil_op_hcompute_r_gb_stencil_9 read pattern: { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> g_gb_stencil[1 + r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gb_stencil_op_hcompute_g_gb_stencil_95 = g_gb_stencil.g_gb_stencil_op_hcompute_g_gb_stencil_95_merged_banks_7.peek_131();
  return value_g_gb_stencil_op_hcompute_g_gb_stencil_95;
  return 0;
}

// # of bundles = 6
// op_hcompute_b_gb_stencil_read
//	g_gb_stencil_op_hcompute_b_gb_stencil_243
inline hw_uint<16> g_gb_stencil_op_hcompute_b_gb_stencil_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int b_gb_s0_y, int b_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_gb_stencil_op_hcompute_b_gb_stencil_243

	hw_uint<16> result;
	hw_uint<16> g_gb_stencil_op_hcompute_b_gb_stencil_243_res = g_gb_stencil_op_hcompute_b_gb_stencil_243_select(g_gb_stencil, root, b_gb_s0_y, b_gb_s0_x, dynamic_address);
	set_at<0, 16>(result, g_gb_stencil_op_hcompute_b_gb_stencil_243_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_10_read
//	g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145
inline hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145

	hw_uint<16> result;
	hw_uint<16> g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145_res = g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145_select(g_gb_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_145_res);
	return result;
}

// op_hcompute_g_b_stencil_read
//	g_gb_stencil_op_hcompute_g_b_stencil_98
//	g_gb_stencil_op_hcompute_g_b_stencil_99
inline hw_uint<32> g_gb_stencil_op_hcompute_g_b_stencil_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_gb_stencil_op_hcompute_g_b_stencil_98
    // g_gb_stencil_op_hcompute_g_b_stencil_99

	hw_uint<32> result;
	hw_uint<16> g_gb_stencil_op_hcompute_g_b_stencil_98_res = g_gb_stencil_op_hcompute_g_b_stencil_98_select(g_gb_stencil, root, g_b_s0_y, g_b_s0_x, dynamic_address);
	set_at<0, 32>(result, g_gb_stencil_op_hcompute_g_b_stencil_98_res);
	hw_uint<16> g_gb_stencil_op_hcompute_g_b_stencil_99_res = g_gb_stencil_op_hcompute_g_b_stencil_99_select(g_gb_stencil, root, g_b_s0_y, g_b_s0_x, dynamic_address);
	set_at<16, 32>(result, g_gb_stencil_op_hcompute_g_b_stencil_99_res);
	return result;
}

// op_hcompute_g_gb_stencil_write
//	g_gb_stencil_op_hcompute_g_gb_stencil_95
inline void g_gb_stencil_op_hcompute_g_gb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_g_gb_stencil_write, g_gb_stencil_cache& g_gb_stencil, int root, int g_gb_s0_y, int g_gb_s0_x, int dynamic_address) {
	hw_uint<16> g_gb_stencil_op_hcompute_g_gb_stencil_95_res = op_hcompute_g_gb_stencil_write.extract<0, 15>();
	g_gb_stencil_op_hcompute_g_gb_stencil_95_write(g_gb_stencil_op_hcompute_g_gb_stencil_95_res, g_gb_stencil, root, g_gb_s0_y, g_gb_s0_x, dynamic_address);
}

// op_hcompute_g_r_stencil_read
//	g_gb_stencil_op_hcompute_g_r_stencil_89
//	g_gb_stencil_op_hcompute_g_r_stencil_90
inline hw_uint<32> g_gb_stencil_op_hcompute_g_r_stencil_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_gb_stencil_op_hcompute_g_r_stencil_89
    // g_gb_stencil_op_hcompute_g_r_stencil_90

	hw_uint<32> result;
	hw_uint<16> g_gb_stencil_op_hcompute_g_r_stencil_89_res = g_gb_stencil_op_hcompute_g_r_stencil_89_select(g_gb_stencil, root, g_r_s0_y, g_r_s0_x, dynamic_address);
	set_at<0, 32>(result, g_gb_stencil_op_hcompute_g_r_stencil_89_res);
	hw_uint<16> g_gb_stencil_op_hcompute_g_r_stencil_90_res = g_gb_stencil_op_hcompute_g_r_stencil_90_select(g_gb_stencil, root, g_r_s0_y, g_r_s0_x, dynamic_address);
	set_at<16, 32>(result, g_gb_stencil_op_hcompute_g_r_stencil_90_res);
	return result;
}

// op_hcompute_r_gb_stencil_read
//	g_gb_stencil_op_hcompute_r_gb_stencil_9
inline hw_uint<16> g_gb_stencil_op_hcompute_r_gb_stencil_read_bundle_read(g_gb_stencil_cache& g_gb_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_gb_stencil_op_hcompute_r_gb_stencil_9

	hw_uint<16> result;
	hw_uint<16> g_gb_stencil_op_hcompute_r_gb_stencil_9_res = g_gb_stencil_op_hcompute_r_gb_stencil_9_select(g_gb_stencil, root, r_gb_s0_y, r_gb_s0_x, dynamic_address);
	set_at<0, 16>(result, g_gb_stencil_op_hcompute_r_gb_stencil_9_res);
	return result;
}

struct g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7_cache {
	// RAM Box: {[0, 97], [1, 129]}
	// Capacity: 132
	// # of read delays: 4
  // 0, 1, 130, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 128> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_129() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_130() {
		return f4;
	}

	inline hw_uint<16> peek_131() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 128
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 128 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct g_gr_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> g_gr_stencil[1 + b_gr_s0_y, 1 + b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
    // { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_gr_stencil[1 + demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
    // { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gr_stencil[2 + g_b_s0_y, 1 + g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
    // { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gr_stencil[1 + g_b_s0_y, 1 + g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
    // { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gr_stencil[1 + g_r_s0_y, 2 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
    // { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gr_stencil[1 + g_r_s0_y, 1 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
    // { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> g_gr_stencil[1 + r_gr_s0_y, 1 + r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // # of banks: 1
  g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7_cache g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7;
};



inline void g_gr_stencil_op_hcompute_g_gr_stencil_93_write(hw_uint<16>& g_gr_stencil_op_hcompute_g_gr_stencil_93, g_gr_stencil_cache& g_gr_stencil, int root, int g_gr_s0_y, int g_gr_s0_x, int dynamic_address) {
  g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.push(g_gr_stencil_op_hcompute_g_gr_stencil_93);
}

inline hw_uint<16> g_gr_stencil_op_hcompute_b_gr_stencil_237_select(g_gr_stencil_cache& g_gr_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_b_gr_stencil_237 read pattern: { op_hcompute_b_gr_stencil[root = 0, b_gr_s0_y, b_gr_s0_x] -> g_gr_stencil[1 + b_gr_s0_y, 1 + b_gr_s0_x] : 0 <= b_gr_s0_y <= 95 and 0 <= b_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_130();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147_select(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147 read pattern: { op_hcompute_demosaicked_1_stencil_1[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_gr_stencil[1 + demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 25] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_131();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_g_b_stencil_100_select(g_gr_stencil_cache& g_gr_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_g_b_stencil_100 read pattern: { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gr_stencil[2 + g_b_s0_y, 1 + g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
  // Read schedule : { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_0();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_g_b_stencil_101_select(g_gr_stencil_cache& g_gr_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_g_b_stencil_101 read pattern: { op_hcompute_g_b_stencil[root = 0, g_b_s0_y, g_b_s0_x] -> g_gr_stencil[1 + g_b_s0_y, 1 + g_b_s0_x] : -1 <= g_b_s0_y <= 95 and 0 <= g_b_s0_x <= 128 }
  // Read schedule : { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_130();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_g_r_stencil_91_select(g_gr_stencil_cache& g_gr_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_g_r_stencil_91 read pattern: { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gr_stencil[1 + g_r_s0_y, 2 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_0();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_g_r_stencil_92_select(g_gr_stencil_cache& g_gr_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_g_r_stencil_92 read pattern: { op_hcompute_g_r_stencil[root = 0, g_r_s0_y, g_r_s0_x] -> g_gr_stencil[1 + g_r_s0_y, 1 + g_r_s0_x] : 0 <= g_r_s0_y <= 96 and -1 <= g_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_1();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

inline hw_uint<16> g_gr_stencil_op_hcompute_r_gr_stencil_3_select(g_gr_stencil_cache& g_gr_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_gr_stencil_op_hcompute_r_gr_stencil_3 read pattern: { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> g_gr_stencil[1 + r_gr_s0_y, 1 + r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
  auto value_g_gr_stencil_op_hcompute_g_gr_stencil_93 = g_gr_stencil.g_gr_stencil_op_hcompute_g_gr_stencil_93_merged_banks_7.peek_1();
  return value_g_gr_stencil_op_hcompute_g_gr_stencil_93;
  return 0;
}

// # of bundles = 6
// op_hcompute_b_gr_stencil_read
//	g_gr_stencil_op_hcompute_b_gr_stencil_237
inline hw_uint<16> g_gr_stencil_op_hcompute_b_gr_stencil_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int b_gr_s0_y, int b_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_gr_stencil_op_hcompute_b_gr_stencil_237

	hw_uint<16> result;
	hw_uint<16> g_gr_stencil_op_hcompute_b_gr_stencil_237_res = g_gr_stencil_op_hcompute_b_gr_stencil_237_select(g_gr_stencil, root, b_gr_s0_y, b_gr_s0_x, dynamic_address);
	set_at<0, 16>(result, g_gr_stencil_op_hcompute_b_gr_stencil_237_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_1_read
//	g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147
inline hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147

	hw_uint<16> result;
	hw_uint<16> g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147_res = g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147_select(g_gr_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_147_res);
	return result;
}

// op_hcompute_g_b_stencil_read
//	g_gr_stencil_op_hcompute_g_b_stencil_100
//	g_gr_stencil_op_hcompute_g_b_stencil_101
inline hw_uint<32> g_gr_stencil_op_hcompute_g_b_stencil_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int g_b_s0_y, int g_b_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_gr_stencil_op_hcompute_g_b_stencil_100
    // g_gr_stencil_op_hcompute_g_b_stencil_101

	hw_uint<32> result;
	hw_uint<16> g_gr_stencil_op_hcompute_g_b_stencil_100_res = g_gr_stencil_op_hcompute_g_b_stencil_100_select(g_gr_stencil, root, g_b_s0_y, g_b_s0_x, dynamic_address);
	set_at<0, 32>(result, g_gr_stencil_op_hcompute_g_b_stencil_100_res);
	hw_uint<16> g_gr_stencil_op_hcompute_g_b_stencil_101_res = g_gr_stencil_op_hcompute_g_b_stencil_101_select(g_gr_stencil, root, g_b_s0_y, g_b_s0_x, dynamic_address);
	set_at<16, 32>(result, g_gr_stencil_op_hcompute_g_b_stencil_101_res);
	return result;
}

// op_hcompute_g_gr_stencil_write
//	g_gr_stencil_op_hcompute_g_gr_stencil_93
inline void g_gr_stencil_op_hcompute_g_gr_stencil_write_bundle_write(hw_uint<16>& op_hcompute_g_gr_stencil_write, g_gr_stencil_cache& g_gr_stencil, int root, int g_gr_s0_y, int g_gr_s0_x, int dynamic_address) {
	hw_uint<16> g_gr_stencil_op_hcompute_g_gr_stencil_93_res = op_hcompute_g_gr_stencil_write.extract<0, 15>();
	g_gr_stencil_op_hcompute_g_gr_stencil_93_write(g_gr_stencil_op_hcompute_g_gr_stencil_93_res, g_gr_stencil, root, g_gr_s0_y, g_gr_s0_x, dynamic_address);
}

// op_hcompute_g_r_stencil_read
//	g_gr_stencil_op_hcompute_g_r_stencil_91
//	g_gr_stencil_op_hcompute_g_r_stencil_92
inline hw_uint<32> g_gr_stencil_op_hcompute_g_r_stencil_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_gr_stencil_op_hcompute_g_r_stencil_91
    // g_gr_stencil_op_hcompute_g_r_stencil_92

	hw_uint<32> result;
	hw_uint<16> g_gr_stencil_op_hcompute_g_r_stencil_91_res = g_gr_stencil_op_hcompute_g_r_stencil_91_select(g_gr_stencil, root, g_r_s0_y, g_r_s0_x, dynamic_address);
	set_at<0, 32>(result, g_gr_stencil_op_hcompute_g_r_stencil_91_res);
	hw_uint<16> g_gr_stencil_op_hcompute_g_r_stencil_92_res = g_gr_stencil_op_hcompute_g_r_stencil_92_select(g_gr_stencil, root, g_r_s0_y, g_r_s0_x, dynamic_address);
	set_at<16, 32>(result, g_gr_stencil_op_hcompute_g_r_stencil_92_res);
	return result;
}

// op_hcompute_r_gr_stencil_read
//	g_gr_stencil_op_hcompute_r_gr_stencil_3
inline hw_uint<16> g_gr_stencil_op_hcompute_r_gr_stencil_read_bundle_read(g_gr_stencil_cache& g_gr_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_gr_stencil_op_hcompute_r_gr_stencil_3

	hw_uint<16> result;
	hw_uint<16> g_gr_stencil_op_hcompute_r_gr_stencil_3_res = g_gr_stencil_op_hcompute_r_gr_stencil_3_select(g_gr_stencil, root, r_gr_s0_y, r_gr_s0_x, dynamic_address);
	set_at<0, 16>(result, g_gr_stencil_op_hcompute_r_gr_stencil_3_res);
	return result;
}

struct g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10_cache {
	// RAM Box: {[0, 96], [0, 128]}
	// Capacity: 131
	// # of read delays: 4
  // 0, 1, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}

	inline hw_uint<16> peek_130() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct g_r_stencil_cache {
  // Reader addrs...
    // { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_r_stencil[b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
    // { op_hcompute_demosaicked_1_stencil_7[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_r_stencil[demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[1 + r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[1 + r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> g_r_stencil[r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
    // { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> g_r_stencil[1 + r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
    // { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> g_r_stencil[r_gr_s0_y, 1 + r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
    // { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> g_r_stencil[r_gr_s0_y, r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // # of banks: 1
  g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10_cache g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10;
};



inline void g_r_stencil_op_hcompute_g_r_stencil_88_write(hw_uint<16>& g_r_stencil_op_hcompute_g_r_stencil_88, g_r_stencil_cache& g_r_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
  g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.push(g_r_stencil_op_hcompute_g_r_stencil_88);
}

inline hw_uint<16> g_r_stencil_op_hcompute_b_r_stencil_231_select(g_r_stencil_cache& g_r_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_b_r_stencil_231 read pattern: { op_hcompute_b_r_stencil[root = 0, b_r_s0_y, b_r_s0_x] -> g_r_stencil[b_r_s0_y, 1 + b_r_s0_x] : 0 <= b_r_s0_y <= 95 and 0 <= b_r_s0_x <= 127 }
  // Read schedule : { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_129();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131_select(g_r_stencil_cache& g_r_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131 read pattern: { op_hcompute_demosaicked_1_stencil_7[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> g_r_stencil[demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 31] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_129();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_16_select(g_r_stencil_cache& g_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_b_stencil_16 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_129();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_17_select(g_r_stencil_cache& g_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_b_stencil_17 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[1 + r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_1();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_18_select(g_r_stencil_cache& g_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_b_stencil_18 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_130();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_19_select(g_r_stencil_cache& g_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_b_stencil_19 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> g_r_stencil[1 + r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_0();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_gb_stencil_10_select(g_r_stencil_cache& g_r_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_gb_stencil_10 read pattern: { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> g_r_stencil[r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_129();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_gb_stencil_11_select(g_r_stencil_cache& g_r_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_gb_stencil_11 read pattern: { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> g_r_stencil[1 + r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_0();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_gr_stencil_4_select(g_r_stencil_cache& g_r_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_gr_stencil_4 read pattern: { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> g_r_stencil[r_gr_s0_y, 1 + r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_0();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

inline hw_uint<16> g_r_stencil_op_hcompute_r_gr_stencil_5_select(g_r_stencil_cache& g_r_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // g_r_stencil_op_hcompute_r_gr_stencil_5 read pattern: { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> g_r_stencil[r_gr_s0_y, r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_g_r_stencil_op_hcompute_g_r_stencil_88 = g_r_stencil.g_r_stencil_op_hcompute_g_r_stencil_88_merged_banks_10.peek_1();
  return value_g_r_stencil_op_hcompute_g_r_stencil_88;
  return 0;
}

// # of bundles = 6
// op_hcompute_b_r_stencil_read
//	g_r_stencil_op_hcompute_b_r_stencil_231
inline hw_uint<16> g_r_stencil_op_hcompute_b_r_stencil_read_bundle_read(g_r_stencil_cache& g_r_stencil, int root, int b_r_s0_y, int b_r_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_r_stencil_op_hcompute_b_r_stencil_231

	hw_uint<16> result;
	hw_uint<16> g_r_stencil_op_hcompute_b_r_stencil_231_res = g_r_stencil_op_hcompute_b_r_stencil_231_select(g_r_stencil, root, b_r_s0_y, b_r_s0_x, dynamic_address);
	set_at<0, 16>(result, g_r_stencil_op_hcompute_b_r_stencil_231_res);
	return result;
}

// op_hcompute_demosaicked_1_stencil_7_read
//	g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131
inline hw_uint<16> g_r_stencil_op_hcompute_demosaicked_1_stencil_7_read_bundle_read(g_r_stencil_cache& g_r_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131

	hw_uint<16> result;
	hw_uint<16> g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131_res = g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131_select(g_r_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, g_r_stencil_op_hcompute_demosaicked_1_stencil_7_131_res);
	return result;
}

// op_hcompute_g_r_stencil_write
//	g_r_stencil_op_hcompute_g_r_stencil_88
inline void g_r_stencil_op_hcompute_g_r_stencil_write_bundle_write(hw_uint<16>& op_hcompute_g_r_stencil_write, g_r_stencil_cache& g_r_stencil, int root, int g_r_s0_y, int g_r_s0_x, int dynamic_address) {
	hw_uint<16> g_r_stencil_op_hcompute_g_r_stencil_88_res = op_hcompute_g_r_stencil_write.extract<0, 15>();
	g_r_stencil_op_hcompute_g_r_stencil_88_write(g_r_stencil_op_hcompute_g_r_stencil_88_res, g_r_stencil, root, g_r_s0_y, g_r_s0_x, dynamic_address);
}

// op_hcompute_r_b_stencil_read
//	g_r_stencil_op_hcompute_r_b_stencil_16
//	g_r_stencil_op_hcompute_r_b_stencil_17
//	g_r_stencil_op_hcompute_r_b_stencil_18
//	g_r_stencil_op_hcompute_r_b_stencil_19
inline hw_uint<64> g_r_stencil_op_hcompute_r_b_stencil_read_bundle_read(g_r_stencil_cache& g_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
  // # of ports in bundle: 4
    // g_r_stencil_op_hcompute_r_b_stencil_16
    // g_r_stencil_op_hcompute_r_b_stencil_17
    // g_r_stencil_op_hcompute_r_b_stencil_18
    // g_r_stencil_op_hcompute_r_b_stencil_19

	hw_uint<64> result;
	hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_16_res = g_r_stencil_op_hcompute_r_b_stencil_16_select(g_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<0, 64>(result, g_r_stencil_op_hcompute_r_b_stencil_16_res);
	hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_17_res = g_r_stencil_op_hcompute_r_b_stencil_17_select(g_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<16, 64>(result, g_r_stencil_op_hcompute_r_b_stencil_17_res);
	hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_18_res = g_r_stencil_op_hcompute_r_b_stencil_18_select(g_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<32, 64>(result, g_r_stencil_op_hcompute_r_b_stencil_18_res);
	hw_uint<16> g_r_stencil_op_hcompute_r_b_stencil_19_res = g_r_stencil_op_hcompute_r_b_stencil_19_select(g_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<48, 64>(result, g_r_stencil_op_hcompute_r_b_stencil_19_res);
	return result;
}

// op_hcompute_r_gb_stencil_read
//	g_r_stencil_op_hcompute_r_gb_stencil_10
//	g_r_stencil_op_hcompute_r_gb_stencil_11
inline hw_uint<32> g_r_stencil_op_hcompute_r_gb_stencil_read_bundle_read(g_r_stencil_cache& g_r_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_r_stencil_op_hcompute_r_gb_stencil_10
    // g_r_stencil_op_hcompute_r_gb_stencil_11

	hw_uint<32> result;
	hw_uint<16> g_r_stencil_op_hcompute_r_gb_stencil_10_res = g_r_stencil_op_hcompute_r_gb_stencil_10_select(g_r_stencil, root, r_gb_s0_y, r_gb_s0_x, dynamic_address);
	set_at<0, 32>(result, g_r_stencil_op_hcompute_r_gb_stencil_10_res);
	hw_uint<16> g_r_stencil_op_hcompute_r_gb_stencil_11_res = g_r_stencil_op_hcompute_r_gb_stencil_11_select(g_r_stencil, root, r_gb_s0_y, r_gb_s0_x, dynamic_address);
	set_at<16, 32>(result, g_r_stencil_op_hcompute_r_gb_stencil_11_res);
	return result;
}

// op_hcompute_r_gr_stencil_read
//	g_r_stencil_op_hcompute_r_gr_stencil_4
//	g_r_stencil_op_hcompute_r_gr_stencil_5
inline hw_uint<32> g_r_stencil_op_hcompute_r_gr_stencil_read_bundle_read(g_r_stencil_cache& g_r_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // g_r_stencil_op_hcompute_r_gr_stencil_4
    // g_r_stencil_op_hcompute_r_gr_stencil_5

	hw_uint<32> result;
	hw_uint<16> g_r_stencil_op_hcompute_r_gr_stencil_4_res = g_r_stencil_op_hcompute_r_gr_stencil_4_select(g_r_stencil, root, r_gr_s0_y, r_gr_s0_x, dynamic_address);
	set_at<0, 32>(result, g_r_stencil_op_hcompute_r_gr_stencil_4_res);
	hw_uint<16> g_r_stencil_op_hcompute_r_gr_stencil_5_res = g_r_stencil_op_hcompute_r_gr_stencil_5_select(g_r_stencil, root, r_gr_s0_y, r_gr_s0_x, dynamic_address);
	set_at<16, 32>(result, g_r_stencil_op_hcompute_r_gr_stencil_5_res);
	return result;
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77_cache {
	// RAM Box: {[1, 199], [0, 262]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75_cache {
	// RAM Box: {[0, 198], [1, 263]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73_cache {
	// RAM Box: {[1, 199], [1, 263]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79_cache {
	// RAM Box: {[0, 198], [0, 262]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_input_global_wrapper_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[1 + 2hw_input_global_wrapper_global_wrapper_s0_y_yio, 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[2hw_input_global_wrapper_global_wrapper_s0_y_yio, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[1 + 2hw_input_global_wrapper_global_wrapper_s0_y_yio, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[2hw_input_global_wrapper_global_wrapper_s0_y_yio, 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
  // # of banks: 4
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[1 + 2hw_input_global_wrapper_global_wrapper_s0_y_yio, 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[2hw_input_global_wrapper_global_wrapper_s0_y_yio, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 2] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[1 + 2hw_input_global_wrapper_global_wrapper_s0_y_yio, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[2hw_input_global_wrapper_global_wrapper_s0_y_yio, 2hw_input_global_wrapper_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 131 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86;
  return 0;
}

// # of bundles = 8
// op_hcompute_hw_input_global_wrapper_glb_stencil_1_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_1_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_res = op_hcompute_hw_input_global_wrapper_glb_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_84_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_2_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_2_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_res = op_hcompute_hw_input_global_wrapper_glb_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_82_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_3_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_3_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_res = op_hcompute_hw_input_global_wrapper_glb_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_80_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_86_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_77_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_75_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_73_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_79_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5_cache {
	// RAM Box: {[1, 199], [2, 260]}
	// Capacity: 266
	// # of read delays: 6
  // 0, 1, 132, 133, 134, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 130> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}

	inline hw_uint<16> peek_134() {
		return f8;
	}

	inline hw_uint<16> peek_264() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_265() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5_cache {
	// RAM Box: {[0, 198], [3, 261]}
	// Capacity: 266
	// # of read delays: 6
  // 0, 1, 132, 133, 134, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 130> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}

	inline hw_uint<16> peek_134() {
		return f8;
	}

	inline hw_uint<16> peek_264() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_265() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5_cache {
	// RAM Box: {[1, 199], [3, 261]}
	// Capacity: 266
	// # of read delays: 6
  // 0, 1, 132, 133, 134, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 130> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}

	inline hw_uint<16> peek_134() {
		return f8;
	}

	inline hw_uint<16> peek_264() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_265() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5_cache {
	// RAM Box: {[0, 198], [2, 260]}
	// Capacity: 266
	// # of read delays: 6
  // 0, 1, 132, 133, 134, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 130> f9;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}

	inline hw_uint<16> peek_134() {
		return f8;
	}

	inline hw_uint<16> peek_264() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_265() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 130
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 130 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct hw_input_global_wrapper_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[4 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 4 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 4 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[5 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[4 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 1 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 5 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[5 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 1 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
    // { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 5 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // # of banks: 4
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.peek_133();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[4 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.peek_265();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.peek_134();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125 read pattern: { op_hcompute_denoised_1_stencil[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 4 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_merged_banks_5.peek_132();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115 read pattern: { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 4 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.peek_132();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116 read pattern: { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.peek_133();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117 read pattern: { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[5 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118 read pattern: { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + 2denoised_1_s0_y_yio, 2 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.peek_265();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119 read pattern: { op_hcompute_denoised_1_stencil_1[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_merged_banks_5.peek_134();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109 read pattern: { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.peek_133();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110 read pattern: { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[4 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111 read pattern: { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.peek_265();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112 read pattern: { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 1 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.peek_134();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113 read pattern: { op_hcompute_denoised_1_stencil_2[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[2 + 2denoised_1_s0_y_yio, 5 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_merged_banks_5.peek_132();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103 read pattern: { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.peek_133();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104 read pattern: { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[5 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.peek_1();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105 read pattern: { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[1 + 2denoised_1_s0_y_yio, 3 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.peek_265();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106 read pattern: { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 1 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.peek_134();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107 read pattern: { op_hcompute_denoised_1_stencil_3[root = 0, denoised_1_s0_y_yio, denoised_1_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + 2denoised_1_s0_y_yio, 5 + 2denoised_1_s0_x_x] : 0 <= denoised_1_s0_y_yio <= 97 and 0 <= denoised_1_s0_x_x <= 129 }
  // Read schedule : { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_merged_banks_5.peek_132();
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72;
  return 0;
}

// # of bundles = 8
// op_hcompute_denoised_1_stencil_1_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119
inline hw_uint<80> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 5
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119

	hw_uint<80> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<0, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_115_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<16, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_116_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<32, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_117_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<48, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_118_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<64, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_119_res);
	return result;
}

// op_hcompute_denoised_1_stencil_2_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113
inline hw_uint<80> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 5
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113

	hw_uint<80> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<0, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_109_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<16, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_110_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<32, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_111_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<48, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_112_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<64, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_113_res);
	return result;
}

// op_hcompute_denoised_1_stencil_3_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107
inline hw_uint<80> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 5
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107

	hw_uint<80> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<0, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_103_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<16, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_104_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<32, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_105_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<48, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_106_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<64, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_107_res);
	return result;
}

// op_hcompute_denoised_1_stencil_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125
inline hw_uint<80> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 5
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125

	hw_uint<80> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<0, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_121_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<16, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_122_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<32, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_123_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<48, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_124_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125_select(hw_input_global_wrapper_global_wrapper_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, dynamic_address);
	set_at<64, 80>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_125_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_76_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_74_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_72_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_78_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43_cache {
	// RAM Box: {[1, 191], [1, 255], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41_cache {
	// RAM Box: {[1, 191], [1, 255], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45_cache {
	// RAM Box: {[0, 190], [0, 254], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39_cache {
	// RAM Box: {[0, 190], [0, 254], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37_cache {
	// RAM Box: {[1, 191], [0, 254], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47_cache {
	// RAM Box: {[0, 190], [0, 254], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35_cache {
	// RAM Box: {[1, 191], [0, 254], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33_cache {
	// RAM Box: {[1, 191], [0, 254], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31_cache {
	// RAM Box: {[0, 190], [1, 255], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29_cache {
	// RAM Box: {[0, 190], [1, 255], [1, 1]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27_cache {
	// RAM Box: {[0, 190], [1, 255], [2, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25_cache {
	// RAM Box: {[1, 191], [1, 255], [0, 0]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct hw_output_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_global_wrapper_stencil_10[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_11[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_8[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
    // { op_hcompute_hw_output_global_wrapper_stencil_9[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // # of banks: 12
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25;
};



inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48);
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_10[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 82] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 70] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_11[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 83] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 71] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 73] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 61] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 74] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 62] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 75] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 63] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47 read pattern: { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 72] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 60] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 76] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 64] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 77] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 65] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 78] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 66] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 79] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 67] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_8[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 80] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 68] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_9[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 81] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 69] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48;
  return 0;
}

// # of bundles = 24
// op_hcompute_hw_output_glb_stencil_10_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_10_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_res = op_hcompute_hw_output_glb_stencil_10_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_66_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_11_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_11_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_res = op_hcompute_hw_output_glb_stencil_11_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_64_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_1_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_1_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_res = op_hcompute_hw_output_glb_stencil_1_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_68_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_2_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_2_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_res = op_hcompute_hw_output_glb_stencil_2_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_62_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_3_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_3_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_res = op_hcompute_hw_output_glb_stencil_3_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_60_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_4_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_4_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_res = op_hcompute_hw_output_glb_stencil_4_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_58_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_5_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_5_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_res = op_hcompute_hw_output_glb_stencil_5_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_56_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_6_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_6_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_res = op_hcompute_hw_output_glb_stencil_6_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_54_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_7_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_7_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_res = op_hcompute_hw_output_glb_stencil_7_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_52_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_8_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_8_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_res = op_hcompute_hw_output_glb_stencil_8_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_50_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_9_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_9_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_res = op_hcompute_hw_output_glb_stencil_9_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_48_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_res = op_hcompute_hw_output_glb_stencil_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_70_res, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_global_wrapper_stencil_10_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_43_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_11_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_41_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_1_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_45_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_2_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_39_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_3_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_37_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_4_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_35_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_5_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_33_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_6_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_31_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_7_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_29_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_8_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_27_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_9_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_25_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_47_res);
	return result;
}

struct r_b_stencil_op_hcompute_r_b_stencil_14_to_r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139_cache {
	// RAM Box: {[0, 95], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct r_b_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_3[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_b_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  r_b_stencil_op_hcompute_r_b_stencil_14_to_r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139_cache r_b_stencil_op_hcompute_r_b_stencil_14_to_r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139;
};



inline void r_b_stencil_op_hcompute_r_b_stencil_14_write(hw_uint<16>& r_b_stencil_op_hcompute_r_b_stencil_14, r_b_stencil_cache& r_b_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
  r_b_stencil.r_b_stencil_op_hcompute_r_b_stencil_14_to_r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139.push(r_b_stencil_op_hcompute_r_b_stencil_14);
}

inline hw_uint<16> r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139_select(r_b_stencil_cache& r_b_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139 read pattern: { op_hcompute_demosaicked_1_stencil_3[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_b_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 27] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_r_b_stencil_op_hcompute_r_b_stencil_14 = r_b_stencil.r_b_stencil_op_hcompute_r_b_stencil_14_to_r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139.peek(/* one reader or all rams */ 0);
  return value_r_b_stencil_op_hcompute_r_b_stencil_14;
  return 0;
}

// # of bundles = 2
// op_hcompute_demosaicked_1_stencil_3_read
//	r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139
inline hw_uint<16> r_b_stencil_op_hcompute_demosaicked_1_stencil_3_read_bundle_read(r_b_stencil_cache& r_b_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139

	hw_uint<16> result;
	hw_uint<16> r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139_res = r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139_select(r_b_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, r_b_stencil_op_hcompute_demosaicked_1_stencil_3_139_res);
	return result;
}

// op_hcompute_r_b_stencil_write
//	r_b_stencil_op_hcompute_r_b_stencil_14
inline void r_b_stencil_op_hcompute_r_b_stencil_write_bundle_write(hw_uint<16>& op_hcompute_r_b_stencil_write, r_b_stencil_cache& r_b_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
	hw_uint<16> r_b_stencil_op_hcompute_r_b_stencil_14_res = op_hcompute_r_b_stencil_write.extract<0, 15>();
	r_b_stencil_op_hcompute_r_b_stencil_14_write(r_b_stencil_op_hcompute_r_b_stencil_14_res, r_b_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
}

struct r_gb_stencil_op_hcompute_r_gb_stencil_8_to_r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127_cache {
	// RAM Box: {[0, 95], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct r_gb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_9[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_gb_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  r_gb_stencil_op_hcompute_r_gb_stencil_8_to_r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127_cache r_gb_stencil_op_hcompute_r_gb_stencil_8_to_r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127;
};



inline void r_gb_stencil_op_hcompute_r_gb_stencil_8_write(hw_uint<16>& r_gb_stencil_op_hcompute_r_gb_stencil_8, r_gb_stencil_cache& r_gb_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
  r_gb_stencil.r_gb_stencil_op_hcompute_r_gb_stencil_8_to_r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127.push(r_gb_stencil_op_hcompute_r_gb_stencil_8);
}

inline hw_uint<16> r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127_select(r_gb_stencil_cache& r_gb_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127 read pattern: { op_hcompute_demosaicked_1_stencil_9[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_gb_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 33] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_r_gb_stencil_op_hcompute_r_gb_stencil_8 = r_gb_stencil.r_gb_stencil_op_hcompute_r_gb_stencil_8_to_r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127.peek(/* one reader or all rams */ 0);
  return value_r_gb_stencil_op_hcompute_r_gb_stencil_8;
  return 0;
}

// # of bundles = 2
// op_hcompute_demosaicked_1_stencil_9_read
//	r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127
inline hw_uint<16> r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_read_bundle_read(r_gb_stencil_cache& r_gb_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127

	hw_uint<16> result;
	hw_uint<16> r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127_res = r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127_select(r_gb_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_127_res);
	return result;
}

// op_hcompute_r_gb_stencil_write
//	r_gb_stencil_op_hcompute_r_gb_stencil_8
inline void r_gb_stencil_op_hcompute_r_gb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_r_gb_stencil_write, r_gb_stencil_cache& r_gb_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
	hw_uint<16> r_gb_stencil_op_hcompute_r_gb_stencil_8_res = op_hcompute_r_gb_stencil_write.extract<0, 15>();
	r_gb_stencil_op_hcompute_r_gb_stencil_8_write(r_gb_stencil_op_hcompute_r_gb_stencil_8_res, r_gb_stencil, root, r_gb_s0_y, r_gb_s0_x, dynamic_address);
}

struct r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149_cache {
	// RAM Box: {[0, 95], [0, 127]}
	// Capacity: 129
	// # of read delays: 129
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128
	fifo<hw_uint<16>, 129> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(128 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct r_gr_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_gr_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // # of banks: 1
  r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149_cache r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149;
};



inline void r_gr_stencil_op_hcompute_r_gr_stencil_2_write(hw_uint<16>& r_gr_stencil_op_hcompute_r_gr_stencil_2, r_gr_stencil_cache& r_gr_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
  r_gr_stencil.r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149.push(r_gr_stencil_op_hcompute_r_gr_stencil_2);
}

inline hw_uint<16> r_gr_stencil_op_hcompute_demosaicked_1_stencil_149_select(r_gr_stencil_cache& r_gr_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_gr_stencil_op_hcompute_demosaicked_1_stencil_149 read pattern: { op_hcompute_demosaicked_1_stencil[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_gr_stencil[demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 24] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  auto value_r_gr_stencil_op_hcompute_r_gr_stencil_2 = r_gr_stencil.r_gr_stencil_op_hcompute_r_gr_stencil_2_to_r_gr_stencil_op_hcompute_demosaicked_1_stencil_149.peek(/* one reader or all rams */ (126 - demosaicked_1_s0_x_x >= 0 && 94 - demosaicked_1_s0_y_yio >= 0) ? (128) : (-127 + demosaicked_1_s0_x_x == 0 && 94 - demosaicked_1_s0_y_yio >= 0) ? (128) : (-95 + demosaicked_1_s0_y_yio == 0 && 126 - demosaicked_1_s0_x_x >= 0) ? ((127 - demosaicked_1_s0_x_x)) : 0);
  return value_r_gr_stencil_op_hcompute_r_gr_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_demosaicked_1_stencil_read
//	r_gr_stencil_op_hcompute_demosaicked_1_stencil_149
inline hw_uint<16> r_gr_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(r_gr_stencil_cache& r_gr_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // r_gr_stencil_op_hcompute_demosaicked_1_stencil_149

	hw_uint<16> result;
	hw_uint<16> r_gr_stencil_op_hcompute_demosaicked_1_stencil_149_res = r_gr_stencil_op_hcompute_demosaicked_1_stencil_149_select(r_gr_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, r_gr_stencil_op_hcompute_demosaicked_1_stencil_149_res);
	return result;
}

// op_hcompute_r_gr_stencil_write
//	r_gr_stencil_op_hcompute_r_gr_stencil_2
inline void r_gr_stencil_op_hcompute_r_gr_stencil_write_bundle_write(hw_uint<16>& op_hcompute_r_gr_stencil_write, r_gr_stencil_cache& r_gr_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
	hw_uint<16> r_gr_stencil_op_hcompute_r_gr_stencil_2_res = op_hcompute_r_gr_stencil_write.extract<0, 15>();
	r_gr_stencil_op_hcompute_r_gr_stencil_2_write(r_gr_stencil_op_hcompute_r_gr_stencil_2_res, r_gr_stencil, root, r_gr_s0_y, r_gr_s0_x, dynamic_address);
}

struct r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9_cache {
	// RAM Box: {[0, 96], [0, 128]}
	// Capacity: 131
	// # of read delays: 4
  // 0, 1, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}

	inline hw_uint<16> peek_130() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct r_r_stencil_cache {
  // Reader addrs...
    // { op_hcompute_demosaicked_1_stencil_6[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_r_stencil[demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[1 + r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[1 + r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
    // { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> r_r_stencil[r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
    // { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> r_r_stencil[1 + r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
    // { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> r_r_stencil[r_gr_s0_y, r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
    // { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> r_r_stencil[r_gr_s0_y, 1 + r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // # of banks: 1
  r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9_cache r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9;
};



inline void r_r_stencil_op_hcompute_r_r_stencil_0_write(hw_uint<16>& r_r_stencil_op_hcompute_r_r_stencil_0, r_r_stencil_cache& r_r_stencil, int root, int r_r_s0_y, int r_r_s0_x, int dynamic_address) {
  r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.push(r_r_stencil_op_hcompute_r_r_stencil_0);
}

inline hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133_select(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133 read pattern: { op_hcompute_demosaicked_1_stencil_6[root = 0, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x] -> r_r_stencil[demosaicked_1_s0_y_yio, 1 + demosaicked_1_s0_x_x] : 0 <= demosaicked_1_s0_y_yio <= 95 and 0 <= demosaicked_1_s0_x_x <= 127 }
  // Read schedule : { op_hcompute_demosaicked_1_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 30] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_129();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_20_select(r_r_stencil_cache& r_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_b_stencil_20 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_129();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_21_select(r_r_stencil_cache& r_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_b_stencil_21 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[1 + r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_1();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_22_select(r_r_stencil_cache& r_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_b_stencil_22 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[r_b_s0_y, r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_130();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_23_select(r_r_stencil_cache& r_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_b_stencil_23 read pattern: { op_hcompute_r_b_stencil[root = 0, r_b_s0_y, r_b_s0_x] -> r_r_stencil[1 + r_b_s0_y, 1 + r_b_s0_x] : 0 <= r_b_s0_y <= 95 and 0 <= r_b_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_0();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_gb_stencil_12_select(r_r_stencil_cache& r_r_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_gb_stencil_12 read pattern: { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> r_r_stencil[r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_129();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_gb_stencil_13_select(r_r_stencil_cache& r_r_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_gb_stencil_13 read pattern: { op_hcompute_r_gb_stencil[root = 0, r_gb_s0_y, r_gb_s0_x] -> r_r_stencil[1 + r_gb_s0_y, 1 + r_gb_s0_x] : 0 <= r_gb_s0_y <= 95 and 0 <= r_gb_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_0();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_gr_stencil_6_select(r_r_stencil_cache& r_r_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_gr_stencil_6 read pattern: { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> r_r_stencil[r_gr_s0_y, r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_1();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

inline hw_uint<16> r_r_stencil_op_hcompute_r_gr_stencil_7_select(r_r_stencil_cache& r_r_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // r_r_stencil_op_hcompute_r_gr_stencil_7 read pattern: { op_hcompute_r_gr_stencil[root = 0, r_gr_s0_y, r_gr_s0_x] -> r_r_stencil[r_gr_s0_y, 1 + r_gr_s0_x] : 0 <= r_gr_s0_y <= 95 and 0 <= r_gr_s0_x <= 127 }
  // Read schedule : { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
  // Write schedule: { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
  auto value_r_r_stencil_op_hcompute_r_r_stencil_0 = r_r_stencil.r_r_stencil_op_hcompute_r_r_stencil_0_merged_banks_9.peek_0();
  return value_r_r_stencil_op_hcompute_r_r_stencil_0;
  return 0;
}

// # of bundles = 5
// op_hcompute_demosaicked_1_stencil_6_read
//	r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133
inline hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_6_read_bundle_read(r_r_stencil_cache& r_r_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133

	hw_uint<16> result;
	hw_uint<16> r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133_res = r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133_select(r_r_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, dynamic_address);
	set_at<0, 16>(result, r_r_stencil_op_hcompute_demosaicked_1_stencil_6_133_res);
	return result;
}

// op_hcompute_r_b_stencil_read
//	r_r_stencil_op_hcompute_r_b_stencil_20
//	r_r_stencil_op_hcompute_r_b_stencil_21
//	r_r_stencil_op_hcompute_r_b_stencil_22
//	r_r_stencil_op_hcompute_r_b_stencil_23
inline hw_uint<64> r_r_stencil_op_hcompute_r_b_stencil_read_bundle_read(r_r_stencil_cache& r_r_stencil, int root, int r_b_s0_y, int r_b_s0_x, int dynamic_address) {
  // # of ports in bundle: 4
    // r_r_stencil_op_hcompute_r_b_stencil_20
    // r_r_stencil_op_hcompute_r_b_stencil_21
    // r_r_stencil_op_hcompute_r_b_stencil_22
    // r_r_stencil_op_hcompute_r_b_stencil_23

	hw_uint<64> result;
	hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_20_res = r_r_stencil_op_hcompute_r_b_stencil_20_select(r_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<0, 64>(result, r_r_stencil_op_hcompute_r_b_stencil_20_res);
	hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_21_res = r_r_stencil_op_hcompute_r_b_stencil_21_select(r_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<16, 64>(result, r_r_stencil_op_hcompute_r_b_stencil_21_res);
	hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_22_res = r_r_stencil_op_hcompute_r_b_stencil_22_select(r_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<32, 64>(result, r_r_stencil_op_hcompute_r_b_stencil_22_res);
	hw_uint<16> r_r_stencil_op_hcompute_r_b_stencil_23_res = r_r_stencil_op_hcompute_r_b_stencil_23_select(r_r_stencil, root, r_b_s0_y, r_b_s0_x, dynamic_address);
	set_at<48, 64>(result, r_r_stencil_op_hcompute_r_b_stencil_23_res);
	return result;
}

// op_hcompute_r_gb_stencil_read
//	r_r_stencil_op_hcompute_r_gb_stencil_12
//	r_r_stencil_op_hcompute_r_gb_stencil_13
inline hw_uint<32> r_r_stencil_op_hcompute_r_gb_stencil_read_bundle_read(r_r_stencil_cache& r_r_stencil, int root, int r_gb_s0_y, int r_gb_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // r_r_stencil_op_hcompute_r_gb_stencil_12
    // r_r_stencil_op_hcompute_r_gb_stencil_13

	hw_uint<32> result;
	hw_uint<16> r_r_stencil_op_hcompute_r_gb_stencil_12_res = r_r_stencil_op_hcompute_r_gb_stencil_12_select(r_r_stencil, root, r_gb_s0_y, r_gb_s0_x, dynamic_address);
	set_at<0, 32>(result, r_r_stencil_op_hcompute_r_gb_stencil_12_res);
	hw_uint<16> r_r_stencil_op_hcompute_r_gb_stencil_13_res = r_r_stencil_op_hcompute_r_gb_stencil_13_select(r_r_stencil, root, r_gb_s0_y, r_gb_s0_x, dynamic_address);
	set_at<16, 32>(result, r_r_stencil_op_hcompute_r_gb_stencil_13_res);
	return result;
}

// op_hcompute_r_gr_stencil_read
//	r_r_stencil_op_hcompute_r_gr_stencil_6
//	r_r_stencil_op_hcompute_r_gr_stencil_7
inline hw_uint<32> r_r_stencil_op_hcompute_r_gr_stencil_read_bundle_read(r_r_stencil_cache& r_r_stencil, int root, int r_gr_s0_y, int r_gr_s0_x, int dynamic_address) {
  // # of ports in bundle: 2
    // r_r_stencil_op_hcompute_r_gr_stencil_6
    // r_r_stencil_op_hcompute_r_gr_stencil_7

	hw_uint<32> result;
	hw_uint<16> r_r_stencil_op_hcompute_r_gr_stencil_6_res = r_r_stencil_op_hcompute_r_gr_stencil_6_select(r_r_stencil, root, r_gr_s0_y, r_gr_s0_x, dynamic_address);
	set_at<0, 32>(result, r_r_stencil_op_hcompute_r_gr_stencil_6_res);
	hw_uint<16> r_r_stencil_op_hcompute_r_gr_stencil_7_res = r_r_stencil_op_hcompute_r_gr_stencil_7_select(r_r_stencil, root, r_gr_s0_y, r_gr_s0_x, dynamic_address);
	set_at<16, 32>(result, r_r_stencil_op_hcompute_r_gr_stencil_7_res);
	return result;
}

// op_hcompute_r_r_stencil_write
//	r_r_stencil_op_hcompute_r_r_stencil_0
inline void r_r_stencil_op_hcompute_r_r_stencil_write_bundle_write(hw_uint<16>& op_hcompute_r_r_stencil_write, r_r_stencil_cache& r_r_stencil, int root, int r_r_s0_y, int r_r_s0_x, int dynamic_address) {
	hw_uint<16> r_r_stencil_op_hcompute_r_r_stencil_0_res = op_hcompute_r_r_stencil_write.extract<0, 15>();
	r_r_stencil_op_hcompute_r_r_stencil_0_write(r_r_stencil_op_hcompute_r_r_stencil_0_res, r_r_stencil, root, r_r_s0_y, r_r_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 31536 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_4_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_4_rp__value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_4_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_4_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_3_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_4_rp__value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_3_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_4_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_2, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_2
	auto hw_input_stencil_clkwrk_2__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_4_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__value = hw_input_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_4_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_3, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y_yio, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_3
	auto hw_input_stencil_clkwrk_3__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_3_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__value = hw_input_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3__lp__lp_hw_input_global_wrapper_s0_y_yio_m_2_rp___p___m_3_rp__c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp___p__1_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil__lp__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp___p__1_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y_yio, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil__lp__lp_hw_input_global_wrapper_global_wrapper_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y_yio, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__2_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__2_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__2_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__2_rp__value);
	// Produce: denoised_1_stencil
	denoised_1_stencil_op_hcompute_denoised_1_stencil_write_bundle_write(/* arg names */compute_result, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_denoised_1_stencil_1(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__3_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__4_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_denoised_1_stencil_1(hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__3_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__4_rp__value);
	// Produce: denoised_1_stencil
	denoised_1_stencil_op_hcompute_denoised_1_stencil_1_write_bundle_write(/* arg names */compute_result, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_denoised_1_stencil_2(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__2_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__3_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_2_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_denoised_1_stencil_2(hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__2_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__3_rp__value);
	// Produce: denoised_1_stencil
	denoised_1_stencil_op_hcompute_denoised_1_stencil_2_write_bundle_write(/* arg names */compute_result, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_denoised_1_stencil_3(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, denoised_1_stencil_cache& denoised_1_stencil, int root, int denoised_1_s0_y_yio, int denoised_1_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__3_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__3_rp__value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_denoised_1_stencil_3_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_denoised_1_stencil_3(hw_input_global_wrapper_global_wrapper_stencil__lp__lp_denoised_1_s0_y_yio_m_2_rp___p__3_rp__c___lp__lp_denoised_1_s0_x_x_m_2_rp___p__3_rp__value);
	// Produce: denoised_1_stencil
	denoised_1_stencil_op_hcompute_denoised_1_stencil_3_write_bundle_write(/* arg names */compute_result, denoised_1_stencil, root, denoised_1_s0_y_yio, denoised_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_b_b_stencil(denoised_1_stencil_cache& denoised_1_stencil, b_b_stencil_cache& b_b_stencil, int root, int b_b_s0_y, int b_b_s0_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_b_b_s0_y_m_2_rp___p__3_rp__c___lp__lp_b_b_s0_x_m_2_rp___p__2_rp__value = denoised_1_stencil_op_hcompute_b_b_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, b_b_s0_y, b_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_b_b_stencil(denoised_1_stencil__lp__lp_b_b_s0_y_m_2_rp___p__3_rp__c___lp__lp_b_b_s0_x_m_2_rp___p__2_rp__value);
	// Produce: b_b_stencil
	b_b_stencil_op_hcompute_b_b_stencil_write_bundle_write(/* arg names */compute_result, b_b_stencil, root, b_b_s0_y, b_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_g_gb_stencil(denoised_1_stencil_cache& denoised_1_stencil, g_gb_stencil_cache& g_gb_stencil, int root, int g_gb_s0_y, int g_gb_s0_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_g_gb_s0_y_m_2_rp___p__3_rp__c___lp__lp_g_gb_s0_x_m_2_rp___p__3_rp__value = denoised_1_stencil_op_hcompute_g_gb_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, g_gb_s0_y, g_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_g_gb_stencil(denoised_1_stencil__lp__lp_g_gb_s0_y_m_2_rp___p__3_rp__c___lp__lp_g_gb_s0_x_m_2_rp___p__3_rp__value);
	// Produce: g_gb_stencil
	g_gb_stencil_op_hcompute_g_gb_stencil_write_bundle_write(/* arg names */compute_result, g_gb_stencil, root, g_gb_s0_y, g_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_g_gr_stencil(denoised_1_stencil_cache& denoised_1_stencil, g_gr_stencil_cache& g_gr_stencil, int root, int g_gr_s0_y, int g_gr_s0_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_g_gr_s0_y_m_2_rp___p__2_rp__c___lp__lp_g_gr_s0_x_m_2_rp___p__2_rp__value = denoised_1_stencil_op_hcompute_g_gr_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, g_gr_s0_y, g_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_g_gr_stencil(denoised_1_stencil__lp__lp_g_gr_s0_y_m_2_rp___p__2_rp__c___lp__lp_g_gr_s0_x_m_2_rp___p__2_rp__value);
	// Produce: g_gr_stencil
	g_gr_stencil_op_hcompute_g_gr_stencil_write_bundle_write(/* arg names */compute_result, g_gr_stencil, root, g_gr_s0_y, g_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_g_b_stencil(g_gb_stencil_cache& g_gb_stencil, g_gr_stencil_cache& g_gr_stencil, g_b_stencil_cache& g_b_stencil, int root, int g_b_s0_y, int g_b_s0_x) {
  // Dynamic address computation

	// Consume: g_gb_stencil
	auto g_gb_stencil__lp_g_b_s0_y__p__1_rp__c__g_b_s0_x_value = g_gb_stencil_op_hcompute_g_b_stencil_read_bundle_read(g_gb_stencil/* source_delay */, root, g_b_s0_y, g_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_g_b_s0_y__p__2_rp__c___lp_g_b_s0_x__p__1_rp__value = g_gr_stencil_op_hcompute_g_b_stencil_read_bundle_read(g_gr_stencil/* source_delay */, root, g_b_s0_y, g_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_g_b_stencil(g_gb_stencil__lp_g_b_s0_y__p__1_rp__c__g_b_s0_x_value, g_gr_stencil__lp_g_b_s0_y__p__2_rp__c___lp_g_b_s0_x__p__1_rp__value);
	// Produce: g_b_stencil
	g_b_stencil_op_hcompute_g_b_stencil_write_bundle_write(/* arg names */compute_result, g_b_stencil, root, g_b_s0_y, g_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_b_gb_stencil(b_b_stencil_cache& b_b_stencil, g_b_stencil_cache& g_b_stencil, g_gb_stencil_cache& g_gb_stencil, b_gb_stencil_cache& b_gb_stencil, int root, int b_gb_s0_y, int b_gb_s0_x) {
  // Dynamic address computation

	// Consume: b_b_stencil
	auto b_b_stencil__lp_b_gb_s0_y__p__1_rp__c__b_gb_s0_x_value = b_b_stencil_op_hcompute_b_gb_stencil_read_bundle_read(b_b_stencil/* source_delay */, root, b_gb_s0_y, b_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_b_stencil
	auto g_b_stencil__lp_b_gb_s0_y__p__1_rp__c__b_gb_s0_x_value = g_b_stencil_op_hcompute_b_gb_stencil_read_bundle_read(g_b_stencil/* source_delay */, root, b_gb_s0_y, b_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_gb_stencil
	auto g_gb_stencil__lp_b_gb_s0_y__p__1_rp__c___lp_b_gb_s0_x__p__1_rp__value = g_gb_stencil_op_hcompute_b_gb_stencil_read_bundle_read(g_gb_stencil/* source_delay */, root, b_gb_s0_y, b_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_b_gb_stencil(b_b_stencil__lp_b_gb_s0_y__p__1_rp__c__b_gb_s0_x_value, g_b_stencil__lp_b_gb_s0_y__p__1_rp__c__b_gb_s0_x_value, g_gb_stencil__lp_b_gb_s0_y__p__1_rp__c___lp_b_gb_s0_x__p__1_rp__value);
	// Produce: b_gb_stencil
	b_gb_stencil_op_hcompute_b_gb_stencil_write_bundle_write(/* arg names */compute_result, b_gb_stencil, root, b_gb_s0_y, b_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_b_gr_stencil(b_b_stencil_cache& b_b_stencil, g_b_stencil_cache& g_b_stencil, g_gr_stencil_cache& g_gr_stencil, b_gr_stencil_cache& b_gr_stencil, int root, int b_gr_s0_y, int b_gr_s0_x) {
  // Dynamic address computation

	// Consume: b_b_stencil
	auto b_b_stencil__lp_b_gr_s0_y__p__1_rp__c__b_gr_s0_x_value = b_b_stencil_op_hcompute_b_gr_stencil_read_bundle_read(b_b_stencil/* source_delay */, root, b_gr_s0_y, b_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_b_stencil
	auto g_b_stencil__lp_b_gr_s0_y__p__1_rp__c__b_gr_s0_x_value = g_b_stencil_op_hcompute_b_gr_stencil_read_bundle_read(g_b_stencil/* source_delay */, root, b_gr_s0_y, b_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_b_gr_s0_y__p__1_rp__c___lp_b_gr_s0_x__p__1_rp__value = g_gr_stencil_op_hcompute_b_gr_stencil_read_bundle_read(g_gr_stencil/* source_delay */, root, b_gr_s0_y, b_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_b_gr_stencil(b_b_stencil__lp_b_gr_s0_y__p__1_rp__c__b_gr_s0_x_value, g_b_stencil__lp_b_gr_s0_y__p__1_rp__c__b_gr_s0_x_value, g_gr_stencil__lp_b_gr_s0_y__p__1_rp__c___lp_b_gr_s0_x__p__1_rp__value);
	// Produce: b_gr_stencil
	b_gr_stencil_op_hcompute_b_gr_stencil_write_bundle_write(/* arg names */compute_result, b_gr_stencil, root, b_gr_s0_y, b_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_g_r_stencil(g_gb_stencil_cache& g_gb_stencil, g_gr_stencil_cache& g_gr_stencil, g_r_stencil_cache& g_r_stencil, int root, int g_r_s0_y, int g_r_s0_x) {
  // Dynamic address computation

	// Consume: g_gb_stencil
	auto g_gb_stencil_g_r_s0_y_c___lp_g_r_s0_x__p__1_rp__value = g_gb_stencil_op_hcompute_g_r_stencil_read_bundle_read(g_gb_stencil/* source_delay */, root, g_r_s0_y, g_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_g_r_s0_y__p__1_rp__c___lp_g_r_s0_x__p__2_rp__value = g_gr_stencil_op_hcompute_g_r_stencil_read_bundle_read(g_gr_stencil/* source_delay */, root, g_r_s0_y, g_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_g_r_stencil(g_gb_stencil_g_r_s0_y_c___lp_g_r_s0_x__p__1_rp__value, g_gr_stencil__lp_g_r_s0_y__p__1_rp__c___lp_g_r_s0_x__p__2_rp__value);
	// Produce: g_r_stencil
	g_r_stencil_op_hcompute_g_r_stencil_write_bundle_write(/* arg names */compute_result, g_r_stencil, root, g_r_s0_y, g_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_b_r_stencil(b_b_stencil_cache& b_b_stencil, g_b_stencil_cache& g_b_stencil, g_r_stencil_cache& g_r_stencil, b_r_stencil_cache& b_r_stencil, int root, int b_r_s0_y, int b_r_s0_x) {
  // Dynamic address computation

	// Consume: b_b_stencil
	auto b_b_stencil__lp_b_r_s0_y__p__1_rp__c__b_r_s0_x_value = b_b_stencil_op_hcompute_b_r_stencil_read_bundle_read(b_b_stencil/* source_delay */, root, b_r_s0_y, b_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_b_stencil
	auto g_b_stencil__lp_b_r_s0_y__p__1_rp__c__b_r_s0_x_value = g_b_stencil_op_hcompute_b_r_stencil_read_bundle_read(g_b_stencil/* source_delay */, root, b_r_s0_y, b_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_r_stencil
	auto g_r_stencil_b_r_s0_y_c___lp_b_r_s0_x__p__1_rp__value = g_r_stencil_op_hcompute_b_r_stencil_read_bundle_read(g_r_stencil/* source_delay */, root, b_r_s0_y, b_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_b_r_stencil(b_b_stencil__lp_b_r_s0_y__p__1_rp__c__b_r_s0_x_value, g_b_stencil__lp_b_r_s0_y__p__1_rp__c__b_r_s0_x_value, g_r_stencil_b_r_s0_y_c___lp_b_r_s0_x__p__1_rp__value);
	// Produce: b_r_stencil
	b_r_stencil_op_hcompute_b_r_stencil_write_bundle_write(/* arg names */compute_result, b_r_stencil, root, b_r_s0_y, b_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_r_r_stencil(denoised_1_stencil_cache& denoised_1_stencil, r_r_stencil_cache& r_r_stencil, int root, int r_r_s0_y, int r_r_s0_x) {
  // Dynamic address computation

	// Consume: denoised_1_stencil
	auto denoised_1_stencil__lp__lp_r_r_s0_y_m_2_rp___p__2_rp__c___lp__lp_r_r_s0_x_m_2_rp___p__3_rp__value = denoised_1_stencil_op_hcompute_r_r_stencil_read_bundle_read(denoised_1_stencil/* source_delay */, root, r_r_s0_y, r_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_r_r_stencil(denoised_1_stencil__lp__lp_r_r_s0_y_m_2_rp___p__2_rp__c___lp__lp_r_r_s0_x_m_2_rp___p__3_rp__value);
	// Produce: r_r_stencil
	r_r_stencil_op_hcompute_r_r_stencil_write_bundle_write(/* arg names */compute_result, r_r_stencil, root, r_r_s0_y, r_r_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_r_b_stencil(g_b_stencil_cache& g_b_stencil, g_r_stencil_cache& g_r_stencil, r_r_stencil_cache& r_r_stencil, r_b_stencil_cache& r_b_stencil, int root, int r_b_s0_y, int r_b_s0_x) {
  // Dynamic address computation

	// Consume: g_b_stencil
	auto g_b_stencil__lp_r_b_s0_y__p__1_rp__c__r_b_s0_x_value = g_b_stencil_op_hcompute_r_b_stencil_read_bundle_read(g_b_stencil/* source_delay */, root, r_b_s0_y, r_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_r_stencil
	auto g_r_stencil_r_b_s0_y_c___lp_r_b_s0_x__p__1_rp__value = g_r_stencil_op_hcompute_r_b_stencil_read_bundle_read(g_r_stencil/* source_delay */, root, r_b_s0_y, r_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: r_r_stencil
	auto r_r_stencil_r_b_s0_y_c___lp_r_b_s0_x__p__1_rp__value = r_r_stencil_op_hcompute_r_b_stencil_read_bundle_read(r_r_stencil/* source_delay */, root, r_b_s0_y, r_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_r_b_stencil(g_b_stencil__lp_r_b_s0_y__p__1_rp__c__r_b_s0_x_value, g_r_stencil_r_b_s0_y_c___lp_r_b_s0_x__p__1_rp__value, r_r_stencil_r_b_s0_y_c___lp_r_b_s0_x__p__1_rp__value);
	// Produce: r_b_stencil
	r_b_stencil_op_hcompute_r_b_stencil_write_bundle_write(/* arg names */compute_result, r_b_stencil, root, r_b_s0_y, r_b_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_r_gb_stencil(g_gb_stencil_cache& g_gb_stencil, g_r_stencil_cache& g_r_stencil, r_r_stencil_cache& r_r_stencil, r_gb_stencil_cache& r_gb_stencil, int root, int r_gb_s0_y, int r_gb_s0_x) {
  // Dynamic address computation

	// Consume: g_gb_stencil
	auto g_gb_stencil__lp_r_gb_s0_y__p__1_rp__c___lp_r_gb_s0_x__p__1_rp__value = g_gb_stencil_op_hcompute_r_gb_stencil_read_bundle_read(g_gb_stencil/* source_delay */, root, r_gb_s0_y, r_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_r_stencil
	auto g_r_stencil_r_gb_s0_y_c___lp_r_gb_s0_x__p__1_rp__value = g_r_stencil_op_hcompute_r_gb_stencil_read_bundle_read(g_r_stencil/* source_delay */, root, r_gb_s0_y, r_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: r_r_stencil
	auto r_r_stencil_r_gb_s0_y_c___lp_r_gb_s0_x__p__1_rp__value = r_r_stencil_op_hcompute_r_gb_stencil_read_bundle_read(r_r_stencil/* source_delay */, root, r_gb_s0_y, r_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_r_gb_stencil(g_gb_stencil__lp_r_gb_s0_y__p__1_rp__c___lp_r_gb_s0_x__p__1_rp__value, g_r_stencil_r_gb_s0_y_c___lp_r_gb_s0_x__p__1_rp__value, r_r_stencil_r_gb_s0_y_c___lp_r_gb_s0_x__p__1_rp__value);
	// Produce: r_gb_stencil
	r_gb_stencil_op_hcompute_r_gb_stencil_write_bundle_write(/* arg names */compute_result, r_gb_stencil, root, r_gb_s0_y, r_gb_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_r_gr_stencil(g_gr_stencil_cache& g_gr_stencil, g_r_stencil_cache& g_r_stencil, r_r_stencil_cache& r_r_stencil, r_gr_stencil_cache& r_gr_stencil, int root, int r_gr_s0_y, int r_gr_s0_x) {
  // Dynamic address computation

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_r_gr_s0_y__p__1_rp__c___lp_r_gr_s0_x__p__1_rp__value = g_gr_stencil_op_hcompute_r_gr_stencil_read_bundle_read(g_gr_stencil/* source_delay */, root, r_gr_s0_y, r_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: g_r_stencil
	auto g_r_stencil_r_gr_s0_y_c___lp_r_gr_s0_x__p__1_rp__value = g_r_stencil_op_hcompute_r_gr_stencil_read_bundle_read(g_r_stencil/* source_delay */, root, r_gr_s0_y, r_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: r_r_stencil
	auto r_r_stencil_r_gr_s0_y_c__r_gr_s0_x_value = r_r_stencil_op_hcompute_r_gr_stencil_read_bundle_read(r_r_stencil/* source_delay */, root, r_gr_s0_y, r_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_r_gr_stencil(g_gr_stencil__lp_r_gr_s0_y__p__1_rp__c___lp_r_gr_s0_x__p__1_rp__value, g_r_stencil_r_gr_s0_y_c___lp_r_gr_s0_x__p__1_rp__value, r_r_stencil_r_gr_s0_y_c__r_gr_s0_x_value);
	// Produce: r_gr_stencil
	r_gr_stencil_op_hcompute_r_gr_stencil_write_bundle_write(/* arg names */compute_result, r_gr_stencil, root, r_gr_s0_y, r_gr_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil(r_gr_stencil_cache& r_gr_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: r_gr_stencil
	auto r_gr_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value = r_gr_stencil_op_hcompute_demosaicked_1_stencil_read_bundle_read(r_gr_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil(r_gr_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_1(g_gr_stencil_cache& g_gr_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: g_gr_stencil
	auto g_gr_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c___lp_demosaicked_1_s0_x_x__p__1_rp__value = g_gr_stencil_op_hcompute_demosaicked_1_stencil_1_read_bundle_read(g_gr_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_1(g_gr_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c___lp_demosaicked_1_s0_x_x__p__1_rp__value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_2(b_gr_stencil_cache& b_gr_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: b_gr_stencil
	auto b_gr_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value = b_gr_stencil_op_hcompute_demosaicked_1_stencil_2_read_bundle_read(b_gr_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_2(b_gr_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_3(r_b_stencil_cache& r_b_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: r_b_stencil
	auto r_b_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value = r_b_stencil_op_hcompute_demosaicked_1_stencil_3_read_bundle_read(r_b_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_3(r_b_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_3_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_4(g_b_stencil_cache& g_b_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: g_b_stencil
	auto g_b_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c__demosaicked_1_s0_x_x_value = g_b_stencil_op_hcompute_demosaicked_1_stencil_4_read_bundle_read(g_b_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_4(g_b_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_4_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_5(b_b_stencil_cache& b_b_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: b_b_stencil
	auto b_b_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c__demosaicked_1_s0_x_x_value = b_b_stencil_op_hcompute_demosaicked_1_stencil_5_read_bundle_read(b_b_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_5(b_b_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_5_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_6(r_r_stencil_cache& r_r_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: r_r_stencil
	auto r_r_stencil_demosaicked_1_s0_y_yio_c___lp_demosaicked_1_s0_x_x__p__1_rp__value = r_r_stencil_op_hcompute_demosaicked_1_stencil_6_read_bundle_read(r_r_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_6(r_r_stencil_demosaicked_1_s0_y_yio_c___lp_demosaicked_1_s0_x_x__p__1_rp__value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_6_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_7(g_r_stencil_cache& g_r_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: g_r_stencil
	auto g_r_stencil_demosaicked_1_s0_y_yio_c___lp_demosaicked_1_s0_x_x__p__1_rp__value = g_r_stencil_op_hcompute_demosaicked_1_stencil_7_read_bundle_read(g_r_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_7(g_r_stencil_demosaicked_1_s0_y_yio_c___lp_demosaicked_1_s0_x_x__p__1_rp__value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_7_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_8(b_r_stencil_cache& b_r_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: b_r_stencil
	auto b_r_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value = b_r_stencil_op_hcompute_demosaicked_1_stencil_8_read_bundle_read(b_r_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_8(b_r_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_8_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_9(r_gb_stencil_cache& r_gb_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: r_gb_stencil
	auto r_gb_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value = r_gb_stencil_op_hcompute_demosaicked_1_stencil_9_read_bundle_read(r_gb_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_9(r_gb_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_9_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_10(g_gb_stencil_cache& g_gb_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: g_gb_stencil
	auto g_gb_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c___lp_demosaicked_1_s0_x_x__p__1_rp__value = g_gb_stencil_op_hcompute_demosaicked_1_stencil_10_read_bundle_read(g_gb_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_10(g_gb_stencil__lp_demosaicked_1_s0_y_yio__p__1_rp__c___lp_demosaicked_1_s0_x_x__p__1_rp__value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_10_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_demosaicked_1_stencil_11(b_gb_stencil_cache& b_gb_stencil, demosaicked_1_stencil_cache& demosaicked_1_stencil, int root, int demosaicked_1_s0_y_yio, int demosaicked_1_s0_x_x) {
  // Dynamic address computation

	// Consume: b_gb_stencil
	auto b_gb_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value = b_gb_stencil_op_hcompute_demosaicked_1_stencil_11_read_bundle_read(b_gb_stencil/* source_delay */, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_demosaicked_1_stencil_11(b_gb_stencil_demosaicked_1_s0_y_yio_c__demosaicked_1_s0_x_x_value);
	// Produce: demosaicked_1_stencil
	demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_11_write_bundle_write(/* arg names */compute_result, demosaicked_1_stencil, root, demosaicked_1_s0_y_yio, demosaicked_1_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp_corrected_s0_x_x_m_2_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil(demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp_corrected_s0_x_x_m_2_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_1(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp_corrected_s0_x_x_m_2_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_1(demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp_corrected_s0_x_x_m_2_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_1_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_2(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp_corrected_s0_x_x_m_2_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_2(demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp_corrected_s0_x_x_m_2_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_2_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_3(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp_corrected_s0_x_x_m_2_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_3_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_3(demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp_corrected_s0_x_x_m_2_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_3_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_4(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp_corrected_s0_x_x_m_2_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_4_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_4(demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp_corrected_s0_x_x_m_2_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_4_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_5(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp_corrected_s0_x_x_m_2_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_5_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_5(demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp_corrected_s0_x_x_m_2_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_5_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_6(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_6_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_6(demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_6_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_7(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_7_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_7(demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_7_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_8(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_8_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_8(demosaicked_1_stencil_0_c___lp_corrected_s0_y_yio_m_2_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_8_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_9(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_9_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_9(demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_9_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_10(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_10_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_10(demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_10_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_corrected_stencil_11(demosaicked_1_stencil_cache& demosaicked_1_stencil, corrected_stencil_cache& corrected_stencil, int root, int corrected_s0_y_yio, int corrected_s0_x_x) {
  // Dynamic address computation

	// Consume: demosaicked_1_stencil
	auto demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value = demosaicked_1_stencil_op_hcompute_corrected_stencil_11_read_bundle_read(demosaicked_1_stencil/* source_delay */, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_corrected_stencil_11(demosaicked_1_stencil_0_c___lp__lp_corrected_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_corrected_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: corrected_stencil
	corrected_stencil_op_hcompute_corrected_stencil_11_write_bundle_write(/* arg names */compute_result, corrected_stencil, root, corrected_s0_y_yio, corrected_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_0_c___lp_curved_s0_y_yio_m_2_rp__c___lp_curved_s0_x_x_m_2_rp__value = corrected_stencil_op_hcompute_curved_stencil_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil(corrected_stencil_0_c___lp_curved_s0_y_yio_m_2_rp__c___lp_curved_s0_x_x_m_2_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_1(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_1_c___lp_curved_s0_y_yio_m_2_rp__c___lp_curved_s0_x_x_m_2_rp__value = corrected_stencil_op_hcompute_curved_stencil_1_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_1(corrected_stencil_1_c___lp_curved_s0_y_yio_m_2_rp__c___lp_curved_s0_x_x_m_2_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_1_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_2(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_2_c___lp_curved_s0_y_yio_m_2_rp__c___lp_curved_s0_x_x_m_2_rp__value = corrected_stencil_op_hcompute_curved_stencil_2_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_2(corrected_stencil_2_c___lp_curved_s0_y_yio_m_2_rp__c___lp_curved_s0_x_x_m_2_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_2_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_3(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_0_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp_curved_s0_x_x_m_2_rp__value = corrected_stencil_op_hcompute_curved_stencil_3_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_3(corrected_stencil_0_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp_curved_s0_x_x_m_2_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_3_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_4(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_1_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp_curved_s0_x_x_m_2_rp__value = corrected_stencil_op_hcompute_curved_stencil_4_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_4(corrected_stencil_1_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp_curved_s0_x_x_m_2_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_4_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_5(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_2_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp_curved_s0_x_x_m_2_rp__value = corrected_stencil_op_hcompute_curved_stencil_5_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_5(corrected_stencil_2_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp_curved_s0_x_x_m_2_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_5_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_6(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_0_c___lp_curved_s0_y_yio_m_2_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value = corrected_stencil_op_hcompute_curved_stencil_6_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_6(corrected_stencil_0_c___lp_curved_s0_y_yio_m_2_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_6_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_7(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_1_c___lp_curved_s0_y_yio_m_2_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value = corrected_stencil_op_hcompute_curved_stencil_7_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_7(corrected_stencil_1_c___lp_curved_s0_y_yio_m_2_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_7_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_8(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_2_c___lp_curved_s0_y_yio_m_2_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value = corrected_stencil_op_hcompute_curved_stencil_8_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_8(corrected_stencil_2_c___lp_curved_s0_y_yio_m_2_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_8_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_9(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_0_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value = corrected_stencil_op_hcompute_curved_stencil_9_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_9(corrected_stencil_0_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_9_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_10(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_1_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value = corrected_stencil_op_hcompute_curved_stencil_10_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_10(corrected_stencil_1_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_10_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_curved_stencil_11(corrected_stencil_cache& corrected_stencil, curved_stencil_cache& curved_stencil, int root, int curved_s0_y_yio, int curved_s0_x_x) {
  // Dynamic address computation

	// Consume: corrected_stencil
	auto corrected_stencil_2_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value = corrected_stencil_op_hcompute_curved_stencil_11_read_bundle_read(corrected_stencil/* source_delay */, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_curved_stencil_11(corrected_stencil_2_c___lp__lp_curved_s0_y_yio_m_2_rp___p__1_rp__c___lp__lp_curved_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: curved_stencil
	curved_stencil_op_hcompute_curved_stencil_11_write_bundle_write(/* arg names */compute_result, curved_stencil, root, curved_s0_y_yio, curved_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_0_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil(curved_stencil_0_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_1(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_1_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_1(curved_stencil_1_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_2(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_2_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_2_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_2(curved_stencil_2_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_3(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_0_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_3_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_3(curved_stencil_0_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_4(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_1_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_4_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_4(curved_stencil_1_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_4_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_5(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_2_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_5_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_5(curved_stencil_2_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_5_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_6(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_0_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_6_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_6(curved_stencil_0_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_6_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_7(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_1_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_7_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_7(curved_stencil_1_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_7_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_8(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_2_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_8_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_8(curved_stencil_2_c___lp_hw_output_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_8_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_9(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_0_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_9_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_9(curved_stencil_0_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_9_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_10(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_1_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_10_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_10(curved_stencil_1_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_10_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_11(curved_stencil_cache& curved_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi_yio, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: curved_stencil
	auto curved_stencil_2_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = curved_stencil_op_hcompute_hw_output_glb_stencil_11_read_bundle_read(curved_stencil/* source_delay */, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_11(curved_stencil_2_c___lp__lp_hw_output_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_11_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi_yio, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_4, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_4
	hw_output_global_wrapper_stencil_clkwrk_4.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_5, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_5
	hw_output_global_wrapper_stencil_clkwrk_5.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_6, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_2_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_6
	hw_output_global_wrapper_stencil_clkwrk_6.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_7, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_3_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_7
	hw_output_global_wrapper_stencil_clkwrk_7.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_8, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_4_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_8
	hw_output_global_wrapper_stencil_clkwrk_8.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_9, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_5_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_9
	hw_output_global_wrapper_stencil_clkwrk_9.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_10, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_6_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_10
	hw_output_global_wrapper_stencil_clkwrk_10.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_11, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_7_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_11
	hw_output_global_wrapper_stencil_clkwrk_11.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_12, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_8_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_12
	hw_output_global_wrapper_stencil_clkwrk_12.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_9(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_13, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__0_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_9_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_9(hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__0_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_13
	hw_output_global_wrapper_stencil_clkwrk_13.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_10(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_14, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__1_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_10_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_10(hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__1_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_14
	hw_output_global_wrapper_stencil_clkwrk_14.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_11(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_15, int root, int hw_output_global_wrapper_s0_y_yi_yio, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__2_value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_11_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_11(hw_output_glb_stencil__lp__lp_hw_output_global_wrapper_s0_y_yi_yio_m_2_rp___p__1_rp__c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__c__2_value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_15
	hw_output_global_wrapper_stencil_clkwrk_15.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void camera_pipeline_2x2(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_9) {

#ifndef __SYNTHESIS__
  ofstream debug_file("camera_pipeline_2x2_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  b_b_stencil_cache b_b_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  b_gb_stencil_cache b_gb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  b_gr_stencil_cache b_gr_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  b_r_stencil_cache b_r_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  corrected_stencil_cache corrected_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  curved_stencil_cache curved_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaicked_1_stencil_cache demosaicked_1_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  denoised_1_stencil_cache denoised_1_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  g_b_stencil_cache g_b_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  g_gb_stencil_cache g_gb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  g_gr_stencil_cache g_gr_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  g_r_stencil_cache g_r_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_glb_stencil_cache hw_input_global_wrapper_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_global_wrapper_stencil_cache hw_input_global_wrapper_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_output_glb_stencil_cache hw_output_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  r_b_stencil_cache r_b_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  r_gb_stencil_cache r_gb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  r_gr_stencil_cache r_gr_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  r_r_stencil_cache r_r_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 61] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 32] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 49] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 81] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 66] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 57] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 39] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129; op_hcompute_hw_output_global_wrapper_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 83] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129; op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 50] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 26] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127; op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 62] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127; op_hcompute_corrected_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 45] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 64] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 59] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 24] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 33] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 52] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 46] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_corrected_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 42] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 35] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 41] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 47] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 77] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 71] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 79] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 74] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 55] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 68] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128; op_hcompute_hw_output_global_wrapper_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 82] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 53] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 67] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 43] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 36] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 51] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 38] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 76] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 69] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 2] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 48] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 44] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 27] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 56] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_corrected_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 40] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128; op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129; op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 37] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 70] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 60] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_curved_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 54] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 65] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128; op_hcompute_demosaicked_1_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 34] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 80] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 72] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 63] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 28] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 29] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 30] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 75] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_curved_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 58] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131; op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 73] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 31] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_hw_output_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 78] : 0 <= d1 <= 95 and 0 <= d2 <= 127; op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 25] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
//   { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 61] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_1(((((-61 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 32] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_8(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_r_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 22] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_r_gb_stencil(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 49] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_1(((((-49 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 81] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_9(((((-81 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 66] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_6(((((-66 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 57] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_9(((((-57 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 39] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_3(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_denoised_1_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
// Condition for op_hcompute_denoised_1_stencil_3(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 83] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_11(((((-83 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_denoised_1_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
// Condition for op_hcompute_denoised_1_stencil(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 50] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_2(((((-50 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 26] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_2(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_r_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 23] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_r_gr_stencil(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((98 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_g_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 18] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
// Condition for op_hcompute_g_r_stencil(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_b_gb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 16] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_b_gb_stencil(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 62] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_2(((((-62 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_r_r_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 4 + d2, 20] : 0 <= d1 <= 96 and -1 <= d2 <= 127 }
// Condition for op_hcompute_r_r_stencil(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 45] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_9(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 64] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_4(((((-64 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 59] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_11(((((-59 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 24] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 33] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_9(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_b_gr_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 17] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_b_gr_stencil(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((130 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 52] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_4(((((-52 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 46] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_10(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 42] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_6(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 35] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_11(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 41] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_5(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 47] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_11(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 77] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_5(((((-77 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_11[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 71] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_11(((((-71 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 79] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_7(((((-79 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 74] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_2(((((-74 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 55] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_7(((((-55 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 68] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_8(((((-68 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_g_gb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
// Condition for op_hcompute_g_gb_stencil(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 82] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_10(((((-82 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 53] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_5(((((-53 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 67] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_7(((((-67 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 43] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_7(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 36] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 51] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_3(((((-51 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 1] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_1(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((100 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_2[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 38] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_2(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 76] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_4(((((-76 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_9[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 69] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_9(((((-69 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 2] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_2(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((132 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 48] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 44] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_8(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 27] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_3(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 56] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_8(((((-56 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_r_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 21] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_r_b_stencil(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 40] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_4(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_b_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 12] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
// Condition for op_hcompute_b_b_stencil(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_denoised_1_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 2 + d2, 9] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
// Condition for op_hcompute_denoised_1_stencil_1(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((100 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_corrected_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 37] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_corrected_stencil_1(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 70] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_10(((((-70 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_denoised_1_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 3 + d2, 10] : 0 <= d1 <= 97 and 0 <= d2 <= 129 }
// Condition for op_hcompute_denoised_1_stencil_2(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((132 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_g_b_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 3 + d2, 15] : -1 <= d1 <= 95 and 0 <= d2 <= 128 }
// Condition for op_hcompute_g_b_stencil(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 7] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 60] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil(((((-60 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 54] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_6(((((-54 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 65] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_5(((((-65 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_g_gr_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : -1 <= d1 <= 96 and -1 <= d2 <= 128 }
// Condition for op_hcompute_g_gr_stencil(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 34] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_10(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_8[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 80] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_8(((((-80 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 72] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil(((((-72 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_b_r_stencil[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_b_r_stencil(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_3(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 63] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_glb_stencil_3(((((-63 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_4[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 28] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_4(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_5[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 29] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_5(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 30] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_6(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 75] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_3(((((-75 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, 1 + d2, 6] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((132 + -1*i2)) >= 0)))
//   { op_hcompute_curved_stencil_10[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 58] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_curved_stencil_10(((((-58 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 5] : 0 <= d1 <= 99 and 0 <= d2 <= 131 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((100 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 73] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_1(((((-73 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_7[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 31] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_7(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_6[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 78] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_6(((((-78 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))
//   { op_hcompute_demosaicked_1_stencil_1[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 25] : 0 <= d1 <= 95 and 0 <= d2 <= 127 }
// Condition for op_hcompute_demosaicked_1_stencil_1(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((99 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((131 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 100; c1 += 1){ 
	#pragma hls_pipeline_init_interval 1 
	  for (int c2 = 0; c2 <= min(132, -c1 + 231); c2 += 1) { 
	    if (c1 <= 99 && c2 <= 131)
	      op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    if (c1 >= 1 && c2 <= 131)
	      op_hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1 - 1, c2);
	    if (c1 <= 99 && c2 >= 1)
	      op_hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2 - 1);
	    if (c1 <= 99 && c2 <= 131) {
	      op_hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	      op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    }
	    if (c1 >= 1 && c2 <= 131)
	      op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1 - 1, c2);
	    if (c1 <= 99 && c2 >= 1)
	      op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2 - 1);
	    if (c1 <= 99 && c2 <= 131) {
	      op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	      if (c1 >= 2 && c2 >= 2)
	        op_hcompute_denoised_1_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 2, c2 - 2);
	    }
	    if (c1 >= 3 && c2 >= 2 && c2 <= 131)
	      op_hcompute_denoised_1_stencil_1(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 3, c2 - 2);
	    if (c1 >= 2 && c1 <= 99 && c2 >= 3)
	      op_hcompute_denoised_1_stencil_2(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 2, c2 - 3);
	    if (c1 >= 2 && c1 <= 99 && c2 >= 2 && c2 <= 131) {
	      op_hcompute_denoised_1_stencil_3(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, denoised_1_stencil, 0, c1 - 2, c2 - 2);
	      if (c1 >= 3 && c2 >= 3)
	        op_hcompute_b_b_stencil(denoised_1_stencil /* buf name */, b_b_stencil, 0, c1 - 4, c2 - 3);
	      op_hcompute_g_gb_stencil(denoised_1_stencil /* buf name */, g_gb_stencil, 0, c1 - 3, c2 - 3);
	      op_hcompute_g_gr_stencil(denoised_1_stencil /* buf name */, g_gr_stencil, 0, c1 - 3, c2 - 3);
	      if (c1 >= 3 && c2 >= 3) {
	        op_hcompute_g_b_stencil(g_gb_stencil /* buf name */, g_gr_stencil /* buf name */, g_b_stencil, 0, c1 - 4, c2 - 3);
	        if (c1 >= 4 && c2 >= 4)
	          op_hcompute_b_gb_stencil(b_b_stencil /* buf name */, g_b_stencil /* buf name */, g_gb_stencil /* buf name */, b_gb_stencil, 0, c1 - 4, c2 - 4);
	        if (c1 >= 4 && c2 <= 130)
	          op_hcompute_b_gr_stencil(b_b_stencil /* buf name */, g_b_stencil /* buf name */, g_gr_stencil /* buf name */, b_gr_stencil, 0, c1 - 4, c2 - 3);
	        op_hcompute_g_r_stencil(g_gb_stencil /* buf name */, g_gr_stencil /* buf name */, g_r_stencil, 0, c1 - 3, c2 - 4);
	        if (c1 >= 4 && c2 >= 4)
	          op_hcompute_b_r_stencil(b_b_stencil /* buf name */, g_b_stencil /* buf name */, g_r_stencil /* buf name */, b_r_stencil, 0, c1 - 4, c2 - 4);
	        op_hcompute_r_r_stencil(denoised_1_stencil /* buf name */, r_r_stencil, 0, c1 - 3, c2 - 4);
	        if (c1 >= 4 && c2 >= 4) {
	          op_hcompute_r_b_stencil(g_b_stencil /* buf name */, g_r_stencil /* buf name */, r_r_stencil /* buf name */, r_b_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_r_gb_stencil(g_gb_stencil /* buf name */, g_r_stencil /* buf name */, r_r_stencil /* buf name */, r_gb_stencil, 0, c1 - 4, c2 - 4);
	        }
	        if (c1 <= 98 && c2 >= 4)
	          op_hcompute_r_gr_stencil(g_gr_stencil /* buf name */, g_r_stencil /* buf name */, r_r_stencil /* buf name */, r_gr_stencil, 0, c1 - 3, c2 - 4);
	        if (c1 >= 4 && c2 >= 4) {
	          op_hcompute_demosaicked_1_stencil(r_gr_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_1(g_gr_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_2(b_gr_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_3(r_b_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_4(g_b_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_5(b_b_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_6(r_r_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_7(g_r_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_8(b_r_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_9(r_gb_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_10(g_gb_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_demosaicked_1_stencil_11(b_gb_stencil /* buf name */, demosaicked_1_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_1(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_2(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_3(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_4(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_5(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_6(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_7(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_8(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_9(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_10(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_corrected_stencil_11(demosaicked_1_stencil /* buf name */, corrected_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_1(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_2(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_3(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_4(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_5(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_6(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_7(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_8(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_9(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_10(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_curved_stencil_11(corrected_stencil /* buf name */, curved_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_1(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_2(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_3(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_4(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_5(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_6(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_7(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_8(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_9(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_10(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_glb_stencil_11(curved_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_4, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_5, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_2(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_6, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_3(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_7, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_4(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_8, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_5(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_9, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_6(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_10, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_7(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_11, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_8(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_12, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_9(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_13, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_10(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_14, 0, c1 - 4, c2 - 4);
	          op_hcompute_hw_output_global_wrapper_stencil_11(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_15, 0, c1 - 4, c2 - 4);
	        }
	      }
	    }
	  }
	
	 } 
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void camera_pipeline_2x2_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_10, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_11, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_12, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_13, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_14, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_15, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_7, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_8, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_9, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    camera_pipeline_2x2(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_output_global_wrapper_stencil_clkwrk_10, hw_output_global_wrapper_stencil_clkwrk_11, hw_output_global_wrapper_stencil_clkwrk_12, hw_output_global_wrapper_stencil_clkwrk_13, hw_output_global_wrapper_stencil_clkwrk_14, hw_output_global_wrapper_stencil_clkwrk_15, hw_output_global_wrapper_stencil_clkwrk_4, hw_output_global_wrapper_stencil_clkwrk_5, hw_output_global_wrapper_stencil_clkwrk_6, hw_output_global_wrapper_stencil_clkwrk_7, hw_output_global_wrapper_stencil_clkwrk_8, hw_output_global_wrapper_stencil_clkwrk_9);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[-4 + 2hw_input_global_wrapper_s0_y_yio, -4 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 13200;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[-3 + 2hw_input_global_wrapper_s0_y_yio, -4 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers = 13200;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[-4 + 2hw_input_global_wrapper_s0_y_yio, -3 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers = 13200;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y_yio, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[-3 + 2hw_input_global_wrapper_s0_y_yio, -3 + 2hw_input_global_wrapper_s0_x_x] : 0 <= hw_input_global_wrapper_s0_y_yio <= 99 and 0 <= hw_input_global_wrapper_s0_x_x <= 131 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers = 13200;
  // { op_hcompute_hw_output_global_wrapper_stencil_6[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_10[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_7[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_11[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_8[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_12[2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_9[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_13[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_10[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_14[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_11[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_15[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 1 + 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_4[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_5[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_2[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_6[2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_3[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_7[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 0] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_4[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_8[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 1] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_num_transfers = 12288;
  // { op_hcompute_hw_output_global_wrapper_stencil_5[root = 0, hw_output_global_wrapper_s0_y_yi_yio, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_9[1 + 2hw_output_global_wrapper_s0_y_yi_yio, 2hw_output_global_wrapper_s0_x_xi_xi, 2] : 0 <= hw_output_global_wrapper_s0_y_yi_yio <= 95 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 127 }
const int op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_num_transfers = 12288;


extern "C" {

void camera_pipeline_2x2_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers*size);

  camera_pipeline_2x2_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0_num_transfers*size);
}

}
extern "C" {

void camera_pipeline_2x2_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  camera_pipeline_2x2(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_output_global_wrapper_stencil_6_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_7_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_8_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_9_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_10_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_11_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_2_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_3_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_4_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_5_write_pipe0);

}

}
#endif //__SYNTHESIS__

