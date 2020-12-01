#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h_merged_compute_units.h
#include "clockwork_standard_compute_units.h_merged_compute_units.h"

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



inline void gray_oc_load_in03_0_write(hw_uint<32> & gray_oc_load_in03_0, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
  gray.gray_all_inputs_to_all_outputs.write(gray_oc_load_in03_0, oc_load_in02 - 0, oc_load_in01 - 0);
}

inline hw_uint<32>  gray_load_to_gray_to_gp_12023_5_select(gray_cache& gray, int root, int gray_ld22, int gray_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_12023_5 read pattern: { load_to_gray_to_gp_12023[root = 0, gray_ld22, gray_ld21] -> gray[gray_ld21, gray_ld22] : 0 <= gray_ld22 <= 63 and 0 <= gray_ld21 <= 63 }
  auto value_gray_oc_load_in03_0 = gray.gray_all_inputs_to_all_outputs.read(gray_ld21 - 0, gray_ld22 - 0);
  return value_gray_oc_load_in03_0;
  return 0;
}

inline hw_uint<32>  gray_load_to_gray_to_gp_22427_3_select(gray_cache& gray, int root, int gray_ld26, int gray_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_22427_3 read pattern: { load_to_gray_to_gp_22427[root = 0, gray_ld26, gray_ld25] -> gray[gray_ld25, gray_ld26] : 0 <= gray_ld26 <= 65 and 0 <= gray_ld25 <= 65 }
  auto value_gray_oc_load_in03_0 = gray.gray_all_inputs_to_all_outputs.read(gray_ld25 - 0, gray_ld26 - 0);
  return value_gray_oc_load_in03_0;
  return 0;
}

// # of bundles = 3
// load_to_gray_to_gp_12023_read
//	gray_load_to_gray_to_gp_12023_5
inline hw_uint<32> gray_load_to_gray_to_gp_12023_read_bundle_read(gray_cache& gray, int root, int gray_ld22, int gray_ld21, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_12023_5

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_12023_5_res = gray_load_to_gray_to_gp_12023_5_select(gray, root, gray_ld22, gray_ld21, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_12023_5_res);
	return result;
}

// load_to_gray_to_gp_22427_read
//	gray_load_to_gray_to_gp_22427_3
inline hw_uint<32> gray_load_to_gray_to_gp_22427_read_bundle_read(gray_cache& gray, int root, int gray_ld26, int gray_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_22427_3

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_22427_3_res = gray_load_to_gray_to_gp_22427_3_select(gray, root, gray_ld26, gray_ld25, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_22427_3_res);
	return result;
}

// oc_load_in03_write
//	gray_oc_load_in03_0
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_0_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_0_write(gray_oc_load_in03_0_res, gray, root, oc_load_in01, oc_load_in02, dynamic_address);
}

// Total re-use buffer capacity: 139392 bits


