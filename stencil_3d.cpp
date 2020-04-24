#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "conv_3x3.h"

#include "hw_classes.h"

struct I_I_id0_0_merged_banks_27_cache {
	// RAM Box: {[0, 31], [0, 31], [0, 31]}
	// Capacity: 2115
	// # of read delays: 27
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 29> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 29> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	fifo<hw_uint<16>, 957> f17;
	hw_uint<16> f18;
	hw_uint<16> f20;
	hw_uint<16> f22;
	fifo<hw_uint<16>, 29> f23;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 29> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	fifo<hw_uint<16>, 957> f35;
	hw_uint<16> f36;
	hw_uint<16> f38;
	hw_uint<16> f40;
	fifo<hw_uint<16>, 29> f41;
	hw_uint<16> f42;
	hw_uint<16> f44;
	hw_uint<16> f46;
	fifo<hw_uint<16>, 29> f47;
	hw_uint<16> f48;
	hw_uint<16> f50;
	hw_uint<16> f52;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_31() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_32() {
		return f6;
	}

	inline hw_uint<16> peek_33() {
		return f8;
	}

	inline hw_uint<16> peek_34() {
		return f10;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_64() {
		return f12;
	}

	inline hw_uint<16> peek_65() {
		return f14;
	}

	inline hw_uint<16> peek_66() {
		return f16;
	}

	inline hw_uint<16> peek_1023() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f17 inter false
#endif //__VIVADO_SYNTH__
		return f17.back();
	}

	inline hw_uint<16> peek_1024() {
		return f18;
	}

	inline hw_uint<16> peek_1025() {
		return f20;
	}

	inline hw_uint<16> peek_1026() {
		return f22;
	}

	inline hw_uint<16> peek_1055() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f23 inter false
#endif //__VIVADO_SYNTH__
		return f23.back();
	}

	inline hw_uint<16> peek_1056() {
		return f24;
	}

	inline hw_uint<16> peek_1057() {
		return f26;
	}

	inline hw_uint<16> peek_1058() {
		return f28;
	}

	inline hw_uint<16> peek_1087() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f29 inter false
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_1088() {
		return f30;
	}

	inline hw_uint<16> peek_1089() {
		return f32;
	}

	inline hw_uint<16> peek_1090() {
		return f34;
	}

	inline hw_uint<16> peek_2047() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f35 inter false
#endif //__VIVADO_SYNTH__
		return f35.back();
	}

	inline hw_uint<16> peek_2048() {
		return f36;
	}

	inline hw_uint<16> peek_2049() {
		return f38;
	}

	inline hw_uint<16> peek_2050() {
		return f40;
	}

	inline hw_uint<16> peek_2079() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f41 inter false
