#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "clockwork_standard_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct down_x_merged34_0_to_down_pw_math_down69_merged37_14_cache {
	// RAM Box: {[0, 18], [0, 19], [0, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct down_x_merged34_1_to_down_pw_math_down69_merged37_15_cache {
	// RAM Box: {[1, 19], [0, 19], [0, 2]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct down_cache {
  // Reader addrs...
    // { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> down[2pw_math_down69, pw_math_down68, pw_math_down67] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
    // { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> down[1 + 2pw_math_down69, pw_math_down68, pw_math_down67] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
  // # of banks: 2
  down_x_merged34_0_to_down_pw_math_down69_merged37_14_cache down_x_merged34_0_to_down_pw_math_down69_merged37_14;
  down_x_merged34_1_to_down_pw_math_down69_merged37_15_cache down_x_merged34_1_to_down_pw_math_down69_merged37_15;
};



inline void down_x_merged34_0_write(hw_uint<32> & down_x_merged34_0, down_cache& down, int root, int c, int y, int x, int dynamic_address) {
  down.down_x_merged34_0_to_down_pw_math_down69_merged37_14.push(down_x_merged34_0);
}

inline void down_x_merged34_1_write(hw_uint<32> & down_x_merged34_1, down_cache& down, int root, int c, int y, int x, int dynamic_address) {
  down.down_x_merged34_1_to_down_pw_math_down69_merged37_15.push(down_x_merged34_1);
}

inline hw_uint<32>  down_pw_math_down69_merged37_14_select(down_cache& down, int root, int pw_math_down67, int pw_math_down68, int pw_math_down69, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // down_pw_math_down69_merged37_14 read pattern: { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> down[2pw_math_down69, pw_math_down68, pw_math_down67] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
  // Read schedule : { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> [pw_math_down67, 19 + pw_math_down68, pw_math_down69, 2] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
  // Write schedule: { x_merged34[root = 0, c, y, x] -> [c, 19 + y, x, 1] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  auto value_down_x_merged34_0 = down.down_x_merged34_0_to_down_pw_math_down69_merged37_14.peek(/* one reader or all rams */ 0);
  return value_down_x_merged34_0;
  return 0;
}

inline hw_uint<32>  down_pw_math_down69_merged37_15_select(down_cache& down, int root, int pw_math_down67, int pw_math_down68, int pw_math_down69, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // down_pw_math_down69_merged37_15 read pattern: { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> down[1 + 2pw_math_down69, pw_math_down68, pw_math_down67] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
  // Read schedule : { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> [pw_math_down67, 19 + pw_math_down68, pw_math_down69, 2] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
  // Write schedule: { x_merged34[root = 0, c, y, x] -> [c, 19 + y, x, 1] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  auto value_down_x_merged34_1 = down.down_x_merged34_1_to_down_pw_math_down69_merged37_15.peek(/* one reader or all rams */ 0);
  return value_down_x_merged34_1;
  return 0;
}

// # of bundles = 2
// pw_math_down69_merged37_read
//	down_pw_math_down69_merged37_14
//	down_pw_math_down69_merged37_15
inline hw_uint<64> down_pw_math_down69_merged37_read_bundle_read(down_cache& down, int root, int pw_math_down67, int pw_math_down68, int pw_math_down69, int dynamic_address) {
  // # of ports in bundle: 2
    // down_pw_math_down69_merged37_14
    // down_pw_math_down69_merged37_15

	hw_uint<64> result;
	hw_uint<32>  down_pw_math_down69_merged37_14_res = down_pw_math_down69_merged37_14_select(down, root, pw_math_down67, pw_math_down68, pw_math_down69, dynamic_address);
	set_at<0, 64>(result, down_pw_math_down69_merged37_14_res);
	hw_uint<32>  down_pw_math_down69_merged37_15_res = down_pw_math_down69_merged37_15_select(down, root, pw_math_down67, pw_math_down68, pw_math_down69, dynamic_address);
	set_at<32, 64>(result, down_pw_math_down69_merged37_15_res);
	return result;
}

// x_merged34_write
//	down_x_merged34_0
//	down_x_merged34_1
inline void down_x_merged34_write_bundle_write(hw_uint<64>& x_merged34_write, down_cache& down, int root, int c, int y, int x, int dynamic_address) {
	hw_uint<32>  down_x_merged34_0_res = x_merged34_write.extract<0, 31>();
	down_x_merged34_0_write(down_x_merged34_0_res, down, root, c, y, x, dynamic_address);
	hw_uint<32>  down_x_merged34_1_res = x_merged34_write.extract<32, 63>();
	down_x_merged34_1_write(down_x_merged34_1_res, down, root, c, y, x, dynamic_address);
}

