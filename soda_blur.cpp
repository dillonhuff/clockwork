#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 30]}
	// Capacity: 33
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 15> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 15> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f1 inter false
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_16() {
		return f2;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f1 inter false
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct I_I_id1_2_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 33
	// # of read delays: 3
	hw_uint<16> f0;
	fifo<hw_uint<16>, 15> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 15> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_15() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f1 inter false
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_16() {
		return f2;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f3 inter false
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f1 inter false
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct I_cache {
  I_I_id0_0_merged_banks_3_cache I_I_id0_0_merged_banks_3;
  I_I_id1_2_merged_banks_3_cache I_I_id1_2_merged_banks_3;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I, int root, int ir, int ic) {
  I.I_I_id0_0_merged_banks_3.push(I_I_id0_0);
}

inline void I_I_id1_2_write(hw_uint<16>& I_I_id1_2, I_cache& I, int root, int ir, int ic) {
  I.I_I_id1_2_merged_banks_3.push(I_I_id1_2);
}

inline hw_uint<16> I_out_0_blur_30_10_select(I_cache& I, int root, int xr, int xc) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_0_blur_30_10 read pattern: { out_0_blur_30[root = 0, xr, xc] -> I[1 + xr, 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Read schedule : { out_0_blur_30[root = 0, xr, xc] -> [0, 2 + xr, xc, 1] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Write schedule: { I_id0[root = 0, ir, ic] -> [0, ir, ic, 0] : 0 <= ir <= 31 and 0 <= ic <= 15 }
  // DD fold: { out_0_blur_30[root, xr, xc] -> 16 : root = 0 and 0 <= xr <= 29 and 0 < xc <= 14; out_0_blur_30[root, xr, xc] -> (1 + xc) : root = 0 and xc = 15 and 0 <= xr <= 29; out_0_blur_30[root, xr, xc] -> 16 : root = 0 and xc = 0 and 0 <= xr <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_3.peek_16();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_0_blur_30_11_select(I_cache& I, int root, int xr, int xc) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_0_blur_30_11 read pattern: { out_0_blur_30[root = 0, xr, xc] -> I[2 + xr, 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Read schedule : { out_0_blur_30[root = 0, xr, xc] -> [0, 2 + xr, xc, 1] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Write schedule: { I_id0[root = 0, ir, ic] -> [0, ir, ic, 0] : 0 <= ir <= 31 and 0 <= ic <= 15 }
  // DD fold: {  }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_3.peek_0();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_0_blur_30_9_select(I_cache& I, int root, int xr, int xc) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_0_blur_30_9 read pattern: { out_0_blur_30[root = 0, xr, xc] -> I[xr, 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Read schedule : { out_0_blur_30[root = 0, xr, xc] -> [0, 2 + xr, xc, 1] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Write schedule: { I_id0[root = 0, ir, ic] -> [0, ir, ic, 0] : 0 <= ir <= 31 and 0 <= ic <= 15 }
  // DD fold: { out_0_blur_30[root, xr, xc] -> 32 : root = 0 and 0 <= xr <= 29 and 0 < xc <= 14; out_0_blur_30[root, xr, xc] -> (17 + xc) : root = 0 and xc = 15 and 0 <= xr <= 29; out_0_blur_30[root, xr, xc] -> 32 : root = 0 and xc = 0 and 0 <= xr <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_3.peek_32();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_1_blur_31_5_select(I_cache& I, int root, int xr, int xc) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_1_blur_31_5 read pattern: { out_1_blur_31[root = 0, xr, xc] -> I[xr, 1 + 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Read schedule : { out_1_blur_31[root = 0, xr, xc] -> [1, 2 + xr, xc, 1] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Write schedule: { I_id1[root = 0, ir, ic] -> [1, ir, ic, 0] : 0 <= ir <= 31 and 0 <= ic <= 15 }
  // DD fold: { out_1_blur_31[root, xr, xc] -> 32 : root = 0 and 0 <= xr <= 29 and 0 < xc <= 14; out_1_blur_31[root, xr, xc] -> (17 + xc) : root = 0 and xc = 15 and 0 <= xr <= 29; out_1_blur_31[root, xr, xc] -> 32 : root = 0 and xc = 0 and 0 <= xr <= 29 }
  auto value_I_I_id1_2 = I.I_I_id1_2_merged_banks_3.peek_32();
  return value_I_I_id1_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_1_blur_31_6_select(I_cache& I, int root, int xr, int xc) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_1_blur_31_6 read pattern: { out_1_blur_31[root = 0, xr, xc] -> I[1 + xr, 1 + 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Read schedule : { out_1_blur_31[root = 0, xr, xc] -> [1, 2 + xr, xc, 1] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Write schedule: { I_id1[root = 0, ir, ic] -> [1, ir, ic, 0] : 0 <= ir <= 31 and 0 <= ic <= 15 }
  // DD fold: { out_1_blur_31[root, xr, xc] -> 16 : root = 0 and 0 <= xr <= 29 and 0 < xc <= 14; out_1_blur_31[root, xr, xc] -> (1 + xc) : root = 0 and xc = 15 and 0 <= xr <= 29; out_1_blur_31[root, xr, xc] -> 16 : root = 0 and xc = 0 and 0 <= xr <= 29 }
  auto value_I_I_id1_2 = I.I_I_id1_2_merged_banks_3.peek_16();
  return value_I_I_id1_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_1_blur_31_7_select(I_cache& I, int root, int xr, int xc) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_1_blur_31_7 read pattern: { out_1_blur_31[root = 0, xr, xc] -> I[2 + xr, 1 + 2xc] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Read schedule : { out_1_blur_31[root = 0, xr, xc] -> [1, 2 + xr, xc, 1] : 0 <= xr <= 29 and 0 <= xc <= 15 }
  // Write schedule: { I_id1[root = 0, ir, ic] -> [1, ir, ic, 0] : 0 <= ir <= 31 and 0 <= ic <= 15 }
  // DD fold: {  }
  auto value_I_I_id1_2 = I.I_I_id1_2_merged_banks_3.peek_0();
  return value_I_I_id1_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 4
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int ir, int ic) {
	hw_uint<16> I_I_id0_0_res = I_id0_write.extract<0, 15>();
	I_I_id0_0_write(I_I_id0_0_res, I, root, ir, ic);
}

// I_id1_write
//	I_I_id1_2
inline void I_I_id1_write_bundle_write(hw_uint<16>& I_id1_write, I_cache& I, int root, int ir, int ic) {
	hw_uint<16> I_I_id1_2_res = I_id1_write.extract<0, 15>();
	I_I_id1_2_write(I_I_id1_2_res, I, root, ir, ic);
}

// out_0_blur_30_read
//	I_out_0_blur_30_9
//	I_out_0_blur_30_10
//	I_out_0_blur_30_11
inline hw_uint<48> I_out_0_blur_30_read_bundle_read(I_cache& I, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> I_out_0_blur_30_9_res = I_out_0_blur_30_9_select(I, root, xr, xc);
	set_at<0, 48>(result, I_out_0_blur_30_9_res);
	hw_uint<16> I_out_0_blur_30_10_res = I_out_0_blur_30_10_select(I, root, xr, xc);
	set_at<16, 48>(result, I_out_0_blur_30_10_res);
	hw_uint<16> I_out_0_blur_30_11_res = I_out_0_blur_30_11_select(I, root, xr, xc);
	set_at<32, 48>(result, I_out_0_blur_30_11_res);
	return result;
}

// out_1_blur_31_read
//	I_out_1_blur_31_5
//	I_out_1_blur_31_6
//	I_out_1_blur_31_7
inline hw_uint<48> I_out_1_blur_31_read_bundle_read(I_cache& I, int root, int xr, int xc) {
	hw_uint<48> result;
	hw_uint<16> I_out_1_blur_31_5_res = I_out_1_blur_31_5_select(I, root, xr, xc);
	set_at<0, 48>(result, I_out_1_blur_31_5_res);
	hw_uint<16> I_out_1_blur_31_6_res = I_out_1_blur_31_6_select(I, root, xr, xc);
	set_at<16, 48>(result, I_out_1_blur_31_6_res);
	hw_uint<16> I_out_1_blur_31_7_res = I_out_1_blur_31_7_select(I, root, xr, xc);
	set_at<32, 48>(result, I_out_1_blur_31_7_res);
	return result;
}



// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_0, I_cache& I, int root, int ir, int ic) {
	// Consume: in_0
	auto in_0_ir_c__ic_value = in_0.read();
	auto compute_result = id(in_0_ir_c__ic_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, ir, ic);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "I_id0," << (1*root + 0) << ", " << ir<< "," << ic<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void I_id1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_1, I_cache& I, int root, int ir, int ic) {
	// Consume: in_1
	auto in_1_ir_c__ic_value = in_1.read();
	auto compute_result = id(in_1_ir_c__ic_value);
	// Produce: I
	I_I_id1_write_bundle_write(compute_result, I, root, ir, ic);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "I_id1," << (1*root + 0) << ", " << ir<< "," << ic<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void out_1_blur_31(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out_1, int root, int xr, int xc) {
	// Consume: I
	auto I_xr__p__0_c__2_m_xc__p__1__p__0_value = I_out_1_blur_31_read_bundle_read(I/* source_delay */, root, xr, xc);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "out_1_blur_31_I," << root<< "," << xr<< "," << xc<< "," <<  I_xr__p__0_c__2_m_xc__p__1__p__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blur_3(I_xr__p__0_c__2_m_xc__p__1__p__0_value);
	// Produce: out_1
	out_1.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "out_1_blur_31," << (1*root + 0) << ", " << xr<< "," << xc<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void out_0_blur_30(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out_0, int root, int xr, int xc) {
	// Consume: I
	auto I_xr__p__0_c__2_m_xc__p__0__p__0_value = I_out_0_blur_30_read_bundle_read(I/* source_delay */, root, xr, xc);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "out_0_blur_30_I," << root<< "," << xr<< "," << xc<< "," <<  I_xr__p__0_c__2_m_xc__p__0__p__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blur_3(I_xr__p__0_c__2_m_xc__p__0__p__0_value);
	// Produce: out_0
	out_0.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "out_0_blur_30," << (1*root + 0) << ", " << xr<< "," << xc<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void soda_blur(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_1, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out_0, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("soda_blur_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
	{
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	I_id0(in_0, I, 0, c1, c2);
	      if (c1 >= 2)
	out_0_blur_30(I, out_0, 0, c1 - 2, c2);
	    }
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 15; c2 += 1) {
	I_id1(in_1, I, 0, c1, c2);
	      if (c1 >= 2)
	out_1_blur_31(I, out_1, 0, c1 - 2, c2);
	    }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
