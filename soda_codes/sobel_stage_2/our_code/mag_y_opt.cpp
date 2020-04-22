#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "mag_y_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
	// Capacity: 71
	// # of read delays: 6
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_68() {
		return f6;
	}

	inline hw_uint<32>  peek_69() {
		return f8;
	}

	inline hw_uint<32>  peek_70() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_cache {
  img_img_update_0_write0_merged_banks_6_cache img_img_update_0_write0_merged_banks_6;
};



inline void img_img_update_0_write0_write(hw_uint<32> & img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_6.push(img_img_update_0_write0);
}

inline hw_uint<32>  mag_y_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { mag_y_update_0[d0, d1] -> 70 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_70();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mag_y_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { mag_y_update_0[d0, d1] -> 2 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_2();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mag_y_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { mag_y_update_0[d0, d1] -> 69 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_69();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mag_y_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { mag_y_update_0[d0, d1] -> 1 : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_1();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mag_y_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: { mag_y_update_0[d0, d1] -> 68 : 0 <= d0 <= 30 and 0 <= d1 <= 31; mag_y_update_0[d0, d1] -> (37 + d0) : d0 = 31 and 0 <= d1 <= 31 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_68();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  mag_y_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  // DD fold: {  }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_0();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<32>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<32>  img_img_update_0_write0_res = img_update_0_write.extract<0, 31>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
}

// mag_y_update_0_read
//	mag_y_rd0
//	mag_y_rd1
//	mag_y_rd2
//	mag_y_rd3
//	mag_y_rd4
//	mag_y_rd5
inline hw_uint<192> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 6
    // mag_y_rd0
    // mag_y_rd1
    // mag_y_rd2
    // mag_y_rd3
    // mag_y_rd4
    // mag_y_rd5

	hw_uint<192> result;
	hw_uint<32>  mag_y_rd0_res = mag_y_rd0_select(img, d0, d1);
	set_at<0, 192>(result, mag_y_rd0_res);
	hw_uint<32>  mag_y_rd1_res = mag_y_rd1_select(img, d0, d1);
	set_at<32, 192>(result, mag_y_rd1_res);
	hw_uint<32>  mag_y_rd2_res = mag_y_rd2_select(img, d0, d1);
	set_at<64, 192>(result, mag_y_rd2_res);
	hw_uint<32>  mag_y_rd3_res = mag_y_rd3_select(img, d0, d1);
	set_at<96, 192>(result, mag_y_rd3_res);
	hw_uint<32>  mag_y_rd4_res = mag_y_rd4_select(img, d0, d1);
	set_at<128, 192>(result, mag_y_rd4_res);
	hw_uint<32>  mag_y_rd5_res = mag_y_rd5_select(img, d0, d1);
	set_at<160, 192>(result, mag_y_rd5_res);
	return result;
}



// Operation logic
inline void mag_y_update_0(img_cache& img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mag_y, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_mag_y_update_0_read_bundle_read(img/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "mag_y_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = sobel_my_unrolled_1(img_0_c__0_value);
	// Produce: mag_y
	mag_y.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "mag_y_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */off_chip_img, img_cache& img, int d0, int d1) {
	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = id_unrolled_1(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<32> debug_compute_result_lane_0;
  set_at<0, 32, 32>(debug_compute_result_lane_0, debug_compute_result.extract<0, 31>());
  *global_debug_handle << "img_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void mag_y_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mag_y) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mag_y_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=img inter false
#endif //__VIVADO_SYNTH__
	for (int c0 = -1; c0 <= 32; c0 += 1)
	  for (int c1 = -1; c1 <= 32; c1 += 1) {
	img_update_0(off_chip_img, img, c1, c0);
	    if (c0 >= 1 && c1 >= 1)
	mag_y_update_0(img, mag_y, c1 - 1, c0 - 1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
