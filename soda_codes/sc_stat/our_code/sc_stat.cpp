#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

struct in_pw_math_in_oc03_2_merged_banks_9_cache {
	// RAM Box: {[-1, 128], [-1, 128]}
	// Capacity: 263
	// # of read delays: 9
  // 0, 1, 2, 130, 131, 132, 260, 261, 262
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 127> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 127> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_130() {
		return f6;
	}

	inline hw_uint<32>  peek_131() {
		return f8;
	}

	inline hw_uint<32>  peek_132() {
		return f10;
	}

	inline hw_uint<32>  peek_259() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_260() {
		return f12;
	}

	inline hw_uint<32>  peek_261() {
		return f14;
	}

	inline hw_uint<32>  peek_262() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f5.push(f4);
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

struct in_cache {
  // # of banks: 1
  in_pw_math_in_oc03_2_merged_banks_9_cache in_pw_math_in_oc03_2_merged_banks_9;
};



inline void in_pw_math_in_oc03_2_write(hw_uint<32> & in_pw_math_in_oc03_2, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
  in.in_pw_math_in_oc03_2_merged_banks_9.push(in_pw_math_in_oc03_2);
}

inline hw_uint<32>  in_conv8_10_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_10 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[stencil_05, 1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_11_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_11 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[1 + stencil_05, -1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_260();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_12_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_12 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[1 + stencil_05, stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_130();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_13_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_13 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[1 + stencil_05, 1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_5_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_5 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[-1 + stencil_05, -1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_262();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_6_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_6 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[-1 + stencil_05, stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_132();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_7_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_7 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[-1 + stencil_05, 1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_2();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_8_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_8 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[stencil_05, -1 + stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_261();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_9_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_9 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[stencil_05, stencil_04] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_131();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

// # of bundles = 2
// conv8_read
//	in_conv8_5
//	in_conv8_6
//	in_conv8_7
//	in_conv8_8
//	in_conv8_9
//	in_conv8_10
//	in_conv8_11
//	in_conv8_12
//	in_conv8_13
inline hw_uint<288> in_conv8_read_bundle_read(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
  // # of ports in bundle: 9
    // in_conv8_5
    // in_conv8_6
    // in_conv8_7
    // in_conv8_8
    // in_conv8_9
    // in_conv8_10
    // in_conv8_11
    // in_conv8_12
    // in_conv8_13

	hw_uint<288> result;
	hw_uint<32>  in_conv8_5_res = in_conv8_5_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<0, 288>(result, in_conv8_5_res);
	hw_uint<32>  in_conv8_6_res = in_conv8_6_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<32, 288>(result, in_conv8_6_res);
	hw_uint<32>  in_conv8_7_res = in_conv8_7_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<64, 288>(result, in_conv8_7_res);
	hw_uint<32>  in_conv8_8_res = in_conv8_8_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<96, 288>(result, in_conv8_8_res);
	hw_uint<32>  in_conv8_9_res = in_conv8_9_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<128, 288>(result, in_conv8_9_res);
	hw_uint<32>  in_conv8_10_res = in_conv8_10_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<160, 288>(result, in_conv8_10_res);
	hw_uint<32>  in_conv8_11_res = in_conv8_11_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<192, 288>(result, in_conv8_11_res);
	hw_uint<32>  in_conv8_12_res = in_conv8_12_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<224, 288>(result, in_conv8_12_res);
	hw_uint<32>  in_conv8_13_res = in_conv8_13_select(in, root, stencil_04, stencil_05, dynamic_address);
	set_at<256, 288>(result, in_conv8_13_res);
	return result;
}

// pw_math_in_oc03_write
//	in_pw_math_in_oc03_2
inline void in_pw_math_in_oc03_write_bundle_write(hw_uint<32>& pw_math_in_oc03_write, in_cache& in, int root, int pw_math_in_oc01, int pw_math_in_oc02, int dynamic_address) {
	hw_uint<32>  in_pw_math_in_oc03_2_res = pw_math_in_oc03_write.extract<0, 31>();
	in_pw_math_in_oc03_2_write(in_pw_math_in_oc03_2_res, in, root, pw_math_in_oc01, pw_math_in_oc02, dynamic_address);
}

struct stencil_0_conv8_4_to_stencil_0_pw_math_stencil_0912_1_cache {
	// RAM Box: {[0, 127], [0, 127]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<32> , 1> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct stencil_0_cache {
  // # of banks: 1
  stencil_0_conv8_4_to_stencil_0_pw_math_stencil_0912_1_cache stencil_0_conv8_4_to_stencil_0_pw_math_stencil_0912_1;
};



inline void stencil_0_conv8_4_write(hw_uint<32> & stencil_0_conv8_4, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_conv8_4_to_stencil_0_pw_math_stencil_0912_1.push(stencil_0_conv8_4);
}

inline hw_uint<32>  stencil_0_pw_math_stencil_0912_1_select(stencil_0_cache& stencil_0, int root, int pw_math_stencil_0910, int pw_math_stencil_0911, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_pw_math_stencil_0912_1 read pattern: { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> stencil_0[pw_math_stencil_0911, pw_math_stencil_0910] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
  // Read schedule : { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> [1 + pw_math_stencil_0910, 1 + pw_math_stencil_0911, 2] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_to_stencil_0_pw_math_stencil_0912_1.peek(/* one reader or all rams */ 0);
  return value_stencil_0_conv8_4;
  return 0;
}

// # of bundles = 2
// conv8_write
//	stencil_0_conv8_4
inline void stencil_0_conv8_write_bundle_write(hw_uint<32>& conv8_write, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
	hw_uint<32>  stencil_0_conv8_4_res = conv8_write.extract<0, 31>();
	stencil_0_conv8_4_write(stencil_0_conv8_4_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
}

// pw_math_stencil_0912_read
//	stencil_0_pw_math_stencil_0912_1
inline hw_uint<32> stencil_0_pw_math_stencil_0912_read_bundle_read(stencil_0_cache& stencil_0, int root, int pw_math_stencil_0910, int pw_math_stencil_0911, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_0_pw_math_stencil_0912_1

	hw_uint<32> result;
	hw_uint<32>  stencil_0_pw_math_stencil_0912_1_res = stencil_0_pw_math_stencil_0912_1_select(stencil_0, root, pw_math_stencil_0910, pw_math_stencil_0911, dynamic_address);
	set_at<0, 32>(result, stencil_0_pw_math_stencil_0912_1_res);
	return result;
}

// Total re-use buffer capacity: 8384 bits


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

inline void conv8(in_cache& in, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05) {
  // Dynamic address computation

	// Consume: in
	auto in_stencil_05__p___m_1_c__stencil_04__p___m_1_value = in_conv8_read_bundle_read(in/* source_delay */, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(in_stencil_05__p___m_1_c__stencil_04__p___m_1_value);
	// Produce: stencil_0
	stencil_0_conv8_write_bundle_write(/* arg names */compute_result, stencil_0, root, stencil_04, stencil_05, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_stencil_0912(stencil_0_cache& stencil_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_stencil_0910, int pw_math_stencil_0911) {
  // Dynamic address computation

	// Consume: stencil_0
	auto stencil_0_pw_math_stencil_0911_c__pw_math_stencil_0910_value = stencil_0_pw_math_stencil_0912_read_bundle_read(stencil_0/* source_delay */, root, pw_math_stencil_0910, pw_math_stencil_0911, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(stencil_0_pw_math_stencil_0911_c__pw_math_stencil_0910_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sc_stat(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_stat_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_0_cache stencil_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127; pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128; pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> [1 + pw_math_stencil_0910, 1 + pw_math_stencil_0911, 2] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
//   { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : 0 <= stencil_04 <= 127 and 0 <= stencil_05 <= 127 }
// Condition for conv8(((-1 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-1 + i1 >= 0) && (128 - i1 >= 0)))
//   { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
// Condition for pw_math_in_oc03(((i2 == 0) && (1 + i0 >= 0) && (128 - i0 >= 0) && (1 + i1 >= 0) && (128 - i1 >= 0)))
//   { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> [1 + pw_math_stencil_0910, 1 + pw_math_stencil_0911, 2] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
// Condition for pw_math_stencil_0912(((-2 + i2 == 0) && (-1 + i0 >= 0) && (128 - i0 >= 0) && (-1 + i1 >= 0) && (128 - i1 >= 0)))

  /*
for (int c0 = -1; c0 <= 128; c0 += 1)
  for (int c1 = -1; c1 <= 128; c1 += 1) {
    pw_math_in_oc03(0, c0, c1);
    if (c0 >= 1 && c1 >= 1) {
      conv8(0, c0 - 1, c1 - 1);
      pw_math_stencil_0912(0, c0 - 1, c1 - 1);
    }
  }

  */
	for (int c0 = -1; c0 <= 128; c0 += 1)
	  for (int c1 = -1; c1 <= 128; c1 += 1) {
	    pw_math_in_oc03(in_oc /* buf name */, in, 0, c0, c1);
	    if (c0 >= 1 && c1 >= 1) {
	      conv8(in /* buf name */, stencil_0, 0, c0 - 1, c1 - 1);
	      pw_math_stencil_0912(stencil_0 /* buf name */, out, 0, c0 - 1, c1 - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_stat_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_stat(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[pw_math_in_oc02, pw_math_in_oc01] : -1 <= pw_math_in_oc01 <= 128 and -1 <= pw_math_in_oc02 <= 128 }
const int pw_math_in_oc03_read_pipe0_num_transfers = 16900;
  // { pw_math_stencil_0912[root = 0, pw_math_stencil_0910, pw_math_stencil_0911] -> out[pw_math_stencil_0911, pw_math_stencil_0910] : 0 <= pw_math_stencil_0910 <= 127 and 0 <= pw_math_stencil_0911 <= 127 }
const int pw_math_stencil_0912_write_pipe0_num_transfers = 16384;


extern "C" {

void sc_stat_accel(hw_uint<32>* pw_math_in_oc03_read_pipe0, hw_uint<32>* pw_math_stencil_0912_write_pipe0, const int size) { 
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

  sc_stat_wrapper(pw_math_in_oc03_read_pipe0_channel, pw_math_stencil_0912_write_pipe0_channel, size);

  burst_write<32>(pw_math_stencil_0912_write_pipe0, pw_math_stencil_0912_write_pipe0_channel, pw_math_stencil_0912_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_stat_rdai(HWStream<hw_uint<32> >& pw_math_in_oc03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_stencil_0912_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_stencil_0912_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_stat(pw_math_in_oc03_read_pipe0, pw_math_stencil_0912_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

