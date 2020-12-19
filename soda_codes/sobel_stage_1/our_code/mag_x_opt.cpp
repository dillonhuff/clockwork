#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mag_x_opt_compute_units.h
#include "mag_x_opt_compute_units.h"

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[-1, 32], [-1, 32]}
	// Capacity: 71
	// # of read delays: 6
  // 0, 2, 34, 36, 68, 70
	hw_uint<32>  f0;
	hw_uint<32>  f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 31> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f5;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 31> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f9;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f1;
	}

	inline hw_uint<32>  peek_2() {
		return f2;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_34() {
		return f4;
	}

	inline hw_uint<32>  peek_35() {
		return f5;
	}

	inline hw_uint<32>  peek_36() {
		return f6;
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_68() {
		return f8;
	}

	inline hw_uint<32>  peek_69() {
		return f9;
	}

	inline hw_uint<32>  peek_70() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 31
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
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
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
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
  // # of banks: 1
  img_img_update_0_write0_merged_banks_6_cache img_img_update_0_write0_merged_banks_6;
};



inline void img_img_update_0_write0_write(hw_uint<32> & img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_6.push(img_img_update_0_write0);
}

inline hw_uint<32>  mag_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_70();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_36();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_2();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + d0, -1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_68();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_34();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<32>  mag_x_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + d0, 1 + d1] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_6.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

// # of bundles = 2
// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<32>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<32>  img_img_update_0_write0_res = img_update_0_write.extract<0, 31>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
}

// mag_x_update_0_read
//	mag_x_rd0
//	mag_x_rd1
//	mag_x_rd2
//	mag_x_rd3
//	mag_x_rd4
//	mag_x_rd5
inline hw_uint<192> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 6
    // mag_x_rd0
    // mag_x_rd1
    // mag_x_rd2
    // mag_x_rd3
    // mag_x_rd4
    // mag_x_rd5

	hw_uint<192> result;
	hw_uint<32>  mag_x_rd0_res = mag_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 192>(result, mag_x_rd0_res);
	hw_uint<32>  mag_x_rd1_res = mag_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<32, 192>(result, mag_x_rd1_res);
	hw_uint<32>  mag_x_rd2_res = mag_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<64, 192>(result, mag_x_rd2_res);
	hw_uint<32>  mag_x_rd3_res = mag_x_rd3_select(img, d0, d1, dynamic_address);
	set_at<96, 192>(result, mag_x_rd3_res);
	hw_uint<32>  mag_x_rd4_res = mag_x_rd4_select(img, d0, d1, dynamic_address);
	set_at<128, 192>(result, mag_x_rd4_res);
	hw_uint<32>  mag_x_rd5_res = mag_x_rd5_select(img, d0, d1, dynamic_address);
	set_at<160, 192>(result, mag_x_rd5_res);
	return result;
}

// Total re-use buffer capacity: 2240 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */off_chip_img, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = id_unrolled_1(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(/* arg names */compute_result, img, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0(img_cache& img, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */mag_x, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sobel_mx_unrolled_1(img_0_c__0_value);
	// Produce: mag_x
	mag_x.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mag_x_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mag_x) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mag_x_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32; mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
//   { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 32 and -1 <= d1 <= 32 }
// Condition for img_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (32 - i1 >= 0) && (1 + i0 >= 0) && (32 - i0 >= 0)))
//   { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 31 and 0 <= d1 <= 31 }
// Condition for mag_x_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (32 - i1 >= 0) && (-1 + i0 >= 0) && (32 - i0 >= 0)))

  /*
for (int c0 = -1; c0 <= 32; c0 += 1)
  for (int c1 = -1; c1 <= 32; c1 += 1) {
    img_update_0(c1, c0);
    if (c0 >= 1 && c1 >= 1)
      mag_x_update_0(c1 - 1, c0 - 1);
  }

  */
	for (int c0 = -1; c0 <= 32; c0 += 1)
	  for (int c1 = -1; c1 <= 32; c1 += 1) {
	    img_update_0(off_chip_img /* buf name */, img, c1, c0);
	    if (c0 >= 1 && c1 >= 1)
	      mag_x_update_0(img /* buf name */, mag_x, c1 - 1, c0 - 1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mag_x_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */off_chip_img, HWStream<hw_uint<32> >& /* get_args num ports = 1 */mag_x, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mag_x_opt(off_chip_img, mag_x);
  }
}
#ifdef __VIVADO_SYNTH__
  // { mag_x_update_0[root = 0, mag_x_0, mag_x_1] -> mag_x[0, 0] : 0 <= mag_x_0 <= 31 and 0 <= mag_x_1 <= 31 }
const int mag_x_update_0_write_pipe0_num_transfers = 1024;
  // { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 32 and -1 <= img_1 <= 32 }
const int img_update_0_read_pipe0_num_transfers = 1156;


extern "C" {

void mag_x_opt_accel(hw_uint<32>* img_update_0_read_pipe0, hw_uint<32>* mag_x_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mag_x_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mag_x_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > mag_x_update_0_write_pipe0_channel;

  burst_read<32>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  mag_x_opt_wrapper(img_update_0_read_pipe0_channel, mag_x_update_0_write_pipe0_channel, size);

  burst_write<32>(mag_x_update_0_write_pipe0, mag_x_update_0_write_pipe0_channel, mag_x_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mag_x_opt_rdai(HWStream<hw_uint<32> >& img_update_0_read_pipe0, HWStream<hw_uint<32> >&  mag_x_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mag_x_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mag_x_opt(img_update_0_read_pipe0, mag_x_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

