#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "sobel_16_stage_x_unrolled_1_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[-1, 30], [-1, 30]}
	// Capacity: 67
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 29> f3;
	hw_uint<16> f4;
	hw_uint<16> f5;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 29> f7;
	hw_uint<16> f8;
	hw_uint<16> f9;
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

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_32() {
		return f4;
	}

	inline hw_uint<16> peek_33() {
		return f5;
	}

	inline hw_uint<16> peek_34() {
		return f6;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_64() {
		return f8;
	}

	inline hw_uint<16> peek_65() {
		return f9;
	}

	inline hw_uint<16> peek_66() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f9 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f7.push(f6);
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
    // cap: 1 reading from capacity: 29
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
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

struct img_cache {
  img_img_update_0_write0_merged_banks_6_cache img_img_update_0_write0_merged_banks_6;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1) {
  img.img_img_update_0_write0_merged_banks_6.push(img_img_update_0_write0);
}

inline hw_uint<16> sobel_16_stage_x_unrolled_1_rd0_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_16_stage_x_unrolled_1_rd0 read pattern: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> img[-1 + d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> 66 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_66();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sobel_16_stage_x_unrolled_1_rd1_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_16_stage_x_unrolled_1_rd1 read pattern: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> img[-1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> 34 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_34();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sobel_16_stage_x_unrolled_1_rd2_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_16_stage_x_unrolled_1_rd2 read pattern: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> img[-1 + d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> 2 : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_2();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sobel_16_stage_x_unrolled_1_rd3_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_16_stage_x_unrolled_1_rd3 read pattern: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> img[1 + d0, -1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> 64 : 0 <= d0 <= 28 and 0 <= d1 <= 29; sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> (35 + d0) : d0 = 29 and 0 <= d1 <= 29 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_64();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sobel_16_stage_x_unrolled_1_rd4_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_16_stage_x_unrolled_1_rd4 read pattern: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> img[1 + d0, d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
  // DD fold: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> 32 : 0 <= d0 <= 28 and 0 <= d1 <= 29; sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> (3 + d0) : d0 = 29 and 0 <= d1 <= 29 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_32();
  return value_img_img_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> sobel_16_stage_x_unrolled_1_rd5_select(img_cache& img, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sobel_16_stage_x_unrolled_1_rd5 read pattern: { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> img[1 + d0, 1 + d1] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Read schedule : { sobel_16_stage_x_unrolled_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 29 and 0 <= d1 <= 29 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 30 and -1 <= d1 <= 30 }
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
inline void img_img_update_0_write_bundle_write(hw_uint<16>& img_update_0_write, img_cache& img, int d0, int d1) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1);
}

// sobel_16_stage_x_unrolled_1_update_0_read
//	sobel_16_stage_x_unrolled_1_rd0
//	sobel_16_stage_x_unrolled_1_rd1
//	sobel_16_stage_x_unrolled_1_rd2
//	sobel_16_stage_x_unrolled_1_rd3
//	sobel_16_stage_x_unrolled_1_rd4
//	sobel_16_stage_x_unrolled_1_rd5
inline hw_uint<96> img_sobel_16_stage_x_unrolled_1_update_0_read_bundle_read(img_cache& img, int d0, int d1) {
  // # of ports in bundle: 6
    // sobel_16_stage_x_unrolled_1_rd0
    // sobel_16_stage_x_unrolled_1_rd1
    // sobel_16_stage_x_unrolled_1_rd2
    // sobel_16_stage_x_unrolled_1_rd3
    // sobel_16_stage_x_unrolled_1_rd4
    // sobel_16_stage_x_unrolled_1_rd5

	hw_uint<96> result;
	hw_uint<16> sobel_16_stage_x_unrolled_1_rd0_res = sobel_16_stage_x_unrolled_1_rd0_select(img, d0, d1);
	set_at<0, 96>(result, sobel_16_stage_x_unrolled_1_rd0_res);
	hw_uint<16> sobel_16_stage_x_unrolled_1_rd1_res = sobel_16_stage_x_unrolled_1_rd1_select(img, d0, d1);
	set_at<16, 96>(result, sobel_16_stage_x_unrolled_1_rd1_res);
	hw_uint<16> sobel_16_stage_x_unrolled_1_rd2_res = sobel_16_stage_x_unrolled_1_rd2_select(img, d0, d1);
	set_at<32, 96>(result, sobel_16_stage_x_unrolled_1_rd2_res);
	hw_uint<16> sobel_16_stage_x_unrolled_1_rd3_res = sobel_16_stage_x_unrolled_1_rd3_select(img, d0, d1);
	set_at<48, 96>(result, sobel_16_stage_x_unrolled_1_rd3_res);
	hw_uint<16> sobel_16_stage_x_unrolled_1_rd4_res = sobel_16_stage_x_unrolled_1_rd4_select(img, d0, d1);
	set_at<64, 96>(result, sobel_16_stage_x_unrolled_1_rd4_res);
	hw_uint<16> sobel_16_stage_x_unrolled_1_rd5_res = sobel_16_stage_x_unrolled_1_rd5_select(img, d0, d1);
	set_at<80, 96>(result, sobel_16_stage_x_unrolled_1_rd5_res);
	return result;
}



// Operation logic
inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */off_chip_img, img_cache& img, int d0, int d1) {
	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_1(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(compute_result, img, d0, d1);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "img_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void sobel_16_stage_x_unrolled_1_update_0(img_cache& img, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */sobel_16_stage_x_unrolled_1, int d0, int d1) {
	// Consume: img
	auto img_0_c__0_value = img_sobel_16_stage_x_unrolled_1_update_0_read_bundle_read(img/* source_delay */, d0, d1);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "sobel_16_stage_x_unrolled_1_update_0_img," << d0<< "," << d1<< "," <<  img_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = sobel_16_stage_x_unrolled_1_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: sobel_16_stage_x_unrolled_1
	sobel_16_stage_x_unrolled_1.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "sobel_16_stage_x_unrolled_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void sobel_16_stage_x_unrolled_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */off_chip_img, HWStream<hw_uint<16> >& /* get_args num ports = 1 */sobel_16_stage_x_unrolled_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sobel_16_stage_x_unrolled_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = -1; c0 <= 30; c0++) {
	  for (int c1 = -1; c1 <= 30; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 30) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 30) && ((c0 - 0) % 1 == 0)) {
	img_update_0(off_chip_img, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 30) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 30) && ((c0 - 1) % 1 == 0)) {
	sobel_16_stage_x_unrolled_1_update_0(img, sobel_16_stage_x_unrolled_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
