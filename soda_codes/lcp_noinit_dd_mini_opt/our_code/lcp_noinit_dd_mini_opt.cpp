#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "lcp_noinit_dd_mini_opt_compute_units.h"

#include "hw_classes.h"

struct denoised_denoised_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 1920], [-1, 10]}
	// Capacity: 3847
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1919> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1919> f11;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1922() {
		return f6;
	}

	inline hw_uint<16> peek_1923() {
		return f8;
	}

	inline hw_uint<16> peek_1924() {
		return f10;
	}

	inline hw_uint<16> peek_3843() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3844() {
		return f12;
	}

	inline hw_uint<16> peek_3845() {
		return f14;
	}

	inline hw_uint<16> peek_3846() {
		return f16;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1919
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1919
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
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

struct denoised_cache {
  denoised_denoised_update_0_write0_merged_banks_9_cache denoised_denoised_update_0_write0_merged_banks_9;
};



inline void denoised_denoised_update_0_write0_write(hw_uint<16>& denoised_denoised_update_0_write0, denoised_cache& denoised, int d0, int d1) {
  denoised.denoised_denoised_update_0_write0_merged_banks_9.push(denoised_denoised_update_0_write0);
}

inline hw_uint<16> lcp_noinit_dd_mini_rd0_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd0 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[-1 + d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 3846 : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_3846();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd1_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd1 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[-1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 1924 : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_1924();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd2_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd2 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[-1 + d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 2 : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_2();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd3_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd3 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 3845 : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_3845();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd4_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd4 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 1923 : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_1923();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd5_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd5 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 1 : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_1();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd6_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd6 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[1 + d0, -1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 3844 : 0 <= d0 <= 1918 and 0 <= d1 <= 9; lcp_noinit_dd_mini_update_0[d0, d1] -> (1925 + d0) : d0 = 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_3844();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd7_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd7 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: { lcp_noinit_dd_mini_update_0[d0, d1] -> 1922 : 0 <= d0 <= 1918 and 0 <= d1 <= 9; lcp_noinit_dd_mini_update_0[d0, d1] -> (3 + d0) : d0 = 1919 and 0 <= d1 <= 9 }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_1922();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> lcp_noinit_dd_mini_rd8_select(denoised_cache& denoised, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lcp_noinit_dd_mini_rd8 read pattern: { lcp_noinit_dd_mini_update_0[d0, d1] -> denoised[1 + d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Read schedule : { lcp_noinit_dd_mini_update_0[d0, d1] -> [3 + d1, 3 + d0, 3] : 0 <= d0 <= 1919 and 0 <= d1 <= 9 }
  // Write schedule: { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // DD fold: {  }
  auto value_denoised_denoised_update_0_write0 = denoised.denoised_denoised_update_0_write0_merged_banks_9.peek_0();
  return value_denoised_denoised_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoised_update_0_write
//	denoised_denoised_update_0_write0
inline void denoised_denoised_update_0_write_bundle_write(hw_uint<16>& denoised_update_0_write, denoised_cache& denoised, int d0, int d1) {
	hw_uint<16> denoised_denoised_update_0_write0_res = denoised_update_0_write.extract<0, 15>();
	denoised_denoised_update_0_write0_write(denoised_denoised_update_0_write0_res, denoised, d0, d1);
}

// lcp_noinit_dd_mini_update_0_read
//	lcp_noinit_dd_mini_rd0
//	lcp_noinit_dd_mini_rd1
//	lcp_noinit_dd_mini_rd2
//	lcp_noinit_dd_mini_rd3
//	lcp_noinit_dd_mini_rd4
//	lcp_noinit_dd_mini_rd5
//	lcp_noinit_dd_mini_rd6
//	lcp_noinit_dd_mini_rd7
//	lcp_noinit_dd_mini_rd8
inline hw_uint<144> denoised_lcp_noinit_dd_mini_update_0_read_bundle_read(denoised_cache& denoised, int d0, int d1) {
  // # of ports in bundle: 9
    // lcp_noinit_dd_mini_rd0
    // lcp_noinit_dd_mini_rd1
    // lcp_noinit_dd_mini_rd2
    // lcp_noinit_dd_mini_rd3
    // lcp_noinit_dd_mini_rd4
    // lcp_noinit_dd_mini_rd5
    // lcp_noinit_dd_mini_rd6
    // lcp_noinit_dd_mini_rd7
    // lcp_noinit_dd_mini_rd8

	hw_uint<144> result;
	hw_uint<16> lcp_noinit_dd_mini_rd0_res = lcp_noinit_dd_mini_rd0_select(denoised, d0, d1);
	set_at<0, 144>(result, lcp_noinit_dd_mini_rd0_res);
	hw_uint<16> lcp_noinit_dd_mini_rd1_res = lcp_noinit_dd_mini_rd1_select(denoised, d0, d1);
	set_at<16, 144>(result, lcp_noinit_dd_mini_rd1_res);
	hw_uint<16> lcp_noinit_dd_mini_rd2_res = lcp_noinit_dd_mini_rd2_select(denoised, d0, d1);
	set_at<32, 144>(result, lcp_noinit_dd_mini_rd2_res);
	hw_uint<16> lcp_noinit_dd_mini_rd3_res = lcp_noinit_dd_mini_rd3_select(denoised, d0, d1);
	set_at<48, 144>(result, lcp_noinit_dd_mini_rd3_res);
	hw_uint<16> lcp_noinit_dd_mini_rd4_res = lcp_noinit_dd_mini_rd4_select(denoised, d0, d1);
	set_at<64, 144>(result, lcp_noinit_dd_mini_rd4_res);
	hw_uint<16> lcp_noinit_dd_mini_rd5_res = lcp_noinit_dd_mini_rd5_select(denoised, d0, d1);
	set_at<80, 144>(result, lcp_noinit_dd_mini_rd5_res);
	hw_uint<16> lcp_noinit_dd_mini_rd6_res = lcp_noinit_dd_mini_rd6_select(denoised, d0, d1);
	set_at<96, 144>(result, lcp_noinit_dd_mini_rd6_res);
	hw_uint<16> lcp_noinit_dd_mini_rd7_res = lcp_noinit_dd_mini_rd7_select(denoised, d0, d1);
	set_at<112, 144>(result, lcp_noinit_dd_mini_rd7_res);
	hw_uint<16> lcp_noinit_dd_mini_rd8_res = lcp_noinit_dd_mini_rd8_select(denoised, d0, d1);
	set_at<128, 144>(result, lcp_noinit_dd_mini_rd8_res);
	return result;
}

#include "hw_classes.h"

struct raw_raw_update_0_write0_merged_banks_25_cache {
	// RAM Box: {[-3, 1922], [-3, 12]}
	// Capacity: 7709
	// # of read delays: 25
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1921> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	fifo<hw_uint<16>, 1921> f19;
	hw_uint<16> f20;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 1921> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	hw_uint<16> f36;
	hw_uint<16> f38;
	fifo<hw_uint<16>, 1921> f39;
	hw_uint<16> f40;
	hw_uint<16> f42;
	hw_uint<16> f44;
	hw_uint<16> f46;
	hw_uint<16> f48;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3() {
		return f6;
	}

	inline hw_uint<16> peek_4() {
		return f8;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1926() {
		return f10;
	}

	inline hw_uint<16> peek_1927() {
		return f12;
	}

	inline hw_uint<16> peek_1928() {
		return f14;
	}

	inline hw_uint<16> peek_1929() {
		return f16;
	}

	inline hw_uint<16> peek_1930() {
		return f18;
	}

	inline hw_uint<16> peek_3851() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f19.back();
	}

	inline hw_uint<16> peek_3852() {
		return f20;
	}

	inline hw_uint<16> peek_3853() {
		return f22;
	}

	inline hw_uint<16> peek_3854() {
		return f24;
	}

	inline hw_uint<16> peek_3855() {
		return f26;
	}

	inline hw_uint<16> peek_3856() {
		return f28;
	}

	inline hw_uint<16> peek_5777() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_5778() {
		return f30;
	}

	inline hw_uint<16> peek_5779() {
		return f32;
	}

	inline hw_uint<16> peek_5780() {
		return f34;
	}

	inline hw_uint<16> peek_5781() {
		return f36;
	}

	inline hw_uint<16> peek_5782() {
		return f38;
	}

	inline hw_uint<16> peek_7703() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f39.back();
	}

	inline hw_uint<16> peek_7704() {
		return f40;
	}

	inline hw_uint<16> peek_7705() {
		return f42;
	}

	inline hw_uint<16> peek_7706() {
		return f44;
	}

	inline hw_uint<16> peek_7707() {
		return f46;
	}

	inline hw_uint<16> peek_7708() {
		return f48;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f48 = f46;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f46 = f44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f44 = f42;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f42 = f40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f40 = f39.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f39.push(f38);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f36 = f34;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f29.push(f28);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f24 = f22;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f20 = f19.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f19.push(f18);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f18 = f16;
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
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1921
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
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

struct raw_cache {
  raw_raw_update_0_write0_merged_banks_25_cache raw_raw_update_0_write0_merged_banks_25;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1) {
  raw.raw_raw_update_0_write0_merged_banks_25.push(raw_raw_update_0_write0);
}

inline hw_uint<16> denoised_rd0_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd0 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, -2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 7708 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7708();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd1_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd1 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 5782 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5782();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd10_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd10 read pattern: { denoised_update_0[d0, d1] -> raw[d0, -2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 7706 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7706();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd11_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd11 read pattern: { denoised_update_0[d0, d1] -> raw[d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 5780 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5780();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd12_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd12 read pattern: { denoised_update_0[d0, d1] -> raw[d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 3854 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3854();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd13_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd13 read pattern: { denoised_update_0[d0, d1] -> raw[d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 1928 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1928();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd14_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd14 read pattern: { denoised_update_0[d0, d1] -> raw[d0, 2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 2 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd15_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd15 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, -2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 7705 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7705();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd16_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd16 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 5779 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5779();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd17_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd17 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 3853 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3853();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd18_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd18 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 1927 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1927();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd19_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd19 read pattern: { denoised_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 1 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd2_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd2 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 3856 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3856();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd20_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd20 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, -2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 7704 : -1 <= d0 <= 1919 and -1 <= d1 <= 10; denoised_update_0[d0, d1] -> (5784 + d0) : d0 = 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7704();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd21_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd21 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 5778 : -1 <= d0 <= 1919 and -1 <= d1 <= 10; denoised_update_0[d0, d1] -> (3858 + d0) : d0 = 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5778();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd22_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd22 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 3852 : -1 <= d0 <= 1919 and -1 <= d1 <= 10; denoised_update_0[d0, d1] -> (1932 + d0) : d0 = 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3852();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd23_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd23 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 1926 : -1 <= d0 <= 1919 and -1 <= d1 <= 10; denoised_update_0[d0, d1] -> (6 + d0) : d0 = 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1926();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd24_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd24 read pattern: { denoised_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: {  }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd3_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd3 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 1930 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1930();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd4_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd4 read pattern: { denoised_update_0[d0, d1] -> raw[-2 + d0, 2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 4 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_4();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd5_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd5 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, -2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 7707 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7707();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd6_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd6 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, -1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 5781 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5781();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd7_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd7 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 3855 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3855();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd8_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd8 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, 1 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 1929 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1929();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> denoised_rd9_select(raw_cache& raw, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoised_rd9 read pattern: { denoised_update_0[d0, d1] -> raw[-1 + d0, 2 + d1] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Read schedule : { denoised_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1922 and -3 <= d1 <= 12 }
  // DD fold: { denoised_update_0[d0, d1] -> 3 : -1 <= d0 <= 1920 and -1 <= d1 <= 10 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3();
  return value_raw_raw_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// denoised_update_0_read
//	denoised_rd0
//	denoised_rd1
//	denoised_rd2
//	denoised_rd3
//	denoised_rd4
//	denoised_rd5
//	denoised_rd6
//	denoised_rd7
//	denoised_rd8
//	denoised_rd9
//	denoised_rd10
//	denoised_rd11
//	denoised_rd12
//	denoised_rd13
//	denoised_rd14
//	denoised_rd15
//	denoised_rd16
//	denoised_rd17
//	denoised_rd18
//	denoised_rd19
//	denoised_rd20
//	denoised_rd21
//	denoised_rd22
//	denoised_rd23
//	denoised_rd24
inline hw_uint<400> raw_denoised_update_0_read_bundle_read(raw_cache& raw, int d0, int d1) {
  // # of ports in bundle: 25
    // denoised_rd0
    // denoised_rd1
    // denoised_rd2
    // denoised_rd3
    // denoised_rd4
    // denoised_rd5
    // denoised_rd6
    // denoised_rd7
    // denoised_rd8
    // denoised_rd9
    // denoised_rd10
    // denoised_rd11
    // denoised_rd12
    // denoised_rd13
    // denoised_rd14
    // denoised_rd15
    // denoised_rd16
    // denoised_rd17
    // denoised_rd18
    // denoised_rd19
    // denoised_rd20
    // denoised_rd21
    // denoised_rd22
    // denoised_rd23
    // denoised_rd24

	hw_uint<400> result;
	hw_uint<16> denoised_rd0_res = denoised_rd0_select(raw, d0, d1);
	set_at<0, 400>(result, denoised_rd0_res);
	hw_uint<16> denoised_rd1_res = denoised_rd1_select(raw, d0, d1);
	set_at<16, 400>(result, denoised_rd1_res);
	hw_uint<16> denoised_rd2_res = denoised_rd2_select(raw, d0, d1);
	set_at<32, 400>(result, denoised_rd2_res);
	hw_uint<16> denoised_rd3_res = denoised_rd3_select(raw, d0, d1);
	set_at<48, 400>(result, denoised_rd3_res);
	hw_uint<16> denoised_rd4_res = denoised_rd4_select(raw, d0, d1);
	set_at<64, 400>(result, denoised_rd4_res);
	hw_uint<16> denoised_rd5_res = denoised_rd5_select(raw, d0, d1);
	set_at<80, 400>(result, denoised_rd5_res);
	hw_uint<16> denoised_rd6_res = denoised_rd6_select(raw, d0, d1);
	set_at<96, 400>(result, denoised_rd6_res);
	hw_uint<16> denoised_rd7_res = denoised_rd7_select(raw, d0, d1);
	set_at<112, 400>(result, denoised_rd7_res);
	hw_uint<16> denoised_rd8_res = denoised_rd8_select(raw, d0, d1);
	set_at<128, 400>(result, denoised_rd8_res);
	hw_uint<16> denoised_rd9_res = denoised_rd9_select(raw, d0, d1);
	set_at<144, 400>(result, denoised_rd9_res);
	hw_uint<16> denoised_rd10_res = denoised_rd10_select(raw, d0, d1);
	set_at<160, 400>(result, denoised_rd10_res);
	hw_uint<16> denoised_rd11_res = denoised_rd11_select(raw, d0, d1);
	set_at<176, 400>(result, denoised_rd11_res);
	hw_uint<16> denoised_rd12_res = denoised_rd12_select(raw, d0, d1);
	set_at<192, 400>(result, denoised_rd12_res);
	hw_uint<16> denoised_rd13_res = denoised_rd13_select(raw, d0, d1);
	set_at<208, 400>(result, denoised_rd13_res);
	hw_uint<16> denoised_rd14_res = denoised_rd14_select(raw, d0, d1);
	set_at<224, 400>(result, denoised_rd14_res);
	hw_uint<16> denoised_rd15_res = denoised_rd15_select(raw, d0, d1);
	set_at<240, 400>(result, denoised_rd15_res);
	hw_uint<16> denoised_rd16_res = denoised_rd16_select(raw, d0, d1);
	set_at<256, 400>(result, denoised_rd16_res);
	hw_uint<16> denoised_rd17_res = denoised_rd17_select(raw, d0, d1);
	set_at<272, 400>(result, denoised_rd17_res);
	hw_uint<16> denoised_rd18_res = denoised_rd18_select(raw, d0, d1);
	set_at<288, 400>(result, denoised_rd18_res);
	hw_uint<16> denoised_rd19_res = denoised_rd19_select(raw, d0, d1);
	set_at<304, 400>(result, denoised_rd19_res);
	hw_uint<16> denoised_rd20_res = denoised_rd20_select(raw, d0, d1);
	set_at<320, 400>(result, denoised_rd20_res);
	hw_uint<16> denoised_rd21_res = denoised_rd21_select(raw, d0, d1);
	set_at<336, 400>(result, denoised_rd21_res);
	hw_uint<16> denoised_rd22_res = denoised_rd22_select(raw, d0, d1);
	set_at<352, 400>(result, denoised_rd22_res);
	hw_uint<16> denoised_rd23_res = denoised_rd23_select(raw, d0, d1);
	set_at<368, 400>(result, denoised_rd23_res);
	hw_uint<16> denoised_rd24_res = denoised_rd24_select(raw, d0, d1);
	set_at<384, 400>(result, denoised_rd24_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
inline void raw_raw_update_0_write_bundle_write(hw_uint<16>& raw_update_0_write, raw_cache& raw, int d0, int d1) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1);
}



// Operation logic
inline void lcp_noinit_dd_mini_update_0(denoised_cache& denoised, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */lcp_noinit_dd_mini, int d0, int d1) {
	// Consume: denoised
	auto denoised_0_c__0_value = denoised_lcp_noinit_dd_mini_update_0_read_bundle_read(denoised/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lcp_noinit_dd_mini_generated_compute_unrolled_1(denoised_0_c__0_value);
	// Produce: lcp_noinit_dd_mini
	lcp_noinit_dd_mini.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void raw_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1) {
	// Consume: raw_oc
	auto raw_oc_0_c__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_0_c__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(compute_result, raw, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoised_update_0(raw_cache& raw, denoised_cache& denoised, int d0, int d1) {
	// Consume: raw
	auto raw_0_c__0_value = raw_denoised_update_0_read_bundle_read(raw/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoised_generated_compute_unrolled_1(raw_0_c__0_value);
	// Produce: denoised
	denoised_denoised_update_0_write_bundle_write(compute_result, denoised, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void lcp_noinit_dd_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */lcp_noinit_dd_mini, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("lcp_noinit_dd_mini_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  denoised_cache denoised;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // denoised_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*2]
	    // lcp_noinit_dd_mini_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*3]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -3; c0 <= 12; c0++) {
	  for (int c1 = -3; c1 <= 1922; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-3 <= c1 && c1 <= 1922) && ((c1 - 0) % 1 == 0) && (-3 <= c0 && c0 <= 12) && ((c0 - 0) % 1 == 0)) {
	raw_update_0(raw_oc, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1922) && ((c1 - 2) % 1 == 0) && (1 <= c0 && c0 <= 12) && ((c0 - 2) % 1 == 0)) {
	denoised_update_0(raw, denoised, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1922) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 12) && ((c0 - 3) % 1 == 0)) {
	lcp_noinit_dd_mini_update_0(denoised, lcp_noinit_dd_mini, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void lcp_noinit_dd_mini_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */lcp_noinit_dd_mini) {

  lcp_noinit_dd_mini_opt(raw_oc, lcp_noinit_dd_mini, 1);
}
#ifdef __VIVADO_SYNTH__
const int lcp_noinit_dd_mini_update_0_write_num_transfers = 19200;
const int raw_update_0_read_num_transfers = 30816;


extern "C" {

static void read_raw_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = raw_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_lcp_noinit_dd_mini_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = lcp_noinit_dd_mini_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void lcp_noinit_dd_mini_opt_accel(hw_uint<16>* raw_update_0_read, hw_uint<16>* lcp_noinit_dd_mini_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = lcp_noinit_dd_mini_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = lcp_noinit_dd_mini_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > raw_update_0_read_channel;
  static HWStream<hw_uint<16> > lcp_noinit_dd_mini_update_0_write_channel;

  read_raw_update_0_read(raw_update_0_read, raw_update_0_read_channel, size);

  lcp_noinit_dd_mini_opt(raw_update_0_read_channel, lcp_noinit_dd_mini_update_0_write_channel, size);

  write_lcp_noinit_dd_mini_update_0_write(lcp_noinit_dd_mini_update_0_write, lcp_noinit_dd_mini_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

