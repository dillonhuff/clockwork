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
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
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

inline hw_uint<32>  gray_store_to_gray_to_gp_1232_3_select(gray_cache& gray, int root, int gray_ld1, int gray_ld0, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_store_to_gray_to_gp_1232_3 read pattern: { store_to_gray_to_gp_1232[root = 0, gray_ld1, gray_ld0] -> gray[gray_ld0, gray_ld1] : 0 <= gray_ld1 <= 63 and 0 <= gray_ld0 <= 63 }
  auto value_gray_oc_load_in03_4 = gray.gray_all_inputs_to_all_outputs.read(gray_ld0 - 0, gray_ld1 - 0);
  return value_gray_oc_load_in03_4;
  return 0;
}

inline hw_uint<32>  gray_store_to_gray_to_gp_2245_1_select(gray_cache& gray, int root, int gray_ld4, int gray_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_store_to_gray_to_gp_2245_1 read pattern: { store_to_gray_to_gp_2245[root = 0, gray_ld4, gray_ld3] -> gray[gray_ld3, gray_ld4] : 0 <= gray_ld4 <= 65 and 0 <= gray_ld3 <= 65 }
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

// store_to_gray_to_gp_1232_read
//	gray_store_to_gray_to_gp_1232_3
inline hw_uint<32> gray_store_to_gray_to_gp_1232_read_bundle_read(gray_cache& gray, int root, int gray_ld1, int gray_ld0, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_store_to_gray_to_gp_1232_3

	hw_uint<32> result;
	hw_uint<32>  gray_store_to_gray_to_gp_1232_3_res = gray_store_to_gray_to_gp_1232_3_select(gray, root, gray_ld1, gray_ld0, dynamic_address);
	set_at<0, 32>(result, gray_store_to_gray_to_gp_1232_3_res);
	return result;
}

// store_to_gray_to_gp_2245_read
//	gray_store_to_gray_to_gp_2245_1
inline hw_uint<32> gray_store_to_gray_to_gp_2245_read_bundle_read(gray_cache& gray, int root, int gray_ld4, int gray_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_store_to_gray_to_gp_2245_1

	hw_uint<32> result;
	hw_uint<32>  gray_store_to_gray_to_gp_2245_1_res = gray_store_to_gray_to_gp_2245_1_select(gray, root, gray_ld4, gray_ld3, dynamic_address);
	set_at<0, 32>(result, gray_store_to_gray_to_gp_2245_1_res);
	return result;
}

// Total re-use buffer capacity: 139392 bits


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

inline void store_to_gray_to_gp_1232(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_123, int root, int gray_ld1, int gray_ld0) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld0_c__gray_ld1_value = gray_store_to_gray_to_gp_1232_read_bundle_read(gray/* source_delay */, root, gray_ld1, gray_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_123
	gray_to_gp_123.write(gray_gray_ld0_c__gray_ld1_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_gray_to_gp_2245(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_224, int root, int gray_ld4, int gray_ld3) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld3_c__gray_ld4_value = gray_store_to_gray_to_gp_2245_read_bundle_read(gray/* source_delay */, root, gray_ld4, gray_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_224
	gray_to_gp_224.write(gray_gray_ld3_c__gray_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_oc_load_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_123, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224) {

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

// schedule: { store_to_gray_to_gp_1232[root = 0, gray_ld1, gray_ld0] -> [gray_ld1, gray_ld0, 2] : 0 <= gray_ld1 <= 63 and 0 <= gray_ld0 <= 63; oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [oc_load_in01, oc_load_in02, 0] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65; store_to_gray_to_gp_2245[root = 0, gray_ld4, gray_ld3] -> [gray_ld4, gray_ld3, 1] : 0 <= gray_ld4 <= 65 and 0 <= gray_ld3 <= 65 }
//   { store_to_gray_to_gp_1232[root = 0, gray_ld1, gray_ld0] -> [gray_ld1, gray_ld0, 2] : 0 <= gray_ld1 <= 63 and 0 <= gray_ld0 <= 63 }
// Condition for store_to_gray_to_gp_1232(((-2 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [oc_load_in01, oc_load_in02, 0] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
// Condition for oc_load_in03(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { store_to_gray_to_gp_2245[root = 0, gray_ld4, gray_ld3] -> [gray_ld4, gray_ld3, 1] : 0 <= gray_ld4 <= 65 and 0 <= gray_ld3 <= 65 }
// Condition for store_to_gray_to_gp_2245(((-1 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 65; c0 += 1)
  for (int c1 = 0; c1 <= 65; c1 += 1) {
    oc_load_in03(0, c0, c1);
    store_to_gray_to_gp_2245(0, c0, c1);
    if (c0 <= 63 && c1 <= 63)
      store_to_gray_to_gp_1232(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 65; c0 += 1)
	  for (int c1 = 0; c1 <= 65; c1 += 1) {
	    oc_load_in03(in /* buf name */, gray, 0, c0, c1);
	    store_to_gray_to_gp_2245(gray /* buf name */, gray_to_gp_224, 0, c0, c1);
	    if (c0 <= 63 && c1 <= 63)
	      store_to_gray_to_gp_1232(gray /* buf name */, gray_to_gp_123, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_oc_load_in01__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_123, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_oc_load_in01_(in, gray_to_gp_123, gray_to_gp_224);
  }
}
#include "hw_classes.h"

struct gray_FIFO_buf17_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf17_cache {
  // # of banks: 1
  gray_FIFO_buf17_all_inputs_to_all_outputs_cache gray_FIFO_buf17_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf17_load_to_gray_FIFO_buf172_4_write(hw_uint<32> & gray_FIFO_buf17_load_to_gray_FIFO_buf172_4, gray_FIFO_buf17_cache& gray_FIFO_buf17, int root, int gray_ld1, int gray_ld0, int dynamic_address) {
  gray_FIFO_buf17.gray_FIFO_buf17_all_inputs_to_all_outputs.write(gray_FIFO_buf17_load_to_gray_FIFO_buf172_4, gray_ld0 - 0, gray_ld1 - 0);
}

inline hw_uint<32>  gray_FIFO_buf17_pw_math_gray1215_3_select(gray_FIFO_buf17_cache& gray_FIFO_buf17, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf17_pw_math_gray1215_3 read pattern: { pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> gray_FIFO_buf17[pw_math_gray1214, pw_math_gray1213] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63 }
  auto value_gray_FIFO_buf17_load_to_gray_FIFO_buf172_4 = gray_FIFO_buf17.gray_FIFO_buf17_all_inputs_to_all_outputs.read(pw_math_gray1214 - 0, pw_math_gray1213 - 0);
  return value_gray_FIFO_buf17_load_to_gray_FIFO_buf172_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf172_write
//	gray_FIFO_buf17_load_to_gray_FIFO_buf172_4
inline void gray_FIFO_buf17_load_to_gray_FIFO_buf172_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf172_write, gray_FIFO_buf17_cache& gray_FIFO_buf17, int root, int gray_ld1, int gray_ld0, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf17_load_to_gray_FIFO_buf172_4_res = load_to_gray_FIFO_buf172_write.extract<0, 31>();
	gray_FIFO_buf17_load_to_gray_FIFO_buf172_4_write(gray_FIFO_buf17_load_to_gray_FIFO_buf172_4_res, gray_FIFO_buf17, root, gray_ld1, gray_ld0, dynamic_address);
}

// pw_math_gray1215_read
//	gray_FIFO_buf17_pw_math_gray1215_3
inline hw_uint<32> gray_FIFO_buf17_pw_math_gray1215_read_bundle_read(gray_FIFO_buf17_cache& gray_FIFO_buf17, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf17_pw_math_gray1215_3

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf17_pw_math_gray1215_3_res = gray_FIFO_buf17_pw_math_gray1215_3_select(gray_FIFO_buf17, root, pw_math_gray1213, pw_math_gray1214, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf17_pw_math_gray1215_3_res);
	return result;
}

#include "hw_classes.h"

struct gray_diff_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_diff_cache {
  // # of banks: 1
  gray_diff_all_inputs_to_all_outputs_cache gray_diff_all_inputs_to_all_outputs;
};



inline void gray_diff_pw_math_gray1215_2_write(hw_uint<32> & gray_diff_pw_math_gray1215_2, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
  gray_diff.gray_diff_all_inputs_to_all_outputs.write(gray_diff_pw_math_gray1215_2, pw_math_gray1214 - 0, pw_math_gray1213 - 0);
}

inline hw_uint<32>  gray_diff_store_to_gray_diff_to_gp_4275_1_select(gray_diff_cache& gray_diff, int root, int gray_diff_ld4, int gray_diff_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_diff_store_to_gray_diff_to_gp_4275_1 read pattern: { store_to_gray_diff_to_gp_4275[root = 0, gray_diff_ld4, gray_diff_ld3] -> gray_diff[gray_diff_ld3, gray_diff_ld4] : 0 <= gray_diff_ld4 <= 63 and 0 <= gray_diff_ld3 <= 63 }
  auto value_gray_diff_pw_math_gray1215_2 = gray_diff.gray_diff_all_inputs_to_all_outputs.read(gray_diff_ld3 - 0, gray_diff_ld4 - 0);
  return value_gray_diff_pw_math_gray1215_2;
  return 0;
}

// # of bundles = 2
// pw_math_gray1215_write
//	gray_diff_pw_math_gray1215_2
inline void gray_diff_pw_math_gray1215_write_bundle_write(hw_uint<32>& pw_math_gray1215_write, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
	hw_uint<32>  gray_diff_pw_math_gray1215_2_res = pw_math_gray1215_write.extract<0, 31>();
	gray_diff_pw_math_gray1215_2_write(gray_diff_pw_math_gray1215_2_res, gray_diff, root, pw_math_gray1213, pw_math_gray1214, dynamic_address);
}

// store_to_gray_diff_to_gp_4275_read
//	gray_diff_store_to_gray_diff_to_gp_4275_1
inline hw_uint<32> gray_diff_store_to_gray_diff_to_gp_4275_read_bundle_read(gray_diff_cache& gray_diff, int root, int gray_diff_ld4, int gray_diff_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_diff_store_to_gray_diff_to_gp_4275_1

	hw_uint<32> result;
	hw_uint<32>  gray_diff_store_to_gray_diff_to_gp_4275_1_res = gray_diff_store_to_gray_diff_to_gp_4275_1_select(gray_diff, root, gray_diff_ld4, gray_diff_ld3, dynamic_address);
	set_at<0, 32>(result, gray_diff_store_to_gray_diff_to_gp_4275_1_res);
	return result;
}

// Total re-use buffer capacity: 262144 bits


// Operation logic
inline void pw_math_gray1215(gray_FIFO_buf17_cache& gray_FIFO_buf17, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf17
	auto gray_FIFO_buf17_pw_math_gray1214_p_0_c___pw_math_gray1213_p_0_value = gray_FIFO_buf17_pw_math_gray1215_read_bundle_read(gray_FIFO_buf17/* source_delay */, root, pw_math_gray1213, pw_math_gray1214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf17_pw_math_gray1214_p_0_c___pw_math_gray1213_p_0_value);
	// Produce: gray_diff
	gray_diff_pw_math_gray1215_write_bundle_write(/* arg names */compute_result, gray_diff, root, pw_math_gray1213, pw_math_gray1214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_gray_diff_to_gp_4275(gray_diff_cache& gray_diff, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_diff_to_gp_427, int root, int gray_diff_ld4, int gray_diff_ld3) {
  // Dynamic address computation

	// Consume: gray_diff
	auto gray_diff_gray_diff_ld3_c__gray_diff_ld4_value = gray_diff_store_to_gray_diff_to_gp_4275_read_bundle_read(gray_diff/* source_delay */, root, gray_diff_ld4, gray_diff_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_diff_to_gp_427
	gray_diff_to_gp_427.write(gray_diff_gray_diff_ld3_c__gray_diff_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_FIFO_buf172(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_123, gray_FIFO_buf17_cache& gray_FIFO_buf17, int root, int gray_ld1, int gray_ld0) {
  // Dynamic address computation

	// Consume: gray_to_gp_123
	auto gray_to_gp_123_gray_ld0_c__gray_ld1_value = gray_to_gp_123.read();
	// Produce: gray_FIFO_buf17
	gray_FIFO_buf17_load_to_gray_FIFO_buf172_write_bundle_write(/* arg names */gray_to_gp_123_gray_ld0_c__gray_ld1_value, gray_FIFO_buf17, root, gray_ld1, gray_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_pw_math_gray1213_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_123, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_427) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_pw_math_gray1213__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf17_cache gray_FIFO_buf17;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_diff_cache gray_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf172[root = 0, gray_ld1, gray_ld0] -> [gray_ld1, gray_ld0, 0] : 0 <= gray_ld1 <= 63 and 0 <= gray_ld0 <= 63; pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> [pw_math_gray1213, pw_math_gray1214, 1] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63; store_to_gray_diff_to_gp_4275[root = 0, gray_diff_ld4, gray_diff_ld3] -> [gray_diff_ld4, gray_diff_ld3, 2] : 0 <= gray_diff_ld4 <= 63 and 0 <= gray_diff_ld3 <= 63 }
//   { load_to_gray_FIFO_buf172[root = 0, gray_ld1, gray_ld0] -> [gray_ld1, gray_ld0, 0] : 0 <= gray_ld1 <= 63 and 0 <= gray_ld0 <= 63 }
// Condition for load_to_gray_FIFO_buf172(((i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> [pw_math_gray1213, pw_math_gray1214, 1] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63 }
// Condition for pw_math_gray1215(((-1 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { store_to_gray_diff_to_gp_4275[root = 0, gray_diff_ld4, gray_diff_ld3] -> [gray_diff_ld4, gray_diff_ld3, 2] : 0 <= gray_diff_ld4 <= 63 and 0 <= gray_diff_ld3 <= 63 }
// Condition for store_to_gray_diff_to_gp_4275(((-2 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 63; c0 += 1)
  for (int c1 = 0; c1 <= 63; c1 += 1) {
    load_to_gray_FIFO_buf172(0, c0, c1);
    pw_math_gray1215(0, c0, c1);
    store_to_gray_diff_to_gp_4275(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
	    load_to_gray_FIFO_buf172(gray_to_gp_123 /* buf name */, gray_FIFO_buf17, 0, c0, c1);
	    pw_math_gray1215(gray_FIFO_buf17 /* buf name */, gray_diff, 0, c0, c1);
	    store_to_gray_diff_to_gp_4275(gray_diff /* buf name */, gray_diff_to_gp_427, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_pw_math_gray1213__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_123, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_427, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_pw_math_gray1213_(gray_to_gp_123, gray_diff_to_gp_427);
  }
}
#include "hw_classes.h"

struct gray_FIFO_buf18_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf18_cache {
  // # of banks: 1
  gray_FIFO_buf18_all_inputs_to_all_outputs_cache gray_FIFO_buf18_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf18_load_to_gray_FIFO_buf182_4_write(hw_uint<32> & gray_FIFO_buf18_load_to_gray_FIFO_buf182_4, gray_FIFO_buf18_cache& gray_FIFO_buf18, int root, int gray_ld1, int gray_ld0, int dynamic_address) {
  gray_FIFO_buf18.gray_FIFO_buf18_all_inputs_to_all_outputs.write(gray_FIFO_buf18_load_to_gray_FIFO_buf182_4, gray_ld0 - 0, gray_ld1 - 0);
}

inline hw_uint<32>  gray_FIFO_buf18_pw_math_gray47_3_select(gray_FIFO_buf18_cache& gray_FIFO_buf18, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf18_pw_math_gray47_3 read pattern: { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> gray_FIFO_buf18[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
  auto value_gray_FIFO_buf18_load_to_gray_FIFO_buf182_4 = gray_FIFO_buf18.gray_FIFO_buf18_all_inputs_to_all_outputs.read(pw_math_gray46 - 0, pw_math_gray45 - 0);
  return value_gray_FIFO_buf18_load_to_gray_FIFO_buf182_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf182_write
//	gray_FIFO_buf18_load_to_gray_FIFO_buf182_4
inline void gray_FIFO_buf18_load_to_gray_FIFO_buf182_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf182_write, gray_FIFO_buf18_cache& gray_FIFO_buf18, int root, int gray_ld1, int gray_ld0, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf18_load_to_gray_FIFO_buf182_4_res = load_to_gray_FIFO_buf182_write.extract<0, 31>();
	gray_FIFO_buf18_load_to_gray_FIFO_buf182_4_write(gray_FIFO_buf18_load_to_gray_FIFO_buf182_4_res, gray_FIFO_buf18, root, gray_ld1, gray_ld0, dynamic_address);
}

// pw_math_gray47_read
//	gray_FIFO_buf18_pw_math_gray47_3
inline hw_uint<32> gray_FIFO_buf18_pw_math_gray47_read_bundle_read(gray_FIFO_buf18_cache& gray_FIFO_buf18, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf18_pw_math_gray47_3

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf18_pw_math_gray47_3_res = gray_FIFO_buf18_pw_math_gray47_3_select(gray_FIFO_buf18, root, pw_math_gray45, pw_math_gray46, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf18_pw_math_gray47_3_res);
	return result;
}

#include "hw_classes.h"

struct gray_blur_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_blur_cache {
  // # of banks: 1
  gray_blur_all_inputs_to_all_outputs_cache gray_blur_all_inputs_to_all_outputs;
};



inline void gray_blur_pw_math_gray47_2_write(hw_uint<32> & gray_blur_pw_math_gray47_2, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  gray_blur.gray_blur_all_inputs_to_all_outputs.write(gray_blur_pw_math_gray47_2, pw_math_gray46 - 0, pw_math_gray45 - 0);
}

inline hw_uint<32>  gray_blur_store_to_gray_blur_to_gp_3255_1_select(gray_blur_cache& gray_blur, int root, int gray_blur_ld4, int gray_blur_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_store_to_gray_blur_to_gp_3255_1 read pattern: { store_to_gray_blur_to_gp_3255[root = 0, gray_blur_ld4, gray_blur_ld3] -> gray_blur[gray_blur_ld3, gray_blur_ld4] : 0 <= gray_blur_ld4 <= 65 and 0 <= gray_blur_ld3 <= 65 }
  auto value_gray_blur_pw_math_gray47_2 = gray_blur.gray_blur_all_inputs_to_all_outputs.read(gray_blur_ld3 - 0, gray_blur_ld4 - 0);
  return value_gray_blur_pw_math_gray47_2;
  return 0;
}

// # of bundles = 2
// pw_math_gray47_write
//	gray_blur_pw_math_gray47_2
inline void gray_blur_pw_math_gray47_write_bundle_write(hw_uint<32>& pw_math_gray47_write, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
	hw_uint<32>  gray_blur_pw_math_gray47_2_res = pw_math_gray47_write.extract<0, 31>();
	gray_blur_pw_math_gray47_2_write(gray_blur_pw_math_gray47_2_res, gray_blur, root, pw_math_gray45, pw_math_gray46, dynamic_address);
}

// store_to_gray_blur_to_gp_3255_read
//	gray_blur_store_to_gray_blur_to_gp_3255_1
inline hw_uint<32> gray_blur_store_to_gray_blur_to_gp_3255_read_bundle_read(gray_blur_cache& gray_blur, int root, int gray_blur_ld4, int gray_blur_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_store_to_gray_blur_to_gp_3255_1

	hw_uint<32> result;
	hw_uint<32>  gray_blur_store_to_gray_blur_to_gp_3255_1_res = gray_blur_store_to_gray_blur_to_gp_3255_1_select(gray_blur, root, gray_blur_ld4, gray_blur_ld3, dynamic_address);
	set_at<0, 32>(result, gray_blur_store_to_gray_blur_to_gp_3255_1_res);
	return result;
}

// Total re-use buffer capacity: 278784 bits


// Operation logic
inline void pw_math_gray47(gray_FIFO_buf18_cache& gray_FIFO_buf18, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf18
	auto gray_FIFO_buf18_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value = gray_FIFO_buf18_pw_math_gray47_read_bundle_read(gray_FIFO_buf18/* source_delay */, root, pw_math_gray45, pw_math_gray46, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf18_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value);
	// Produce: gray_blur
	gray_blur_pw_math_gray47_write_bundle_write(/* arg names */compute_result, gray_blur, root, pw_math_gray45, pw_math_gray46, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_FIFO_buf182(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_224, gray_FIFO_buf18_cache& gray_FIFO_buf18, int root, int gray_ld1, int gray_ld0) {
  // Dynamic address computation

	// Consume: gray_to_gp_224
	auto gray_to_gp_224_gray_ld0_c__gray_ld1_value = gray_to_gp_224.read();
	// Produce: gray_FIFO_buf18
	gray_FIFO_buf18_load_to_gray_FIFO_buf182_write_bundle_write(/* arg names */gray_to_gp_224_gray_ld0_c__gray_ld1_value, gray_FIFO_buf18, root, gray_ld1, gray_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_gray_blur_to_gp_3255(gray_blur_cache& gray_blur, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_to_gp_325, int root, int gray_blur_ld4, int gray_blur_ld3) {
  // Dynamic address computation

	// Consume: gray_blur
	auto gray_blur_gray_blur_ld3_c__gray_blur_ld4_value = gray_blur_store_to_gray_blur_to_gp_3255_read_bundle_read(gray_blur/* source_delay */, root, gray_blur_ld4, gray_blur_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_blur_to_gp_325
	gray_blur_to_gp_325.write(gray_blur_gray_blur_ld3_c__gray_blur_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_pw_math_gray45_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_325) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_pw_math_gray45__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf18_cache gray_FIFO_buf18;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache gray_blur;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf182[root = 0, gray_ld1, gray_ld0] -> [gray_ld1, gray_ld0, 0] : 0 <= gray_ld1 <= 65 and 0 <= gray_ld0 <= 65; store_to_gray_blur_to_gp_3255[root = 0, gray_blur_ld4, gray_blur_ld3] -> [gray_blur_ld4, gray_blur_ld3, 2] : 0 <= gray_blur_ld4 <= 65 and 0 <= gray_blur_ld3 <= 65; pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> [pw_math_gray45, pw_math_gray46, 1] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
//   { load_to_gray_FIFO_buf182[root = 0, gray_ld1, gray_ld0] -> [gray_ld1, gray_ld0, 0] : 0 <= gray_ld1 <= 65 and 0 <= gray_ld0 <= 65 }
// Condition for load_to_gray_FIFO_buf182(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { store_to_gray_blur_to_gp_3255[root = 0, gray_blur_ld4, gray_blur_ld3] -> [gray_blur_ld4, gray_blur_ld3, 2] : 0 <= gray_blur_ld4 <= 65 and 0 <= gray_blur_ld3 <= 65 }
// Condition for store_to_gray_blur_to_gp_3255(((-2 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> [pw_math_gray45, pw_math_gray46, 1] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
// Condition for pw_math_gray47(((-1 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 65; c0 += 1)
  for (int c1 = 0; c1 <= 65; c1 += 1) {
    load_to_gray_FIFO_buf182(0, c0, c1);
    pw_math_gray47(0, c0, c1);
    store_to_gray_blur_to_gp_3255(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 65; c0 += 1)
	  for (int c1 = 0; c1 <= 65; c1 += 1) {
	    load_to_gray_FIFO_buf182(gray_to_gp_224 /* buf name */, gray_FIFO_buf18, 0, c0, c1);
	    pw_math_gray47(gray_FIFO_buf18 /* buf name */, gray_blur, 0, c0, c1);
	    store_to_gray_blur_to_gp_3255(gray_blur /* buf name */, gray_blur_to_gp_325, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_pw_math_gray45__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_325, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_pw_math_gray45_(gray_to_gp_224, gray_blur_to_gp_325);
  }
}
#include "hw_classes.h"

struct gray_blur_FIFO_buf19_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_blur_FIFO_buf19_cache {
  // # of banks: 1
  gray_blur_FIFO_buf19_all_inputs_to_all_outputs_cache gray_blur_FIFO_buf19_all_inputs_to_all_outputs;
};



inline void gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4_write(hw_uint<32> & gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4, gray_blur_FIFO_buf19_cache& gray_blur_FIFO_buf19, int root, int gray_blur_ld1, int gray_blur_ld0, int dynamic_address) {
  gray_blur_FIFO_buf19.gray_blur_FIFO_buf19_all_inputs_to_all_outputs.write(gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4, gray_blur_ld0 - 0, gray_blur_ld1 - 0);
}

inline hw_uint<32>  gray_blur_FIFO_buf19_pw_math_gray_blur811_3_select(gray_blur_FIFO_buf19_cache& gray_blur_FIFO_buf19, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_FIFO_buf19_pw_math_gray_blur811_3 read pattern: { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> gray_blur_FIFO_buf19[pw_math_gray_blur810, pw_math_gray_blur89] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65 }
  auto value_gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4 = gray_blur_FIFO_buf19.gray_blur_FIFO_buf19_all_inputs_to_all_outputs.read(pw_math_gray_blur810 - 0, pw_math_gray_blur89 - 0);
  return value_gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_FIFO_buf192_write
//	gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4
inline void gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_write_bundle_write(hw_uint<32>& load_to_gray_blur_FIFO_buf192_write, gray_blur_FIFO_buf19_cache& gray_blur_FIFO_buf19, int root, int gray_blur_ld1, int gray_blur_ld0, int dynamic_address) {
	hw_uint<32>  gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4_res = load_to_gray_blur_FIFO_buf192_write.extract<0, 31>();
	gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4_write(gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_4_res, gray_blur_FIFO_buf19, root, gray_blur_ld1, gray_blur_ld0, dynamic_address);
}

// pw_math_gray_blur811_read
//	gray_blur_FIFO_buf19_pw_math_gray_blur811_3
inline hw_uint<32> gray_blur_FIFO_buf19_pw_math_gray_blur811_read_bundle_read(gray_blur_FIFO_buf19_cache& gray_blur_FIFO_buf19, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_FIFO_buf19_pw_math_gray_blur811_3

	hw_uint<32> result;
	hw_uint<32>  gray_blur_FIFO_buf19_pw_math_gray_blur811_3_res = gray_blur_FIFO_buf19_pw_math_gray_blur811_3_select(gray_blur_FIFO_buf19, root, pw_math_gray_blur89, pw_math_gray_blur810, dynamic_address);
	set_at<0, 32>(result, gray_blur_FIFO_buf19_pw_math_gray_blur811_3_res);
	return result;
}

#include "hw_classes.h"

struct gray_blur_cache_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_blur_cache_cache {
  // # of banks: 1
  gray_blur_cache_all_inputs_to_all_outputs_cache gray_blur_cache_all_inputs_to_all_outputs;
};



inline void gray_blur_cache_pw_math_gray_blur811_2_write(hw_uint<32> & gray_blur_cache_pw_math_gray_blur811_2, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
  gray_blur_cache.gray_blur_cache_all_inputs_to_all_outputs.write(gray_blur_cache_pw_math_gray_blur811_2, pw_math_gray_blur810 - 0, pw_math_gray_blur89 - 0);
}

inline hw_uint<32>  gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1_select(gray_blur_cache_cache& gray_blur_cache, int root, int gray_blur_cache_ld4, int gray_blur_cache_ld3, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1 read pattern: { store_to_gray_blur_cache_to_gp_5265[root = 0, gray_blur_cache_ld4, gray_blur_cache_ld3] -> gray_blur_cache[gray_blur_cache_ld3, gray_blur_cache_ld4] : 0 <= gray_blur_cache_ld4 <= 65 and 0 <= gray_blur_cache_ld3 <= 65 }
  auto value_gray_blur_cache_pw_math_gray_blur811_2 = gray_blur_cache.gray_blur_cache_all_inputs_to_all_outputs.read(gray_blur_cache_ld3 - 0, gray_blur_cache_ld4 - 0);
  return value_gray_blur_cache_pw_math_gray_blur811_2;
  return 0;
}

// # of bundles = 2
// pw_math_gray_blur811_write
//	gray_blur_cache_pw_math_gray_blur811_2
inline void gray_blur_cache_pw_math_gray_blur811_write_bundle_write(hw_uint<32>& pw_math_gray_blur811_write, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
	hw_uint<32>  gray_blur_cache_pw_math_gray_blur811_2_res = pw_math_gray_blur811_write.extract<0, 31>();
	gray_blur_cache_pw_math_gray_blur811_2_write(gray_blur_cache_pw_math_gray_blur811_2_res, gray_blur_cache, root, pw_math_gray_blur89, pw_math_gray_blur810, dynamic_address);
}

// store_to_gray_blur_cache_to_gp_5265_read
//	gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1
inline hw_uint<32> gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_read_bundle_read(gray_blur_cache_cache& gray_blur_cache, int root, int gray_blur_cache_ld4, int gray_blur_cache_ld3, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1

	hw_uint<32> result;
	hw_uint<32>  gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1_res = gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1_select(gray_blur_cache, root, gray_blur_cache_ld4, gray_blur_cache_ld3, dynamic_address);
	set_at<0, 32>(result, gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_1_res);
	return result;
}

// Total re-use buffer capacity: 278784 bits


// Operation logic
inline void pw_math_gray_blur811(gray_blur_FIFO_buf19_cache& gray_blur_FIFO_buf19, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810) {
  // Dynamic address computation

	// Consume: gray_blur_FIFO_buf19
	auto gray_blur_FIFO_buf19_pw_math_gray_blur810_p_0_c___pw_math_gray_blur89_p_0_value = gray_blur_FIFO_buf19_pw_math_gray_blur811_read_bundle_read(gray_blur_FIFO_buf19/* source_delay */, root, pw_math_gray_blur89, pw_math_gray_blur810, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_blur_FIFO_buf19_pw_math_gray_blur810_p_0_c___pw_math_gray_blur89_p_0_value);
	// Produce: gray_blur_cache
	gray_blur_cache_pw_math_gray_blur811_write_bundle_write(/* arg names */compute_result, gray_blur_cache, root, pw_math_gray_blur89, pw_math_gray_blur810, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_blur_FIFO_buf192(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_to_gp_325, gray_blur_FIFO_buf19_cache& gray_blur_FIFO_buf19, int root, int gray_blur_ld1, int gray_blur_ld0) {
  // Dynamic address computation

	// Consume: gray_blur_to_gp_325
	auto gray_blur_to_gp_325_gray_blur_ld0_c__gray_blur_ld1_value = gray_blur_to_gp_325.read();
	// Produce: gray_blur_FIFO_buf19
	gray_blur_FIFO_buf19_load_to_gray_blur_FIFO_buf192_write_bundle_write(/* arg names */gray_blur_to_gp_325_gray_blur_ld0_c__gray_blur_ld1_value, gray_blur_FIFO_buf19, root, gray_blur_ld1, gray_blur_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_gray_blur_cache_to_gp_5265(gray_blur_cache_cache& gray_blur_cache, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_cache_to_gp_526, int root, int gray_blur_cache_ld4, int gray_blur_cache_ld3) {
  // Dynamic address computation

	// Consume: gray_blur_cache
	auto gray_blur_cache_gray_blur_cache_ld3_c__gray_blur_cache_ld4_value = gray_blur_cache_store_to_gray_blur_cache_to_gp_5265_read_bundle_read(gray_blur_cache/* source_delay */, root, gray_blur_cache_ld4, gray_blur_cache_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_blur_cache_to_gp_526
	gray_blur_cache_to_gp_526.write(gray_blur_cache_gray_blur_cache_ld3_c__gray_blur_cache_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_pw_math_gray_blur89_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_325, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_526) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_pw_math_gray_blur89__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_blur_FIFO_buf19_cache gray_blur_FIFO_buf19;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache_cache gray_blur_cache;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> [pw_math_gray_blur89, pw_math_gray_blur810, 1] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65; load_to_gray_blur_FIFO_buf192[root = 0, gray_blur_ld1, gray_blur_ld0] -> [gray_blur_ld1, gray_blur_ld0, 0] : 0 <= gray_blur_ld1 <= 65 and 0 <= gray_blur_ld0 <= 65; store_to_gray_blur_cache_to_gp_5265[root = 0, gray_blur_cache_ld4, gray_blur_cache_ld3] -> [gray_blur_cache_ld4, gray_blur_cache_ld3, 2] : 0 <= gray_blur_cache_ld4 <= 65 and 0 <= gray_blur_cache_ld3 <= 65 }
//   { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> [pw_math_gray_blur89, pw_math_gray_blur810, 1] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65 }
// Condition for pw_math_gray_blur811(((-1 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_gray_blur_FIFO_buf192[root = 0, gray_blur_ld1, gray_blur_ld0] -> [gray_blur_ld1, gray_blur_ld0, 0] : 0 <= gray_blur_ld1 <= 65 and 0 <= gray_blur_ld0 <= 65 }
// Condition for load_to_gray_blur_FIFO_buf192(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { store_to_gray_blur_cache_to_gp_5265[root = 0, gray_blur_cache_ld4, gray_blur_cache_ld3] -> [gray_blur_cache_ld4, gray_blur_cache_ld3, 2] : 0 <= gray_blur_cache_ld4 <= 65 and 0 <= gray_blur_cache_ld3 <= 65 }
// Condition for store_to_gray_blur_cache_to_gp_5265(((-2 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 65; c0 += 1)
  for (int c1 = 0; c1 <= 65; c1 += 1) {
    load_to_gray_blur_FIFO_buf192(0, c0, c1);
    pw_math_gray_blur811(0, c0, c1);
    store_to_gray_blur_cache_to_gp_5265(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 65; c0 += 1)
	  for (int c1 = 0; c1 <= 65; c1 += 1) {
	    load_to_gray_blur_FIFO_buf192(gray_blur_to_gp_325 /* buf name */, gray_blur_FIFO_buf19, 0, c0, c1);
	    pw_math_gray_blur811(gray_blur_FIFO_buf19 /* buf name */, gray_blur_cache, 0, c0, c1);
	    store_to_gray_blur_cache_to_gp_5265(gray_blur_cache /* buf name */, gray_blur_cache_to_gp_526, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_pw_math_gray_blur89__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_325, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_526, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_pw_math_gray_blur89_(gray_blur_to_gp_325, gray_blur_cache_to_gp_526);
  }
}
#include "hw_classes.h"

struct blurred_FIFO_buf16_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct blurred_FIFO_buf16_cache {
  // # of banks: 1
  blurred_FIFO_buf16_all_inputs_to_all_outputs_cache blurred_FIFO_buf16_all_inputs_to_all_outputs;
};



inline void blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2_write(hw_uint<32> & blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int blurred_ld0, int blurred_ld1, int dynamic_address) {
  blurred_FIFO_buf16.blurred_FIFO_buf16_all_inputs_to_all_outputs.write(blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2, blurred_ld0 - 0, blurred_ld1 - 0);
}

inline hw_uint<32>  blurred_FIFO_buf16_diff_6_select(blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int x, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_FIFO_buf16_diff_6 read pattern: { diff[root = 0, x, y] -> blurred_FIFO_buf16[x, y] : 0 <= x <= 63 and 0 <= y <= 63 }
  auto value_blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2 = blurred_FIFO_buf16.blurred_FIFO_buf16_all_inputs_to_all_outputs.read(x - 0, y - 0);
  return value_blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2;
  return 0;
}

// # of bundles = 2
// diff_read
//	blurred_FIFO_buf16_diff_6
inline hw_uint<32> blurred_FIFO_buf16_diff_read_bundle_read(blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int x, int y, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_FIFO_buf16_diff_6

	hw_uint<32> result;
	hw_uint<32>  blurred_FIFO_buf16_diff_6_res = blurred_FIFO_buf16_diff_6_select(blurred_FIFO_buf16, root, x, y, dynamic_address);
	set_at<0, 32>(result, blurred_FIFO_buf16_diff_6_res);
	return result;
}

// load_to_blurred_FIFO_buf162_write
//	blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2
inline void blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_write_bundle_write(hw_uint<32>& load_to_blurred_FIFO_buf162_write, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int blurred_ld0, int blurred_ld1, int dynamic_address) {
	hw_uint<32>  blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2_res = load_to_blurred_FIFO_buf162_write.extract<0, 31>();
	blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2_write(blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_2_res, blurred_FIFO_buf16, root, blurred_ld0, blurred_ld1, dynamic_address);
}

#include "hw_classes.h"

struct gray_diff_FIFO_buf21_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_diff_FIFO_buf21_cache {
  // # of banks: 1
  gray_diff_FIFO_buf21_all_inputs_to_all_outputs_cache gray_diff_FIFO_buf21_all_inputs_to_all_outputs;
};



inline void gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0_write(hw_uint<32> & gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0, gray_diff_FIFO_buf21_cache& gray_diff_FIFO_buf21, int root, int gray_diff_ld4, int gray_diff_ld3, int dynamic_address) {
  gray_diff_FIFO_buf21.gray_diff_FIFO_buf21_all_inputs_to_all_outputs.write(gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0, gray_diff_ld3 - 0, gray_diff_ld4 - 0);
}

inline hw_uint<32>  gray_diff_FIFO_buf21_diff_5_select(gray_diff_FIFO_buf21_cache& gray_diff_FIFO_buf21, int root, int x, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_diff_FIFO_buf21_diff_5 read pattern: { diff[root = 0, x, y] -> gray_diff_FIFO_buf21[x, y] : 0 <= x <= 63 and 0 <= y <= 63 }
  auto value_gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0 = gray_diff_FIFO_buf21.gray_diff_FIFO_buf21_all_inputs_to_all_outputs.read(x - 0, y - 0);
  return value_gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0;
  return 0;
}

// # of bundles = 2
// diff_read
//	gray_diff_FIFO_buf21_diff_5
inline hw_uint<32> gray_diff_FIFO_buf21_diff_read_bundle_read(gray_diff_FIFO_buf21_cache& gray_diff_FIFO_buf21, int root, int x, int y, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_diff_FIFO_buf21_diff_5

	hw_uint<32> result;
	hw_uint<32>  gray_diff_FIFO_buf21_diff_5_res = gray_diff_FIFO_buf21_diff_5_select(gray_diff_FIFO_buf21, root, x, y, dynamic_address);
	set_at<0, 32>(result, gray_diff_FIFO_buf21_diff_5_res);
	return result;
}

// load_to_gray_diff_FIFO_buf215_write
//	gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0
inline void gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_write_bundle_write(hw_uint<32>& load_to_gray_diff_FIFO_buf215_write, gray_diff_FIFO_buf21_cache& gray_diff_FIFO_buf21, int root, int gray_diff_ld4, int gray_diff_ld3, int dynamic_address) {
	hw_uint<32>  gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0_res = load_to_gray_diff_FIFO_buf215_write.extract<0, 31>();
	gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0_write(gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_0_res, gray_diff_FIFO_buf21, root, gray_diff_ld4, gray_diff_ld3, dynamic_address);
}

// Total re-use buffer capacity: 262144 bits


// Operation logic
inline void diff(gray_diff_FIFO_buf21_cache& gray_diff_FIFO_buf21, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int x, int y) {
  // Dynamic address computation

	// Consume: gray_diff_FIFO_buf21
	auto gray_diff_FIFO_buf21_x_p_0_c___y_p_0_value = gray_diff_FIFO_buf21_diff_read_bundle_read(gray_diff_FIFO_buf21/* source_delay */, root, x, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: blurred_FIFO_buf16
	auto blurred_FIFO_buf16_x_p_0_c___y_p_0_value = blurred_FIFO_buf16_diff_read_bundle_read(blurred_FIFO_buf16/* source_delay */, root, x, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff(gray_diff_FIFO_buf21_x_p_0_c___y_p_0_value, blurred_FIFO_buf16_x_p_0_c___y_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurred_FIFO_buf162(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_422, blurred_FIFO_buf16_cache& blurred_FIFO_buf16, int root, int blurred_ld0, int blurred_ld1) {
  // Dynamic address computation

	// Consume: blurred_to_gp_422
	auto blurred_to_gp_422_blurred_ld0_c__blurred_ld1_value = blurred_to_gp_422.read();
	// Produce: blurred_FIFO_buf16
	blurred_FIFO_buf16_load_to_blurred_FIFO_buf162_write_bundle_write(/* arg names */blurred_to_gp_422_blurred_ld0_c__blurred_ld1_value, blurred_FIFO_buf16, root, blurred_ld0, blurred_ld1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_diff_FIFO_buf215(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_diff_to_gp_427, gray_diff_FIFO_buf21_cache& gray_diff_FIFO_buf21, int root, int gray_diff_ld4, int gray_diff_ld3) {
  // Dynamic address computation

	// Consume: gray_diff_to_gp_427
	auto gray_diff_to_gp_427_gray_diff_ld3_c__gray_diff_ld4_value = gray_diff_to_gp_427.read();
	// Produce: gray_diff_FIFO_buf21
	gray_diff_FIFO_buf21_load_to_gray_diff_FIFO_buf215_write_bundle_write(/* arg names */gray_diff_to_gp_427_gray_diff_ld3_c__gray_diff_ld4_value, gray_diff_FIFO_buf21, root, gray_diff_ld4, gray_diff_ld3, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_x_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_422, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_427, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_x__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_FIFO_buf16_cache blurred_FIFO_buf16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_diff_FIFO_buf21_cache gray_diff_FIFO_buf21;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff[root = 0, x, y] -> [63 + x, 1, y, 1] : 0 <= x <= 63 and 0 <= y <= 63; load_to_gray_diff_FIFO_buf215[root = 0, gray_diff_ld4, gray_diff_ld3] -> [gray_diff_ld4, 1, 63 + gray_diff_ld3, 0] : 0 <= gray_diff_ld4 <= 63 and 0 <= gray_diff_ld3 <= 63; load_to_blurred_FIFO_buf162[root = 0, blurred_ld0, blurred_ld1] -> [blurred_ld0, 0, blurred_ld1, 0] : 0 <= blurred_ld0 <= 63 and 0 <= blurred_ld1 <= 63 }
//   { diff[root = 0, x, y] -> [63 + x, 1, y, 1] : 0 <= x <= 63 and 0 <= y <= 63 }
// Condition for diff(((-1 + i3 == 0) && (-1 + i1 == 0) && (-63 + i0 >= 0) && (126 - i0 >= 0) && (i2 >= 0) && (63 - i2 >= 0)))
//   { load_to_gray_diff_FIFO_buf215[root = 0, gray_diff_ld4, gray_diff_ld3] -> [gray_diff_ld4, 1, 63 + gray_diff_ld3, 0] : 0 <= gray_diff_ld4 <= 63 and 0 <= gray_diff_ld3 <= 63 }
// Condition for load_to_gray_diff_FIFO_buf215(((i3 == 0) && (-1 + i1 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (-63 + i2 >= 0) && (126 - i2 >= 0)))
//   { load_to_blurred_FIFO_buf162[root = 0, blurred_ld0, blurred_ld1] -> [blurred_ld0, 0, blurred_ld1, 0] : 0 <= blurred_ld0 <= 63 and 0 <= blurred_ld1 <= 63 }
// Condition for load_to_blurred_FIFO_buf162(((i3 == 0) && (i1 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i2 >= 0) && (63 - i2 >= 0)))

  /*
for (int c0 = 0; c0 <= 126; c0 += 1) {
  if (c0 <= 63)
    for (int c2 = 0; c2 <= 63; c2 += 1)
      load_to_blurred_FIFO_buf162(0, c0, c2);
  if (c0 >= 63) {
    for (int c2 = 0; c2 <= 63; c2 += 1) {
      if (c0 == 63 && c2 == 63)
        load_to_gray_diff_FIFO_buf215(0, 63, 0);
      diff(0, c0 - 63, c2);
    }
    if (c0 == 63)
      for (int c2 = 64; c2 <= 126; c2 += 1)
        load_to_gray_diff_FIFO_buf215(0, 63, c2 - 63);
  } else {
    for (int c2 = 63; c2 <= 126; c2 += 1)
      load_to_gray_diff_FIFO_buf215(0, c0, c2 - 63);
  }
}

  */
	for (int c0 = 0; c0 <= 126; c0 += 1) {
	  if (c0 <= 63)
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      load_to_blurred_FIFO_buf162(blurred_to_gp_422 /* buf name */, blurred_FIFO_buf16, 0, c0, c2);
	  if (c0 >= 63) {
	    for (int c2 = 0; c2 <= 63; c2 += 1) {
	      if (c0 == 63 && c2 == 63)
	        load_to_gray_diff_FIFO_buf215(gray_diff_to_gp_427 /* buf name */, gray_diff_FIFO_buf21, 0, 63, 0);
	      diff(gray_diff_FIFO_buf21 /* buf name */, blurred_FIFO_buf16 /* buf name */, out, 0, c0 - 63, c2);
	    }
	    if (c0 == 63)
	      for (int c2 = 64; c2 <= 126; c2 += 1)
	        load_to_gray_diff_FIFO_buf215(gray_diff_to_gp_427 /* buf name */, gray_diff_FIFO_buf21, 0, 63, c2 - 63);
	  } else {
	    for (int c2 = 63; c2 <= 126; c2 += 1)
	      load_to_gray_diff_FIFO_buf215(gray_diff_to_gp_427 /* buf name */, gray_diff_FIFO_buf21, 0, c0, c2 - 63);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_x__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_422, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_427, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_x_(blurred_to_gp_422, gray_diff_to_gp_427, out);
  }
}
#include "hw_classes.h"

struct blurred_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
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

inline hw_uint<32>  blurred_store_to_blurred_to_gp_4225_1_select(blurred_cache& blurred, int root, int blurred_ld3, int blurred_ld4, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_store_to_blurred_to_gp_4225_1 read pattern: { store_to_blurred_to_gp_4225[root = 0, blurred_ld3, blurred_ld4] -> blurred[blurred_ld3, blurred_ld4] : 0 <= blurred_ld3 <= 63 and 0 <= blurred_ld4 <= 63 }
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

// store_to_blurred_to_gp_4225_read
//	blurred_store_to_blurred_to_gp_4225_1
inline hw_uint<32> blurred_store_to_blurred_to_gp_4225_read_bundle_read(blurred_cache& blurred, int root, int blurred_ld3, int blurred_ld4, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_store_to_blurred_to_gp_4225_1

	hw_uint<32> result;
	hw_uint<32>  blurred_store_to_blurred_to_gp_4225_1_res = blurred_store_to_blurred_to_gp_4225_1_select(blurred, root, blurred_ld3, blurred_ld4, dynamic_address);
	set_at<0, 32>(result, blurred_store_to_blurred_to_gp_4225_1_res);
	return result;
}

#include "hw_classes.h"

struct gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_blur_cache_FIFO_buf20_cache {
  // # of banks: 1
  gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs_cache gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs;
};



inline void gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2_write(hw_uint<32> & gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2, gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int gray_blur_cache_ld1, int gray_blur_cache_ld0, int dynamic_address) {
  gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.write(gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2, gray_blur_cache_ld0 - 0, gray_blur_cache_ld1 - 0);
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_10_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_10 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[1 + xb, 2 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(1 + xb - 0, 2 + yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_11_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_11 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[2 + xb, yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(2 + xb - 0, yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_12_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_12 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[2 + xb, 1 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(2 + xb - 0, 1 + yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_13_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_13 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[2 + xb, 2 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(2 + xb - 0, 2 + yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_5_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_5 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[xb, yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(xb - 0, yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_6_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_6 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[xb, 1 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(xb - 0, 1 + yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_7_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_7 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[xb, 2 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(xb - 0, 2 + yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_8_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_8 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[1 + xb, yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(1 + xb - 0, yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_9_select(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf20_blur_9 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf20[1 + xb, 1 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2 = gray_blur_cache_FIFO_buf20.gray_blur_cache_FIFO_buf20_all_inputs_to_all_outputs.read(1 + xb - 0, 1 + yb - 0);
  return value_gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2;
  return 0;
}

// # of bundles = 2
// blur_read
//	gray_blur_cache_FIFO_buf20_blur_5
//	gray_blur_cache_FIFO_buf20_blur_6
//	gray_blur_cache_FIFO_buf20_blur_7
//	gray_blur_cache_FIFO_buf20_blur_8
//	gray_blur_cache_FIFO_buf20_blur_9
//	gray_blur_cache_FIFO_buf20_blur_10
//	gray_blur_cache_FIFO_buf20_blur_11
//	gray_blur_cache_FIFO_buf20_blur_12
//	gray_blur_cache_FIFO_buf20_blur_13
inline hw_uint<288> gray_blur_cache_FIFO_buf20_blur_read_bundle_read(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int xb, int yb, int dynamic_address) {
  // # of ports in bundle: 9
    // gray_blur_cache_FIFO_buf20_blur_5
    // gray_blur_cache_FIFO_buf20_blur_6
    // gray_blur_cache_FIFO_buf20_blur_7
    // gray_blur_cache_FIFO_buf20_blur_8
    // gray_blur_cache_FIFO_buf20_blur_9
    // gray_blur_cache_FIFO_buf20_blur_10
    // gray_blur_cache_FIFO_buf20_blur_11
    // gray_blur_cache_FIFO_buf20_blur_12
    // gray_blur_cache_FIFO_buf20_blur_13

	hw_uint<288> result;
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_5_res = gray_blur_cache_FIFO_buf20_blur_5_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<0, 288>(result, gray_blur_cache_FIFO_buf20_blur_5_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_6_res = gray_blur_cache_FIFO_buf20_blur_6_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<32, 288>(result, gray_blur_cache_FIFO_buf20_blur_6_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_7_res = gray_blur_cache_FIFO_buf20_blur_7_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<64, 288>(result, gray_blur_cache_FIFO_buf20_blur_7_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_8_res = gray_blur_cache_FIFO_buf20_blur_8_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<96, 288>(result, gray_blur_cache_FIFO_buf20_blur_8_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_9_res = gray_blur_cache_FIFO_buf20_blur_9_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<128, 288>(result, gray_blur_cache_FIFO_buf20_blur_9_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_10_res = gray_blur_cache_FIFO_buf20_blur_10_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<160, 288>(result, gray_blur_cache_FIFO_buf20_blur_10_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_11_res = gray_blur_cache_FIFO_buf20_blur_11_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<192, 288>(result, gray_blur_cache_FIFO_buf20_blur_11_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_12_res = gray_blur_cache_FIFO_buf20_blur_12_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<224, 288>(result, gray_blur_cache_FIFO_buf20_blur_12_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf20_blur_13_res = gray_blur_cache_FIFO_buf20_blur_13_select(gray_blur_cache_FIFO_buf20, root, xb, yb, dynamic_address);
	set_at<256, 288>(result, gray_blur_cache_FIFO_buf20_blur_13_res);
	return result;
}

// load_to_gray_blur_cache_FIFO_buf202_write
//	gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2
inline void gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_write_bundle_write(hw_uint<32>& load_to_gray_blur_cache_FIFO_buf202_write, gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int gray_blur_cache_ld1, int gray_blur_cache_ld0, int dynamic_address) {
	hw_uint<32>  gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2_res = load_to_gray_blur_cache_FIFO_buf202_write.extract<0, 31>();
	gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2_write(gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_2_res, gray_blur_cache_FIFO_buf20, root, gray_blur_cache_ld1, gray_blur_cache_ld0, dynamic_address);
}

// Total re-use buffer capacity: 270464 bits


// Operation logic
inline void blur(gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, blurred_cache& blurred, int root, int xb, int yb) {
  // Dynamic address computation

	// Consume: gray_blur_cache_FIFO_buf20
	auto gray_blur_cache_FIFO_buf20_xb__p__0_p_0_c___yb__p__0_p_0_value = gray_blur_cache_FIFO_buf20_blur_read_bundle_read(gray_blur_cache_FIFO_buf20/* source_delay */, root, xb, yb, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(gray_blur_cache_FIFO_buf20_xb__p__0_p_0_c___yb__p__0_p_0_value);
	// Produce: blurred
	blurred_blur_write_bundle_write(/* arg names */compute_result, blurred, root, xb, yb, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_blur_cache_FIFO_buf202(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_cache_to_gp_526, gray_blur_cache_FIFO_buf20_cache& gray_blur_cache_FIFO_buf20, int root, int gray_blur_cache_ld1, int gray_blur_cache_ld0) {
  // Dynamic address computation

	// Consume: gray_blur_cache_to_gp_526
	auto gray_blur_cache_to_gp_526_gray_blur_cache_ld0_c__gray_blur_cache_ld1_value = gray_blur_cache_to_gp_526.read();
	// Produce: gray_blur_cache_FIFO_buf20
	gray_blur_cache_FIFO_buf20_load_to_gray_blur_cache_FIFO_buf202_write_bundle_write(/* arg names */gray_blur_cache_to_gp_526_gray_blur_cache_ld0_c__gray_blur_cache_ld1_value, gray_blur_cache_FIFO_buf20, root, gray_blur_cache_ld1, gray_blur_cache_ld0, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_to_blurred_to_gp_4225(blurred_cache& blurred, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_422, int root, int blurred_ld3, int blurred_ld4) {
  // Dynamic address computation

	// Consume: blurred
	auto blurred_blurred_ld3_c__blurred_ld4_value = blurred_store_to_blurred_to_gp_4225_read_bundle_read(blurred/* source_delay */, root, blurred_ld3, blurred_ld4, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurred_to_gp_422
	blurred_to_gp_422.write(blurred_blurred_ld3_c__blurred_ld4_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_xb_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_526, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_422) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_xb__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_cache blurred;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache_FIFO_buf20_cache gray_blur_cache_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { store_to_blurred_to_gp_4225[root = 0, blurred_ld3, blurred_ld4] -> [65 + blurred_ld3, blurred_ld4, 2] : 0 <= blurred_ld3 <= 63 and 0 <= blurred_ld4 <= 63; blur[root = 0, xb, yb] -> [65 + xb, yb, 1] : 0 <= xb <= 63 and 0 <= yb <= 63; load_to_gray_blur_cache_FIFO_buf202[root = 0, gray_blur_cache_ld1, gray_blur_cache_ld0] -> [gray_blur_cache_ld1, 61 + gray_blur_cache_ld0, 0] : 0 <= gray_blur_cache_ld1 <= 65 and 0 <= gray_blur_cache_ld0 <= 65 }
//   { store_to_blurred_to_gp_4225[root = 0, blurred_ld3, blurred_ld4] -> [65 + blurred_ld3, blurred_ld4, 2] : 0 <= blurred_ld3 <= 63 and 0 <= blurred_ld4 <= 63 }
// Condition for store_to_blurred_to_gp_4225(((-2 + i2 == 0) && (-65 + i0 >= 0) && (128 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { blur[root = 0, xb, yb] -> [65 + xb, yb, 1] : 0 <= xb <= 63 and 0 <= yb <= 63 }
// Condition for blur(((-1 + i2 == 0) && (-65 + i0 >= 0) && (128 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { load_to_gray_blur_cache_FIFO_buf202[root = 0, gray_blur_cache_ld1, gray_blur_cache_ld0] -> [gray_blur_cache_ld1, 61 + gray_blur_cache_ld0, 0] : 0 <= gray_blur_cache_ld1 <= 65 and 0 <= gray_blur_cache_ld0 <= 65 }
// Condition for load_to_gray_blur_cache_FIFO_buf202(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (-61 + i1 >= 0) && (126 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 128; c0 += 1)
  for (int c1 = 0; c1 <= 126; c1 += 1) {
    if (c0 <= 65 && c1 >= 61)
      load_to_gray_blur_cache_FIFO_buf202(0, c0, c1 - 61);
    if (c0 >= 65 && c1 <= 63) {
      blur(0, c0 - 65, c1);
      store_to_blurred_to_gp_4225(0, c0 - 65, c1);
    }
  }

  */
	for (int c0 = 0; c0 <= 128; c0 += 1)
	  for (int c1 = 0; c1 <= 126; c1 += 1) {
	    if (c0 <= 65 && c1 >= 61)
	      load_to_gray_blur_cache_FIFO_buf202(gray_blur_cache_to_gp_526 /* buf name */, gray_blur_cache_FIFO_buf20, 0, c0, c1 - 61);
	    if (c0 >= 65 && c1 <= 63) {
	      blur(gray_blur_cache_FIFO_buf20 /* buf name */, blurred, 0, c0 - 65, c1);
	      store_to_blurred_to_gp_4225(blurred /* buf name */, blurred_to_gp_422, 0, c0 - 65, c1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_xb__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_526, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_422, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_xb_(gray_blur_cache_to_gp_526, blurred_to_gp_422);
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

  HWStream<hw_uint<32> > gray_to_gp_123;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_123.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_to_gp_224;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_224.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_diff_to_gp_427;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_diff_to_gp_427.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_blur_to_gp_325;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_blur_to_gp_325.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_blur_cache_to_gp_526;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_blur_cache_to_gp_526.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > blurred_to_gp_422;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurred_to_gp_422.values depth=1
#endif //__VIVADO_SYNTH__


  Extracted_oc_load_in01_(in, gray_to_gp_123, gray_to_gp_224);
  Extracted_pw_math_gray1213_(gray_to_gp_123, gray_diff_to_gp_427);
  Extracted_pw_math_gray45_(gray_to_gp_224, gray_blur_to_gp_325);
  Extracted_pw_math_gray_blur89_(gray_blur_to_gp_325, gray_blur_cache_to_gp_526);
  Extracted_xb_(gray_blur_cache_to_gp_526, blurred_to_gp_422);
  Extracted_x_(blurred_to_gp_422, gray_diff_to_gp_427, out);

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
  // { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
const int oc_load_in03_read_pipe0_num_transfers = 4356;
  // { diff[root = 0, x, y] -> out[x, y] : 0 <= x <= 63 and 0 <= y <= 63 }
const int diff_write_pipe0_num_transfers = 4096;


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

