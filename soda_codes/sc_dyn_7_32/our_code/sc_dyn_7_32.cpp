#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

struct in_cache {
  // # of banks: 0
};



inline void in_pw_math_in_oc03_0_write(hw_uint<32> & in_pw_math_in_oc03_0, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
}

inline hw_uint<32>  in_load_to_in_to_gp_21316_3_select(in_cache& in, int root, int in_ld15, int in_ld14, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_load_to_in_to_gp_21316_3 read pattern: { load_to_in_to_gp_21316[root = 0, in_ld15, in_ld14] -> in[in_ld14, in_ld15] : -1 <= in_ld15 <= 128 and -1 <= in_ld14 <= 128 }
  return 0;
}

// # of bundles = 2
// load_to_in_to_gp_21316_read
//	in_load_to_in_to_gp_21316_3
inline hw_uint<32> in_load_to_in_to_gp_21316_read_bundle_read(in_cache& in, int root, int in_ld15, int in_ld14, int dynamic_address) {
  // # of ports in bundle: 1
    // in_load_to_in_to_gp_21316_3

	hw_uint<32> result;
	hw_uint<32>  in_load_to_in_to_gp_21316_3_res = in_load_to_in_to_gp_21316_3_select(in, root, in_ld15, in_ld14, dynamic_address);
	set_at<0, 32>(result, in_load_to_in_to_gp_21316_3_res);
	return result;
}

