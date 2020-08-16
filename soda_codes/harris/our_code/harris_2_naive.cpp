#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_2_naive_compute_units.h
#include "harris_2_naive_compute_units.h"

#include "hw_classes.h"

struct grad_x_grad_x_update_0_write0_to_harris_2_rd0_cache {
	// RAM Box: {[-2, 3], [0, 0]}
	// Capacity: 5
	// # of read delays: 3
  // 0, 3, 4
	fifo<hw_uint<16>, 5> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(4 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct grad_x_grad_x_update_0_write0_to_harris_2_rd1_cache {
	// RAM Box: {[-2, 3], [0, 0]}
	// Capacity: 4
	// # of read delays: 3
  // 0, 2, 3
	fifo<hw_uint<16>, 4> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct grad_x_grad_x_update_0_write0_to_harris_2_rd2_cache {
	// RAM Box: {[-2, 3], [0, 0]}
	// Capacity: 3
	// # of read delays: 3
  // 0, 1, 2
	fifo<hw_uint<16>, 3> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct grad_x_cache {
  // # of banks: 3
  grad_x_grad_x_update_0_write0_to_harris_2_rd0_cache grad_x_grad_x_update_0_write0_to_harris_2_rd0;
  grad_x_grad_x_update_0_write0_to_harris_2_rd1_cache grad_x_grad_x_update_0_write0_to_harris_2_rd1;
  grad_x_grad_x_update_0_write0_to_harris_2_rd2_cache grad_x_grad_x_update_0_write0_to_harris_2_rd2;
};



inline void grad_x_grad_x_update_0_write0_write(hw_uint<16>& grad_x_grad_x_update_0_write0, grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
  grad_x.grad_x_grad_x_update_0_write0_to_harris_2_rd0.push(grad_x_grad_x_update_0_write0);
  grad_x.grad_x_grad_x_update_0_write0_to_harris_2_rd1.push(grad_x_grad_x_update_0_write0);
  grad_x.grad_x_grad_x_update_0_write0_to_harris_2_rd2.push(grad_x_grad_x_update_0_write0);
}

inline hw_uint<16> harris_2_rd0_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd0 read pattern: { harris_2_update_0[d0, d1 = 0] -> grad_x[-1 + d0, 0] : 0 <= d0 <= 1 }
  // Read schedule : { harris_2_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 1 }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_to_harris_2_rd0.peek(/* one reader or all rams */ (4 - d0));
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

inline hw_uint<16> harris_2_rd1_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd1 read pattern: { harris_2_update_0[d0, d1 = 0] -> grad_x[d0, 0] : 0 <= d0 <= 1 }
  // Read schedule : { harris_2_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 1 }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_to_harris_2_rd1.peek(/* one reader or all rams */ (3 - d0));
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

inline hw_uint<16> harris_2_rd2_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd2 read pattern: { harris_2_update_0[d0, d1 = 0] -> grad_x[1 + d0, 0] : 0 <= d0 <= 1 }
  // Read schedule : { harris_2_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 1 }
  // Write schedule: { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_grad_x_update_0_write0_to_harris_2_rd2.peek(/* one reader or all rams */ (2 - d0));
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

// # of bundles = 2
// grad_x_update_0_write
//	grad_x_grad_x_update_0_write0
inline void grad_x_grad_x_update_0_write_bundle_write(hw_uint<16>& grad_x_update_0_write, grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
	hw_uint<16> grad_x_grad_x_update_0_write0_res = grad_x_update_0_write.extract<0, 15>();
	grad_x_grad_x_update_0_write0_write(grad_x_grad_x_update_0_write0_res, grad_x, d0, d1, dynamic_address);
}

// harris_2_update_0_read
//	harris_2_rd0
//	harris_2_rd1
//	harris_2_rd2
inline hw_uint<48> grad_x_harris_2_update_0_read_bundle_read(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // harris_2_rd0
    // harris_2_rd1
    // harris_2_rd2

	hw_uint<48> result;
	hw_uint<16> harris_2_rd0_res = harris_2_rd0_select(grad_x, d0, d1, dynamic_address);
	set_at<0, 48>(result, harris_2_rd0_res);
	hw_uint<16> harris_2_rd1_res = harris_2_rd1_select(grad_x, d0, d1, dynamic_address);
	set_at<16, 48>(result, harris_2_rd1_res);
	hw_uint<16> harris_2_rd2_res = harris_2_rd2_select(grad_x, d0, d1, dynamic_address);
	set_at<32, 48>(result, harris_2_rd2_res);
	return result;
}

#include "hw_classes.h"

struct img_img_update_0_write0_to_grad_x_rd0_cache {
	// RAM Box: {[-4, 5], [0, 0]}
	// Capacity: 9
	// # of read delays: 7
  // 0, 3, 4, 5, 6, 7, 8
	fifo<hw_uint<16>, 9> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(8 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write0_to_grad_x_rd1_cache {
	// RAM Box: {[-4, 5], [0, 0]}
	// Capacity: 8
	// # of read delays: 7
  // 0, 2, 3, 4, 5, 6, 7
	fifo<hw_uint<16>, 8> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_img_update_0_write0_to_grad_x_rd2_cache {
	// RAM Box: {[-4, 5], [0, 0]}
	// Capacity: 7
	// # of read delays: 7
  // 0, 1, 2, 3, 4, 5, 6
	fifo<hw_uint<16>, 7> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(6 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct img_cache {
  // # of banks: 3
  img_img_update_0_write0_to_grad_x_rd0_cache img_img_update_0_write0_to_grad_x_rd0;
  img_img_update_0_write0_to_grad_x_rd1_cache img_img_update_0_write0_to_grad_x_rd1;
  img_img_update_0_write0_to_grad_x_rd2_cache img_img_update_0_write0_to_grad_x_rd2;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_to_grad_x_rd0.push(img_img_update_0_write0);
  img.img_img_update_0_write0_to_grad_x_rd1.push(img_img_update_0_write0);
  img.img_img_update_0_write0_to_grad_x_rd2.push(img_img_update_0_write0);
}

inline hw_uint<16> grad_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd0 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[-1 + d0, 0] : -2 <= d0 <= 3 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [1, 0, d0] : -4 <= d0 <= 5 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_to_grad_x_rd0.peek(/* one reader or all rams */ (6 - d0));
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> grad_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd1 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[d0, 0] : -2 <= d0 <= 3 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [1, 0, d0] : -4 <= d0 <= 5 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_to_grad_x_rd1.peek(/* one reader or all rams */ (5 - d0));
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> grad_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd2 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[1 + d0, 0] : -2 <= d0 <= 3 }
  // Read schedule : { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
  // Write schedule: { img_update_0[d0, d1 = 0] -> [1, 0, d0] : -4 <= d0 <= 5 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_to_grad_x_rd2.peek(/* one reader or all rams */ (4 - d0));
  return value_img_img_update_0_write0;
  return 0;
}

// # of bundles = 2
// grad_x_update_0_read
//	grad_x_rd0
//	grad_x_rd1
//	grad_x_rd2
inline hw_uint<48> img_grad_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // grad_x_rd0
    // grad_x_rd1
    // grad_x_rd2

	hw_uint<48> result;
	hw_uint<16> grad_x_rd0_res = grad_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 48>(result, grad_x_rd0_res);
	hw_uint<16> grad_x_rd1_res = grad_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<16, 48>(result, grad_x_rd1_res);
	hw_uint<16> grad_x_rd2_res = grad_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<32, 48>(result, grad_x_rd2_res);
	return result;
}

// img_update_0_write
//	img_img_update_0_write0
inline void img_img_update_0_write_bundle_write(hw_uint<16>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 480 bits


// Operation logic
inline void harris_2_update_0(grad_x_cache& grad_x, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */harris_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: grad_x
	auto grad_x_0_c__0_value = grad_x_harris_2_update_0_read_bundle_read(grad_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = harris_2_generated_compute_unrolled_1(grad_x_0_c__0_value);
	// Produce: harris_2
	harris_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_oc, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: img_oc
	auto img_oc_0_c__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_1(img_oc_0_c__0_value);
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

	auto compute_result = grad_x_generated_compute_unrolled_1(img_0_c__0_value);
	// Produce: grad_x
	grad_x_grad_x_update_0_write_bundle_write(/* arg names */compute_result, grad_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void harris_2_naive(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */harris_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("harris_2_naive_debug.csv");
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

// schedule: { img_update_0[d0, d1 = 0] -> [1, 0, d0] : -4 <= d0 <= 5; grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3; harris_2_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 1 }
//   { img_update_0[d0, d1 = 0] -> [1, 0, d0] : -4 <= d0 <= 5 }
// Condition for img_update_0(((i1 == 0) && (-1 + i0 == 0) && (4 + i2 >= 0) && (5 - i2 >= 0)))
//   { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
// Condition for grad_x_update_0(((i1 == 0) && (-2 + i0 == 0) && (2 + i2 >= 0) && (3 - i2 >= 0)))
//   { harris_2_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 1 }
// Condition for harris_2_update_0(((i1 == 0) && (-3 + i0 == 0) && (i2 >= 0) && (1 - i2 >= 0)))

  /*
{
  for (int c2 = -4; c2 <= 5; c2 += 1)
    img_update_0(c2, 0);
  for (int c2 = -2; c2 <= 3; c2 += 1)
    grad_x_update_0(c2, 0);
  for (int c2 = 0; c2 <= 1; c2 += 1)
    harris_2_update_0(c2, 0);
}

  */
	{
	  for (int c2 = -4; c2 <= 5; c2 += 1)
	    img_update_0(img_oc /* buf name */, img, c2, 0);
	  for (int c2 = -2; c2 <= 3; c2 += 1)
	    grad_x_update_0(img /* buf name */, grad_x, c2, 0);
	  for (int c2 = 0; c2 <= 1; c2 += 1)
	    harris_2_update_0(grad_x /* buf name */, harris_2, c2, 0);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void harris_2_naive_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */img_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */harris_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    harris_2_naive(img_oc, harris_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { harris_2_update_0[root = 0, harris_2_0, harris_2_1 = 0] -> harris_2[0, 0] : 0 <= harris_2_0 <= 1 }
const int harris_2_update_0_write_pipe0_num_transfers = 2;
  // { img_update_0[root = 0, img_0, img_1 = 0] -> img_oc[0, 0] : -4 <= img_0 <= 5 }
const int img_update_0_read_pipe0_num_transfers = 10;


extern "C" {

void harris_2_naive_accel(hw_uint<16>* img_update_0_read_pipe0, hw_uint<16>* harris_2_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = harris_2_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = harris_2_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > harris_2_update_0_write_pipe0_channel;

  burst_read<16>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*size);

  harris_2_naive_wrapper(img_update_0_read_pipe0_channel, harris_2_update_0_write_pipe0_channel, size);

  burst_write<16>(harris_2_update_0_write_pipe0, harris_2_update_0_write_pipe0_channel, harris_2_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void harris_2_naive_rdai(HWStream<hw_uint<16> >& img_update_0_read_pipe0, HWStream<hw_uint<16> >&  harris_2_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = harris_2_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  harris_2_naive(img_update_0_read_pipe0, harris_2_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

