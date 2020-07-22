#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

#include "hw_classes.h"

struct blurred_blur_image_4_to_blurred_write_blurred_off_chip_7_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 1
	// # of read delays: 2
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct blurred_cache {
  blurred_blur_image_4_to_blurred_write_blurred_off_chip_7_cache blurred_blur_image_4_to_blurred_write_blurred_off_chip_7;
};



inline void blurred_blur_image_4_write(hw_uint<16>& blurred_blur_image_4, blurred_cache& blurred, int root, int y, int x, int dynamic_address) {
  blurred.blurred_blur_image_4_to_blurred_write_blurred_off_chip_7.push(blurred_blur_image_4);
}

inline hw_uint<16> blurred_write_blurred_off_chip_7_select(blurred_cache& blurred, int root, int m, int n, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_write_blurred_off_chip_7 read pattern: { write_blurred_off_chip[root = 0, m, n] -> blurred[n, m] : 0 <= m <= 255 and 0 <= n <= 255 }
  // Read schedule : { write_blurred_off_chip[root = 0, m, n] -> [m, n, 3] : 0 <= m <= 255 and 0 <= n <= 255 }
  // Write schedule: { blur_image[root = 0, y, x] -> [y, x, 2] : 0 <= y <= 255 and 0 <= x <= 255 }
  auto value_blurred_blur_image_4 = blurred.blurred_blur_image_4_to_blurred_write_blurred_off_chip_7.peek(/* one reader or all rams */ 0);
  return value_blurred_blur_image_4;
  return 0;
}

// # of bundles = 2
// blur_image_write
//	blurred_blur_image_4
inline void blurred_blur_image_write_bundle_write(hw_uint<16>& blur_image_write, blurred_cache& blurred, int root, int y, int x, int dynamic_address) {
	hw_uint<16> blurred_blur_image_4_res = blur_image_write.extract<0, 15>();
	blurred_blur_image_4_write(blurred_blur_image_4_res, blurred, root, y, x, dynamic_address);
}

// write_blurred_off_chip_read
//	blurred_write_blurred_off_chip_7
inline hw_uint<16> blurred_write_blurred_off_chip_read_bundle_read(blurred_cache& blurred, int root, int m, int n, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_write_blurred_off_chip_7

	hw_uint<16> result;
	hw_uint<16> blurred_write_blurred_off_chip_7_res = blurred_write_blurred_off_chip_7_select(blurred, root, m, n, dynamic_address);
	set_at<0, 16>(result, blurred_write_blurred_off_chip_7_res);
	return result;
}

#include "hw_classes.h"

struct brightened_brighten_image_2_to_brightened_blur_image_5_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 1
	// # of read delays: 2
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct brightened_cache {
  brightened_brighten_image_2_to_brightened_blur_image_5_cache brightened_brighten_image_2_to_brightened_blur_image_5;
};



inline void brightened_brighten_image_2_write(hw_uint<16>& brightened_brighten_image_2, brightened_cache& brightened, int root, int bo, int bi, int dynamic_address) {
  brightened.brightened_brighten_image_2_to_brightened_blur_image_5.push(brightened_brighten_image_2);
}

inline hw_uint<16> brightened_blur_image_5_select(brightened_cache& brightened, int root, int y, int x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // brightened_blur_image_5 read pattern: { blur_image[root = 0, y, x] -> brightened[x, y] : 0 <= y <= 255 and 0 <= x <= 255 }
  // Read schedule : { blur_image[root = 0, y, x] -> [y, x, 2] : 0 <= y <= 255 and 0 <= x <= 255 }
  // Write schedule: { brighten_image[root = 0, bo, bi] -> [bo, bi, 1] : 0 <= bo <= 255 and 0 <= bi <= 255 }
  auto value_brightened_brighten_image_2 = brightened.brightened_brighten_image_2_to_brightened_blur_image_5.peek(/* one reader or all rams */ 0);
  return value_brightened_brighten_image_2;
  return 0;
}

// # of bundles = 2
// blur_image_read
//	brightened_blur_image_5
inline hw_uint<16> brightened_blur_image_read_bundle_read(brightened_cache& brightened, int root, int y, int x, int dynamic_address) {
  // # of ports in bundle: 1
    // brightened_blur_image_5

	hw_uint<16> result;
	hw_uint<16> brightened_blur_image_5_res = brightened_blur_image_5_select(brightened, root, y, x, dynamic_address);
	set_at<0, 16>(result, brightened_blur_image_5_res);
	return result;
}

