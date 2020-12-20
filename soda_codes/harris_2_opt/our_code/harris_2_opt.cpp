#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_2_opt_compute_units.h
#include "harris_2_opt_compute_units.h"

#include "hw_classes.h"

struct grad_x_grad_x_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[0, 2], [0, 0]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct grad_x_grad_x_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[-1, 1], [0, 0]}
	// Capacity: 3
	// # of read delays: 3
  // 0, 1, 2
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct grad_x_cache {
  // # of banks: 2
  grad_x_grad_x_update_0_write0_merged_banks_3_cache grad_x_grad_x_update_0_write0_merged_banks_3;
  grad_x_grad_x_update_0_write1_merged_banks_3_cache grad_x_grad_x_update_0_write1_merged_banks_3;
};



inline void grad_x_grad_x_update_0_write0_write(hw_uint<16>& grad_x_grad_x_update_0_write0, grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
  grad_x.grad_x_grad_x_update_0_write0_merged_banks_3.push(grad_x_grad_x_update_0_write0);
}

inline void grad_x_grad_x_update_0_write1_write(hw_uint<16>& grad_x_grad_x_update_0_write1, grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
  grad_x.grad_x_grad_x_update_0_write1_merged_banks_3.push(grad_x_grad_x_update_0_write1);
}

inline hw_uint<16> harris_2_rd0_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd0 read pattern: { harris_2_update_0[d0 = 0, d1 = 0] -> grad_x[-1, 0] }
  // Read schedule : { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write1 = grad_x.grad_x_grad_x_update_0_write1_merged_banks_3.peek_2();
  return value_grad_x_grad_x_update_0_write1;
  return 0;
}

inline hw_uint<16> harris_2_rd1_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd1 read pattern: { harris_2_update_0[d0 = 0, d1 = 0] -> grad_x[0, 0] }
  // Read schedule : { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_merged_banks_3.peek_1();
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

inline hw_uint<16> harris_2_rd2_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd2 read pattern: { harris_2_update_0[d0 = 0, d1 = 0] -> grad_x[1, 0] }
  // Read schedule : { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write1 = grad_x.grad_x_grad_x_update_0_write1_merged_banks_3.peek_1();
  return value_grad_x_grad_x_update_0_write1;
  return 0;
}

inline hw_uint<16> harris_2_rd3_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd3 read pattern: { harris_2_update_0[d0 = 0, d1 = 0] -> grad_x[0, 0] }
  // Read schedule : { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_merged_banks_3.peek_1();
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

inline hw_uint<16> harris_2_rd4_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd4 read pattern: { harris_2_update_0[d0 = 0, d1 = 0] -> grad_x[1, 0] }
  // Read schedule : { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write1 = grad_x.grad_x_grad_x_update_0_write1_merged_banks_3.peek_1();
  return value_grad_x_grad_x_update_0_write1;
  return 0;
}

inline hw_uint<16> harris_2_rd5_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd5 read pattern: { harris_2_update_0[d0 = 0, d1 = 0] -> grad_x[2, 0] }
  // Read schedule : { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_merged_banks_3.peek_0();
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

// # of bundles = 2
// grad_x_update_0_write
//	grad_x_grad_x_update_0_write0
//	grad_x_grad_x_update_0_write1
inline void grad_x_grad_x_update_0_write_bundle_write(hw_uint<32>& grad_x_update_0_write, grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
	hw_uint<16> grad_x_grad_x_update_0_write0_res = grad_x_update_0_write.extract<0, 15>();
	grad_x_grad_x_update_0_write0_write(grad_x_grad_x_update_0_write0_res, grad_x, d0, d1, dynamic_address);
	hw_uint<16> grad_x_grad_x_update_0_write1_res = grad_x_update_0_write.extract<16, 31>();
	grad_x_grad_x_update_0_write1_write(grad_x_grad_x_update_0_write1_res, grad_x, d0, d1, dynamic_address);
}

