#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: clockwork_standard_compute_units.h
#include "clockwork_standard_compute_units.h"

struct in_pw_math_in_oc03_2_merged_banks_9_cache {
	// RAM Box: {[-4, 131], [-4, 131]}
	// Capacity: 275
	// # of read delays: 9
  // 0, 1, 2, 136, 137, 138, 272, 273, 274
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 133> f11;
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

	inline hw_uint<32>  peek_135() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_136() {
		return f6;
	}

	inline hw_uint<32>  peek_137() {
		return f8;
	}

	inline hw_uint<32>  peek_138() {
		return f10;
	}

	inline hw_uint<32>  peek_271() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_272() {
		return f12;
	}

	inline hw_uint<32>  peek_273() {
		return f14;
	}

	inline hw_uint<32>  peek_274() {
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
    // cap: 1 reading from capacity: 133
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
  // in_conv8_10 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[stencil_05, 1 + stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_1();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_11_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_11 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[1 + stencil_05, -1 + stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_272();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_12_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_12 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[1 + stencil_05, stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_136();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_13_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_13 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[1 + stencil_05, 1 + stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_0();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_5_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_5 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[-1 + stencil_05, -1 + stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_274();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_6_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_6 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[-1 + stencil_05, stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_138();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_7_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_7 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[-1 + stencil_05, 1 + stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_2();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_8_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_8 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[stencil_05, -1 + stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_273();
  return value_in_pw_math_in_oc03_2;
  return 0;
}

inline hw_uint<32>  in_conv8_9_select(in_cache& in, int root, int stencil_04, int stencil_05, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_conv8_9 read pattern: { conv8[root = 0, stencil_04, stencil_05] -> in[stencil_05, stencil_04] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Read schedule : { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  // Write schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
  auto value_in_pw_math_in_oc03_2 = in.in_pw_math_in_oc03_2_merged_banks_9.peek_137();
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

struct stencil_0_conv8_4_merged_banks_9_cache {
	// RAM Box: {[-3, 130], [-3, 130]}
	// Capacity: 271
	// # of read delays: 9
  // 0, 1, 2, 134, 135, 136, 268, 269, 270
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 131> f11;
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

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_134() {
		return f6;
	}

	inline hw_uint<32>  peek_135() {
		return f8;
	}

	inline hw_uint<32>  peek_136() {
		return f10;
	}

	inline hw_uint<32>  peek_267() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_268() {
		return f12;
	}

	inline hw_uint<32>  peek_269() {
		return f14;
	}

	inline hw_uint<32>  peek_270() {
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
    // cap: 1 reading from capacity: 131
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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

struct stencil_0_cache {
  // # of banks: 1
  stencil_0_conv8_4_merged_banks_9_cache stencil_0_conv8_4_merged_banks_9;
};



inline void stencil_0_conv8_4_write(hw_uint<32> & stencil_0_conv8_4, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
  stencil_0.stencil_0_conv8_4_merged_banks_9.push(stencil_0_conv8_4);
}

inline hw_uint<32>  stencil_0_conv13_35_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_35 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[-1 + stencil_110, -1 + stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_270();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_36_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_36 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[-1 + stencil_110, stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_136();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_37_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_37 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[-1 + stencil_110, 1 + stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_2();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_38_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_38 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[stencil_110, -1 + stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_269();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_39_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_39 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[stencil_110, stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_135();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_40_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_40 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[stencil_110, 1 + stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_1();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_41_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_41 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[1 + stencil_110, -1 + stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_268();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_42_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_42 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[1 + stencil_110, stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_134();
  return value_stencil_0_conv8_4;
  return 0;
}

inline hw_uint<32>  stencil_0_conv13_43_select(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_0_conv13_43 read pattern: { conv13[root = 0, stencil_19, stencil_110] -> stencil_0[1 + stencil_110, 1 + stencil_19] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Read schedule : { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  // Write schedule: { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
  auto value_stencil_0_conv8_4 = stencil_0.stencil_0_conv8_4_merged_banks_9.peek_0();
  return value_stencil_0_conv8_4;
  return 0;
}

// # of bundles = 2
// conv13_read
//	stencil_0_conv13_35
//	stencil_0_conv13_36
//	stencil_0_conv13_37
//	stencil_0_conv13_38
//	stencil_0_conv13_39
//	stencil_0_conv13_40
//	stencil_0_conv13_41
//	stencil_0_conv13_42
//	stencil_0_conv13_43
inline hw_uint<288> stencil_0_conv13_read_bundle_read(stencil_0_cache& stencil_0, int root, int stencil_19, int stencil_110, int dynamic_address) {
  // # of ports in bundle: 9
    // stencil_0_conv13_35
    // stencil_0_conv13_36
    // stencil_0_conv13_37
    // stencil_0_conv13_38
    // stencil_0_conv13_39
    // stencil_0_conv13_40
    // stencil_0_conv13_41
    // stencil_0_conv13_42
    // stencil_0_conv13_43

	hw_uint<288> result;
	hw_uint<32>  stencil_0_conv13_35_res = stencil_0_conv13_35_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<0, 288>(result, stencil_0_conv13_35_res);
	hw_uint<32>  stencil_0_conv13_36_res = stencil_0_conv13_36_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<32, 288>(result, stencil_0_conv13_36_res);
	hw_uint<32>  stencil_0_conv13_37_res = stencil_0_conv13_37_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<64, 288>(result, stencil_0_conv13_37_res);
	hw_uint<32>  stencil_0_conv13_38_res = stencil_0_conv13_38_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<96, 288>(result, stencil_0_conv13_38_res);
	hw_uint<32>  stencil_0_conv13_39_res = stencil_0_conv13_39_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<128, 288>(result, stencil_0_conv13_39_res);
	hw_uint<32>  stencil_0_conv13_40_res = stencil_0_conv13_40_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<160, 288>(result, stencil_0_conv13_40_res);
	hw_uint<32>  stencil_0_conv13_41_res = stencil_0_conv13_41_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<192, 288>(result, stencil_0_conv13_41_res);
	hw_uint<32>  stencil_0_conv13_42_res = stencil_0_conv13_42_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<224, 288>(result, stencil_0_conv13_42_res);
	hw_uint<32>  stencil_0_conv13_43_res = stencil_0_conv13_43_select(stencil_0, root, stencil_19, stencil_110, dynamic_address);
	set_at<256, 288>(result, stencil_0_conv13_43_res);
	return result;
}

// conv8_write
//	stencil_0_conv8_4
inline void stencil_0_conv8_write_bundle_write(hw_uint<32>& conv8_write, stencil_0_cache& stencil_0, int root, int stencil_04, int stencil_05, int dynamic_address) {
	hw_uint<32>  stencil_0_conv8_4_res = conv8_write.extract<0, 31>();
	stencil_0_conv8_4_write(stencil_0_conv8_4_res, stencil_0, root, stencil_04, stencil_05, dynamic_address);
}

struct stencil_1_conv13_34_merged_banks_9_cache {
	// RAM Box: {[-2, 129], [-2, 129]}
	// Capacity: 267
	// # of read delays: 9
  // 0, 1, 2, 132, 133, 134, 264, 265, 266
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 129> f11;
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

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_132() {
		return f6;
	}

	inline hw_uint<32>  peek_133() {
		return f8;
	}

	inline hw_uint<32>  peek_134() {
		return f10;
	}

	inline hw_uint<32>  peek_263() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_264() {
		return f12;
	}

	inline hw_uint<32>  peek_265() {
		return f14;
	}

	inline hw_uint<32>  peek_266() {
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
    // cap: 1 reading from capacity: 129
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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

struct stencil_1_cache {
  // # of banks: 1
  stencil_1_conv13_34_merged_banks_9_cache stencil_1_conv13_34_merged_banks_9;
};



inline void stencil_1_conv13_34_write(hw_uint<32> & stencil_1_conv13_34, stencil_1_cache& stencil_1, int root, int stencil_19, int stencil_110, int dynamic_address) {
  stencil_1.stencil_1_conv13_34_merged_banks_9.push(stencil_1_conv13_34);
}

inline hw_uint<32>  stencil_1_conv18_25_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_25 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[-1 + stencil_215, -1 + stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_266();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_26_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_26 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[-1 + stencil_215, stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_134();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_27_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_27 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[-1 + stencil_215, 1 + stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_2();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_28_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_28 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[stencil_215, -1 + stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_265();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_29_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_29 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[stencil_215, stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_133();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_30_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_30 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[stencil_215, 1 + stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_1();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_31_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_31 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[1 + stencil_215, -1 + stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_264();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_32_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_32 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[1 + stencil_215, stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_132();
  return value_stencil_1_conv13_34;
  return 0;
}

inline hw_uint<32>  stencil_1_conv18_33_select(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_1_conv18_33 read pattern: { conv18[root = 0, stencil_214, stencil_215] -> stencil_1[1 + stencil_215, 1 + stencil_214] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Read schedule : { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  // Write schedule: { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
  auto value_stencil_1_conv13_34 = stencil_1.stencil_1_conv13_34_merged_banks_9.peek_0();
  return value_stencil_1_conv13_34;
  return 0;
}

// # of bundles = 2
// conv13_write
//	stencil_1_conv13_34
inline void stencil_1_conv13_write_bundle_write(hw_uint<32>& conv13_write, stencil_1_cache& stencil_1, int root, int stencil_19, int stencil_110, int dynamic_address) {
	hw_uint<32>  stencil_1_conv13_34_res = conv13_write.extract<0, 31>();
	stencil_1_conv13_34_write(stencil_1_conv13_34_res, stencil_1, root, stencil_19, stencil_110, dynamic_address);
}

// conv18_read
//	stencil_1_conv18_25
//	stencil_1_conv18_26
//	stencil_1_conv18_27
//	stencil_1_conv18_28
//	stencil_1_conv18_29
//	stencil_1_conv18_30
//	stencil_1_conv18_31
//	stencil_1_conv18_32
//	stencil_1_conv18_33
inline hw_uint<288> stencil_1_conv18_read_bundle_read(stencil_1_cache& stencil_1, int root, int stencil_214, int stencil_215, int dynamic_address) {
  // # of ports in bundle: 9
    // stencil_1_conv18_25
    // stencil_1_conv18_26
    // stencil_1_conv18_27
    // stencil_1_conv18_28
    // stencil_1_conv18_29
    // stencil_1_conv18_30
    // stencil_1_conv18_31
    // stencil_1_conv18_32
    // stencil_1_conv18_33

	hw_uint<288> result;
	hw_uint<32>  stencil_1_conv18_25_res = stencil_1_conv18_25_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<0, 288>(result, stencil_1_conv18_25_res);
	hw_uint<32>  stencil_1_conv18_26_res = stencil_1_conv18_26_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<32, 288>(result, stencil_1_conv18_26_res);
	hw_uint<32>  stencil_1_conv18_27_res = stencil_1_conv18_27_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<64, 288>(result, stencil_1_conv18_27_res);
	hw_uint<32>  stencil_1_conv18_28_res = stencil_1_conv18_28_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<96, 288>(result, stencil_1_conv18_28_res);
	hw_uint<32>  stencil_1_conv18_29_res = stencil_1_conv18_29_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<128, 288>(result, stencil_1_conv18_29_res);
	hw_uint<32>  stencil_1_conv18_30_res = stencil_1_conv18_30_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<160, 288>(result, stencil_1_conv18_30_res);
	hw_uint<32>  stencil_1_conv18_31_res = stencil_1_conv18_31_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<192, 288>(result, stencil_1_conv18_31_res);
	hw_uint<32>  stencil_1_conv18_32_res = stencil_1_conv18_32_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<224, 288>(result, stencil_1_conv18_32_res);
	hw_uint<32>  stencil_1_conv18_33_res = stencil_1_conv18_33_select(stencil_1, root, stencil_214, stencil_215, dynamic_address);
	set_at<256, 288>(result, stencil_1_conv18_33_res);
	return result;
}

struct stencil_2_conv18_24_merged_banks_9_cache {
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

struct stencil_2_cache {
  // # of banks: 1
  stencil_2_conv18_24_merged_banks_9_cache stencil_2_conv18_24_merged_banks_9;
};



inline void stencil_2_conv18_24_write(hw_uint<32> & stencil_2_conv18_24, stencil_2_cache& stencil_2, int root, int stencil_214, int stencil_215, int dynamic_address) {
  stencil_2.stencil_2_conv18_24_merged_banks_9.push(stencil_2_conv18_24);
}

inline hw_uint<32>  stencil_2_conv23_15_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_15 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[-1 + stencil_320, -1 + stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_262();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_16_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_16 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[-1 + stencil_320, stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_132();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_17_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_17 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[-1 + stencil_320, 1 + stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_2();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_18_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_18 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[stencil_320, -1 + stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_261();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_19_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_19 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[stencil_320, stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_131();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_20_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_20 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[stencil_320, 1 + stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_1();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_21_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_21 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[1 + stencil_320, -1 + stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_260();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_22_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_22 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[1 + stencil_320, stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_130();
  return value_stencil_2_conv18_24;
  return 0;
}

inline hw_uint<32>  stencil_2_conv23_23_select(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_2_conv23_23 read pattern: { conv23[root = 0, stencil_319, stencil_320] -> stencil_2[1 + stencil_320, 1 + stencil_319] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Read schedule : { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  // Write schedule: { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
  auto value_stencil_2_conv18_24 = stencil_2.stencil_2_conv18_24_merged_banks_9.peek_0();
  return value_stencil_2_conv18_24;
  return 0;
}

// # of bundles = 2
// conv18_write
//	stencil_2_conv18_24
inline void stencil_2_conv18_write_bundle_write(hw_uint<32>& conv18_write, stencil_2_cache& stencil_2, int root, int stencil_214, int stencil_215, int dynamic_address) {
	hw_uint<32>  stencil_2_conv18_24_res = conv18_write.extract<0, 31>();
	stencil_2_conv18_24_write(stencil_2_conv18_24_res, stencil_2, root, stencil_214, stencil_215, dynamic_address);
}

// conv23_read
//	stencil_2_conv23_15
//	stencil_2_conv23_16
//	stencil_2_conv23_17
//	stencil_2_conv23_18
//	stencil_2_conv23_19
//	stencil_2_conv23_20
//	stencil_2_conv23_21
//	stencil_2_conv23_22
//	stencil_2_conv23_23
inline hw_uint<288> stencil_2_conv23_read_bundle_read(stencil_2_cache& stencil_2, int root, int stencil_319, int stencil_320, int dynamic_address) {
  // # of ports in bundle: 9
    // stencil_2_conv23_15
    // stencil_2_conv23_16
    // stencil_2_conv23_17
    // stencil_2_conv23_18
    // stencil_2_conv23_19
    // stencil_2_conv23_20
    // stencil_2_conv23_21
    // stencil_2_conv23_22
    // stencil_2_conv23_23

	hw_uint<288> result;
	hw_uint<32>  stencil_2_conv23_15_res = stencil_2_conv23_15_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<0, 288>(result, stencil_2_conv23_15_res);
	hw_uint<32>  stencil_2_conv23_16_res = stencil_2_conv23_16_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<32, 288>(result, stencil_2_conv23_16_res);
	hw_uint<32>  stencil_2_conv23_17_res = stencil_2_conv23_17_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<64, 288>(result, stencil_2_conv23_17_res);
	hw_uint<32>  stencil_2_conv23_18_res = stencil_2_conv23_18_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<96, 288>(result, stencil_2_conv23_18_res);
	hw_uint<32>  stencil_2_conv23_19_res = stencil_2_conv23_19_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<128, 288>(result, stencil_2_conv23_19_res);
	hw_uint<32>  stencil_2_conv23_20_res = stencil_2_conv23_20_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<160, 288>(result, stencil_2_conv23_20_res);
	hw_uint<32>  stencil_2_conv23_21_res = stencil_2_conv23_21_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<192, 288>(result, stencil_2_conv23_21_res);
	hw_uint<32>  stencil_2_conv23_22_res = stencil_2_conv23_22_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<224, 288>(result, stencil_2_conv23_22_res);
	hw_uint<32>  stencil_2_conv23_23_res = stencil_2_conv23_23_select(stencil_2, root, stencil_319, stencil_320, dynamic_address);
	set_at<256, 288>(result, stencil_2_conv23_23_res);
	return result;
}

struct stencil_3_conv23_14_to_stencil_3_pw_math_stencil_32427_1_cache {
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

struct stencil_3_cache {
  // # of banks: 1
  stencil_3_conv23_14_to_stencil_3_pw_math_stencil_32427_1_cache stencil_3_conv23_14_to_stencil_3_pw_math_stencil_32427_1;
};



inline void stencil_3_conv23_14_write(hw_uint<32> & stencil_3_conv23_14, stencil_3_cache& stencil_3, int root, int stencil_319, int stencil_320, int dynamic_address) {
  stencil_3.stencil_3_conv23_14_to_stencil_3_pw_math_stencil_32427_1.push(stencil_3_conv23_14);
}

inline hw_uint<32>  stencil_3_pw_math_stencil_32427_1_select(stencil_3_cache& stencil_3, int root, int pw_math_stencil_32425, int pw_math_stencil_32426, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stencil_3_pw_math_stencil_32427_1 read pattern: { pw_math_stencil_32427[root = 0, pw_math_stencil_32425, pw_math_stencil_32426] -> stencil_3[pw_math_stencil_32426, pw_math_stencil_32425] : 0 <= pw_math_stencil_32425 <= 127 and 0 <= pw_math_stencil_32426 <= 127 }
  // Read schedule : { pw_math_stencil_32427[root = 0, pw_math_stencil_32425, pw_math_stencil_32426] -> [4 + pw_math_stencil_32425, 4 + pw_math_stencil_32426, 5] : 0 <= pw_math_stencil_32425 <= 127 and 0 <= pw_math_stencil_32426 <= 127 }
  // Write schedule: { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
  auto value_stencil_3_conv23_14 = stencil_3.stencil_3_conv23_14_to_stencil_3_pw_math_stencil_32427_1.peek(/* one reader or all rams */ 0);
  return value_stencil_3_conv23_14;
  return 0;
}

// # of bundles = 2
// conv23_write
//	stencil_3_conv23_14
inline void stencil_3_conv23_write_bundle_write(hw_uint<32>& conv23_write, stencil_3_cache& stencil_3, int root, int stencil_319, int stencil_320, int dynamic_address) {
	hw_uint<32>  stencil_3_conv23_14_res = conv23_write.extract<0, 31>();
	stencil_3_conv23_14_write(stencil_3_conv23_14_res, stencil_3, root, stencil_319, stencil_320, dynamic_address);
}

// pw_math_stencil_32427_read
//	stencil_3_pw_math_stencil_32427_1
inline hw_uint<32> stencil_3_pw_math_stencil_32427_read_bundle_read(stencil_3_cache& stencil_3, int root, int pw_math_stencil_32425, int pw_math_stencil_32426, int dynamic_address) {
  // # of ports in bundle: 1
    // stencil_3_pw_math_stencil_32427_1

	hw_uint<32> result;
	hw_uint<32>  stencil_3_pw_math_stencil_32427_1_res = stencil_3_pw_math_stencil_32427_1_select(stencil_3, root, pw_math_stencil_32425, pw_math_stencil_32426, dynamic_address);
	set_at<0, 32>(result, stencil_3_pw_math_stencil_32427_1_res);
	return result;
}

// Total re-use buffer capacity: 34304 bits


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

inline void conv13(stencil_0_cache& stencil_0, stencil_1_cache& stencil_1, int root, int stencil_19, int stencil_110) {
  // Dynamic address computation

	// Consume: stencil_0
	auto stencil_0_stencil_110__p___m_1_c__stencil_19__p___m_1_value = stencil_0_conv13_read_bundle_read(stencil_0/* source_delay */, root, stencil_19, stencil_110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(stencil_0_stencil_110__p___m_1_c__stencil_19__p___m_1_value);
	// Produce: stencil_1
	stencil_1_conv13_write_bundle_write(/* arg names */compute_result, stencil_1, root, stencil_19, stencil_110, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void conv18(stencil_1_cache& stencil_1, stencil_2_cache& stencil_2, int root, int stencil_214, int stencil_215) {
  // Dynamic address computation

	// Consume: stencil_1
	auto stencil_1_stencil_215__p___m_1_c__stencil_214__p___m_1_value = stencil_1_conv18_read_bundle_read(stencil_1/* source_delay */, root, stencil_214, stencil_215, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(stencil_1_stencil_215__p___m_1_c__stencil_214__p___m_1_value);
	// Produce: stencil_2
	stencil_2_conv18_write_bundle_write(/* arg names */compute_result, stencil_2, root, stencil_214, stencil_215, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void conv23(stencil_2_cache& stencil_2, stencil_3_cache& stencil_3, int root, int stencil_319, int stencil_320) {
  // Dynamic address computation

	// Consume: stencil_2
	auto stencil_2_stencil_320__p___m_1_c__stencil_319__p___m_1_value = stencil_2_conv23_read_bundle_read(stencil_2/* source_delay */, root, stencil_319, stencil_320, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(stencil_2_stencil_320__p___m_1_c__stencil_319__p___m_1_value);
	// Produce: stencil_3
	stencil_3_conv23_write_bundle_write(/* arg names */compute_result, stencil_3, root, stencil_319, stencil_320, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_stencil_32427(stencil_3_cache& stencil_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_stencil_32425, int pw_math_stencil_32426) {
  // Dynamic address computation

	// Consume: stencil_3
	auto stencil_3_pw_math_stencil_32426_c__pw_math_stencil_32425_value = stencil_3_pw_math_stencil_32427_read_bundle_read(stencil_3/* source_delay */, root, pw_math_stencil_32425, pw_math_stencil_32426, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(stencil_3_pw_math_stencil_32426_c__pw_math_stencil_32425_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sc_stat_4(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sc_stat_4_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_0_cache stencil_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_1_cache stencil_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_2_cache stencil_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stencil_3_cache stencil_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131; conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128; conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129; pw_math_stencil_32427[root = 0, pw_math_stencil_32425, pw_math_stencil_32426] -> [4 + pw_math_stencil_32425, 4 + pw_math_stencil_32426, 5] : 0 <= pw_math_stencil_32425 <= 127 and 0 <= pw_math_stencil_32426 <= 127; conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127; conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
//   { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> [pw_math_in_oc01, pw_math_in_oc02, 0] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
// Condition for pw_math_in_oc03(((i2 == 0) && (4 + i0 >= 0) && (131 - i0 >= 0) && (4 + i1 >= 0) && (131 - i1 >= 0)))
//   { conv18[root = 0, stencil_214, stencil_215] -> [3 + stencil_214, 3 + stencil_215, 3] : -1 <= stencil_214 <= 128 and -1 <= stencil_215 <= 128 }
// Condition for conv18(((-3 + i2 == 0) && (-2 + i0 >= 0) && (131 - i0 >= 0) && (-2 + i1 >= 0) && (131 - i1 >= 0)))
//   { conv13[root = 0, stencil_19, stencil_110] -> [2 + stencil_19, 2 + stencil_110, 2] : -2 <= stencil_19 <= 129 and -2 <= stencil_110 <= 129 }
// Condition for conv13(((-2 + i2 == 0) && (i0 >= 0) && (131 - i0 >= 0) && (i1 >= 0) && (131 - i1 >= 0)))
//   { pw_math_stencil_32427[root = 0, pw_math_stencil_32425, pw_math_stencil_32426] -> [4 + pw_math_stencil_32425, 4 + pw_math_stencil_32426, 5] : 0 <= pw_math_stencil_32425 <= 127 and 0 <= pw_math_stencil_32426 <= 127 }
// Condition for pw_math_stencil_32427(((-5 + i2 == 0) && (-4 + i0 >= 0) && (131 - i0 >= 0) && (-4 + i1 >= 0) && (131 - i1 >= 0)))
//   { conv23[root = 0, stencil_319, stencil_320] -> [4 + stencil_319, 4 + stencil_320, 4] : 0 <= stencil_319 <= 127 and 0 <= stencil_320 <= 127 }
// Condition for conv23(((-4 + i2 == 0) && (-4 + i0 >= 0) && (131 - i0 >= 0) && (-4 + i1 >= 0) && (131 - i1 >= 0)))
//   { conv8[root = 0, stencil_04, stencil_05] -> [1 + stencil_04, 1 + stencil_05, 1] : -3 <= stencil_04 <= 130 and -3 <= stencil_05 <= 130 }
// Condition for conv8(((-1 + i2 == 0) && (2 + i0 >= 0) && (131 - i0 >= 0) && (2 + i1 >= 0) && (131 - i1 >= 0)))

  /*
for (int c0 = -4; c0 <= 131; c0 += 1)
  for (int c1 = -4; c1 <= 131; c1 += 1) {
    pw_math_in_oc03(0, c0, c1);
    if (c0 >= -2 && c1 >= -2) {
      conv8(0, c0 - 1, c1 - 1);
      if (c0 >= 0 && c1 >= 0) {
        conv13(0, c0 - 2, c1 - 2);
        if (c0 >= 2 && c1 >= 2) {
          conv18(0, c0 - 3, c1 - 3);
          if (c0 >= 4 && c1 >= 4) {
            conv23(0, c0 - 4, c1 - 4);
            pw_math_stencil_32427(0, c0 - 4, c1 - 4);
          }
        }
      }
    }
  }

  */
	for (int c0 = -4; c0 <= 131; c0 += 1)
	  for (int c1 = -4; c1 <= 131; c1 += 1) {
	    pw_math_in_oc03(in_oc /* buf name */, in, 0, c0, c1);
	    if (c0 >= -2 && c1 >= -2) {
	      conv8(in /* buf name */, stencil_0, 0, c0 - 1, c1 - 1);
	      if (c0 >= 0 && c1 >= 0) {
	        conv13(stencil_0 /* buf name */, stencil_1, 0, c0 - 2, c1 - 2);
	        if (c0 >= 2 && c1 >= 2) {
	          conv18(stencil_1 /* buf name */, stencil_2, 0, c0 - 3, c1 - 3);
	          if (c0 >= 4 && c1 >= 4) {
	            conv23(stencil_2 /* buf name */, stencil_3, 0, c0 - 4, c1 - 4);
	            pw_math_stencil_32427(stencil_3 /* buf name */, out, 0, c0 - 4, c1 - 4);
	          }
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sc_stat_4_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sc_stat_4(in_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in_oc03[root = 0, pw_math_in_oc01, pw_math_in_oc02] -> in_oc[pw_math_in_oc02, pw_math_in_oc01] : -4 <= pw_math_in_oc01 <= 131 and -4 <= pw_math_in_oc02 <= 131 }
const int pw_math_in_oc03_read_pipe0_num_transfers = 18496;
  // { pw_math_stencil_32427[root = 0, pw_math_stencil_32425, pw_math_stencil_32426] -> out[pw_math_stencil_32426, pw_math_stencil_32425] : 0 <= pw_math_stencil_32425 <= 127 and 0 <= pw_math_stencil_32426 <= 127 }
const int pw_math_stencil_32427_write_pipe0_num_transfers = 16384;


extern "C" {

void sc_stat_4_accel(hw_uint<32>* pw_math_in_oc03_read_pipe0, hw_uint<32>* pw_math_stencil_32427_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in_oc03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_stencil_32427_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in_oc03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_stencil_32427_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in_oc03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_stencil_32427_write_pipe0_channel;

  burst_read<32>(pw_math_in_oc03_read_pipe0, pw_math_in_oc03_read_pipe0_channel, pw_math_in_oc03_read_pipe0_num_transfers*size);

  sc_stat_4_wrapper(pw_math_in_oc03_read_pipe0_channel, pw_math_stencil_32427_write_pipe0_channel, size);

  burst_write<32>(pw_math_stencil_32427_write_pipe0, pw_math_stencil_32427_write_pipe0_channel, pw_math_stencil_32427_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sc_stat_4_rdai(HWStream<hw_uint<32> >& pw_math_in_oc03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_stencil_32427_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in_oc03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_stencil_32427_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sc_stat_4(pw_math_in_oc03_read_pipe0, pw_math_stencil_32427_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