// pw_math_in_oc03_write
//	in_pw_math_in_oc03_0
inline void in_pw_math_in_oc03_write_bundle_write(hw_uint<32>& pw_math_in_oc03_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc03_0_res = pw_math_in_oc03_write.extract<0, 31>();
	in_pw_math_in_oc03_0_write(in_pw_math_in_oc03_0_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void pw_math_in_oc03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_oc, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_pw_math_in_oc02_c__pw_math_in_oc01_value = in_oc.read();
	auto compute_result = id(in_oc_pw_math_in_oc02_c__pw_math_in_oc01_value);
	// Produce: in
	in_pw_math_in_oc03_write_bundle_write(/* arg names */compute_result, in, root, pw_math_in_oc01, pw_math_in_oc02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_to_gp_21316(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_to_gp_213, int root, int in_ld15, int in_ld14) {
  // Dynamic address computation

	// Consume: in
	auto in_in_ld14_c__in_ld15_value = in_load_to_in_to_gp_21316_read_bundle_read(in/* source_delay */, root, in_ld15, in_ld14, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_to_gp_213
	in_to_gp_213.write(in_in_ld14_c__in_ld15_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_ld15_pw_math_in_oc01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_213) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_ld15_pw_math_in_oc01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_in_to_gp_21316[root = 0, in_ld15, in_ld14] -> [in_ld15, in_ld14, 1] : -1 <= in_ld15 <= 128 and -1 <= in_ld14 <= 128; pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
//   { load_to_in_to_gp_21316[root = 0, in_ld15, in_ld14] -> [in_ld15, in_ld14, 1] : -1 <= in_ld15 <= 128 and -1 <= in_ld14 <= 128 }
// Condition for load_to_in_to_gp_21316(((-1 + i2 == 0) && (1 + i0 >= 0) && (128 - i0 >= 0) && (1 + i1 >= 0) && (128 - i1 >= 0)))
//   { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
// Condition for pw_math_in_oc03(((i2 == 0) && (1 + i0 >= 0) && (128 - i0 >= 0) && (1 + i1 >= 0) && (128 - i1 >= 0)))

  /*
for (int c0 = -1; c0 <= 128; c0 += 1)
  for (int c1 = -1; c1 <= 128; c1 += 1) {
    pw_math_in_oc03(0, c0, c1);
    load_to_in_to_gp_21316(0, c0, c1);
  }

  */
	for (int c0 = -1; c0 <= 128; c0 += 1)
	  for (int c1 = -1; c1 <= 128; c1 += 1) {
	    pw_math_in_oc03(in_oc /* buf name */, in, 0, c0, c1);
	    load_to_in_to_gp_21316(in /* buf name */, in_to_gp_213, 0, c0, c1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

struct stencil_0_FIFO_buf25_cache {
  // # of banks: 0
};



inline void stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_2_write(hw_uint<32> & stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_2, stencil_0_FIFO_buf25_cache& stencil_0_FIFO_buf25, int root, int stencil_0_to_gp_117_ld27, int stencil_0_to_gp_117_ld26, int dynamic_address) {
}

inline hw_uint<32>  stencil_0_FIFO_buf25_pw_math_stencil_0912_1_select(stencil_0_FIFO_buf25_cache& stencil_0_FIFO_buf25, int root, int pw_math_stencil_0910, int pw_math_stencil_0911, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_FIFO_buf25_pw_math_stencil_0912_1 read pattern: { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> stencil_0_FIFO_buf25[pw_math_stencil_0911, pw_math_stencil_0910] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
  return 0;
}

// # of bundles = 2
// load_to_stencil_0_FIFO_buf2528_write
//	stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_2
inline void stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_write_bundle_write(hw_uint<32>& load_to_stencil_0_FIFO_buf2528_write, stencil_0_FIFO_buf25_cache& stencil_0_FIFO_buf25, int root, int stencil_0_to_gp_117_ld27, int stencil_0_to_gp_117_ld26, int dynamic_address) {
	hw_uint<32>  stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_2_res = load_to_stencil_0_FIFO_buf2528_write.extract<0, 31>();
	stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_2_write(stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_2_res, stencil_0_FIFO_buf25, root, stencil_0_to_gp_117_ld27, stencil_0_to_gp_117_ld26, dynamic_address);
}

// pw_math_stencil_0912_read
//	stencil_0_FIFO_buf25_pw_math_stencil_0912_1
inline hw_uint<32> stencil_0_FIFO_buf25_pw_math_stencil_0912_read_bundle_read(stencil_0_FIFO_buf25_cache& stencil_0_FIFO_buf25, int root, int pw_math_stencil_0910, int pw_math_stencil_0911, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_0_FIFO_buf25_pw_math_stencil_0912_1

	hw_uint<32> result;
	hw_uint<32>  stencil_0_FIFO_buf25_pw_math_stencil_0912_1_res = stencil_0_FIFO_buf25_pw_math_stencil_0912_1_select(stencil_0_FIFO_buf25, root, pw_math_stencil_0910, pw_math_stencil_0911, dynamic_address);
	set_at<0, 32>(result, stencil_0_FIFO_buf25_pw_math_stencil_0912_1_res);
	return result;
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void load_to_stencil_0_FIFO_buf2528(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_0_to_gp_117, stencil_0_FIFO_buf25_cache& stencil_0_FIFO_buf25, int root, int stencil_0_to_gp_117_ld27, int stencil_0_to_gp_117_ld26) {
  // Dynamic address computation

	// Consume: stencil_0_to_gp_117
	auto stencil_0_to_gp_117_stencil_0_to_gp_117_ld26_c__stencil_0_to_gp_117_ld27_value = stencil_0_to_gp_117.read();
	// Produce: stencil_0_FIFO_buf25
	stencil_0_FIFO_buf25_load_to_stencil_0_FIFO_buf2528_write_bundle_write(/* arg names */stencil_0_to_gp_117_stencil_0_to_gp_117_ld26_c__stencil_0_to_gp_117_ld27_value, stencil_0_FIFO_buf25, root, stencil_0_to_gp_117_ld27, stencil_0_to_gp_117_ld26, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_stencil_0912(stencil_0_FIFO_buf25_cache& stencil_0_FIFO_buf25, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_stencil_0910, int pw_math_stencil_0911) {
  // Dynamic address computation

	// Consume: stencil_0_FIFO_buf25
	auto stencil_0_FIFO_buf25_pw_math_stencil_0911_c__pw_math_stencil_0910_value = stencil_0_FIFO_buf25_pw_math_stencil_0912_read_bundle_read(stencil_0_FIFO_buf25/* source_delay */, root, pw_math_stencil_0910, pw_math_stencil_0911, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(stencil_0_FIFO_buf25_pw_math_stencil_0911_c__pw_math_stencil_0910_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_pw_math_stencil_0910_stencil_0_to_gp_117_ld27_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_0_to_gp_117, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_pw_math_stencil_0910_stencil_0_to_gp_117_ld27__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stencil_0_FIFO_buf25_cache stencil_0_FIFO_buf25;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> [1 + pw_math_stencil_0910, 1 + pw_math_stencil_0911, 6] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127; load_to_stencil_0_FIFO_buf2528[root = 0, stencil_0_to_gp_117_ld27, stencil_0_to_gp_117_ld26] -> [1 + stencil_0_to_gp_117_ld27, 1 + stencil_0_to_gp_117_ld26, 5] : 0 <= stencil_0_to_gp_117_ld27 <= 127 and 0 <= stencil_0_to_gp_117_ld26 <= 127 }
//   { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> [1 + pw_math_stencil_0910, 1 + pw_math_stencil_0911, 6] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
// Condition for pw_math_stencil_0912(((-6 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-1 + i1 >= 0) && (128 - i1 >= 0)))
//   { load_to_stencil_0_FIFO_buf2528[root = 0, stencil_0_to_gp_117_ld27, stencil_0_to_gp_117_ld26] -> [1 + stencil_0_to_gp_117_ld27, 1 + stencil_0_to_gp_117_ld26, 5] : 0 <= stencil_0_to_gp_117_ld27 <= 127 and 0 <= stencil_0_to_gp_117_ld26 <= 127 }
// Condition for load_to_stencil_0_FIFO_buf2528(((-5 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-1 + i1 >= 0) && (128 - i1 >= 0)))

  /*
for (int c0 = 1; c0 <= 128; c0 += 1)
  for (int c1 = 1; c1 <= 128; c1 += 1) {
    load_to_stencil_0_FIFO_buf2528(0, c0 - 1, c1 - 1);
    pw_math_stencil_0912(0, c0 - 1, c1 - 1);
  }

  */
	for (int c0 = 1; c0 <= 128; c0 += 1)
	  for (int c1 = 1; c1 <= 128; c1 += 1) {
	    load_to_stencil_0_FIFO_buf2528(stencil_0_to_gp_117 /* buf name */, stencil_0_FIFO_buf25, 0, c0 - 1, c1 - 1);
	    pw_math_stencil_0912(stencil_0_FIFO_buf25 /* buf name */, out, 0, c0 - 1, c1 - 1);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

struct in_FIFO_buf21_cache {
  // # of banks: 0
};



inline void in_FIFO_buf21_load_to_in_FIFO_buf2124_2_write(hw_uint<32> & in_FIFO_buf21_load_to_in_FIFO_buf2124_2, in_FIFO_buf21_cache& in_FIFO_buf21, int root, int in_to_gp_213_ld23, int in_to_gp_213_ld22, int dynamic_address) {
}

inline hw_uint<32>  in_FIFO_buf21_conv8_10_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_10 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[stencil_05, 1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_11_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_11 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[1 + stencil_05, -1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_12_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_12 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[1 + stencil_05, stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_13_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_13 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[1 + stencil_05, 1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_5_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_5 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[-1 + stencil_05, -1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_6_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_6 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[-1 + stencil_05, stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_7_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_7 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[-1 + stencil_05, 1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_8_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_8 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[stencil_05, -1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

inline hw_uint<32>  in_FIFO_buf21_conv8_9_select(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf21_conv8_9 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in_FIFO_buf21[stencil_05, stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  return 0;
}

// # of bundles = 2
// conv8_read
//	in_FIFO_buf21_conv8_5
//	in_FIFO_buf21_conv8_6
//	in_FIFO_buf21_conv8_7
//	in_FIFO_buf21_conv8_8
//	in_FIFO_buf21_conv8_9
//	in_FIFO_buf21_conv8_10
//	in_FIFO_buf21_conv8_11
//	in_FIFO_buf21_conv8_12
//	in_FIFO_buf21_conv8_13
inline hw_uint<288> in_FIFO_buf21_conv8_read_bundle_read(in_FIFO_buf21_cache& in_FIFO_buf21, int root, int stencil_04, int stencil_05, int dynamic_address) {
  // # of ports in bundle: 9
    // in_FIFO_buf21_conv8_5
    // in_FIFO_buf21_conv8_6
    // in_FIFO_buf21_conv8_7
    // in_FIFO_buf21_conv8_8
    // in_FIFO_buf21_conv8_9
    // in_FIFO_buf21_conv8_10
    // in_FIFO_buf21_conv8_11
    // in_FIFO_buf21_conv8_12
    // in_FIFO_buf21_conv8_13

	hw_uint<288> result;
	hw_uint<32>  in_FIFO_buf21_conv8_5_res = in_FIFO_buf21_conv8_5_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<0, 288>(result, in_FIFO_buf21_conv8_5_res);
	hw_uint<32>  in_FIFO_buf21_conv8_6_res = in_FIFO_buf21_conv8_6_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<32, 288>(result, in_FIFO_buf21_conv8_6_res);
	hw_uint<32>  in_FIFO_buf21_conv8_7_res = in_FIFO_buf21_conv8_7_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<64, 288>(result, in_FIFO_buf21_conv8_7_res);
	hw_uint<32>  in_FIFO_buf21_conv8_8_res = in_FIFO_buf21_conv8_8_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<96, 288>(result, in_FIFO_buf21_conv8_8_res);
	hw_uint<32>  in_FIFO_buf21_conv8_9_res = in_FIFO_buf21_conv8_9_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<128, 288>(result, in_FIFO_buf21_conv8_9_res);
	hw_uint<32>  in_FIFO_buf21_conv8_10_res = in_FIFO_buf21_conv8_10_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<160, 288>(result, in_FIFO_buf21_conv8_10_res);
	hw_uint<32>  in_FIFO_buf21_conv8_11_res = in_FIFO_buf21_conv8_11_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<192, 288>(result, in_FIFO_buf21_conv8_11_res);
	hw_uint<32>  in_FIFO_buf21_conv8_12_res = in_FIFO_buf21_conv8_12_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<224, 288>(result, in_FIFO_buf21_conv8_12_res);
	hw_uint<32>  in_FIFO_buf21_conv8_13_res = in_FIFO_buf21_conv8_13_select(in_FIFO_buf21, root, stencil_04, stencil_05, dynamic_address);
	set_at<256, 288>(result, in_FIFO_buf21_conv8_13_res);
	return result;
}

// load_to_in_FIFO_buf2124_write
//	in_FIFO_buf21_load_to_in_FIFO_buf2124_2
inline void in_FIFO_buf21_load_to_in_FIFO_buf2124_write_bundle_write(hw_uint<32>& load_to_in_FIFO_buf2124_write, in_FIFO_buf21_cache& in_FIFO_buf21, int root, int in_to_gp_213_ld23, int in_to_gp_213_ld22, int dynamic_address) {
	hw_uint<32>  in_FIFO_buf21_load_to_in_FIFO_buf2124_2_res = load_to_in_FIFO_buf2124_write.extract<0, 31>();
	in_FIFO_buf21_load_to_in_FIFO_buf2124_2_write(in_FIFO_buf21_load_to_in_FIFO_buf2124_2_res, in_FIFO_buf21, root, in_to_gp_213_ld23, in_to_gp_213_ld22, dynamic_address);
}

struct stencil_0_cache {
  // # of banks: 0
};



inline void stencil_0_conv8_4_write(hw_uint<32> & stencil_0_conv8_4, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
}

inline hw_uint<32>  stencil_0_load_to_stencil_0_to_gp_11720_1_select(stencil_0_cache& stencil_0, int root, int stencil_0_ld19, int stencil_0_ld18, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_load_to_stencil_0_to_gp_11720_1 read pattern: { load_to_stencil_0_to_gp_11720[root = 0, stencil_0_ld19, stencil_0_ld18] -> stencil_0[stencil_0_ld18, stencil_0_ld19] : 0 <= stencil_0_ld19 <= 127 and 0 <= stencil_0_ld18 <= 127 }
  return 0;
}

// # of bundles = 2
// conv8_write
//	stencil_0_conv8_4
inline void stencil_0_conv8_write_bundle_write(hw_uint<32>& conv8_write, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
	hw_uint<32>  stencil_0_conv8_4_res = conv8_write.extract<0, 31>();
	stencil_0_conv8_4_write(stencil_0_conv8_4_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
}

// load_to_stencil_0_to_gp_11720_read
//	stencil_0_load_to_stencil_0_to_gp_11720_1
inline hw_uint<32> stencil_0_load_to_stencil_0_to_gp_11720_read_bundle_read(stencil_0_cache& stencil_0, int root, int stencil_0_ld19, int stencil_0_ld18, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_0_load_to_stencil_0_to_gp_11720_1

	hw_uint<32> result;
	hw_uint<32>  stencil_0_load_to_stencil_0_to_gp_11720_1_res = stencil_0_load_to_stencil_0_to_gp_11720_1_select(stencil_0, root, stencil_0_ld19, stencil_0_ld18, dynamic_address);
	set_at<0, 32>(result, stencil_0_load_to_stencil_0_to_gp_11720_1_res);
	return result;
}

// Total re-use buffer capacity: 0 bits


// Operation logic
inline void load_to_in_FIFO_buf2124(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_to_gp_213, in_FIFO_buf21_cache& in_FIFO_buf21, int root, int in_to_gp_213_ld23, int in_to_gp_213_ld22) {
  // Dynamic address computation

	// Consume: in_to_gp_213
	auto in_to_gp_213_in_to_gp_213_ld22_c__in_to_gp_213_ld23_value = in_to_gp_213.read();
	// Produce: in_FIFO_buf21
	in_FIFO_buf21_load_to_in_FIFO_buf2124_write_bundle_write(/* arg names */in_to_gp_213_in_to_gp_213_ld22_c__in_to_gp_213_ld23_value, in_FIFO_buf21, root, in_to_gp_213_ld23, in_to_gp_213_ld22, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void conv8(in_FIFO_buf21_cache& in_FIFO_buf21, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05) {
  // Dynamic address computation

	// Consume: in_FIFO_buf21
	auto in_FIFO_buf21_stencil_05__p___m_1_c__stencil_04__p___m_1_value = in_FIFO_buf21_conv8_read_bundle_read(in_FIFO_buf21/* source_delay */, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(in_FIFO_buf21_stencil_05__p___m_1_c__stencil_04__p___m_1_value);
	// Produce: stencil_0
	stencil_0_conv8_write_bundle_write(/* arg names */compute_result, stencil_0, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stencil_0_to_gp_11720(stencil_0_cache& stencil_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */stencil_0_to_gp_117, int root, int stencil_0_ld19, int stencil_0_ld18) {
  // Dynamic address computation

	// Consume: stencil_0
	auto stencil_0_stencil_0_ld18_c__stencil_0_ld19_value = stencil_0_load_to_stencil_0_to_gp_11720_read_bundle_read(stencil_0/* source_delay */, root, stencil_0_ld19, stencil_0_ld18, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stencil_0_to_gp_117
	stencil_0_to_gp_117.write(stencil_0_stencil_0_ld18_c__stencil_0_ld19_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_213_ld23_stencil_04_stencil_0_ld19_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_to_gp_213, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */stencil_0_to_gp_117) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_to_gp_213_ld23_stencil_04_stencil_0_ld19__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf21_cache in_FIFO_buf21;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_0_cache stencil_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 3] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127; load_to_in_FIFO_buf2124[root = 0, in_to_gp_213_ld23, in_to_gp_213_ld22] -> [in_to_gp_213_ld23, in_to_gp_213_ld22, 2] : -1 <= in_to_gp_213_ld23 <= 128 and -1 <= in_to_gp_213_ld22 <= 128; load_to_stencil_0_to_gp_11720[root = 0, stencil_0_ld19, stencil_0_ld18] -> [1 + stencil_0_ld19, 1 + stencil_0_ld18, 4] : 0 <= stencil_0_ld19 <= 127 and 0 <= stencil_0_ld18 <= 127 }
//   { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 3] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
// Condition for conv8(((-3 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-1 + i1 >= 0) && (128 - i1 >= 0)))
//   { load_to_in_FIFO_buf2124[root = 0, in_to_gp_213_ld23, in_to_gp_213_ld22] -> [in_to_gp_213_ld23, in_to_gp_213_ld22, 2] : -1 <= in_to_gp_213_ld23 <= 128 and -1 <= in_to_gp_213_ld22 <= 128 }
// Condition for load_to_in_FIFO_buf2124(((-2 + i2 == 0) && (1 + i0 >= 0) && (128 - i0 >= 0) && (1 + i1 >= 0) && (128 - i1 >= 0)))
//   { load_to_stencil_0_to_gp_11720[root = 0, stencil_0_ld19, stencil_0_ld18] -> [1 + stencil_0_ld19, 1 + stencil_0_ld18, 4] : 0 <= stencil_0_ld19 <= 127 and 0 <= stencil_0_ld18 <= 127 }
// Condition for load_to_stencil_0_to_gp_11720(((-4 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-1 + i1 >= 0) && (128 - i1 >= 0)))

  /*
for (int c0 = -1; c0 <= 128; c0 += 1)
  for (int c1 = -1; c1 <= 128; c1 += 1) {
    load_to_in_FIFO_buf2124(0, c0, c1);
    if (c0 >= 1 && c1 >= 1) {
      conv8(0, c0 - 1, c1 - 1);
      load_to_stencil_0_to_gp_11720(0, c0 - 1, c1 - 1);
    }
  }

  */
	for (int c0 = -1; c0 <= 128; c0 += 1)
	  for (int c1 = -1; c1 <= 128; c1 += 1) {
	    load_to_in_FIFO_buf2124(in_to_gp_213 /* buf name */, in_FIFO_buf21, 0, c0, c1);
	    if (c0 >= 1 && c1 >= 1) {
	      conv8(in_FIFO_buf21 /* buf name */, stencil_0, 0, c0 - 1, c1 - 1);
	      load_to_stencil_0_to_gp_11720(stencil_0 /* buf name */, stencil_0_to_gp_117, 0, c0 - 1, c1 - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void sc_dyn_7_32(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_dyn_7_32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > in_to_gp_213;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_213.values depth=1
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stencil_0_to_gp_117;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stencil_0_to_gp_117.values depth=1
#endif //__VIVADO_SYNTH__


  Extracted_in_ld15_pw_math_in_oc01_(in_oc, in_to_gp_213);
  Extracted_in_to_gp_213_ld23_stencil_04_stencil_0_ld19_(in_to_gp_213, stencil_0_to_gp_117);
  Extracted_pw_math_stencil_0910_stencil_0_to_gp_117_ld27_(stencil_0_to_gp_117, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_dyn_7_32_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_dyn_7_32(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[pw_math_in_oc02, pw_math_in_oc01] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
const int pw_math_in_oc03_read_pipe0_num_transfers = 16900;
  // { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> out[pw_math_stencil_0911, pw_math_stencil_0910] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
const int pw_math_stencil_0912_write_pipe0_num_transfers = 16384;


extern "C" {

void sc_dyn_7_32_accel(hw_uint<32>* pw_math_in_oc03_read_pipe0, hw_uint<32>* pw_math_stencil_0912_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_stencil_0912_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_stencil_0912_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in_oc03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_stencil_0912_write_pipe0_channel;

  burst_read<32>(pw_math_in_oc03_read_pipe0, pw_math_in_oc03_read_pipe0_channel, pw_math_in_oc03_read_pipe0_num_transfers*size);

  sc_dyn_7_32_wrapper(pw_math_in_oc03_read_pipe0_channel, pw_math_stencil_0912_write_pipe0_channel, size);

  burst_write<32>(pw_math_stencil_0912_write_pipe0, pw_math_stencil_0912_write_pipe0_channel, pw_math_stencil_0912_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_dyn_7_32_rdai(HWStream<hw_uint<32> >& pw_math_in_oc03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_stencil_0912_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_stencil_0912_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_dyn_7_32(pw_math_in_oc03_read_pipe0, pw_math_stencil_0912_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