// harris_2_update_0_read
//	harris_2_rd0
//	harris_2_rd1
//	harris_2_rd2
//	harris_2_rd3
//	harris_2_rd4
//	harris_2_rd5
inline hw_uint<96> grad_x_harris_2_update_0_read_bundle_read(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 6
    // harris_2_rd0
    // harris_2_rd1
    // harris_2_rd2
    // harris_2_rd3
    // harris_2_rd4
    // harris_2_rd5

	hw_uint<96> result;
	hw_uint<16> harris_2_rd0_res = harris_2_rd0_select(grad_x, d0, d1, dynamic_address);
	set_at<0, 96>(result, harris_2_rd0_res);
	hw_uint<16> harris_2_rd1_res = harris_2_rd1_select(grad_x, d0, d1, dynamic_address);
	set_at<16, 96>(result, harris_2_rd1_res);
	hw_uint<16> harris_2_rd2_res = harris_2_rd2_select(grad_x, d0, d1, dynamic_address);
	set_at<32, 96>(result, harris_2_rd2_res);
	hw_uint<16> harris_2_rd3_res = harris_2_rd3_select(grad_x, d0, d1, dynamic_address);
	set_at<48, 96>(result, harris_2_rd3_res);
	hw_uint<16> harris_2_rd4_res = harris_2_rd4_select(grad_x, d0, d1, dynamic_address);
	set_at<64, 96>(result, harris_2_rd4_res);
	hw_uint<16> harris_2_rd5_res = harris_2_rd5_select(grad_x, d0, d1, dynamic_address);
	set_at<80, 96>(result, harris_2_rd5_res);
	return result;
}

#include "hw_classes.h"

struct img_img_update_0_write0_merged_banks_3_cache {
	// RAM Box: {[-2, 4], [0, 0]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	hw_uint<16> f0;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[-3, 3], [0, 0]}
	// Capacity: 3
	// # of read delays: 3
  // 0, 1, 2
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_cache {
  // # of banks: 2
  img_img_update_0_write0_merged_banks_3_cache img_img_update_0_write0_merged_banks_3;
  img_img_update_0_write1_merged_banks_3_cache img_img_update_0_write1_merged_banks_3;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_3.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<16>& img_img_update_0_write1, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write1_merged_banks_3.push(img_img_update_0_write1);
}

inline hw_uint<16> grad_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd0 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[-1 + 2d0, 0] : -1 <= d0 <= 1 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_3.peek_2();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> grad_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd1 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[2d0, 0] : -1 <= d0 <= 1 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_3.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> grad_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd2 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[1 + 2d0, 0] : -1 <= d0 <= 1 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_3.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> grad_x_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd3 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[2d0, 0] : -1 <= d0 <= 1 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_3.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> grad_x_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd4 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[1 + 2d0, 0] : -1 <= d0 <= 1 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_3.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> grad_x_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd5 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[2 + 2d0, 0] : -1 <= d0 <= 1 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_3.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

// # of bundles = 2
// grad_x_update_0_read
//	grad_x_rd0
//	grad_x_rd1
//	grad_x_rd2
//	grad_x_rd3
//	grad_x_rd4
//	grad_x_rd5
inline hw_uint<96> img_grad_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 6
    // grad_x_rd0
    // grad_x_rd1
    // grad_x_rd2
    // grad_x_rd3
    // grad_x_rd4
    // grad_x_rd5

	hw_uint<96> result;
	hw_uint<16> grad_x_rd0_res = grad_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 96>(result, grad_x_rd0_res);
	hw_uint<16> grad_x_rd1_res = grad_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<16, 96>(result, grad_x_rd1_res);
	hw_uint<16> grad_x_rd2_res = grad_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<32, 96>(result, grad_x_rd2_res);
	hw_uint<16> grad_x_rd3_res = grad_x_rd3_select(img, d0, d1, dynamic_address);
	set_at<48, 96>(result, grad_x_rd3_res);
	hw_uint<16> grad_x_rd4_res = grad_x_rd4_select(img, d0, d1, dynamic_address);
	set_at<64, 96>(result, grad_x_rd4_res);
	hw_uint<16> grad_x_rd5_res = grad_x_rd5_select(img, d0, d1, dynamic_address);
	set_at<80, 96>(result, grad_x_rd5_res);
	return result;
}

