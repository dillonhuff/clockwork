#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_2_naive_compute_units.h
#include "harris_2_naive_compute_units.h"

struct grad_x_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 3], [0, 0]}
  hw_uint<16> RAM[6][1];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct grad_x_cache {
  // Reader addrs...
    // { harris_2_update_0[d0, d1 = 0] -> grad_x[-1 + d0, 0] : 0 <= d0 <= 1 }
    // { harris_2_update_0[d0, d1 = 0] -> grad_x[d0, 0] : 0 <= d0 <= 1 }
    // { harris_2_update_0[d0, d1 = 0] -> grad_x[1 + d0, 0] : 0 <= d0 <= 1 }
  // # of banks: 1
  grad_x_all_inputs_to_all_outputs_cache grad_x_all_inputs_to_all_outputs;
};



inline void grad_x_grad_x_update_0_write0_write(hw_uint<16>& grad_x_grad_x_update_0_write0, grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
  grad_x.grad_x_all_inputs_to_all_outputs.write(grad_x_grad_x_update_0_write0, ((1*d0)) - -2, 0 - 0);
}

inline hw_uint<16> harris_2_rd0_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd0 read pattern: { harris_2_update_0[d0, d1 = 0] -> grad_x[-1 + d0, 0] : 0 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_all_inputs_to_all_outputs.read(((-1 + 1*d0)) - -2, 0 - 0);
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

inline hw_uint<16> harris_2_rd1_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd1 read pattern: { harris_2_update_0[d0, d1 = 0] -> grad_x[d0, 0] : 0 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_all_inputs_to_all_outputs.read(((1*d0)) - -2, 0 - 0);
  return value_grad_x_grad_x_update_0_write0;
  return 0;
}

inline hw_uint<16> harris_2_rd2_select(grad_x_cache& grad_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // harris_2_rd2 read pattern: { harris_2_update_0[d0, d1 = 0] -> grad_x[1 + d0, 0] : 0 <= d0 <= 1 }
  auto value_grad_x_grad_x_update_0_write0 = grad_x.grad_x_all_inputs_to_all_outputs.read(((1 + 1*d0)) - -2, 0 - 0);
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

struct img_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-4, 5], [0, 0]}
  hw_uint<16> RAM[10][1];
  inline hw_uint<16> read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<16> value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct img_cache {
  // Reader addrs...
    // { grad_x_update_0[d0, d1 = 0] -> img[-1 + d0, 0] : -2 <= d0 <= 3 }
    // { grad_x_update_0[d0, d1 = 0] -> img[d0, 0] : -2 <= d0 <= 3 }
    // { grad_x_update_0[d0, d1 = 0] -> img[1 + d0, 0] : -2 <= d0 <= 3 }
  // # of banks: 1
  img_all_inputs_to_all_outputs_cache img_all_inputs_to_all_outputs;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_all_inputs_to_all_outputs.write(img_img_update_0_write0, ((1*d0)) - -4, 0 - 0);
}

inline hw_uint<16> grad_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd0 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[-1 + d0, 0] : -2 <= d0 <= 3 }
  auto value_img_img_update_0_write0 = img.img_all_inputs_to_all_outputs.read(((-1 + 1*d0)) - -4, 0 - 0);
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> grad_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd1 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[d0, 0] : -2 <= d0 <= 3 }
  auto value_img_img_update_0_write0 = img.img_all_inputs_to_all_outputs.read(((1*d0)) - -4, 0 - 0);
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> grad_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_rd2 read pattern: { grad_x_update_0[d0, d1 = 0] -> img[1 + d0, 0] : -2 <= d0 <= 3 }
  auto value_img_img_update_0_write0 = img.img_all_inputs_to_all_outputs.read(((1 + 1*d0)) - -4, 0 - 0);
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

// Total re-use buffer capacity: 256 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */img_oc, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: img_oc
	auto img_oc_1_m_img_1__p__0_c__1_m_img_0__p__0_value = img_oc.read();
	auto compute_result = img_generated_compute_unrolled_1(img_oc_1_m_img_1__p__0_c__1_m_img_0__p__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(/* arg names */compute_result, img, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void grad_x_update_0(img_cache& img, grad_x_cache& grad_x, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m_grad_x_1__p___m_1_c__1_m_grad_x_0__p__0_value = img_grad_x_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = grad_x_generated_compute_unrolled_1(img_1_m_grad_x_1__p___m_1_c__1_m_grad_x_0__p__0_value);
	// Produce: grad_x
	grad_x_grad_x_update_0_write_bundle_write(/* arg names */compute_result, grad_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void harris_2_update_0(grad_x_cache& grad_x, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */harris_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: grad_x
	auto grad_x_1_m_harris_2_1__p___m_1_c__1_m_harris_2_0__p__0_value = grad_x_harris_2_update_0_read_bundle_read(grad_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = harris_2_generated_compute_unrolled_1(grad_x_1_m_harris_2_1__p___m_1_c__1_m_harris_2_0__p__0_value);
	// Produce: harris_2
	harris_2.write(compute_result);

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
// Condition for img_update_0(((((1*i1)) == 0) && (((-1 + 1*i0)) == 0) && (((4 + 1*i2)) >= 0) && (((5 + -1*i2)) >= 0)))
//   { grad_x_update_0[d0, d1 = 0] -> [2, 0, d0] : -2 <= d0 <= 3 }
// Condition for grad_x_update_0(((((1*i1)) == 0) && (((-2 + 1*i0)) == 0) && (((2 + 1*i2)) >= 0) && (((3 + -1*i2)) >= 0)))
//   { harris_2_update_0[d0, d1 = 0] -> [3, 0, d0] : 0 <= d0 <= 1 }
// Condition for harris_2_update_0(((((1*i1)) == 0) && (((-3 + 1*i0)) == 0) && (((1*i2)) >= 0) && (((1 + -1*i2)) >= 0)))

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
  // { harris_2_update_0[root = 0, harris_2_0 = 0, harris_2_1] -> harris_2[harris_2_1, 0] : 0 <= harris_2_1 <= 1 }
const int harris_2_update_0_write_pipe0_num_transfers = 2;
  // { img_update_0[root = 0, img_0 = 0, img_1] -> img_oc[img_1, 0] : -4 <= img_1 <= 5 }
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

