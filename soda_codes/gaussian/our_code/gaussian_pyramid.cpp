#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: conv_3x3.h
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_store_I_from_in_0_merged_banks_9_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 67
	// # of read delays: 9
  // 0, 1, 2, 32, 33, 34, 64, 65, 66
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
  // # of banks: 1
  I_store_I_from_in_0_merged_banks_9_cache I_store_I_from_in_0_merged_banks_9;
};



inline void I_store_I_from_in_0_write(hw_uint<32> & I_store_I_from_in_0, I_cache& I, int root, int pr, int pc, int dynamic_address) {
  I.I_store_I_from_in_0_merged_banks_9.push(I_store_I_from_in_0);
}

inline hw_uint<32>  I_I_blr_conv_3_30_19_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_19 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_66();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_20_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_20 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_65();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_21_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_21 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_64();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_22_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_22 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_34();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_23_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_23 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_33();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_24_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_24 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[1 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_32();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_25_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_25 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_2();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_26_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_26 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 1 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_1();
  return value_I_store_I_from_in_0;
  return 0;
}

inline hw_uint<32>  I_I_blr_conv_3_30_27_select(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_I_blr_conv_3_30_27 read pattern: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> I[2 + I_blr_r, 2 + I_blr_c] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Read schedule : { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  // Write schedule: { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
  auto value_I_store_I_from_in_0 = I.I_store_I_from_in_0_merged_banks_9.peek_0();
  return value_I_store_I_from_in_0;
  return 0;
}

// # of bundles = 2
// I_blr_conv_3_30_read
//	I_I_blr_conv_3_30_19
//	I_I_blr_conv_3_30_20
//	I_I_blr_conv_3_30_21
//	I_I_blr_conv_3_30_22
//	I_I_blr_conv_3_30_23
//	I_I_blr_conv_3_30_24
//	I_I_blr_conv_3_30_25
//	I_I_blr_conv_3_30_26
//	I_I_blr_conv_3_30_27
inline hw_uint<288> I_I_blr_conv_3_30_read_bundle_read(I_cache& I, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
  // # of ports in bundle: 9
    // I_I_blr_conv_3_30_19
    // I_I_blr_conv_3_30_20
    // I_I_blr_conv_3_30_21
    // I_I_blr_conv_3_30_22
    // I_I_blr_conv_3_30_23
    // I_I_blr_conv_3_30_24
    // I_I_blr_conv_3_30_25
    // I_I_blr_conv_3_30_26
    // I_I_blr_conv_3_30_27

	hw_uint<288> result;
	hw_uint<32>  I_I_blr_conv_3_30_19_res = I_I_blr_conv_3_30_19_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<0, 288>(result, I_I_blr_conv_3_30_19_res);
	hw_uint<32>  I_I_blr_conv_3_30_20_res = I_I_blr_conv_3_30_20_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<32, 288>(result, I_I_blr_conv_3_30_20_res);
	hw_uint<32>  I_I_blr_conv_3_30_21_res = I_I_blr_conv_3_30_21_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<64, 288>(result, I_I_blr_conv_3_30_21_res);
	hw_uint<32>  I_I_blr_conv_3_30_22_res = I_I_blr_conv_3_30_22_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<96, 288>(result, I_I_blr_conv_3_30_22_res);
	hw_uint<32>  I_I_blr_conv_3_30_23_res = I_I_blr_conv_3_30_23_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<128, 288>(result, I_I_blr_conv_3_30_23_res);
	hw_uint<32>  I_I_blr_conv_3_30_24_res = I_I_blr_conv_3_30_24_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<160, 288>(result, I_I_blr_conv_3_30_24_res);
	hw_uint<32>  I_I_blr_conv_3_30_25_res = I_I_blr_conv_3_30_25_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<192, 288>(result, I_I_blr_conv_3_30_25_res);
	hw_uint<32>  I_I_blr_conv_3_30_26_res = I_I_blr_conv_3_30_26_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<224, 288>(result, I_I_blr_conv_3_30_26_res);
	hw_uint<32>  I_I_blr_conv_3_30_27_res = I_I_blr_conv_3_30_27_select(I, root, I_blr_r, I_blr_c, dynamic_address);
	set_at<256, 288>(result, I_I_blr_conv_3_30_27_res);
	return result;
}

// store_I_from_in_write
//	I_store_I_from_in_0
inline void I_store_I_from_in_write_bundle_write(hw_uint<32>& store_I_from_in_write, I_cache& I, int root, int pr, int pc, int dynamic_address) {
	hw_uint<32>  I_store_I_from_in_0_res = store_I_from_in_write.extract<0, 31>();
	I_store_I_from_in_0_write(I_store_I_from_in_0_res, I, root, pr, pc, dynamic_address);
}

#include "hw_classes.h"

struct I_blr_I_blr_conv_3_30_18_to_I_blr_I_blr_ds_id0_5_cache {
	// RAM Box: {[0, 28], [0, 28]}
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

struct I_blr_cache {
  // # of banks: 1
  I_blr_I_blr_conv_3_30_18_to_I_blr_I_blr_ds_id0_5_cache I_blr_I_blr_conv_3_30_18_to_I_blr_I_blr_ds_id0_5;
};



inline void I_blr_I_blr_conv_3_30_18_write(hw_uint<32> & I_blr_I_blr_conv_3_30_18, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
  I_blr.I_blr_I_blr_conv_3_30_18_to_I_blr_I_blr_ds_id0_5.push(I_blr_I_blr_conv_3_30_18);
}

inline hw_uint<32>  I_blr_I_blr_ds_id0_5_select(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_I_blr_ds_id0_5 read pattern: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> I_blr[2I_blr_ds_r, 2I_blr_ds_c] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // Read schedule : { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  // Write schedule: { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
  auto value_I_blr_I_blr_conv_3_30_18 = I_blr.I_blr_I_blr_conv_3_30_18_to_I_blr_I_blr_ds_id0_5.peek(/* one reader or all rams */ 0);
  return value_I_blr_I_blr_conv_3_30_18;
  return 0;
}

// # of bundles = 2
// I_blr_conv_3_30_write
//	I_blr_I_blr_conv_3_30_18
inline void I_blr_I_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_conv_3_30_write, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c, int dynamic_address) {
	hw_uint<32>  I_blr_I_blr_conv_3_30_18_res = I_blr_conv_3_30_write.extract<0, 31>();
	I_blr_I_blr_conv_3_30_18_write(I_blr_I_blr_conv_3_30_18_res, I_blr, root, I_blr_r, I_blr_c, dynamic_address);
}

// I_blr_ds_id0_read
//	I_blr_I_blr_ds_id0_5
inline hw_uint<32> I_blr_I_blr_ds_id0_read_bundle_read(I_blr_cache& I_blr, int root, int I_blr_ds_r, int I_blr_ds_c, int dynamic_address) {
  // # of ports in bundle: 1
    // I_blr_I_blr_ds_id0_5

	hw_uint<32> result;
	hw_uint<32>  I_blr_I_blr_ds_id0_5_res = I_blr_I_blr_ds_id0_5_select(I_blr, root, I_blr_ds_r, I_blr_ds_c, dynamic_address);
	set_at<0, 32>(result, I_blr_I_blr_ds_id0_5_res);
	return result;
}

#include "hw_classes.h"

struct I_blr_ds_I_blr_ds_id0_4_merged_banks_9_cache {
	// RAM Box: {[0, 14], [0, 14]}
	// Capacity: 33
	// # of read delays: 9
  // 0, 1, 2, 15, 16, 17, 30, 31, 32
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
  // # of banks: 1
  I_blr_ds_I_blr_ds_id0_4_merged_banks_9_cache I_blr_ds_I_blr_ds_id0_4_merged_banks_9;
};



inline void I_blr_ds_I_blr_ds_id0_4_write(hw_uint<32> & I_blr_ds_I_blr_ds_id0_4, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c, int dynamic_address) {
  I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.push(I_blr_ds_I_blr_ds_id0_4);
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_10 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_31();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_11 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_30();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_12_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_12 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_17();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_13_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_13 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_16();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_14_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_14 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[1 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_15();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_15 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_2();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_16 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 1 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_1();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_17 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[2 + I_blr_ds_blr_r, 2 + I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_0();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

inline hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_I_blr_ds_blr_conv_3_30_9 read pattern: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> I_blr_ds[I_blr_ds_blr_r, I_blr_ds_blr_c] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Read schedule : { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  // Write schedule: { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
  auto value_I_blr_ds_I_blr_ds_id0_4 = I_blr_ds.I_blr_ds_I_blr_ds_id0_4_merged_banks_9.peek_32();
  return value_I_blr_ds_I_blr_ds_id0_4;
  return 0;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_read
//	I_blr_ds_I_blr_ds_blr_conv_3_30_9
//	I_blr_ds_I_blr_ds_blr_conv_3_30_10
//	I_blr_ds_I_blr_ds_blr_conv_3_30_11
//	I_blr_ds_I_blr_ds_blr_conv_3_30_12
//	I_blr_ds_I_blr_ds_blr_conv_3_30_13
//	I_blr_ds_I_blr_ds_blr_conv_3_30_14
//	I_blr_ds_I_blr_ds_blr_conv_3_30_15
//	I_blr_ds_I_blr_ds_blr_conv_3_30_16
//	I_blr_ds_I_blr_ds_blr_conv_3_30_17
inline hw_uint<288> I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
  // # of ports in bundle: 9
    // I_blr_ds_I_blr_ds_blr_conv_3_30_9
    // I_blr_ds_I_blr_ds_blr_conv_3_30_10
    // I_blr_ds_I_blr_ds_blr_conv_3_30_11
    // I_blr_ds_I_blr_ds_blr_conv_3_30_12
    // I_blr_ds_I_blr_ds_blr_conv_3_30_13
    // I_blr_ds_I_blr_ds_blr_conv_3_30_14
    // I_blr_ds_I_blr_ds_blr_conv_3_30_15
    // I_blr_ds_I_blr_ds_blr_conv_3_30_16
    // I_blr_ds_I_blr_ds_blr_conv_3_30_17

	hw_uint<288> result;
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_9_res = I_blr_ds_I_blr_ds_blr_conv_3_30_9_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<0, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_9_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_10_res = I_blr_ds_I_blr_ds_blr_conv_3_30_10_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<32, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_10_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_11_res = I_blr_ds_I_blr_ds_blr_conv_3_30_11_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<64, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_11_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_12_res = I_blr_ds_I_blr_ds_blr_conv_3_30_12_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<96, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_12_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_13_res = I_blr_ds_I_blr_ds_blr_conv_3_30_13_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<128, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_13_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_14_res = I_blr_ds_I_blr_ds_blr_conv_3_30_14_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<160, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_14_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_15_res = I_blr_ds_I_blr_ds_blr_conv_3_30_15_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<192, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_15_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_16_res = I_blr_ds_I_blr_ds_blr_conv_3_30_16_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<224, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_16_res);
	hw_uint<32>  I_blr_ds_I_blr_ds_blr_conv_3_30_17_res = I_blr_ds_I_blr_ds_blr_conv_3_30_17_select(I_blr_ds, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
	set_at<256, 288>(result, I_blr_ds_I_blr_ds_blr_conv_3_30_17_res);
	return result;
}

// I_blr_ds_id0_write
//	I_blr_ds_I_blr_ds_id0_4
inline void I_blr_ds_I_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_id0_write, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c, int dynamic_address) {
	hw_uint<32>  I_blr_ds_I_blr_ds_id0_4_res = I_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_I_blr_ds_id0_4_write(I_blr_ds_I_blr_ds_id0_4_res, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c, dynamic_address);
}

#include "hw_classes.h"

struct I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_7_cache {
	// RAM Box: {[0, 10], [0, 10]}
	// Capacity: 39
	// # of read delays: 39
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38
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
  // # of banks: 1
  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_7_cache I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_7;
};



inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_write(hw_uint<32> & I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
  I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_7.push(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8);
}

inline hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_7_select(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_blr_I_blr_ds_blr_ds_id0_7 read pattern: { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> I_blr_ds_blr[2I_blr_ds_blr_ds_r, 2I_blr_ds_blr_ds_c] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
  // Read schedule : { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> [11 + 3I_blr_ds_blr_ds_r, 11 + 3I_blr_ds_blr_ds_c, 4] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
  // Write schedule: { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
  auto value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8 = I_blr_ds_blr.I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_to_I_blr_ds_blr_I_blr_ds_blr_ds_id0_7.peek(/* one reader or all rams */ (-3 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0) ? (1) : (-1 + I_blr_ds_blr_ds_c == 0 && -5 + I_blr_ds_blr_ds_r == 0) ? (2) : (-4 + I_blr_ds_blr_ds_r == 0) ? ((12 - 2 * I_blr_ds_blr_ds_c)) : ((-I_blr_ds_blr_ds_r) % 2 == 0 && 2 - I_blr_ds_blr_ds_r >= 0) ? ((((76 - 13 * I_blr_ds_blr_ds_r) - 4 * I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -5 + I_blr_ds_blr_ds_r == 0 && 2 - I_blr_ds_blr_ds_c >= 0) ? (((4 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0) ? (((30 - I_blr_ds_blr_ds_c))/2) : ((-I_blr_ds_blr_ds_c) % 2 == 0 && -1 + I_blr_ds_blr_ds_r == 0) ? (((56 - I_blr_ds_blr_ds_c))/2) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -3 + I_blr_ds_blr_ds_r == 0) ? (((31 - I_blr_ds_blr_ds_c))/2) : ((-1 - I_blr_ds_blr_ds_c) % 2 == 0 && -1 + I_blr_ds_blr_ds_r == 0) ? (((57 - I_blr_ds_blr_ds_c))/2) : 0);
  return value_I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8;
  return 0;
}

// # of bundles = 2
// I_blr_ds_blr_conv_3_30_write
//	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8
inline void I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(hw_uint<32>& I_blr_ds_blr_conv_3_30_write, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c, int dynamic_address) {
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_res = I_blr_ds_blr_conv_3_30_write.extract<0, 31>();
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_write(I_blr_ds_blr_I_blr_ds_blr_conv_3_30_8_res, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c, dynamic_address);
}

// I_blr_ds_blr_ds_id0_read
//	I_blr_ds_blr_I_blr_ds_blr_ds_id0_7
inline hw_uint<32> I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c, int dynamic_address) {
  // # of ports in bundle: 1
    // I_blr_ds_blr_I_blr_ds_blr_ds_id0_7

	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_I_blr_ds_blr_ds_id0_7_res = I_blr_ds_blr_I_blr_ds_blr_ds_id0_7_select(I_blr_ds_blr, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c, dynamic_address);
	set_at<0, 32>(result, I_blr_ds_blr_I_blr_ds_blr_ds_id0_7_res);
	return result;
}

#include "hw_classes.h"

struct I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3_cache {
	// RAM Box: {[0, 5], [0, 5]}
	// Capacity: 12
	// # of read delays: 12
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
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
  // # of banks: 1
  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3_cache I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3;
};



inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_write(hw_uint<32> & I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c, int dynamic_address) {
  I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3.push(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6);
}

inline hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3_select(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3 read pattern: { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> I_blr_ds_blr_ds[I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
  // Read schedule : { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> [16 + 2I_blr_ds_blr_ds_out_r, 16 + 2I_blr_ds_blr_ds_out_c, 5] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
  // Write schedule: { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> [11 + 3I_blr_ds_blr_ds_r, 11 + 3I_blr_ds_blr_ds_c, 4] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
  auto value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6 = I_blr_ds_blr_ds.I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_to_I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3.peek(/* one reader or all rams */ (-5 + I_blr_ds_blr_ds_out_r == 0 && 2 - I_blr_ds_blr_ds_out_c >= 0) ? (1) : (-5 + I_blr_ds_blr_ds_out_c == 0 && 1 - I_blr_ds_blr_ds_out_r >= 0) ? (6) : (-2 + I_blr_ds_blr_ds_out_c == 0 && -2 + I_blr_ds_blr_ds_out_r == 0) ? (7) : ((-3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) || (-2 + I_blr_ds_blr_ds_out_c == 0 && -3 + I_blr_ds_blr_ds_out_r >= 0 && 4 - I_blr_ds_blr_ds_out_r >= 0)) ? ((5 - I_blr_ds_blr_ds_out_c)) : (4 - I_blr_ds_blr_ds_out_c >= 0 && 1 - I_blr_ds_blr_ds_out_r >= 0) ? ((11 - I_blr_ds_blr_ds_out_c)) : (-5 + I_blr_ds_blr_ds_out_c == 0 && -2 + I_blr_ds_blr_ds_out_r == 0) ? (6) : (-2 + I_blr_ds_blr_ds_out_r == 0 && I_blr_ds_blr_ds_out_c - 3*floord(1 + I_blr_ds_blr_ds_out_c, 3) >= 0) ? ((7 - floord(1 + I_blr_ds_blr_ds_out_c, 3))) : 0);
  return value_I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6;
  return 0;
}

// # of bundles = 2
// I_blr_ds_blr_ds_id0_write
//	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6
inline void I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(hw_uint<32>& I_blr_ds_blr_ds_id0_write, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c, int dynamic_address) {
	hw_uint<32>  I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_res = I_blr_ds_blr_ds_id0_write.extract<0, 31>();
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_6_res, I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c, dynamic_address);
}

// store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read
//	I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3
inline hw_uint<32> I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c, int dynamic_address) {
  // # of ports in bundle: 1
    // I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3

	hw_uint<32> result;
	hw_uint<32>  I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3_res = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3_select(I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c, dynamic_address);
	set_at<0, 32>(result, I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_3_res);
	return result;
}

// Total re-use buffer capacity: 4704 bits


// Operation logic
inline void store_I_from_in(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int pr, int pc) {
  // Dynamic address computation

	// Consume: in
	auto in_pr_c__pc_value = in.read();
	// Produce: I
	I_store_I_from_in_write_bundle_write(/* arg names */in_pr_c__pc_value, I, root, pr, pc, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_conv_3_30(I_cache& I, I_blr_cache& I_blr, int root, int I_blr_r, int I_blr_c) {
  // Dynamic address computation

	// Consume: I
	auto I_I_blr_r__p__0_c__I_blr_c__p__0_value = I_I_blr_conv_3_30_read_bundle_read(I/* source_delay */, root, I_blr_r, I_blr_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(I_I_blr_r__p__0_c__I_blr_c__p__0_value);
	// Produce: I_blr
	I_blr_I_blr_conv_3_30_write_bundle_write(/* arg names */compute_result, I_blr, root, I_blr_r, I_blr_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_ds_id0(I_blr_cache& I_blr, I_blr_ds_cache& I_blr_ds, int root, int I_blr_ds_r, int I_blr_ds_c) {
  // Dynamic address computation

	// Consume: I_blr
	auto I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value = I_blr_I_blr_ds_id0_read_bundle_read(I_blr/* source_delay */, root, I_blr_ds_r, I_blr_ds_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(I_blr_2_m_I_blr_ds_r_c__2_m_I_blr_ds_c_value);
	// Produce: I_blr_ds
	I_blr_ds_I_blr_ds_id0_write_bundle_write(/* arg names */compute_result, I_blr_ds, root, I_blr_ds_r, I_blr_ds_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_ds_blr_conv_3_30(I_blr_ds_cache& I_blr_ds, I_blr_ds_blr_cache& I_blr_ds_blr, int root, int I_blr_ds_blr_r, int I_blr_ds_blr_c) {
  // Dynamic address computation

	// Consume: I_blr_ds
	auto I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value = I_blr_ds_I_blr_ds_blr_conv_3_30_read_bundle_read(I_blr_ds/* source_delay */, root, I_blr_ds_blr_r, I_blr_ds_blr_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = conv_3_3(I_blr_ds_I_blr_ds_blr_r__p__0_c__I_blr_ds_blr_c__p__0_value);
	// Produce: I_blr_ds_blr
	I_blr_ds_blr_I_blr_ds_blr_conv_3_30_write_bundle_write(/* arg names */compute_result, I_blr_ds_blr, root, I_blr_ds_blr_r, I_blr_ds_blr_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void I_blr_ds_blr_ds_id0(I_blr_ds_blr_cache& I_blr_ds_blr, I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, int root, int I_blr_ds_blr_ds_r, int I_blr_ds_blr_ds_c) {
  // Dynamic address computation

	// Consume: I_blr_ds_blr
	auto I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value = I_blr_ds_blr_I_blr_ds_blr_ds_id0_read_bundle_read(I_blr_ds_blr/* source_delay */, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(I_blr_ds_blr_2_m_I_blr_ds_blr_ds_r_c__2_m_I_blr_ds_blr_ds_c_value);
	// Produce: I_blr_ds_blr_ds
	I_blr_ds_blr_ds_I_blr_ds_blr_ds_id0_write_bundle_write(/* arg names */compute_result, I_blr_ds_blr_ds, root, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(I_blr_ds_blr_ds_cache& I_blr_ds_blr_ds, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */I_blr_ds_blr_ds_out, int root, int I_blr_ds_blr_ds_out_r, int I_blr_ds_blr_ds_out_c) {
  // Dynamic address computation

	// Consume: I_blr_ds_blr_ds
	auto I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value = I_blr_ds_blr_ds_store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_read_bundle_read(I_blr_ds_blr_ds/* source_delay */, root, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: I_blr_ds_blr_ds_out
	I_blr_ds_blr_ds_out.write(I_blr_ds_blr_ds_I_blr_ds_blr_ds_out_r_c__I_blr_ds_blr_ds_out_c_value);

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
//   { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> [16 + 2I_blr_ds_blr_ds_out_r, 16 + 2I_blr_ds_blr_ds_out_c, 5] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
// Condition for store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds(((-i0 + 2*floord(i0, 2) == 0) && (-i1 + 2*floord(i1, 2) == 0) && (-5 + i2 == 0) && (-16 + i0 >= 0) && (26 - i0 >= 0) && (-16 + i1 >= 0) && (26 - i1 >= 0)))
//   { I_blr_ds_id0[root = 0, I_blr_ds_r, I_blr_ds_c] -> [2 + 2I_blr_ds_r, 2 + 2I_blr_ds_c, 2] : 0 <= I_blr_ds_r <= 14 and 0 <= I_blr_ds_c <= 14 }
// Condition for I_blr_ds_id0(((-i0 + 2*floord(i0, 2) == 0) && (-i1 + 2*floord(i1, 2) == 0) && (-2 + i2 == 0) && (-2 + i0 >= 0) && (30 - i0 >= 0) && (-2 + i1 >= 0) && (30 - i1 >= 0)))
//   { I_blr_ds_blr_ds_id0[root = 0, I_blr_ds_blr_ds_r, I_blr_ds_blr_ds_c] -> [11 + 3I_blr_ds_blr_ds_r, 11 + 3I_blr_ds_blr_ds_c, 4] : 0 <= I_blr_ds_blr_ds_r <= 5 and 0 <= I_blr_ds_blr_ds_c <= 5 }
// Condition for I_blr_ds_blr_ds_id0(((-1 - i0 + 3*floord(1 + i0, 3) == 0) && (-1 - i1 + 3*floord(1 + i1, 3) == 0) && (-4 + i2 == 0) && (-11 + i0 >= 0) && (26 - i0 >= 0) && (-11 + i1 >= 0) && (26 - i1 >= 0)))
//   { I_blr_conv_3_30[root = 0, I_blr_r, I_blr_c] -> [2 + I_blr_r, 2 + I_blr_c, 1] : 0 <= I_blr_r <= 29 and 0 <= I_blr_c <= 29 }
// Condition for I_blr_conv_3_30(((-1 + i2 == 0) && (-2 + i0 >= 0) && (31 - i0 >= 0) && (-2 + i1 >= 0) && (31 - i1 >= 0)))
//   { store_I_from_in[root = 0, pr, pc] -> [pr, pc, 0] : 0 <= pr <= 31 and 0 <= pc <= 31 }
// Condition for store_I_from_in(((i2 == 0) && (i0 >= 0) && (31 - i0 >= 0) && (i1 >= 0) && (31 - i1 >= 0)))
//   { I_blr_ds_blr_conv_3_30[root = 0, I_blr_ds_blr_r, I_blr_ds_blr_c] -> [6 + 2I_blr_ds_blr_r, 6 + 2I_blr_ds_blr_c, 3] : 0 <= I_blr_ds_blr_r <= 12 and 0 <= I_blr_ds_blr_c <= 12 }
// Condition for I_blr_ds_blr_conv_3_30(((-i0 + 2*floord(i0, 2) == 0) && (-i1 + 2*floord(i1, 2) == 0) && (-3 + i2 == 0) && (-6 + i0 >= 0) && (30 - i0 >= 0) && (-6 + i1 >= 0) && (30 - i1 >= 0)))

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

void gaussian_pyramid_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */I_blr_ds_blr_ds_out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gaussian_pyramid(in, I_blr_ds_blr_ds_out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds[root = 0, I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] -> I_blr_ds_blr_ds_out[I_blr_ds_blr_ds_out_r, I_blr_ds_blr_ds_out_c] : 0 <= I_blr_ds_blr_ds_out_r <= 5 and 0 <= I_blr_ds_blr_ds_out_c <= 5 }
const int store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0_num_transfers = 36;
  // { store_I_from_in[root = 0, pr, pc] -> in[pr, pc] : 0 <= pr <= 31 and 0 <= pc <= 31 }
const int store_I_from_in_read_pipe0_num_transfers = 1024;


extern "C" {

void gaussian_pyramid_accel(hw_uint<32>* store_I_from_in_read_pipe0, hw_uint<32>* store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = store_I_from_in_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = store_I_from_in_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > store_I_from_in_read_pipe0_channel;
  static HWStream<hw_uint<32> > store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0_channel;

  burst_read<32>(store_I_from_in_read_pipe0, store_I_from_in_read_pipe0_channel, store_I_from_in_read_pipe0_num_transfers*size);

  gaussian_pyramid_wrapper(store_I_from_in_read_pipe0_channel, store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0_channel, size);

  burst_write<32>(store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0, store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0_channel, store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gaussian_pyramid_rdai(HWStream<hw_uint<32> >& store_I_from_in_read_pipe0, HWStream<hw_uint<32> >&  store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = store_I_from_in_read_pipe0
#pragma HLS INTERFACE axis register port = store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gaussian_pyramid(store_I_from_in_read_pipe0, store_I_blr_ds_blr_ds_out_from_I_blr_ds_blr_ds_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

