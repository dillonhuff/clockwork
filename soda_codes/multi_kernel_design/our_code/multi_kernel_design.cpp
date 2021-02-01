#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h"

struct gray_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 3]}
  hw_uint<32>  RAM[4][4];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_cache {
  // Reader addrs...
    // { load_to_gray_to_gp_1811[root = 0, gray_ld10, gray_ld9] -> gray[gray_ld9, gray_ld10] : 0 <= gray_ld10 <= 3 and 0 <= gray_ld9 <= 3 }
  // # of banks: 1
  gray_all_inputs_to_all_outputs_cache gray_all_inputs_to_all_outputs;
};



inline void gray_oc_load_in03_2_write(hw_uint<32> & gray_oc_load_in03_2, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
  gray.gray_all_inputs_to_all_outputs.write(gray_oc_load_in03_2, ((1*oc_load_in02)) - 0, ((1*oc_load_in01)) - 0);
}

inline hw_uint<32>  gray_load_to_gray_to_gp_1811_5_select(gray_cache& gray, int root, int gray_ld10, int gray_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_load_to_gray_to_gp_1811_5 read pattern: { load_to_gray_to_gp_1811[root = 0, gray_ld10, gray_ld9] -> gray[gray_ld9, gray_ld10] : 0 <= gray_ld10 <= 3 and 0 <= gray_ld9 <= 3 }
  auto value_gray_oc_load_in03_2 = gray.gray_all_inputs_to_all_outputs.read(((1*gray_ld9)) - 0, ((1*gray_ld10)) - 0);
  return value_gray_oc_load_in03_2;
  return 0;
}

// # of bundles = 2
// load_to_gray_to_gp_1811_read
//	gray_load_to_gray_to_gp_1811_5
inline hw_uint<32> gray_load_to_gray_to_gp_1811_read_bundle_read(gray_cache& gray, int root, int gray_ld10, int gray_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_load_to_gray_to_gp_1811_5

	hw_uint<32> result;
	hw_uint<32>  gray_load_to_gray_to_gp_1811_5_res = gray_load_to_gray_to_gp_1811_5_select(gray, root, gray_ld10, gray_ld9, dynamic_address);
	set_at<0, 32>(result, gray_load_to_gray_to_gp_1811_5_res);
	return result;
}

// oc_load_in03_write
//	gray_oc_load_in03_2
inline void gray_oc_load_in03_write_bundle_write(hw_uint<32>& oc_load_in03_write, gray_cache& gray, int root, int oc_load_in01, int oc_load_in02, int dynamic_address) {
	hw_uint<32>  gray_oc_load_in03_2_res = oc_load_in03_write.extract<0, 31>();
	gray_oc_load_in03_2_write(gray_oc_load_in03_2_res, gray, root, oc_load_in01, oc_load_in02, dynamic_address);
}

struct gray_FIFO_buf12_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 3], [0, 3]}
  hw_uint<32>  RAM[4][4];
  inline hw_uint<32>  read(int d0, int d1) {
    return RAM[d0][d1];
  }



	inline void write(const hw_uint<32>  value, int d0, int d1) {
    RAM[d0][d1] = value;
  }

};

struct gray_FIFO_buf12_cache {
  // Reader addrs...
    // { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> gray_FIFO_buf12[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 3 and 0 <= pw_math_gray46 <= 3 }
  // # of banks: 1
  gray_FIFO_buf12_all_inputs_to_all_outputs_cache gray_FIFO_buf12_all_inputs_to_all_outputs;
};



inline void gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6_write(hw_uint<32> & gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6, gray_FIFO_buf12_cache& gray_FIFO_buf12, int root, int gray_to_gp_18_ld14, int gray_to_gp_18_ld13, int dynamic_address) {
  gray_FIFO_buf12.gray_FIFO_buf12_all_inputs_to_all_outputs.write(gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6, ((1*gray_to_gp_18_ld13)) - 0, ((1*gray_to_gp_18_ld14)) - 0);
}