// brighten_image_write
//	brightened_brighten_image_2
inline void brightened_brighten_image_write_bundle_write(hw_uint<16>& brighten_image_write, brightened_cache& brightened, int root, int bo, int bi, int dynamic_address) {
	hw_uint<16> brightened_brighten_image_2_res = brighten_image_write.extract<0, 15>();
	brightened_brighten_image_2_write(brightened_brighten_image_2_res, brightened, root, bo, bi, dynamic_address);
}

#include "hw_classes.h"

struct in_load_image_from_off_chip_0_to_in_brighten_image_3_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 1
	// # of read delays: 2
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_cache {
  in_load_image_from_off_chip_0_to_in_brighten_image_3_cache in_load_image_from_off_chip_0_to_in_brighten_image_3;
};



inline void in_load_image_from_off_chip_0_write(hw_uint<16>& in_load_image_from_off_chip_0, in_cache& in, int root, int po, int pi, int dynamic_address) {
  in.in_load_image_from_off_chip_0_to_in_brighten_image_3.push(in_load_image_from_off_chip_0);
}

inline hw_uint<16> in_brighten_image_3_select(in_cache& in, int root, int bo, int bi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_brighten_image_3 read pattern: { brighten_image[root = 0, bo, bi] -> in[bi, bo] : 0 <= bo <= 255 and 0 <= bi <= 255 }
  // Read schedule : { brighten_image[root = 0, bo, bi] -> [bo, bi, 1] : 0 <= bo <= 255 and 0 <= bi <= 255 }
  // Write schedule: { load_image_from_off_chip[root = 0, po, pi] -> [po, pi, 0] : 0 <= po <= 255 and 0 <= pi <= 255 }
  auto value_in_load_image_from_off_chip_0 = in.in_load_image_from_off_chip_0_to_in_brighten_image_3.peek(/* one reader or all rams */ 0);
  return value_in_load_image_from_off_chip_0;
  return 0;
}

// # of bundles = 2
// brighten_image_read
//	in_brighten_image_3
inline hw_uint<16> in_brighten_image_read_bundle_read(in_cache& in, int root, int bo, int bi, int dynamic_address) {
  // # of ports in bundle: 1
    // in_brighten_image_3

	hw_uint<16> result;
	hw_uint<16> in_brighten_image_3_res = in_brighten_image_3_select(in, root, bo, bi, dynamic_address);
	set_at<0, 16>(result, in_brighten_image_3_res);
	return result;
}

// load_image_from_off_chip_write
//	in_load_image_from_off_chip_0
inline void in_load_image_from_off_chip_write_bundle_write(hw_uint<16>& load_image_from_off_chip_write, in_cache& in, int root, int po, int pi, int dynamic_address) {
	hw_uint<16> in_load_image_from_off_chip_0_res = load_image_from_off_chip_write.extract<0, 15>();
	in_load_image_from_off_chip_0_write(in_load_image_from_off_chip_0_res, in, root, po, pi, dynamic_address);
}