struct in_pw_math_in_oc03_merged32_4_to_in_x_merged34_2_cache {
	// RAM Box: {[0, 36], [0, 38], [0, 2]}
	// Capacity: 191
	// # of read delays: 182
  // 0, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190
	fifo<hw_uint<32> , 191> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(190 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_pw_math_in_oc03_merged32_6_to_in_x_merged34_3_cache {
	// RAM Box: {[2, 38], [0, 38], [0, 2]}
	// Capacity: 191
	// # of read delays: 182
  // 0, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190
	fifo<hw_uint<32> , 191> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(190 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  // Reader addrs...
    // { x_merged34[root = 0, c, y, x] -> in[4x, 2y, c] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
    // { x_merged34[root = 0, c, y, x] -> in[2 + 4x, 2y, c] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  // # of banks: 2
  in_pw_math_in_oc03_merged32_4_to_in_x_merged34_2_cache in_pw_math_in_oc03_merged32_4_to_in_x_merged34_2;
  in_pw_math_in_oc03_merged32_6_to_in_x_merged34_3_cache in_pw_math_in_oc03_merged32_6_to_in_x_merged34_3;
};



inline void in_pw_math_in_oc03_merged32_4_write(hw_uint<32> & in_pw_math_in_oc03_merged32_4, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int pw_math_in_oc03, int dynamic_address) {
  in.in_pw_math_in_oc03_merged32_4_to_in_x_merged34_2.push(in_pw_math_in_oc03_merged32_4);
}

inline void in_pw_math_in_oc03_merged32_5_write(hw_uint<32> & in_pw_math_in_oc03_merged32_5, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int pw_math_in_oc03, int dynamic_address) {
}

inline void in_pw_math_in_oc03_merged32_6_write(hw_uint<32> & in_pw_math_in_oc03_merged32_6, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int pw_math_in_oc03, int dynamic_address) {
  in.in_pw_math_in_oc03_merged32_6_to_in_x_merged34_3.push(in_pw_math_in_oc03_merged32_6);
}

inline void in_pw_math_in_oc03_merged32_7_write(hw_uint<32> & in_pw_math_in_oc03_merged32_7, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int pw_math_in_oc03, int dynamic_address) {
}

inline hw_uint<32>  in_x_merged34_2_select(in_cache& in, int root, int c, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged34_2 read pattern: { x_merged34[root = 0, c, y, x] -> in[4x, 2y, c] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  // Read schedule : { x_merged34[root = 0, c, y, x] -> [c, 19 + y, x, 1] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  // Write schedule: { pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> [pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, 0] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9 }
  auto value_in_pw_math_in_oc03_merged32_4 = in.in_pw_math_in_oc03_merged32_4_to_in_x_merged34_2.peek(/* one reader or all rams */ (-18 + y == 0 && 8 - x >= 0) ? (10) : (8 - x >= 0 && 17 - y >= 0) ? ((190 - 10 * y)) : (-9 + x == 0 && -18 + y == 0) ? (10) : (-9 + x == 0 && 17 - y >= 0) ? ((190 - 10 * y)) : 0);
  return value_in_pw_math_in_oc03_merged32_4;
  return 0;
}

inline hw_uint<32>  in_x_merged34_3_select(in_cache& in, int root, int c, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_x_merged34_3 read pattern: { x_merged34[root = 0, c, y, x] -> in[2 + 4x, 2y, c] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  // Read schedule : { x_merged34[root = 0, c, y, x] -> [c, 19 + y, x, 1] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
  // Write schedule: { pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> [pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, 0] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9 }
  auto value_in_pw_math_in_oc03_merged32_6 = in.in_pw_math_in_oc03_merged32_6_to_in_x_merged34_3.peek(/* one reader or all rams */ (-18 + y == 0 && 8 - x >= 0) ? (10) : (8 - x >= 0 && 17 - y >= 0) ? ((190 - 10 * y)) : (-9 + x == 0 && -18 + y == 0) ? (10) : (-9 + x == 0 && 17 - y >= 0) ? ((190 - 10 * y)) : 0);
  return value_in_pw_math_in_oc03_merged32_6;
  return 0;
}

// # of bundles = 2
// pw_math_in_oc03_merged32_write
//	in_pw_math_in_oc03_merged32_4
//	in_pw_math_in_oc03_merged32_5
//	in_pw_math_in_oc03_merged32_6
//	in_pw_math_in_oc03_merged32_7
inline void in_pw_math_in_oc03_merged32_write_bundle_write(hw_uint<128>& pw_math_in_oc03_merged32_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int pw_math_in_oc03, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc03_merged32_4_res = pw_math_in_oc03_merged32_write.extract<0, 31>();
	in_pw_math_in_oc03_merged32_4_write(in_pw_math_in_oc03_merged32_4_res, in, root, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc03_merged32_5_res = pw_math_in_oc03_merged32_write.extract<32, 63>();
	in_pw_math_in_oc03_merged32_5_write(in_pw_math_in_oc03_merged32_5_res, in, root, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc03_merged32_6_res = pw_math_in_oc03_merged32_write.extract<64, 95>();
	in_pw_math_in_oc03_merged32_6_write(in_pw_math_in_oc03_merged32_6_res, in, root, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, dynamic_address);
	hw_uint<32>  in_pw_math_in_oc03_merged32_7_res = pw_math_in_oc03_merged32_write.extract<96, 127>();
	in_pw_math_in_oc03_merged32_7_write(in_pw_math_in_oc03_merged32_7_res, in, root, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, dynamic_address);
}

// x_merged34_read
//	in_x_merged34_2
//	in_x_merged34_3
inline hw_uint<64> in_x_merged34_read_bundle_read(in_cache& in, int root, int c, int y, int x, int dynamic_address) {
  // # of ports in bundle: 2
    // in_x_merged34_2
    // in_x_merged34_3

	hw_uint<64> result;
	hw_uint<32>  in_x_merged34_2_res = in_x_merged34_2_select(in, root, c, y, x, dynamic_address);
	set_at<0, 64>(result, in_x_merged34_2_res);
	hw_uint<32>  in_x_merged34_3_res = in_x_merged34_3_select(in, root, c, y, x, dynamic_address);
	set_at<32, 64>(result, in_x_merged34_3_res);
	return result;
}

// Total re-use buffer capacity: 12160 bits


// Operation logic
inline void pw_math_in_oc03_merged32(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */in_oc, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int pw_math_in_oc03) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc__lp_4_m_pw_math_in_oc03__p__0_rp__c____pw_math_in_oc02_c____pw_math_in_oc01_value = in_oc.read();
	auto compute_result = pw_math_in_oc03_cu30(in_oc__lp_4_m_pw_math_in_oc03__p__0_rp__c____pw_math_in_oc02_c____pw_math_in_oc01_value);
	// Produce: in
	in_pw_math_in_oc03_merged32_write_bundle_write(/* arg names */compute_result, in, root, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void x_merged34(in_cache& in, down_cache& down, int root, int c, int y, int x) {
  // Dynamic address computation

	// Consume: in
	auto in_2_m__lp_2_m_x__p__0_rp__c____2_m_y_c____c_value = in_x_merged34_read_bundle_read(in/* source_delay */, root, c, y, x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = x_cu33(in_2_m__lp_2_m_x__p__0_rp__c____2_m_y_c____c_value);
	// Produce: down
	down_x_merged34_write_bundle_write(/* arg names */compute_result, down, root, c, y, x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_down69_merged37(down_cache& down, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */out, int root, int pw_math_down67, int pw_math_down68, int pw_math_down69) {
  // Dynamic address computation

	// Consume: down
	auto down__lp_2_m_pw_math_down69__p__0_rp__c____pw_math_down68_c____pw_math_down67_value = down_pw_math_down69_merged37_read_bundle_read(down/* source_delay */, root, pw_math_down67, pw_math_down68, pw_math_down69, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_down69_cu35(down__lp_2_m_pw_math_down69__p__0_rp__c____pw_math_down68_c____pw_math_down67_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void infer_bounds_downsample(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("infer_bounds_downsample_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  down_cache down;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { x_merged34[root = 0, c, y, x] -> [c, 19 + y, x, 1] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9; pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> [pw_math_down67, 19 + pw_math_down68, pw_math_down69, 2] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9; pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> [pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, 0] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9 }
//   { x_merged34[root = 0, c, y, x] -> [c, 19 + y, x, 1] : 0 <= c <= 2 and 0 <= y <= 19 and 0 <= x <= 9 }
// Condition for x_merged34(((((-1 + 1*i3)) == 0) && (((1*i0)) >= 0) && (((2 + -1*i0)) >= 0) && (((-19 + 1*i1)) >= 0) && (((38 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((9 + -1*i2)) >= 0)))
//   { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> [pw_math_down67, 19 + pw_math_down68, pw_math_down69, 2] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
// Condition for pw_math_down69_merged37(((((-2 + 1*i3)) == 0) && (((1*i0)) >= 0) && (((2 + -1*i0)) >= 0) && (((-19 + 1*i1)) >= 0) && (((38 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((9 + -1*i2)) >= 0)))
//   { pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> [pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03, 0] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9 }
// Condition for pw_math_in_oc03_merged32(((((1*i3)) == 0) && (((1*i0)) >= 0) && (((2 + -1*i0)) >= 0) && (((1*i1)) >= 0) && (((38 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((9 + -1*i2)) >= 0)))

	for (int c0 = 0; c0 <= 2; c0 += 1)
	  for (int c1 = 0; c1 <= 38; c1 += 1)
	    for (int c2 = 0; c2 <= 9; c2 += 1) {
	      pw_math_in_oc03_merged32(in_oc /* buf name */, in, 0, c0, c1, c2);
	      if (c1 >= 19) {
	        x_merged34(in /* buf name */, down, 0, c0, c1 - 19, c2);
	        pw_math_down69_merged37(down /* buf name */, out, 0, c0, c1 - 19, c2);
	      }
	    }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void infer_bounds_downsample_wrapper(HWStream<hw_uint<128> >& /* no bundle get_args num ports = 4 */in_oc, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    infer_bounds_downsample(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> in_oc[3 + 4pw_math_in_oc03, pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9; pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> in_oc[2 + 4pw_math_in_oc03, pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9; pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> in_oc[1 + 4pw_math_in_oc03, pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9; pw_math_in_oc03_merged32[root = 0, pw_math_in_oc01, pw_math_in_oc02, pw_math_in_oc03] -> in_oc[4pw_math_in_oc03, pw_math_in_oc02, pw_math_in_oc01] : 0 <= pw_math_in_oc01 <= 2 and 0 <= pw_math_in_oc02 <= 38 and 0 <= pw_math_in_oc03 <= 9 }
const int pw_math_in_oc03_merged32_read_pipe0_num_transfers = 1170;
  // { pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> out[1 + 2pw_math_down69, pw_math_down68, pw_math_down67] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9; pw_math_down69_merged37[root = 0, pw_math_down67, pw_math_down68, pw_math_down69] -> out[2pw_math_down69, pw_math_down68, pw_math_down67] : 0 <= pw_math_down67 <= 2 and 0 <= pw_math_down68 <= 19 and 0 <= pw_math_down69 <= 9 }
const int pw_math_down69_merged37_write_pipe0_num_transfers = 600;


extern "C" {

void infer_bounds_downsample_accel(hw_uint<128>* pw_math_in_oc03_merged32_read_pipe0, hw_uint<64>* pw_math_down69_merged37_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc03_merged32_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_down69_merged37_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc03_merged32_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_down69_merged37_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > pw_math_in_oc03_merged32_read_pipe0_channel;
  static HWStream<hw_uint<64> > pw_math_down69_merged37_write_pipe0_channel;

  burst_read<128>(pw_math_in_oc03_merged32_read_pipe0, pw_math_in_oc03_merged32_read_pipe0_channel, pw_math_in_oc03_merged32_read_pipe0_num_transfers*size);

  infer_bounds_downsample_wrapper(pw_math_in_oc03_merged32_read_pipe0_channel, pw_math_down69_merged37_write_pipe0_channel, size);

  burst_write<64>(pw_math_down69_merged37_write_pipe0, pw_math_down69_merged37_write_pipe0_channel, pw_math_down69_merged37_write_pipe0_num_transfers*size);
}

}
extern "C" {

void infer_bounds_downsample_rdai(HWStream<hw_uint<128> >& pw_math_in_oc03_merged32_read_pipe0, HWStream<hw_uint<64> >&  pw_math_down69_merged37_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc03_merged32_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_down69_merged37_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  infer_bounds_downsample(pw_math_in_oc03_merged32_read_pipe0, pw_math_down69_merged37_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

