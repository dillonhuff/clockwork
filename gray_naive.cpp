#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct Img_Img_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 31], [0, 31], [0, 2]}
	// Capacity: 2049
	// # of read delays: 3
	fifo<hw_uint<32> , 2049> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.peek(2048 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f inter false
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct Img_cache {
  Img_Img_update_0_write0_merged_banks_3_cache Img_Img_update_0_write0_merged_banks_3;
};



inline void Img_Img_update_0_write0_write(hw_uint<32> & Img_Img_update_0_write0, Img_cache& Img, int d0, int d1, int d2) {
  Img.Img_Img_update_0_write0_merged_banks_3.push(Img_Img_update_0_write0);
}

inline hw_uint<32>  gray_rd0_select(Img_cache& Img, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif //__VIVADO_SYNTH__
  // gray_rd0 read pattern: { gray_update_0[d0, d1, d2 = 0] -> Img[d0, d1, 0] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { gray_update_0[i0, i1, 0] -> [2, i1, i0, 2] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { Img_update_0[i0, i1, i2] -> [i2, i1, i0, 1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 and 0 <= i2 <= 2 }
  // DD fold: { gray_update_0[d0, d1, d2] -> 2048 : d2 = 0 and 0 < d0 <= 30 and 0 < d1 <= 30; gray_update_0[d0, d1, d2] -> (2017 + d0) : d0 = 31 and d2 = 0 and 0 < d1 <= 30; gray_update_0[d0, d1, d2] -> 2048 : d1 = 31 and d2 = 0 and 0 < d0 <= 30; gray_update_0[d0, d1, d2] -> ((1025 + d0) + 32 * d1) : d0 = 31 and d1 = 31 and d2 = 0; gray_update_0[d0, d1, d2] -> 2048 : d0 = 0 and d2 = 0 and 0 < d1 <= 30; gray_update_0[d0, d1, d2] -> 2048 : d0 = 0 and d1 = 31 and d2 = 0; gray_update_0[d0, d1, d2] -> 2048 : d1 = 0 and d2 = 0 and 0 < d0 <= 30; gray_update_0[d0, d1, d2] -> (2017 + d0) : d0 = 31 and d1 = 0 and d2 = 0; gray_update_0[d0, d1, d2] -> 2048 : d0 = 0 and d1 = 0 and d2 = 0 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_merged_banks_3.peek(/* one reader or all rams */ (30 - d0 >= 0) ? (2048) : (-31 + d0 == 0 && 30 - d1 >= 0) ? (2048) : (-31 + d1 == 0 && -31 + d0 == 0) ? (2048) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gray_rd1_select(Img_cache& Img, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif //__VIVADO_SYNTH__
  // gray_rd1 read pattern: { gray_update_0[d0, d1, d2 = 0] -> Img[d0, d1, 1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { gray_update_0[i0, i1, 0] -> [2, i1, i0, 2] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { Img_update_0[i0, i1, i2] -> [i2, i1, i0, 1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 and 0 <= i2 <= 2 }
  // DD fold: { gray_update_0[d0, d1, d2] -> 1024 : d2 = 0 and 0 < d0 <= 30 and 0 < d1 <= 30; gray_update_0[d0, d1, d2] -> (993 + d0) : d0 = 31 and d2 = 0 and 0 < d1 <= 30; gray_update_0[d0, d1, d2] -> 1024 : d1 = 31 and d2 = 0 and 0 < d0 <= 30; gray_update_0[d0, d1, d2] -> ((1 + d0) + 32 * d1) : d0 = 31 and d1 = 31 and d2 = 0; gray_update_0[d0, d1, d2] -> 1024 : d0 = 0 and d2 = 0 and 0 < d1 <= 30; gray_update_0[d0, d1, d2] -> 1024 : d0 = 0 and d1 = 31 and d2 = 0; gray_update_0[d0, d1, d2] -> 1024 : d1 = 0 and d2 = 0 and 0 < d0 <= 30; gray_update_0[d0, d1, d2] -> (993 + d0) : d0 = 31 and d1 = 0 and d2 = 0; gray_update_0[d0, d1, d2] -> 1024 : d0 = 0 and d1 = 0 and d2 = 0 }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_merged_banks_3.peek(/* one reader or all rams */ (30 - d0 >= 0) ? (1024) : (-31 + d0 == 0 && 30 - d1 >= 0) ? (1024) : (-31 + d1 == 0 && -31 + d0 == 0) ? (1024) : 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  gray_rd2_select(Img_cache& Img, int d0, int d1, int d2) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif //__VIVADO_SYNTH__
  // gray_rd2 read pattern: { gray_update_0[d0, d1, d2 = 0] -> Img[d0, d1, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { gray_update_0[i0, i1, 0] -> [2, i1, i0, 2] : 0 <= i0 <= 31 and 0 <= i1 <= 31 }
  // Write schedule: { Img_update_0[i0, i1, i2] -> [i2, i1, i0, 1] : 0 <= i0 <= 31 and 0 <= i1 <= 31 and 0 <= i2 <= 2 }
  // DD fold: {  }
  auto value_Img_Img_update_0_write0 = Img.Img_Img_update_0_write0_merged_banks_3.peek(/* one reader or all rams */ 0);
  return value_Img_Img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << " d2 = " << d2  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// Img_update_0_write
//	Img_Img_update_0_write0
inline void Img_Img_update_0_write_bundle_write(hw_uint<32>& Img_update_0_write, Img_cache& Img, int d0, int d1, int d2) {
	hw_uint<32>  Img_Img_update_0_write0_res = Img_update_0_write.extract<0, 31>();
	Img_Img_update_0_write0_write(Img_Img_update_0_write0_res, Img, d0, d1, d2);
}

// gray_update_0_read
//	gray_rd0
//	gray_rd1
//	gray_rd2
inline hw_uint<96> Img_gray_update_0_read_bundle_read(Img_cache& Img, int d0, int d1, int d2) {
	hw_uint<96> result;
	hw_uint<32>  gray_rd0_res = gray_rd0_select(Img, d0, d1, d2);
	set_at<0, 96>(result, gray_rd0_res);
	hw_uint<32>  gray_rd1_res = gray_rd1_select(Img, d0, d1, d2);
	set_at<32, 96>(result, gray_rd1_res);
	hw_uint<32>  gray_rd2_res = gray_rd2_select(Img, d0, d1, d2);
	set_at<64, 96>(result, gray_rd2_res);
	return result;
}



// Operation logic
inline void Img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */Img_off, Img_cache& Img, int d0, int d1, int d2) {
	// Consume: Img_off
	auto Img_off_0_c__0_value = Img_off.read();
	auto compute_result = id(Img_off_0_c__0_value);
	// Produce: Img
	Img_Img_update_0_write_bundle_write(compute_result, Img, d0, d1, d2);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "Img_update_0," << (1*d0 + 0) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void gray_update_0(Img_cache& Img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray, int d0, int d1, int d2) {
	// Consume: Img
	auto Img_0_c__0_value = Img_gray_update_0_read_bundle_read(Img/* source_delay */, d0, d1, d2);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gray_update_0_Img," << d0<< "," << d1<< "," << d2<< "," <<  Img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = avg(Img_0_c__0_value);
	// Produce: gray
	gray.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "gray_update_0," << (1*d0 + 0) << ", " << d1<< "," << d2<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void gray_naive(HWStream<hw_uint<32> >& /* get_args num ports = 1 */Img_off, HWStream<hw_uint<32> >& /* get_args num ports = 1 */gray) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gray_naive_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  Img_cache Img;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=Img inter false
#endif //__VIVADO_SYNTH__
	for (int c0 = 0; c0 <= 2; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 31; c2 += 1) {
	Img_update_0(Img_off, Img, c2, c1, c0);
	      if (c0 == 2)
	gray_update_0(Img, gray, c2, c1, 0);
	    }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