// Operation logic
inline void load_image_from_off_chip(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */off_chip_input, in_cache& in, int root, int po, int pi) {
  // Dynamic address computation

	// Consume: off_chip_input
	auto off_chip_input_pi_c__po_value = off_chip_input.read();
	// Produce: in
	in_load_image_from_off_chip_write_bundle_write(/* arg names */off_chip_input_pi_c__po_value, in, root, po, pi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void brighten_image(in_cache& in, brightened_cache& brightened, int root, int bo, int bi) {
  // Dynamic address computation

	// Consume: in
	auto in_bi_c__bo_value = in_brighten_image_read_bundle_read(in/* source_delay */, root, bo, bi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = multiply_by_two(in_bi_c__bo_value);
	// Produce: brightened
	brightened_brighten_image_write_bundle_write(/* arg names */compute_result, brightened, root, bo, bi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur_image(brightened_cache& brightened, blurred_cache& blurred, int root, int y, int x) {
  // Dynamic address computation

	// Consume: brightened
	auto brightened_x_c__y_value = brightened_blur_image_read_bundle_read(brightened/* source_delay */, root, y, x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = inc(brightened_x_c__y_value);
	// Produce: blurred
	blurred_blur_image_write_bundle_write(/* arg names */compute_result, blurred, root, y, x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void write_blurred_off_chip(blurred_cache& blurred, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */off_chip_output, int root, int m, int n) {
  // Dynamic address computation

	// Consume: blurred
	auto blurred_n_c__m_value = blurred_write_blurred_off_chip_read_bundle_read(blurred/* source_delay */, root, m, n, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: off_chip_output
	off_chip_output.write(blurred_n_c__m_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void brighten_blur(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_input, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */off_chip_output) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("brighten_blur_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_cache blurred;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  brightened_cache brightened;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { blur_image[root = 0, y, x] -> [y, x, 2] : 0 <= y <= 255 and 0 <= x <= 255; load_image_from_off_chip[root = 0, po, pi] -> [po, pi, 0] : 0 <= po <= 255 and 0 <= pi <= 255; brighten_image[root = 0, bo, bi] -> [bo, bi, 1] : 0 <= bo <= 255 and 0 <= bi <= 255; write_blurred_off_chip[root = 0, m, n] -> [m, n, 3] : 0 <= m <= 255 and 0 <= n <= 255 }
//   { blur_image[root = 0, y, x] -> [y, x, 2] : 0 <= y <= 255 and 0 <= x <= 255 }
// Condition for blur_image(((-2 + i2 == 0) && (i0 >= 0) && (255 - i0 >= 0) && (i1 >= 0) && (255 - i1 >= 0)))
//   { load_image_from_off_chip[root = 0, po, pi] -> [po, pi, 0] : 0 <= po <= 255 and 0 <= pi <= 255 }
// Condition for load_image_from_off_chip(((i2 == 0) && (i0 >= 0) && (255 - i0 >= 0) && (i1 >= 0) && (255 - i1 >= 0)))
//   { brighten_image[root = 0, bo, bi] -> [bo, bi, 1] : 0 <= bo <= 255 and 0 <= bi <= 255 }
// Condition for brighten_image(((-1 + i2 == 0) && (i0 >= 0) && (255 - i0 >= 0) && (i1 >= 0) && (255 - i1 >= 0)))
//   { write_blurred_off_chip[root = 0, m, n] -> [m, n, 3] : 0 <= m <= 255 and 0 <= n <= 255 }
// Condition for write_blurred_off_chip(((-3 + i2 == 0) && (i0 >= 0) && (255 - i0 >= 0) && (i1 >= 0) && (255 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 255; c0 += 1)
  for (int c1 = 0; c1 <= 255; c1 += 1) {
    load_image_from_off_chip(0, c0, c1);
    brighten_image(0, c0, c1);
    blur_image(0, c0, c1);
    write_blurred_off_chip(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 255; c0 += 1)
	  for (int c1 = 0; c1 <= 255; c1 += 1) {
	    load_image_from_off_chip(off_chip_input /* buf name */, in, 0, c0, c1);
	    brighten_image(in /* buf name */, brightened, 0, c0, c1);
	    blur_image(brightened /* buf name */, blurred, 0, c0, c1);
	    write_blurred_off_chip(blurred /* buf name */, off_chip_output, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
  // { load_image_from_off_chip[root = 0, po, pi] -> off_chip_input[pi, po] : 0 <= po <= 255 and 0 <= pi <= 255 }
const int load_image_from_off_chip_read_num_transfers = 65536;
  // { write_blurred_off_chip[root = 0, m, n] -> off_chip_output[n, m] : 0 <= m <= 255 and 0 <= n <= 255 }
const int write_blurred_off_chip_write_num_transfers = 65536;


extern "C" {

static void read_load_image_from_off_chip_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = load_image_from_off_chip_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_write_blurred_off_chip_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = write_blurred_off_chip_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void brighten_blur_accel(hw_uint<16>* load_image_from_off_chip_read, hw_uint<16>* write_blurred_off_chip_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = load_image_from_off_chip_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = write_blurred_off_chip_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = load_image_from_off_chip_read bundle = control
#pragma HLS INTERFACE s_axilite port = write_blurred_off_chip_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > load_image_from_off_chip_read_channel;
  static HWStream<hw_uint<16> > write_blurred_off_chip_write_channel;

  read_load_image_from_off_chip_read(load_image_from_off_chip_read, load_image_from_off_chip_read_channel, size);

  brighten_blur(load_image_from_off_chip_read_channel, write_blurred_off_chip_write_channel);

  write_write_blurred_off_chip_write(write_blurred_off_chip_write, write_blurred_off_chip_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

