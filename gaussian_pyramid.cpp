#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_2_merged_banks_9_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 67
	// # of read delays: 9
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 29> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 29> f11;
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

	inline hw_uint<32>  peek_31() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_32() {
		return f6;
	}

	inline hw_uint<32>  peek_33() {
		return f8;
	}

	inline hw_uint<32>  peek_34() {
		return f10;
	}

	inline hw_uint<32>  peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_64() {
		return f12;
	}

	inline hw_uint<32>  peek_65() {
		return f14;
	}

	inline hw_uint<32>  peek_66() {
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
    // cap: 1 reading from capacity: 29
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
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
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
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

struct I_cache {
  I_store_I_from_in_2_merged_banks_9_cache I_store_I_from_in_2_merged_banks_9;
};



inline void I_store_I_from_in_2_write(hw_uint<32> & I_store_I_from_in_2, I_cache& I, int root, int pr, int pc) {
  I.I_store_I_from_in_2_merged_banks_9.push(I_store_I_from_in_2);
}

inline hw_uint<32>  I_I_blr_conv_3_30_10_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_10 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 32 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (3 + I_blr_c) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_32();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_11_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_11 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 2 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_2();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_12_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_12 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 1 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_1();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_13_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_13 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: {  }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_0();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_5_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_5 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 66 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_66();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_6_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_6 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 65 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_65();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_7_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_7 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 64 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 28; I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> (35 + I_blr_c) : root = 0 and I_blr_c = 29 and 0 <= I_blr_r <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_64();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_8_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_8 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 34 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_34();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_I_blr_conv_3_30_9_select(I_cache& I, int root, int I_blr_r, int I_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_9 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  // DD fold: { I_blr_conv_3_30[root, I_blr_r, I_blr_c] -> 33 : root = 0 and 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_store_I_from_in_2 = I.I_store_I_from_in_2_merged_banks_9.peek_33();
  return value_I_store_I_from_in_2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_r = " << I_blr_r  << " I_blr_c = " << I_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_5
//	I_I_blr_conv_3_30_6
//	I_I_blr_conv_3_30_7
//	I_I_blr_conv_3_30_8
//	I_I_blr_conv_3_30_9
//	I_I_blr_conv_3_30_10
//	I_I_blr_conv_3_30_11
//	I_I_blr_conv_3_30_12
//	I_I_blr_conv_3_30_13
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_cache& I, int root, int I_blr_r, int I_blr_c) {
  // # of ports in bundle: 9
    // I_I_blr_conv_3_30_5
    // I_I_blr_conv_3_30_6
    // I_I_blr_conv_3_30_7
    // I_I_blr_conv_3_30_8
    // I_I_blr_conv_3_30_9
    // I_I_blr_conv_3_30_10
    // I_I_blr_conv_3_30_11
    // I_I_blr_conv_3_30_12
    // I_I_blr_conv_3_30_13

	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_5_res = I_I_blr_conv_3_30_5_select(I, root, I_blr_r, I_blr_c);
	set_at<0, 288>(result, I_I_blr_conv_3_30_5_res);
	hw_uint<32>  I_I_blr_conv_3_30_6_res = I_I_blr_conv_3_30_6_select(I, root, I_blr_r, I_blr_c);
	set_at<32, 288>(result, I_I_blr_conv_3_30_6_res);
	hw_uint<32>  I_I_blr_conv_3_30_7_res = I_I_blr_conv_3_30_7_select(I, root, I_blr_r, I_blr_c);
	set_at<64, 288>(result, I_I_blr_conv_3_30_7_res);
	hw_uint<32>  I_I_blr_conv_3_30_8_res = I_I_blr_conv_3_30_8_select(I, root, I_blr_r, I_blr_c);
	set_at<96, 288>(result, I_I_blr_conv_3_30_8_res);
	hw_uint<32>  I_I_blr_conv_3_30_9_res = I_I_blr_conv_3_30_9_select(I, root, I_blr_r, I_blr_c);
	set_at<128, 288>(result, I_I_blr_conv_3_30_9_res);
	hw_uint<32>  I_I_blr_conv_3_30_10_res = I_I_blr_conv_3_30_10_select(I, root, I_blr_r, I_blr_c);
	set_at<160, 288>(result, I_I_blr_conv_3_30_10_res);
	hw_uint<32>  I_I_blr_conv_3_30_11_res = I_I_blr_conv_3_30_11_select(I, root, I_blr_r, I_blr_c);
	set_at<192, 288>(result, I_I_blr_conv_3_30_11_res);
	hw_uint<32>  I_I_blr_conv_3_30_12_res = I_I_blr_conv_3_30_12_select(I, root, I_blr_r, I_blr_c);
	set_at<224, 288>(result, I_I_blr_conv_3_30_12_res);
	hw_uint<32>  I_I_blr_conv_3_30_13_res = I_I_blr_conv_3_30_13_select(I, root, I_blr_r, I_blr_c);
	set_at<256, 288>(result, I_I_blr_conv_3_30_13_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_2
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc) {
	hw_uint<32>  I_store_I_from_in_2_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_2_write(I_store_I_from_in_2_res, I, root, pr, pc);
}

#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_4_merged_banks_1_cache {
	// RAM Box: {[0, 29], [0, 29]}
	// Capacity: 1
	// # of read delays: 1
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

struct I_blr_cache {
  I_blr_I_blr_conv_3_30_4_merged_banks_1_cache I_blr_I_blr_conv_3_30_4_merged_banks_1;
};



inline void I_blr_I_blr_conv_3_30_4_write(hw_uint<32> & I_blr_I_blr_conv_3_30_4, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
  I_blr.I_blr_I_blr_conv_3_30_4_merged_banks_1.push(I_blr_I_blr_conv_3_30_4);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_25_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_I_blr_ds_id0_25 read pattern: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr[2I_blr_ds_r, 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // Read schedule : { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // Write schedule: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // DD fold: {  }
  auto value_I_blr_I_blr_conv_3_30_4 = I_blr.I_blr_I_blr_conv_3_30_4_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_I_blr_I_blr_conv_3_30_4;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_r = " << I_blr_ds_r  << " I_blr_ds_c = " << I_blr_ds_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_4
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_4_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_4_write(I_blr_I_blr_conv_3_30_4_res, I_blr, root, I_blr_r, I_blr_c);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_25
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c) {
  // # of ports in bundle: 1
    // I_blr_I_blr_ds_id0_25

	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_25_res = I_blr_I_blr_ds_id0_25_select(I_blr, root, I_blr_ds_r, I_blr_ds_c);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_25_res);
	return result;
}

#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_24_merged_banks_9_cache {
	// RAM Box: {[0, 14], [0, 14]}
	// Capacity: 33
	// # of read delays: 9
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 12> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 12> f11;
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

	inline hw_uint<32>  peek_14() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_15() {
		return f6;
	}

	inline hw_uint<32>  peek_16() {
		return f8;
	}

	inline hw_uint<32>  peek_17() {
		return f10;
	}

	inline hw_uint<32>  peek_29() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_30() {
		return f12;
	}

	inline hw_uint<32>  peek_31() {
		return f14;
	}

	inline hw_uint<32>  peek_32() {
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
    // cap: 1 reading from capacity: 12
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 12 reading from capacity: 1
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
    // cap: 1 reading from capacity: 12
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 12 reading from capacity: 1
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

struct I_blr_ds_cache {
  I_blr_ds_I_blr_ds_id0_24_merged_banks_9_cache I_blr_ds_I_blr_ds_id0_24_merged_banks_9;
};



inline void I_blr_ds_I_blr_ds_id0_24_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_24, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
  I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.push(I_blr_ds_I_blr_ds_id0_24);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_15 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 32 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_32();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_16 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 31 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_31();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_17 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 30 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (18 + I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_30();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_18 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 17 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_17();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_19 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 16 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_16();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_20 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 15 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 11; I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> (3 + I_blr_ds_blr_c) : root = 0 and I_blr_ds_blr_c = 12 and 0 <= I_blr_ds_blr_r <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_15();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_21 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 2 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_2();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_22 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: { I_blr_ds_blr_conv_3_30[root, I_blr_ds_blr_r, I_blr_ds_blr_c] -> 1 : root = 0 and 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_1();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_23 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // DD fold: {  }
  auto value_I_blr_ds_I_blr_ds_id0_24 = I_blr_ds.I_blr_ds_I_blr_ds_id0_24_merged_banks_9.peek_0();
  return value_I_blr_ds_I_blr_ds_id0_24;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_r = " << I_blr_ds_blr_r  << " I_blr_ds_blr_c = " << I_blr_ds_blr_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_15
//	I_blr_ds_I_blr_ds_blr_conv_3_30_16
//	I_blr_ds_I_blr_ds_blr_conv_3_30_17
//	I_blr_ds_I_blr_ds_blr_conv_3_30_18
//	I_blr_ds_I_blr_ds_blr_conv_3_30_19
//	I_blr_ds_I_blr_ds_blr_conv_3_30_20
//	I_blr_ds_I_blr_ds_blr_conv_3_30_21
//	I_blr_ds_I_blr_ds_blr_conv_3_30_22
//	I_blr_ds_I_blr_ds_blr_conv_3_30_23
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // # of ports in bundle: 9
    // I_blr_ds_I_blr_ds_blr_conv_3_30_15
    // I_blr_ds_I_blr_ds_blr_conv_3_30_16
    // I_blr_ds_I_blr_ds_blr_conv_3_30_17
    // I_blr_ds_I_blr_ds_blr_conv_3_30_18
    // I_blr_ds_I_blr_ds_blr_conv_3_30_19
    // I_blr_ds_I_blr_ds_blr_conv_3_30_20
    // I_blr_ds_I_blr_ds_blr_conv_3_30_21
    // I_blr_ds_I_blr_ds_blr_conv_3_30_22
    // I_blr_ds_I_blr_ds_blr_conv_3_30_23

	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_15_res = I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_15_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_16_res = I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_16_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_res = I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_17_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_18_res = I_blr_ds_I_blr_ds_blr_conv_3_30_18_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_18_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_19_res = I_blr_ds_I_blr_ds_blr_conv_3_30_19_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_19_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_20_res = I_blr_ds_I_blr_ds_blr_conv_3_30_20_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_20_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_21_res = I_blr_ds_I_blr_ds_blr_conv_3_30_21_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_21_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_22_res = I_blr_ds_I_blr_ds_blr_conv_3_30_22_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_22_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_23_res = I_blr_ds_I_blr_ds_blr_conv_3_30_23_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_23_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_24
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_24_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_24_write(I_blr_ds_I_blr_ds_id0_24_res, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);
}

#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_cache {
	// RAM Box: {[0, 12], [0, 12]}
	// Capacity: 39
	// # of read delays: 39
	fifo<hw_uint<32> , 39> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(38 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_cache {
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_27;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_27.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14);
}

inline hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_blr_I_blr_ds_blr_ds_id0_27 read pattern: { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> I_blr_ds_blr[2I_blr_ds_blr_ds_r, 2I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
  // Read schedule : { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> [11 + 3I_blr_ds_blr_ds_r, 11 + 3I_blr_ds_blr_ds_c, 4] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
  // Write schedule: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // DD fold: { I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> 2 : root = 0 and I_blr_ds_blr_ds_r = 5 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_c <= 2; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((2 - I_blr_ds_blr_ds_c) + floor((I_blr_ds_blr_ds_c)/2)) : root = 0 and I_blr_ds_blr_ds_r = 5 and (I_blr_ds_blr_ds_c) mod 2 = 0 and 0 <= I_blr_ds_blr_ds_c <= 2; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> 1 : root = 0 and I_blr_ds_blr_ds_r = 5 and I_blr_ds_blr_ds_c = 3; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (57/2 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and (1 + I_blr_ds_blr_ds_r) mod 2 = 0 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_r <= 2 and 0 < I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (28 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and (1 + I_blr_ds_blr_ds_r) mod 2 = 0 and (I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_r <= 2 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> ((38 - 13/2 * I_blr_ds_blr_ds_r) - 2 * I_blr_ds_blr_ds_c) : root = 0 and (I_blr_ds_blr_ds_r) mod 2 = 0 and 0 <= I_blr_ds_blr_ds_r <= 2 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (31/2 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and I_blr_ds_blr_ds_r = 3 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0 and 0 < I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (15 - 1/2 * I_blr_ds_blr_ds_c) : root = 0 and I_blr_ds_blr_ds_r = 3 and (I_blr_ds_blr_ds_c) mod 2 = 0 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_ds_blr_ds_id0[root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> (12 - 2 * I_blr_ds_blr_ds_c) : I_blr_ds_blr_ds_r = 4 and root = 0 and 0 <= I_blr_ds_blr_ds_c <= 5 and ((root = 0 and (1 + I_blr_ds_blr_ds_c) mod 2 = 0) or (root = 0 and (I_blr_ds_blr_ds_c) mod 2 = 0)) }
  auto value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14 = I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_27.peek(/* one reader or all rams */ (-3 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0) ? (1) : (-1 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0) ? (2) : (-4 + I_blr_ds_blr_ds_r == 0) ? ((12 - 2 * I_blr_ds_blr_ds_c)) : ((-I_blr_ds_blr_ds_r) % 2 == 0 && 2 - I_blr_ds_blr_ds_r >= 0) ? ((((76 - 13 * I_blr_ds_blr_ds_r) - 4 * I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -5 + I_blr_ds_blr_ds_r == 0 && 2 - I_blr_ds_blr_ds_c >= 0) ? (((4 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0) ? (((30 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -1 + I_blr_ds_blr_ds_r == 0) ? (((56 - I_blr_ds_blr_ds_c))/2) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0) ? (((31 - I_blr_ds_blr_ds_c))/2) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -1 + I_blr_ds_blr_ds_r == 0) ? (((57 - I_blr_ds_blr_ds_c))/2) : 0);
  return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_ds_r = " << I_blr_ds_blr_ds_r  << " I_blr_ds_blr_ds_c = " << I_blr_ds_blr_ds_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_14_res, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_27
inline hw_uint<32> I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
  // # of ports in bundle: 1
    // I_blr_ds_blr_I_blr_ds_blr_ds_id0_27

	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_select(I_blr_ds_blr, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_27_res);
	return result;
}

#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_cache {
	// RAM Box: {[0, 5], [0, 5]}
	// Capacity: 12
	// # of read delays: 12
	fifo<hw_uint<32> , 12> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(11 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct I_blr_ds_blr_ds_cache {
  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1;
};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_write(hw_uint<32> & I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
  I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26);
}

inline hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_select(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1 read pattern: { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> I_blr_ds_blr_ds[I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
  // Read schedule : { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> [16 + 2I_blr_ds_blr_ds_out_r, 16 + 2I_blr_ds_blr_ds_out_c, 5] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
  // Write schedule: { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> [11 + 3I_blr_ds_blr_ds_r, 11 + 3I_blr_ds_blr_ds_c, 4] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
  // DD fold: { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 1 : root = 0 and I_blr_ds_blr_ds_out_r = 5 and 0 <= I_blr_ds_blr_ds_out_c <= 1; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 1 : root = 0 and I_blr_ds_blr_ds_out_r = 5 and I_blr_ds_blr_ds_out_c = 2; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (11 - I_blr_ds_blr_ds_out_c) : root = 0 and 0 <= I_blr_ds_blr_ds_out_r <= 1 and 0 <= I_blr_ds_blr_ds_out_c <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 6 : root = 0 and I_blr_ds_blr_ds_out_c = 5 and 0 <= I_blr_ds_blr_ds_out_r <= 1; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> 7 : root = 0 and I_blr_ds_blr_ds_out_r = 2 and (1 + I_blr_ds_blr_ds_out_c) mod 3 = 0 and 2 <= I_blr_ds_blr_ds_out_c <= 4; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (8/3 + 2/3 * I_blr_ds_blr_ds_out_c) : root = 0 and I_blr_ds_blr_ds_out_r = 2 and I_blr_ds_blr_ds_out_c = 5; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (7 - floor((1 + I_blr_ds_blr_ds_out_c)/3)) : root = 0 and I_blr_ds_blr_ds_out_r = 2 and 0 <= I_blr_ds_blr_ds_out_c <= 4 and 3*floor((1 + I_blr_ds_blr_ds_out_c)/3) <= I_blr_ds_blr_ds_out_c; store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> (5 - I_blr_ds_blr_ds_out_c) : root = 0 and 3 <= I_blr_ds_blr_ds_out_r <= 4 and 0 <= I_blr_ds_blr_ds_out_c <= 4 and ((3*floor((1 + I_blr_ds_blr_ds_out_c)/3) <= I_blr_ds_blr_ds_out_c) or (1 + I_blr_ds_blr_ds_out_c) mod 3 = 0) }
  auto value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26 = I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1.peek(/* one reader or all rams */ (-5 + I_blr_ds_blr_ds_out_r == 0 && 2 - I_blr_ds_blr_ds_out_c >= 0) ? (1) : (-5 + I_blr_ds_blr_ds_out_c == 0 && 1 - I_blr_ds_blr_ds_out_r >= 0) ? (6) : (-2 + I_blr_ds_blr_ds_out_c == 0 && -2 + I_blr_ds_blr_ds_out_r == 0) ? (7) : ((-3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) || (-2 + I_blr_ds_blr_ds_out_c == 0 && -3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0)) ? ((5 - I_blr_ds_blr_ds_out_c)) : (4 - I_blr_ds_blr_ds_out_c >= 0 && 1 - I_blr_ds_blr_ds_out_r >= 0) ? ((11 - I_blr_ds_blr_ds_out_c)) : (-5 + I_blr_ds_blr_ds_out_c == 0 && -2 + I_blr_ds_blr_ds_out_r == 0) ? (6) : (-2 + I_blr_ds_blr_ds_out_r == 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) ? ((7 - floord(1 + I_blr_ds_blr_ds_out_c, 3))) : 0);
  return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " I_blr_ds_blr_ds_out_r = " << I_blr_ds_blr_ds_out_r  << " I_blr_ds_blr_ds_out_c = " << I_blr_ds_blr_ds_out_c  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	hw_uint<32>  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_res = I_blr_ds_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_26_res, I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1
inline hw_uint<32> I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
  // # of ports in bundle: 1
    // I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1

	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_select(I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_1_res);
	return result;
}



// Operation logic
inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(/* arg names */in_pr_c__pc_value, I, root, pr, pc);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_conv_3_30(I_cache& I, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I/* source_delay */, root, I_blr_r, I_blr_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	I_blr_I_blr_conv_3_30_write_bundle_write(/* arg names */compute_result, I_blr, root, I_blr_r, I_blr_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(/* arg names */compute_result, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(/* arg names */compute_result, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_cache& I_blr_ds_blr, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(/* arg names */compute_result, I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gaussian_pyramid(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */I_blr_ds_blr_ds_out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gaussian_pyramid_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  I_blr_cache I_blr;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  I_blr_ds_cache I_blr_ds;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  I_blr_ds_blr_cache I_blr_ds_blr;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  I_blr_ds_blr_ds_cache I_blr_ds_blr_ds;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> [16 + 2I_blr_ds_blr_ds_out_r, 16 + 2I_blr_ds_blr_ds_out_c, 5] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5; I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14; I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> [11 + 3I_blr_ds_blr_ds_r, 11 + 3I_blr_ds_blr_ds_c, 4] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5; I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29; store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31; I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  /*
for (int c0 = 0; c0 <= 31; c0 += 1)
  for (int c1 = 0; c1 <= 31; c1 += 1) {
    store_I_from_in(0, c0, c1);
    if (c0 >= 2 && c1 >= 2) {
      I_blr_conv_3_30(0, c0 - 2, c1 - 2);
      if (c0 % 2 == 0 && c1 % 2 == 0) {
        I_blr_ds_id0(0, (c0 / 2) - 1, (c1 / 2) - 1);
        if (c0 >= 6 && c1 >= 6)
          I_blr_ds_blr_conv_3_30(0, (c0 / 2) - 3, (c1 / 2) - 3);
      }
      if (c0 >= 11 && c0 <= 26 && c1 >= 11 && c1 <= 26 && (c0 + 1) % 3 == 0 && (c1 + 1) % 3 == 0)
        I_blr_ds_blr_ds_id0(0, (c0 - 11) / 3, (c1 - 11) / 3);
      if (c0 >= 16 && c0 <= 26 && c1 >= 16 && c1 <= 26 && c0 % 2 == 0 && c1 % 2 == 0)
        store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(0, (c0 / 2) - 8, (c1 / 2) - 8);
    }
  }

  */
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1) {
	    store_I_from_in(in /* buf name */, I, 0, c0, c1);
	    if (c0 >= 2 && c1 >= 2) {
	      I_blr_conv_3_30(I /* buf name */, I_blr, 0, c0 - 2, c1 - 2);
	      if (c0 % 2 == 0 && c1 % 2 == 0) {
	        I_blr_ds_id0(I_blr /* buf name */, I_blr_ds, 0, (c0 / 2) - 1, (c1 / 2) - 1);
	        if (c0 >= 6 && c1 >= 6)
	          I_blr_ds_blr_conv_3_30(I_blr_ds /* buf name */, I_blr_ds_blr, 0, (c0 / 2) - 3, (c1 / 2) - 3);
	      }
	      if (c0 >= 11 && c0 <= 26 && c1 >= 11 && c1 <= 26 && (c0 + 1) % 3 == 0 && (c1 + 1) % 3 == 0)
	        I_blr_ds_blr_ds_id0(I_blr_ds_blr /* buf name */, I_blr_ds_blr_ds, 0, (c0 - 11) / 3, (c1 - 11) / 3);
	      if (c0 >= 16 && c0 <= 26 && c1 >= 16 && c1 <= 26 && c0 % 2 == 0 && c1 % 2 == 0)
	        store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds /* buf name */, I_blr_ds_blr_ds_out, 0, (c0 / 2) - 8, (c1 / 2) - 8);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
const int store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_num_transfers = 36;
const int store_I_from_in_read_num_transfers = 1024;


extern "C" {

static void read_store_I_from_in_read(hw_uint<32>* input, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = store_I_from_in_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write(hw_uint<32>* output, HWStream<hw_uint<32> >& v, const int size) {
  hw_uint<32> burst_reg;
  int num_transfers = store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void gaussian_pyramid_accel(hw_uint<32>* store_I_from_in_read, hw_uint<32>* store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = store_I_from_in_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = store_I_from_in_read bundle = control
#pragma HLS INTERFACE s_axilite port = store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<32> > store_I_from_in_read_channel;
  static HWStream<hw_uint<32> > store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_channel;

  read_store_I_from_in_read(store_I_from_in_read, store_I_from_in_read_channel, size);

  gaussian_pyramid(store_I_from_in_read_channel, store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_channel, size);

  write_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write(store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write, store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