// Operation logic
inline void load_to_gray_to_gp_22427(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_224, int root, int gray_ld26, int gray_ld25) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld25_c__gray_ld26_value = gray_load_to_gray_to_gp_22427_read_bundle_read(gray/* source_delay */, root, gray_ld26, gray_ld25, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_224
	gray_to_gp_224.write(gray_gray_ld25_c__gray_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_to_gp_12023(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_120, int root, int gray_ld22, int gray_ld21) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld21_c__gray_ld22_value = gray_load_to_gray_to_gp_12023_read_bundle_read(gray/* source_delay */, root, gray_ld22, gray_ld21, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_120
	gray_to_gp_120.write(gray_gray_ld21_c__gray_ld22_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void oc_load_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02) {
  // Dynamic address computation

	// Consume: in
	auto in_oc_load_in02_p_0_c___oc_load_in01_p_0_value = in.read();
	// Produce: gray
	gray_oc_load_in03_write_bundle_write(/* arg names */in_oc_load_in02_p_0_c___oc_load_in01_p_0_value, gray, root, oc_load_in01, oc_load_in02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_ld22_gray_ld26_oc_load_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_120, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_ld22_gray_ld26_oc_load_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_cache gray;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_to_gp_12023[root = 0, gray_ld22, gray_ld21] -> [gray_ld22, gray_ld21, 2] : 0 <= gray_ld22 <= 63 and 0 <= gray_ld21 <= 63; load_to_gray_to_gp_22427[root = 0, gray_ld26, gray_ld25] -> [gray_ld26, gray_ld25, 1] : 0 <= gray_ld26 <= 65 and 0 <= gray_ld25 <= 65; oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [oc_load_in01, oc_load_in02, 0] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
//   { load_to_gray_to_gp_12023[root = 0, gray_ld22, gray_ld21] -> [gray_ld22, gray_ld21, 2] : 0 <= gray_ld22 <= 63 and 0 <= gray_ld21 <= 63 }
// Condition for load_to_gray_to_gp_12023(((-2 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { load_to_gray_to_gp_22427[root = 0, gray_ld26, gray_ld25] -> [gray_ld26, gray_ld25, 1] : 0 <= gray_ld26 <= 65 and 0 <= gray_ld25 <= 65 }
// Condition for load_to_gray_to_gp_22427(((-1 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> [oc_load_in01, oc_load_in02, 0] : 0 <= oc_load_in01 <= 65 and 0 <= oc_load_in02 <= 65 }
// Condition for oc_load_in03(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 65; c0 += 1)
  for (int c1 = 0; c1 <= 65; c1 += 1) {
    oc_load_in03(0, c0, c1);
    load_to_gray_to_gp_22427(0, c0, c1);
    if (c0 <= 63 && c1 <= 63)
      load_to_gray_to_gp_12023(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 65; c0 += 1)
	  for (int c1 = 0; c1 <= 65; c1 += 1) {
	    oc_load_in03(in /* buf name */, gray, 0, c0, c1);
	    load_to_gray_to_gp_22427(gray /* buf name */, gray_to_gp_224, 0, c0, c1);
	    if (c0 <= 63 && c1 <= 63)
	      load_to_gray_to_gp_12023(gray /* buf name */, gray_to_gp_120, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_gray_ld22_gray_ld26_oc_load_in01__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_120, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_gray_ld22_gray_ld26_oc_load_in01_(in, gray_to_gp_120, gray_to_gp_224);
  }
}
#include "hw_classes.h"

struct gray_FIFO_buf44_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf44_cache {
  // # of banks: 1
  gray_FIFO_buf44_all_inputs_to_all_outputs_cache gray_FIFO_buf44_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4_write(hw_uint<32> & gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4, gray_FIFO_buf44_cache& gray_FIFO_buf44, int root, int gray_to_gp_120_ld46, int gray_to_gp_120_ld45, int dynamic_address) {
  gray_FIFO_buf44.gray_FIFO_buf44_all_inputs_to_all_outputs.write(gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4, gray_to_gp_120_ld45 - 0, gray_to_gp_120_ld46 - 0);
}

inline hw_uint<32>  gray_FIFO_buf44_pw_math_gray1215_1_select(gray_FIFO_buf44_cache& gray_FIFO_buf44, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf44_pw_math_gray1215_1 read pattern: { pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> gray_FIFO_buf44[pw_math_gray1214, pw_math_gray1213] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63 }
  auto value_gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4 = gray_FIFO_buf44.gray_FIFO_buf44_all_inputs_to_all_outputs.read(pw_math_gray1214 - 0, pw_math_gray1213 - 0);
  return value_gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf4447_write
//	gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4
inline void gray_FIFO_buf44_load_to_gray_FIFO_buf4447_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf4447_write, gray_FIFO_buf44_cache& gray_FIFO_buf44, int root, int gray_to_gp_120_ld46, int gray_to_gp_120_ld45, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4_res = load_to_gray_FIFO_buf4447_write.extract<0, 31>();
	gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4_write(gray_FIFO_buf44_load_to_gray_FIFO_buf4447_4_res, gray_FIFO_buf44, root, gray_to_gp_120_ld46, gray_to_gp_120_ld45, dynamic_address);
}

// pw_math_gray1215_read
//	gray_FIFO_buf44_pw_math_gray1215_1
inline hw_uint<32> gray_FIFO_buf44_pw_math_gray1215_read_bundle_read(gray_FIFO_buf44_cache& gray_FIFO_buf44, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf44_pw_math_gray1215_1

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf44_pw_math_gray1215_1_res = gray_FIFO_buf44_pw_math_gray1215_1_select(gray_FIFO_buf44, root, pw_math_gray1213, pw_math_gray1214, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf44_pw_math_gray1215_1_res);
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



inline void gray_diff_pw_math_gray1215_0_write(hw_uint<32> & gray_diff_pw_math_gray1215_0, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
  gray_diff.gray_diff_all_inputs_to_all_outputs.write(gray_diff_pw_math_gray1215_0, pw_math_gray1214 - 0, pw_math_gray1213 - 0);
}

inline hw_uint<32>  gray_diff_load_to_gray_diff_to_gp_43639_3_select(gray_diff_cache& gray_diff, int root, int gray_diff_ld38, int gray_diff_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_diff_load_to_gray_diff_to_gp_43639_3 read pattern: { load_to_gray_diff_to_gp_43639[root = 0, gray_diff_ld38, gray_diff_ld37] -> gray_diff[gray_diff_ld37, gray_diff_ld38] : 0 <= gray_diff_ld38 <= 63 and 0 <= gray_diff_ld37 <= 63 }
  auto value_gray_diff_pw_math_gray1215_0 = gray_diff.gray_diff_all_inputs_to_all_outputs.read(gray_diff_ld37 - 0, gray_diff_ld38 - 0);
  return value_gray_diff_pw_math_gray1215_0;
  return 0;
}

// # of bundles = 2
// load_to_gray_diff_to_gp_43639_read
//	gray_diff_load_to_gray_diff_to_gp_43639_3
inline hw_uint<32> gray_diff_load_to_gray_diff_to_gp_43639_read_bundle_read(gray_diff_cache& gray_diff, int root, int gray_diff_ld38, int gray_diff_ld37, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_diff_load_to_gray_diff_to_gp_43639_3

	hw_uint<32> result;
	hw_uint<32>  gray_diff_load_to_gray_diff_to_gp_43639_3_res = gray_diff_load_to_gray_diff_to_gp_43639_3_select(gray_diff, root, gray_diff_ld38, gray_diff_ld37, dynamic_address);
	set_at<0, 32>(result, gray_diff_load_to_gray_diff_to_gp_43639_3_res);
	return result;
}

// pw_math_gray1215_write
//	gray_diff_pw_math_gray1215_0
inline void gray_diff_pw_math_gray1215_write_bundle_write(hw_uint<32>& pw_math_gray1215_write, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214, int dynamic_address) {
	hw_uint<32>  gray_diff_pw_math_gray1215_0_res = pw_math_gray1215_write.extract<0, 31>();
	gray_diff_pw_math_gray1215_0_write(gray_diff_pw_math_gray1215_0_res, gray_diff, root, pw_math_gray1213, pw_math_gray1214, dynamic_address);
}

// Total re-use buffer capacity: 262144 bits


// Operation logic
inline void load_to_gray_FIFO_buf4447(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_120, gray_FIFO_buf44_cache& gray_FIFO_buf44, int root, int gray_to_gp_120_ld46, int gray_to_gp_120_ld45) {
  // Dynamic address computation

	// Consume: gray_to_gp_120
	auto gray_to_gp_120_gray_to_gp_120_ld45_c__gray_to_gp_120_ld46_value = gray_to_gp_120.read();
	// Produce: gray_FIFO_buf44
	gray_FIFO_buf44_load_to_gray_FIFO_buf4447_write_bundle_write(/* arg names */gray_to_gp_120_gray_to_gp_120_ld45_c__gray_to_gp_120_ld46_value, gray_FIFO_buf44, root, gray_to_gp_120_ld46, gray_to_gp_120_ld45, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray1215(gray_FIFO_buf44_cache& gray_FIFO_buf44, gray_diff_cache& gray_diff, int root, int pw_math_gray1213, int pw_math_gray1214) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf44
	auto gray_FIFO_buf44_pw_math_gray1214_p_0_c___pw_math_gray1213_p_0_value = gray_FIFO_buf44_pw_math_gray1215_read_bundle_read(gray_FIFO_buf44/* source_delay */, root, pw_math_gray1213, pw_math_gray1214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf44_pw_math_gray1214_p_0_c___pw_math_gray1213_p_0_value);
	// Produce: gray_diff
	gray_diff_pw_math_gray1215_write_bundle_write(/* arg names */compute_result, gray_diff, root, pw_math_gray1213, pw_math_gray1214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_diff_to_gp_43639(gray_diff_cache& gray_diff, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_diff_to_gp_436, int root, int gray_diff_ld38, int gray_diff_ld37) {
  // Dynamic address computation

	// Consume: gray_diff
	auto gray_diff_gray_diff_ld37_c__gray_diff_ld38_value = gray_diff_load_to_gray_diff_to_gp_43639_read_bundle_read(gray_diff/* source_delay */, root, gray_diff_ld38, gray_diff_ld37, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_diff_to_gp_436
	gray_diff_to_gp_436.write(gray_diff_gray_diff_ld37_c__gray_diff_ld38_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_diff_ld38_gray_to_gp_120_ld46_pw_math_gray1213_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_120, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_436) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_diff_ld38_gray_to_gp_120_ld46_pw_math_gray1213__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf44_cache gray_FIFO_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_diff_cache gray_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf4447[root = 0, gray_to_gp_120_ld46, gray_to_gp_120_ld45] -> [gray_to_gp_120_ld46, gray_to_gp_120_ld45, 0] : 0 <= gray_to_gp_120_ld46 <= 63 and 0 <= gray_to_gp_120_ld45 <= 63; pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> [pw_math_gray1213, pw_math_gray1214, 1] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63; load_to_gray_diff_to_gp_43639[root = 0, gray_diff_ld38, gray_diff_ld37] -> [gray_diff_ld38, gray_diff_ld37, 2] : 0 <= gray_diff_ld38 <= 63 and 0 <= gray_diff_ld37 <= 63 }
//   { load_to_gray_FIFO_buf4447[root = 0, gray_to_gp_120_ld46, gray_to_gp_120_ld45] -> [gray_to_gp_120_ld46, gray_to_gp_120_ld45, 0] : 0 <= gray_to_gp_120_ld46 <= 63 and 0 <= gray_to_gp_120_ld45 <= 63 }
// Condition for load_to_gray_FIFO_buf4447(((i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { pw_math_gray1215[root = 0, pw_math_gray1213, pw_math_gray1214] -> [pw_math_gray1213, pw_math_gray1214, 1] : 0 <= pw_math_gray1213 <= 63 and 0 <= pw_math_gray1214 <= 63 }
// Condition for pw_math_gray1215(((-1 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { load_to_gray_diff_to_gp_43639[root = 0, gray_diff_ld38, gray_diff_ld37] -> [gray_diff_ld38, gray_diff_ld37, 2] : 0 <= gray_diff_ld38 <= 63 and 0 <= gray_diff_ld37 <= 63 }
// Condition for load_to_gray_diff_to_gp_43639(((-2 + i2 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 63; c0 += 1)
  for (int c1 = 0; c1 <= 63; c1 += 1) {
    load_to_gray_FIFO_buf4447(0, c0, c1);
    pw_math_gray1215(0, c0, c1);
    load_to_gray_diff_to_gp_43639(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 63; c0 += 1)
	  for (int c1 = 0; c1 <= 63; c1 += 1) {
	    load_to_gray_FIFO_buf4447(gray_to_gp_120 /* buf name */, gray_FIFO_buf44, 0, c0, c1);
	    pw_math_gray1215(gray_FIFO_buf44 /* buf name */, gray_diff, 0, c0, c1);
	    load_to_gray_diff_to_gp_43639(gray_diff /* buf name */, gray_diff_to_gp_436, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_gray_diff_ld38_gray_to_gp_120_ld46_pw_math_gray1213__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_120, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_436, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_gray_diff_ld38_gray_to_gp_120_ld46_pw_math_gray1213_(gray_to_gp_120, gray_diff_to_gp_436);
  }
}
#include "hw_classes.h"

struct gray_FIFO_buf48_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf48_cache {
  // # of banks: 1
  gray_FIFO_buf48_all_inputs_to_all_outputs_cache gray_FIFO_buf48_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4_write(hw_uint<32> & gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4, gray_FIFO_buf48_cache& gray_FIFO_buf48, int root, int gray_to_gp_224_ld50, int gray_to_gp_224_ld49, int dynamic_address) {
  gray_FIFO_buf48.gray_FIFO_buf48_all_inputs_to_all_outputs.write(gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4, gray_to_gp_224_ld49 - 0, gray_to_gp_224_ld50 - 0);
}

inline hw_uint<32>  gray_FIFO_buf48_pw_math_gray47_1_select(gray_FIFO_buf48_cache& gray_FIFO_buf48, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf48_pw_math_gray47_1 read pattern: { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> gray_FIFO_buf48[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
  auto value_gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4 = gray_FIFO_buf48.gray_FIFO_buf48_all_inputs_to_all_outputs.read(pw_math_gray46 - 0, pw_math_gray45 - 0);
  return value_gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf4851_write
//	gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4
inline void gray_FIFO_buf48_load_to_gray_FIFO_buf4851_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf4851_write, gray_FIFO_buf48_cache& gray_FIFO_buf48, int root, int gray_to_gp_224_ld50, int gray_to_gp_224_ld49, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4_res = load_to_gray_FIFO_buf4851_write.extract<0, 31>();
	gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4_write(gray_FIFO_buf48_load_to_gray_FIFO_buf4851_4_res, gray_FIFO_buf48, root, gray_to_gp_224_ld50, gray_to_gp_224_ld49, dynamic_address);
}

// pw_math_gray47_read
//	gray_FIFO_buf48_pw_math_gray47_1
inline hw_uint<32> gray_FIFO_buf48_pw_math_gray47_read_bundle_read(gray_FIFO_buf48_cache& gray_FIFO_buf48, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf48_pw_math_gray47_1

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf48_pw_math_gray47_1_res = gray_FIFO_buf48_pw_math_gray47_1_select(gray_FIFO_buf48, root, pw_math_gray45, pw_math_gray46, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf48_pw_math_gray47_1_res);
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



inline void gray_blur_pw_math_gray47_0_write(hw_uint<32> & gray_blur_pw_math_gray47_0, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  gray_blur.gray_blur_all_inputs_to_all_outputs.write(gray_blur_pw_math_gray47_0, pw_math_gray46 - 0, pw_math_gray45 - 0);
}

inline hw_uint<32>  gray_blur_load_to_gray_blur_to_gp_32831_3_select(gray_blur_cache& gray_blur, int root, int gray_blur_ld30, int gray_blur_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_load_to_gray_blur_to_gp_32831_3 read pattern: { load_to_gray_blur_to_gp_32831[root = 0, gray_blur_ld30, gray_blur_ld29] -> gray_blur[gray_blur_ld29, gray_blur_ld30] : 0 <= gray_blur_ld30 <= 65 and 0 <= gray_blur_ld29 <= 65 }
  auto value_gray_blur_pw_math_gray47_0 = gray_blur.gray_blur_all_inputs_to_all_outputs.read(gray_blur_ld29 - 0, gray_blur_ld30 - 0);
  return value_gray_blur_pw_math_gray47_0;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_to_gp_32831_read
//	gray_blur_load_to_gray_blur_to_gp_32831_3
inline hw_uint<32> gray_blur_load_to_gray_blur_to_gp_32831_read_bundle_read(gray_blur_cache& gray_blur, int root, int gray_blur_ld30, int gray_blur_ld29, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_load_to_gray_blur_to_gp_32831_3

	hw_uint<32> result;
	hw_uint<32>  gray_blur_load_to_gray_blur_to_gp_32831_3_res = gray_blur_load_to_gray_blur_to_gp_32831_3_select(gray_blur, root, gray_blur_ld30, gray_blur_ld29, dynamic_address);
	set_at<0, 32>(result, gray_blur_load_to_gray_blur_to_gp_32831_3_res);
	return result;
}

// pw_math_gray47_write
//	gray_blur_pw_math_gray47_0
inline void gray_blur_pw_math_gray47_write_bundle_write(hw_uint<32>& pw_math_gray47_write, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
	hw_uint<32>  gray_blur_pw_math_gray47_0_res = pw_math_gray47_write.extract<0, 31>();
	gray_blur_pw_math_gray47_0_write(gray_blur_pw_math_gray47_0_res, gray_blur, root, pw_math_gray45, pw_math_gray46, dynamic_address);
}

// Total re-use buffer capacity: 278784 bits


// Operation logic
inline void load_to_gray_blur_to_gp_32831(gray_blur_cache& gray_blur, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_to_gp_328, int root, int gray_blur_ld30, int gray_blur_ld29) {
  // Dynamic address computation

	// Consume: gray_blur
	auto gray_blur_gray_blur_ld29_c__gray_blur_ld30_value = gray_blur_load_to_gray_blur_to_gp_32831_read_bundle_read(gray_blur/* source_delay */, root, gray_blur_ld30, gray_blur_ld29, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_blur_to_gp_328
	gray_blur_to_gp_328.write(gray_blur_gray_blur_ld29_c__gray_blur_ld30_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_FIFO_buf4851(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_224, gray_FIFO_buf48_cache& gray_FIFO_buf48, int root, int gray_to_gp_224_ld50, int gray_to_gp_224_ld49) {
  // Dynamic address computation

	// Consume: gray_to_gp_224
	auto gray_to_gp_224_gray_to_gp_224_ld49_c__gray_to_gp_224_ld50_value = gray_to_gp_224.read();
	// Produce: gray_FIFO_buf48
	gray_FIFO_buf48_load_to_gray_FIFO_buf4851_write_bundle_write(/* arg names */gray_to_gp_224_gray_to_gp_224_ld49_c__gray_to_gp_224_ld50_value, gray_FIFO_buf48, root, gray_to_gp_224_ld50, gray_to_gp_224_ld49, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray47(gray_FIFO_buf48_cache& gray_FIFO_buf48, gray_blur_cache& gray_blur, int root, int pw_math_gray45, int pw_math_gray46) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf48
	auto gray_FIFO_buf48_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value = gray_FIFO_buf48_pw_math_gray47_read_bundle_read(gray_FIFO_buf48/* source_delay */, root, pw_math_gray45, pw_math_gray46, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf48_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value);
	// Produce: gray_blur
	gray_blur_pw_math_gray47_write_bundle_write(/* arg names */compute_result, gray_blur, root, pw_math_gray45, pw_math_gray46, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_blur_ld30_gray_to_gp_224_ld50_pw_math_gray45_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_328) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_blur_ld30_gray_to_gp_224_ld50_pw_math_gray45__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf48_cache gray_FIFO_buf48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache gray_blur;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_FIFO_buf4851[root = 0, gray_to_gp_224_ld50, gray_to_gp_224_ld49] -> [gray_to_gp_224_ld50, gray_to_gp_224_ld49, 0] : 0 <= gray_to_gp_224_ld50 <= 65 and 0 <= gray_to_gp_224_ld49 <= 65; load_to_gray_blur_to_gp_32831[root = 0, gray_blur_ld30, gray_blur_ld29] -> [gray_blur_ld30, gray_blur_ld29, 2] : 0 <= gray_blur_ld30 <= 65 and 0 <= gray_blur_ld29 <= 65; pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> [pw_math_gray45, pw_math_gray46, 1] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
//   { load_to_gray_FIFO_buf4851[root = 0, gray_to_gp_224_ld50, gray_to_gp_224_ld49] -> [gray_to_gp_224_ld50, gray_to_gp_224_ld49, 0] : 0 <= gray_to_gp_224_ld50 <= 65 and 0 <= gray_to_gp_224_ld49 <= 65 }
// Condition for load_to_gray_FIFO_buf4851(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_gray_blur_to_gp_32831[root = 0, gray_blur_ld30, gray_blur_ld29] -> [gray_blur_ld30, gray_blur_ld29, 2] : 0 <= gray_blur_ld30 <= 65 and 0 <= gray_blur_ld29 <= 65 }
// Condition for load_to_gray_blur_to_gp_32831(((-2 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> [pw_math_gray45, pw_math_gray46, 1] : 0 <= pw_math_gray45 <= 65 and 0 <= pw_math_gray46 <= 65 }
// Condition for pw_math_gray47(((-1 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 65; c0 += 1)
  for (int c1 = 0; c1 <= 65; c1 += 1) {
    load_to_gray_FIFO_buf4851(0, c0, c1);
    pw_math_gray47(0, c0, c1);
    load_to_gray_blur_to_gp_32831(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 65; c0 += 1)
	  for (int c1 = 0; c1 <= 65; c1 += 1) {
	    load_to_gray_FIFO_buf4851(gray_to_gp_224 /* buf name */, gray_FIFO_buf48, 0, c0, c1);
	    pw_math_gray47(gray_FIFO_buf48 /* buf name */, gray_blur, 0, c0, c1);
	    load_to_gray_blur_to_gp_32831(gray_blur /* buf name */, gray_blur_to_gp_328, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_gray_blur_ld30_gray_to_gp_224_ld50_pw_math_gray45__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_224, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_328, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_gray_blur_ld30_gray_to_gp_224_ld50_pw_math_gray45_(gray_to_gp_224, gray_blur_to_gp_328);
  }
}
#include "hw_classes.h"

struct gray_blur_FIFO_buf52_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_blur_FIFO_buf52_cache {
  // # of banks: 1
  gray_blur_FIFO_buf52_all_inputs_to_all_outputs_cache gray_blur_FIFO_buf52_all_inputs_to_all_outputs;
};



inline void gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4_write(hw_uint<32> & gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4, gray_blur_FIFO_buf52_cache& gray_blur_FIFO_buf52, int root, int gray_blur_to_gp_328_ld54, int gray_blur_to_gp_328_ld53, int dynamic_address) {
  gray_blur_FIFO_buf52.gray_blur_FIFO_buf52_all_inputs_to_all_outputs.write(gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4, gray_blur_to_gp_328_ld53 - 0, gray_blur_to_gp_328_ld54 - 0);
}

inline hw_uint<32>  gray_blur_FIFO_buf52_pw_math_gray_blur811_1_select(gray_blur_FIFO_buf52_cache& gray_blur_FIFO_buf52, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_FIFO_buf52_pw_math_gray_blur811_1 read pattern: { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> gray_blur_FIFO_buf52[pw_math_gray_blur810, pw_math_gray_blur89] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65 }
  auto value_gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4 = gray_blur_FIFO_buf52.gray_blur_FIFO_buf52_all_inputs_to_all_outputs.read(pw_math_gray_blur810 - 0, pw_math_gray_blur89 - 0);
  return value_gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_FIFO_buf5255_write
//	gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4
inline void gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_write_bundle_write(hw_uint<32>& load_to_gray_blur_FIFO_buf5255_write, gray_blur_FIFO_buf52_cache& gray_blur_FIFO_buf52, int root, int gray_blur_to_gp_328_ld54, int gray_blur_to_gp_328_ld53, int dynamic_address) {
	hw_uint<32>  gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4_res = load_to_gray_blur_FIFO_buf5255_write.extract<0, 31>();
	gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4_write(gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_4_res, gray_blur_FIFO_buf52, root, gray_blur_to_gp_328_ld54, gray_blur_to_gp_328_ld53, dynamic_address);
}

// pw_math_gray_blur811_read
//	gray_blur_FIFO_buf52_pw_math_gray_blur811_1
inline hw_uint<32> gray_blur_FIFO_buf52_pw_math_gray_blur811_read_bundle_read(gray_blur_FIFO_buf52_cache& gray_blur_FIFO_buf52, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_FIFO_buf52_pw_math_gray_blur811_1

	hw_uint<32> result;
	hw_uint<32>  gray_blur_FIFO_buf52_pw_math_gray_blur811_1_res = gray_blur_FIFO_buf52_pw_math_gray_blur811_1_select(gray_blur_FIFO_buf52, root, pw_math_gray_blur89, pw_math_gray_blur810, dynamic_address);
	set_at<0, 32>(result, gray_blur_FIFO_buf52_pw_math_gray_blur811_1_res);
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



inline void gray_blur_cache_pw_math_gray_blur811_0_write(hw_uint<32> & gray_blur_cache_pw_math_gray_blur811_0, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
  gray_blur_cache.gray_blur_cache_all_inputs_to_all_outputs.write(gray_blur_cache_pw_math_gray_blur811_0, pw_math_gray_blur810 - 0, pw_math_gray_blur89 - 0);
}

inline hw_uint<32>  gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3_select(gray_blur_cache_cache& gray_blur_cache, int root, int gray_blur_cache_ld34, int gray_blur_cache_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3 read pattern: { load_to_gray_blur_cache_to_gp_53235[root = 0, gray_blur_cache_ld34, gray_blur_cache_ld33] -> gray_blur_cache[gray_blur_cache_ld33, gray_blur_cache_ld34] : 0 <= gray_blur_cache_ld34 <= 65 and 0 <= gray_blur_cache_ld33 <= 65 }
  auto value_gray_blur_cache_pw_math_gray_blur811_0 = gray_blur_cache.gray_blur_cache_all_inputs_to_all_outputs.read(gray_blur_cache_ld33 - 0, gray_blur_cache_ld34 - 0);
  return value_gray_blur_cache_pw_math_gray_blur811_0;
  return 0;
}

// # of bundles = 2
// load_to_gray_blur_cache_to_gp_53235_read
//	gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3
inline hw_uint<32> gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_read_bundle_read(gray_blur_cache_cache& gray_blur_cache, int root, int gray_blur_cache_ld34, int gray_blur_cache_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3

	hw_uint<32> result;
	hw_uint<32>  gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3_res = gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3_select(gray_blur_cache, root, gray_blur_cache_ld34, gray_blur_cache_ld33, dynamic_address);
	set_at<0, 32>(result, gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_3_res);
	return result;
}

// pw_math_gray_blur811_write
//	gray_blur_cache_pw_math_gray_blur811_0
inline void gray_blur_cache_pw_math_gray_blur811_write_bundle_write(hw_uint<32>& pw_math_gray_blur811_write, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810, int dynamic_address) {
	hw_uint<32>  gray_blur_cache_pw_math_gray_blur811_0_res = pw_math_gray_blur811_write.extract<0, 31>();
	gray_blur_cache_pw_math_gray_blur811_0_write(gray_blur_cache_pw_math_gray_blur811_0_res, gray_blur_cache, root, pw_math_gray_blur89, pw_math_gray_blur810, dynamic_address);
}

// Total re-use buffer capacity: 278784 bits


// Operation logic
inline void load_to_gray_blur_FIFO_buf5255(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_to_gp_328, gray_blur_FIFO_buf52_cache& gray_blur_FIFO_buf52, int root, int gray_blur_to_gp_328_ld54, int gray_blur_to_gp_328_ld53) {
  // Dynamic address computation

	// Consume: gray_blur_to_gp_328
	auto gray_blur_to_gp_328_gray_blur_to_gp_328_ld53_c__gray_blur_to_gp_328_ld54_value = gray_blur_to_gp_328.read();
	// Produce: gray_blur_FIFO_buf52
	gray_blur_FIFO_buf52_load_to_gray_blur_FIFO_buf5255_write_bundle_write(/* arg names */gray_blur_to_gp_328_gray_blur_to_gp_328_ld53_c__gray_blur_to_gp_328_ld54_value, gray_blur_FIFO_buf52, root, gray_blur_to_gp_328_ld54, gray_blur_to_gp_328_ld53, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray_blur811(gray_blur_FIFO_buf52_cache& gray_blur_FIFO_buf52, gray_blur_cache_cache& gray_blur_cache, int root, int pw_math_gray_blur89, int pw_math_gray_blur810) {
  // Dynamic address computation

	// Consume: gray_blur_FIFO_buf52
	auto gray_blur_FIFO_buf52_pw_math_gray_blur810_p_0_c___pw_math_gray_blur89_p_0_value = gray_blur_FIFO_buf52_pw_math_gray_blur811_read_bundle_read(gray_blur_FIFO_buf52/* source_delay */, root, pw_math_gray_blur89, pw_math_gray_blur810, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_blur_FIFO_buf52_pw_math_gray_blur810_p_0_c___pw_math_gray_blur89_p_0_value);
	// Produce: gray_blur_cache
	gray_blur_cache_pw_math_gray_blur811_write_bundle_write(/* arg names */compute_result, gray_blur_cache, root, pw_math_gray_blur89, pw_math_gray_blur810, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_blur_cache_to_gp_53235(gray_blur_cache_cache& gray_blur_cache, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_cache_to_gp_532, int root, int gray_blur_cache_ld34, int gray_blur_cache_ld33) {
  // Dynamic address computation

	// Consume: gray_blur_cache
	auto gray_blur_cache_gray_blur_cache_ld33_c__gray_blur_cache_ld34_value = gray_blur_cache_load_to_gray_blur_cache_to_gp_53235_read_bundle_read(gray_blur_cache/* source_delay */, root, gray_blur_cache_ld34, gray_blur_cache_ld33, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_blur_cache_to_gp_532
	gray_blur_cache_to_gp_532.write(gray_blur_cache_gray_blur_cache_ld33_c__gray_blur_cache_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_blur_cache_ld34_gray_blur_to_gp_328_ld54_pw_math_gray_blur89_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_328, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_532) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_blur_cache_ld34_gray_blur_to_gp_328_ld54_pw_math_gray_blur89__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_blur_FIFO_buf52_cache gray_blur_FIFO_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache_cache gray_blur_cache;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_blur_FIFO_buf5255[root = 0, gray_blur_to_gp_328_ld54, gray_blur_to_gp_328_ld53] -> [gray_blur_to_gp_328_ld54, gray_blur_to_gp_328_ld53, 0] : 0 <= gray_blur_to_gp_328_ld54 <= 65 and 0 <= gray_blur_to_gp_328_ld53 <= 65; pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> [pw_math_gray_blur89, pw_math_gray_blur810, 1] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65; load_to_gray_blur_cache_to_gp_53235[root = 0, gray_blur_cache_ld34, gray_blur_cache_ld33] -> [gray_blur_cache_ld34, gray_blur_cache_ld33, 2] : 0 <= gray_blur_cache_ld34 <= 65 and 0 <= gray_blur_cache_ld33 <= 65 }
//   { load_to_gray_blur_FIFO_buf5255[root = 0, gray_blur_to_gp_328_ld54, gray_blur_to_gp_328_ld53] -> [gray_blur_to_gp_328_ld54, gray_blur_to_gp_328_ld53, 0] : 0 <= gray_blur_to_gp_328_ld54 <= 65 and 0 <= gray_blur_to_gp_328_ld53 <= 65 }
// Condition for load_to_gray_blur_FIFO_buf5255(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { pw_math_gray_blur811[root = 0, pw_math_gray_blur89, pw_math_gray_blur810] -> [pw_math_gray_blur89, pw_math_gray_blur810, 1] : 0 <= pw_math_gray_blur89 <= 65 and 0 <= pw_math_gray_blur810 <= 65 }
// Condition for pw_math_gray_blur811(((-1 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))
//   { load_to_gray_blur_cache_to_gp_53235[root = 0, gray_blur_cache_ld34, gray_blur_cache_ld33] -> [gray_blur_cache_ld34, gray_blur_cache_ld33, 2] : 0 <= gray_blur_cache_ld34 <= 65 and 0 <= gray_blur_cache_ld33 <= 65 }
// Condition for load_to_gray_blur_cache_to_gp_53235(((-2 + i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (i1 >= 0) && (65 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 65; c0 += 1)
  for (int c1 = 0; c1 <= 65; c1 += 1) {
    load_to_gray_blur_FIFO_buf5255(0, c0, c1);
    pw_math_gray_blur811(0, c0, c1);
    load_to_gray_blur_cache_to_gp_53235(0, c0, c1);
  }

  */
	for (int c0 = 0; c0 <= 65; c0 += 1)
	  for (int c1 = 0; c1 <= 65; c1 += 1) {
	    load_to_gray_blur_FIFO_buf5255(gray_blur_to_gp_328 /* buf name */, gray_blur_FIFO_buf52, 0, c0, c1);
	    pw_math_gray_blur811(gray_blur_FIFO_buf52 /* buf name */, gray_blur_cache, 0, c0, c1);
	    load_to_gray_blur_cache_to_gp_53235(gray_blur_cache /* buf name */, gray_blur_cache_to_gp_532, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_gray_blur_cache_ld34_gray_blur_to_gp_328_ld54_pw_math_gray_blur89__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_to_gp_328, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_532, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_gray_blur_cache_ld34_gray_blur_to_gp_328_ld54_pw_math_gray_blur89_(gray_blur_to_gp_328, gray_blur_cache_to_gp_532);
  }
}
#include "hw_classes.h"

struct blurred_FIFO_buf40_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct blurred_FIFO_buf40_cache {
  // # of banks: 1
  blurred_FIFO_buf40_all_inputs_to_all_outputs_cache blurred_FIFO_buf40_all_inputs_to_all_outputs;
};



inline void blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2_write(hw_uint<32> & blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2, blurred_FIFO_buf40_cache& blurred_FIFO_buf40, int root, int blurred_to_gp_416_ld41, int blurred_to_gp_416_ld42, int dynamic_address) {
  blurred_FIFO_buf40.blurred_FIFO_buf40_all_inputs_to_all_outputs.write(blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2, blurred_to_gp_416_ld41 - 0, blurred_to_gp_416_ld42 - 0);
}

inline hw_uint<32>  blurred_FIFO_buf40_diff_6_select(blurred_FIFO_buf40_cache& blurred_FIFO_buf40, int root, int x, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_FIFO_buf40_diff_6 read pattern: { diff[root = 0, x, y] -> blurred_FIFO_buf40[x, y] : 0 <= x <= 63 and 0 <= y <= 63 }
  auto value_blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2 = blurred_FIFO_buf40.blurred_FIFO_buf40_all_inputs_to_all_outputs.read(x - 0, y - 0);
  return value_blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2;
  return 0;
}

// # of bundles = 2
// diff_read
//	blurred_FIFO_buf40_diff_6
inline hw_uint<32> blurred_FIFO_buf40_diff_read_bundle_read(blurred_FIFO_buf40_cache& blurred_FIFO_buf40, int root, int x, int y, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_FIFO_buf40_diff_6

	hw_uint<32> result;
	hw_uint<32>  blurred_FIFO_buf40_diff_6_res = blurred_FIFO_buf40_diff_6_select(blurred_FIFO_buf40, root, x, y, dynamic_address);
	set_at<0, 32>(result, blurred_FIFO_buf40_diff_6_res);
	return result;
}

// load_to_blurred_FIFO_buf4043_write
//	blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2
inline void blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_write_bundle_write(hw_uint<32>& load_to_blurred_FIFO_buf4043_write, blurred_FIFO_buf40_cache& blurred_FIFO_buf40, int root, int blurred_to_gp_416_ld41, int blurred_to_gp_416_ld42, int dynamic_address) {
	hw_uint<32>  blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2_res = load_to_blurred_FIFO_buf4043_write.extract<0, 31>();
	blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2_write(blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_2_res, blurred_FIFO_buf40, root, blurred_to_gp_416_ld41, blurred_to_gp_416_ld42, dynamic_address);
}

#include "hw_classes.h"

struct gray_diff_FIFO_buf60_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 63], [0, 63]}
  hw_uint<32>  RAM[64][64];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_diff_FIFO_buf60_cache {
  // # of banks: 1
  gray_diff_FIFO_buf60_all_inputs_to_all_outputs_cache gray_diff_FIFO_buf60_all_inputs_to_all_outputs;
};



inline void gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0_write(hw_uint<32> & gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0, gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int gray_diff_to_gp_436_ld62, int gray_diff_to_gp_436_ld61, int dynamic_address) {
  gray_diff_FIFO_buf60.gray_diff_FIFO_buf60_all_inputs_to_all_outputs.write(gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0, gray_diff_to_gp_436_ld61 - 0, gray_diff_to_gp_436_ld62 - 0);
}

inline hw_uint<32>  gray_diff_FIFO_buf60_diff_5_select(gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int x, int y, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_diff_FIFO_buf60_diff_5 read pattern: { diff[root = 0, x, y] -> gray_diff_FIFO_buf60[x, y] : 0 <= x <= 63 and 0 <= y <= 63 }
  auto value_gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0 = gray_diff_FIFO_buf60.gray_diff_FIFO_buf60_all_inputs_to_all_outputs.read(x - 0, y - 0);
  return value_gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0;
  return 0;
}

// # of bundles = 2
// diff_read
//	gray_diff_FIFO_buf60_diff_5
inline hw_uint<32> gray_diff_FIFO_buf60_diff_read_bundle_read(gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int x, int y, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_diff_FIFO_buf60_diff_5

	hw_uint<32> result;
	hw_uint<32>  gray_diff_FIFO_buf60_diff_5_res = gray_diff_FIFO_buf60_diff_5_select(gray_diff_FIFO_buf60, root, x, y, dynamic_address);
	set_at<0, 32>(result, gray_diff_FIFO_buf60_diff_5_res);
	return result;
}

// load_to_gray_diff_FIFO_buf6063_write
//	gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0
inline void gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_write_bundle_write(hw_uint<32>& load_to_gray_diff_FIFO_buf6063_write, gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int gray_diff_to_gp_436_ld62, int gray_diff_to_gp_436_ld61, int dynamic_address) {
	hw_uint<32>  gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0_res = load_to_gray_diff_FIFO_buf6063_write.extract<0, 31>();
	gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0_write(gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_0_res, gray_diff_FIFO_buf60, root, gray_diff_to_gp_436_ld62, gray_diff_to_gp_436_ld61, dynamic_address);
}

// Total re-use buffer capacity: 262144 bits


// Operation logic
inline void load_to_gray_diff_FIFO_buf6063(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_diff_to_gp_436, gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, int root, int gray_diff_to_gp_436_ld62, int gray_diff_to_gp_436_ld61) {
  // Dynamic address computation

	// Consume: gray_diff_to_gp_436
	auto gray_diff_to_gp_436_gray_diff_to_gp_436_ld61_c__gray_diff_to_gp_436_ld62_value = gray_diff_to_gp_436.read();
	// Produce: gray_diff_FIFO_buf60
	gray_diff_FIFO_buf60_load_to_gray_diff_FIFO_buf6063_write_bundle_write(/* arg names */gray_diff_to_gp_436_gray_diff_to_gp_436_ld61_c__gray_diff_to_gp_436_ld62_value, gray_diff_FIFO_buf60, root, gray_diff_to_gp_436_ld62, gray_diff_to_gp_436_ld61, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurred_FIFO_buf4043(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_416, blurred_FIFO_buf40_cache& blurred_FIFO_buf40, int root, int blurred_to_gp_416_ld41, int blurred_to_gp_416_ld42) {
  // Dynamic address computation

	// Consume: blurred_to_gp_416
	auto blurred_to_gp_416_blurred_to_gp_416_ld41_c__blurred_to_gp_416_ld42_value = blurred_to_gp_416.read();
	// Produce: blurred_FIFO_buf40
	blurred_FIFO_buf40_load_to_blurred_FIFO_buf4043_write_bundle_write(/* arg names */blurred_to_gp_416_blurred_to_gp_416_ld41_c__blurred_to_gp_416_ld42_value, blurred_FIFO_buf40, root, blurred_to_gp_416_ld41, blurred_to_gp_416_ld42, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff(gray_diff_FIFO_buf60_cache& gray_diff_FIFO_buf60, blurred_FIFO_buf40_cache& blurred_FIFO_buf40, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int x, int y) {
  // Dynamic address computation

	// Consume: gray_diff_FIFO_buf60
	auto gray_diff_FIFO_buf60_x_p_0_c___y_p_0_value = gray_diff_FIFO_buf60_diff_read_bundle_read(gray_diff_FIFO_buf60/* source_delay */, root, x, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: blurred_FIFO_buf40
	auto blurred_FIFO_buf40_x_p_0_c___y_p_0_value = blurred_FIFO_buf40_diff_read_bundle_read(blurred_FIFO_buf40/* source_delay */, root, x, y, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff(gray_diff_FIFO_buf60_x_p_0_c___y_p_0_value, blurred_FIFO_buf40_x_p_0_c___y_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurred_to_gp_416_ld41_gray_diff_to_gp_436_ld62_x_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_416, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_436, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurred_to_gp_416_ld41_gray_diff_to_gp_436_ld62_x__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_FIFO_buf40_cache blurred_FIFO_buf40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_diff_FIFO_buf60_cache gray_diff_FIFO_buf60;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff[root = 0, x, y] -> [63 + x, 1, y, 1] : 0 <= x <= 63 and 0 <= y <= 63; load_to_gray_diff_FIFO_buf6063[root = 0, gray_diff_to_gp_436_ld62, gray_diff_to_gp_436_ld61] -> [gray_diff_to_gp_436_ld62, 1, 63 + gray_diff_to_gp_436_ld61, 0] : 0 <= gray_diff_to_gp_436_ld62 <= 63 and 0 <= gray_diff_to_gp_436_ld61 <= 63; load_to_blurred_FIFO_buf4043[root = 0, blurred_to_gp_416_ld41, blurred_to_gp_416_ld42] -> [blurred_to_gp_416_ld41, 0, blurred_to_gp_416_ld42, 0] : 0 <= blurred_to_gp_416_ld41 <= 63 and 0 <= blurred_to_gp_416_ld42 <= 63 }
//   { diff[root = 0, x, y] -> [63 + x, 1, y, 1] : 0 <= x <= 63 and 0 <= y <= 63 }
// Condition for diff(((-1 + i3 == 0) && (-1 + i1 == 0) && (-63 + i0 >= 0) && (126 - i0 >= 0) && (i2 >= 0) && (63 - i2 >= 0)))
//   { load_to_gray_diff_FIFO_buf6063[root = 0, gray_diff_to_gp_436_ld62, gray_diff_to_gp_436_ld61] -> [gray_diff_to_gp_436_ld62, 1, 63 + gray_diff_to_gp_436_ld61, 0] : 0 <= gray_diff_to_gp_436_ld62 <= 63 and 0 <= gray_diff_to_gp_436_ld61 <= 63 }
// Condition for load_to_gray_diff_FIFO_buf6063(((i3 == 0) && (-1 + i1 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (-63 + i2 >= 0) && (126 - i2 >= 0)))
//   { load_to_blurred_FIFO_buf4043[root = 0, blurred_to_gp_416_ld41, blurred_to_gp_416_ld42] -> [blurred_to_gp_416_ld41, 0, blurred_to_gp_416_ld42, 0] : 0 <= blurred_to_gp_416_ld41 <= 63 and 0 <= blurred_to_gp_416_ld42 <= 63 }
// Condition for load_to_blurred_FIFO_buf4043(((i3 == 0) && (i1 == 0) && (i0 >= 0) && (63 - i0 >= 0) && (i2 >= 0) && (63 - i2 >= 0)))

  /*
for (int c0 = 0; c0 <= 126; c0 += 1) {
  if (c0 <= 63)
    for (int c2 = 0; c2 <= 63; c2 += 1)
      load_to_blurred_FIFO_buf4043(0, c0, c2);
  if (c0 >= 64) {
    for (int c2 = 0; c2 <= 63; c2 += 1)
      diff(0, c0 - 63, c2);
  } else {
    if (c0 == 63)
      for (int c2 = 0; c2 <= 62; c2 += 1)
        diff(0, 0, c2);
    for (int c2 = 63; c2 <= 126; c2 += 1) {
      load_to_gray_diff_FIFO_buf6063(0, c0, c2 - 63);
      if (c0 == 63 && c2 == 63)
        diff(0, 0, 63);
    }
  }
}

  */
	for (int c0 = 0; c0 <= 126; c0 += 1) {
	  if (c0 <= 63)
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      load_to_blurred_FIFO_buf4043(blurred_to_gp_416 /* buf name */, blurred_FIFO_buf40, 0, c0, c2);
	  if (c0 >= 64) {
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      diff(gray_diff_FIFO_buf60 /* buf name */, blurred_FIFO_buf40 /* buf name */, out, 0, c0 - 63, c2);
	  } else {
	    if (c0 == 63)
	      for (int c2 = 0; c2 <= 62; c2 += 1)
	        diff(gray_diff_FIFO_buf60 /* buf name */, blurred_FIFO_buf40 /* buf name */, out, 0, 0, c2);
	    for (int c2 = 63; c2 <= 126; c2 += 1) {
	      load_to_gray_diff_FIFO_buf6063(gray_diff_to_gp_436 /* buf name */, gray_diff_FIFO_buf60, 0, c0, c2 - 63);
	      if (c0 == 63 && c2 == 63)
	        diff(gray_diff_FIFO_buf60 /* buf name */, blurred_FIFO_buf40 /* buf name */, out, 0, 0, 63);
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_blurred_to_gp_416_ld41_gray_diff_to_gp_436_ld62_x__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_416, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_diff_to_gp_436, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_blurred_to_gp_416_ld41_gray_diff_to_gp_436_ld62_x_(blurred_to_gp_416, gray_diff_to_gp_436, out);
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

inline hw_uint<32>  blurred_load_to_blurred_to_gp_41619_3_select(blurred_cache& blurred, int root, int blurred_ld17, int blurred_ld18, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blurred_load_to_blurred_to_gp_41619_3 read pattern: { load_to_blurred_to_gp_41619[root = 0, blurred_ld17, blurred_ld18] -> blurred[blurred_ld17, blurred_ld18] : 0 <= blurred_ld17 <= 63 and 0 <= blurred_ld18 <= 63 }
  auto value_blurred_blur_4 = blurred.blurred_all_inputs_to_all_outputs.read(blurred_ld17 - 0, blurred_ld18 - 0);
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

// load_to_blurred_to_gp_41619_read
//	blurred_load_to_blurred_to_gp_41619_3
inline hw_uint<32> blurred_load_to_blurred_to_gp_41619_read_bundle_read(blurred_cache& blurred, int root, int blurred_ld17, int blurred_ld18, int dynamic_address) {
  // # of ports in bundle: 1
    // blurred_load_to_blurred_to_gp_41619_3

	hw_uint<32> result;
	hw_uint<32>  blurred_load_to_blurred_to_gp_41619_3_res = blurred_load_to_blurred_to_gp_41619_3_select(blurred, root, blurred_ld17, blurred_ld18, dynamic_address);
	set_at<0, 32>(result, blurred_load_to_blurred_to_gp_41619_3_res);
	return result;
}

#include "hw_classes.h"

struct gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 65], [0, 65]}
  hw_uint<32>  RAM[66][66];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_blur_cache_FIFO_buf56_cache {
  // # of banks: 1
  gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs_cache gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs;
};



inline void gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0_write(hw_uint<32> & gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0, gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int gray_blur_cache_to_gp_532_ld58, int gray_blur_cache_to_gp_532_ld57, int dynamic_address) {
  gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.write(gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0, gray_blur_cache_to_gp_532_ld57 - 0, gray_blur_cache_to_gp_532_ld58 - 0);
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_10_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_10 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[1 + xb, 2 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(1 + xb - 0, 2 + yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_11_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_11 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[2 + xb, yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(2 + xb - 0, yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_12_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_12 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[2 + xb, 1 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(2 + xb - 0, 1 + yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_13_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_13 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[2 + xb, 2 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(2 + xb - 0, 2 + yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_5_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_5 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[xb, yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(xb - 0, yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_6_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_6 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[xb, 1 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(xb - 0, 1 + yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_7_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_7 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[xb, 2 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(xb - 0, 2 + yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_8_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_8 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[1 + xb, yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(1 + xb - 0, yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

inline hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_9_select(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_blur_cache_FIFO_buf56_blur_9 read pattern: { blur[root = 0, xb, yb] -> gray_blur_cache_FIFO_buf56[1 + xb, 1 + yb] : 0 <= xb <= 63 and 0 <= yb <= 63 }
  auto value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0 = gray_blur_cache_FIFO_buf56.gray_blur_cache_FIFO_buf56_all_inputs_to_all_outputs.read(1 + xb - 0, 1 + yb - 0);
  return value_gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0;
  return 0;
}

// # of bundles = 2
// blur_read
//	gray_blur_cache_FIFO_buf56_blur_5
//	gray_blur_cache_FIFO_buf56_blur_6
//	gray_blur_cache_FIFO_buf56_blur_7
//	gray_blur_cache_FIFO_buf56_blur_8
//	gray_blur_cache_FIFO_buf56_blur_9
//	gray_blur_cache_FIFO_buf56_blur_10
//	gray_blur_cache_FIFO_buf56_blur_11
//	gray_blur_cache_FIFO_buf56_blur_12
//	gray_blur_cache_FIFO_buf56_blur_13
inline hw_uint<288> gray_blur_cache_FIFO_buf56_blur_read_bundle_read(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int xb, int yb, int dynamic_address) {
  // # of ports in bundle: 9
    // gray_blur_cache_FIFO_buf56_blur_5
    // gray_blur_cache_FIFO_buf56_blur_6
    // gray_blur_cache_FIFO_buf56_blur_7
    // gray_blur_cache_FIFO_buf56_blur_8
    // gray_blur_cache_FIFO_buf56_blur_9
    // gray_blur_cache_FIFO_buf56_blur_10
    // gray_blur_cache_FIFO_buf56_blur_11
    // gray_blur_cache_FIFO_buf56_blur_12
    // gray_blur_cache_FIFO_buf56_blur_13

	hw_uint<288> result;
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_5_res = gray_blur_cache_FIFO_buf56_blur_5_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<0, 288>(result, gray_blur_cache_FIFO_buf56_blur_5_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_6_res = gray_blur_cache_FIFO_buf56_blur_6_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<32, 288>(result, gray_blur_cache_FIFO_buf56_blur_6_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_7_res = gray_blur_cache_FIFO_buf56_blur_7_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<64, 288>(result, gray_blur_cache_FIFO_buf56_blur_7_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_8_res = gray_blur_cache_FIFO_buf56_blur_8_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<96, 288>(result, gray_blur_cache_FIFO_buf56_blur_8_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_9_res = gray_blur_cache_FIFO_buf56_blur_9_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<128, 288>(result, gray_blur_cache_FIFO_buf56_blur_9_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_10_res = gray_blur_cache_FIFO_buf56_blur_10_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<160, 288>(result, gray_blur_cache_FIFO_buf56_blur_10_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_11_res = gray_blur_cache_FIFO_buf56_blur_11_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<192, 288>(result, gray_blur_cache_FIFO_buf56_blur_11_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_12_res = gray_blur_cache_FIFO_buf56_blur_12_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<224, 288>(result, gray_blur_cache_FIFO_buf56_blur_12_res);
	hw_uint<32>  gray_blur_cache_FIFO_buf56_blur_13_res = gray_blur_cache_FIFO_buf56_blur_13_select(gray_blur_cache_FIFO_buf56, root, xb, yb, dynamic_address);
	set_at<256, 288>(result, gray_blur_cache_FIFO_buf56_blur_13_res);
	return result;
}

// load_to_gray_blur_cache_FIFO_buf5659_write
//	gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0
inline void gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_write_bundle_write(hw_uint<32>& load_to_gray_blur_cache_FIFO_buf5659_write, gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int gray_blur_cache_to_gp_532_ld58, int gray_blur_cache_to_gp_532_ld57, int dynamic_address) {
	hw_uint<32>  gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0_res = load_to_gray_blur_cache_FIFO_buf5659_write.extract<0, 31>();
	gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0_write(gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_0_res, gray_blur_cache_FIFO_buf56, root, gray_blur_cache_to_gp_532_ld58, gray_blur_cache_to_gp_532_ld57, dynamic_address);
}

// Total re-use buffer capacity: 270464 bits


// Operation logic
inline void load_to_gray_blur_cache_FIFO_buf5659(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_blur_cache_to_gp_532, gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, int root, int gray_blur_cache_to_gp_532_ld58, int gray_blur_cache_to_gp_532_ld57) {
  // Dynamic address computation

	// Consume: gray_blur_cache_to_gp_532
	auto gray_blur_cache_to_gp_532_gray_blur_cache_to_gp_532_ld57_c__gray_blur_cache_to_gp_532_ld58_value = gray_blur_cache_to_gp_532.read();
	// Produce: gray_blur_cache_FIFO_buf56
	gray_blur_cache_FIFO_buf56_load_to_gray_blur_cache_FIFO_buf5659_write_bundle_write(/* arg names */gray_blur_cache_to_gp_532_gray_blur_cache_to_gp_532_ld57_c__gray_blur_cache_to_gp_532_ld58_value, gray_blur_cache_FIFO_buf56, root, gray_blur_cache_to_gp_532_ld58, gray_blur_cache_to_gp_532_ld57, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void blur(gray_blur_cache_FIFO_buf56_cache& gray_blur_cache_FIFO_buf56, blurred_cache& blurred, int root, int xb, int yb) {
  // Dynamic address computation

	// Consume: gray_blur_cache_FIFO_buf56
	auto gray_blur_cache_FIFO_buf56_xb__p__0_p_0_c___yb__p__0_p_0_value = gray_blur_cache_FIFO_buf56_blur_read_bundle_read(gray_blur_cache_FIFO_buf56/* source_delay */, root, xb, yb, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(gray_blur_cache_FIFO_buf56_xb__p__0_p_0_c___yb__p__0_p_0_value);
	// Produce: blurred
	blurred_blur_write_bundle_write(/* arg names */compute_result, blurred, root, xb, yb, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_blurred_to_gp_41619(blurred_cache& blurred, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */blurred_to_gp_416, int root, int blurred_ld17, int blurred_ld18) {
  // Dynamic address computation

	// Consume: blurred
	auto blurred_blurred_ld17_c__blurred_ld18_value = blurred_load_to_blurred_to_gp_41619_read_bundle_read(blurred/* source_delay */, root, blurred_ld17, blurred_ld18, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: blurred_to_gp_416
	blurred_to_gp_416.write(blurred_blurred_ld17_c__blurred_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_blurred_ld17_gray_blur_cache_to_gp_532_ld58_xb_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_532, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_416) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_blurred_ld17_gray_blur_cache_to_gp_532_ld58_xb__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blurred_cache blurred;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gray_blur_cache_FIFO_buf56_cache gray_blur_cache_FIFO_buf56;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gray_blur_cache_FIFO_buf5659[root = 0, gray_blur_cache_to_gp_532_ld58, gray_blur_cache_to_gp_532_ld57] -> [gray_blur_cache_to_gp_532_ld58, 61 + gray_blur_cache_to_gp_532_ld57, 0] : 0 <= gray_blur_cache_to_gp_532_ld58 <= 65 and 0 <= gray_blur_cache_to_gp_532_ld57 <= 65; blur[root = 0, xb, yb] -> [65 + xb, yb, 1] : 0 <= xb <= 63 and 0 <= yb <= 63; load_to_blurred_to_gp_41619[root = 0, blurred_ld17, blurred_ld18] -> [65 + blurred_ld17, blurred_ld18, 2] : 0 <= blurred_ld17 <= 63 and 0 <= blurred_ld18 <= 63 }
//   { load_to_gray_blur_cache_FIFO_buf5659[root = 0, gray_blur_cache_to_gp_532_ld58, gray_blur_cache_to_gp_532_ld57] -> [gray_blur_cache_to_gp_532_ld58, 61 + gray_blur_cache_to_gp_532_ld57, 0] : 0 <= gray_blur_cache_to_gp_532_ld58 <= 65 and 0 <= gray_blur_cache_to_gp_532_ld57 <= 65 }
// Condition for load_to_gray_blur_cache_FIFO_buf5659(((i2 == 0) && (i0 >= 0) && (65 - i0 >= 0) && (-61 + i1 >= 0) && (126 - i1 >= 0)))
//   { blur[root = 0, xb, yb] -> [65 + xb, yb, 1] : 0 <= xb <= 63 and 0 <= yb <= 63 }
// Condition for blur(((-1 + i2 == 0) && (-65 + i0 >= 0) && (128 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))
//   { load_to_blurred_to_gp_41619[root = 0, blurred_ld17, blurred_ld18] -> [65 + blurred_ld17, blurred_ld18, 2] : 0 <= blurred_ld17 <= 63 and 0 <= blurred_ld18 <= 63 }
// Condition for load_to_blurred_to_gp_41619(((-2 + i2 == 0) && (-65 + i0 >= 0) && (128 - i0 >= 0) && (i1 >= 0) && (63 - i1 >= 0)))

  /*
for (int c0 = 0; c0 <= 128; c0 += 1)
  for (int c1 = 0; c1 <= 126; c1 += 1) {
    if (c0 <= 65 && c1 >= 61)
      load_to_gray_blur_cache_FIFO_buf5659(0, c0, c1 - 61);
    if (c0 >= 65 && c1 <= 63) {
      blur(0, c0 - 65, c1);
      load_to_blurred_to_gp_41619(0, c0 - 65, c1);
    }
  }

  */
	for (int c0 = 0; c0 <= 128; c0 += 1)
	  for (int c1 = 0; c1 <= 126; c1 += 1) {
	    if (c0 <= 65 && c1 >= 61)
	      load_to_gray_blur_cache_FIFO_buf5659(gray_blur_cache_to_gp_532 /* buf name */, gray_blur_cache_FIFO_buf56, 0, c0, c1 - 61);
	    if (c0 >= 65 && c1 <= 63) {
	      blur(gray_blur_cache_FIFO_buf56 /* buf name */, blurred, 0, c0 - 65, c1);
	      load_to_blurred_to_gp_41619(blurred /* buf name */, blurred_to_gp_416, 0, c0 - 65, c1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void Extracted_blurred_ld17_gray_blur_cache_to_gp_532_ld58_xb__wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_blur_cache_to_gp_532, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */blurred_to_gp_416, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    Extracted_blurred_ld17_gray_blur_cache_to_gp_532_ld58_xb_(gray_blur_cache_to_gp_532, blurred_to_gp_416);
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

  HWStream<hw_uint<32> > gray_to_gp_120;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_120.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_to_gp_224;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_224.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_diff_to_gp_436;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_diff_to_gp_436.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_blur_to_gp_328;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_blur_to_gp_328.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > gray_blur_cache_to_gp_532;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_blur_cache_to_gp_532.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream<hw_uint<32> > blurred_to_gp_416;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=blurred_to_gp_416.values depth=1
#endif //__VIVADO_SYNTH__


  Extracted_gray_ld22_gray_ld26_oc_load_in01_(in, gray_to_gp_120, gray_to_gp_224);
  Extracted_gray_diff_ld38_gray_to_gp_120_ld46_pw_math_gray1213_(gray_to_gp_120, gray_diff_to_gp_436);
  Extracted_gray_blur_ld30_gray_to_gp_224_ld50_pw_math_gray45_(gray_to_gp_224, gray_blur_to_gp_328);
  Extracted_gray_blur_cache_ld34_gray_blur_to_gp_328_ld54_pw_math_gray_blur89_(gray_blur_to_gp_328, gray_blur_cache_to_gp_532);
  Extracted_blurred_ld17_gray_blur_cache_to_gp_532_ld58_xb_(gray_blur_cache_to_gp_532, blurred_to_gp_416);
  Extracted_blurred_to_gp_416_ld41_gray_diff_to_gp_436_ld62_x_(blurred_to_gp_416, gray_diff_to_gp_436, out);

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