inline hw_uint<32>  gray_FIFO_buf12_pw_math_gray47_1_select(gray_FIFO_buf12_cache& gray_FIFO_buf12, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gray_FIFO_buf12_pw_math_gray47_1 read pattern: { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> gray_FIFO_buf12[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 3 and 0 <= pw_math_gray46 <= 3 }
  auto value_gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6 = gray_FIFO_buf12.gray_FIFO_buf12_all_inputs_to_all_outputs.read(((1*pw_math_gray46)) - 0, ((1*pw_math_gray45)) - 0);
  return value_gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6;
  return 0;
}

// # of bundles = 2
// load_to_gray_FIFO_buf1215_write
//	gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6
inline void gray_FIFO_buf12_load_to_gray_FIFO_buf1215_write_bundle_write(hw_uint<32>& load_to_gray_FIFO_buf1215_write, gray_FIFO_buf12_cache& gray_FIFO_buf12, int root, int gray_to_gp_18_ld14, int gray_to_gp_18_ld13, int dynamic_address) {
	hw_uint<32>  gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6_res = load_to_gray_FIFO_buf1215_write.extract<0, 31>();
	gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6_write(gray_FIFO_buf12_load_to_gray_FIFO_buf1215_6_res, gray_FIFO_buf12, root, gray_to_gp_18_ld14, gray_to_gp_18_ld13, dynamic_address);
}

// pw_math_gray47_read
//	gray_FIFO_buf12_pw_math_gray47_1
inline hw_uint<32> gray_FIFO_buf12_pw_math_gray47_read_bundle_read(gray_FIFO_buf12_cache& gray_FIFO_buf12, int root, int pw_math_gray45, int pw_math_gray46, int dynamic_address) {
  // # of ports in bundle: 1
    // gray_FIFO_buf12_pw_math_gray47_1

	hw_uint<32> result;
	hw_uint<32>  gray_FIFO_buf12_pw_math_gray47_1_res = gray_FIFO_buf12_pw_math_gray47_1_select(gray_FIFO_buf12, root, pw_math_gray45, pw_math_gray46, dynamic_address);
	set_at<0, 32>(result, gray_FIFO_buf12_pw_math_gray47_1_res);
	return result;
}

// Operation logic
inline void oc_load_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, gray_cache& gray, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_oc_load_in02_p_0_c___oc_load_in01_p_0_value = in.read();
	// Produce: gray
	gray_oc_load_in03_write_bundle_write(/* arg names */in_oc_load_in02_p_0_c___oc_load_in01_p_0_value, gray, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gray_to_gp_1811(gray_cache& gray, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_18, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray
	auto gray_gray_ld9_c__gray_ld10_value = gray_load_to_gray_to_gp_1811_read_bundle_read(gray/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gray_to_gp_18
	gray_to_gp_18.write(gray_gray_ld9_c__gray_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_ld10_oc_load_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_ld10_oc_load_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_cache gray;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 3; load_to_gray_to_gp_1811[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 3 and 0 <= d2 <= 3 }
//   { oc_load_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 3 and 0 <= d2 <= 3 }
// Condition for oc_load_in03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((3 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((3 + -1*i2)) >= 0)))
//   { load_to_gray_to_gp_1811[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 3 and 0 <= d2 <= 3 }
// Condition for load_to_gray_to_gp_1811(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((3 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((3 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 3; c1 += 1)
	  for (int c2 = 0; c2 <= 3; c2 += 1) {
	    oc_load_in03(in /* buf name */, gray, 0, c1, c2);
	    load_to_gray_to_gp_1811(gray /* buf name */, gray_to_gp_18, 0, c1, c2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gray_FIFO_buf1215(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gray_to_gp_18, gray_FIFO_buf12_cache& gray_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_to_gp_18
	auto gray_to_gp_18_gray_to_gp_18_ld13_c__gray_to_gp_18_ld14_value = gray_to_gp_18.read();
	// Produce: gray_FIFO_buf12
	gray_FIFO_buf12_load_to_gray_FIFO_buf1215_write_bundle_write(/* arg names */gray_to_gp_18_gray_to_gp_18_ld13_c__gray_to_gp_18_ld14_value, gray_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gray47(gray_FIFO_buf12_cache& gray_FIFO_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gray_FIFO_buf12
	auto gray_FIFO_buf12_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value = gray_FIFO_buf12_pw_math_gray47_read_bundle_read(gray_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(gray_FIFO_buf12_pw_math_gray46_p_0_c___pw_math_gray45_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gray_to_gp_18_ld14_pw_math_gray45_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gray_to_gp_18, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gray_to_gp_18_ld14_pw_math_gray45__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gray_FIFO_buf12_cache gray_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_gray47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 3 and 0 <= d2 <= 3; load_to_gray_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 3 }
//   { pw_math_gray47[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 3 and 0 <= d2 <= 3 }
// Condition for pw_math_gray47(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((3 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((3 + -1*i2)) >= 0)))
//   { load_to_gray_FIFO_buf1215[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 3 and 0 <= d2 <= 3 }
// Condition for load_to_gray_FIFO_buf1215(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((3 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((3 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 3; c1 += 1)
	  for (int c2 = 0; c2 <= 3; c2 += 1) {
	    load_to_gray_FIFO_buf1215(gray_to_gp_18 /* buf name */, gray_FIFO_buf12, 0, c1, c2);
	    pw_math_gray47(gray_FIFO_buf12 /* buf name */, out, 0, c1, c2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void multi_kernel_design(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("multi_kernel_design_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > gray_to_gp_18;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gray_to_gp_18.values depth=500
#endif //__VIVADO_SYNTH__


  Extracted_gray_ld10_oc_load_in01_(in, gray_to_gp_18);
  Extracted_gray_to_gp_18_ld14_pw_math_gray45_(gray_to_gp_18, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void multi_kernel_design_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    multi_kernel_design(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { oc_load_in03[root = 0, oc_load_in01, oc_load_in02] -> in[oc_load_in02, oc_load_in01] : 0 <= oc_load_in01 <= 3 and 0 <= oc_load_in02 <= 3 }
const int oc_load_in03_read_pipe0_num_transfers = 16;
  // { pw_math_gray47[root = 0, pw_math_gray45, pw_math_gray46] -> out[pw_math_gray46, pw_math_gray45] : 0 <= pw_math_gray45 <= 3 and 0 <= pw_math_gray46 <= 3 }
const int pw_math_gray47_write_pipe0_num_transfers = 16;


extern "C" {

void multi_kernel_design_accel(hw_uint<32>* oc_load_in03_read_pipe0, hw_uint<32>* pw_math_gray47_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = oc_load_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_gray47_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = oc_load_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_gray47_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > oc_load_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_gray47_write_pipe0_channel;

  burst_read<32>(oc_load_in03_read_pipe0, oc_load_in03_read_pipe0_channel, oc_load_in03_read_pipe0_num_transfers*size);

  multi_kernel_design_wrapper(oc_load_in03_read_pipe0_channel, pw_math_gray47_write_pipe0_channel, size);

  burst_write<32>(pw_math_gray47_write_pipe0, pw_math_gray47_write_pipe0_channel, pw_math_gray47_write_pipe0_num_transfers*size);
}

}
extern "C" {

void multi_kernel_design_rdai(HWStream<hw_uint<32> >& oc_load_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_gray47_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = oc_load_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_gray47_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  multi_kernel_design(oc_load_in03_read_pipe0, pw_math_gray47_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