#endif //__VIVADO_SYNTH__
		return f41.back();
	}

	inline hw_uint<16> peek_2080() {
		return f42;
	}

	inline hw_uint<16> peek_2081() {
		return f44;
	}

	inline hw_uint<16> peek_2082() {
		return f46;
	}

	inline hw_uint<16> peek_2111() {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f47 inter false
#endif //__VIVADO_SYNTH__
		return f47.back();
	}

	inline hw_uint<16> peek_2112() {
		return f48;
	}

	inline hw_uint<16> peek_2113() {
		return f50;
	}

	inline hw_uint<16> peek_2114() {
		return f52;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f52 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f52 = f50;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f50 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f50 = f48;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f48 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f48 = f47.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f47 inter false
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f47.push(f46);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f46 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f46 = f44;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f44 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f44 = f42;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f42 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f42 = f41.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f41 inter false
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f41.push(f40);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f40 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f40 = f38;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f38 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f36 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 957
    f36 = f35.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f35 inter false
#endif //__VIVADO_SYNTH__
    // cap: 957 reading from capacity: 1
    f35.push(f34);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f34 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f32 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f30 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f29 inter false
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f29.push(f28);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f28 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f26 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f24 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f24 = f23.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f23 inter false
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f23.push(f22);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f22 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f20 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f20 = f18;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f18 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 957
    f18 = f17.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f17 inter false
#endif //__VIVADO_SYNTH__
    // cap: 957 reading from capacity: 1
    f17.push(f16);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f16 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f14 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f12 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f11 inter false
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f11.push(f10);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f10 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f8 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f6 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 29
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f5 inter false
#endif //__VIVADO_SYNTH__
    // cap: 29 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f4 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=f2 inter false
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct I_cache {
  I_I_id0_0_merged_banks_27_cache I_I_id0_0_merged_banks_27;
};



inline void I_I_id0_0_write(hw_uint<16>& I_I_id0_0, I_cache& I, int root, int ir, int ic, int ib) {
  I.I_I_id0_0_merged_banks_27.push(I_I_id0_0);
}

inline hw_uint<16> I_out_blur_270_10_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_10 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 2 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2049 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 2049 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2049();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_11_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_11 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 2 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2048 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (2019 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 28; out_blur_270[root, xr, xc, xb] -> 2048 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> ((1091 + 32 * xc) + xb) : root = 0 and xc = 29 and xb = 29 and 0 <= xr <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2048();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_12_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_12 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1090 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1090();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_13_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_13 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1089 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1089();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_14_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_14 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1088 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (1059 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1088();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_15_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_15 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 1 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1058 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1058();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_16_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_16 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 1 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1057 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1057();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_17_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_17 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 1 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1056 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (1027 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1056();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_18_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_18 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 2 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1026 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 1026 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1026();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_19_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_19 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 2 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1025 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 1025 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1025();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_20_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_20 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[1 + xr, 2 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1024 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (995 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 28; out_blur_270[root, xr, xc, xb] -> 1024 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> ((67 + 32 * xc) + xb) : root = 0 and xc = 29 and xb = 29 and 0 <= xr <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1024();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_21_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_21 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 66 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_66();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_22_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_22 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 65 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_65();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_23_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_23 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 64 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (35 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_64();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_24_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_24 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 1 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 34 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_34();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_25_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_25 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 1 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 33 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_33();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_26_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_26 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 1 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 32 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (3 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_32();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_27_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_27 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 2 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_28_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_28 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 2 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 1 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_1();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_29_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_29 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[2 + xr, 2 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: {  }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_0();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_3_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_3 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2114 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2114();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_4_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_4 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2113 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2113();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_5_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_5 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2112 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (2083 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2112();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_6_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_6 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 1 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2082 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2082();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_7_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_7 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 1 + xc, 1 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2081 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2081();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_8_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_8 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 1 + xc, 2 + xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2080 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 28; out_blur_270[root, xr, xc, xb] -> (2051 + xb) : root = 0 and xb = 29 and 0 <= xr <= 29 and 0 <= xc <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2080();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> I_out_blur_270_9_select(I_cache& I, int root, int xr, int xc, int xb) {
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
  // I_out_blur_270_9 read pattern: { out_blur_270[root = 0, xr, xc, xb] -> I[xr, 2 + xc, xb] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Read schedule : { out_blur_270[root = 0, xr, xc, xb] -> [2 + xr, 2 + xc, 2 + xb, 1] : 0 <= xr <= 29 and 0 <= xc <= 29 and 0 <= xb <= 29 }
  // Write schedule: { I_id0[root = 0, ir, ic, ib] -> [ir, ic, ib, 0] : 0 <= ir <= 31 and 0 <= ic <= 31 and 0 <= ib <= 31 }
  // DD fold: { out_blur_270[root, xr, xc, xb] -> 2050 : root = 0 and 0 <= xr <= 29 and 0 <= xc <= 28 and 0 <= xb <= 29; out_blur_270[root, xr, xc, xb] -> 2050 : root = 0 and xc = 29 and 0 <= xr <= 29 and 0 <= xb <= 29 }
  auto value_I_I_id0_0 = I.I_I_id0_0_merged_banks_27.peek_2050();
  return value_I_I_id0_0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " root = " << root  << " xr = " << xr  << " xc = " << xc  << " xb = " << xb  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// I_id0_write
//	I_I_id0_0
inline void I_I_id0_write_bundle_write(hw_uint<16>& I_id0_write, I_cache& I, int root, int ir, int ic, int ib) {
	hw_uint<16> I_I_id0_0_res = I_id0_write.extract<0, 15>();
	I_I_id0_0_write(I_I_id0_0_res, I, root, ir, ic, ib);
}

// out_blur_270_read
//	I_out_blur_270_3
//	I_out_blur_270_4
//	I_out_blur_270_5
//	I_out_blur_270_6
//	I_out_blur_270_7
//	I_out_blur_270_8
//	I_out_blur_270_9
//	I_out_blur_270_10
//	I_out_blur_270_11
//	I_out_blur_270_12
//	I_out_blur_270_13
//	I_out_blur_270_14
//	I_out_blur_270_15
//	I_out_blur_270_16
//	I_out_blur_270_17
//	I_out_blur_270_18
//	I_out_blur_270_19
//	I_out_blur_270_20
//	I_out_blur_270_21
//	I_out_blur_270_22
//	I_out_blur_270_23
//	I_out_blur_270_24
//	I_out_blur_270_25
//	I_out_blur_270_26
//	I_out_blur_270_27
//	I_out_blur_270_28
//	I_out_blur_270_29
inline hw_uint<432> I_out_blur_270_read_bundle_read(I_cache& I, int root, int xr, int xc, int xb) {
	hw_uint<432> result;
	hw_uint<16> I_out_blur_270_3_res = I_out_blur_270_3_select(I, root, xr, xc, xb);
	set_at<0, 432>(result, I_out_blur_270_3_res);
	hw_uint<16> I_out_blur_270_4_res = I_out_blur_270_4_select(I, root, xr, xc, xb);
	set_at<16, 432>(result, I_out_blur_270_4_res);
	hw_uint<16> I_out_blur_270_5_res = I_out_blur_270_5_select(I, root, xr, xc, xb);
	set_at<32, 432>(result, I_out_blur_270_5_res);
	hw_uint<16> I_out_blur_270_6_res = I_out_blur_270_6_select(I, root, xr, xc, xb);
	set_at<48, 432>(result, I_out_blur_270_6_res);
	hw_uint<16> I_out_blur_270_7_res = I_out_blur_270_7_select(I, root, xr, xc, xb);
	set_at<64, 432>(result, I_out_blur_270_7_res);
	hw_uint<16> I_out_blur_270_8_res = I_out_blur_270_8_select(I, root, xr, xc, xb);
	set_at<80, 432>(result, I_out_blur_270_8_res);
	hw_uint<16> I_out_blur_270_9_res = I_out_blur_270_9_select(I, root, xr, xc, xb);
	set_at<96, 432>(result, I_out_blur_270_9_res);
	hw_uint<16> I_out_blur_270_10_res = I_out_blur_270_10_select(I, root, xr, xc, xb);
	set_at<112, 432>(result, I_out_blur_270_10_res);
	hw_uint<16> I_out_blur_270_11_res = I_out_blur_270_11_select(I, root, xr, xc, xb);
	set_at<128, 432>(result, I_out_blur_270_11_res);
	hw_uint<16> I_out_blur_270_12_res = I_out_blur_270_12_select(I, root, xr, xc, xb);
	set_at<144, 432>(result, I_out_blur_270_12_res);
	hw_uint<16> I_out_blur_270_13_res = I_out_blur_270_13_select(I, root, xr, xc, xb);
	set_at<160, 432>(result, I_out_blur_270_13_res);
	hw_uint<16> I_out_blur_270_14_res = I_out_blur_270_14_select(I, root, xr, xc, xb);
	set_at<176, 432>(result, I_out_blur_270_14_res);
	hw_uint<16> I_out_blur_270_15_res = I_out_blur_270_15_select(I, root, xr, xc, xb);
	set_at<192, 432>(result, I_out_blur_270_15_res);
	hw_uint<16> I_out_blur_270_16_res = I_out_blur_270_16_select(I, root, xr, xc, xb);
	set_at<208, 432>(result, I_out_blur_270_16_res);
	hw_uint<16> I_out_blur_270_17_res = I_out_blur_270_17_select(I, root, xr, xc, xb);
	set_at<224, 432>(result, I_out_blur_270_17_res);
	hw_uint<16> I_out_blur_270_18_res = I_out_blur_270_18_select(I, root, xr, xc, xb);
	set_at<240, 432>(result, I_out_blur_270_18_res);
	hw_uint<16> I_out_blur_270_19_res = I_out_blur_270_19_select(I, root, xr, xc, xb);
	set_at<256, 432>(result, I_out_blur_270_19_res);
	hw_uint<16> I_out_blur_270_20_res = I_out_blur_270_20_select(I, root, xr, xc, xb);
	set_at<272, 432>(result, I_out_blur_270_20_res);
	hw_uint<16> I_out_blur_270_21_res = I_out_blur_270_21_select(I, root, xr, xc, xb);
	set_at<288, 432>(result, I_out_blur_270_21_res);
	hw_uint<16> I_out_blur_270_22_res = I_out_blur_270_22_select(I, root, xr, xc, xb);
	set_at<304, 432>(result, I_out_blur_270_22_res);
	hw_uint<16> I_out_blur_270_23_res = I_out_blur_270_23_select(I, root, xr, xc, xb);
	set_at<320, 432>(result, I_out_blur_270_23_res);
	hw_uint<16> I_out_blur_270_24_res = I_out_blur_270_24_select(I, root, xr, xc, xb);
	set_at<336, 432>(result, I_out_blur_270_24_res);
	hw_uint<16> I_out_blur_270_25_res = I_out_blur_270_25_select(I, root, xr, xc, xb);
	set_at<352, 432>(result, I_out_blur_270_25_res);
	hw_uint<16> I_out_blur_270_26_res = I_out_blur_270_26_select(I, root, xr, xc, xb);
	set_at<368, 432>(result, I_out_blur_270_26_res);
	hw_uint<16> I_out_blur_270_27_res = I_out_blur_270_27_select(I, root, xr, xc, xb);
	set_at<384, 432>(result, I_out_blur_270_27_res);
	hw_uint<16> I_out_blur_270_28_res = I_out_blur_270_28_select(I, root, xr, xc, xb);
	set_at<400, 432>(result, I_out_blur_270_28_res);
	hw_uint<16> I_out_blur_270_29_res = I_out_blur_270_29_select(I, root, xr, xc, xb);
	set_at<416, 432>(result, I_out_blur_270_29_res);
	return result;
}



// Operation logic
inline void I_id0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in, I_cache& I, int root, int ir, int ic, int ib) {
	// Consume: in
	auto in_ir_c__ic_c__ib_value = in.read();
	auto compute_result = id(in_ir_c__ic_c__ib_value);
	// Produce: I
	I_I_id0_write_bundle_write(compute_result, I, root, ir, ic, ib);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "I_id0," << (1*root + 0) << ", " << ir<< "," << ic<< "," << ib<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

inline void out_blur_270(I_cache& I, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */out, int root, int xr, int xc, int xb) {
	// Consume: I
	auto I_xr__p__0_c__xc__p__0_c__xb__p__0_value = I_out_blur_270_read_bundle_read(I/* source_delay */, root, xr, xc, xb);
#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "out_blur_270_I," << root<< "," << xr<< "," << xc<< "," << xb<< "," <<  I_xr__p__0_c__xc__p__0_c__xb__p__0_value << endl;
#endif //__VIVADO_SYNTH__
	auto compute_result = blur_27(I_xr__p__0_c__xc__p__0_c__xb__p__0_value);
	// Produce: out
	out.write(compute_result);
#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "out_blur_270," << (1*root + 0) << ", " << xr<< "," << xc<< "," << xb<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__
}

// Driver function
void stencil_3d(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<16> >& /* get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("stencil_3d_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  I_cache I;
#ifdef __VIVADO_SYNTH__
#pragma HLS dependence variable=I inter false
#endif //__VIVADO_SYNTH__
	for (int c0 = 0; c0 <= 31; c0 += 1)
	  for (int c1 = 0; c1 <= 31; c1 += 1)
	    for (int c2 = 0; c2 <= 31; c2 += 1) {
	I_id0(in, I, 0, c0, c1, c2);
	      if (c0 >= 2 && c1 >= 2 && c2 >= 2)
	out_blur_270(I, out, 0, c0 - 2, c1 - 2, c2 - 2);
	    }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}
