#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: unsharp_multi_kernel_merged_compute_units.h
#include "unsharp_multi_kernel_merged_compute_units.h"

#include "hw_classes.h"

struct gray_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 5], [0, 5]}
  hw_uint<32>  RAM[6][6];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_cache {
  // # of banks: 1
  gray_all_inputs_to_all_outputs_cache gray_all_inputs_to_all_outputs;
};



inline void gray_oc_load_in03_4_write(hw_uint<32> & gray_oc_load_in03_4, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
  gray.gray_all_inputs_to_all_outputs.write(gray_oc_load_in03_4, oc_load_in02 - 0, oc_load_in01 - 0);
}

inline hw_uint<32>  gray_store_to_gray_to_gp_182_3_select(gray_cache& gray, int root, int gray_ld0, int gray_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_store_to_gray_to_gp_182_3 read pattern: { store_to_gray_to_gp_182[root = 0, gray_ld0, gray_ld1] -> gray[gray_ld0, gray_ld1] : 0 <= gray_ld0 <= 3 and 0 <= gray_ld1 <= 3 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(gray_ld0 - 0, gray_ld1 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_store_to_gray_to_gp_295_1_select(gray_cache& gray, int root, int gray_ld3, int gray_ld4, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_store_to_gray_to_gp_295_1 read pattern: { store_to_gray_to_gp_295[root = 0, gray_ld3, gray_ld4] -> gray[gray_ld3, gray_ld4] : 0 <= gray_ld3 <= 5 and 0 <= gray_ld4 <= 5 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(gray_ld3 - 0, gray_ld4 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

// # of bundles = 3
// oc_load_in03_write
//	gray_oc_load_in03_4
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_4_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_4_write(gray_oc_load_in03_4_res, gray, root, oc_load_in01, oc_load_in02, dynamic_address);
}

// store_to_gray_to_gp_182_read
//	gray_store_to_gray_to_gp_182_3
inline hw_uint<32> gray_store_to_gray_to_gp_182_read_bundle_read(gray_cache& gray, int root, int gray_ld0, int gray_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_store_to_gray_to_gp_182_3

	hw_uint<32> result;
	hw_uint<32>  gray_store_to_gray_to_gp_182_3_res = gray_store_to_gray_to_gp_182_3_select(gray, root, gray_ld0, gray_ld1, dynamic_address);
	set_at<0, 32>(result, gray_store_to_gray_to_gp_182_3_res);
	return result;
}

// store_to_gray_to_gp_295_read
//	gray_store_to_gray_to_gp_295_1
inline hw_uint<32> gray_store_to_gray_to_gp_295_read_bundle_read(gray_cache& gray, int root, int gray_ld3, int gray_ld4, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_store_to_gray_to_gp_295_1

	hw_uint<32> result;
	hw_uint<32>  gray_store_to_gray_to_gp_295_1_res = gray_store_to_gray_to_gp_295_1_select(gray, root, gray_ld3, gray_ld4, dynamic_address);
	set_at<0, 32>(result, gray_store_to_gray_to_gp_295_1_res);
	return result;
}

// Total re-use buffer capacity: 1152 bits


// Operation logic
inline void oc_load_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02) {
  // Dynamic address computation

	// Consume: in
	auto in_oc_load_in02_p_0_c___oc_load_in01_p_0_value = in.read();
	// Produce: gray
	gray_oc_load_in03_write_bundle_write(/* arg names */in_oc_load_in02_p_0_c___oc_load_in01_p_0_value, gray, root, oc_load_in01, oc_load_in02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_gray_to_gp_295(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_29, int root, int gray_ld3, int gray_ld4) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld3_c__gray_ld4_value = gray_store_to_gray_to_gp_295_read_bundle_read(gray/* source_delay */, root, gray_ld3, gray_ld4, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_29
	gray_to_gp_29.write(gray_gray_ld3_c__gray_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_gray_to_gp_182(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_18, int root, int gray_ld0, int gray_ld1) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld0_c__gray_ld1_value = gray_store_to_gray_to_gp_182_read_bundle_read(gray/* source_delay */, root, gray_ld0, gray_ld1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_18
	gray_to_gp_18.write(gray_gray_ld0_c__gray_ld1_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_oc_load_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_29) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_oc_load_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_cache gray;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [oc_load_in01, 5 + oc_load_in02, 0] : 0 <= oc_load_in01 <= 5 and 0 <= oc_load_in02 <= 5; store_to_gray_to_gp_295[root = 0, gray_ld3, gray_ld4] -> [5 + gray_ld3, gray_ld4, 1] : 0 <= gray_ld3 <= 5 and 0 <= gray_ld4 <= 5; store_to_gray_to_gp_182[root = 0, gray_ld0, gray_ld1] -> [3 + gray_ld0, 2 + gray_ld1, 2] : 0 <= gray_ld0 <= 3 and 0 <= gray_ld1 <= 3 }
//   { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [oc_load_in01, 5 + oc_load_in02, 0] : 0 <= oc_load_in01 <= 5 and 0 <= oc_load_in02 <= 5 }
// Condition for oc_load_in03(((i2 == 0) && (i0 >= 0) && (5 - i0 >= 0) && (-5 + i1 >= 0) && (10 - i1 >= 0)))
//   { store_to_gray_to_gp_295[root = 0, gray_ld3, gray_ld4] -> [5 + gray_ld3, gray_ld4, 1] : 0 <= gray_ld3 <= 5 and 0 <= gray_ld4 <= 5 }
// Condition for store_to_gray_to_gp_295(((-1 + i2 == 0) && (-5 + i0 >= 0) && (10 - i0 >= 0) && (i1 >= 0) && (5 - i1 >= 0)))
//   { store_to_gray_to_gp_182[root = 0, gray_ld0, gray_ld1] -> [3 + gray_ld0, 2 + gray_ld1, 2] : 0 <= gray_ld0 <= 3 and 0 <= gray_ld1 <= 3 }
// Condition for store_to_gray_to_gp_182(((-2 + i2 == 0) && (-3 + i0 >= 0) && (6 - i0 >= 0) && (-2 + i1 >= 0) && (5 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 10; c0 += 1)
  for (int c1 = 0; c1 <= 10; c1 += 1) {
    if (c0 <= 5 && c1 >= 5)
      oc_load_in03(0, c0, c1 - 5);
    if (c0 >= 5 && c1 <= 5)
      store_to_gray_to_gp_295(0, c0 - 5, c1);
    if (c0 >= 3 && c0 <= 6 && c1 >= 2 && c1 <= 5)
      store_to_gray_to_gp_182(0, c0 - 3, c1 - 2);
  }

  */
	for (int c0 = 0; c0 <= 10; c0 += 1)
	  for (int c1 = 0; c1 <= 10; c1 += 1) {
	    if (c0 <= 5 && c1 >= 5)
	      oc_load_in03(in /* buf name */, gray, 0, c0, c1 - 5);
	    if (c0 >= 5 && c1 <= 5)
	      store_to_gray_to_gp_295(gray /* buf name */, gray_to_gp_29, 0, c0 - 5, c1);
	    if (c0 >= 3 && c0 <= 6 && c1 >= 2 && c1 <= 5)
	      store_to_gray_to_gp_182(gray /* buf name */, gray_to_gp_18, 0, c0 - 3, c1 - 2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_oc_load_in01__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_29, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_oc_load_in01_(in, gray_to_gp_18, gray_to_gp_29);
  }
}
#include "hw_classes.h"

struct blurred_FIFO_buf4_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 3]}
  hw_uint<32>  RAM[4][4];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct blurred_FIFO_buf4_cache {
  // # of banks: 1
  blurred_FIFO_buf4_all_inputs_to_all_outputs_cache blurred_FIFO_buf4_all_inputs_to_all_outputs;
};



inline void blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2_write(hw_uint<32> & blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2, blurred_FIFO_buf4_cache& blurred_FIFO_buf4, int root, int blurred_ld0, int blurred_ld1, int dynamic_address) {
  blurred_FIFO_buf4.blurred_FIFO_buf4_all_inputs_to_all_outputs.write(blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2, blurred_ld0 - 0, blurred_ld1 - 0);
}

inline hw_uint<32>  blurred_FIFO_buf4_diff_6_select(blurred_FIFO_buf4_cache& blurred_FIFO_buf4, int root, int x, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_FIFO_buf4_diff_6 read pattern: { diff[root = 0, x, y] -> blurred_FIFO_buf4[x, y] : 0 <= x <= 3 and 0 <= y <= 3 }
  auto value_blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2 = blurred_FIFO_buf4.blurred_FIFO_buf4_all_inputs_to_all_outputs.read(x - 0, y - 0);
  return value_blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2;
  return 0;
}

// # of bundles = 2
// diff_read
//	blurred_FIFO_buf4_diff_6
inline hw_uint<32> blurred_FIFO_buf4_diff_read_bundle_read(blurred_FIFO_buf4_cache& blurred_FIFO_buf4, int root, int x, int y, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_FIFO_buf4_diff_6

	hw_uint<32> result;
	hw_uint<32>  blurred_FIFO_buf4_diff_6_res = blurred_FIFO_buf4_diff_6_select(blurred_FIFO_buf4, root, x, y, dynamic_address);
	set_at<0, 32>(result, blurred_FIFO_buf4_diff_6_res);
	return result;
}

// load_to_blurred_FIFO_buf42_write
//	blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2
inline void blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_write_bundle_write(hw_uint<32>& load_to_blurred_FIFO_buf42_write, blurred_FIFO_buf4_cache& blurred_FIFO_buf4, int root, int blurred_ld0, int blurred_ld1, int dynamic_address) {
	hw_uint<32>  blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2_res = load_to_blurred_FIFO_buf42_write.extract<0, 31>();
	blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2_write(blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_2_res, blurred_FIFO_buf4, root, blurred_ld0, blurred_ld1, dynamic_address);
}

#include "hw_classes.h"

struct gray_FIFO_buf5_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 3]}
  hw_uint<32>  RAM[4][4];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf5_cache {
  // # of banks: 1
  gray_FIFO_buf5_all_inputs_to_all_outputs_cache gray_FIFO_buf5_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf5_load_to_gray_FIFO_buf55_0_write(hw_uint<32> & gray_FIFO_buf5_load_to_gray_FIFO_buf55_0, gray_FIFO_buf5_cache& gray_FIFO_buf5, int root, int gray_ld3, int gray_ld4, int dynamic_address) {
  gray_FIFO_buf5.gray_FIFO_buf5_all_inputs_to_all_outputs.write(gray_FIFO_buf5_load_to_gray_FIFO_buf55_0, gray_ld3 - 0, gray_ld4 - 0);
}

inline hw_uint<32>  gray_FIFO_buf5_diff_5_select(gray_FIFO_buf5_cache& gray_FIFO_buf5, int root, int x, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf5_diff_5 read pattern: { diff[root = 0, x, y] -> gray_FIFO_buf5[x, y] : 0 <= x <= 3 and 0 <= y <= 3 }
  auto value_gray_FIFO_buf5_load_to_gray_FIFO_buf55_0 = gray_FIFO_buf5.gray_FIFO_buf5_all_inputs_to_all_outputs.read(x - 0, y - 0);
  return value_gray_FIFO_buf5_load_to_gray_FIFO_buf55_0;
  return 0;
}

// # of bundles = 2
// diff_read
//	gray_FIFO_buf5_diff_5
inline hw_uint<32> gray_FIFO_buf5_diff_read_bundle_read(gray_FIFO_buf5_cache& gray_FIFO_buf5, int root, int x, int y, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf5_diff_5

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf5_diff_5_res = gray_FIFO_buf5_diff_5_select(gray_FIFO_buf5, root, x, y, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf5_diff_5_res);
	return result;
}

// load_to_gray_FIFO_buf55_write
//	gray_FIFO_buf5_load_to_gray_FIFO_buf55_0
inline void gray_FIFO_buf5_load_to_gray_FIFO_buf55_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf55_write, gray_FIFO_buf5_cache& gray_FIFO_buf5, int root, int gray_ld3, int gray_ld4, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf5_load_to_gray_FIFO_buf55_0_res = load_to_gray_FIFO_buf55_write.extract<0, 31>();
	gray_FIFO_buf5_load_to_gray_FIFO_buf55_0_write(gray_FIFO_buf5_load_to_gray_FIFO_buf55_0_res, gray_FIFO_buf5, root, gray_ld3, gray_ld4, dynamic_address);
}

// Total re-use buffer capacity: 1024 bits


// Operation logic
inline void diff(gray_FIFO_buf5_cache& gray_FIFO_buf5, blurred_FIFO_buf4_cache& blurred_FIFO_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int x, int y) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf5
	auto gray_FIFO_buf5_x_p_0_c___y_p_0_value = gray_FIFO_buf5_diff_read_bundle_read(gray_FIFO_buf5/* source_delay */, root, x, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: blurred_FIFO_buf4
	auto blurred_FIFO_buf4_x_p_0_c___y_p_0_value = blurred_FIFO_buf4_diff_read_bundle_read(blurred_FIFO_buf4/* source_delay */, root, x, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff(gray_FIFO_buf5_x_p_0_c___y_p_0_value, blurred_FIFO_buf4_x_p_0_c___y_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurred_FIFO_buf42(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_17, blurred_FIFO_buf4_cache& blurred_FIFO_buf4, int root, int blurred_ld0, int blurred_ld1) {
  // Dynamic address computation

	// Consume: blurred_to_gp_17
	auto blurred_to_gp_17_blurred_ld0_c__blurred_ld1_value = blurred_to_gp_17.read();
	// Produce: blurred_FIFO_buf4
	blurred_FIFO_buf4_load_to_blurred_FIFO_buf42_write_bundle_write(/* arg names */blurred_to_gp_17_blurred_ld0_c__blurred_ld1_value, blurred_FIFO_buf4, root, blurred_ld0, blurred_ld1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_FIFO_buf55(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_18, gray_FIFO_buf5_cache& gray_FIFO_buf5, int root, int gray_ld3, int gray_ld4) {
  // Dynamic address computation

	// Consume: gray_to_gp_18
	auto gray_to_gp_18_gray_ld3_c__gray_ld4_value = gray_to_gp_18.read();
	// Produce: gray_FIFO_buf5
	gray_FIFO_buf5_load_to_gray_FIFO_buf55_write_bundle_write(/* arg names */gray_to_gp_18_gray_ld3_c__gray_ld4_value, gray_FIFO_buf5, root, gray_ld3, gray_ld4, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_x_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_17, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_x__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_FIFO_buf4_cache blurred_FIFO_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf5_cache gray_FIFO_buf5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff[root = 0, x, y] -> [x, y, 2] : 0 <= x <= 3 and 0 <= y <= 3; load_to_gray_FIFO_buf55[root = 0, gray_ld3, gray_ld4] -> [gray_ld3, gray_ld4, 1] : 0 <= gray_ld3 <= 3 and 0 <= gray_ld4 <= 3; load_to_blurred_FIFO_buf42[root = 0, blurred_ld0, blurred_ld1] -> [blurred_ld0, blurred_ld1, 0] : 0 <= blurred_ld0 <= 3 and 0 <= blurred_ld1 <= 3 }
//   { diff[root = 0, x, y] -> [x, y, 2] : 0 <= x <= 3 and 0 <= y <= 3 }
// Condition for diff(((-2 + i2 == 0) && (i0 >= 0) && (3 - i0 >= 0) && (i1 >= 0) && (3 - i1 >= 0)))
//   { load_to_gray_FIFO_buf55[root = 0, gray_ld3, gray_ld4] -> [gray_ld3, gray_ld4, 1] : 0 <= gray_ld3 <= 3 and 0 <= gray_ld4 <= 3 }
// Condition for load_to_gray_FIFO_buf55(((-1 + i2 == 0) && (i0 >= 0) && (3 - i0 >= 0) && (i1 >= 0) && (3 - i1 >= 0)))
//   { load_to_blurred_FIFO_buf42[root = 0, blurred_ld0, blurred_ld1] -> [blurred_ld0, blurred_ld1, 0] : 0 <= blurred_ld0 <= 3 and 0 <= blurred_ld1 <= 3 }
// Condition for load_to_blurred_FIFO_buf42(((i2 == 0) && (i0 >= 0) && (3 - i0 >= 0) && (i1 >= 0) && (3 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 3; c0 += 1)
  for (int c1 = 0; c1 <= 3; c1 += 1) {
    load_to_blurred_FIFO_buf42(0, c0, c1);
    load_to_gray_FIFO_buf55(0, c0, c1);
    diff(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 3; c0 += 1)
	  for (int c1 = 0; c1 <= 3; c1 += 1) {
	    load_to_blurred_FIFO_buf42(blurred_to_gp_17 /* buf name */, blurred_FIFO_buf4, 0, c0, c1);
	    load_to_gray_FIFO_buf55(gray_to_gp_18 /* buf name */, gray_FIFO_buf5, 0, c0, c1);
	    diff(gray_FIFO_buf5 /* buf name */, blurred_FIFO_buf4 /* buf name */, out, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_x__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_17, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_x_(blurred_to_gp_17, gray_to_gp_18, out);
  }
}
#include "hw_classes.h"

struct blurred_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 3]}
  hw_uint<32>  RAM[4][4];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct blurred_cache {
  // # of banks: 1
  blurred_all_inputs_to_all_outputs_cache blurred_all_inputs_to_all_outputs;
};



inline void blurred_blur_4_write(hw_uint<32> & blurred_blur_4, blurred_cache& blurred, int root, int xb, int yb, int dynamic_address) {
  blurred.blurred_all_inputs_to_all_outputs.write(blurred_blur_4, xb - 0, yb - 0);
}

inline hw_uint<32>  blurred_store_to_blurred_to_gp_175_1_select(blurred_cache& blurred, int root, int blurred_ld3, int blurred_ld4, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_store_to_blurred_to_gp_175_1 read pattern: { store_to_blurred_to_gp_175[root = 0, blurred_ld3, blurred_ld4] -> blurred[blurred_ld3, blurred_ld4] : 0 <= blurred_ld3 <= 3 and 0 <= blurred_ld4 <= 3 }
  auto value_blurred_blur_4 = blurred.blurred_all_inputs_to_all_outputs.read(blurred_ld3 - 0, blurred_ld4 - 0);
  return value_blurred_blur_4;
  return 0;
}

// # of bundles = 2
// blur_write
//	blurred_blur_4
inline void blurred_blur_write_bundle_write(hw_uint<32>& blur_write, blurred_cache& blurred, int root, int xb, int yb, int dynamic_address) {
	hw_uint<32>  blurred_blur_4_res = blur_write.extract<0, 31>();
	blurred_blur_4_write(blurred_blur_4_res, blurred, root, xb, yb, dynamic_address);
}

// store_to_blurred_to_gp_175_read
//	blurred_store_to_blurred_to_gp_175_1
inline hw_uint<32> blurred_store_to_blurred_to_gp_175_read_bundle_read(blurred_cache& blurred, int root, int blurred_ld3, int blurred_ld4, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_store_to_blurred_to_gp_175_1

	hw_uint<32> result;
	hw_uint<32>  blurred_store_to_blurred_to_gp_175_1_res = blurred_store_to_blurred_to_gp_175_1_select(blurred, root, blurred_ld3, blurred_ld4, dynamic_address);
	set_at<0, 32>(result, blurred_store_to_blurred_to_gp_175_1_res);
	return result;
}

#include "hw_classes.h"

struct gray_FIFO_buf6_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 5], [0, 5]}
  hw_uint<32>  RAM[6][6];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf6_cache {
  // # of banks: 1
  gray_FIFO_buf6_all_inputs_to_all_outputs_cache gray_FIFO_buf6_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf6_load_to_gray_FIFO_buf62_2_write(hw_uint<32> & gray_FIFO_buf6_load_to_gray_FIFO_buf62_2, gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int gray_ld0, int gray_ld1, int dynamic_address) {
  gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.write(gray_FIFO_buf6_load_to_gray_FIFO_buf62_2, gray_ld0 - 0, gray_ld1 - 0);
}

inline hw_uint<32>  gray_FIFO_buf6_blur_10_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_10 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[1 + xb, 2 + yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(1 + xb - 0, 2 + yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_11_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_11 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[2 + xb, yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(2 + xb - 0, yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_12_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_12 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[2 + xb, 1 + yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(2 + xb - 0, 1 + yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_13_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_13 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[2 + xb, 2 + yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(2 + xb - 0, 2 + yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_5_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_5 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[xb, yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(xb - 0, yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_6_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_6 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[xb, 1 + yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(xb - 0, 1 + yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_7_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_7 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[xb, 2 + yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(xb - 0, 2 + yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_8_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_8 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[1 + xb, yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(1 + xb - 0, yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

inline hw_uint<32>  gray_FIFO_buf6_blur_9_select(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf6_blur_9 read pattern: { blur[root = 0, xb, yb] -> gray_FIFO_buf6[1 + xb, 1 + yb] : 0 <= xb <= 3 and 0 <= yb <= 3 }
  auto value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2 = gray_FIFO_buf6.gray_FIFO_buf6_all_inputs_to_all_outputs.read(1 + xb - 0, 1 + yb - 0);
  return value_gray_FIFO_buf6_load_to_gray_FIFO_buf62_2;
  return 0;
}

// # of bundles = 2
// blur_read
//	gray_FIFO_buf6_blur_5
//	gray_FIFO_buf6_blur_6
//	gray_FIFO_buf6_blur_7
//	gray_FIFO_buf6_blur_8
//	gray_FIFO_buf6_blur_9
//	gray_FIFO_buf6_blur_10
//	gray_FIFO_buf6_blur_11
//	gray_FIFO_buf6_blur_12
//	gray_FIFO_buf6_blur_13
inline hw_uint<288> gray_FIFO_buf6_blur_read_bundle_read(gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int xb, int yb, int dynamic_address) {
  // # of ports in bundle: 9
    // gray_FIFO_buf6_blur_5
    // gray_FIFO_buf6_blur_6
    // gray_FIFO_buf6_blur_7
    // gray_FIFO_buf6_blur_8
    // gray_FIFO_buf6_blur_9
    // gray_FIFO_buf6_blur_10
    // gray_FIFO_buf6_blur_11
    // gray_FIFO_buf6_blur_12
    // gray_FIFO_buf6_blur_13

	hw_uint<288> result;
	hw_uint<32>  gray_FIFO_buf6_blur_5_res = gray_FIFO_buf6_blur_5_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<0, 288>(result, gray_FIFO_buf6_blur_5_res);
	hw_uint<32>  gray_FIFO_buf6_blur_6_res = gray_FIFO_buf6_blur_6_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<32, 288>(result, gray_FIFO_buf6_blur_6_res);
	hw_uint<32>  gray_FIFO_buf6_blur_7_res = gray_FIFO_buf6_blur_7_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<64, 288>(result, gray_FIFO_buf6_blur_7_res);
	hw_uint<32>  gray_FIFO_buf6_blur_8_res = gray_FIFO_buf6_blur_8_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<96, 288>(result, gray_FIFO_buf6_blur_8_res);
	hw_uint<32>  gray_FIFO_buf6_blur_9_res = gray_FIFO_buf6_blur_9_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<128, 288>(result, gray_FIFO_buf6_blur_9_res);
	hw_uint<32>  gray_FIFO_buf6_blur_10_res = gray_FIFO_buf6_blur_10_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<160, 288>(result, gray_FIFO_buf6_blur_10_res);
	hw_uint<32>  gray_FIFO_buf6_blur_11_res = gray_FIFO_buf6_blur_11_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<192, 288>(result, gray_FIFO_buf6_blur_11_res);
	hw_uint<32>  gray_FIFO_buf6_blur_12_res = gray_FIFO_buf6_blur_12_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<224, 288>(result, gray_FIFO_buf6_blur_12_res);
	hw_uint<32>  gray_FIFO_buf6_blur_13_res = gray_FIFO_buf6_blur_13_select(gray_FIFO_buf6, root, xb, yb, dynamic_address);
	set_at<256, 288>(result, gray_FIFO_buf6_blur_13_res);
	return result;
}

// load_to_gray_FIFO_buf62_write
//	gray_FIFO_buf6_load_to_gray_FIFO_buf62_2
inline void gray_FIFO_buf6_load_to_gray_FIFO_buf62_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf62_write, gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int gray_ld0, int gray_ld1, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf6_load_to_gray_FIFO_buf62_2_res = load_to_gray_FIFO_buf62_write.extract<0, 31>();
	gray_FIFO_buf6_load_to_gray_FIFO_buf62_2_write(gray_FIFO_buf6_load_to_gray_FIFO_buf62_2_res, gray_FIFO_buf6, root, gray_ld0, gray_ld1, dynamic_address);
}

// Total re-use buffer capacity: 1664 bits


// Operation logic
inline void blur(gray_FIFO_buf6_cache& gray_FIFO_buf6, blurred_cache& blurred, int root, int xb, int yb) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf6
	auto gray_FIFO_buf6_xb__p__0_p_0_c___yb__p__0_p_0_value = gray_FIFO_buf6_blur_read_bundle_read(gray_FIFO_buf6/* source_delay */, root, xb, yb, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(gray_FIFO_buf6_xb__p__0_p_0_c___yb__p__0_p_0_value);
	// Produce: blurred
	blurred_blur_write_bundle_write(/* arg names */compute_result, blurred, root, xb, yb, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_FIFO_buf62(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_29, gray_FIFO_buf6_cache& gray_FIFO_buf6, int root, int gray_ld0, int gray_ld1) {
  // Dynamic address computation

	// Consume: gray_to_gp_29
	auto gray_to_gp_29_gray_ld0_c__gray_ld1_value = gray_to_gp_29.read();
	// Produce: gray_FIFO_buf6
	gray_FIFO_buf6_load_to_gray_FIFO_buf62_write_bundle_write(/* arg names */gray_to_gp_29_gray_ld0_c__gray_ld1_value, gray_FIFO_buf6, root, gray_ld0, gray_ld1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_blurred_to_gp_175(blurred_cache& blurred, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_17, int root, int blurred_ld3, int blurred_ld4) {
  // Dynamic address computation

	// Consume: blurred
	auto blurred_blurred_ld3_c__blurred_ld4_value = blurred_store_to_blurred_to_gp_175_read_bundle_read(blurred/* source_delay */, root, blurred_ld3, blurred_ld4, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurred_to_gp_17
	blurred_to_gp_17.write(blurred_blurred_ld3_c__blurred_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_xb_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_29, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_17) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_xb__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_cache blurred;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf6_cache gray_FIFO_buf6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { store_to_blurred_to_gp_175[root = 0, blurred_ld3, blurred_ld4] -> [2 + blurred_ld3, 2 + blurred_ld4, 2] : 0 <= blurred_ld3 <= 3 and 0 <= blurred_ld4 <= 3; load_to_gray_FIFO_buf62[root = 0, gray_ld0, gray_ld1] -> [gray_ld0, gray_ld1, 0] : 0 <= gray_ld0 <= 5 and 0 <= gray_ld1 <= 5; blur[root = 0, xb, yb] -> [2 + xb, 2 + yb, 1] : 0 <= xb <= 3 and 0 <= yb <= 3 }
//   { store_to_blurred_to_gp_175[root = 0, blurred_ld3, blurred_ld4] -> [2 + blurred_ld3, 2 + blurred_ld4, 2] : 0 <= blurred_ld3 <= 3 and 0 <= blurred_ld4 <= 3 }
// Condition for store_to_blurred_to_gp_175(((-2 + i2 == 0) && (-2 + i0 >= 0) && (5 - i0 >= 0) && (-2 + i1 >= 0) && (5 - i1 >= 0)))
//   { load_to_gray_FIFO_buf62[root = 0, gray_ld0, gray_ld1] -> [gray_ld0, gray_ld1, 0] : 0 <= gray_ld0 <= 5 and 0 <= gray_ld1 <= 5 }
// Condition for load_to_gray_FIFO_buf62(((i2 == 0) && (i0 >= 0) && (5 - i0 >= 0) && (i1 >= 0) && (5 - i1 >= 0)))
//   { blur[root = 0, xb, yb] -> [2 + xb, 2 + yb, 1] : 0 <= xb <= 3 and 0 <= yb <= 3 }
// Condition for blur(((-1 + i2 == 0) && (-2 + i0 >= 0) && (5 - i0 >= 0) && (-2 + i1 >= 0) && (5 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 5; c0 += 1)
  for (int c1 = 0; c1 <= 5; c1 += 1) {
    load_to_gray_FIFO_buf62(0, c0, c1);
    if (c0 >= 2 && c1 >= 2) {
      blur(0, c0 - 2, c1 - 2);
      store_to_blurred_to_gp_175(0, c0 - 2, c1 - 2);
    }
  }

  */
	for (int c0 = 0; c0 <= 5; c0 += 1)
	  for (int c1 = 0; c1 <= 5; c1 += 1) {
	    load_to_gray_FIFO_buf62(gray_to_gp_29 /* buf name */, gray_FIFO_buf6, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      blur(gray_FIFO_buf6 /* buf name */, blurred, 0, c0 - 2, c1 - 2);
	      store_to_blurred_to_gp_175(blurred /* buf name */, blurred_to_gp_17, 0, c0 - 2, c1 - 2);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_xb__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_29, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_17, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_xb_(gray_to_gp_29, blurred_to_gp_17);
  }
}
// Driver function
void unsharp_multi_kernel(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unsharp_multi_kernel_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream<hw_uint<32> > gray_to_gp_18;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_18.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_to_gp_29;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_29.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > blurred_to_gp_17;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurred_to_gp_17.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_oc_load_in01_(in, gray_to_gp_18, gray_to_gp_29);
  Extracted_xb_(gray_to_gp_29, blurred_to_gp_17);
  Extracted_x_(blurred_to_gp_17, gray_to_gp_18, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unsharp_multi_kernel_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unsharp_multi_kernel(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 5 and 0 <= oc_load_in02 <= 5 }
const int oc_load_in03_read_pipe0_num_transfers = 36;
  // { diff[root = 0, x, y] -> out[x, y] : 0 <= x <= 3 and 0 <= y <= 3 }
const int diff_write_pipe0_num_transfers = 16;


extern "C" {

void unsharp_multi_kernel_accel(hw_uint<32>* oc_load_in03_read_pipe0, hw_uint<32>* diff_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = oc_load_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = diff_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = oc_load_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = diff_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > oc_load_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > diff_write_pipe0_channel;

  burst_read<32>(oc_load_in03_read_pipe0, oc_load_in03_read_pipe0_channel, oc_load_in03_read_pipe0_num_transfers*size);

  unsharp_multi_kernel_wrapper(oc_load_in03_read_pipe0_channel, diff_write_pipe0_channel, size);

  burst_write<32>(diff_write_pipe0, diff_write_pipe0_channel, diff_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unsharp_multi_kernel_rdai(HWStream<hw_uint<32> >& oc_load_in03_read_pipe0, HWStream<hw_uint<32> >&  diff_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = oc_load_in03_read_pipe0
#pragma HLS INTERFACE axis register port = diff_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unsharp_multi_kernel(oc_load_in03_read_pipe0, diff_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