// img_update_0_write
//	img_img_update_0_write0
//	img_img_update_0_write1
inline void img_img_update_0_write_bundle_write(hw_uint<32>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write1_res = img_update_0_write.extract<16, 31>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 96 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */img_oc, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_2(img_oc_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(/* arg names */compute_result, img, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void grad_x_update_0(img_cache& img, grad_x_cache& grad_x, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_grad_x_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = grad_x_generated_compute_unrolled_2(img_0_c__0_value);
	// Produce: grad_x
	grad_x_grad_x_update_0_write_bundle_write(/* arg names */compute_result, grad_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void harris_2_update_0(grad_x_cache& grad_x, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */harris_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: grad_x
	auto grad_x_0_c__0_value = grad_x_harris_2_update_0_read_bundle_read(grad_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = harris_2_generated_compute_unrolled_2(grad_x_0_c__0_value);
	// Produce: harris_2
	harris_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void harris_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */img_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */harris_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("harris_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  grad_x_cache grad_x;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2; grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1; harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
//   { img_update_0[d0, d1 = 0] -> [0, d0, 1] : -2 <= d0 <= 2 }
// Condition for img_update_0(((-1 + i2 == 0) && (i0 == 0) && (2 + i1 >= 0) && (2 - i1 >= 0)))
//   { grad_x_update_0[d0, d1 = 0] -> [0, 1 + d0, 2] : -1 <= d0 <= 1 }
// Condition for grad_x_update_0(((-2 + i2 == 0) && (i0 == 0) && (i1 >= 0) && (2 - i1 >= 0)))
//   { harris_2_update_0[d0 = 0, d1 = 0] -> [0, 2, 3] }
// Condition for harris_2_update_0(((-3 + i2 == 0) && (-2 + i1 == 0) && (i0 == 0)))

  /*
  // Schedules...
    // grad_x_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*1,1*2]
    // harris_2_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*2,1*3]
    // img_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = 0; c0 <= 0; c0++) {
  for (int c1 = -2; c1 <= 2; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-2 <= c1 && c1 <= 2) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
      img_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 2) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
      grad_x_update_0((c1 - 1) / 1, (c0 - 0) / 1);
    }

    if ((2 <= c1 && c1 <= 2) && ((c1 - 2) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
      harris_2_update_0((c1 - 2) / 1, (c0 - 0) / 1);
    }

  }
}

  */
	  // Schedules...
	    // grad_x_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*1,1*2]
	    // harris_2_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*2,1*3]
	    // img_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = 0; c0 <= 0; c0++) {
	  for (int c1 = -2; c1 <= 2; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-2 <= c1 && c1 <= 2) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      img_update_0(img_oc /* buf name */, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 2) && ((c1 - 1) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      grad_x_update_0(img /* buf name */, grad_x, (c1 - 1) / 1, (c0 - 0) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 2) && ((c1 - 2) % 1 == 0) && (0 <= c0 && c0 <= 0) && ((c0 - 0) % 1 == 0)) {
	      harris_2_update_0(grad_x /* buf name */, harris_2, (c1 - 2) / 1, (c0 - 0) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void harris_2_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 2 */img_oc, HWStream<hw_uint<32> >& /* get_args num ports = 2 */harris_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    harris_2_opt(img_oc, harris_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { harris_2_update_0[root = 0, harris_2_0 = 0, harris_2_1 = 0] -> harris_2[0, 0] }
const int harris_2_update_0_write_pipe0_num_transfers = 1;
  // { img_update_0[root = 0, img_0, img_1 = 0] -> img_oc[0, 0] : -2 <= img_0 <= 2 }
const int img_update_0_read_pipe0_num_transfers = 5;


extern "C" {

void harris_2_opt_accel(hw_uint<32>* img_update_0_read_pipe0, hw_uint<32>* harris_2_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = harris_2_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = harris_2_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > harris_2_update_0_write_pipe0_channel;

  burst_read<32>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  harris_2_opt_wrapper(img_update_0_read_pipe0_channel, harris_2_update_0_write_pipe0_channel, size);

  burst_write<32>(harris_2_update_0_write_pipe0, harris_2_update_0_write_pipe0_channel, harris_2_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void harris_2_opt_rdai(HWStream<hw_uint<32> >& img_update_0_read_pipe0, HWStream<hw_uint<32> >&  harris_2_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = harris_2_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  harris_2_opt(img_update_0_read_pipe0, harris_2_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

