#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232_cache {
	// RAM Box: {[0, 1029], [0, 1026]}
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

struct gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
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

struct gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_cache {
  // Reader addrs...
    // { load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840[root = 0, gp_in0_1_buf8_ld315, gp_in0_1_buf8_ld314] -> gp_in0_1_buf8[gp_in0_1_buf8_ld314, gp_in0_1_buf8_ld315] : 0 <= gp_in0_1_buf8_ld315 <= 1026 and 0 <= gp_in0_1_buf8_ld314 <= 1029 }
    // { load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038[root = 0, gp_in0_1_buf8_ld319, gp_in0_1_buf8_ld318] -> gp_in0_1_buf8[3 + gp_in0_1_buf8_ld318, 3 + gp_in0_1_buf8_ld319] : 0 <= gp_in0_1_buf8_ld319 <= 1023 and 0 <= gp_in0_1_buf8_ld318 <= 1023 }
    // { load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022[root = 0, gp_in0_1_buf8_ld323, gp_in0_1_buf8_ld322] -> gp_in0_1_buf8[3 + gp_in0_1_buf8_ld322, 3 + gp_in0_1_buf8_ld323] : 0 <= gp_in0_1_buf8_ld323 <= 1023 and 0 <= gp_in0_1_buf8_ld322 <= 1023 }
  // # of banks: 3
  gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232_cache gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232;
  gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230_cache gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230;
  gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228_cache gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228;
};



inline void gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_write(hw_uint<32> & gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232.push(gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230.push(gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228.push(gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337);
}

inline hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld315, int gp_in0_1_buf8_ld314, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232 read pattern: { load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840[root = 0, gp_in0_1_buf8_ld315, gp_in0_1_buf8_ld314] -> gp_in0_1_buf8[gp_in0_1_buf8_ld314, gp_in0_1_buf8_ld315] : 0 <= gp_in0_1_buf8_ld315 <= 1026 and 0 <= gp_in0_1_buf8_ld314 <= 1029 }
  // Read schedule : { load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 17] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld319, int gp_in0_1_buf8_ld318, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230 read pattern: { load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038[root = 0, gp_in0_1_buf8_ld319, gp_in0_1_buf8_ld318] -> gp_in0_1_buf8[3 + gp_in0_1_buf8_ld318, 3 + gp_in0_1_buf8_ld319] : 0 <= gp_in0_1_buf8_ld319 <= 1023 and 0 <= gp_in0_1_buf8_ld318 <= 1023 }
  // Read schedule : { load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 12] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld323, int gp_in0_1_buf8_ld322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228 read pattern: { load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022[root = 0, gp_in0_1_buf8_ld323, gp_in0_1_buf8_ld322] -> gp_in0_1_buf8[3 + gp_in0_1_buf8_ld322, 3 + gp_in0_1_buf8_ld323] : 0 <= gp_in0_1_buf8_ld323 <= 1023 and 0 <= gp_in0_1_buf8_ld322 <= 1023 }
  // Read schedule : { load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022[d0 = 0, d1, d2] -> [0, 8 + 2d1, 5 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228.peek(/* one reader or all rams */ 1);
  return value_gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337;
  return 0;
}

// # of bundles = 4
// gp_in0_110_merged300_sm723_0982_write
//	gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337
inline void gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_write_bundle_write(hw_uint<32>& gp_in0_110_merged300_sm723_0982_write, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_res = gp_in0_110_merged300_sm723_0982_write.extract<0, 31>();
	gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_write(gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_337_res, gp_in0_1_buf8, root, gp_in0_19, gp_in0_110, dynamic_address);
}

// load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_read
//	gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232
inline hw_uint<32> gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld315, int gp_in0_1_buf8_ld314, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232_res = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232_select(gp_in0_1_buf8, root, gp_in0_1_buf8_ld315, gp_in0_1_buf8_ld314, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_232_res);
	return result;
}

// load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_read
//	gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230
inline hw_uint<32> gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld319, int gp_in0_1_buf8_ld318, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230_res = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230_select(gp_in0_1_buf8, root, gp_in0_1_buf8_ld319, gp_in0_1_buf8_ld318, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_230_res);
	return result;
}

// load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_read
//	gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228
inline hw_uint<32> gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld323, int gp_in0_1_buf8_ld322, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228_res = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228_select(gp_in0_1_buf8, root, gp_in0_1_buf8_ld323, gp_in0_1_buf8_ld322, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_228_res);
	return result;
}

struct gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9_cache {
	// RAM Box: {[0, 1028], [0, 1026]}
	// Capacity: 2063
	// # of read delays: 9
  // 0, 1, 2, 1030, 1031, 1032, 2060, 2061, 2062
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 1027> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 1027> f11;
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

	inline hw_uint<32>  peek_1029() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1030() {
		return f6;
	}

	inline hw_uint<32>  peek_1031() {
		return f8;
	}

	inline hw_uint<32>  peek_1032() {
		return f10;
	}

	inline hw_uint<32>  peek_2059() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_2060() {
		return f12;
	}

	inline hw_uint<32>  peek_2061() {
		return f14;
	}

	inline hw_uint<32>  peek_2062() {
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
    // cap: 1 reading from capacity: 1027
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1027 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1027
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1027 reading from capacity: 1
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

struct gp_in0_1_buf8_FIFO_buf481_cache {
  // Reader addrs...
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
    // { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // # of banks: 1
  gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9_cache gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9;
};



inline void gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_write(hw_uint<32> & gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237, gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_1_buf8_to_gp_1313_ld483, int gp_in0_1_buf8_to_gp_1313_ld482, int dynamic_address) {
  gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.push(gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237);
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_2();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_1();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_0();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_1032();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_1031();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_1030();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_2062();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_2061();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328 read pattern: { gp_in0_218_merged303_sm727_0988[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 513 }
  // Read schedule : { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_merged_banks_9.peek_2060();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237;
  return 0;
}

// # of bundles = 2
// gp_in0_218_merged303_sm727_0988_read
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328
inline hw_uint<288> gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_read_bundle_read(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328

	hw_uint<288> result;
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<0, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_320_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<32, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_321_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<64, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_322_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<96, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_323_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<128, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_324_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<160, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_325_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<192, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_326_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<224, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_327_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<256, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_328_res);
	return result;
}

// load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_write
//	gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237
inline void gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_write, gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_1_buf8_to_gp_1313_ld483, int gp_in0_1_buf8_to_gp_1313_ld482, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_res = load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_write.extract<0, 31>();
	gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_write(gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_237_res, gp_in0_1_buf8_FIFO_buf481, root, gp_in0_1_buf8_to_gp_1313_ld483, gp_in0_1_buf8_to_gp_1313_ld482, dynamic_address);
}

struct gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1024
	// # of read delays: 1024
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1024
	// # of read delays: 1024
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_FIFO_buf485_cache {
  // Reader addrs...
    // { us_gp_in0_1_buf850_merged1100[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8_FIFO_buf485[3 + us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 1023 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
    // { us_gp_in0_1_buf850_merged1100[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8_FIFO_buf485[3 + us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 1023 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // # of banks: 2
  gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10_cache gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10;
  gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11_cache gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11;
};



inline void gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_write(hw_uint<32> & gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235, gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int gp_in0_1_buf8_to_gp_22317_ld487, int gp_in0_1_buf8_to_gp_22317_ld486, int dynamic_address) {
  gp_in0_1_buf8_FIFO_buf485.gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10.push(gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235);
  gp_in0_1_buf8_FIFO_buf485.gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11.push(gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235);
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10_select(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10 read pattern: { us_gp_in0_1_buf850_merged1100[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8_FIFO_buf485[3 + us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 1023 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us_gp_in0_1_buf850_merged1100[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 20] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 16] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235 = gp_in0_1_buf8_FIFO_buf485.gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10.peek(/* one reader or all rams */ ((-1 - us_gp_in0_1_buf849) % 2 == 0 && 1022 - us_gp_in0_1_buf850 >= 0) ? ((1023 - us_gp_in0_1_buf850)) : 0);
  return value_gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11_select(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11 read pattern: { us_gp_in0_1_buf850_merged1100[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8_FIFO_buf485[3 + us_gp_in0_1_buf850, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 1023 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us_gp_in0_1_buf850_merged1100[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 20] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 16] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235 = gp_in0_1_buf8_FIFO_buf485.gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_to_gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11.peek(/* one reader or all rams */ ((-1 - us_gp_in0_1_buf849) % 2 == 0 && 1022 - us_gp_in0_1_buf850 >= 0) ? ((1023 - us_gp_in0_1_buf850)) : 0);
  return value_gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_write
//	gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235
inline void gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_write, gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int gp_in0_1_buf8_to_gp_22317_ld487, int gp_in0_1_buf8_to_gp_22317_ld486, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_res = load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_write.extract<0, 31>();
	gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_write(gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_235_res, gp_in0_1_buf8_FIFO_buf485, root, gp_in0_1_buf8_to_gp_22317_ld487, gp_in0_1_buf8_to_gp_22317_ld486, dynamic_address);
}

// us_gp_in0_1_buf850_merged1100_read
//	gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10
//	gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11
inline hw_uint<64> gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_read_bundle_read(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10
    // gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11

	hw_uint<64> result;
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10_res = gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10_select(gp_in0_1_buf8_FIFO_buf485, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<0, 64>(result, gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_10_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11_res = gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11_select(gp_in0_1_buf8_FIFO_buf485, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<32, 64>(result, gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_11_res);
	return result;
}

struct gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_to_gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1025
	// # of read delays: 1025
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024
	fifo<hw_uint<32> , 1025> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1024 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_1_buf8_FIFO_buf489_cache {
  // Reader addrs...
    // { diff47_sm725_01054[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8_FIFO_buf489[3 + lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // # of banks: 1
  gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_to_gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354_cache gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_to_gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354;
};



inline void gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_write(hw_uint<32> & gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233, gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int gp_in0_1_buf8_to_gp_7321_ld491, int gp_in0_1_buf8_to_gp_7321_ld490, int dynamic_address) {
  gp_in0_1_buf8_FIFO_buf489.gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_to_gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354.push(gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233);
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354_select(gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354 read pattern: { diff47_sm725_01054[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8_FIFO_buf489[3 + lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // Read schedule : { diff47_sm725_01054[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880[d0 = 0, d1, d2] -> [0, 8 + 2d1, 5 + d2, 28] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233 = gp_in0_1_buf8_FIFO_buf489.gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_to_gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354.peek(/* one reader or all rams */ (1022 - lp_in0_146 >= 0 && 1022 - lp_in0_145 >= 0) ? (1024) : (-1023 + lp_in0_146 == 0 && 1022 - lp_in0_145 >= 0) ? (1024) : (-1023 + lp_in0_145 == 0 && 1022 - lp_in0_146 >= 0) ? ((1023 - lp_in0_146)) : 0);
  return value_gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233;
  return 0;
}

// # of bundles = 2
// diff47_sm725_01054_read
//	gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354
inline hw_uint<32> gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_read_bundle_read(gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354_res = gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354_select(gp_in0_1_buf8_FIFO_buf489, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_354_res);
	return result;
}

// load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_write
//	gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233
inline void gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_write, gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int gp_in0_1_buf8_to_gp_7321_ld491, int gp_in0_1_buf8_to_gp_7321_ld490, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_res = load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_write.extract<0, 31>();
	gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_write(gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_233_res, gp_in0_1_buf8_FIFO_buf489, root, gp_in0_1_buf8_to_gp_7321_ld491, gp_in0_1_buf8_to_gp_7321_ld490, dynamic_address);
}

struct gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct gp_in0_1_buf8_us48_cache {
  // Reader addrs...
    // { gp_in0_1_buf8_us48_ld326_merged1124[root = 0, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326] -> gp_in0_1_buf8_us48[1 + 2gp_in0_1_buf8_us48_ld326, gp_in0_1_buf8_us48_ld327] : 0 <= gp_in0_1_buf8_us48_ld327 <= 2047 and 0 <= gp_in0_1_buf8_us48_ld326 <= 1023 }
    // { gp_in0_1_buf8_us48_ld326_merged1124[root = 0, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326] -> gp_in0_1_buf8_us48[2gp_in0_1_buf8_us48_ld326, gp_in0_1_buf8_us48_ld327] : 0 <= gp_in0_1_buf8_us48_ld327 <= 2047 and 0 <= gp_in0_1_buf8_us48_ld326 <= 1023 }
  // # of banks: 2
  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335_cache gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335;
  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336_cache gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336;
};



inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_write(hw_uint<32> & gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335.push(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8);
}

inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_write(hw_uint<32> & gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336.push(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9);
}

inline hw_uint<32>  gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int gp_in0_1_buf8_us48_ld327, int gp_in0_1_buf8_us48_ld326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335 read pattern: { gp_in0_1_buf8_us48_ld326_merged1124[root = 0, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326] -> gp_in0_1_buf8_us48[1 + 2gp_in0_1_buf8_us48_ld326, gp_in0_1_buf8_us48_ld327] : 0 <= gp_in0_1_buf8_us48_ld327 <= 2047 and 0 <= gp_in0_1_buf8_us48_ld326 <= 1023 }
  // Read schedule : { gp_in0_1_buf8_us48_ld326_merged1124[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { us_gp_in0_1_buf850_merged1100[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 20] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int gp_in0_1_buf8_us48_ld327, int gp_in0_1_buf8_us48_ld326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336 read pattern: { gp_in0_1_buf8_us48_ld326_merged1124[root = 0, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326] -> gp_in0_1_buf8_us48[2gp_in0_1_buf8_us48_ld326, gp_in0_1_buf8_us48_ld327] : 0 <= gp_in0_1_buf8_us48_ld327 <= 2047 and 0 <= gp_in0_1_buf8_us48_ld326 <= 1023 }
  // Read schedule : { gp_in0_1_buf8_us48_ld326_merged1124[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { us_gp_in0_1_buf850_merged1100[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 20] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_to_gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9;
  return 0;
}

// # of bundles = 2
// gp_in0_1_buf8_us48_ld326_merged1124_read
//	gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335
//	gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336
inline hw_uint<64> gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_read_bundle_read(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int gp_in0_1_buf8_us48_ld327, int gp_in0_1_buf8_us48_ld326, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335
    // gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336

	hw_uint<64> result;
	hw_uint<32>  gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335_res = gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335_select(gp_in0_1_buf8_us48, root, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326, dynamic_address);
	set_at<0, 64>(result, gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_335_res);
	hw_uint<32>  gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336_res = gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336_select(gp_in0_1_buf8_us48, root, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326, dynamic_address);
	set_at<32, 64>(result, gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_336_res);
	return result;
}

// us_gp_in0_1_buf850_merged1100_write
//	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8
//	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9
inline void gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_write_bundle_write(hw_uint<64>& us_gp_in0_1_buf850_merged1100_write, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_res = us_gp_in0_1_buf850_merged1100_write.extract<0, 31>();
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_write(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_8_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	hw_uint<32>  gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_res = us_gp_in0_1_buf850_merged1100_write.extract<32, 63>();
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_write(gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_9_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
}

struct gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct gp_in0_1_buf8_us48_FIFO_buf493_cache {
  // Reader addrs...
    // { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48_FIFO_buf493[1 + 2lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
    // { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48_FIFO_buf493[2lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
  // # of banks: 2
  gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111_cache gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111;
  gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113_cache gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113;
};



inline void gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_write(hw_uint<32> & gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int gp_in0_1_buf8_us48_to_gp_6325_ld495, int gp_in0_1_buf8_us48_to_gp_6325_ld494, int dynamic_address) {
  gp_in0_1_buf8_us48_FIFO_buf493.gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111.push(gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329);
}

inline void gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_write(hw_uint<32> & gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int gp_in0_1_buf8_us48_to_gp_6325_ld495, int gp_in0_1_buf8_us48_to_gp_6325_ld494, int dynamic_address) {
  gp_in0_1_buf8_us48_FIFO_buf493.gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113.push(gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330);
}

inline hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111_select(gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111 read pattern: { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48_FIFO_buf493[1 + 2lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
  // Read schedule : { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 34] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329 = gp_in0_1_buf8_us48_FIFO_buf493.gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113_select(gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113 read pattern: { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48_FIFO_buf493[2lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
  // Read schedule : { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 34] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330 = gp_in0_1_buf8_us48_FIFO_buf493.gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_to_gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330;
  return 0;
}

// # of bundles = 2
// gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_write
//	gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329
//	gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330
inline void gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_write_bundle_write(hw_uint<64>& gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_write, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int gp_in0_1_buf8_us48_to_gp_6325_ld495, int gp_in0_1_buf8_us48_to_gp_6325_ld494, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_res = gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_write.extract<0, 31>();
	gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_write(gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_329_res, gp_in0_1_buf8_us48_FIFO_buf493, root, gp_in0_1_buf8_us48_to_gp_6325_ld495, gp_in0_1_buf8_us48_to_gp_6325_ld494, dynamic_address);
	hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_res = gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_write.extract<32, 63>();
	gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_write(gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_330_res, gp_in0_1_buf8_us48_FIFO_buf493, root, gp_in0_1_buf8_us48_to_gp_6325_ld495, gp_in0_1_buf8_us48_to_gp_6325_ld494, dynamic_address);
}

// lp_in0_054_merged1103_read
//	gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111
//	gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113
inline hw_uint<64> gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_read_bundle_read(gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111
    // gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113

	hw_uint<64> result;
	hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111_res = gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111_select(gp_in0_1_buf8_us48_FIFO_buf493, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<0, 64>(result, gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_111_res);
	hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113_res = gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113_select(gp_in0_1_buf8_us48_FIFO_buf493, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<32, 64>(result, gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_113_res);
	return result;
}

struct gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220_cache {
	// RAM Box: {[0, 513], [0, 512]}
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

struct gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in0_2_buf16_cache {
  // Reader addrs...
    // { load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818[root = 0, gp_in0_2_buf16_ld331, gp_in0_2_buf16_ld330] -> gp_in0_2_buf16[gp_in0_2_buf16_ld330, gp_in0_2_buf16_ld331] : 0 <= gp_in0_2_buf16_ld331 <= 512 and 0 <= gp_in0_2_buf16_ld330 <= 513 }
    // { load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842[root = 0, gp_in0_2_buf16_ld335, gp_in0_2_buf16_ld334] -> gp_in0_2_buf16[1 + gp_in0_2_buf16_ld334, 1 + gp_in0_2_buf16_ld335] : 0 <= gp_in0_2_buf16_ld335 <= 511 and 0 <= gp_in0_2_buf16_ld334 <= 511 }
    // { load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042[root = 0, gp_in0_2_buf16_ld339, gp_in0_2_buf16_ld338] -> gp_in0_2_buf16[1 + gp_in0_2_buf16_ld338, 1 + gp_in0_2_buf16_ld339] : 0 <= gp_in0_2_buf16_ld339 <= 511 and 0 <= gp_in0_2_buf16_ld338 <= 511 }
  // # of banks: 3
  gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220_cache gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220;
  gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218_cache gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218;
  gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216_cache gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216;
};



inline void gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_write(hw_uint<32> & gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220.push(gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218.push(gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216.push(gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319);
}

inline hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld331, int gp_in0_2_buf16_ld330, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220 read pattern: { load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818[root = 0, gp_in0_2_buf16_ld331, gp_in0_2_buf16_ld330] -> gp_in0_2_buf16[gp_in0_2_buf16_ld330, gp_in0_2_buf16_ld331] : 0 <= gp_in0_2_buf16_ld331 <= 512 and 0 <= gp_in0_2_buf16_ld330 <= 513 }
  // Read schedule : { load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 31] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld335, int gp_in0_2_buf16_ld334, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218 read pattern: { load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842[root = 0, gp_in0_2_buf16_ld335, gp_in0_2_buf16_ld334] -> gp_in0_2_buf16[1 + gp_in0_2_buf16_ld334, 1 + gp_in0_2_buf16_ld335] : 0 <= gp_in0_2_buf16_ld335 <= 511 and 0 <= gp_in0_2_buf16_ld334 <= 511 }
  // Read schedule : { load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 29] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld339, int gp_in0_2_buf16_ld338, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216 read pattern: { load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042[root = 0, gp_in0_2_buf16_ld339, gp_in0_2_buf16_ld338] -> gp_in0_2_buf16[1 + gp_in0_2_buf16_ld338, 1 + gp_in0_2_buf16_ld339] : 0 <= gp_in0_2_buf16_ld339 <= 511 and 0 <= gp_in0_2_buf16_ld338 <= 511 }
  // Read schedule : { load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 30] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319;
  return 0;
}

// # of bundles = 4
// gp_in0_218_merged303_sm727_0988_write
//	gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319
inline void gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_write_bundle_write(hw_uint<32>& gp_in0_218_merged303_sm727_0988_write, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_res = gp_in0_218_merged303_sm727_0988_write.extract<0, 31>();
	gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_write(gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_319_res, gp_in0_2_buf16, root, gp_in0_217, gp_in0_218, dynamic_address);
}

// load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_read
//	gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220
inline hw_uint<32> gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld331, int gp_in0_2_buf16_ld330, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220_res = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220_select(gp_in0_2_buf16, root, gp_in0_2_buf16_ld331, gp_in0_2_buf16_ld330, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_220_res);
	return result;
}

// load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_read
//	gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218
inline hw_uint<32> gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld335, int gp_in0_2_buf16_ld334, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218_res = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218_select(gp_in0_2_buf16, root, gp_in0_2_buf16_ld335, gp_in0_2_buf16_ld334, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_218_res);
	return result;
}

// load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_read
//	gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216
inline hw_uint<32> gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld339, int gp_in0_2_buf16_ld338, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216_res = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216_select(gp_in0_2_buf16, root, gp_in0_2_buf16_ld339, gp_in0_2_buf16_ld338, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_216_res);
	return result;
}

struct gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9_cache {
	// RAM Box: {[0, 512], [0, 512]}
	// Capacity: 1031
	// # of read delays: 9
  // 0, 1, 2, 514, 515, 516, 1028, 1029, 1030
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 511> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 511> f11;
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

	inline hw_uint<32>  peek_513() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_514() {
		return f6;
	}

	inline hw_uint<32>  peek_515() {
		return f8;
	}

	inline hw_uint<32>  peek_516() {
		return f10;
	}

	inline hw_uint<32>  peek_1027() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1028() {
		return f12;
	}

	inline hw_uint<32>  peek_1029() {
		return f14;
	}

	inline hw_uint<32>  peek_1030() {
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
    // cap: 1 reading from capacity: 511
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 511 reading from capacity: 1
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
    // cap: 1 reading from capacity: 511
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 511 reading from capacity: 1
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

struct gp_in0_2_buf16_FIFO_buf497_cache {
  // Reader addrs...
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // # of banks: 1
  gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9_cache gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9;
};



inline void gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_write(hw_uint<32> & gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225, gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_2_buf16_to_gp_2329_ld499, int gp_in0_2_buf16_to_gp_2329_ld498, int dynamic_address) {
  gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.push(gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225);
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_2();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_1();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_0();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_516();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_515();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_514();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_1030();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_1029();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318 read pattern: { gp_in0_326_merged297_sm722_0980[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_merged_banks_9.peek_1028();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225;
  return 0;
}

// # of bundles = 2
// gp_in0_326_merged297_sm722_0980_read
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318
inline hw_uint<288> gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_read_bundle_read(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318

	hw_uint<288> result;
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<0, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_310_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<32, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_311_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<64, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_312_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<96, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_313_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<128, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_314_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<160, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_315_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<192, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_316_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<224, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_317_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<256, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_318_res);
	return result;
}

// load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_write
//	gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225
inline void gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_write, gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_2_buf16_to_gp_2329_ld499, int gp_in0_2_buf16_to_gp_2329_ld498, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_res = load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_write.extract<0, 31>();
	gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_write(gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_225_res, gp_in0_2_buf16_FIFO_buf497, root, gp_in0_2_buf16_to_gp_2329_ld499, gp_in0_2_buf16_to_gp_2329_ld498, dynamic_address);
}

struct gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_to_gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 512
	// # of read delays: 513
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_2_buf16_FIFO_buf501_cache {
  // Reader addrs...
    // { us43_sm739_0786[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16_FIFO_buf501[o0, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 1023 and us_gp_in0_2_buf1642 < 2o0 <= 2 + us_gp_in0_2_buf1642 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // # of banks: 1
  gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_to_gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17_cache gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_to_gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17;
};



inline void gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_write(hw_uint<32> & gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223, gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int gp_in0_2_buf16_to_gp_23333_ld503, int gp_in0_2_buf16_to_gp_23333_ld502, int dynamic_address) {
  gp_in0_2_buf16_FIFO_buf501.gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_to_gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17.push(gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223);
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17_select(gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17 read pattern: { us43_sm739_0786[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16_FIFO_buf501[o0, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 1023 and us_gp_in0_2_buf1642 < 2o0 <= 2 + us_gp_in0_2_buf1642 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // Read schedule : { us43_sm739_0786[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 37] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223 = gp_in0_2_buf16_FIFO_buf501.gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_to_gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17.peek(/* one reader or all rams */ ((-1 - us_gp_in0_2_buf1641) % 2 == 0 && 1021 - us_gp_in0_2_buf1642 >= 0) ? ((511 - floord(2*us_gp_in0_2_buf1642, 4))) : 0);
  return value_gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_write
//	gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223
inline void gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_write, gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int gp_in0_2_buf16_to_gp_23333_ld503, int gp_in0_2_buf16_to_gp_23333_ld502, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_res = load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_write.extract<0, 31>();
	gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_write(gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_223_res, gp_in0_2_buf16_FIFO_buf501, root, gp_in0_2_buf16_to_gp_23333_ld503, gp_in0_2_buf16_to_gp_23333_ld502, dynamic_address);
}

// us43_sm739_0786_read
//	gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17
inline hw_uint<32> gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_read_bundle_read(gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17_res = gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17_select(gp_in0_2_buf16_FIFO_buf501, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_17_res);
	return result;
}

struct gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_to_gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in0_2_buf16_FIFO_buf505_cache {
  // Reader addrs...
    // { diff39_sm726_01056[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_2_buf16_FIFO_buf505[1 + lp_in0_238, 1 + lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // # of banks: 1
  gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_to_gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357_cache gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_to_gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357;
};



inline void gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_write(hw_uint<32> & gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221, gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int gp_in0_2_buf16_to_gp_8337_ld507, int gp_in0_2_buf16_to_gp_8337_ld506, int dynamic_address) {
  gp_in0_2_buf16_FIFO_buf505.gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_to_gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357.push(gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221);
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357_select(gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357 read pattern: { diff39_sm726_01056[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_2_buf16_FIFO_buf505[1 + lp_in0_238, 1 + lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // Read schedule : { diff39_sm726_01056[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 36] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221 = gp_in0_2_buf16_FIFO_buf505.gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_to_gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221;
  return 0;
}

// # of bundles = 2
// diff39_sm726_01056_read
//	gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357
inline hw_uint<32> gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_read_bundle_read(gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357_res = gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357_select(gp_in0_2_buf16_FIFO_buf505, root, lp_in0_237, lp_in0_238, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_357_res);
	return result;
}

// load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_write
//	gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221
inline void gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_write, gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int gp_in0_2_buf16_to_gp_8337_ld507, int gp_in0_2_buf16_to_gp_8337_ld506, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_res = load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_write.extract<0, 31>();
	gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_write(gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_221_res, gp_in0_2_buf16_FIFO_buf505, root, gp_in0_2_buf16_to_gp_8337_ld507, gp_in0_2_buf16_to_gp_8337_ld506, dynamic_address);
}

struct gp_in0_2_buf16_us40_us43_sm739_0786_16_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct gp_in0_2_buf16_us40_cache {
  // Reader addrs...
    // { load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040[root = 0, gp_in0_2_buf16_us40_ld343, gp_in0_2_buf16_us40_ld342] -> gp_in0_2_buf16_us40[gp_in0_2_buf16_us40_ld342, gp_in0_2_buf16_us40_ld343] : 0 <= gp_in0_2_buf16_us40_ld343 <= 1023 and 0 <= gp_in0_2_buf16_us40_ld342 <= 1023 }
  // # of banks: 1
  gp_in0_2_buf16_us40_us43_sm739_0786_16_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212_cache gp_in0_2_buf16_us40_us43_sm739_0786_16_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212;
};



inline void gp_in0_2_buf16_us40_us43_sm739_0786_16_write(hw_uint<32> & gp_in0_2_buf16_us40_us43_sm739_0786_16, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us43_sm739_0786_16_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212.push(gp_in0_2_buf16_us40_us43_sm739_0786_16);
}

inline hw_uint<32>  gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212_select(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int gp_in0_2_buf16_us40_ld343, int gp_in0_2_buf16_us40_ld342, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212 read pattern: { load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040[root = 0, gp_in0_2_buf16_us40_ld343, gp_in0_2_buf16_us40_ld342] -> gp_in0_2_buf16_us40[gp_in0_2_buf16_us40_ld342, gp_in0_2_buf16_us40_ld343] : 0 <= gp_in0_2_buf16_us40_ld343 <= 1023 and 0 <= gp_in0_2_buf16_us40_ld342 <= 1023 }
  // Read schedule : { load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 56] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { us43_sm739_0786[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_2_buf16_us40_us43_sm739_0786_16 = gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us43_sm739_0786_16_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_us40_us43_sm739_0786_16;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_read
//	gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212
inline hw_uint<32> gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_read_bundle_read(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int gp_in0_2_buf16_us40_ld343, int gp_in0_2_buf16_us40_ld342, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212_res = gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212_select(gp_in0_2_buf16_us40, root, gp_in0_2_buf16_us40_ld343, gp_in0_2_buf16_us40_ld342, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_212_res);
	return result;
}

// us43_sm739_0786_write
//	gp_in0_2_buf16_us40_us43_sm739_0786_16
inline void gp_in0_2_buf16_us40_us43_sm739_0786_write_bundle_write(hw_uint<32>& us43_sm739_0786_write, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_us40_us43_sm739_0786_16_res = us43_sm739_0786_write.extract<0, 31>();
	gp_in0_2_buf16_us40_us43_sm739_0786_16_write(gp_in0_2_buf16_us40_us43_sm739_0786_16_res, gp_in0_2_buf16_us40, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
}

struct gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct gp_in0_2_buf16_us40_FIFO_buf509_cache {
  // Reader addrs...
    // { diff47_sm725_01054[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40_FIFO_buf509[lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // # of banks: 1
  gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355_cache gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355;
};



inline void gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_write(hw_uint<32> & gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int gp_in0_2_buf16_us40_to_gp_7341_ld511, int gp_in0_2_buf16_us40_to_gp_7341_ld510, int dynamic_address) {
  gp_in0_2_buf16_us40_FIFO_buf509.gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355.push(gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213);
}

inline hw_uint<32>  gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355_select(gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355 read pattern: { diff47_sm725_01054[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40_FIFO_buf509[lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // Read schedule : { diff47_sm725_01054[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 62] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213 = gp_in0_2_buf16_us40_FIFO_buf509.gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213;
  return 0;
}

// # of bundles = 2
// diff47_sm725_01054_read
//	gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355
inline hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_read_bundle_read(gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355_res = gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355_select(gp_in0_2_buf16_us40_FIFO_buf509, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_355_res);
	return result;
}

// load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_write
//	gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213
inline void gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_write, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int gp_in0_2_buf16_us40_to_gp_7341_ld511, int gp_in0_2_buf16_us40_to_gp_7341_ld510, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_res = load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_write.extract<0, 31>();
	gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_write(gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_213_res, gp_in0_2_buf16_us40_FIFO_buf509, root, gp_in0_2_buf16_us40_to_gp_7341_ld511, gp_in0_2_buf16_us40_to_gp_7341_ld510, dynamic_address);
}

struct gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in0_3_buf24_cache {
  // Reader addrs...
    // { load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848[root = 0, gp_in0_3_buf24_ld347, gp_in0_3_buf24_ld346] -> gp_in0_3_buf24[gp_in0_3_buf24_ld346, gp_in0_3_buf24_ld347] : 0 <= gp_in0_3_buf24_ld347 <= 255 and 0 <= gp_in0_3_buf24_ld346 <= 255 }
    // { load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846[root = 0, gp_in0_3_buf24_ld351, gp_in0_3_buf24_ld350] -> gp_in0_3_buf24[gp_in0_3_buf24_ld350, gp_in0_3_buf24_ld351] : 0 <= gp_in0_3_buf24_ld351 <= 255 and 0 <= gp_in0_3_buf24_ld350 <= 255 }
  // # of banks: 2
  gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206_cache gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206;
  gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204_cache gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204;
};



inline void gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_write(hw_uint<32> & gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
  gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206.push(gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309);
  gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204.push(gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309);
}

inline hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206_select(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld347, int gp_in0_3_buf24_ld346, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206 read pattern: { load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848[root = 0, gp_in0_3_buf24_ld347, gp_in0_3_buf24_ld346] -> gp_in0_3_buf24[gp_in0_3_buf24_ld346, gp_in0_3_buf24_ld347] : 0 <= gp_in0_3_buf24_ld347 <= 255 and 0 <= gp_in0_3_buf24_ld346 <= 255 }
  // Read schedule : { load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 48] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309 = gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309;
  return 0;
}

inline hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204_select(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld351, int gp_in0_3_buf24_ld350, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204 read pattern: { load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846[root = 0, gp_in0_3_buf24_ld351, gp_in0_3_buf24_ld350] -> gp_in0_3_buf24[gp_in0_3_buf24_ld350, gp_in0_3_buf24_ld351] : 0 <= gp_in0_3_buf24_ld351 <= 255 and 0 <= gp_in0_3_buf24_ld350 <= 255 }
  // Read schedule : { load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 49] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309 = gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309;
  return 0;
}

// # of bundles = 3
// gp_in0_326_merged297_sm722_0980_write
//	gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309
inline void gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_write_bundle_write(hw_uint<32>& gp_in0_326_merged297_sm722_0980_write, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_res = gp_in0_326_merged297_sm722_0980_write.extract<0, 31>();
	gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_write(gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_309_res, gp_in0_3_buf24, root, gp_in0_325, gp_in0_326, dynamic_address);
}

// load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_read
//	gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206
inline hw_uint<32> gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_read_bundle_read(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld347, int gp_in0_3_buf24_ld346, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206_res = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206_select(gp_in0_3_buf24, root, gp_in0_3_buf24_ld347, gp_in0_3_buf24_ld346, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_206_res);
	return result;
}

// load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_read
//	gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204
inline hw_uint<32> gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_read_bundle_read(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld351, int gp_in0_3_buf24_ld350, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204_res = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204_select(gp_in0_3_buf24, root, gp_in0_3_buf24_ld351, gp_in0_3_buf24_ld350, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_204_res);
	return result;
}

struct gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in0_3_buf24_FIFO_buf513_cache {
  // Reader addrs...
    // { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in0_3_buf24_FIFO_buf513[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // # of banks: 1
  gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55_cache gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55;
};



inline void gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_write(hw_uint<32> & gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209, gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int gp_in0_3_buf24_to_gp_15345_ld515, int gp_in0_3_buf24_to_gp_15345_ld514, int dynamic_address) {
  gp_in0_3_buf24_FIFO_buf513.gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55.push(gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209);
}

inline hw_uint<32>  gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55_select(gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55 read pattern: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in0_3_buf24_FIFO_buf513[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // Read schedule : { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 77] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 52] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209 = gp_in0_3_buf24_FIFO_buf513.gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_write
//	gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209
inline void gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_write_bundle_write(hw_uint<32>& load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_write, gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int gp_in0_3_buf24_to_gp_15345_ld515, int gp_in0_3_buf24_to_gp_15345_ld514, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_res = load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_write.extract<0, 31>();
	gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_write(gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_209_res, gp_in0_3_buf24_FIFO_buf513, root, gp_in0_3_buf24_to_gp_15345_ld515, gp_in0_3_buf24_to_gp_15345_ld514, dynamic_address);
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_read
//	gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55
inline hw_uint<32> gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_read_bundle_read(gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55_res = gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55_select(gp_in0_3_buf24_FIFO_buf513, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_55_res);
	return result;
}

struct gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_to_gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 256
	// # of read delays: 257
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
	fifo<hw_uint<32> , 256> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in0_3_buf24_FIFO_buf517_cache {
  // Reader addrs...
    // { us35_sm729_0778[root = 0, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434] -> gp_in0_3_buf24_FIFO_buf517[o0, o1] : 0 <= us_gp_in0_3_buf2433 <= 511 and 0 <= us_gp_in0_3_buf2434 <= 511 and -1 + us_gp_in0_3_buf2434 <= 2o0 <= us_gp_in0_3_buf2434 and -1 + us_gp_in0_3_buf2433 <= 2o1 <= us_gp_in0_3_buf2433 }
  // # of banks: 1
  gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_to_gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19_cache gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_to_gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19;
};



inline void gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_write(hw_uint<32> & gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207, gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int gp_in0_3_buf24_to_gp_24349_ld519, int gp_in0_3_buf24_to_gp_24349_ld518, int dynamic_address) {
  gp_in0_3_buf24_FIFO_buf517.gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_to_gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19.push(gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207);
}

inline hw_uint<32>  gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19_select(gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19 read pattern: { us35_sm729_0778[root = 0, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434] -> gp_in0_3_buf24_FIFO_buf517[o0, o1] : 0 <= us_gp_in0_3_buf2433 <= 511 and 0 <= us_gp_in0_3_buf2434 <= 511 and -1 + us_gp_in0_3_buf2434 <= 2o0 <= us_gp_in0_3_buf2434 and -1 + us_gp_in0_3_buf2433 <= 2o1 <= us_gp_in0_3_buf2433 }
  // Read schedule : { us35_sm729_0778[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 64] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 58] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207 = gp_in0_3_buf24_FIFO_buf517.gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_to_gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19.peek(/* one reader or all rams */ ((-1 - us_gp_in0_3_buf2433) % 2 == 0 && 509 - us_gp_in0_3_buf2434 >= 0) ? ((255 - floord(2*us_gp_in0_3_buf2434, 4))) : 0);
  return value_gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_write
//	gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207
inline void gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_write_bundle_write(hw_uint<32>& load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_write, gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int gp_in0_3_buf24_to_gp_24349_ld519, int gp_in0_3_buf24_to_gp_24349_ld518, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_res = load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_write.extract<0, 31>();
	gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_write(gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_207_res, gp_in0_3_buf24_FIFO_buf517, root, gp_in0_3_buf24_to_gp_24349_ld519, gp_in0_3_buf24_to_gp_24349_ld518, dynamic_address);
}

// us35_sm729_0778_read
//	gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19
inline hw_uint<32> gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_read_bundle_read(gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19_res = gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19_select(gp_in0_3_buf24_FIFO_buf517, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_19_res);
	return result;
}

struct gp_in0_3_buf24_us32_us35_sm729_0778_18_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct gp_in0_3_buf24_us32_cache {
  // Reader addrs...
    // { load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844[root = 0, gp_in0_3_buf24_us32_ld355, gp_in0_3_buf24_us32_ld354] -> gp_in0_3_buf24_us32[gp_in0_3_buf24_us32_ld354, gp_in0_3_buf24_us32_ld355] : 0 <= gp_in0_3_buf24_us32_ld355 <= 511 and 0 <= gp_in0_3_buf24_us32_ld354 <= 511 }
  // # of banks: 1
  gp_in0_3_buf24_us32_us35_sm729_0778_18_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200_cache gp_in0_3_buf24_us32_us35_sm729_0778_18_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200;
};



inline void gp_in0_3_buf24_us32_us35_sm729_0778_18_write(hw_uint<32> & gp_in0_3_buf24_us32_us35_sm729_0778_18, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
  gp_in0_3_buf24_us32.gp_in0_3_buf24_us32_us35_sm729_0778_18_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200.push(gp_in0_3_buf24_us32_us35_sm729_0778_18);
}

inline hw_uint<32>  gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200_select(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int gp_in0_3_buf24_us32_ld355, int gp_in0_3_buf24_us32_ld354, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200 read pattern: { load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844[root = 0, gp_in0_3_buf24_us32_ld355, gp_in0_3_buf24_us32_ld354] -> gp_in0_3_buf24_us32[gp_in0_3_buf24_us32_ld354, gp_in0_3_buf24_us32_ld355] : 0 <= gp_in0_3_buf24_us32_ld355 <= 511 and 0 <= gp_in0_3_buf24_us32_ld354 <= 511 }
  // Read schedule : { load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 72] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us35_sm729_0778[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 64] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_3_buf24_us32_us35_sm729_0778_18 = gp_in0_3_buf24_us32.gp_in0_3_buf24_us32_us35_sm729_0778_18_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_us32_us35_sm729_0778_18;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_read
//	gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200
inline hw_uint<32> gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_read_bundle_read(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int gp_in0_3_buf24_us32_ld355, int gp_in0_3_buf24_us32_ld354, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200_res = gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200_select(gp_in0_3_buf24_us32, root, gp_in0_3_buf24_us32_ld355, gp_in0_3_buf24_us32_ld354, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_200_res);
	return result;
}

// us35_sm729_0778_write
//	gp_in0_3_buf24_us32_us35_sm729_0778_18
inline void gp_in0_3_buf24_us32_us35_sm729_0778_write_bundle_write(hw_uint<32>& us35_sm729_0778_write, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_us32_us35_sm729_0778_18_res = us35_sm729_0778_write.extract<0, 31>();
	gp_in0_3_buf24_us32_us35_sm729_0778_18_write(gp_in0_3_buf24_us32_us35_sm729_0778_18_res, gp_in0_3_buf24_us32, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, dynamic_address);
}

struct gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct gp_in0_3_buf24_us32_FIFO_buf521_cache {
  // Reader addrs...
    // { diff39_sm726_01056[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_3_buf24_us32_FIFO_buf521[lp_in0_238, lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // # of banks: 1
  gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358_cache gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358;
};



inline void gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_write(hw_uint<32> & gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int gp_in0_3_buf24_us32_to_gp_8353_ld523, int gp_in0_3_buf24_us32_to_gp_8353_ld522, int dynamic_address) {
  gp_in0_3_buf24_us32_FIFO_buf521.gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358.push(gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201);
}

inline hw_uint<32>  gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358_select(gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358 read pattern: { diff39_sm726_01056[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_3_buf24_us32_FIFO_buf521[lp_in0_238, lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // Read schedule : { diff39_sm726_01056[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201 = gp_in0_3_buf24_us32_FIFO_buf521.gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201;
  return 0;
}

// # of bundles = 2
// diff39_sm726_01056_read
//	gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358
inline hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_read_bundle_read(gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358_res = gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358_select(gp_in0_3_buf24_us32_FIFO_buf521, root, lp_in0_237, lp_in0_238, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_358_res);
	return result;
}

// load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_write
//	gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201
inline void gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_write_bundle_write(hw_uint<32>& load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_write, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int gp_in0_3_buf24_us32_to_gp_8353_ld523, int gp_in0_3_buf24_us32_to_gp_8353_ld522, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_res = load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_write.extract<0, 31>();
	gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_write(gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_201_res, gp_in0_3_buf24_us32_FIFO_buf521, root, gp_in0_3_buf24_us32_to_gp_8353_ld523, gp_in0_3_buf24_us32_to_gp_8353_ld522, dynamic_address);
}

struct gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1031
	// # of read delays: 1029
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030
	fifo<hw_uint<32> , 1031> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1030 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
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

struct gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188_cache {
	// RAM Box: {[0, 1029], [0, 1026]}
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

struct gp_in1_1_buf56_cache {
  // Reader addrs...
    // { load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850[root = 0, gp_in1_1_buf56_ld359, gp_in1_1_buf56_ld358] -> gp_in1_1_buf56[3 + gp_in1_1_buf56_ld358, 3 + gp_in1_1_buf56_ld359] : 0 <= gp_in1_1_buf56_ld359 <= 1023 and 0 <= gp_in1_1_buf56_ld358 <= 1023 }
    // { load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028[root = 0, gp_in1_1_buf56_ld363, gp_in1_1_buf56_ld362] -> gp_in1_1_buf56[3 + gp_in1_1_buf56_ld362, 3 + gp_in1_1_buf56_ld363] : 0 <= gp_in1_1_buf56_ld363 <= 1023 and 0 <= gp_in1_1_buf56_ld362 <= 1023 }
    // { load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026[root = 0, gp_in1_1_buf56_ld367, gp_in1_1_buf56_ld366] -> gp_in1_1_buf56[gp_in1_1_buf56_ld366, gp_in1_1_buf56_ld367] : 0 <= gp_in1_1_buf56_ld367 <= 1026 and 0 <= gp_in1_1_buf56_ld366 <= 1029 }
  // # of banks: 3
  gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192_cache gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192;
  gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190_cache gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190;
  gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188_cache gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188;
};



inline void gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_write(hw_uint<32> & gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192.push(gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190.push(gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188.push(gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299);
}

inline hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld359, int gp_in1_1_buf56_ld358, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192 read pattern: { load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850[root = 0, gp_in1_1_buf56_ld359, gp_in1_1_buf56_ld358] -> gp_in1_1_buf56[3 + gp_in1_1_buf56_ld358, 3 + gp_in1_1_buf56_ld359] : 0 <= gp_in1_1_buf56_ld359 <= 1023 and 0 <= gp_in1_1_buf56_ld358 <= 1023 }
  // Read schedule : { load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850[d0 = 0, d1, d2] -> [0, 10 + 2d1, 4 + d2, 15] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192.peek(/* one reader or all rams */ (1022 - gp_in1_1_buf56_ld359 >= 0) ? (1030) : (-1023 + gp_in1_1_buf56_ld359 == 0) ? ((1026 - gp_in1_1_buf56_ld358)) : 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld363, int gp_in1_1_buf56_ld362, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190 read pattern: { load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028[root = 0, gp_in1_1_buf56_ld363, gp_in1_1_buf56_ld362] -> gp_in1_1_buf56[3 + gp_in1_1_buf56_ld362, 3 + gp_in1_1_buf56_ld363] : 0 <= gp_in1_1_buf56_ld363 <= 1023 and 0 <= gp_in1_1_buf56_ld362 <= 1023 }
  // Read schedule : { load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 13] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld367, int gp_in1_1_buf56_ld366, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188 read pattern: { load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026[root = 0, gp_in1_1_buf56_ld367, gp_in1_1_buf56_ld366] -> gp_in1_1_buf56[gp_in1_1_buf56_ld366, gp_in1_1_buf56_ld367] : 0 <= gp_in1_1_buf56_ld367 <= 1026 and 0 <= gp_in1_1_buf56_ld366 <= 1029 }
  // Read schedule : { load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 14] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299;
  return 0;
}

// # of bundles = 4
// gp_in1_158_merged306_sm731_0784_write
//	gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299
inline void gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_write_bundle_write(hw_uint<32>& gp_in1_158_merged306_sm731_0784_write, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_res = gp_in1_158_merged306_sm731_0784_write.extract<0, 31>();
	gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_write(gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_299_res, gp_in1_1_buf56, root, gp_in1_157, gp_in1_158, dynamic_address);
}

// load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_read
//	gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192
inline hw_uint<32> gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld359, int gp_in1_1_buf56_ld358, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192_res = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192_select(gp_in1_1_buf56, root, gp_in1_1_buf56_ld359, gp_in1_1_buf56_ld358, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_192_res);
	return result;
}

// load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_read
//	gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190
inline hw_uint<32> gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld363, int gp_in1_1_buf56_ld362, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190_res = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190_select(gp_in1_1_buf56, root, gp_in1_1_buf56_ld363, gp_in1_1_buf56_ld362, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_190_res);
	return result;
}

// load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_read
//	gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188
inline hw_uint<32> gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld367, int gp_in1_1_buf56_ld366, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188_res = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188_select(gp_in1_1_buf56, root, gp_in1_1_buf56_ld367, gp_in1_1_buf56_ld366, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_188_res);
	return result;
}

struct gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_to_gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
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

struct gp_in1_1_buf56_FIFO_buf525_cache {
  // Reader addrs...
    // { diff95_sm736_0768[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56_FIFO_buf525[3 + lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // # of banks: 1
  gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_to_gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348_cache gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_to_gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348;
};



inline void gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_write(hw_uint<32> & gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197, gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int gp_in1_1_buf56_to_gp_10357_ld527, int gp_in1_1_buf56_to_gp_10357_ld526, int dynamic_address) {
  gp_in1_1_buf56_FIFO_buf525.gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_to_gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348.push(gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197);
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348_select(gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348 read pattern: { diff95_sm736_0768[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56_FIFO_buf525[3 + lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // Read schedule : { diff95_sm736_0768[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 73] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197 = gp_in1_1_buf56_FIFO_buf525.gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_to_gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197;
  return 0;
}

// # of bundles = 2
// diff95_sm736_0768_read
//	gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348
inline hw_uint<32> gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_read_bundle_read(gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348_res = gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348_select(gp_in1_1_buf56_FIFO_buf525, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_348_res);
	return result;
}

// load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_write
//	gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197
inline void gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_write, gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int gp_in1_1_buf56_to_gp_10357_ld527, int gp_in1_1_buf56_to_gp_10357_ld526, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_res = load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_write.extract<0, 31>();
	gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_write(gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_197_res, gp_in1_1_buf56_FIFO_buf525, root, gp_in1_1_buf56_to_gp_10357_ld527, gp_in1_1_buf56_to_gp_10357_ld526, dynamic_address);
}

struct gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1024
	// # of read delays: 1024
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1024
	// # of read delays: 1024
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_1_buf56_FIFO_buf529_cache {
  // Reader addrs...
    // { us_gp_in1_1_buf5698_merged1108[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56_FIFO_buf529[3 + us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 1023 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
    // { us_gp_in1_1_buf5698_merged1108[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56_FIFO_buf529[3 + us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 1023 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // # of banks: 2
  gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6_cache gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6;
  gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7_cache gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7;
};



inline void gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_write(hw_uint<32> & gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195, gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int gp_in1_1_buf56_to_gp_25361_ld531, int gp_in1_1_buf56_to_gp_25361_ld530, int dynamic_address) {
  gp_in1_1_buf56_FIFO_buf529.gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6.push(gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195);
  gp_in1_1_buf56_FIFO_buf529.gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7.push(gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195);
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6_select(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6 read pattern: { us_gp_in1_1_buf5698_merged1108[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56_FIFO_buf529[3 + us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 1023 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us_gp_in1_1_buf5698_merged1108[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 23] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 18] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195 = gp_in1_1_buf56_FIFO_buf529.gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6.peek(/* one reader or all rams */ ((-1 - us_gp_in1_1_buf5697) % 2 == 0 && 1022 - us_gp_in1_1_buf5698 >= 0) ? ((1023 - us_gp_in1_1_buf5698)) : 0);
  return value_gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7_select(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7 read pattern: { us_gp_in1_1_buf5698_merged1108[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56_FIFO_buf529[3 + us_gp_in1_1_buf5698, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 1023 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us_gp_in1_1_buf5698_merged1108[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 23] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 18] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195 = gp_in1_1_buf56_FIFO_buf529.gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_to_gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7.peek(/* one reader or all rams */ ((-1 - us_gp_in1_1_buf5697) % 2 == 0 && 1022 - us_gp_in1_1_buf5698 >= 0) ? ((1023 - us_gp_in1_1_buf5698)) : 0);
  return value_gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_write
//	gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195
inline void gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_write, gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int gp_in1_1_buf56_to_gp_25361_ld531, int gp_in1_1_buf56_to_gp_25361_ld530, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_res = load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_write.extract<0, 31>();
	gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_write(gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_195_res, gp_in1_1_buf56_FIFO_buf529, root, gp_in1_1_buf56_to_gp_25361_ld531, gp_in1_1_buf56_to_gp_25361_ld530, dynamic_address);
}

// us_gp_in1_1_buf5698_merged1108_read
//	gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6
//	gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7
inline hw_uint<64> gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_read_bundle_read(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6
    // gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7

	hw_uint<64> result;
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6_res = gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6_select(gp_in1_1_buf56_FIFO_buf529, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<0, 64>(result, gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_6_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7_res = gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7_select(gp_in1_1_buf56_FIFO_buf529, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<32, 64>(result, gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_7_res);
	return result;
}

struct gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9_cache {
	// RAM Box: {[0, 1028], [0, 1026]}
	// Capacity: 2063
	// # of read delays: 9
  // 0, 1, 2, 1030, 1031, 1032, 2060, 2061, 2062
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 1027> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 1027> f11;
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

	inline hw_uint<32>  peek_1029() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1030() {
		return f6;
	}

	inline hw_uint<32>  peek_1031() {
		return f8;
	}

	inline hw_uint<32>  peek_1032() {
		return f10;
	}

	inline hw_uint<32>  peek_2059() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_2060() {
		return f12;
	}

	inline hw_uint<32>  peek_2061() {
		return f14;
	}

	inline hw_uint<32>  peek_2062() {
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
    // cap: 1 reading from capacity: 1027
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1027 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1027
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1027 reading from capacity: 1
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

struct gp_in1_1_buf56_FIFO_buf533_cache {
  // Reader addrs...
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
    // { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // # of banks: 1
  gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9_cache gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9;
};



inline void gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_write(hw_uint<32> & gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193, gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_1_buf56_to_gp_4365_ld535, int gp_in1_1_buf56_to_gp_4365_ld534, int dynamic_address) {
  gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.push(gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193);
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_2();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_1();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_0();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_1032();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_1031();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_1030();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_2062();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_2061();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290 read pattern: { gp_in1_266_merged309_sm733_01052[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 513 }
  // Read schedule : { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_merged_banks_9.peek_2060();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193;
  return 0;
}

// # of bundles = 2
// gp_in1_266_merged309_sm733_01052_read
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290
inline hw_uint<288> gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_read_bundle_read(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290

	hw_uint<288> result;
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<0, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_282_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<32, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_283_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<64, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_284_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<96, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_285_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<128, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_286_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<160, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_287_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<192, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_288_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<224, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_289_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<256, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_290_res);
	return result;
}

// load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_write
//	gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193
inline void gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_write, gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_1_buf56_to_gp_4365_ld535, int gp_in1_1_buf56_to_gp_4365_ld534, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_res = load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_write.extract<0, 31>();
	gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_write(gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_193_res, gp_in1_1_buf56_FIFO_buf533, root, gp_in1_1_buf56_to_gp_4365_ld535, gp_in1_1_buf56_to_gp_4365_ld534, dynamic_address);
}

struct gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct gp_in1_1_buf56_us96_cache {
  // Reader addrs...
    // { gp_in1_1_buf56_us96_ld370_merged1128[root = 0, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370] -> gp_in1_1_buf56_us96[1 + 2gp_in1_1_buf56_us96_ld370, gp_in1_1_buf56_us96_ld371] : 0 <= gp_in1_1_buf56_us96_ld371 <= 2047 and 0 <= gp_in1_1_buf56_us96_ld370 <= 1023 }
    // { gp_in1_1_buf56_us96_ld370_merged1128[root = 0, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370] -> gp_in1_1_buf56_us96[2gp_in1_1_buf56_us96_ld370, gp_in1_1_buf56_us96_ld371] : 0 <= gp_in1_1_buf56_us96_ld371 <= 2047 and 0 <= gp_in1_1_buf56_us96_ld370 <= 1023 }
  // # of banks: 2
  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297_cache gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297;
  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298_cache gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298;
};



inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_write(hw_uint<32> & gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297.push(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4);
}

inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_write(hw_uint<32> & gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298.push(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5);
}

inline hw_uint<32>  gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int gp_in1_1_buf56_us96_ld371, int gp_in1_1_buf56_us96_ld370, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297 read pattern: { gp_in1_1_buf56_us96_ld370_merged1128[root = 0, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370] -> gp_in1_1_buf56_us96[1 + 2gp_in1_1_buf56_us96_ld370, gp_in1_1_buf56_us96_ld371] : 0 <= gp_in1_1_buf56_us96_ld371 <= 2047 and 0 <= gp_in1_1_buf56_us96_ld370 <= 1023 }
  // Read schedule : { gp_in1_1_buf56_us96_ld370_merged1128[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 25] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { us_gp_in1_1_buf5698_merged1108[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 23] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int gp_in1_1_buf56_us96_ld371, int gp_in1_1_buf56_us96_ld370, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298 read pattern: { gp_in1_1_buf56_us96_ld370_merged1128[root = 0, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370] -> gp_in1_1_buf56_us96[2gp_in1_1_buf56_us96_ld370, gp_in1_1_buf56_us96_ld371] : 0 <= gp_in1_1_buf56_us96_ld371 <= 2047 and 0 <= gp_in1_1_buf56_us96_ld370 <= 1023 }
  // Read schedule : { gp_in1_1_buf56_us96_ld370_merged1128[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 25] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { us_gp_in1_1_buf5698_merged1108[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 23] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_to_gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5;
  return 0;
}

// # of bundles = 2
// gp_in1_1_buf56_us96_ld370_merged1128_read
//	gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297
//	gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298
inline hw_uint<64> gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_read_bundle_read(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int gp_in1_1_buf56_us96_ld371, int gp_in1_1_buf56_us96_ld370, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297
    // gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298

	hw_uint<64> result;
	hw_uint<32>  gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297_res = gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297_select(gp_in1_1_buf56_us96, root, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370, dynamic_address);
	set_at<0, 64>(result, gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_297_res);
	hw_uint<32>  gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298_res = gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298_select(gp_in1_1_buf56_us96, root, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370, dynamic_address);
	set_at<32, 64>(result, gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_298_res);
	return result;
}

// us_gp_in1_1_buf5698_merged1108_write
//	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4
//	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5
inline void gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_write_bundle_write(hw_uint<64>& us_gp_in1_1_buf5698_merged1108_write, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_res = us_gp_in1_1_buf5698_merged1108_write.extract<0, 31>();
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_write(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_4_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	hw_uint<32>  gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_res = us_gp_in1_1_buf5698_merged1108_write.extract<32, 63>();
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_write(gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_5_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
}

struct gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct gp_in1_1_buf56_us96_FIFO_buf537_cache {
  // Reader addrs...
    // { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96_FIFO_buf537[1 + 2lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
    // { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96_FIFO_buf537[2lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
  // # of banks: 2
  gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97_cache gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97;
  gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99_cache gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99;
};



inline void gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_write(hw_uint<32> & gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int gp_in1_1_buf56_us96_to_gp_9369_ld539, int gp_in1_1_buf56_us96_to_gp_9369_ld538, int dynamic_address) {
  gp_in1_1_buf56_us96_FIFO_buf537.gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97.push(gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291);
}

inline void gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_write(hw_uint<32> & gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int gp_in1_1_buf56_us96_to_gp_9369_ld539, int gp_in1_1_buf56_us96_to_gp_9369_ld538, int dynamic_address) {
  gp_in1_1_buf56_us96_FIFO_buf537.gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99.push(gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292);
}

inline hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97_select(gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97 read pattern: { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96_FIFO_buf537[1 + 2lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
  // Read schedule : { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291 = gp_in1_1_buf56_us96_FIFO_buf537.gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99_select(gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99 read pattern: { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96_FIFO_buf537[2lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
  // Read schedule : { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292 = gp_in1_1_buf56_us96_FIFO_buf537.gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_to_gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292;
  return 0;
}

// # of bundles = 2
// gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_write
//	gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291
//	gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292
inline void gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_write_bundle_write(hw_uint<64>& gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_write, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int gp_in1_1_buf56_us96_to_gp_9369_ld539, int gp_in1_1_buf56_us96_to_gp_9369_ld538, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_res = gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_write.extract<0, 31>();
	gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_write(gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_291_res, gp_in1_1_buf56_us96_FIFO_buf537, root, gp_in1_1_buf56_us96_to_gp_9369_ld539, gp_in1_1_buf56_us96_to_gp_9369_ld538, dynamic_address);
	hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_res = gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_write.extract<32, 63>();
	gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_write(gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_292_res, gp_in1_1_buf56_us96_FIFO_buf537, root, gp_in1_1_buf56_us96_to_gp_9369_ld539, gp_in1_1_buf56_us96_to_gp_9369_ld538, dynamic_address);
}

// lp_in1_0102_merged1111_read
//	gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97
//	gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99
inline hw_uint<64> gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_read_bundle_read(gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97
    // gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99

	hw_uint<64> result;
	hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97_res = gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97_select(gp_in1_1_buf56_us96_FIFO_buf537, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<0, 64>(result, gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_97_res);
	hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99_res = gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99_select(gp_in1_1_buf56_us96_FIFO_buf537, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<32, 64>(result, gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_99_res);
	return result;
}

struct gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176_cache {
	// RAM Box: {[0, 513], [0, 512]}
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

struct gp_in1_2_buf64_cache {
  // Reader addrs...
    // { load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852[root = 0, gp_in1_2_buf64_ld375, gp_in1_2_buf64_ld374] -> gp_in1_2_buf64[1 + gp_in1_2_buf64_ld374, 1 + gp_in1_2_buf64_ld375] : 0 <= gp_in1_2_buf64_ld375 <= 511 and 0 <= gp_in1_2_buf64_ld374 <= 511 }
    // { load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024[root = 0, gp_in1_2_buf64_ld379, gp_in1_2_buf64_ld378] -> gp_in1_2_buf64[1 + gp_in1_2_buf64_ld378, 1 + gp_in1_2_buf64_ld379] : 0 <= gp_in1_2_buf64_ld379 <= 511 and 0 <= gp_in1_2_buf64_ld378 <= 511 }
    // { load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856[root = 0, gp_in1_2_buf64_ld383, gp_in1_2_buf64_ld382] -> gp_in1_2_buf64[gp_in1_2_buf64_ld382, gp_in1_2_buf64_ld383] : 0 <= gp_in1_2_buf64_ld383 <= 512 and 0 <= gp_in1_2_buf64_ld382 <= 513 }
  // # of banks: 3
  gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180_cache gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180;
  gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178_cache gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178;
  gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176_cache gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176;
};



inline void gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_write(hw_uint<32> & gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180.push(gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178.push(gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176.push(gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281);
}

inline hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld375, int gp_in1_2_buf64_ld374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180 read pattern: { load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852[root = 0, gp_in1_2_buf64_ld375, gp_in1_2_buf64_ld374] -> gp_in1_2_buf64[1 + gp_in1_2_buf64_ld374, 1 + gp_in1_2_buf64_ld375] : 0 <= gp_in1_2_buf64_ld375 <= 511 and 0 <= gp_in1_2_buf64_ld374 <= 511 }
  // Read schedule : { load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 38] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld379, int gp_in1_2_buf64_ld378, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178 read pattern: { load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024[root = 0, gp_in1_2_buf64_ld379, gp_in1_2_buf64_ld378] -> gp_in1_2_buf64[1 + gp_in1_2_buf64_ld378, 1 + gp_in1_2_buf64_ld379] : 0 <= gp_in1_2_buf64_ld379 <= 511 and 0 <= gp_in1_2_buf64_ld378 <= 511 }
  // Read schedule : { load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 47] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld383, int gp_in1_2_buf64_ld382, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176 read pattern: { load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856[root = 0, gp_in1_2_buf64_ld383, gp_in1_2_buf64_ld382] -> gp_in1_2_buf64[gp_in1_2_buf64_ld382, gp_in1_2_buf64_ld383] : 0 <= gp_in1_2_buf64_ld383 <= 512 and 0 <= gp_in1_2_buf64_ld382 <= 513 }
  // Read schedule : { load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 46] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  // Write schedule: { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281;
  return 0;
}

// # of bundles = 4
// gp_in1_266_merged309_sm733_01052_write
//	gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281
inline void gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_write_bundle_write(hw_uint<32>& gp_in1_266_merged309_sm733_01052_write, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_res = gp_in1_266_merged309_sm733_01052_write.extract<0, 31>();
	gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_write(gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_281_res, gp_in1_2_buf64, root, gp_in1_265, gp_in1_266, dynamic_address);
}

// load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_read
//	gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180
inline hw_uint<32> gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld375, int gp_in1_2_buf64_ld374, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180_res = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180_select(gp_in1_2_buf64, root, gp_in1_2_buf64_ld375, gp_in1_2_buf64_ld374, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_180_res);
	return result;
}

// load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_read
//	gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178
inline hw_uint<32> gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld379, int gp_in1_2_buf64_ld378, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178_res = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178_select(gp_in1_2_buf64, root, gp_in1_2_buf64_ld379, gp_in1_2_buf64_ld378, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_178_res);
	return result;
}

// load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_read
//	gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176
inline hw_uint<32> gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld383, int gp_in1_2_buf64_ld382, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176_res = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176_select(gp_in1_2_buf64, root, gp_in1_2_buf64_ld383, gp_in1_2_buf64_ld382, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_176_res);
	return result;
}

struct gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_to_gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in1_2_buf64_FIFO_buf541_cache {
  // Reader addrs...
    // { diff87_sm728_0990[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_2_buf64_FIFO_buf541[1 + lp_in1_286, 1 + lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // # of banks: 1
  gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_to_gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351_cache gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_to_gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351;
};



inline void gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_write(hw_uint<32> & gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185, gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int gp_in1_2_buf64_to_gp_11373_ld543, int gp_in1_2_buf64_to_gp_11373_ld542, int dynamic_address) {
  gp_in1_2_buf64_FIFO_buf541.gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_to_gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351.push(gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185);
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351_select(gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351 read pattern: { diff87_sm728_0990[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_2_buf64_FIFO_buf541[1 + lp_in1_286, 1 + lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // Read schedule : { diff87_sm728_0990[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 43] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185 = gp_in1_2_buf64_FIFO_buf541.gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_to_gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185;
  return 0;
}

// # of bundles = 2
// diff87_sm728_0990_read
//	gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351
inline hw_uint<32> gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_read_bundle_read(gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351_res = gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351_select(gp_in1_2_buf64_FIFO_buf541, root, lp_in1_285, lp_in1_286, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_351_res);
	return result;
}

// load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_write
//	gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185
inline void gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_write, gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int gp_in1_2_buf64_to_gp_11373_ld543, int gp_in1_2_buf64_to_gp_11373_ld542, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_res = load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_write.extract<0, 31>();
	gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_write(gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_185_res, gp_in1_2_buf64_FIFO_buf541, root, gp_in1_2_buf64_to_gp_11373_ld543, gp_in1_2_buf64_to_gp_11373_ld542, dynamic_address);
}

struct gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_to_gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 512
	// # of read delays: 513
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_2_buf64_FIFO_buf545_cache {
  // Reader addrs...
    // { us91_sm735_0766[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64_FIFO_buf545[o0, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 1023 and us_gp_in1_2_buf6490 < 2o0 <= 2 + us_gp_in1_2_buf6490 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // # of banks: 1
  gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_to_gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13_cache gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_to_gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13;
};



inline void gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_write(hw_uint<32> & gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183, gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int gp_in1_2_buf64_to_gp_26377_ld547, int gp_in1_2_buf64_to_gp_26377_ld546, int dynamic_address) {
  gp_in1_2_buf64_FIFO_buf545.gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_to_gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13.push(gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183);
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13_select(gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13 read pattern: { us91_sm735_0766[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64_FIFO_buf545[o0, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 1023 and us_gp_in1_2_buf6490 < 2o0 <= 2 + us_gp_in1_2_buf6490 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // Read schedule : { us91_sm735_0766[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 57] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 53] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183 = gp_in1_2_buf64_FIFO_buf545.gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_to_gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13.peek(/* one reader or all rams */ ((-1 - us_gp_in1_2_buf6489) % 2 == 0 && 1021 - us_gp_in1_2_buf6490 >= 0) ? ((511 - floord(2*us_gp_in1_2_buf6490, 4))) : 0);
  return value_gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_write
//	gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183
inline void gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_write, gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int gp_in1_2_buf64_to_gp_26377_ld547, int gp_in1_2_buf64_to_gp_26377_ld546, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_res = load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_write.extract<0, 31>();
	gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_write(gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_183_res, gp_in1_2_buf64_FIFO_buf545, root, gp_in1_2_buf64_to_gp_26377_ld547, gp_in1_2_buf64_to_gp_26377_ld546, dynamic_address);
}

// us91_sm735_0766_read
//	gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13
inline hw_uint<32> gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_read_bundle_read(gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13_res = gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13_select(gp_in1_2_buf64_FIFO_buf545, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_13_res);
	return result;
}

struct gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9_cache {
	// RAM Box: {[0, 512], [0, 512]}
	// Capacity: 1031
	// # of read delays: 9
  // 0, 1, 2, 514, 515, 516, 1028, 1029, 1030
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 511> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 511> f11;
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

	inline hw_uint<32>  peek_513() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_514() {
		return f6;
	}

	inline hw_uint<32>  peek_515() {
		return f8;
	}

	inline hw_uint<32>  peek_516() {
		return f10;
	}

	inline hw_uint<32>  peek_1027() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1028() {
		return f12;
	}

	inline hw_uint<32>  peek_1029() {
		return f14;
	}

	inline hw_uint<32>  peek_1030() {
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
    // cap: 1 reading from capacity: 511
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 511 reading from capacity: 1
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
    // cap: 1 reading from capacity: 511
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 511 reading from capacity: 1
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

struct gp_in1_2_buf64_FIFO_buf549_cache {
  // Reader addrs...
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // # of banks: 1
  gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9_cache gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9;
};



inline void gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_write(hw_uint<32> & gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181, gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_2_buf64_to_gp_5381_ld551, int gp_in1_2_buf64_to_gp_5381_ld550, int dynamic_address) {
  gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.push(gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181);
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_2();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_1();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_0();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_516();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_515();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_514();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_1030();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_1029();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280 read pattern: { gp_in1_374_merged312_sm734_0764[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_merged_banks_9.peek_1028();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181;
  return 0;
}

// # of bundles = 2
// gp_in1_374_merged312_sm734_0764_read
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280
inline hw_uint<288> gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_read_bundle_read(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280

	hw_uint<288> result;
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<0, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_272_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<32, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_273_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<64, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_274_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<96, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_275_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<128, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_276_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<160, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_277_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<192, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_278_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<224, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_279_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<256, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_280_res);
	return result;
}

// load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_write
//	gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181
inline void gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_write, gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_2_buf64_to_gp_5381_ld551, int gp_in1_2_buf64_to_gp_5381_ld550, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_res = load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_write.extract<0, 31>();
	gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_write(gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_181_res, gp_in1_2_buf64_FIFO_buf549, root, gp_in1_2_buf64_to_gp_5381_ld551, gp_in1_2_buf64_to_gp_5381_ld550, dynamic_address);
}

struct gp_in1_2_buf64_us88_us91_sm735_0766_12_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct gp_in1_2_buf64_us88_cache {
  // Reader addrs...
    // { load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886[root = 0, gp_in1_2_buf64_us88_ld387, gp_in1_2_buf64_us88_ld386] -> gp_in1_2_buf64_us88[gp_in1_2_buf64_us88_ld386, gp_in1_2_buf64_us88_ld387] : 0 <= gp_in1_2_buf64_us88_ld387 <= 1023 and 0 <= gp_in1_2_buf64_us88_ld386 <= 1023 }
  // # of banks: 1
  gp_in1_2_buf64_us88_us91_sm735_0766_12_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172_cache gp_in1_2_buf64_us88_us91_sm735_0766_12_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172;
};



inline void gp_in1_2_buf64_us88_us91_sm735_0766_12_write(hw_uint<32> & gp_in1_2_buf64_us88_us91_sm735_0766_12, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us91_sm735_0766_12_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172.push(gp_in1_2_buf64_us88_us91_sm735_0766_12);
}

inline hw_uint<32>  gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172_select(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int gp_in1_2_buf64_us88_ld387, int gp_in1_2_buf64_us88_ld386, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172 read pattern: { load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886[root = 0, gp_in1_2_buf64_us88_ld387, gp_in1_2_buf64_us88_ld386] -> gp_in1_2_buf64_us88[gp_in1_2_buf64_us88_ld386, gp_in1_2_buf64_us88_ld387] : 0 <= gp_in1_2_buf64_us88_ld387 <= 1023 and 0 <= gp_in1_2_buf64_us88_ld386 <= 1023 }
  // Read schedule : { load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 61] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { us91_sm735_0766[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 57] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_2_buf64_us88_us91_sm735_0766_12 = gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us91_sm735_0766_12_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_us88_us91_sm735_0766_12;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_read
//	gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172
inline hw_uint<32> gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_read_bundle_read(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int gp_in1_2_buf64_us88_ld387, int gp_in1_2_buf64_us88_ld386, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172_res = gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172_select(gp_in1_2_buf64_us88, root, gp_in1_2_buf64_us88_ld387, gp_in1_2_buf64_us88_ld386, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_172_res);
	return result;
}

// us91_sm735_0766_write
//	gp_in1_2_buf64_us88_us91_sm735_0766_12
inline void gp_in1_2_buf64_us88_us91_sm735_0766_write_bundle_write(hw_uint<32>& us91_sm735_0766_write, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_us88_us91_sm735_0766_12_res = us91_sm735_0766_write.extract<0, 31>();
	gp_in1_2_buf64_us88_us91_sm735_0766_12_write(gp_in1_2_buf64_us88_us91_sm735_0766_12_res, gp_in1_2_buf64_us88, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
}

struct gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct gp_in1_2_buf64_us88_FIFO_buf553_cache {
  // Reader addrs...
    // { diff95_sm736_0768[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88_FIFO_buf553[lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // # of banks: 1
  gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349_cache gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349;
};



inline void gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_write(hw_uint<32> & gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int gp_in1_2_buf64_us88_to_gp_10385_ld555, int gp_in1_2_buf64_us88_to_gp_10385_ld554, int dynamic_address) {
  gp_in1_2_buf64_us88_FIFO_buf553.gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349.push(gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173);
}

inline hw_uint<32>  gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349_select(gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349 read pattern: { diff95_sm736_0768[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88_FIFO_buf553[lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // Read schedule : { diff95_sm736_0768[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 73] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 65] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173 = gp_in1_2_buf64_us88_FIFO_buf553.gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173;
  return 0;
}

// # of bundles = 2
// diff95_sm736_0768_read
//	gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349
inline hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_read_bundle_read(gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349_res = gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349_select(gp_in1_2_buf64_us88_FIFO_buf553, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_349_res);
	return result;
}

// load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_write
//	gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173
inline void gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_write, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int gp_in1_2_buf64_us88_to_gp_10385_ld555, int gp_in1_2_buf64_us88_to_gp_10385_ld554, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_res = load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_write.extract<0, 31>();
	gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_write(gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_173_res, gp_in1_2_buf64_us88_FIFO_buf553, root, gp_in1_2_buf64_us88_to_gp_10385_ld555, gp_in1_2_buf64_us88_to_gp_10385_ld554, dynamic_address);
}

struct gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in1_3_buf72_cache {
  // Reader addrs...
    // { load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826[root = 0, gp_in1_3_buf72_ld391, gp_in1_3_buf72_ld390] -> gp_in1_3_buf72[gp_in1_3_buf72_ld390, gp_in1_3_buf72_ld391] : 0 <= gp_in1_3_buf72_ld391 <= 255 and 0 <= gp_in1_3_buf72_ld390 <= 255 }
    // { load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884[root = 0, gp_in1_3_buf72_ld395, gp_in1_3_buf72_ld394] -> gp_in1_3_buf72[gp_in1_3_buf72_ld394, gp_in1_3_buf72_ld395] : 0 <= gp_in1_3_buf72_ld395 <= 255 and 0 <= gp_in1_3_buf72_ld394 <= 255 }
  // # of banks: 2
  gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166_cache gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166;
  gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164_cache gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164;
};



inline void gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_write(hw_uint<32> & gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
  gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166.push(gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271);
  gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164.push(gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271);
}

inline hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166_select(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld391, int gp_in1_3_buf72_ld390, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166 read pattern: { load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826[root = 0, gp_in1_3_buf72_ld391, gp_in1_3_buf72_ld390] -> gp_in1_3_buf72[gp_in1_3_buf72_ld390, gp_in1_3_buf72_ld391] : 0 <= gp_in1_3_buf72_ld391 <= 255 and 0 <= gp_in1_3_buf72_ld390 <= 255 }
  // Read schedule : { load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 60] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271 = gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271;
  return 0;
}

inline hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164_select(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld395, int gp_in1_3_buf72_ld394, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164 read pattern: { load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884[root = 0, gp_in1_3_buf72_ld395, gp_in1_3_buf72_ld394] -> gp_in1_3_buf72[gp_in1_3_buf72_ld394, gp_in1_3_buf72_ld395] : 0 <= gp_in1_3_buf72_ld395 <= 255 and 0 <= gp_in1_3_buf72_ld394 <= 255 }
  // Read schedule : { load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 63] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271 = gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271;
  return 0;
}

// # of bundles = 3
// gp_in1_374_merged312_sm734_0764_write
//	gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271
inline void gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_write_bundle_write(hw_uint<32>& gp_in1_374_merged312_sm734_0764_write, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_res = gp_in1_374_merged312_sm734_0764_write.extract<0, 31>();
	gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_write(gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_271_res, gp_in1_3_buf72, root, gp_in1_373, gp_in1_374, dynamic_address);
}

// load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_read
//	gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166
inline hw_uint<32> gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_read_bundle_read(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld391, int gp_in1_3_buf72_ld390, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166_res = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166_select(gp_in1_3_buf72, root, gp_in1_3_buf72_ld391, gp_in1_3_buf72_ld390, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_166_res);
	return result;
}

// load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_read
//	gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164
inline hw_uint<32> gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_read_bundle_read(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld395, int gp_in1_3_buf72_ld394, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164_res = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164_select(gp_in1_3_buf72, root, gp_in1_3_buf72_ld395, gp_in1_3_buf72_ld394, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_164_res);
	return result;
}

struct gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct gp_in1_3_buf72_FIFO_buf557_cache {
  // Reader addrs...
    // { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in1_3_buf72_FIFO_buf557[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // # of banks: 1
  gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56_cache gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56;
};



inline void gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_write(hw_uint<32> & gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int gp_in1_3_buf72_to_gp_15389_ld559, int gp_in1_3_buf72_to_gp_15389_ld558, int dynamic_address) {
  gp_in1_3_buf72_FIFO_buf557.gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56.push(gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169);
}

inline hw_uint<32>  gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56_select(gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56 read pattern: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in1_3_buf72_FIFO_buf557[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // Read schedule : { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 77] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 70] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169 = gp_in1_3_buf72_FIFO_buf557.gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_write
//	gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169
inline void gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_write_bundle_write(hw_uint<32>& load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_write, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int gp_in1_3_buf72_to_gp_15389_ld559, int gp_in1_3_buf72_to_gp_15389_ld558, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_res = load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_write.extract<0, 31>();
	gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_write(gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_169_res, gp_in1_3_buf72_FIFO_buf557, root, gp_in1_3_buf72_to_gp_15389_ld559, gp_in1_3_buf72_to_gp_15389_ld558, dynamic_address);
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_read
//	gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56
inline hw_uint<32> gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_read_bundle_read(gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56_res = gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56_select(gp_in1_3_buf72_FIFO_buf557, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_56_res);
	return result;
}

struct gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_to_gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 256
	// # of read delays: 257
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
	fifo<hw_uint<32> , 256> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_3_buf72_FIFO_buf561_cache {
  // Reader addrs...
    // { us83_sm746_01000[root = 0, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282] -> gp_in1_3_buf72_FIFO_buf561[o0, o1] : 0 <= us_gp_in1_3_buf7281 <= 511 and 0 <= us_gp_in1_3_buf7282 <= 511 and -1 + us_gp_in1_3_buf7282 <= 2o0 <= us_gp_in1_3_buf7282 and -1 + us_gp_in1_3_buf7281 <= 2o1 <= us_gp_in1_3_buf7281 }
  // # of banks: 1
  gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_to_gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15_cache gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_to_gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15;
};



inline void gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_write(hw_uint<32> & gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167, gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int gp_in1_3_buf72_to_gp_27393_ld563, int gp_in1_3_buf72_to_gp_27393_ld562, int dynamic_address) {
  gp_in1_3_buf72_FIFO_buf561.gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_to_gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15.push(gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167);
}

inline hw_uint<32>  gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15_select(gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15 read pattern: { us83_sm746_01000[root = 0, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282] -> gp_in1_3_buf72_FIFO_buf561[o0, o1] : 0 <= us_gp_in1_3_buf7281 <= 511 and 0 <= us_gp_in1_3_buf7282 <= 511 and -1 + us_gp_in1_3_buf7282 <= 2o0 <= us_gp_in1_3_buf7282 and -1 + us_gp_in1_3_buf7281 <= 2o1 <= us_gp_in1_3_buf7281 }
  // Read schedule : { us83_sm746_01000[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 76] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 67] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167 = gp_in1_3_buf72_FIFO_buf561.gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_to_gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15.peek(/* one reader or all rams */ ((-1 - us_gp_in1_3_buf7281) % 2 == 0 && 509 - us_gp_in1_3_buf7282 >= 0) ? ((255 - floord(2*us_gp_in1_3_buf7282, 4))) : 0);
  return value_gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_write
//	gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167
inline void gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_write_bundle_write(hw_uint<32>& load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_write, gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int gp_in1_3_buf72_to_gp_27393_ld563, int gp_in1_3_buf72_to_gp_27393_ld562, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_res = load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_write.extract<0, 31>();
	gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_write(gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_167_res, gp_in1_3_buf72_FIFO_buf561, root, gp_in1_3_buf72_to_gp_27393_ld563, gp_in1_3_buf72_to_gp_27393_ld562, dynamic_address);
}

// us83_sm746_01000_read
//	gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15
inline hw_uint<32> gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_read_bundle_read(gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15_res = gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15_select(gp_in1_3_buf72_FIFO_buf561, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_15_res);
	return result;
}

struct gp_in1_3_buf72_us80_us83_sm746_01000_14_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct gp_in1_3_buf72_us80_cache {
  // Reader addrs...
    // { load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854[root = 0, gp_in1_3_buf72_us80_ld399, gp_in1_3_buf72_us80_ld398] -> gp_in1_3_buf72_us80[gp_in1_3_buf72_us80_ld398, gp_in1_3_buf72_us80_ld399] : 0 <= gp_in1_3_buf72_us80_ld399 <= 511 and 0 <= gp_in1_3_buf72_us80_ld398 <= 511 }
  // # of banks: 1
  gp_in1_3_buf72_us80_us83_sm746_01000_14_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160_cache gp_in1_3_buf72_us80_us83_sm746_01000_14_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160;
};



inline void gp_in1_3_buf72_us80_us83_sm746_01000_14_write(hw_uint<32> & gp_in1_3_buf72_us80_us83_sm746_01000_14, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
  gp_in1_3_buf72_us80.gp_in1_3_buf72_us80_us83_sm746_01000_14_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160.push(gp_in1_3_buf72_us80_us83_sm746_01000_14);
}

inline hw_uint<32>  gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160_select(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int gp_in1_3_buf72_us80_ld399, int gp_in1_3_buf72_us80_ld398, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160 read pattern: { load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854[root = 0, gp_in1_3_buf72_us80_ld399, gp_in1_3_buf72_us80_ld398] -> gp_in1_3_buf72_us80[gp_in1_3_buf72_us80_ld398, gp_in1_3_buf72_us80_ld399] : 0 <= gp_in1_3_buf72_us80_ld399 <= 511 and 0 <= gp_in1_3_buf72_us80_ld398 <= 511 }
  // Read schedule : { load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 83] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us83_sm746_01000[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 76] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_3_buf72_us80_us83_sm746_01000_14 = gp_in1_3_buf72_us80.gp_in1_3_buf72_us80_us83_sm746_01000_14_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_us80_us83_sm746_01000_14;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_read
//	gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160
inline hw_uint<32> gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_read_bundle_read(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int gp_in1_3_buf72_us80_ld399, int gp_in1_3_buf72_us80_ld398, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160_res = gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160_select(gp_in1_3_buf72_us80, root, gp_in1_3_buf72_us80_ld399, gp_in1_3_buf72_us80_ld398, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_160_res);
	return result;
}

// us83_sm746_01000_write
//	gp_in1_3_buf72_us80_us83_sm746_01000_14
inline void gp_in1_3_buf72_us80_us83_sm746_01000_write_bundle_write(hw_uint<32>& us83_sm746_01000_write, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_us80_us83_sm746_01000_14_res = us83_sm746_01000_write.extract<0, 31>();
	gp_in1_3_buf72_us80_us83_sm746_01000_14_write(gp_in1_3_buf72_us80_us83_sm746_01000_14_res, gp_in1_3_buf72_us80, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, dynamic_address);
}

struct gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct gp_in1_3_buf72_us80_FIFO_buf565_cache {
  // Reader addrs...
    // { diff87_sm728_0990[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_3_buf72_us80_FIFO_buf565[lp_in1_286, lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // # of banks: 1
  gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352_cache gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352;
};



inline void gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_write(hw_uint<32> & gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int gp_in1_3_buf72_us80_to_gp_11397_ld567, int gp_in1_3_buf72_us80_to_gp_11397_ld566, int dynamic_address) {
  gp_in1_3_buf72_us80_FIFO_buf565.gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352.push(gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161);
}

inline hw_uint<32>  gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352_select(gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352 read pattern: { diff87_sm728_0990[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_3_buf72_us80_FIFO_buf565[lp_in1_286, lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // Read schedule : { diff87_sm728_0990[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 88] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161 = gp_in1_3_buf72_us80_FIFO_buf565.gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161;
  return 0;
}

// # of bundles = 2
// diff87_sm728_0990_read
//	gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352
inline hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_read_bundle_read(gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352_res = gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352_select(gp_in1_3_buf72_us80_FIFO_buf565, root, lp_in1_285, lp_in1_286, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_352_res);
	return result;
}

// load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_write
//	gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161
inline void gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_write_bundle_write(hw_uint<32>& load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_write, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int gp_in1_3_buf72_us80_to_gp_11397_ld567, int gp_in1_3_buf72_us80_to_gp_11397_ld566, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_res = load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_write.extract<0, 31>();
	gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_write(gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_161_res, gp_in1_3_buf72_us80_FIFO_buf565, root, gp_in1_3_buf72_us80_to_gp_11397_ld567, gp_in1_3_buf72_us80_to_gp_11397_ld566, dynamic_address);
}

struct in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld402_merged1079_269_cache {
	// RAM Box: {[1, 2061], [0, 2054]}
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

struct in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld402_merged1079_270_cache {
	// RAM Box: {[0, 2060], [0, 2054]}
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

struct in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld406_merged1081_265_cache {
	// RAM Box: {[8, 2054], [7, 2054]}
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

struct in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld406_merged1081_266_cache {
	// RAM Box: {[7, 2053], [7, 2054]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<32> , 2> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in0_cache {
  // Reader addrs...
    // { in0_ld402_merged1079[root = 0, in0_ld403, in0_ld402] -> in0[1 + 2in0_ld402, in0_ld403] : 0 <= in0_ld403 <= 2054 and 0 <= in0_ld402 <= 1030 }
    // { in0_ld402_merged1079[root = 0, in0_ld403, in0_ld402] -> in0[2in0_ld402, in0_ld403] : 0 <= in0_ld403 <= 2054 and 0 <= in0_ld402 <= 1030 }
    // { in0_ld406_merged1081[root = 0, in0_ld407, in0_ld406] -> in0[8 + 2in0_ld406, 7 + in0_ld407] : 0 <= in0_ld407 <= 2047 and 0 <= in0_ld406 <= 1023 }
    // { in0_ld406_merged1081[root = 0, in0_ld407, in0_ld406] -> in0[7 + 2in0_ld406, 7 + in0_ld407] : 0 <= in0_ld407 <= 2047 and 0 <= in0_ld406 <= 1023 }
  // # of banks: 4
  in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld402_merged1079_269_cache in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld402_merged1079_269;
  in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld402_merged1079_270_cache in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld402_merged1079_270;
  in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld406_merged1081_265_cache in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld406_merged1081_265;
  in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld406_merged1081_266_cache in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld406_merged1081_266;
};



inline void in0_pw_math_in0_oc02_merged1098_50_write(hw_uint<32> & in0_pw_math_in0_oc02_merged1098_50, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld402_merged1079_269.push(in0_pw_math_in0_oc02_merged1098_50);
  in0.in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld406_merged1081_266.push(in0_pw_math_in0_oc02_merged1098_50);
}

inline void in0_pw_math_in0_oc02_merged1098_51_write(hw_uint<32> & in0_pw_math_in0_oc02_merged1098_51, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld402_merged1079_270.push(in0_pw_math_in0_oc02_merged1098_51);
  in0.in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld406_merged1081_265.push(in0_pw_math_in0_oc02_merged1098_51);
}

inline hw_uint<32>  in0_in0_ld402_merged1079_269_select(in0_cache& in0, int root, int in0_ld403, int in0_ld402, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_in0_ld402_merged1079_269 read pattern: { in0_ld402_merged1079[root = 0, in0_ld403, in0_ld402] -> in0[1 + 2in0_ld402, in0_ld403] : 0 <= in0_ld403 <= 2054 and 0 <= in0_ld402 <= 1030 }
  // Read schedule : { in0_ld402_merged1079[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  // Write schedule: { pw_math_in0_oc02_merged1098[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_pw_math_in0_oc02_merged1098_50 = in0.in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld402_merged1079_269.peek(/* one reader or all rams */ 0);
  return value_in0_pw_math_in0_oc02_merged1098_50;
  return 0;
}

inline hw_uint<32>  in0_in0_ld402_merged1079_270_select(in0_cache& in0, int root, int in0_ld403, int in0_ld402, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_in0_ld402_merged1079_270 read pattern: { in0_ld402_merged1079[root = 0, in0_ld403, in0_ld402] -> in0[2in0_ld402, in0_ld403] : 0 <= in0_ld403 <= 2054 and 0 <= in0_ld402 <= 1030 }
  // Read schedule : { in0_ld402_merged1079[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  // Write schedule: { pw_math_in0_oc02_merged1098[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_pw_math_in0_oc02_merged1098_51 = in0.in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld402_merged1079_270.peek(/* one reader or all rams */ 0);
  return value_in0_pw_math_in0_oc02_merged1098_51;
  return 0;
}

inline hw_uint<32>  in0_in0_ld406_merged1081_265_select(in0_cache& in0, int root, int in0_ld407, int in0_ld406, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_in0_ld406_merged1081_265 read pattern: { in0_ld406_merged1081[root = 0, in0_ld407, in0_ld406] -> in0[8 + 2in0_ld406, 7 + in0_ld407] : 0 <= in0_ld407 <= 2047 and 0 <= in0_ld406 <= 1023 }
  // Read schedule : { in0_ld406_merged1081[d0 = 0, d1, d2] -> [0, 7 + d1, 4 + d2, 2] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_in0_oc02_merged1098[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_pw_math_in0_oc02_merged1098_51 = in0.in0_pw_math_in0_oc02_merged1098_51_to_in0_in0_ld406_merged1081_265.peek(/* one reader or all rams */ 0);
  return value_in0_pw_math_in0_oc02_merged1098_51;
  return 0;
}

inline hw_uint<32>  in0_in0_ld406_merged1081_266_select(in0_cache& in0, int root, int in0_ld407, int in0_ld406, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_in0_ld406_merged1081_266 read pattern: { in0_ld406_merged1081[root = 0, in0_ld407, in0_ld406] -> in0[7 + 2in0_ld406, 7 + in0_ld407] : 0 <= in0_ld407 <= 2047 and 0 <= in0_ld406 <= 1023 }
  // Read schedule : { in0_ld406_merged1081[d0 = 0, d1, d2] -> [0, 7 + d1, 4 + d2, 2] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_in0_oc02_merged1098[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_pw_math_in0_oc02_merged1098_50 = in0.in0_pw_math_in0_oc02_merged1098_50_to_in0_in0_ld406_merged1081_266.peek(/* one reader or all rams */ 1);
  return value_in0_pw_math_in0_oc02_merged1098_50;
  return 0;
}

// # of bundles = 3
// in0_ld402_merged1079_read
//	in0_in0_ld402_merged1079_269
//	in0_in0_ld402_merged1079_270
inline hw_uint<64> in0_in0_ld402_merged1079_read_bundle_read(in0_cache& in0, int root, int in0_ld403, int in0_ld402, int dynamic_address) {
  // # of ports in bundle: 2
    // in0_in0_ld402_merged1079_269
    // in0_in0_ld402_merged1079_270

	hw_uint<64> result;
	hw_uint<32>  in0_in0_ld402_merged1079_269_res = in0_in0_ld402_merged1079_269_select(in0, root, in0_ld403, in0_ld402, dynamic_address);
	set_at<0, 64>(result, in0_in0_ld402_merged1079_269_res);
	hw_uint<32>  in0_in0_ld402_merged1079_270_res = in0_in0_ld402_merged1079_270_select(in0, root, in0_ld403, in0_ld402, dynamic_address);
	set_at<32, 64>(result, in0_in0_ld402_merged1079_270_res);
	return result;
}

// in0_ld406_merged1081_read
//	in0_in0_ld406_merged1081_265
//	in0_in0_ld406_merged1081_266
inline hw_uint<64> in0_in0_ld406_merged1081_read_bundle_read(in0_cache& in0, int root, int in0_ld407, int in0_ld406, int dynamic_address) {
  // # of ports in bundle: 2
    // in0_in0_ld406_merged1081_265
    // in0_in0_ld406_merged1081_266

	hw_uint<64> result;
	hw_uint<32>  in0_in0_ld406_merged1081_265_res = in0_in0_ld406_merged1081_265_select(in0, root, in0_ld407, in0_ld406, dynamic_address);
	set_at<0, 64>(result, in0_in0_ld406_merged1081_265_res);
	hw_uint<32>  in0_in0_ld406_merged1081_266_res = in0_in0_ld406_merged1081_266_select(in0, root, in0_ld407, in0_ld406, dynamic_address);
	set_at<32, 64>(result, in0_in0_ld406_merged1081_266_res);
	return result;
}

// pw_math_in0_oc02_merged1098_write
//	in0_pw_math_in0_oc02_merged1098_50
//	in0_pw_math_in0_oc02_merged1098_51
inline void in0_pw_math_in0_oc02_merged1098_write_bundle_write(hw_uint<64>& pw_math_in0_oc02_merged1098_write, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
	hw_uint<32>  in0_pw_math_in0_oc02_merged1098_50_res = pw_math_in0_oc02_merged1098_write.extract<0, 31>();
	in0_pw_math_in0_oc02_merged1098_50_write(in0_pw_math_in0_oc02_merged1098_50_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
	hw_uint<32>  in0_pw_math_in0_oc02_merged1098_51_res = pw_math_in0_oc02_merged1098_write.extract<32, 63>();
	in0_pw_math_in0_oc02_merged1098_51_write(in0_pw_math_in0_oc02_merged1098_51_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
}

struct in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3_cache {
	// RAM Box: {[1, 2059], [0, 2054]}
	// Capacity: 2064
	// # of read delays: 4
  // 0, 1, 1032, 2063
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1030> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 1030> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1031() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1032() {
		return f4;
	}

	inline hw_uint<32>  peek_2062() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2063() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1030
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1030 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1030
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1030 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6_cache {
	// RAM Box: {[0, 2060], [0, 2054]}
	// Capacity: 2064
	// # of read delays: 6
  // 0, 1, 1031, 1032, 2062, 2063
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1029> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 1029> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1030() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1031() {
		return f4;
	}

	inline hw_uint<32>  peek_1032() {
		return f6;
	}

	inline hw_uint<32>  peek_2061() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2062() {
		return f8;
	}

	inline hw_uint<32>  peek_2063() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1029
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1029 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1029
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1029 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in0_FIFO_buf569_cache {
  // Reader addrs...
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
    // { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // # of banks: 2
  in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3_cache in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3;
  in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6_cache in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6;
};



inline void in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_write(hw_uint<32> & in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259, in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int in0_to_gp_0401_ld571, int in0_to_gp_0401_ld570, int dynamic_address) {
  in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3.push(in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259);
}

inline void in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_write(hw_uint<32> & in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260, in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int in0_to_gp_0401_ld571, int in0_to_gp_0401_ld570, int dynamic_address) {
  in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.push(in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260);
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.peek_1();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3.peek_1();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.peek_0();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.peek_1032();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3.peek_1032();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.peek_1031();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.peek_2063();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_merged_banks_3.peek_2063();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346 read pattern: { gp_in0_110_merged300_sm723_0982[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1029 }
  // Read schedule : { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260 = in0_FIFO_buf569.in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_merged_banks_6.peek_2062();
  return value_in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260;
  return 0;
}

// # of bundles = 2
// gp_in0_110_merged300_sm723_0982_read
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345
//	in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346
inline hw_uint<288> in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_read_bundle_read(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  // # of ports in bundle: 9
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345
    // in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346

	hw_uint<288> result;
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<0, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_338_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<32, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_339_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<64, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_340_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<96, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_341_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<128, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_342_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<160, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_343_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<192, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_344_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<224, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_345_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346_res = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<256, 288>(result, in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_346_res);
	return result;
}

// in0_to_gp_0401_ld570_merged1061_write
//	in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259
//	in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260
inline void in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_write_bundle_write(hw_uint<64>& in0_to_gp_0401_ld570_merged1061_write, in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int in0_to_gp_0401_ld571, int in0_to_gp_0401_ld570, int dynamic_address) {
	hw_uint<32>  in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_res = in0_to_gp_0401_ld570_merged1061_write.extract<0, 31>();
	in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_write(in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_259_res, in0_FIFO_buf569, root, in0_to_gp_0401_ld571, in0_to_gp_0401_ld570, dynamic_address);
	hw_uint<32>  in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_res = in0_to_gp_0401_ld570_merged1061_write.extract<32, 63>();
	in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_write(in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_260_res, in0_FIFO_buf569, root, in0_to_gp_0401_ld571, in0_to_gp_0401_ld570, dynamic_address);
}

struct in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_to_in0_FIFO_buf573_lp_in0_054_merged1103_112_cache {
	// RAM Box: {[8, 2054], [7, 2054]}
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

struct in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_to_in0_FIFO_buf573_lp_in0_054_merged1103_114_cache {
	// RAM Box: {[7, 2053], [7, 2054]}
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

struct in0_FIFO_buf573_cache {
  // Reader addrs...
    // { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> in0_FIFO_buf573[8 + 2lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
    // { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> in0_FIFO_buf573[7 + 2lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
  // # of banks: 2
  in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_to_in0_FIFO_buf573_lp_in0_054_merged1103_112_cache in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_to_in0_FIFO_buf573_lp_in0_054_merged1103_112;
  in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_to_in0_FIFO_buf573_lp_in0_054_merged1103_114_cache in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_to_in0_FIFO_buf573_lp_in0_054_merged1103_114;
};



inline void in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_write(hw_uint<32> & in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255, in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int in0_to_gp_6405_ld575, int in0_to_gp_6405_ld574, int dynamic_address) {
  in0_FIFO_buf573.in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_to_in0_FIFO_buf573_lp_in0_054_merged1103_112.push(in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255);
}

inline void in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_write(hw_uint<32> & in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256, in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int in0_to_gp_6405_ld575, int in0_to_gp_6405_ld574, int dynamic_address) {
  in0_FIFO_buf573.in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_to_in0_FIFO_buf573_lp_in0_054_merged1103_114.push(in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256);
}

inline hw_uint<32>  in0_FIFO_buf573_lp_in0_054_merged1103_112_select(in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf573_lp_in0_054_merged1103_112 read pattern: { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> in0_FIFO_buf573[8 + 2lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
  // Read schedule : { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { in0_to_gp_6405_ld574_merged1087[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 9] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255 = in0_FIFO_buf573.in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_to_in0_FIFO_buf573_lp_in0_054_merged1103_112.peek(/* one reader or all rams */ 0);
  return value_in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf573_lp_in0_054_merged1103_114_select(in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf573_lp_in0_054_merged1103_114 read pattern: { lp_in0_054_merged1103[root = 0, lp_in0_053, lp_in0_054] -> in0_FIFO_buf573[7 + 2lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 1023 }
  // Read schedule : { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { in0_to_gp_6405_ld574_merged1087[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 9] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256 = in0_FIFO_buf573.in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_to_in0_FIFO_buf573_lp_in0_054_merged1103_114.peek(/* one reader or all rams */ 0);
  return value_in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256;
  return 0;
}

// # of bundles = 2
// in0_to_gp_6405_ld574_merged1087_write
//	in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255
//	in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256
inline void in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_write_bundle_write(hw_uint<64>& in0_to_gp_6405_ld574_merged1087_write, in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int in0_to_gp_6405_ld575, int in0_to_gp_6405_ld574, int dynamic_address) {
	hw_uint<32>  in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_res = in0_to_gp_6405_ld574_merged1087_write.extract<0, 31>();
	in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_write(in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_255_res, in0_FIFO_buf573, root, in0_to_gp_6405_ld575, in0_to_gp_6405_ld574, dynamic_address);
	hw_uint<32>  in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_res = in0_to_gp_6405_ld574_merged1087_write.extract<32, 63>();
	in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_write(in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_256_res, in0_FIFO_buf573, root, in0_to_gp_6405_ld575, in0_to_gp_6405_ld574, dynamic_address);
}

// lp_in0_054_merged1103_read
//	in0_FIFO_buf573_lp_in0_054_merged1103_112
//	in0_FIFO_buf573_lp_in0_054_merged1103_114
inline hw_uint<64> in0_FIFO_buf573_lp_in0_054_merged1103_read_bundle_read(in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  // # of ports in bundle: 2
    // in0_FIFO_buf573_lp_in0_054_merged1103_112
    // in0_FIFO_buf573_lp_in0_054_merged1103_114

	hw_uint<64> result;
	hw_uint<32>  in0_FIFO_buf573_lp_in0_054_merged1103_112_res = in0_FIFO_buf573_lp_in0_054_merged1103_112_select(in0_FIFO_buf573, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<0, 64>(result, in0_FIFO_buf573_lp_in0_054_merged1103_112_res);
	hw_uint<32>  in0_FIFO_buf573_lp_in0_054_merged1103_114_res = in0_FIFO_buf573_lp_in0_054_merged1103_114_select(in0_FIFO_buf573, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<32, 64>(result, in0_FIFO_buf573_lp_in0_054_merged1103_114_res);
	return result;
}

struct in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld410_merged1067_253_cache {
	// RAM Box: {[1, 2061], [0, 2054]}
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

struct in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld410_merged1067_254_cache {
	// RAM Box: {[0, 2060], [0, 2054]}
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

struct in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld414_merged1069_249_cache {
	// RAM Box: {[8, 2054], [7, 2054]}
	// Capacity: 1032
	// # of read delays: 1030
  // 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031
	fifo<hw_uint<32> , 1032> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1031 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld414_merged1069_250_cache {
	// RAM Box: {[7, 2053], [7, 2054]}
	// Capacity: 1033
	// # of read delays: 1030
  // 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032
	fifo<hw_uint<32> , 1033> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1032 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in1_cache {
  // Reader addrs...
    // { in1_ld410_merged1067[root = 0, in1_ld411, in1_ld410] -> in1[1 + 2in1_ld410, in1_ld411] : 0 <= in1_ld411 <= 2054 and 0 <= in1_ld410 <= 1030 }
    // { in1_ld410_merged1067[root = 0, in1_ld411, in1_ld410] -> in1[2in1_ld410, in1_ld411] : 0 <= in1_ld411 <= 2054 and 0 <= in1_ld410 <= 1030 }
    // { in1_ld414_merged1069[root = 0, in1_ld415, in1_ld414] -> in1[8 + 2in1_ld414, 7 + in1_ld415] : 0 <= in1_ld415 <= 2047 and 0 <= in1_ld414 <= 1023 }
    // { in1_ld414_merged1069[root = 0, in1_ld415, in1_ld414] -> in1[7 + 2in1_ld414, 7 + in1_ld415] : 0 <= in1_ld415 <= 2047 and 0 <= in1_ld414 <= 1023 }
  // # of banks: 4
  in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld410_merged1067_253_cache in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld410_merged1067_253;
  in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld410_merged1067_254_cache in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld410_merged1067_254;
  in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld414_merged1069_249_cache in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld414_merged1069_249;
  in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld414_merged1069_250_cache in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld414_merged1069_250;
};



inline void in1_pw_math_in1_oc46_merged1106_46_write(hw_uint<32> & in1_pw_math_in1_oc46_merged1106_46, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld410_merged1067_253.push(in1_pw_math_in1_oc46_merged1106_46);
  in1.in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld414_merged1069_250.push(in1_pw_math_in1_oc46_merged1106_46);
}

inline void in1_pw_math_in1_oc46_merged1106_47_write(hw_uint<32> & in1_pw_math_in1_oc46_merged1106_47, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld410_merged1067_254.push(in1_pw_math_in1_oc46_merged1106_47);
  in1.in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld414_merged1069_249.push(in1_pw_math_in1_oc46_merged1106_47);
}

inline hw_uint<32>  in1_in1_ld410_merged1067_253_select(in1_cache& in1, int root, int in1_ld411, int in1_ld410, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_in1_ld410_merged1067_253 read pattern: { in1_ld410_merged1067[root = 0, in1_ld411, in1_ld410] -> in1[1 + 2in1_ld410, in1_ld411] : 0 <= in1_ld411 <= 2054 and 0 <= in1_ld410 <= 1030 }
  // Read schedule : { in1_ld410_merged1067[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  // Write schedule: { pw_math_in1_oc46_merged1106[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_pw_math_in1_oc46_merged1106_46 = in1.in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld410_merged1067_253.peek(/* one reader or all rams */ 0);
  return value_in1_pw_math_in1_oc46_merged1106_46;
  return 0;
}

inline hw_uint<32>  in1_in1_ld410_merged1067_254_select(in1_cache& in1, int root, int in1_ld411, int in1_ld410, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_in1_ld410_merged1067_254 read pattern: { in1_ld410_merged1067[root = 0, in1_ld411, in1_ld410] -> in1[2in1_ld410, in1_ld411] : 0 <= in1_ld411 <= 2054 and 0 <= in1_ld410 <= 1030 }
  // Read schedule : { in1_ld410_merged1067[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  // Write schedule: { pw_math_in1_oc46_merged1106[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_pw_math_in1_oc46_merged1106_47 = in1.in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld410_merged1067_254.peek(/* one reader or all rams */ 0);
  return value_in1_pw_math_in1_oc46_merged1106_47;
  return 0;
}

inline hw_uint<32>  in1_in1_ld414_merged1069_249_select(in1_cache& in1, int root, int in1_ld415, int in1_ld414, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_in1_ld414_merged1069_249 read pattern: { in1_ld414_merged1069[root = 0, in1_ld415, in1_ld414] -> in1[8 + 2in1_ld414, 7 + in1_ld415] : 0 <= in1_ld415 <= 2047 and 0 <= in1_ld414 <= 1023 }
  // Read schedule : { in1_ld414_merged1069[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 3] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_in1_oc46_merged1106[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_pw_math_in1_oc46_merged1106_47 = in1.in1_pw_math_in1_oc46_merged1106_47_to_in1_in1_ld414_merged1069_249.peek(/* one reader or all rams */ (2046 - in1_ld415 >= 0) ? (1031) : (-2047 + in1_ld415 == 0) ? ((1026 - in1_ld414)) : 0);
  return value_in1_pw_math_in1_oc46_merged1106_47;
  return 0;
}

inline hw_uint<32>  in1_in1_ld414_merged1069_250_select(in1_cache& in1, int root, int in1_ld415, int in1_ld414, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_in1_ld414_merged1069_250 read pattern: { in1_ld414_merged1069[root = 0, in1_ld415, in1_ld414] -> in1[7 + 2in1_ld414, 7 + in1_ld415] : 0 <= in1_ld415 <= 2047 and 0 <= in1_ld414 <= 1023 }
  // Read schedule : { in1_ld414_merged1069[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 3] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_in1_oc46_merged1106[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_pw_math_in1_oc46_merged1106_46 = in1.in1_pw_math_in1_oc46_merged1106_46_to_in1_in1_ld414_merged1069_250.peek(/* one reader or all rams */ (2046 - in1_ld415 >= 0) ? (1032) : (-2047 + in1_ld415 == 0) ? ((1027 - in1_ld414)) : 0);
  return value_in1_pw_math_in1_oc46_merged1106_46;
  return 0;
}

// # of bundles = 3
// in1_ld410_merged1067_read
//	in1_in1_ld410_merged1067_253
//	in1_in1_ld410_merged1067_254
inline hw_uint<64> in1_in1_ld410_merged1067_read_bundle_read(in1_cache& in1, int root, int in1_ld411, int in1_ld410, int dynamic_address) {
  // # of ports in bundle: 2
    // in1_in1_ld410_merged1067_253
    // in1_in1_ld410_merged1067_254

	hw_uint<64> result;
	hw_uint<32>  in1_in1_ld410_merged1067_253_res = in1_in1_ld410_merged1067_253_select(in1, root, in1_ld411, in1_ld410, dynamic_address);
	set_at<0, 64>(result, in1_in1_ld410_merged1067_253_res);
	hw_uint<32>  in1_in1_ld410_merged1067_254_res = in1_in1_ld410_merged1067_254_select(in1, root, in1_ld411, in1_ld410, dynamic_address);
	set_at<32, 64>(result, in1_in1_ld410_merged1067_254_res);
	return result;
}

// in1_ld414_merged1069_read
//	in1_in1_ld414_merged1069_249
//	in1_in1_ld414_merged1069_250
inline hw_uint<64> in1_in1_ld414_merged1069_read_bundle_read(in1_cache& in1, int root, int in1_ld415, int in1_ld414, int dynamic_address) {
  // # of ports in bundle: 2
    // in1_in1_ld414_merged1069_249
    // in1_in1_ld414_merged1069_250

	hw_uint<64> result;
	hw_uint<32>  in1_in1_ld414_merged1069_249_res = in1_in1_ld414_merged1069_249_select(in1, root, in1_ld415, in1_ld414, dynamic_address);
	set_at<0, 64>(result, in1_in1_ld414_merged1069_249_res);
	hw_uint<32>  in1_in1_ld414_merged1069_250_res = in1_in1_ld414_merged1069_250_select(in1, root, in1_ld415, in1_ld414, dynamic_address);
	set_at<32, 64>(result, in1_in1_ld414_merged1069_250_res);
	return result;
}

// pw_math_in1_oc46_merged1106_write
//	in1_pw_math_in1_oc46_merged1106_46
//	in1_pw_math_in1_oc46_merged1106_47
inline void in1_pw_math_in1_oc46_merged1106_write_bundle_write(hw_uint<64>& pw_math_in1_oc46_merged1106_write, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
	hw_uint<32>  in1_pw_math_in1_oc46_merged1106_46_res = pw_math_in1_oc46_merged1106_write.extract<0, 31>();
	in1_pw_math_in1_oc46_merged1106_46_write(in1_pw_math_in1_oc46_merged1106_46_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
	hw_uint<32>  in1_pw_math_in1_oc46_merged1106_47_res = pw_math_in1_oc46_merged1106_write.extract<32, 63>();
	in1_pw_math_in1_oc46_merged1106_47_write(in1_pw_math_in1_oc46_merged1106_47_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
}

struct in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3_cache {
	// RAM Box: {[1, 2059], [0, 2054]}
	// Capacity: 2064
	// # of read delays: 4
  // 0, 1, 1032, 2063
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1030> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 1030> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1031() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1032() {
		return f4;
	}

	inline hw_uint<32>  peek_2062() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2063() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1030
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1030 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1030
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1030 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6_cache {
	// RAM Box: {[0, 2060], [0, 2054]}
	// Capacity: 2064
	// # of read delays: 6
  // 0, 1, 1031, 1032, 2062, 2063
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 1029> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 1029> f7;
	hw_uint<32>  f8;
	hw_uint<32>  f10;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_1030() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_1031() {
		return f4;
	}

	inline hw_uint<32>  peek_1032() {
		return f6;
	}

	inline hw_uint<32>  peek_2061() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_2062() {
		return f8;
	}

	inline hw_uint<32>  peek_2063() {
		return f10;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1029
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1029 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1029
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1029 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in1_FIFO_buf577_cache {
  // Reader addrs...
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
    // { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // # of banks: 2
  in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3_cache in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3;
  in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6_cache in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6;
};



inline void in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_write(hw_uint<32> & in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243, in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int in1_to_gp_3409_ld579, int in1_to_gp_3409_ld578, int dynamic_address) {
  in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3.push(in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243);
}

inline void in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_write(hw_uint<32> & in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244, in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int in1_to_gp_3409_ld579, int in1_to_gp_3409_ld578, int dynamic_address) {
  in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.push(in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244);
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.peek_1();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3.peek_1();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.peek_0();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.peek_1032();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3.peek_1032();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.peek_1031();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.peek_2063();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_merged_banks_3.peek_2063();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308 read pattern: { gp_in1_158_merged306_sm731_0784[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1029 }
  // Read schedule : { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
  // Write schedule: { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
  auto value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244 = in1_FIFO_buf577.in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_merged_banks_6.peek_2062();
  return value_in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244;
  return 0;
}

// # of bundles = 2
// gp_in1_158_merged306_sm731_0784_read
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307
//	in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308
inline hw_uint<288> in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_read_bundle_read(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  // # of ports in bundle: 9
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307
    // in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308

	hw_uint<288> result;
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<0, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_300_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<32, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_301_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<64, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_302_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<96, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_303_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<128, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_304_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<160, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_305_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<192, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_306_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<224, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_307_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308_res = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<256, 288>(result, in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_308_res);
	return result;
}

// in1_to_gp_3409_ld578_merged1059_write
//	in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243
//	in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244
inline void in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_write_bundle_write(hw_uint<64>& in1_to_gp_3409_ld578_merged1059_write, in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int in1_to_gp_3409_ld579, int in1_to_gp_3409_ld578, int dynamic_address) {
	hw_uint<32>  in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_res = in1_to_gp_3409_ld578_merged1059_write.extract<0, 31>();
	in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_write(in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_243_res, in1_FIFO_buf577, root, in1_to_gp_3409_ld579, in1_to_gp_3409_ld578, dynamic_address);
	hw_uint<32>  in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_res = in1_to_gp_3409_ld578_merged1059_write.extract<32, 63>();
	in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_write(in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_244_res, in1_FIFO_buf577, root, in1_to_gp_3409_ld579, in1_to_gp_3409_ld578, dynamic_address);
}

struct in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_to_in1_FIFO_buf581_lp_in1_0102_merged1111_100_cache {
	// RAM Box: {[7, 2053], [7, 2054]}
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

struct in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_to_in1_FIFO_buf581_lp_in1_0102_merged1111_98_cache {
	// RAM Box: {[8, 2054], [7, 2054]}
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

struct in1_FIFO_buf581_cache {
  // Reader addrs...
    // { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> in1_FIFO_buf581[7 + 2lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
    // { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> in1_FIFO_buf581[8 + 2lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
  // # of banks: 2
  in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_to_in1_FIFO_buf581_lp_in1_0102_merged1111_100_cache in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_to_in1_FIFO_buf581_lp_in1_0102_merged1111_100;
  in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_to_in1_FIFO_buf581_lp_in1_0102_merged1111_98_cache in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_to_in1_FIFO_buf581_lp_in1_0102_merged1111_98;
};



inline void in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_write(hw_uint<32> & in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239, in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int in1_to_gp_9413_ld583, int in1_to_gp_9413_ld582, int dynamic_address) {
  in1_FIFO_buf581.in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_to_in1_FIFO_buf581_lp_in1_0102_merged1111_98.push(in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239);
}

inline void in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_write(hw_uint<32> & in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240, in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int in1_to_gp_9413_ld583, int in1_to_gp_9413_ld582, int dynamic_address) {
  in1_FIFO_buf581.in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_to_in1_FIFO_buf581_lp_in1_0102_merged1111_100.push(in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240);
}

inline hw_uint<32>  in1_FIFO_buf581_lp_in1_0102_merged1111_100_select(in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf581_lp_in1_0102_merged1111_100 read pattern: { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> in1_FIFO_buf581[7 + 2lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
  // Read schedule : { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { in1_to_gp_9413_ld582_merged1065[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240 = in1_FIFO_buf581.in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_to_in1_FIFO_buf581_lp_in1_0102_merged1111_100.peek(/* one reader or all rams */ 0);
  return value_in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf581_lp_in1_0102_merged1111_98_select(in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf581_lp_in1_0102_merged1111_98 read pattern: { lp_in1_0102_merged1111[root = 0, lp_in1_0101, lp_in1_0102] -> in1_FIFO_buf581[8 + 2lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 1023 }
  // Read schedule : { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { in1_to_gp_9413_ld582_merged1065[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239 = in1_FIFO_buf581.in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_to_in1_FIFO_buf581_lp_in1_0102_merged1111_98.peek(/* one reader or all rams */ 0);
  return value_in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239;
  return 0;
}

// # of bundles = 2
// in1_to_gp_9413_ld582_merged1065_write
//	in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239
//	in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240
inline void in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_write_bundle_write(hw_uint<64>& in1_to_gp_9413_ld582_merged1065_write, in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int in1_to_gp_9413_ld583, int in1_to_gp_9413_ld582, int dynamic_address) {
	hw_uint<32>  in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_res = in1_to_gp_9413_ld582_merged1065_write.extract<0, 31>();
	in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_write(in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_239_res, in1_FIFO_buf581, root, in1_to_gp_9413_ld583, in1_to_gp_9413_ld582, dynamic_address);
	hw_uint<32>  in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_res = in1_to_gp_9413_ld582_merged1065_write.extract<32, 63>();
	in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_write(in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_240_res, in1_FIFO_buf581, root, in1_to_gp_9413_ld583, in1_to_gp_9413_ld582, dynamic_address);
}

// lp_in1_0102_merged1111_read
//	in1_FIFO_buf581_lp_in1_0102_merged1111_98
//	in1_FIFO_buf581_lp_in1_0102_merged1111_100
inline hw_uint<64> in1_FIFO_buf581_lp_in1_0102_merged1111_read_bundle_read(in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  // # of ports in bundle: 2
    // in1_FIFO_buf581_lp_in1_0102_merged1111_98
    // in1_FIFO_buf581_lp_in1_0102_merged1111_100

	hw_uint<64> result;
	hw_uint<32>  in1_FIFO_buf581_lp_in1_0102_merged1111_98_res = in1_FIFO_buf581_lp_in1_0102_merged1111_98_select(in1_FIFO_buf581, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<0, 64>(result, in1_FIFO_buf581_lp_in1_0102_merged1111_98_res);
	hw_uint<32>  in1_FIFO_buf581_lp_in1_0102_merged1111_100_res = in1_FIFO_buf581_lp_in1_0102_merged1111_100_select(in1_FIFO_buf581, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<32, 64>(result, in1_FIFO_buf581_lp_in1_0102_merged1111_100_res);
	return result;
}

struct lp_in0_0_buf52_lp_in0_054_merged1103_109_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct lp_in0_0_buf52_lp_in0_054_merged1103_110_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct lp_in0_0_buf52_cache {
  // Reader addrs...
    // { lp_in0_0_buf52_ld418_merged1085[root = 0, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418] -> lp_in0_0_buf52[1 + 2lp_in0_0_buf52_ld418, lp_in0_0_buf52_ld419] : 0 <= lp_in0_0_buf52_ld419 <= 2047 and 0 <= lp_in0_0_buf52_ld418 <= 1023 }
    // { lp_in0_0_buf52_ld418_merged1085[root = 0, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418] -> lp_in0_0_buf52[2lp_in0_0_buf52_ld418, lp_in0_0_buf52_ld419] : 0 <= lp_in0_0_buf52_ld419 <= 2047 and 0 <= lp_in0_0_buf52_ld418 <= 1023 }
  // # of banks: 2
  lp_in0_0_buf52_lp_in0_054_merged1103_109_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107_cache lp_in0_0_buf52_lp_in0_054_merged1103_109_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107;
  lp_in0_0_buf52_lp_in0_054_merged1103_110_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108_cache lp_in0_0_buf52_lp_in0_054_merged1103_110_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108;
};



inline void lp_in0_0_buf52_lp_in0_054_merged1103_109_write(hw_uint<32> & lp_in0_0_buf52_lp_in0_054_merged1103_109, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged1103_109_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107.push(lp_in0_0_buf52_lp_in0_054_merged1103_109);
}

inline void lp_in0_0_buf52_lp_in0_054_merged1103_110_write(hw_uint<32> & lp_in0_0_buf52_lp_in0_054_merged1103_110, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged1103_110_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108.push(lp_in0_0_buf52_lp_in0_054_merged1103_110);
}

inline hw_uint<32>  lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_0_buf52_ld419, int lp_in0_0_buf52_ld418, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107 read pattern: { lp_in0_0_buf52_ld418_merged1085[root = 0, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418] -> lp_in0_0_buf52[1 + 2lp_in0_0_buf52_ld418, lp_in0_0_buf52_ld419] : 0 <= lp_in0_0_buf52_ld419 <= 2047 and 0 <= lp_in0_0_buf52_ld418 <= 1023 }
  // Read schedule : { lp_in0_0_buf52_ld418_merged1085[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 42] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in0_0_buf52_lp_in0_054_merged1103_109 = lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged1103_109_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_lp_in0_054_merged1103_109;
  return 0;
}

inline hw_uint<32>  lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_0_buf52_ld419, int lp_in0_0_buf52_ld418, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108 read pattern: { lp_in0_0_buf52_ld418_merged1085[root = 0, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418] -> lp_in0_0_buf52[2lp_in0_0_buf52_ld418, lp_in0_0_buf52_ld419] : 0 <= lp_in0_0_buf52_ld419 <= 2047 and 0 <= lp_in0_0_buf52_ld418 <= 1023 }
  // Read schedule : { lp_in0_0_buf52_ld418_merged1085[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 42] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in0_0_buf52_lp_in0_054_merged1103_110 = lp_in0_0_buf52.lp_in0_0_buf52_lp_in0_054_merged1103_110_to_lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_lp_in0_054_merged1103_110;
  return 0;
}

// # of bundles = 2
// lp_in0_054_merged1103_write
//	lp_in0_0_buf52_lp_in0_054_merged1103_109
//	lp_in0_0_buf52_lp_in0_054_merged1103_110
inline void lp_in0_0_buf52_lp_in0_054_merged1103_write_bundle_write(hw_uint<64>& lp_in0_054_merged1103_write, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
	hw_uint<32>  lp_in0_0_buf52_lp_in0_054_merged1103_109_res = lp_in0_054_merged1103_write.extract<0, 31>();
	lp_in0_0_buf52_lp_in0_054_merged1103_109_write(lp_in0_0_buf52_lp_in0_054_merged1103_109_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
	hw_uint<32>  lp_in0_0_buf52_lp_in0_054_merged1103_110_res = lp_in0_054_merged1103_write.extract<32, 63>();
	lp_in0_0_buf52_lp_in0_054_merged1103_110_write(lp_in0_0_buf52_lp_in0_054_merged1103_110_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
}

// lp_in0_0_buf52_ld418_merged1085_read
//	lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107
//	lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108
inline hw_uint<64> lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_read_bundle_read(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_0_buf52_ld419, int lp_in0_0_buf52_ld418, int dynamic_address) {
  // # of ports in bundle: 2
    // lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107
    // lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108

	hw_uint<64> result;
	hw_uint<32>  lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107_res = lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107_select(lp_in0_0_buf52, root, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418, dynamic_address);
	set_at<0, 64>(result, lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_107_res);
	hw_uint<32>  lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108_res = lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108_select(lp_in0_0_buf52, root, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418, dynamic_address);
	set_at<32, 64>(result, lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_108_res);
	return result;
}

struct lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct lp_in0_0_buf52_FIFO_buf585_cache {
  // Reader addrs...
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52_FIFO_buf585[1 + 2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52_FIFO_buf585[2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
  // # of banks: 2
  lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42_cache lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42;
  lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44_cache lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44;
};



inline void lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_write(hw_uint<32> & lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int lp_in0_0_buf52_to_gp_18417_ld587, int lp_in0_0_buf52_to_gp_18417_ld586, int dynamic_address) {
  lp_in0_0_buf52_FIFO_buf585.lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42.push(lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101);
}

inline void lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_write(hw_uint<32> & lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int lp_in0_0_buf52_to_gp_18417_ld587, int lp_in0_0_buf52_to_gp_18417_ld586, int dynamic_address) {
  lp_in0_0_buf52_FIFO_buf585.lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44.push(lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102);
}

inline hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42_select(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52_FIFO_buf585[1 + 2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in0_0_buf52_to_gp_18417_ld586_merged1091[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 45] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101 = lp_in0_0_buf52_FIFO_buf585.lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101;
  return 0;
}

inline hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44_select(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52_FIFO_buf585[2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in0_0_buf52_to_gp_18417_ld586_merged1091[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 45] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102 = lp_in0_0_buf52_FIFO_buf585.lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102;
  return 0;
}

// # of bundles = 2
// lp_in0_0_buf52_to_gp_18417_ld586_merged1091_write
//	lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101
//	lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102
inline void lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_write_bundle_write(hw_uint<64>& lp_in0_0_buf52_to_gp_18417_ld586_merged1091_write, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int lp_in0_0_buf52_to_gp_18417_ld587, int lp_in0_0_buf52_to_gp_18417_ld586, int dynamic_address) {
	hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_res = lp_in0_0_buf52_to_gp_18417_ld586_merged1091_write.extract<0, 31>();
	lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_write(lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_101_res, lp_in0_0_buf52_FIFO_buf585, root, lp_in0_0_buf52_to_gp_18417_ld587, lp_in0_0_buf52_to_gp_18417_ld586, dynamic_address);
	hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_res = lp_in0_0_buf52_to_gp_18417_ld586_merged1091_write.extract<32, 63>();
	lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_write(lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_102_res, lp_in0_0_buf52_FIFO_buf585, root, lp_in0_0_buf52_to_gp_18417_ld587, lp_in0_0_buf52_to_gp_18417_ld586, dynamic_address);
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_read
//	lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42
//	lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44
inline hw_uint<64> lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_read_bundle_read(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  // # of ports in bundle: 2
    // lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42
    // lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44

	hw_uint<64> result;
	hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42_res = lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42_select(lp_in0_0_buf52_FIFO_buf585, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<0, 64>(result, lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_42_res);
	hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44_res = lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44_select(lp_in0_0_buf52_FIFO_buf585, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<32, 64>(result, lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_44_res);
	return result;
}

struct lp_in0_1_buf44_diff47_sm725_01054_353_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct lp_in0_1_buf44_cache {
  // Reader addrs...
    // { load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912[root = 0, lp_in0_1_buf44_ld423, lp_in0_1_buf44_ld422] -> lp_in0_1_buf44[lp_in0_1_buf44_ld422, lp_in0_1_buf44_ld423] : 0 <= lp_in0_1_buf44_ld423 <= 1023 and 0 <= lp_in0_1_buf44_ld422 <= 1023 }
  // # of banks: 1
  lp_in0_1_buf44_diff47_sm725_01054_353_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156_cache lp_in0_1_buf44_diff47_sm725_01054_353_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156;
};



inline void lp_in0_1_buf44_diff47_sm725_01054_353_write(hw_uint<32> & lp_in0_1_buf44_diff47_sm725_01054_353, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  lp_in0_1_buf44.lp_in0_1_buf44_diff47_sm725_01054_353_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156.push(lp_in0_1_buf44_diff47_sm725_01054_353);
}

inline hw_uint<32>  lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156_select(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_1_buf44_ld423, int lp_in0_1_buf44_ld422, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156 read pattern: { load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912[root = 0, lp_in0_1_buf44_ld423, lp_in0_1_buf44_ld422] -> lp_in0_1_buf44[lp_in0_1_buf44_ld422, lp_in0_1_buf44_ld423] : 0 <= lp_in0_1_buf44_ld423 <= 1023 and 0 <= lp_in0_1_buf44_ld422 <= 1023 }
  // Read schedule : { load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 68] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { diff47_sm725_01054[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in0_1_buf44_diff47_sm725_01054_353 = lp_in0_1_buf44.lp_in0_1_buf44_diff47_sm725_01054_353_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156.peek(/* one reader or all rams */ 0);
  return value_lp_in0_1_buf44_diff47_sm725_01054_353;
  return 0;
}

// # of bundles = 2
// diff47_sm725_01054_write
//	lp_in0_1_buf44_diff47_sm725_01054_353
inline void lp_in0_1_buf44_diff47_sm725_01054_write_bundle_write(hw_uint<32>& diff47_sm725_01054_write, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
	hw_uint<32>  lp_in0_1_buf44_diff47_sm725_01054_353_res = diff47_sm725_01054_write.extract<0, 31>();
	lp_in0_1_buf44_diff47_sm725_01054_353_write(lp_in0_1_buf44_diff47_sm725_01054_353_res, lp_in0_1_buf44, root, lp_in0_145, lp_in0_146, dynamic_address);
}

// load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_read
//	lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156
inline hw_uint<32> lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_read_bundle_read(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_1_buf44_ld423, int lp_in0_1_buf44_ld422, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156

	hw_uint<32> result;
	hw_uint<32>  lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156_res = lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156_select(lp_in0_1_buf44, root, lp_in0_1_buf44_ld423, lp_in0_1_buf44_ld422, dynamic_address);
	set_at<0, 32>(result, lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_156_res);
	return result;
}

struct lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct lp_in0_1_buf44_FIFO_buf589_cache {
  // Reader addrs...
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44_FIFO_buf589[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // # of banks: 1
  lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38_cache lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38;
};



inline void lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_write(hw_uint<32> & lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157, lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int lp_in0_1_buf44_to_gp_19421_ld591, int lp_in0_1_buf44_to_gp_19421_ld590, int dynamic_address) {
  lp_in0_1_buf44_FIFO_buf589.lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38.push(lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157);
}

inline hw_uint<32>  lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38_select(lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44_FIFO_buf589[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 82] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 74] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157 = lp_in0_1_buf44_FIFO_buf589.lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38.peek(/* one reader or all rams */ 0);
  return value_lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157;
  return 0;
}

// # of bundles = 2
// load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_write
//	lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157
inline void lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_write_bundle_write(hw_uint<32>& load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_write, lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int lp_in0_1_buf44_to_gp_19421_ld591, int lp_in0_1_buf44_to_gp_19421_ld590, int dynamic_address) {
	hw_uint<32>  lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_res = load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_write.extract<0, 31>();
	lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_write(lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_157_res, lp_in0_1_buf44_FIFO_buf589, root, lp_in0_1_buf44_to_gp_19421_ld591, lp_in0_1_buf44_to_gp_19421_ld590, dynamic_address);
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_read
//	lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38
inline hw_uint<32> lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_read_bundle_read(lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38

	hw_uint<32> result;
	hw_uint<32>  lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38_res = lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38_select(lp_in0_1_buf44_FIFO_buf589, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<0, 32>(result, lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_38_res);
	return result;
}

struct lp_in0_2_buf36_diff39_sm726_01056_356_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct lp_in0_2_buf36_cache {
  // Reader addrs...
    // { load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892[root = 0, lp_in0_2_buf36_ld427, lp_in0_2_buf36_ld426] -> lp_in0_2_buf36[lp_in0_2_buf36_ld426, lp_in0_2_buf36_ld427] : 0 <= lp_in0_2_buf36_ld427 <= 511 and 0 <= lp_in0_2_buf36_ld426 <= 511 }
  // # of banks: 1
  lp_in0_2_buf36_diff39_sm726_01056_356_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152_cache lp_in0_2_buf36_diff39_sm726_01056_356_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152;
};



inline void lp_in0_2_buf36_diff39_sm726_01056_356_write(hw_uint<32> & lp_in0_2_buf36_diff39_sm726_01056_356, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  lp_in0_2_buf36.lp_in0_2_buf36_diff39_sm726_01056_356_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152.push(lp_in0_2_buf36_diff39_sm726_01056_356);
}

inline hw_uint<32>  lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152_select(lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_2_buf36_ld427, int lp_in0_2_buf36_ld426, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152 read pattern: { load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892[root = 0, lp_in0_2_buf36_ld427, lp_in0_2_buf36_ld426] -> lp_in0_2_buf36[lp_in0_2_buf36_ld426, lp_in0_2_buf36_ld427] : 0 <= lp_in0_2_buf36_ld427 <= 511 and 0 <= lp_in0_2_buf36_ld426 <= 511 }
  // Read schedule : { load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 90] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { diff39_sm726_01056[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in0_2_buf36_diff39_sm726_01056_356 = lp_in0_2_buf36.lp_in0_2_buf36_diff39_sm726_01056_356_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152.peek(/* one reader or all rams */ 0);
  return value_lp_in0_2_buf36_diff39_sm726_01056_356;
  return 0;
}

// # of bundles = 2
// diff39_sm726_01056_write
//	lp_in0_2_buf36_diff39_sm726_01056_356
inline void lp_in0_2_buf36_diff39_sm726_01056_write_bundle_write(hw_uint<32>& diff39_sm726_01056_write, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
	hw_uint<32>  lp_in0_2_buf36_diff39_sm726_01056_356_res = diff39_sm726_01056_write.extract<0, 31>();
	lp_in0_2_buf36_diff39_sm726_01056_356_write(lp_in0_2_buf36_diff39_sm726_01056_356_res, lp_in0_2_buf36, root, lp_in0_237, lp_in0_238, dynamic_address);
}

// load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_read
//	lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152
inline hw_uint<32> lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_read_bundle_read(lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_2_buf36_ld427, int lp_in0_2_buf36_ld426, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152

	hw_uint<32> result;
	hw_uint<32>  lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152_res = lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152_select(lp_in0_2_buf36, root, lp_in0_2_buf36_ld427, lp_in0_2_buf36_ld426, dynamic_address);
	set_at<0, 32>(result, lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_152_res);
	return result;
}

struct lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct lp_in0_2_buf36_FIFO_buf593_cache {
  // Reader addrs...
    // { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in0_2_buf36_FIFO_buf593[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // # of banks: 1
  lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35_cache lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35;
};



inline void lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_write(hw_uint<32> & lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153, lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int lp_in0_2_buf36_to_gp_20425_ld595, int lp_in0_2_buf36_to_gp_20425_ld594, int dynamic_address) {
  lp_in0_2_buf36_FIFO_buf593.lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35.push(lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153);
}

inline hw_uint<32>  lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35_select(lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35 read pattern: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in0_2_buf36_FIFO_buf593[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // Read schedule : { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 96] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 92] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153 = lp_in0_2_buf36_FIFO_buf593.lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35.peek(/* one reader or all rams */ 0);
  return value_lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153;
  return 0;
}

// # of bundles = 2
// load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_write
//	lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153
inline void lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_write_bundle_write(hw_uint<32>& load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_write, lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int lp_in0_2_buf36_to_gp_20425_ld595, int lp_in0_2_buf36_to_gp_20425_ld594, int dynamic_address) {
	hw_uint<32>  lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_res = load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_write.extract<0, 31>();
	lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_write(lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_153_res, lp_in0_2_buf36_FIFO_buf593, root, lp_in0_2_buf36_to_gp_20425_ld595, lp_in0_2_buf36_to_gp_20425_ld594, dynamic_address);
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_read
//	lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35
inline hw_uint<32> lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_read_bundle_read(lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35

	hw_uint<32> result;
	hw_uint<32>  lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35_res = lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35_select(lp_in0_2_buf36_FIFO_buf593, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
	set_at<0, 32>(result, lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_35_res);
	return result;
}

struct lp_in1_0_buf100_lp_in1_0102_merged1111_95_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct lp_in1_0_buf100_lp_in1_0102_merged1111_96_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct lp_in1_0_buf100_cache {
  // Reader addrs...
    // { lp_in1_0_buf100_ld430_merged1083[root = 0, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430] -> lp_in1_0_buf100[1 + 2lp_in1_0_buf100_ld430, lp_in1_0_buf100_ld431] : 0 <= lp_in1_0_buf100_ld431 <= 2047 and 0 <= lp_in1_0_buf100_ld430 <= 1023 }
    // { lp_in1_0_buf100_ld430_merged1083[root = 0, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430] -> lp_in1_0_buf100[2lp_in1_0_buf100_ld430, lp_in1_0_buf100_ld431] : 0 <= lp_in1_0_buf100_ld431 <= 2047 and 0 <= lp_in1_0_buf100_ld430 <= 1023 }
  // # of banks: 2
  lp_in1_0_buf100_lp_in1_0102_merged1111_95_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93_cache lp_in1_0_buf100_lp_in1_0102_merged1111_95_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93;
  lp_in1_0_buf100_lp_in1_0102_merged1111_96_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94_cache lp_in1_0_buf100_lp_in1_0102_merged1111_96_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94;
};



inline void lp_in1_0_buf100_lp_in1_0102_merged1111_95_write(hw_uint<32> & lp_in1_0_buf100_lp_in1_0102_merged1111_95, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged1111_95_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93.push(lp_in1_0_buf100_lp_in1_0102_merged1111_95);
}

inline void lp_in1_0_buf100_lp_in1_0102_merged1111_96_write(hw_uint<32> & lp_in1_0_buf100_lp_in1_0102_merged1111_96, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged1111_96_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94.push(lp_in1_0_buf100_lp_in1_0102_merged1111_96);
}

inline hw_uint<32>  lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0_buf100_ld431, int lp_in1_0_buf100_ld430, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93 read pattern: { lp_in1_0_buf100_ld430_merged1083[root = 0, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430] -> lp_in1_0_buf100[1 + 2lp_in1_0_buf100_ld430, lp_in1_0_buf100_ld431] : 0 <= lp_in1_0_buf100_ld431 <= 2047 and 0 <= lp_in1_0_buf100_ld430 <= 1023 }
  // Read schedule : { lp_in1_0_buf100_ld430_merged1083[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in1_0_buf100_lp_in1_0102_merged1111_95 = lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged1111_95_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_lp_in1_0102_merged1111_95;
  return 0;
}

inline hw_uint<32>  lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0_buf100_ld431, int lp_in1_0_buf100_ld430, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94 read pattern: { lp_in1_0_buf100_ld430_merged1083[root = 0, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430] -> lp_in1_0_buf100[2lp_in1_0_buf100_ld430, lp_in1_0_buf100_ld431] : 0 <= lp_in1_0_buf100_ld431 <= 2047 and 0 <= lp_in1_0_buf100_ld430 <= 1023 }
  // Read schedule : { lp_in1_0_buf100_ld430_merged1083[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in1_0_buf100_lp_in1_0102_merged1111_96 = lp_in1_0_buf100.lp_in1_0_buf100_lp_in1_0102_merged1111_96_to_lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_lp_in1_0102_merged1111_96;
  return 0;
}

// # of bundles = 2
// lp_in1_0102_merged1111_write
//	lp_in1_0_buf100_lp_in1_0102_merged1111_95
//	lp_in1_0_buf100_lp_in1_0102_merged1111_96
inline void lp_in1_0_buf100_lp_in1_0102_merged1111_write_bundle_write(hw_uint<64>& lp_in1_0102_merged1111_write, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0102_merged1111_95_res = lp_in1_0102_merged1111_write.extract<0, 31>();
	lp_in1_0_buf100_lp_in1_0102_merged1111_95_write(lp_in1_0_buf100_lp_in1_0102_merged1111_95_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0102_merged1111_96_res = lp_in1_0102_merged1111_write.extract<32, 63>();
	lp_in1_0_buf100_lp_in1_0102_merged1111_96_write(lp_in1_0_buf100_lp_in1_0102_merged1111_96_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
}

// lp_in1_0_buf100_ld430_merged1083_read
//	lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93
//	lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94
inline hw_uint<64> lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_read_bundle_read(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0_buf100_ld431, int lp_in1_0_buf100_ld430, int dynamic_address) {
  // # of ports in bundle: 2
    // lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93
    // lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94

	hw_uint<64> result;
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93_res = lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93_select(lp_in1_0_buf100, root, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430, dynamic_address);
	set_at<0, 64>(result, lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_93_res);
	hw_uint<32>  lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94_res = lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94_select(lp_in1_0_buf100, root, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430, dynamic_address);
	set_at<32, 64>(result, lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_94_res);
	return result;
}

struct lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct lp_in1_0_buf100_FIFO_buf597_cache {
  // Reader addrs...
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100_FIFO_buf597[1 + 2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100_FIFO_buf597[2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
  // # of banks: 2
  lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43_cache lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43;
  lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45_cache lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45;
};



inline void lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_write(hw_uint<32> & lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int lp_in1_0_buf100_to_gp_18429_ld599, int lp_in1_0_buf100_to_gp_18429_ld598, int dynamic_address) {
  lp_in1_0_buf100_FIFO_buf597.lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43.push(lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87);
}

inline void lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_write(hw_uint<32> & lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int lp_in1_0_buf100_to_gp_18429_ld599, int lp_in1_0_buf100_to_gp_18429_ld598, int dynamic_address) {
  lp_in1_0_buf100_FIFO_buf597.lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45.push(lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88);
}

inline hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43_select(lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100_FIFO_buf597[1 + 2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in1_0_buf100_to_gp_18429_ld598_merged1126[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87 = lp_in1_0_buf100_FIFO_buf597.lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87;
  return 0;
}

inline hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45_select(lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100_FIFO_buf597[2pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 1023 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { lp_in1_0_buf100_to_gp_18429_ld598_merged1126[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88 = lp_in1_0_buf100_FIFO_buf597.lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88;
  return 0;
}

// # of bundles = 2
// lp_in1_0_buf100_to_gp_18429_ld598_merged1126_write
//	lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87
//	lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88
inline void lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_write_bundle_write(hw_uint<64>& lp_in1_0_buf100_to_gp_18429_ld598_merged1126_write, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int lp_in1_0_buf100_to_gp_18429_ld599, int lp_in1_0_buf100_to_gp_18429_ld598, int dynamic_address) {
	hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_res = lp_in1_0_buf100_to_gp_18429_ld598_merged1126_write.extract<0, 31>();
	lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_write(lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_87_res, lp_in1_0_buf100_FIFO_buf597, root, lp_in1_0_buf100_to_gp_18429_ld599, lp_in1_0_buf100_to_gp_18429_ld598, dynamic_address);
	hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_res = lp_in1_0_buf100_to_gp_18429_ld598_merged1126_write.extract<32, 63>();
	lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_write(lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_88_res, lp_in1_0_buf100_FIFO_buf597, root, lp_in1_0_buf100_to_gp_18429_ld599, lp_in1_0_buf100_to_gp_18429_ld598, dynamic_address);
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_read
//	lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43
//	lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45
inline hw_uint<64> lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_read_bundle_read(lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  // # of ports in bundle: 2
    // lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43
    // lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45

	hw_uint<64> result;
	hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43_res = lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43_select(lp_in1_0_buf100_FIFO_buf597, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<0, 64>(result, lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_43_res);
	hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45_res = lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45_select(lp_in1_0_buf100_FIFO_buf597, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<32, 64>(result, lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_45_res);
	return result;
}

struct lp_in1_1_buf92_diff95_sm736_0768_347_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct lp_in1_1_buf92_cache {
  // Reader addrs...
    // { load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890[root = 0, lp_in1_1_buf92_ld435, lp_in1_1_buf92_ld434] -> lp_in1_1_buf92[lp_in1_1_buf92_ld434, lp_in1_1_buf92_ld435] : 0 <= lp_in1_1_buf92_ld435 <= 1023 and 0 <= lp_in1_1_buf92_ld434 <= 1023 }
  // # of banks: 1
  lp_in1_1_buf92_diff95_sm736_0768_347_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148_cache lp_in1_1_buf92_diff95_sm736_0768_347_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148;
};



inline void lp_in1_1_buf92_diff95_sm736_0768_347_write(hw_uint<32> & lp_in1_1_buf92_diff95_sm736_0768_347, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  lp_in1_1_buf92.lp_in1_1_buf92_diff95_sm736_0768_347_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148.push(lp_in1_1_buf92_diff95_sm736_0768_347);
}

inline hw_uint<32>  lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148_select(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_1_buf92_ld435, int lp_in1_1_buf92_ld434, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148 read pattern: { load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890[root = 0, lp_in1_1_buf92_ld435, lp_in1_1_buf92_ld434] -> lp_in1_1_buf92[lp_in1_1_buf92_ld434, lp_in1_1_buf92_ld435] : 0 <= lp_in1_1_buf92_ld435 <= 1023 and 0 <= lp_in1_1_buf92_ld434 <= 1023 }
  // Read schedule : { load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 75] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { diff95_sm736_0768[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 73] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in1_1_buf92_diff95_sm736_0768_347 = lp_in1_1_buf92.lp_in1_1_buf92_diff95_sm736_0768_347_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148.peek(/* one reader or all rams */ 0);
  return value_lp_in1_1_buf92_diff95_sm736_0768_347;
  return 0;
}

// # of bundles = 2
// diff95_sm736_0768_write
//	lp_in1_1_buf92_diff95_sm736_0768_347
inline void lp_in1_1_buf92_diff95_sm736_0768_write_bundle_write(hw_uint<32>& diff95_sm736_0768_write, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
	hw_uint<32>  lp_in1_1_buf92_diff95_sm736_0768_347_res = diff95_sm736_0768_write.extract<0, 31>();
	lp_in1_1_buf92_diff95_sm736_0768_347_write(lp_in1_1_buf92_diff95_sm736_0768_347_res, lp_in1_1_buf92, root, lp_in1_193, lp_in1_194, dynamic_address);
}

// load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_read
//	lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148
inline hw_uint<32> lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_read_bundle_read(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_1_buf92_ld435, int lp_in1_1_buf92_ld434, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148

	hw_uint<32> result;
	hw_uint<32>  lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148_res = lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148_select(lp_in1_1_buf92, root, lp_in1_1_buf92_ld435, lp_in1_1_buf92_ld434, dynamic_address);
	set_at<0, 32>(result, lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_148_res);
	return result;
}

struct lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct lp_in1_1_buf92_FIFO_buf601_cache {
  // Reader addrs...
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92_FIFO_buf601[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // # of banks: 1
  lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39_cache lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39;
};



inline void lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_write(hw_uint<32> & lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int lp_in1_1_buf92_to_gp_19433_ld603, int lp_in1_1_buf92_to_gp_19433_ld602, int dynamic_address) {
  lp_in1_1_buf92_FIFO_buf601.lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39.push(lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149);
}

inline hw_uint<32>  lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39_select(lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92_FIFO_buf601[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 82] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 80] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149 = lp_in1_1_buf92_FIFO_buf601.lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39.peek(/* one reader or all rams */ 0);
  return value_lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149;
  return 0;
}

// # of bundles = 2
// load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_write
//	lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149
inline void lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_write_bundle_write(hw_uint<32>& load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_write, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int lp_in1_1_buf92_to_gp_19433_ld603, int lp_in1_1_buf92_to_gp_19433_ld602, int dynamic_address) {
	hw_uint<32>  lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_res = load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_write.extract<0, 31>();
	lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_write(lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_149_res, lp_in1_1_buf92_FIFO_buf601, root, lp_in1_1_buf92_to_gp_19433_ld603, lp_in1_1_buf92_to_gp_19433_ld602, dynamic_address);
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_read
//	lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39
inline hw_uint<32> lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_read_bundle_read(lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39

	hw_uint<32> result;
	hw_uint<32>  lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39_res = lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39_select(lp_in1_1_buf92_FIFO_buf601, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<0, 32>(result, lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_39_res);
	return result;
}

struct lp_in1_2_buf84_diff87_sm728_0990_350_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct lp_in1_2_buf84_cache {
  // Reader addrs...
    // { load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910[root = 0, lp_in1_2_buf84_ld439, lp_in1_2_buf84_ld438] -> lp_in1_2_buf84[lp_in1_2_buf84_ld438, lp_in1_2_buf84_ld439] : 0 <= lp_in1_2_buf84_ld439 <= 511 and 0 <= lp_in1_2_buf84_ld438 <= 511 }
  // # of banks: 1
  lp_in1_2_buf84_diff87_sm728_0990_350_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144_cache lp_in1_2_buf84_diff87_sm728_0990_350_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144;
};



inline void lp_in1_2_buf84_diff87_sm728_0990_350_write(hw_uint<32> & lp_in1_2_buf84_diff87_sm728_0990_350, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  lp_in1_2_buf84.lp_in1_2_buf84_diff87_sm728_0990_350_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144.push(lp_in1_2_buf84_diff87_sm728_0990_350);
}

inline hw_uint<32>  lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144_select(lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_2_buf84_ld439, int lp_in1_2_buf84_ld438, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144 read pattern: { load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910[root = 0, lp_in1_2_buf84_ld439, lp_in1_2_buf84_ld438] -> lp_in1_2_buf84[lp_in1_2_buf84_ld438, lp_in1_2_buf84_ld439] : 0 <= lp_in1_2_buf84_ld439 <= 511 and 0 <= lp_in1_2_buf84_ld438 <= 511 }
  // Read schedule : { load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 94] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { diff87_sm728_0990[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in1_2_buf84_diff87_sm728_0990_350 = lp_in1_2_buf84.lp_in1_2_buf84_diff87_sm728_0990_350_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144.peek(/* one reader or all rams */ 0);
  return value_lp_in1_2_buf84_diff87_sm728_0990_350;
  return 0;
}

// # of bundles = 2
// diff87_sm728_0990_write
//	lp_in1_2_buf84_diff87_sm728_0990_350
inline void lp_in1_2_buf84_diff87_sm728_0990_write_bundle_write(hw_uint<32>& diff87_sm728_0990_write, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
	hw_uint<32>  lp_in1_2_buf84_diff87_sm728_0990_350_res = diff87_sm728_0990_write.extract<0, 31>();
	lp_in1_2_buf84_diff87_sm728_0990_350_write(lp_in1_2_buf84_diff87_sm728_0990_350_res, lp_in1_2_buf84, root, lp_in1_285, lp_in1_286, dynamic_address);
}

// load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_read
//	lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144
inline hw_uint<32> lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_read_bundle_read(lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_2_buf84_ld439, int lp_in1_2_buf84_ld438, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144

	hw_uint<32> result;
	hw_uint<32>  lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144_res = lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144_select(lp_in1_2_buf84, root, lp_in1_2_buf84_ld439, lp_in1_2_buf84_ld438, dynamic_address);
	set_at<0, 32>(result, lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_144_res);
	return result;
}

struct lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct lp_in1_2_buf84_FIFO_buf605_cache {
  // Reader addrs...
    // { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in1_2_buf84_FIFO_buf605[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // # of banks: 1
  lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36_cache lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36;
};



inline void lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_write(hw_uint<32> & lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int lp_in1_2_buf84_to_gp_20437_ld607, int lp_in1_2_buf84_to_gp_20437_ld606, int dynamic_address) {
  lp_in1_2_buf84_FIFO_buf605.lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36.push(lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145);
}

inline hw_uint<32>  lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36_select(lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36 read pattern: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in1_2_buf84_FIFO_buf605[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // Read schedule : { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 96] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145 = lp_in1_2_buf84_FIFO_buf605.lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36.peek(/* one reader or all rams */ 0);
  return value_lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145;
  return 0;
}

// # of bundles = 2
// load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_write
//	lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145
inline void lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_write_bundle_write(hw_uint<32>& load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_write, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int lp_in1_2_buf84_to_gp_20437_ld607, int lp_in1_2_buf84_to_gp_20437_ld606, int dynamic_address) {
	hw_uint<32>  lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_res = load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_write.extract<0, 31>();
	lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_write(lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_145_res, lp_in1_2_buf84_FIFO_buf605, root, lp_in1_2_buf84_to_gp_20437_ld607, lp_in1_2_buf84_to_gp_20437_ld606, dynamic_address);
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_read
//	lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36
inline hw_uint<32> lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_read_bundle_read(lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36

	hw_uint<32> result;
	hw_uint<32>  lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36_res = lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36_select(lp_in1_2_buf84_FIFO_buf605, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
	set_at<0, 32>(result, lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_36_res);
	return result;
}

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_to_merged_0_merged_0_ld442_merged1071_85_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_to_merged_0_merged_0_ld442_merged1071_86_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct merged_0_cache {
  // Reader addrs...
    // { merged_0_ld442_merged1071[root = 0, merged_0_ld443, merged_0_ld442] -> merged_0[1 + 2merged_0_ld442, merged_0_ld443] : 0 <= merged_0_ld443 <= 2047 and 0 <= merged_0_ld442 <= 1023 }
    // { merged_0_ld442_merged1071[root = 0, merged_0_ld443, merged_0_ld442] -> merged_0[2merged_0_ld442, merged_0_ld443] : 0 <= merged_0_ld443 <= 2047 and 0 <= merged_0_ld442 <= 1023 }
  // # of banks: 2
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_to_merged_0_merged_0_ld442_merged1071_85_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_to_merged_0_merged_0_ld442_merged1071_85;
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_to_merged_0_merged_0_ld442_merged1071_86_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_to_merged_0_merged_0_ld442_merged1071_86;
};



inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_to_merged_0_merged_0_ld442_merged1071_85.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40);
}

inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_to_merged_0_merged_0_ld442_merged1071_86.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41);
}

inline hw_uint<32>  merged_0_merged_0_ld442_merged1071_85_select(merged_0_cache& merged_0, int root, int merged_0_ld443, int merged_0_ld442, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_merged_0_ld442_merged1071_85 read pattern: { merged_0_ld442_merged1071[root = 0, merged_0_ld443, merged_0_ld442] -> merged_0[1 + 2merged_0_ld442, merged_0_ld443] : 0 <= merged_0_ld443 <= 2047 and 0 <= merged_0_ld442 <= 1023 }
  // Read schedule : { merged_0_ld442_merged1071[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 69] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_to_merged_0_merged_0_ld442_merged1071_85.peek(/* one reader or all rams */ 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40;
  return 0;
}

inline hw_uint<32>  merged_0_merged_0_ld442_merged1071_86_select(merged_0_cache& merged_0, int root, int merged_0_ld443, int merged_0_ld442, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_merged_0_ld442_merged1071_86 read pattern: { merged_0_ld442_merged1071[root = 0, merged_0_ld443, merged_0_ld442] -> merged_0[2merged_0_ld442, merged_0_ld443] : 0 <= merged_0_ld443 <= 2047 and 0 <= merged_0_ld442 <= 1023 }
  // Read schedule : { merged_0_ld442_merged1071[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 69] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_to_merged_0_merged_0_ld442_merged1071_86.peek(/* one reader or all rams */ 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41;
  return 0;
}

// # of bundles = 2
// merged_0_ld442_merged1071_read
//	merged_0_merged_0_ld442_merged1071_85
//	merged_0_merged_0_ld442_merged1071_86
inline hw_uint<64> merged_0_merged_0_ld442_merged1071_read_bundle_read(merged_0_cache& merged_0, int root, int merged_0_ld443, int merged_0_ld442, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_0_merged_0_ld442_merged1071_85
    // merged_0_merged_0_ld442_merged1071_86

	hw_uint<64> result;
	hw_uint<32>  merged_0_merged_0_ld442_merged1071_85_res = merged_0_merged_0_ld442_merged1071_85_select(merged_0, root, merged_0_ld443, merged_0_ld442, dynamic_address);
	set_at<0, 64>(result, merged_0_merged_0_ld442_merged1071_85_res);
	hw_uint<32>  merged_0_merged_0_ld442_merged1071_86_res = merged_0_merged_0_ld442_merged1071_86_select(merged_0, root, merged_0_ld443, merged_0_ld442, dynamic_address);
	set_at<32, 64>(result, merged_0_merged_0_ld442_merged1071_86_res);
	return result;
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_write
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41
inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_write_bundle_write(hw_uint<64>& pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_write, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_write.extract<0, 31>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_40_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_write.extract<32, 63>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_41_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
}

struct merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct merged_0_FIFO_buf609_cache {
  // Reader addrs...
    // { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0_FIFO_buf609[1 + 2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
    // { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0_FIFO_buf609[2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
  // # of banks: 2
  merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79_cache merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79;
  merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81_cache merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81;
};



inline void merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_write(hw_uint<32> & merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_to_gp_12441_ld611, int merged_0_to_gp_12441_ld610, int dynamic_address) {
  merged_0_FIFO_buf609.merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79.push(merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65);
}

inline void merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_write(hw_uint<32> & merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_to_gp_12441_ld611, int merged_0_to_gp_12441_ld610, int dynamic_address) {
  merged_0_FIFO_buf609.merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81.push(merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66);
}

inline hw_uint<32>  merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79_select(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79 read pattern: { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0_FIFO_buf609[1 + 2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_0_to_gp_12441_ld610_merged1089[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 71] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65 = merged_0_FIFO_buf609.merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79.peek(/* one reader or all rams */ 0);
  return value_merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65;
  return 0;
}

inline hw_uint<32>  merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81_select(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81 read pattern: { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0_FIFO_buf609[2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_0_to_gp_12441_ld610_merged1089[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 71] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66 = merged_0_FIFO_buf609.merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_to_merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81.peek(/* one reader or all rams */ 0);
  return value_merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138140_merged1119_read
//	merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79
//	merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81
inline hw_uint<64> merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_read_bundle_read(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79
    // merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81

	hw_uint<64> result;
	hw_uint<32>  merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79_res = merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79_select(merged_0_FIFO_buf609, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<0, 64>(result, merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_79_res);
	hw_uint<32>  merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81_res = merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81_select(merged_0_FIFO_buf609, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<32, 64>(result, merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_81_res);
	return result;
}

// merged_0_to_gp_12441_ld610_merged1089_write
//	merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65
//	merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66
inline void merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_write_bundle_write(hw_uint<64>& merged_0_to_gp_12441_ld610_merged1089_write, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_to_gp_12441_ld611, int merged_0_to_gp_12441_ld610, int dynamic_address) {
	hw_uint<32>  merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_res = merged_0_to_gp_12441_ld610_merged1089_write.extract<0, 31>();
	merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_write(merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_65_res, merged_0_FIFO_buf609, root, merged_0_to_gp_12441_ld611, merged_0_to_gp_12441_ld610, dynamic_address);
	hw_uint<32>  merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_res = merged_0_to_gp_12441_ld610_merged1089_write.extract<32, 63>();
	merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_write(merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_66_res, merged_0_FIFO_buf609, root, merged_0_to_gp_12441_ld611, merged_0_to_gp_12441_ld610, dynamic_address);
}

struct merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_cache {
  // Reader addrs...
    // { merged_0_reconstruct_lp138_buf141_ld446_merged1073[root = 0, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446] -> merged_0_reconstruct_lp138_buf141[1 + 2merged_0_reconstruct_lp138_buf141_ld446, merged_0_reconstruct_lp138_buf141_ld447] : 0 <= merged_0_reconstruct_lp138_buf141_ld447 <= 2047 and 0 <= merged_0_reconstruct_lp138_buf141_ld446 <= 1023 }
    // { merged_0_reconstruct_lp138_buf141_ld446_merged1073[root = 0, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446] -> merged_0_reconstruct_lp138_buf141[2merged_0_reconstruct_lp138_buf141_ld446, merged_0_reconstruct_lp138_buf141_ld447] : 0 <= merged_0_reconstruct_lp138_buf141_ld447 <= 2047 and 0 <= merged_0_reconstruct_lp138_buf141_ld446 <= 1023 }
  // # of banks: 2
  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75_cache merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75;
  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76_cache merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76;
};



inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75.push(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77);
}

inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76.push(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78);
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138_buf141_ld447, int merged_0_reconstruct_lp138_buf141_ld446, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75 read pattern: { merged_0_reconstruct_lp138_buf141_ld446_merged1073[root = 0, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446] -> merged_0_reconstruct_lp138_buf141[1 + 2merged_0_reconstruct_lp138_buf141_ld446, merged_0_reconstruct_lp138_buf141_ld447] : 0 <= merged_0_reconstruct_lp138_buf141_ld447 <= 2047 and 0 <= merged_0_reconstruct_lp138_buf141_ld446 <= 1023 }
  // Read schedule : { merged_0_reconstruct_lp138_buf141_ld446_merged1073[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77;
  return 0;
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138_buf141_ld447, int merged_0_reconstruct_lp138_buf141_ld446, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76 read pattern: { merged_0_reconstruct_lp138_buf141_ld446_merged1073[root = 0, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446] -> merged_0_reconstruct_lp138_buf141[2merged_0_reconstruct_lp138_buf141_ld446, merged_0_reconstruct_lp138_buf141_ld447] : 0 <= merged_0_reconstruct_lp138_buf141_ld447 <= 2047 and 0 <= merged_0_reconstruct_lp138_buf141_ld446 <= 1023 }
  // Read schedule : { merged_0_reconstruct_lp138_buf141_ld446_merged1073[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_to_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138140_merged1119_write
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78
inline void merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_write_bundle_write(hw_uint<64>& merged_0_reconstruct_lp138140_merged1119_write, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_res = merged_0_reconstruct_lp138140_merged1119_write.extract<0, 31>();
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_77_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_res = merged_0_reconstruct_lp138140_merged1119_write.extract<32, 63>();
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_78_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
}

// merged_0_reconstruct_lp138_buf141_ld446_merged1073_read
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75
//	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76
inline hw_uint<64> merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_read_bundle_read(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138_buf141_ld447, int merged_0_reconstruct_lp138_buf141_ld446, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75
    // merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76

	hw_uint<64> result;
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75_res = merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75_select(merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446, dynamic_address);
	set_at<0, 64>(result, merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_75_res);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76_res = merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76_select(merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446, dynamic_address);
	set_at<32, 64>(result, merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_76_res);
	return result;
}

struct merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache {
  // Reader addrs...
    // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141_FIFO_buf613[1 + 2pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 1023 }
    // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141_FIFO_buf613[2pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 1023 }
  // # of banks: 2
  merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32_cache merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32;
  merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33_cache merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33;
};



inline void merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141_FIFO_buf613.merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32.push(merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69);
}

inline void merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141_FIFO_buf613.merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33.push(merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70);
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32_select(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141_FIFO_buf613[1 + 2pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 1023 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69;
  return 0;
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33_select(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141_FIFO_buf613[2pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 1023 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_write
//	merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69
//	merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70
inline void merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_write_bundle_write(hw_uint<64>& merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_write, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, int dynamic_address) {
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_res = merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_write.extract<0, 31>();
	merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_write(merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_69_res, merged_0_reconstruct_lp138_buf141_FIFO_buf613, root, merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, dynamic_address);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_res = merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_write.extract<32, 63>();
	merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_write(merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_70_res, merged_0_reconstruct_lp138_buf141_FIFO_buf613, root, merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, dynamic_address);
}

// pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_read
//	merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32
//	merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33
inline hw_uint<64> merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_read_bundle_read(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32
    // merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33

	hw_uint<64> result;
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32_res = merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32_select(merged_0_reconstruct_lp138_buf141_FIFO_buf613, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<0, 64>(result, merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_32_res);
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33_res = merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33_select(merged_0_reconstruct_lp138_buf141_FIFO_buf613, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<32, 64>(result, merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_33_res);
	return result;
}

struct merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_to_merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct merged_1_cache {
  // Reader addrs...
    // { load_to_merged_1_to_gp_13449452_sm649_0794[root = 0, merged_1_ld451, merged_1_ld450] -> merged_1[merged_1_ld450, merged_1_ld451] : 0 <= merged_1_ld451 <= 1023 and 0 <= merged_1_ld450 <= 1023 }
  // # of banks: 1
  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_to_merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136_cache merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_to_merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136;
};



inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_write(hw_uint<32> & merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_to_merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136.push(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37);
}

inline hw_uint<32>  merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136_select(merged_1_cache& merged_1, int root, int merged_1_ld451, int merged_1_ld450, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136 read pattern: { load_to_merged_1_to_gp_13449452_sm649_0794[root = 0, merged_1_ld451, merged_1_ld450] -> merged_1[merged_1_ld450, merged_1_ld451] : 0 <= merged_1_ld451 <= 1023 and 0 <= merged_1_ld450 <= 1023 }
  // Read schedule : { load_to_merged_1_to_gp_13449452_sm649_0794[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 86] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 82] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37 = merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_to_merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136.peek(/* one reader or all rams */ 0);
  return value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_to_gp_13449452_sm649_0794_read
//	merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136
inline hw_uint<32> merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_read_bundle_read(merged_1_cache& merged_1, int root, int merged_1_ld451, int merged_1_ld450, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136

	hw_uint<32> result;
	hw_uint<32>  merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136_res = merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136_select(merged_1, root, merged_1_ld451, merged_1_ld450, dynamic_address);
	set_at<0, 32>(result, merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_136_res);
	return result;
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_write
//	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37
inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_write_bundle_write(hw_uint<32>& pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_write, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
	hw_uint<32>  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_res = pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_write.extract<0, 31>();
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_write(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_37_res, merged_1, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
}

struct merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_to_merged_1_FIFO_buf617_rc137_sm748_01004_25_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
	// Capacity: 2051
	// # of read delays: 2051
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050
	fifo<hw_uint<32> , 2051> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2050 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_FIFO_buf617_cache {
  // Reader addrs...
    // { rc137_sm748_01004[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1_FIFO_buf617[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // # of banks: 1
  merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_to_merged_1_FIFO_buf617_rc137_sm748_01004_25_cache merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_to_merged_1_FIFO_buf617_rc137_sm748_01004_25;
};



inline void merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_write(hw_uint<32> & merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141, merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_to_gp_13449_ld619, int merged_1_to_gp_13449_ld618, int dynamic_address) {
  merged_1_FIFO_buf617.merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_to_merged_1_FIFO_buf617_rc137_sm748_01004_25.push(merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141);
}

inline hw_uint<32>  merged_1_FIFO_buf617_rc137_sm748_01004_25_select(merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_FIFO_buf617_rc137_sm748_01004_25 read pattern: { rc137_sm748_01004[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1_FIFO_buf617[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // Read schedule : { rc137_sm748_01004[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_1_FIFO_buf617620_sm719_0972[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 91] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141 = merged_1_FIFO_buf617.merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_to_merged_1_FIFO_buf617_rc137_sm748_01004_25.peek(/* one reader or all rams */ (-1023 + merged_1_reconstruct_lp129131 == 0 && -1022 + merged_1_reconstruct_lp129130 == 0) ? (1024) : (-1023 + merged_1_reconstruct_lp129131 == 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (2048) : (-1022 + merged_1_reconstruct_lp129131 == 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (2049) : (1021 - merged_1_reconstruct_lp129131 >= 0 && 1021 - merged_1_reconstruct_lp129130 >= 0) ? (2050) : (-1023 + merged_1_reconstruct_lp129130 == 0 && 1022 - merged_1_reconstruct_lp129131 >= 0) ? ((1023 - merged_1_reconstruct_lp129131)) : (-1022 + merged_1_reconstruct_lp129130 == 0 && 1022 - merged_1_reconstruct_lp129131 >= 0) ? ((2047 - merged_1_reconstruct_lp129131)) : 0);
  return value_merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_FIFO_buf617620_sm719_0972_write
//	merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141
inline void merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_write_bundle_write(hw_uint<32>& load_to_merged_1_FIFO_buf617620_sm719_0972_write, merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_to_gp_13449_ld619, int merged_1_to_gp_13449_ld618, int dynamic_address) {
	hw_uint<32>  merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_res = load_to_merged_1_FIFO_buf617620_sm719_0972_write.extract<0, 31>();
	merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_write(merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_141_res, merged_1_FIFO_buf617, root, merged_1_to_gp_13449_ld619, merged_1_to_gp_13449_ld618, dynamic_address);
}

// rc137_sm748_01004_read
//	merged_1_FIFO_buf617_rc137_sm748_01004_25
inline hw_uint<32> merged_1_FIFO_buf617_rc137_sm748_01004_read_bundle_read(merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_FIFO_buf617_rc137_sm748_01004_25

	hw_uint<32> result;
	hw_uint<32>  merged_1_FIFO_buf617_rc137_sm748_01004_25_res = merged_1_FIFO_buf617_rc137_sm748_01004_25_select(merged_1_FIFO_buf617, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<0, 32>(result, merged_1_FIFO_buf617_rc137_sm748_01004_25_res);
	return result;
}

struct merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct merged_1_reconstruct_lp129_buf132_cache {
  // Reader addrs...
    // { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922[root = 0, merged_1_reconstruct_lp129_buf132_ld455, merged_1_reconstruct_lp129_buf132_ld454] -> merged_1_reconstruct_lp129_buf132[merged_1_reconstruct_lp129_buf132_ld454, merged_1_reconstruct_lp129_buf132_ld455] : 0 <= merged_1_reconstruct_lp129_buf132_ld455 <= 1023 and 0 <= merged_1_reconstruct_lp129_buf132_ld454 <= 1023 }
  // # of banks: 1
  merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138_cache merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138;
};



inline void merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138.push(merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138_select(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129_buf132_ld455, int merged_1_reconstruct_lp129_buf132_ld454, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138 read pattern: { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922[root = 0, merged_1_reconstruct_lp129_buf132_ld455, merged_1_reconstruct_lp129_buf132_ld454] -> merged_1_reconstruct_lp129_buf132[merged_1_reconstruct_lp129_buf132_ld454, merged_1_reconstruct_lp129_buf132_ld455] : 0 <= merged_1_reconstruct_lp129_buf132_ld455 <= 1023 and 0 <= merged_1_reconstruct_lp129_buf132_ld454 <= 1023 }
  // Read schedule : { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 106] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { rc137_sm748_01004[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24 = merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_read
//	merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138
inline hw_uint<32> merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_read_bundle_read(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129_buf132_ld455, int merged_1_reconstruct_lp129_buf132_ld454, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138

	hw_uint<32> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138_res = merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138_select(merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129_buf132_ld455, merged_1_reconstruct_lp129_buf132_ld454, dynamic_address);
	set_at<0, 32>(result, merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_138_res);
	return result;
}

// rc137_sm748_01004_write
//	merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24
inline void merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_write_bundle_write(hw_uint<32>& rc137_sm748_01004_write, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_res = rc137_sm748_01004_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_write(merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_24_res, merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
}

struct merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
	// Capacity: 1024
	// # of read delays: 1024
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
	// Capacity: 1024
	// # of read delays: 1024
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
	fifo<hw_uint<32> , 1024> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1023 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache {
  // Reader addrs...
    // { us_merged_1_reconstruct_lp129_buf132144_merged1116[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132_FIFO_buf621[us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 1023 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
    // { us_merged_1_reconstruct_lp129_buf132144_merged1116[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132_FIFO_buf621[us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 1023 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // # of banks: 2
  merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2_cache merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2;
  merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3_cache merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3;
};



inline void merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139, merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_FIFO_buf621.merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2.push(merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139);
  merged_1_reconstruct_lp129_buf132_FIFO_buf621.merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3.push(merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2_select(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2 read pattern: { us_merged_1_reconstruct_lp129_buf132144_merged1116[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132_FIFO_buf621[us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 1023 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us_merged_1_reconstruct_lp129_buf132144_merged1116[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139 = merged_1_reconstruct_lp129_buf132_FIFO_buf621.merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 1022 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((1023 - us_merged_1_reconstruct_lp129_buf132144)) : 0);
  return value_merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3_select(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3 read pattern: { us_merged_1_reconstruct_lp129_buf132144_merged1116[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132_FIFO_buf621[us_merged_1_reconstruct_lp129_buf132144, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 1023 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us_merged_1_reconstruct_lp129_buf132144_merged1116[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139 = merged_1_reconstruct_lp129_buf132_FIFO_buf621.merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 1022 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((1023 - us_merged_1_reconstruct_lp129_buf132144)) : 0);
  return value_merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_write
//	merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139
inline void merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_write_bundle_write(hw_uint<32>& load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_write, merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_res = load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_write(merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_139_res, merged_1_reconstruct_lp129_buf132_FIFO_buf621, root, merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623, merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622, dynamic_address);
}

// us_merged_1_reconstruct_lp129_buf132144_merged1116_read
//	merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2
//	merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3
inline hw_uint<64> merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_read_bundle_read(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2
    // merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3

	hw_uint<64> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2_res = merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2_select(merged_1_reconstruct_lp129_buf132_FIFO_buf621, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<0, 64>(result, merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_2_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3_res = merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3_select(merged_1_reconstruct_lp129_buf132_FIFO_buf621, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<32, 64>(result, merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_3_res);
	return result;
}

struct merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_cache {
  // Reader addrs...
    // { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[root = 0, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458] -> merged_1_reconstruct_lp129_buf132_us142[1 + 2merged_1_reconstruct_lp129_buf132_us142_ld458, merged_1_reconstruct_lp129_buf132_us142_ld459] : 0 <= merged_1_reconstruct_lp129_buf132_us142_ld459 <= 2047 and 0 <= merged_1_reconstruct_lp129_buf132_us142_ld458 <= 1023 }
    // { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[root = 0, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458] -> merged_1_reconstruct_lp129_buf132_us142[2merged_1_reconstruct_lp129_buf132_us142_ld458, merged_1_reconstruct_lp129_buf132_us142_ld459] : 0 <= merged_1_reconstruct_lp129_buf132_us142_ld459 <= 2047 and 0 <= merged_1_reconstruct_lp129_buf132_us142_ld458 <= 1023 }
  // # of banks: 2
  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63_cache merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63;
  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64_cache merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64;
};



inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63.push(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0);
}

inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64.push(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_1_reconstruct_lp129_buf132_us142_ld459, int merged_1_reconstruct_lp129_buf132_us142_ld458, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63 read pattern: { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[root = 0, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458] -> merged_1_reconstruct_lp129_buf132_us142[1 + 2merged_1_reconstruct_lp129_buf132_us142_ld458, merged_1_reconstruct_lp129_buf132_us142_ld459] : 0 <= merged_1_reconstruct_lp129_buf132_us142_ld459 <= 2047 and 0 <= merged_1_reconstruct_lp129_buf132_us142_ld458 <= 1023 }
  // Read schedule : { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { us_merged_1_reconstruct_lp129_buf132144_merged1116[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_1_reconstruct_lp129_buf132_us142_ld459, int merged_1_reconstruct_lp129_buf132_us142_ld458, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64 read pattern: { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[root = 0, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458] -> merged_1_reconstruct_lp129_buf132_us142[2merged_1_reconstruct_lp129_buf132_us142_ld458, merged_1_reconstruct_lp129_buf132_us142_ld459] : 0 <= merged_1_reconstruct_lp129_buf132_us142_ld459 <= 2047 and 0 <= merged_1_reconstruct_lp129_buf132_us142_ld458 <= 1023 }
  // Read schedule : { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { us_merged_1_reconstruct_lp129_buf132144_merged1116[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_to_merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1;
  return 0;
}

// # of bundles = 2
// merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_read
//	merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63
//	merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64
inline hw_uint<64> merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_1_reconstruct_lp129_buf132_us142_ld459, int merged_1_reconstruct_lp129_buf132_us142_ld458, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63
    // merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64

	hw_uint<64> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63_res = merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458, dynamic_address);
	set_at<0, 64>(result, merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_63_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64_res = merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458, dynamic_address);
	set_at<32, 64>(result, merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_64_res);
	return result;
}

// us_merged_1_reconstruct_lp129_buf132144_merged1116_write
//	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0
//	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1
inline void merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_write_bundle_write(hw_uint<64>& us_merged_1_reconstruct_lp129_buf132144_merged1116_write, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_res = us_merged_1_reconstruct_lp129_buf132144_merged1116_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_write(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_0_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_res = us_merged_1_reconstruct_lp129_buf132144_merged1116_write.extract<32, 63>();
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_write(merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_1_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
}

struct merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80_cache {
	// RAM Box: {[1, 2047], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82_cache {
	// RAM Box: {[0, 2046], [0, 2047]}
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

struct merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache {
  // Reader addrs...
    // { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625[1 + 2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
    // { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625[2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
  // # of banks: 2
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80_cache merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80;
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82_cache merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82;
};



inline void merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80.push(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57);
}

inline void merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82.push(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80_select(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80 read pattern: { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625[1 + 2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57;
  return 0;
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82_select(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82 read pattern: { merged_0_reconstruct_lp138140_merged1119[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625[2merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 1023 }
  // Read schedule : { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  // Write schedule: { merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58;
  return 0;
}

// # of bundles = 2
// merged_0_reconstruct_lp138140_merged1119_read
//	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80
//	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82
inline hw_uint<64> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  // # of ports in bundle: 2
    // merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80
    // merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82

	hw_uint<64> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80_res = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80_select(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<0, 64>(result, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_80_res);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82_res = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82_select(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<32, 64>(result, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_82_res);
	return result;
}

// merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_write
//	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57
//	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58
inline void merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_write_bundle_write(hw_uint<64>& merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_write, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_res = merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_write(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_57_res, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, root, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, dynamic_address);
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_res = merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_write.extract<32, 63>();
	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_write(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_58_res, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, root, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, dynamic_address);
}

struct merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_to_merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_2_cache {
  // Reader addrs...
    // { load_to_merged_2_to_gp_14461464_sm664_0828[root = 0, merged_2_ld463, merged_2_ld462] -> merged_2[merged_2_ld462, merged_2_ld463] : 0 <= merged_2_ld463 <= 511 and 0 <= merged_2_ld462 <= 511 }
  // # of banks: 1
  merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_to_merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124_cache merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_to_merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124;
};



inline void merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_write(hw_uint<32> & merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  merged_2.merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_to_merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124.push(merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34);
}

inline hw_uint<32>  merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124_select(merged_2_cache& merged_2, int root, int merged_2_ld463, int merged_2_ld462, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124 read pattern: { load_to_merged_2_to_gp_14461464_sm664_0828[root = 0, merged_2_ld463, merged_2_ld462] -> merged_2[merged_2_ld462, merged_2_ld463] : 0 <= merged_2_ld463 <= 511 and 0 <= merged_2_ld462 <= 511 }
  // Read schedule : { load_to_merged_2_to_gp_14461464_sm664_0828[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 97] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 96] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34 = merged_2.merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_to_merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124.peek(/* one reader or all rams */ 0);
  return value_merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_to_gp_14461464_sm664_0828_read
//	merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124
inline hw_uint<32> merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_read_bundle_read(merged_2_cache& merged_2, int root, int merged_2_ld463, int merged_2_ld462, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124

	hw_uint<32> result;
	hw_uint<32>  merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124_res = merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124_select(merged_2, root, merged_2_ld463, merged_2_ld462, dynamic_address);
	set_at<0, 32>(result, merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_124_res);
	return result;
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_write
//	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34
inline void merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_write_bundle_write(hw_uint<32>& pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_write, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
	hw_uint<32>  merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_res = pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_write.extract<0, 31>();
	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_write(merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_34_res, merged_2, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
}

struct merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_to_merged_2_FIFO_buf629_rc128_sm745_0998_28_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_2_FIFO_buf629_cache {
  // Reader addrs...
    // { rc128_sm745_0998[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_2_FIFO_buf629[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // # of banks: 1
  merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_to_merged_2_FIFO_buf629_rc128_sm745_0998_28_cache merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_to_merged_2_FIFO_buf629_rc128_sm745_0998_28;
};



inline void merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_write(hw_uint<32> & merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133, merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_to_gp_14461_ld631, int merged_2_to_gp_14461_ld630, int dynamic_address) {
  merged_2_FIFO_buf629.merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_to_merged_2_FIFO_buf629_rc128_sm745_0998_28.push(merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133);
}

inline hw_uint<32>  merged_2_FIFO_buf629_rc128_sm745_0998_28_select(merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_FIFO_buf629_rc128_sm745_0998_28 read pattern: { rc128_sm745_0998[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_2_FIFO_buf629[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // Read schedule : { rc128_sm745_0998[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_merged_2_FIFO_buf629632_sm716_0966[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 98] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133 = merged_2_FIFO_buf629.merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_to_merged_2_FIFO_buf629_rc128_sm745_0998_28.peek(/* one reader or all rams */ 0);
  return value_merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_FIFO_buf629632_sm716_0966_write
//	merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133
inline void merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_write_bundle_write(hw_uint<32>& load_to_merged_2_FIFO_buf629632_sm716_0966_write, merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_to_gp_14461_ld631, int merged_2_to_gp_14461_ld630, int dynamic_address) {
	hw_uint<32>  merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_res = load_to_merged_2_FIFO_buf629632_sm716_0966_write.extract<0, 31>();
	merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_write(merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_133_res, merged_2_FIFO_buf629, root, merged_2_to_gp_14461_ld631, merged_2_to_gp_14461_ld630, dynamic_address);
}

// rc128_sm745_0998_read
//	merged_2_FIFO_buf629_rc128_sm745_0998_28
inline hw_uint<32> merged_2_FIFO_buf629_rc128_sm745_0998_read_bundle_read(merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_FIFO_buf629_rc128_sm745_0998_28

	hw_uint<32> result;
	hw_uint<32>  merged_2_FIFO_buf629_rc128_sm745_0998_28_res = merged_2_FIFO_buf629_rc128_sm745_0998_28_select(merged_2_FIFO_buf629, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
	set_at<0, 32>(result, merged_2_FIFO_buf629_rc128_sm745_0998_28_res);
	return result;
}

struct merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_2_reconstruct_lp120_buf123_cache {
  // Reader addrs...
    // { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882[root = 0, merged_2_reconstruct_lp120_buf123_ld467, merged_2_reconstruct_lp120_buf123_ld466] -> merged_2_reconstruct_lp120_buf123[merged_2_reconstruct_lp120_buf123_ld466, merged_2_reconstruct_lp120_buf123_ld467] : 0 <= merged_2_reconstruct_lp120_buf123_ld467 <= 511 and 0 <= merged_2_reconstruct_lp120_buf123_ld466 <= 511 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130_cache merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130;
};



inline void merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130.push(merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130_select(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120_buf123_ld467, int merged_2_reconstruct_lp120_buf123_ld466, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130 read pattern: { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882[root = 0, merged_2_reconstruct_lp120_buf123_ld467, merged_2_reconstruct_lp120_buf123_ld466] -> merged_2_reconstruct_lp120_buf123[merged_2_reconstruct_lp120_buf123_ld466, merged_2_reconstruct_lp120_buf123_ld467] : 0 <= merged_2_reconstruct_lp120_buf123_ld467 <= 511 and 0 <= merged_2_reconstruct_lp120_buf123_ld466 <= 511 }
  // Read schedule : { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 100] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { rc128_sm745_0998[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27 = merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_read
//	merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_read_bundle_read(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120_buf123_ld467, int merged_2_reconstruct_lp120_buf123_ld466, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130_res = merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130_select(merged_2_reconstruct_lp120_buf123, root, merged_2_reconstruct_lp120_buf123_ld467, merged_2_reconstruct_lp120_buf123_ld466, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_130_res);
	return result;
}

// rc128_sm745_0998_write
//	merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27
inline void merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_write_bundle_write(hw_uint<32>& rc128_sm745_0998_write, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_res = rc128_sm745_0998_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_write(merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_27_res, merged_2_reconstruct_lp120_buf123, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
}

struct merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21_cache {
	// RAM Box: {[0, 511], [0, 511]}
	// Capacity: 512
	// # of read delays: 513
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
	fifo<hw_uint<32> , 512> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(511 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache {
  // Reader addrs...
    // { us136_sm747_01002[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123_FIFO_buf633[o0, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 1023 and -1 + us_merged_2_reconstruct_lp120_buf123135 <= 2o0 <= us_merged_2_reconstruct_lp120_buf123135 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21_cache merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21;
};



inline void merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131, merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_FIFO_buf633.merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21.push(merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21_select(merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21 read pattern: { us136_sm747_01002[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123_FIFO_buf633[o0, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 1023 and -1 + us_merged_2_reconstruct_lp120_buf123135 <= 2o0 <= us_merged_2_reconstruct_lp120_buf123135 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // Read schedule : { us136_sm747_01002[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 101] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131 = merged_2_reconstruct_lp120_buf123_FIFO_buf633.merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21.peek(/* one reader or all rams */ ((-1 - us_merged_2_reconstruct_lp120_buf123134) % 2 == 0 && 1021 - us_merged_2_reconstruct_lp120_buf123135 >= 0) ? ((511 - floord(2*us_merged_2_reconstruct_lp120_buf123135, 4))) : 0);
  return value_merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_write
//	merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131
inline void merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_write_bundle_write(hw_uint<32>& load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_write, merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_res = load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_write(merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_131_res, merged_2_reconstruct_lp120_buf123_FIFO_buf633, root, merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635, merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634, dynamic_address);
}

// us136_sm747_01002_read
//	merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_read_bundle_read(merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21_res = merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21_select(merged_2_reconstruct_lp120_buf123_FIFO_buf633, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_21_res);
	return result;
}

struct merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct merged_2_reconstruct_lp120_buf123_us133_cache {
  // Reader addrs...
    // { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888[root = 0, merged_2_reconstruct_lp120_buf123_us133_ld471, merged_2_reconstruct_lp120_buf123_us133_ld470] -> merged_2_reconstruct_lp120_buf123_us133[merged_2_reconstruct_lp120_buf123_us133_ld470, merged_2_reconstruct_lp120_buf123_us133_ld471] : 0 <= merged_2_reconstruct_lp120_buf123_us133_ld471 <= 1023 and 0 <= merged_2_reconstruct_lp120_buf123_us133_ld470 <= 1023 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126_cache merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126;
};



inline void merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126.push(merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126_select(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_2_reconstruct_lp120_buf123_us133_ld471, int merged_2_reconstruct_lp120_buf123_us133_ld470, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126 read pattern: { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888[root = 0, merged_2_reconstruct_lp120_buf123_us133_ld471, merged_2_reconstruct_lp120_buf123_us133_ld470] -> merged_2_reconstruct_lp120_buf123_us133[merged_2_reconstruct_lp120_buf123_us133_ld470, merged_2_reconstruct_lp120_buf123_us133_ld471] : 0 <= merged_2_reconstruct_lp120_buf123_us133_ld471 <= 1023 and 0 <= merged_2_reconstruct_lp120_buf123_us133_ld470 <= 1023 }
  // Read schedule : { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 103] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { us136_sm747_01002[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20 = merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_read
//	merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_2_reconstruct_lp120_buf123_us133_ld471, int merged_2_reconstruct_lp120_buf123_us133_ld470, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126_res = merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126_select(merged_2_reconstruct_lp120_buf123_us133, root, merged_2_reconstruct_lp120_buf123_us133_ld471, merged_2_reconstruct_lp120_buf123_us133_ld470, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_126_res);
	return result;
}

// us136_sm747_01002_write
//	merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20
inline void merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_write_bundle_write(hw_uint<32>& us136_sm747_01002_write, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_res = us136_sm747_01002_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_write(merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_20_res, merged_2_reconstruct_lp120_buf123_us133, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
}

struct merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
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

struct merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache {
  // Reader addrs...
    // { rc137_sm748_01004[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26_cache merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26;
};



inline void merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26.push(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26_select(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26 read pattern: { rc137_sm748_01004[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // Read schedule : { rc137_sm748_01004[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 104] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_write
//	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127
inline void merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_write_bundle_write(hw_uint<32>& load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_write, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_res = load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_write(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_127_res, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, root, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638, dynamic_address);
}

// rc137_sm748_01004_read
//	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26_res = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26_select(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_26_res);
	return result;
}

struct merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_to_merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120_cache {
	// RAM Box: {[0, 255], [0, 255]}
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

struct merged_3_cache {
  // Reader addrs...
    // { load_to_merged_3_to_gp_30473476_sm705_0938[root = 0, merged_3_ld475, merged_3_ld474] -> merged_3[merged_3_ld474, merged_3_ld475] : 0 <= merged_3_ld475 <= 255 and 0 <= merged_3_ld474 <= 255 }
  // # of banks: 1
  merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_to_merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120_cache merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_to_merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120;
};



inline void merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_write(hw_uint<32> & merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  merged_3.merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_to_merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120.push(merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54);
}

inline hw_uint<32>  merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120_select(merged_3_cache& merged_3, int root, int merged_3_ld475, int merged_3_ld474, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120 read pattern: { load_to_merged_3_to_gp_30473476_sm705_0938[root = 0, merged_3_ld475, merged_3_ld474] -> merged_3[merged_3_ld474, merged_3_ld475] : 0 <= merged_3_ld475 <= 255 and 0 <= merged_3_ld474 <= 255 }
  // Read schedule : { load_to_merged_3_to_gp_30473476_sm705_0938[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 79] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 77] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54 = merged_3.merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_to_merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120.peek(/* one reader or all rams */ 0);
  return value_merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_to_gp_30473476_sm705_0938_read
//	merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120
inline hw_uint<32> merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_read_bundle_read(merged_3_cache& merged_3, int root, int merged_3_ld475, int merged_3_ld474, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120

	hw_uint<32> result;
	hw_uint<32>  merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120_res = merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120_select(merged_3, root, merged_3_ld475, merged_3_ld474, dynamic_address);
	set_at<0, 32>(result, merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_120_res);
	return result;
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_write
//	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54
inline void merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_write_bundle_write(hw_uint<32>& pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_write, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
	hw_uint<32>  merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_res = pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_write.extract<0, 31>();
	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_write(merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_54_res, merged_3, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
}

struct merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_to_merged_3_FIFO_buf641_us127_sm744_0996_23_cache {
	// RAM Box: {[0, 255], [0, 255]}
	// Capacity: 256
	// # of read delays: 257
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
	fifo<hw_uint<32> , 256> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(255 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_3_FIFO_buf641_cache {
  // Reader addrs...
    // { us127_sm744_0996[root = 0, us_merged_3125, us_merged_3126] -> merged_3_FIFO_buf641[o0, o1] : 0 <= us_merged_3125 <= 511 and 0 <= us_merged_3126 <= 511 and -1 + us_merged_3126 <= 2o0 <= us_merged_3126 and -1 + us_merged_3125 <= 2o1 <= us_merged_3125 }
  // # of banks: 1
  merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_to_merged_3_FIFO_buf641_us127_sm744_0996_23_cache merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_to_merged_3_FIFO_buf641_us127_sm744_0996_23;
};



inline void merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_write(hw_uint<32> & merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121, merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int merged_3_to_gp_30473_ld643, int merged_3_to_gp_30473_ld642, int dynamic_address) {
  merged_3_FIFO_buf641.merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_to_merged_3_FIFO_buf641_us127_sm744_0996_23.push(merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121);
}

inline hw_uint<32>  merged_3_FIFO_buf641_us127_sm744_0996_23_select(merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_FIFO_buf641_us127_sm744_0996_23 read pattern: { us127_sm744_0996[root = 0, us_merged_3125, us_merged_3126] -> merged_3_FIFO_buf641[o0, o1] : 0 <= us_merged_3125 <= 511 and 0 <= us_merged_3126 <= 511 and -1 + us_merged_3126 <= 2o0 <= us_merged_3126 and -1 + us_merged_3125 <= 2o1 <= us_merged_3125 }
  // Read schedule : { us127_sm744_0996[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_merged_3_FIFO_buf641644_sm713_0956[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 81] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121 = merged_3_FIFO_buf641.merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_to_merged_3_FIFO_buf641_us127_sm744_0996_23.peek(/* one reader or all rams */ ((-1 - us_merged_3125) % 2 == 0 && 509 - us_merged_3126 >= 0) ? ((255 - floord(2*us_merged_3126, 4))) : 0);
  return value_merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_FIFO_buf641644_sm713_0956_write
//	merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121
inline void merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_write_bundle_write(hw_uint<32>& load_to_merged_3_FIFO_buf641644_sm713_0956_write, merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int merged_3_to_gp_30473_ld643, int merged_3_to_gp_30473_ld642, int dynamic_address) {
	hw_uint<32>  merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_res = load_to_merged_3_FIFO_buf641644_sm713_0956_write.extract<0, 31>();
	merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_write(merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_121_res, merged_3_FIFO_buf641, root, merged_3_to_gp_30473_ld643, merged_3_to_gp_30473_ld642, dynamic_address);
}

// us127_sm744_0996_read
//	merged_3_FIFO_buf641_us127_sm744_0996_23
inline hw_uint<32> merged_3_FIFO_buf641_us127_sm744_0996_read_bundle_read(merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_FIFO_buf641_us127_sm744_0996_23

	hw_uint<32> result;
	hw_uint<32>  merged_3_FIFO_buf641_us127_sm744_0996_23_res = merged_3_FIFO_buf641_us127_sm744_0996_23_select(merged_3_FIFO_buf641, root, us_merged_3125, us_merged_3126, dynamic_address);
	set_at<0, 32>(result, merged_3_FIFO_buf641_us127_sm744_0996_23_res);
	return result;
}

struct merged_3_us124_us127_sm744_0996_22_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_3_us124_cache {
  // Reader addrs...
    // { load_to_merged_3_us124_to_gp_14477480_sm650_0796[root = 0, merged_3_us124_ld479, merged_3_us124_ld478] -> merged_3_us124[merged_3_us124_ld478, merged_3_us124_ld479] : 0 <= merged_3_us124_ld479 <= 511 and 0 <= merged_3_us124_ld478 <= 511 }
  // # of banks: 1
  merged_3_us124_us127_sm744_0996_22_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116_cache merged_3_us124_us127_sm744_0996_22_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116;
};



inline void merged_3_us124_us127_sm744_0996_22_write(hw_uint<32> & merged_3_us124_us127_sm744_0996_22, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
  merged_3_us124.merged_3_us124_us127_sm744_0996_22_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116.push(merged_3_us124_us127_sm744_0996_22);
}

inline hw_uint<32>  merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116_select(merged_3_us124_cache& merged_3_us124, int root, int merged_3_us124_ld479, int merged_3_us124_ld478, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116 read pattern: { load_to_merged_3_us124_to_gp_14477480_sm650_0796[root = 0, merged_3_us124_ld479, merged_3_us124_ld478] -> merged_3_us124[merged_3_us124_ld478, merged_3_us124_ld479] : 0 <= merged_3_us124_ld479 <= 511 and 0 <= merged_3_us124_ld478 <= 511 }
  // Read schedule : { load_to_merged_3_us124_to_gp_14477480_sm650_0796[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 87] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us127_sm744_0996[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_3_us124_us127_sm744_0996_22 = merged_3_us124.merged_3_us124_us127_sm744_0996_22_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116.peek(/* one reader or all rams */ 0);
  return value_merged_3_us124_us127_sm744_0996_22;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_us124_to_gp_14477480_sm650_0796_read
//	merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116
inline hw_uint<32> merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_read_bundle_read(merged_3_us124_cache& merged_3_us124, int root, int merged_3_us124_ld479, int merged_3_us124_ld478, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116

	hw_uint<32> result;
	hw_uint<32>  merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116_res = merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116_select(merged_3_us124, root, merged_3_us124_ld479, merged_3_us124_ld478, dynamic_address);
	set_at<0, 32>(result, merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_116_res);
	return result;
}

// us127_sm744_0996_write
//	merged_3_us124_us127_sm744_0996_22
inline void merged_3_us124_us127_sm744_0996_write_bundle_write(hw_uint<32>& us127_sm744_0996_write, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
	hw_uint<32>  merged_3_us124_us127_sm744_0996_22_res = us127_sm744_0996_write.extract<0, 31>();
	merged_3_us124_us127_sm744_0996_22_write(merged_3_us124_us127_sm744_0996_22_res, merged_3_us124, root, us_merged_3125, us_merged_3126, dynamic_address);
}

struct merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_to_merged_3_us124_FIFO_buf645_rc128_sm745_0998_29_cache {
	// RAM Box: {[0, 511], [0, 511]}
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

struct merged_3_us124_FIFO_buf645_cache {
  // Reader addrs...
    // { rc128_sm745_0998[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_3_us124_FIFO_buf645[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // # of banks: 1
  merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_to_merged_3_us124_FIFO_buf645_rc128_sm745_0998_29_cache merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_to_merged_3_us124_FIFO_buf645_rc128_sm745_0998_29;
};



inline void merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_write(hw_uint<32> & merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_3_us124_to_gp_14477_ld647, int merged_3_us124_to_gp_14477_ld646, int dynamic_address) {
  merged_3_us124_FIFO_buf645.merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_to_merged_3_us124_FIFO_buf645_rc128_sm745_0998_29.push(merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117);
}

inline hw_uint<32>  merged_3_us124_FIFO_buf645_rc128_sm745_0998_29_select(merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_us124_FIFO_buf645_rc128_sm745_0998_29 read pattern: { rc128_sm745_0998[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_3_us124_FIFO_buf645[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // Read schedule : { rc128_sm745_0998[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_merged_3_us124_FIFO_buf645648_sm720_0974[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117 = merged_3_us124_FIFO_buf645.merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_to_merged_3_us124_FIFO_buf645_rc128_sm745_0998_29.peek(/* one reader or all rams */ 0);
  return value_merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_us124_FIFO_buf645648_sm720_0974_write
//	merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117
inline void merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_write_bundle_write(hw_uint<32>& load_to_merged_3_us124_FIFO_buf645648_sm720_0974_write, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_3_us124_to_gp_14477_ld647, int merged_3_us124_to_gp_14477_ld646, int dynamic_address) {
	hw_uint<32>  merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_res = load_to_merged_3_us124_FIFO_buf645648_sm720_0974_write.extract<0, 31>();
	merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_write(merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_117_res, merged_3_us124_FIFO_buf645, root, merged_3_us124_to_gp_14477_ld647, merged_3_us124_to_gp_14477_ld646, dynamic_address);
}

// rc128_sm745_0998_read
//	merged_3_us124_FIFO_buf645_rc128_sm745_0998_29
inline hw_uint<32> merged_3_us124_FIFO_buf645_rc128_sm745_0998_read_bundle_read(merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_us124_FIFO_buf645_rc128_sm745_0998_29

	hw_uint<32> result;
	hw_uint<32>  merged_3_us124_FIFO_buf645_rc128_sm745_0998_29_res = merged_3_us124_FIFO_buf645_rc128_sm745_0998_29_select(merged_3_us124_FIFO_buf645, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
	set_at<0, 32>(result, merged_3_us124_FIFO_buf645_rc128_sm745_0998_29_res);
	return result;
}

// Operation logic
inline void gp_in0_110_merged300_sm723_0982(in0_FIFO_buf569_cache& in0_FIFO_buf569, gp_in0_1_buf8_cache& gp_in0_1_buf8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_FIFO_buf569
	auto in0_FIFO_buf569_2_m__lp__lp_1_m_gp_in0_110__p__0_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in0_19__p___m_3_rp___p__1_p_7_value = in0_FIFO_buf569_gp_in0_110_merged300_sm723_0982_read_bundle_read(in0_FIFO_buf569/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_110_cu298(in0_FIFO_buf569_2_m__lp__lp_1_m_gp_in0_110__p__0_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in0_19__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in0_1_buf8
	gp_in0_1_buf8_gp_in0_110_merged300_sm723_0982_write_bundle_write(/* arg names */compute_result, gp_in0_1_buf8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022(gp_in0_1_buf8_cache& gp_in0_1_buf8, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_7321, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8__lp__lp_1_m_gp_in0_1_buf8_ld322__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_ld323__p__3_rp__value = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022_read_bundle_read(gp_in0_1_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_to_gp_7321
	gp_in0_1_buf8_to_gp_7321.write(gp_in0_1_buf8__lp__lp_1_m_gp_in0_1_buf8_ld322__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_ld323__p__3_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in0_to_gp_0401_ld570_merged1061(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in0_to_gp_0401, in0_FIFO_buf569_cache& in0_FIFO_buf569, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_to_gp_0401
	auto in0_to_gp_0401__lp_2_m_in0_to_gp_0401_ld570__p__1_rp__c____in0_to_gp_0401_ld571_value = in0_to_gp_0401.read();
	auto compute_result = in0_to_gp_0401_ld570_cu1060(in0_to_gp_0401__lp_2_m_in0_to_gp_0401_ld570__p__1_rp__c____in0_to_gp_0401_ld571_value);
	// Produce: in0_FIFO_buf569
	in0_FIFO_buf569_in0_to_gp_0401_ld570_merged1061_write_bundle_write(/* arg names */compute_result, in0_FIFO_buf569, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038(gp_in0_1_buf8_cache& gp_in0_1_buf8, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8__lp__lp_1_m_gp_in0_1_buf8_ld318__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_ld319__p__3_rp__value = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038_read_bundle_read(gp_in0_1_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_to_gp_22317
	gp_in0_1_buf8_to_gp_22317.write(gp_in0_1_buf8__lp__lp_1_m_gp_in0_1_buf8_ld318__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_ld319__p__3_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840(gp_in0_1_buf8_cache& gp_in0_1_buf8, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8__lp_1_m_gp_in0_1_buf8_ld314__p__0_rp__c____gp_in0_1_buf8_ld315_value = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840_read_bundle_read(gp_in0_1_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_to_gp_1313
	gp_in0_1_buf8_to_gp_1313.write(gp_in0_1_buf8__lp_1_m_gp_in0_1_buf8_ld314__p__0_rp__c____gp_in0_1_buf8_ld315_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_19_gp_in0_1_buf8_ld315_gp_in0_1_buf8_ld319_gp_in0_1_buf8_ld323_in0_to_gp_0401_ld571_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in0_to_gp_0401, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_7321) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_19_gp_in0_1_buf8_ld315_gp_in0_1_buf8_ld319_gp_in0_1_buf8_ld323_in0_to_gp_0401_ld571__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_cache gp_in0_1_buf8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in0_FIFO_buf569_cache in0_FIFO_buf569;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 12] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030; load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 17] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029; load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022[d0 = 0, d1, d2] -> [0, 8 + 2d1, 5 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
//   { load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 12] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { in0_to_gp_0401_ld570_merged1061[d0 = 0, d1, d2] -> [0, d1, d2, 8] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
// Condition for in0_to_gp_0401_ld570_merged1061(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 17] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
// Condition for load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022[d0 = 0, d1, d2] -> [0, 8 + 2d1, 5 + d2, 19] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { gp_in0_110_merged300_sm723_0982[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 11] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
// Condition for gp_in0_110_merged300_sm723_0982(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 8] : 0 <= i1 <= 2054 and 0 <= i2 <= 1030; [0, i1, i2, 19] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 5 <= i2 <= 1028; [0, i1, i2, 17] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 1030; [0, i1, i2, 12] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 4 <= i2 <= 1027; [0, i1, i2, 11] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2054; i1++) {
	    for (int i2 = 0; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in0_to_gp_0401_ld570_merged1061(in0_to_gp_0401 /* buf name */, in0_FIFO_buf569, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          gp_in0_110_merged300_sm723_0982(in0_FIFO_buf569 /* buf name */, gp_in0_1_buf8, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 8 and 4 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 8 and 4 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_to_gp_22317320_sm760_01038(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_to_gp_22317, 0, ((-4 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_to_gp_1313316_sm668_0840(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_to_gp_1313, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 8 and 5 <= i2 <= 1028 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 8 and 5 <= i2 <= 1028 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	          // { [i0, i1, i2] : 1028 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_to_gp_7321324_sm753_01022(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_to_gp_7321, 0, ((-4 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_to_gp_1313
	auto gp_in0_1_buf8_to_gp_1313__lp_1_m_gp_in0_1_buf8_to_gp_1313_ld482__p__0_rp__c____gp_in0_1_buf8_to_gp_1313_ld483_value = gp_in0_1_buf8_to_gp_1313.read();
	// Produce: gp_in0_1_buf8_FIFO_buf481
	gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924_write_bundle_write(/* arg names */gp_in0_1_buf8_to_gp_1313__lp_1_m_gp_in0_1_buf8_to_gp_1313_ld482__p__0_rp__c____gp_in0_1_buf8_to_gp_1313_ld483_value, gp_in0_1_buf8_FIFO_buf481, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_218_merged303_sm727_0988(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, gp_in0_2_buf16_cache& gp_in0_2_buf16, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_FIFO_buf481
	auto gp_in0_1_buf8_FIFO_buf481_2_m__lp__lp_1_m_gp_in0_218__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in0_217__p___m_1_rp___p__1_p_3_value = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged303_sm727_0988_read_bundle_read(gp_in0_1_buf8_FIFO_buf481/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_218_cu301(gp_in0_1_buf8_FIFO_buf481_2_m__lp__lp_1_m_gp_in0_218__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in0_217__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in0_2_buf16
	gp_in0_2_buf16_gp_in0_218_merged303_sm727_0988_write_bundle_write(/* arg names */compute_result, gp_in0_2_buf16, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042(gp_in0_2_buf16_cache& gp_in0_2_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_8337, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16__lp__lp_1_m_gp_in0_2_buf16_ld338__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_ld339__p__1_rp__value = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042_read_bundle_read(gp_in0_2_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_to_gp_8337
	gp_in0_2_buf16_to_gp_8337.write(gp_in0_2_buf16__lp__lp_1_m_gp_in0_2_buf16_ld338__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_ld339__p__1_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842(gp_in0_2_buf16_cache& gp_in0_2_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_23333, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16__lp__lp_1_m_gp_in0_2_buf16_ld334__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_ld335__p__1_rp__value = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842_read_bundle_read(gp_in0_2_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_to_gp_23333
	gp_in0_2_buf16_to_gp_23333.write(gp_in0_2_buf16__lp__lp_1_m_gp_in0_2_buf16_ld334__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_ld335__p__1_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818(gp_in0_2_buf16_cache& gp_in0_2_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_2329, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16__lp_1_m_gp_in0_2_buf16_ld330__p__0_rp__c____gp_in0_2_buf16_ld331_value = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818_read_bundle_read(gp_in0_2_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_to_gp_2329
	gp_in0_2_buf16_to_gp_2329.write(gp_in0_2_buf16__lp_1_m_gp_in0_2_buf16_ld330__p__0_rp__c____gp_in0_2_buf16_ld331_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_1_buf8_to_gp_1313_ld483_gp_in0_217_gp_in0_2_buf16_ld331_gp_in0_2_buf16_ld335_gp_in0_2_buf16_ld339_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_to_gp_2329, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_to_gp_23333, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_to_gp_8337) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_1_buf8_to_gp_1313_ld483_gp_in0_217_gp_in0_2_buf16_ld331_gp_in0_2_buf16_ld335_gp_in0_2_buf16_ld339__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_FIFO_buf481_cache gp_in0_1_buf8_FIFO_buf481;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_cache gp_in0_2_buf16;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 29] : 0 <= d1 <= 511 and 0 <= d2 <= 511; gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513; load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 30] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 31] : 0 <= d1 <= 512 and 0 <= d2 <= 513; load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
//   { load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 29] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in0_218_merged303_sm727_0988[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
// Condition for gp_in0_218_merged303_sm727_0988(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 30] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 31] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
// Condition for load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
// Condition for load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 10 <= i1 <= 2054 and 5 <= i2 <= 1027 and 29 <= i3 <= 30; [0, i1, i2, 31] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 6 <= i1 <= 2054 and 3 <= i2 <= 1029; [0, i1, i2, 26] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 6 <= i1 <= 2054 and 3 <= i2 <= 1029; [0, i1, i2, 21] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 2054; i1++) {
	    for (int i2 = 1; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in0_1_buf8_FIFO_buf481484_sm700_0924(gp_in0_1_buf8_to_gp_1313 /* buf name */, gp_in0_1_buf8_FIFO_buf481, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          gp_in0_218_merged303_sm727_0988(gp_in0_1_buf8_FIFO_buf481 /* buf name */, gp_in0_2_buf16, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_to_gp_23333336_sm669_0842(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_to_gp_23333, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_to_gp_8337340_sm762_01042(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_to_gp_8337, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_to_gp_2329332_sm660_0818(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_to_gp_2329, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890(lp_in1_1_buf92_cache& lp_in1_1_buf92, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_1_buf92_to_gp_19433, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_1_buf92
	auto lp_in1_1_buf92__lp_1_m_lp_in1_1_buf92_ld434__p__0_rp__c____lp_in1_1_buf92_ld435_value = lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890_read_bundle_read(lp_in1_1_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in1_1_buf92_to_gp_19433
	lp_in1_1_buf92_to_gp_19433.write(lp_in1_1_buf92__lp_1_m_lp_in1_1_buf92_ld434__p__0_rp__c____lp_in1_1_buf92_ld435_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_us88_to_gp_10385, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_us88_to_gp_10385
	auto gp_in1_2_buf64_us88_to_gp_10385__lp_1_m_gp_in1_2_buf64_us88_to_gp_10385_ld554__p__0_rp__c____gp_in1_2_buf64_us88_to_gp_10385_ld555_value = gp_in1_2_buf64_us88_to_gp_10385.read();
	// Produce: gp_in1_2_buf64_us88_FIFO_buf553
	gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900_write_bundle_write(/* arg names */gp_in1_2_buf64_us88_to_gp_10385__lp_1_m_gp_in1_2_buf64_us88_to_gp_10385_ld554__p__0_rp__c____gp_in1_2_buf64_us88_to_gp_10385_ld555_value, gp_in1_2_buf64_us88_FIFO_buf553, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_to_gp_10357
	auto gp_in1_1_buf56_to_gp_10357__lp__lp_1_m_gp_in1_1_buf56_to_gp_10357_ld526__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_to_gp_10357_ld527__p__3_rp__value = gp_in1_1_buf56_to_gp_10357.read();
	// Produce: gp_in1_1_buf56_FIFO_buf525
	gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804_write_bundle_write(/* arg names */gp_in1_1_buf56_to_gp_10357__lp__lp_1_m_gp_in1_1_buf56_to_gp_10357_ld526__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_to_gp_10357_ld527__p__3_rp__value, gp_in1_1_buf56_FIFO_buf525, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff95_sm736_0768(gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, lp_in1_1_buf92_cache& lp_in1_1_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_FIFO_buf525
	auto gp_in1_1_buf56_FIFO_buf525__lp_1_m_lp_in1_194__p__0_rp__p_3_c_____lp_in1_193_p_3_value = gp_in1_1_buf56_FIFO_buf525_diff95_sm736_0768_read_bundle_read(gp_in1_1_buf56_FIFO_buf525/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_2_buf64_us88_FIFO_buf553
	auto gp_in1_2_buf64_us88_FIFO_buf553__lp_1_m_lp_in1_194__p__0_rp__p_0_c_____lp_in1_193_p_0_value = gp_in1_2_buf64_us88_FIFO_buf553_diff95_sm736_0768_read_bundle_read(gp_in1_2_buf64_us88_FIFO_buf553/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525__lp_1_m_lp_in1_194__p__0_rp__p_3_c_____lp_in1_193_p_3_value, gp_in1_2_buf64_us88_FIFO_buf553__lp_1_m_lp_in1_194__p__0_rp__p_0_c_____lp_in1_193_p_0_value);
	// Produce: lp_in1_1_buf92
	lp_in1_1_buf92_diff95_sm736_0768_write_bundle_write(/* arg names */compute_result, lp_in1_1_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_1_buf56_to_gp_10357_ld527_gp_in1_2_buf64_us88_to_gp_10385_ld555_lp_in1_193_lp_in1_1_buf92_ld435_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_us88_to_gp_10385, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in1_1_buf92_to_gp_19433) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_1_buf56_to_gp_10357_ld527_gp_in1_2_buf64_us88_to_gp_10385_ld555_lp_in1_193_lp_in1_1_buf92_ld435__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_FIFO_buf525_cache gp_in1_1_buf56_FIFO_buf525;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_us88_FIFO_buf553_cache gp_in1_2_buf64_us88_FIFO_buf553;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_1_buf92_cache lp_in1_1_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 75] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; diff95_sm736_0768[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 73] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 65] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 75] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-75 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { diff95_sm736_0768[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 73] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for diff95_sm736_0768(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-73 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 65] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-65 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 24] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 75] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 73] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 65] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 24] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 5; i2 <= 1028; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_1_buf56_FIFO_buf525528_sm654_0804(gp_in1_1_buf56_to_gp_10357 /* buf name */, gp_in1_1_buf56_FIFO_buf525, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_2_buf64_us88_FIFO_buf553556_sm692_0900(gp_in1_2_buf64_us88_to_gp_10385 /* buf name */, gp_in1_2_buf64_us88_FIFO_buf553, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          diff95_sm736_0768(gp_in1_1_buf56_FIFO_buf525 /* buf name */, gp_in1_2_buf64_us88_FIFO_buf553 /* buf name */, lp_in1_1_buf92, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in1_1_buf92_to_gp_19433436_sm688_0890(lp_in1_1_buf92 /* buf name */, lp_in1_1_buf92_to_gp_19433, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910(lp_in1_2_buf84_cache& lp_in1_2_buf84, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_2_buf84_to_gp_20437, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_2_buf84
	auto lp_in1_2_buf84__lp_1_m_lp_in1_2_buf84_ld438__p__0_rp__c____lp_in1_2_buf84_ld439_value = lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910_read_bundle_read(lp_in1_2_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in1_2_buf84_to_gp_20437
	lp_in1_2_buf84_to_gp_20437.write(lp_in1_2_buf84__lp_1_m_lp_in1_2_buf84_ld438__p__0_rp__c____lp_in1_2_buf84_ld439_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_us80_to_gp_11397, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_us80_to_gp_11397
	auto gp_in1_3_buf72_us80_to_gp_11397__lp_1_m_gp_in1_3_buf72_us80_to_gp_11397_ld566__p__0_rp__c____gp_in1_3_buf72_us80_to_gp_11397_ld567_value = gp_in1_3_buf72_us80_to_gp_11397.read();
	// Produce: gp_in1_3_buf72_us80_FIFO_buf565
	gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808_write_bundle_write(/* arg names */gp_in1_3_buf72_us80_to_gp_11397__lp_1_m_gp_in1_3_buf72_us80_to_gp_11397_ld566__p__0_rp__c____gp_in1_3_buf72_us80_to_gp_11397_ld567_value, gp_in1_3_buf72_us80_FIFO_buf565, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_11373, gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_to_gp_11373
	auto gp_in1_2_buf64_to_gp_11373__lp__lp_1_m_gp_in1_2_buf64_to_gp_11373_ld542__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_to_gp_11373_ld543__p__1_rp__value = gp_in1_2_buf64_to_gp_11373.read();
	// Produce: gp_in1_2_buf64_FIFO_buf541
	gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944_write_bundle_write(/* arg names */gp_in1_2_buf64_to_gp_11373__lp__lp_1_m_gp_in1_2_buf64_to_gp_11373_ld542__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_to_gp_11373_ld543__p__1_rp__value, gp_in1_2_buf64_FIFO_buf541, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff87_sm728_0990(gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, lp_in1_2_buf84_cache& lp_in1_2_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_FIFO_buf541
	auto gp_in1_2_buf64_FIFO_buf541__lp_1_m_lp_in1_286__p__0_rp__p_1_c_____lp_in1_285_p_1_value = gp_in1_2_buf64_FIFO_buf541_diff87_sm728_0990_read_bundle_read(gp_in1_2_buf64_FIFO_buf541/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_3_buf72_us80_FIFO_buf565
	auto gp_in1_3_buf72_us80_FIFO_buf565__lp_1_m_lp_in1_286__p__0_rp__p_0_c_____lp_in1_285_p_0_value = gp_in1_3_buf72_us80_FIFO_buf565_diff87_sm728_0990_read_bundle_read(gp_in1_3_buf72_us80_FIFO_buf565/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541__lp_1_m_lp_in1_286__p__0_rp__p_1_c_____lp_in1_285_p_1_value, gp_in1_3_buf72_us80_FIFO_buf565__lp_1_m_lp_in1_286__p__0_rp__p_0_c_____lp_in1_285_p_0_value);
	// Produce: lp_in1_2_buf84
	lp_in1_2_buf84_diff87_sm728_0990_write_bundle_write(/* arg names */compute_result, lp_in1_2_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_2_buf64_to_gp_11373_ld543_gp_in1_3_buf72_us80_to_gp_11397_ld567_lp_in1_285_lp_in1_2_buf84_ld439_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_to_gp_11373, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_3_buf72_us80_to_gp_11397, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in1_2_buf84_to_gp_20437) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_2_buf64_to_gp_11373_ld543_gp_in1_3_buf72_us80_to_gp_11397_ld567_lp_in1_285_lp_in1_2_buf84_ld439__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_FIFO_buf541_cache gp_in1_2_buf64_FIFO_buf541;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_us80_FIFO_buf565_cache gp_in1_3_buf72_us80_FIFO_buf565;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_2_buf84_cache lp_in1_2_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 94] : 0 <= d1 <= 511 and 0 <= d2 <= 511; diff87_sm728_0990[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 88] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 43] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 94] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-94 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { diff87_sm728_0990[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for diff87_sm728_0990(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-93 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 88] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-88 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 43] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 and 93 <= i3 <= 94; [0, i1, i2, 88] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 43] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_2_buf64_FIFO_buf541544_sm708_0944(gp_in1_2_buf64_to_gp_11373 /* buf name */, gp_in1_2_buf64_FIFO_buf541, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_3_buf72_us80_FIFO_buf565568_sm656_0808(gp_in1_3_buf72_us80_to_gp_11397 /* buf name */, gp_in1_3_buf72_us80_FIFO_buf565, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          diff87_sm728_0990(gp_in1_2_buf64_FIFO_buf541 /* buf name */, gp_in1_3_buf72_us80_FIFO_buf565 /* buf name */, lp_in1_2_buf84, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in1_2_buf84_to_gp_20437440_sm695_0910(lp_in1_2_buf84 /* buf name */, lp_in1_2_buf84_to_gp_20437, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void merged_0_to_gp_12441_ld610_merged1089(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */merged_0_to_gp_12441, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_to_gp_12441
	auto merged_0_to_gp_12441__lp_2_m_merged_0_to_gp_12441_ld610__p__1_rp__c____merged_0_to_gp_12441_ld611_value = merged_0_to_gp_12441.read();
	auto compute_result = merged_0_to_gp_12441_ld610_cu1088(merged_0_to_gp_12441__lp_2_m_merged_0_to_gp_12441_ld610__p__1_rp__c____merged_0_to_gp_12441_ld611_value);
	// Produce: merged_0_FIFO_buf609
	merged_0_FIFO_buf609_merged_0_to_gp_12441_ld610_merged1089_write_bundle_write(/* arg names */compute_result, merged_0_FIFO_buf609, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_0_reconstruct_lp138140_merged1119(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_FIFO_buf609
	auto merged_0_FIFO_buf609__lp_2_m_merged_0_reconstruct_lp138140__p__1_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value = merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_merged1119_read_bundle_read(merged_0_FIFO_buf609/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625
	auto merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625__lp_2_m_merged_0_reconstruct_lp138140__p__1_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_merged1119_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merged_0_reconstruct_lp138140_cu1117(merged_0_FIFO_buf609__lp_2_m_merged_0_reconstruct_lp138140__p__1_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625__lp_2_m_merged_0_reconstruct_lp138140__p__1_rp__p_0_c_____merged_0_reconstruct_lp138139_p_0_value);
	// Produce: merged_0_reconstruct_lp138_buf141
	merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138140_merged1119_write_bundle_write(/* arg names */compute_result, merged_0_reconstruct_lp138_buf141, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_us142_to_gp_12457
	auto merged_1_reconstruct_lp129_buf132_us142_to_gp_12457__lp_2_m_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626__p__1_rp__c____merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_value = merged_1_reconstruct_lp129_buf132_us142_to_gp_12457.read();
	auto compute_result = merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_cu1094(merged_1_reconstruct_lp129_buf132_us142_to_gp_12457__lp_2_m_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626__p__1_rp__c____merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_value);
	// Produce: merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625
	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095_write_bundle_write(/* arg names */compute_result, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_0_reconstruct_lp138_buf141_ld446_merged1073(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */merged_0_reconstruct_lp138_buf141_to_gp_21445, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141
	auto merged_0_reconstruct_lp138_buf141__lp_2_m_merged_0_reconstruct_lp138_buf141_ld446__p__1_rp__c____merged_0_reconstruct_lp138_buf141_ld447_value = merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_merged1073_read_bundle_read(merged_0_reconstruct_lp138_buf141/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merged_0_reconstruct_lp138_buf141_ld446_cu1072(merged_0_reconstruct_lp138_buf141__lp_2_m_merged_0_reconstruct_lp138_buf141_ld446__p__1_rp__c____merged_0_reconstruct_lp138_buf141_ld447_value);
	// Produce: merged_0_reconstruct_lp138_buf141_to_gp_21445
	merged_0_reconstruct_lp138_buf141_to_gp_21445.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_0_reconstruct_lp138139_merged_0_reconstruct_lp138_buf141_ld447_merged_0_to_gp_12441_ld611_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */merged_0_to_gp_12441, HWStream<hw_uint<64> >& /* get_args num ports = 2 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, HWStream<hw_uint<64> >& /* get_args num ports = 2 */merged_0_reconstruct_lp138_buf141_to_gp_21445) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_0_reconstruct_lp138139_merged_0_reconstruct_lp138_buf141_ld447_merged_0_to_gp_12441_ld611_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_0_FIFO_buf609_cache merged_0_FIFO_buf609;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_0_reconstruct_lp138_buf141_cache merged_0_reconstruct_lp138_buf141;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; merged_0_reconstruct_lp138_buf141_ld446_merged1073[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; merged_0_to_gp_12441_ld610_merged1089[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 71] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { merged_0_reconstruct_lp138140_merged1119[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_0_reconstruct_lp138140_merged1119(((((-111 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095(((((-110 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { merged_0_reconstruct_lp138_buf141_ld446_merged1073[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_0_reconstruct_lp138_buf141_ld446_merged1073(((((-112 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { merged_0_to_gp_12441_ld610_merged1089[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 71] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_0_to_gp_12441_ld610_merged1089(((((-71 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 2061 and 7 <= i2 <= 1030 and 110 <= i3 <= 112; [0, i1, i2, 71] : 14 <= i1 <= 2061 and 7 <= i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2061; i1++) {
	    for (int i2 = 7; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_0_to_gp_12441_ld610_merged1089(merged_0_to_gp_12441 /* buf name */, merged_0_FIFO_buf609, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_merged1095(merged_1_reconstruct_lp129_buf132_us142_to_gp_12457 /* buf name */, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_0_reconstruct_lp138140_merged1119(merged_0_FIFO_buf609 /* buf name */, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625 /* buf name */, merged_0_reconstruct_lp138_buf141, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_0_reconstruct_lp138_buf141_ld446_merged1073(merged_0_reconstruct_lp138_buf141 /* buf name */, merged_0_reconstruct_lp138_buf141_to_gp_21445, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_us133_to_gp_13469
	auto merged_2_reconstruct_lp120_buf123_us133_to_gp_13469__lp_1_m_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638__p__0_rp__c____merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639_value = merged_2_reconstruct_lp120_buf123_us133_to_gp_13469.read();
	// Produce: merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637
	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968_write_bundle_write(/* arg names */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469__lp_1_m_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638__p__0_rp__c____merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639_value, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_1_FIFO_buf617620_sm719_0972(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_to_gp_13449, merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_to_gp_13449
	auto merged_1_to_gp_13449__lp_1_m_merged_1_to_gp_13449_ld618__p__0_rp__c____merged_1_to_gp_13449_ld619_value = merged_1_to_gp_13449.read();
	// Produce: merged_1_FIFO_buf617
	merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_sm719_0972_write_bundle_write(/* arg names */merged_1_to_gp_13449__lp_1_m_merged_1_to_gp_13449_ld618__p__0_rp__c____merged_1_to_gp_13449_ld619_value, merged_1_FIFO_buf617, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132
	auto merged_1_reconstruct_lp129_buf132__lp_1_m_merged_1_reconstruct_lp129_buf132_ld454__p__0_rp__c____merged_1_reconstruct_lp129_buf132_ld455_value = merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922_read_bundle_read(merged_1_reconstruct_lp129_buf132/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_1_reconstruct_lp129_buf132_to_gp_28453
	merged_1_reconstruct_lp129_buf132_to_gp_28453.write(merged_1_reconstruct_lp129_buf132__lp_1_m_merged_1_reconstruct_lp129_buf132_ld454__p__0_rp__c____merged_1_reconstruct_lp129_buf132_ld455_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc137_sm748_01004(merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_FIFO_buf617
	auto merged_1_FIFO_buf617__lp_1_m_merged_1_reconstruct_lp129131__p__0_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value = merged_1_FIFO_buf617_rc137_sm748_01004_read_bundle_read(merged_1_FIFO_buf617/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637
	auto merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637__lp_1_m_merged_1_reconstruct_lp129131__p__0_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_sm748_01004_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(merged_1_FIFO_buf617__lp_1_m_merged_1_reconstruct_lp129131__p__0_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637__lp_1_m_merged_1_reconstruct_lp129131__p__0_rp__p_0_c_____merged_1_reconstruct_lp129130_p_0_value);
	// Produce: merged_1_reconstruct_lp129_buf132
	merged_1_reconstruct_lp129_buf132_rc137_sm748_01004_write_bundle_write(/* arg names */compute_result, merged_1_reconstruct_lp129_buf132, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_1_reconstruct_lp129130_merged_1_reconstruct_lp129_buf132_ld455_merged_1_to_gp_13449_ld619_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_to_gp_13449, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_1_reconstruct_lp129130_merged_1_reconstruct_lp129_buf132_ld455_merged_1_to_gp_13449_ld619_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_1_FIFO_buf617_cache merged_1_FIFO_buf617;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_reconstruct_lp129_buf132_cache merged_1_reconstruct_lp129_buf132;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 106] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_1_FIFO_buf617620_sm719_0972[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 91] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 104] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; rc137_sm748_01004[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 106] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-106 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_merged_1_FIFO_buf617620_sm719_0972[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 91] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_FIFO_buf617620_sm719_0972(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-91 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 104] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-104 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { rc137_sm748_01004[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for rc137_sm748_01004(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-105 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (i1) mod 2 = 0 and 14 <= i1 <= 2060 and 7 <= i2 <= 1030 and 104 <= i3 <= 106; [0, i1, i2, 91] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2060; i1++) {
	    for (int i2 = 5; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 <= 2056 and i2 <= 1028 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 <= 2056 and i2 <= 1028 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : 1028 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2056 + -1*i1)) >= 0) && (((1028 + -1*i2)) >= 0)))) {
	          load_to_merged_1_FIFO_buf617620_sm719_0972(merged_1_to_gp_13449 /* buf name */, merged_1_FIFO_buf617, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_sm717_0968(merged_2_reconstruct_lp120_buf123_us133_to_gp_13469 /* buf name */, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          rc137_sm748_01004(merged_1_FIFO_buf617 /* buf name */, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637 /* buf name */, merged_1_reconstruct_lp129_buf132, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_sm699_0922(merged_1_reconstruct_lp129_buf132 /* buf name */, merged_1_reconstruct_lp129_buf132_to_gp_28453, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_2_FIFO_buf629632_sm716_0966(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_to_gp_14461, merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_to_gp_14461
	auto merged_2_to_gp_14461__lp_1_m_merged_2_to_gp_14461_ld630__p__0_rp__c____merged_2_to_gp_14461_ld631_value = merged_2_to_gp_14461.read();
	// Produce: merged_2_FIFO_buf629
	merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_sm716_0966_write_bundle_write(/* arg names */merged_2_to_gp_14461__lp_1_m_merged_2_to_gp_14461_ld630__p__0_rp__c____merged_2_to_gp_14461_ld631_value, merged_2_FIFO_buf629, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_3_us124_FIFO_buf645648_sm720_0974(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_us124_to_gp_14477, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_us124_to_gp_14477
	auto merged_3_us124_to_gp_14477__lp_1_m_merged_3_us124_to_gp_14477_ld646__p__0_rp__c____merged_3_us124_to_gp_14477_ld647_value = merged_3_us124_to_gp_14477.read();
	// Produce: merged_3_us124_FIFO_buf645
	merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_sm720_0974_write_bundle_write(/* arg names */merged_3_us124_to_gp_14477__lp_1_m_merged_3_us124_to_gp_14477_ld646__p__0_rp__c____merged_3_us124_to_gp_14477_ld647_value, merged_3_us124_FIFO_buf645, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc128_sm745_0998(merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_FIFO_buf629
	auto merged_2_FIFO_buf629__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value = merged_2_FIFO_buf629_rc128_sm745_0998_read_bundle_read(merged_2_FIFO_buf629/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_3_us124_FIFO_buf645
	auto merged_3_us124_FIFO_buf645__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value = merged_3_us124_FIFO_buf645_rc128_sm745_0998_read_bundle_read(merged_3_us124_FIFO_buf645/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(merged_2_FIFO_buf629__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value, merged_3_us124_FIFO_buf645__lp_1_m_merged_2_reconstruct_lp120122__p__0_rp__p_0_c_____merged_2_reconstruct_lp120121_p_0_value);
	// Produce: merged_2_reconstruct_lp120_buf123
	merged_2_reconstruct_lp120_buf123_rc128_sm745_0998_write_bundle_write(/* arg names */compute_result, merged_2_reconstruct_lp120_buf123, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_to_gp_29465, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123
	auto merged_2_reconstruct_lp120_buf123__lp_1_m_merged_2_reconstruct_lp120_buf123_ld466__p__0_rp__c____merged_2_reconstruct_lp120_buf123_ld467_value = merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882_read_bundle_read(merged_2_reconstruct_lp120_buf123/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_reconstruct_lp120_buf123_to_gp_29465
	merged_2_reconstruct_lp120_buf123_to_gp_29465.write(merged_2_reconstruct_lp120_buf123__lp_1_m_merged_2_reconstruct_lp120_buf123_ld466__p__0_rp__c____merged_2_reconstruct_lp120_buf123_ld467_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_2_reconstruct_lp120121_merged_2_reconstruct_lp120_buf123_ld467_merged_2_to_gp_14461_ld631_merged_3_us124_to_gp_14477_ld647_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_2_to_gp_14461, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_3_us124_to_gp_14477, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_2_reconstruct_lp120_buf123_to_gp_29465) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_2_reconstruct_lp120121_merged_2_reconstruct_lp120_buf123_ld467_merged_2_to_gp_14461_ld631_merged_3_us124_to_gp_14477_ld647__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_2_FIFO_buf629_cache merged_2_FIFO_buf629;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_reconstruct_lp120_buf123_cache merged_2_reconstruct_lp120_buf123;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_3_us124_FIFO_buf645_cache merged_3_us124_FIFO_buf645;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_merged_2_FIFO_buf629632_sm716_0966[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 98] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_3_us124_FIFO_buf645648_sm720_0974[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 100] : 0 <= d1 <= 511 and 0 <= d2 <= 511; rc128_sm745_0998[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_merged_2_FIFO_buf629632_sm716_0966[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 98] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_FIFO_buf629632_sm716_0966(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-98 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_merged_3_us124_FIFO_buf645648_sm720_0974[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_3_us124_FIFO_buf645648_sm720_0974(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-89 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 100] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-100 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { rc128_sm745_0998[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for rc128_sm745_0998(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-99 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 and 98 <= i3 <= 100; [0, i1, i2, 89] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_3_us124_FIFO_buf645648_sm720_0974(merged_3_us124_to_gp_14477 /* buf name */, merged_3_us124_FIFO_buf645, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_FIFO_buf629632_sm716_0966(merged_2_to_gp_14461 /* buf name */, merged_2_FIFO_buf629, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          rc128_sm745_0998(merged_2_FIFO_buf629 /* buf name */, merged_3_us124_FIFO_buf645 /* buf name */, merged_2_reconstruct_lp120_buf123, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_sm684_0882(merged_2_reconstruct_lp120_buf123 /* buf name */, merged_2_reconstruct_lp120_buf123_to_gp_29465, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_15345, gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_to_gp_15345
	auto gp_in0_3_buf24_to_gp_15345__lp_1_m_gp_in0_3_buf24_to_gp_15345_ld514__p__0_rp__c____gp_in0_3_buf24_to_gp_15345_ld515_value = gp_in0_3_buf24_to_gp_15345.read();
	// Produce: gp_in0_3_buf24_FIFO_buf513
	gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030_write_bundle_write(/* arg names */gp_in0_3_buf24_to_gp_15345__lp_1_m_gp_in0_3_buf24_to_gp_15345_ld514__p__0_rp__c____gp_in0_3_buf24_to_gp_15345_ld515_value, gp_in0_3_buf24_FIFO_buf513, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_15389, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_to_gp_15389
	auto gp_in1_3_buf72_to_gp_15389__lp_1_m_gp_in1_3_buf72_to_gp_15389_ld558__p__0_rp__c____gp_in1_3_buf72_to_gp_15389_ld559_value = gp_in1_3_buf72_to_gp_15389.read();
	// Produce: gp_in1_3_buf72_FIFO_buf557
	gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820_write_bundle_write(/* arg names */gp_in1_3_buf72_to_gp_15389__lp_1_m_gp_in1_3_buf72_to_gp_15389_ld558__p__0_rp__c____gp_in1_3_buf72_to_gp_15389_ld559_value, gp_in1_3_buf72_FIFO_buf557, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994(gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, merged_3_cache& merged_3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_FIFO_buf513
	auto gp_in0_3_buf24_FIFO_buf513__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value = gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_read_bundle_read(gp_in0_3_buf24_FIFO_buf513/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_3_buf72_FIFO_buf557
	auto gp_in1_3_buf72_FIFO_buf557__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value = gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_read_bundle_read(gp_in1_3_buf72_FIFO_buf557/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(gp_in0_3_buf24_FIFO_buf513__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value, gp_in1_3_buf72_FIFO_buf557__lp_1_m_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118__p__0_rp__p_0_c_____pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value);
	// Produce: merged_3
	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994_write_bundle_write(/* arg names */compute_result, merged_3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_3_to_gp_30473476_sm705_0938(merged_3_cache& merged_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_to_gp_30473, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3
	auto merged_3__lp_1_m_merged_3_ld474__p__0_rp__c____merged_3_ld475_value = merged_3_load_to_merged_3_to_gp_30473476_sm705_0938_read_bundle_read(merged_3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_to_gp_30473
	merged_3_to_gp_30473.write(merged_3__lp_1_m_merged_3_ld474__p__0_rp__c____merged_3_ld475_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_3_buf24_to_gp_15345_ld515_gp_in1_3_buf72_to_gp_15389_ld559_merged_3_ld475_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_3_buf24_to_gp_15345, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_3_buf72_to_gp_15389, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_3_to_gp_30473) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_3_buf24_to_gp_15345_ld515_gp_in1_3_buf72_to_gp_15389_ld559_merged_3_ld475_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_FIFO_buf513_cache gp_in0_3_buf24_FIFO_buf513;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_FIFO_buf557_cache gp_in1_3_buf72_FIFO_buf557;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_3_cache merged_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 70] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 52] : 0 <= d1 <= 255 and 0 <= d2 <= 255; pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 77] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_merged_3_to_gp_30473476_sm705_0938[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 79] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 70] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-70 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 52] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-52 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 77] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-77 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_merged_3_to_gp_30473476_sm705_0938[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 79] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_merged_3_to_gp_30473476_sm705_0938(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-79 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 79] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 77] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 70] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 52] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2054; i1++) {
	    for (int i2 = 7; i2 <= 1027; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in0_3_buf24_FIFO_buf513516_sm757_01030(gp_in0_3_buf24_to_gp_15345 /* buf name */, gp_in0_3_buf24_FIFO_buf513, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in1_3_buf72_FIFO_buf557560_sm661_0820(gp_in1_3_buf72_to_gp_15389 /* buf name */, gp_in1_3_buf72_FIFO_buf557, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm743_0994(gp_in0_3_buf24_FIFO_buf513 /* buf name */, gp_in1_3_buf72_FIFO_buf557 /* buf name */, merged_3, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_merged_3_to_gp_30473476_sm705_0938(merged_3 /* buf name */, merged_3_to_gp_30473, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in0_oc02_merged1098(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in0_oc, in0_cache& in0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_oc
	auto in0_oc__lp__lp_2_m_pw_math_in0_oc02__p__1_rp___p___m_7_rp__p_7_c________lp_pw_math_in0_oc01__p___m_7_rp__p_7_value = in0_oc.read();
	auto compute_result = pw_math_in0_oc02_cu1096(in0_oc__lp__lp_2_m_pw_math_in0_oc02__p__1_rp___p___m_7_rp__p_7_c________lp_pw_math_in0_oc01__p___m_7_rp__p_7_value);
	// Produce: in0
	in0_pw_math_in0_oc02_merged1098_write_bundle_write(/* arg names */compute_result, in0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in0_ld406_merged1081(in0_cache& in0, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in0_to_gp_6405, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0
	auto in0__lp__lp_2_m_in0_ld406__p__1_rp___p__7_rp__c_______lp_in0_ld407__p__7_rp__value = in0_in0_ld406_merged1081_read_bundle_read(in0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = in0_ld406_cu1080(in0__lp__lp_2_m_in0_ld406__p__1_rp___p__7_rp__c_______lp_in0_ld407__p__7_rp__value);
	// Produce: in0_to_gp_6405
	in0_to_gp_6405.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in0_ld402_merged1079(in0_cache& in0, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in0_to_gp_0401, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0
	auto in0__lp_2_m_in0_ld402__p__1_rp__c____in0_ld403_value = in0_in0_ld402_merged1079_read_bundle_read(in0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = in0_ld402_cu1078(in0__lp_2_m_in0_ld402__p__1_rp__c____in0_ld403_value);
	// Produce: in0_to_gp_0401
	in0_to_gp_0401.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in0_ld403_in0_ld407_pw_math_in0_oc01_(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */in0_oc, HWStream<hw_uint<64> >& /* get_args num ports = 2 */in0_to_gp_0401, HWStream<hw_uint<64> >& /* get_args num ports = 2 */in0_to_gp_6405) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in0_ld403_in0_ld407_pw_math_in0_oc01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in0_cache in0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in0_oc02_merged1098[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030; in0_ld406_merged1081[d0 = 0, d1, d2] -> [0, 7 + d1, 4 + d2, 2] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; in0_ld402_merged1079[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
//   { pw_math_in0_oc02_merged1098[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
// Condition for pw_math_in0_oc02_merged1098(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { in0_ld406_merged1081[d0 = 0, d1, d2] -> [0, 7 + d1, 4 + d2, 2] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for in0_ld406_merged1081(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { in0_ld402_merged1079[d0 = 0, d1, d2] -> [0, d1, d2, 6] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
// Condition for in0_ld402_merged1079(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 6] : 0 <= i1 <= 2054 and 0 <= i2 <= 1030; [0, i1, i2, 2] : 7 <= i1 <= 2054 and 4 <= i2 <= 1027; [0, i1, i2, 1] : 0 <= i1 <= 2054 and 0 <= i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2054; i1++) {
	    for (int i2 = 0; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_in0_oc02_merged1098(in0_oc /* buf name */, in0, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and 4 <= i2 <= 1027 }
	        // { [i0, i1, i2] : i1 >= 7 and 4 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          in0_ld406_merged1081(in0 /* buf name */, in0_to_gp_6405, 0, ((-7 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in0_ld402_merged1079(in0 /* buf name */, in0_to_gp_0401, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in1_oc46_merged1106(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in1_oc, in1_cache& in1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_oc
	auto in1_oc__lp__lp_2_m_pw_math_in1_oc46__p__1_rp___p___m_7_rp__p_7_c________lp_pw_math_in1_oc45__p___m_7_rp__p_7_value = in1_oc.read();
	auto compute_result = pw_math_in1_oc46_cu1104(in1_oc__lp__lp_2_m_pw_math_in1_oc46__p__1_rp___p___m_7_rp__p_7_c________lp_pw_math_in1_oc45__p___m_7_rp__p_7_value);
	// Produce: in1
	in1_pw_math_in1_oc46_merged1106_write_bundle_write(/* arg names */compute_result, in1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in1_ld414_merged1069(in1_cache& in1, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in1_to_gp_9413, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1
	auto in1__lp__lp_2_m_in1_ld414__p__1_rp___p__7_rp__c_______lp_in1_ld415__p__7_rp__value = in1_in1_ld414_merged1069_read_bundle_read(in1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = in1_ld414_cu1068(in1__lp__lp_2_m_in1_ld414__p__1_rp___p__7_rp__c_______lp_in1_ld415__p__7_rp__value);
	// Produce: in1_to_gp_9413
	in1_to_gp_9413.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in1_ld410_merged1067(in1_cache& in1, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in1_to_gp_3409, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1
	auto in1__lp_2_m_in1_ld410__p__1_rp__c____in1_ld411_value = in1_in1_ld410_merged1067_read_bundle_read(in1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = in1_ld410_cu1066(in1__lp_2_m_in1_ld410__p__1_rp__c____in1_ld411_value);
	// Produce: in1_to_gp_3409
	in1_to_gp_3409.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in1_ld411_in1_ld415_pw_math_in1_oc45_(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */in1_oc, HWStream<hw_uint<64> >& /* get_args num ports = 2 */in1_to_gp_3409, HWStream<hw_uint<64> >& /* get_args num ports = 2 */in1_to_gp_9413) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in1_ld411_in1_ld415_pw_math_in1_oc45__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in1_cache in1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in1_ld410_merged1067[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030; in1_ld414_merged1069[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 3] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; pw_math_in1_oc46_merged1106[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
//   { in1_ld410_merged1067[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
// Condition for in1_ld410_merged1067(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { in1_ld414_merged1069[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 3] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for in1_ld414_merged1069(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { pw_math_in1_oc46_merged1106[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
// Condition for pw_math_in1_oc46_merged1106(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 4] : 0 <= i1 <= 2054 and 0 <= i2 <= 1030; [0, i1, i2, 3] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 0] : 0 <= i1 <= 2054 and 0 <= i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2055; i1++) {
	    for (int i2 = 0; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          pw_math_in1_oc46_merged1106(in1_oc /* buf name */, in1, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and 4 <= i2 <= 1027 }
	        // { [i0, i1, i2] : i1 >= 8 and 4 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          in1_ld414_merged1069(in1 /* buf name */, in1_to_gp_9413, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          in1_ld410_merged1067(in1 /* buf name */, in1_to_gp_3409, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void lp_in0_0_buf52_to_gp_18417_ld586_merged1091(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */lp_in0_0_buf52_to_gp_18417, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52_to_gp_18417
	auto lp_in0_0_buf52_to_gp_18417__lp_2_m_lp_in0_0_buf52_to_gp_18417_ld586__p__1_rp__c____lp_in0_0_buf52_to_gp_18417_ld587_value = lp_in0_0_buf52_to_gp_18417.read();
	auto compute_result = lp_in0_0_buf52_to_gp_18417_ld586_cu1090(lp_in0_0_buf52_to_gp_18417__lp_2_m_lp_in0_0_buf52_to_gp_18417_ld586__p__1_rp__c____lp_in0_0_buf52_to_gp_18417_ld587_value);
	// Produce: lp_in0_0_buf52_FIFO_buf585
	lp_in0_0_buf52_FIFO_buf585_lp_in0_0_buf52_to_gp_18417_ld586_merged1091_write_bundle_write(/* arg names */compute_result, lp_in0_0_buf52_FIFO_buf585, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in1_0_buf100_to_gp_18429_ld598_merged1126(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */lp_in1_0_buf100_to_gp_18429, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_0_buf100_to_gp_18429
	auto lp_in1_0_buf100_to_gp_18429__lp_2_m_lp_in1_0_buf100_to_gp_18429_ld598__p__1_rp__c____lp_in1_0_buf100_to_gp_18429_ld599_value = lp_in1_0_buf100_to_gp_18429.read();
	auto compute_result = lp_in1_0_buf100_to_gp_18429_ld598_cu1125(lp_in1_0_buf100_to_gp_18429__lp_2_m_lp_in1_0_buf100_to_gp_18429_ld598__p__1_rp__c____lp_in1_0_buf100_to_gp_18429_ld599_value);
	// Produce: lp_in1_0_buf100_FIFO_buf597
	lp_in1_0_buf100_FIFO_buf597_lp_in1_0_buf100_to_gp_18429_ld598_merged1126_write_bundle_write(/* arg names */compute_result, lp_in1_0_buf100_FIFO_buf597, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, merged_0_cache& merged_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52_FIFO_buf585
	auto lp_in0_0_buf52_FIFO_buf585__lp_2_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__1_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value = lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_read_bundle_read(lp_in0_0_buf52_FIFO_buf585/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_0_buf100_FIFO_buf597
	auto lp_in1_0_buf100_FIFO_buf597__lp_2_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__1_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value = lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_read_bundle_read(lp_in1_0_buf100_FIFO_buf597/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu1112(lp_in0_0_buf52_FIFO_buf585__lp_2_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__1_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value, lp_in1_0_buf100_FIFO_buf597__lp_2_m_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106__p__1_rp__p_0_c_____pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value);
	// Produce: merged_0
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114_write_bundle_write(/* arg names */compute_result, merged_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_0_ld442_merged1071(merged_0_cache& merged_0, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */merged_0_to_gp_12441, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0
	auto merged_0__lp_2_m_merged_0_ld442__p__1_rp__c____merged_0_ld443_value = merged_0_merged_0_ld442_merged1071_read_bundle_read(merged_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merged_0_ld442_cu1070(merged_0__lp_2_m_merged_0_ld442__p__1_rp__c____merged_0_ld443_value);
	// Produce: merged_0_to_gp_12441
	merged_0_to_gp_12441.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in0_0_buf52_to_gp_18417_ld587_lp_in1_0_buf100_to_gp_18429_ld599_merged_0_ld443_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */lp_in0_0_buf52_to_gp_18417, HWStream<hw_uint<64> >& /* get_args num ports = 2 */lp_in1_0_buf100_to_gp_18429, HWStream<hw_uint<64> >& /* get_args num ports = 2 */merged_0_to_gp_12441) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in0_0_buf52_to_gp_18417_ld587_lp_in1_0_buf100_to_gp_18429_ld599_merged_0_ld443_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in0_0_buf52_FIFO_buf585_cache lp_in0_0_buf52_FIFO_buf585;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_0_buf100_FIFO_buf597_cache lp_in1_0_buf100_FIFO_buf597;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_0_cache merged_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { lp_in1_0_buf100_to_gp_18429_ld598_merged1126[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; merged_0_ld442_merged1071[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 69] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; lp_in0_0_buf52_to_gp_18417_ld586_merged1091[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 45] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { lp_in1_0_buf100_to_gp_18429_ld598_merged1126[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for lp_in1_0_buf100_to_gp_18429_ld598_merged1126(((((-50 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 59] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114(((((-59 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { merged_0_ld442_merged1071[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 69] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_0_ld442_merged1071(((((-69 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { lp_in0_0_buf52_to_gp_18417_ld586_merged1091[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 45] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for lp_in0_0_buf52_to_gp_18417_ld586_merged1091(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 69] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 59] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 50] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 45] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 4; i2 <= 1027; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          lp_in0_0_buf52_to_gp_18417_ld586_merged1091(lp_in0_0_buf52_to_gp_18417 /* buf name */, lp_in0_0_buf52_FIFO_buf585, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          lp_in1_0_buf100_to_gp_18429_ld598_merged1126(lp_in1_0_buf100_to_gp_18429 /* buf name */, lp_in1_0_buf100_FIFO_buf597, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_merged1114(lp_in0_0_buf52_FIFO_buf585 /* buf name */, lp_in1_0_buf100_FIFO_buf597 /* buf name */, merged_0, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_0_ld442_merged1071(merged_0 /* buf name */, merged_0_to_gp_12441, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_1_buf44_to_gp_19421, lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44_to_gp_19421
	auto lp_in0_1_buf44_to_gp_19421__lp_1_m_lp_in0_1_buf44_to_gp_19421_ld590__p__0_rp__c____lp_in0_1_buf44_to_gp_19421_ld591_value = lp_in0_1_buf44_to_gp_19421.read();
	// Produce: lp_in0_1_buf44_FIFO_buf589
	lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816_write_bundle_write(/* arg names */lp_in0_1_buf44_to_gp_19421__lp_1_m_lp_in0_1_buf44_to_gp_19421_ld590__p__0_rp__c____lp_in0_1_buf44_to_gp_19421_ld591_value, lp_in0_1_buf44_FIFO_buf589, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_1_buf92_to_gp_19433, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_1_buf92_to_gp_19433
	auto lp_in1_1_buf92_to_gp_19433__lp_1_m_lp_in1_1_buf92_to_gp_19433_ld602__p__0_rp__c____lp_in1_1_buf92_to_gp_19433_ld603_value = lp_in1_1_buf92_to_gp_19433.read();
	// Produce: lp_in1_1_buf92_FIFO_buf601
	lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954_write_bundle_write(/* arg names */lp_in1_1_buf92_to_gp_19433__lp_1_m_lp_in1_1_buf92_to_gp_19433_ld602__p__0_rp__c____lp_in1_1_buf92_to_gp_19433_ld603_value, lp_in1_1_buf92_FIFO_buf601, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792(lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, merged_1_cache& merged_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44_FIFO_buf589
	auto lp_in0_1_buf44_FIFO_buf589__lp_1_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__0_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value = lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_read_bundle_read(lp_in0_1_buf44_FIFO_buf589/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_1_buf92_FIFO_buf601
	auto lp_in1_1_buf92_FIFO_buf601__lp_1_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__0_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value = lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_read_bundle_read(lp_in1_1_buf92_FIFO_buf601/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(lp_in0_1_buf44_FIFO_buf589__lp_1_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__0_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value, lp_in1_1_buf92_FIFO_buf601__lp_1_m_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110__p__0_rp__p_0_c_____pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value);
	// Produce: merged_1
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792_write_bundle_write(/* arg names */compute_result, merged_1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_1_to_gp_13449452_sm649_0794(merged_1_cache& merged_1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_to_gp_13449, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1
	auto merged_1__lp_1_m_merged_1_ld450__p__0_rp__c____merged_1_ld451_value = merged_1_load_to_merged_1_to_gp_13449452_sm649_0794_read_bundle_read(merged_1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_1_to_gp_13449
	merged_1_to_gp_13449.write(merged_1__lp_1_m_merged_1_ld450__p__0_rp__c____merged_1_ld451_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in0_1_buf44_to_gp_19421_ld591_lp_in1_1_buf92_to_gp_19433_ld603_merged_1_ld451_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in0_1_buf44_to_gp_19421, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in1_1_buf92_to_gp_19433, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_to_gp_13449) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in0_1_buf44_to_gp_19421_ld591_lp_in1_1_buf92_to_gp_19433_ld603_merged_1_ld451_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in0_1_buf44_FIFO_buf589_cache lp_in0_1_buf44_FIFO_buf589;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_1_buf92_FIFO_buf601_cache lp_in1_1_buf92_FIFO_buf601;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_cache merged_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 82] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_1_to_gp_13449452_sm649_0794[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 86] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 74] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 80] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 82] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-82 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_merged_1_to_gp_13449452_sm649_0794[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 86] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_to_gp_13449452_sm649_0794(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-86 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 74] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-74 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 80] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-80 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 86] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 82] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 80] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 74] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 5; i2 <= 1028; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in0_1_buf44_FIFO_buf589592_sm659_0816(lp_in0_1_buf44_to_gp_19421 /* buf name */, lp_in0_1_buf44_FIFO_buf589, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in1_1_buf92_FIFO_buf601604_sm712_0954(lp_in1_1_buf92_to_gp_19433 /* buf name */, lp_in1_1_buf92_FIFO_buf601, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm741_0792(lp_in0_1_buf44_FIFO_buf589 /* buf name */, lp_in1_1_buf92_FIFO_buf601 /* buf name */, merged_1, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_1_to_gp_13449452_sm649_0794(merged_1 /* buf name */, merged_1_to_gp_13449, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_2329, gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_to_gp_2329
	auto gp_in0_2_buf16_to_gp_2329__lp_1_m_gp_in0_2_buf16_to_gp_2329_ld498__p__0_rp__c____gp_in0_2_buf16_to_gp_2329_ld499_value = gp_in0_2_buf16_to_gp_2329.read();
	// Produce: gp_in0_2_buf16_FIFO_buf497
	gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940_write_bundle_write(/* arg names */gp_in0_2_buf16_to_gp_2329__lp_1_m_gp_in0_2_buf16_to_gp_2329_ld498__p__0_rp__c____gp_in0_2_buf16_to_gp_2329_ld499_value, gp_in0_2_buf16_FIFO_buf497, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_326_merged297_sm722_0980(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, gp_in0_3_buf24_cache& gp_in0_3_buf24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_FIFO_buf497
	auto gp_in0_2_buf16_FIFO_buf497_2_m__lp_1_m_gp_in0_326__p__0_rp___p___m_1_p_1_c_______2_m_gp_in0_325__p__1_p_1_value = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged297_sm722_0980_read_bundle_read(gp_in0_2_buf16_FIFO_buf497/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_326_cu295(gp_in0_2_buf16_FIFO_buf497_2_m__lp_1_m_gp_in0_326__p__0_rp___p___m_1_p_1_c_______2_m_gp_in0_325__p__1_p_1_value);
	// Produce: gp_in0_3_buf24
	gp_in0_3_buf24_gp_in0_326_merged297_sm722_0980_write_bundle_write(/* arg names */compute_result, gp_in0_3_buf24, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846(gp_in0_3_buf24_cache& gp_in0_3_buf24, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_24349, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24
	auto gp_in0_3_buf24__lp_1_m_gp_in0_3_buf24_ld350__p__0_rp__c____gp_in0_3_buf24_ld351_value = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846_read_bundle_read(gp_in0_3_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_to_gp_24349
	gp_in0_3_buf24_to_gp_24349.write(gp_in0_3_buf24__lp_1_m_gp_in0_3_buf24_ld350__p__0_rp__c____gp_in0_3_buf24_ld351_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848(gp_in0_3_buf24_cache& gp_in0_3_buf24, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_15345, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24
	auto gp_in0_3_buf24__lp_1_m_gp_in0_3_buf24_ld346__p__0_rp__c____gp_in0_3_buf24_ld347_value = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848_read_bundle_read(gp_in0_3_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_to_gp_15345
	gp_in0_3_buf24_to_gp_15345.write(gp_in0_3_buf24__lp_1_m_gp_in0_3_buf24_ld346__p__0_rp__c____gp_in0_3_buf24_ld347_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_2_buf16_to_gp_2329_ld499_gp_in0_325_gp_in0_3_buf24_ld347_gp_in0_3_buf24_ld351_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_to_gp_2329, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_3_buf24_to_gp_15345, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_3_buf24_to_gp_24349) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_2_buf16_to_gp_2329_ld499_gp_in0_325_gp_in0_3_buf24_ld347_gp_in0_3_buf24_ld351__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_FIFO_buf497_cache gp_in0_2_buf16_FIFO_buf497;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_cache gp_in0_3_buf24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513; load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 49] : 0 <= d1 <= 255 and 0 <= d2 <= 255; gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 48] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
// Condition for load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 49] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-49 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in0_326_merged297_sm722_0980[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 41] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for gp_in0_326_merged297_sm722_0980(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 48] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027 and 48 <= i3 <= 49; [0, i1, i2, 41] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 32] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 6 <= i1 <= 2054 and 3 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 2054; i1++) {
	    for (int i2 = 3; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_2_buf16_FIFO_buf497500_sm706_0940(gp_in0_2_buf16_to_gp_2329 /* buf name */, gp_in0_2_buf16_FIFO_buf497, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          gp_in0_326_merged297_sm722_0980(gp_in0_2_buf16_FIFO_buf497 /* buf name */, gp_in0_3_buf24, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_3_buf24_to_gp_15345348_sm672_0848(gp_in0_3_buf24 /* buf name */, gp_in0_3_buf24_to_gp_15345, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_3_buf24_to_gp_24349352_sm671_0846(gp_in0_3_buf24 /* buf name */, gp_in0_3_buf24_to_gp_24349, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_2_buf36_to_gp_20425, lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36_to_gp_20425
	auto lp_in0_2_buf36_to_gp_20425__lp_1_m_lp_in0_2_buf36_to_gp_20425_ld594__p__0_rp__c____lp_in0_2_buf36_to_gp_20425_ld595_value = lp_in0_2_buf36_to_gp_20425.read();
	// Produce: lp_in0_2_buf36_FIFO_buf593
	lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948_write_bundle_write(/* arg names */lp_in0_2_buf36_to_gp_20425__lp_1_m_lp_in0_2_buf36_to_gp_20425_ld594__p__0_rp__c____lp_in0_2_buf36_to_gp_20425_ld595_value, lp_in0_2_buf36_FIFO_buf593, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_2_buf84_to_gp_20437, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_2_buf84_to_gp_20437
	auto lp_in1_2_buf84_to_gp_20437__lp_1_m_lp_in1_2_buf84_to_gp_20437_ld606__p__0_rp__c____lp_in1_2_buf84_to_gp_20437_ld607_value = lp_in1_2_buf84_to_gp_20437.read();
	// Produce: lp_in1_2_buf84_FIFO_buf605
	lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838_write_bundle_write(/* arg names */lp_in1_2_buf84_to_gp_20437__lp_1_m_lp_in1_2_buf84_to_gp_20437_ld606__p__0_rp__c____lp_in1_2_buf84_to_gp_20437_ld607_value, lp_in1_2_buf84_FIFO_buf605, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992(lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, merged_2_cache& merged_2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36_FIFO_buf593
	auto lp_in0_2_buf36_FIFO_buf593__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value = lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_read_bundle_read(lp_in0_2_buf36_FIFO_buf593/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_2_buf84_FIFO_buf605
	auto lp_in1_2_buf84_FIFO_buf605__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value = lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_read_bundle_read(lp_in1_2_buf84_FIFO_buf605/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(lp_in0_2_buf36_FIFO_buf593__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value, lp_in1_2_buf84_FIFO_buf605__lp_1_m_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114__p__0_rp__p_0_c_____pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value);
	// Produce: merged_2
	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992_write_bundle_write(/* arg names */compute_result, merged_2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_to_gp_14461464_sm664_0828(merged_2_cache& merged_2, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_to_gp_14461, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2
	auto merged_2__lp_1_m_merged_2_ld462__p__0_rp__c____merged_2_ld463_value = merged_2_load_to_merged_2_to_gp_14461464_sm664_0828_read_bundle_read(merged_2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_to_gp_14461
	merged_2_to_gp_14461.write(merged_2__lp_1_m_merged_2_ld462__p__0_rp__c____merged_2_ld463_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in0_2_buf36_to_gp_20425_ld595_lp_in1_2_buf84_to_gp_20437_ld607_merged_2_ld463_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in0_2_buf36_to_gp_20425, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in1_2_buf84_to_gp_20437, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_2_to_gp_14461) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in0_2_buf36_to_gp_20425_ld595_lp_in1_2_buf84_to_gp_20437_ld607_merged_2_ld463_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in0_2_buf36_FIFO_buf593_cache lp_in0_2_buf36_FIFO_buf593;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_2_buf84_FIFO_buf605_cache lp_in1_2_buf84_FIFO_buf605;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_cache merged_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 96] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 92] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_2_to_gp_14461464_sm664_0828[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 97] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 96] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-96 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 92] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-92 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-95 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_merged_2_to_gp_14461464_sm664_0828[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 97] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_to_gp_14461464_sm664_0828(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-97 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 and 95 <= i3 <= 97; [0, i1, i2, 92] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in0_2_buf36_FIFO_buf593596_sm710_0948(lp_in0_2_buf36_to_gp_20425 /* buf name */, lp_in0_2_buf36_FIFO_buf593, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in1_2_buf84_FIFO_buf605608_sm667_0838(lp_in1_2_buf84_to_gp_20437 /* buf name */, lp_in1_2_buf84_FIFO_buf605, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm742_0992(lp_in0_2_buf36_FIFO_buf593 /* buf name */, lp_in1_2_buf84_FIFO_buf605 /* buf name */, merged_2, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_to_gp_14461464_sm664_0828(merged_2 /* buf name */, merged_2_to_gp_14461, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */merged_0_reconstruct_lp138_buf141_to_gp_21445, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141_to_gp_21445
	auto merged_0_reconstruct_lp138_buf141_to_gp_21445__lp_2_m_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614__p__1_rp__c____merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_value = merged_0_reconstruct_lp138_buf141_to_gp_21445.read();
	auto compute_result = merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_cu1092(merged_0_reconstruct_lp138_buf141_to_gp_21445__lp_2_m_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614__p__1_rp__c____merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_value);
	// Produce: merged_0_reconstruct_lp138_buf141_FIFO_buf613
	merged_0_reconstruct_lp138_buf141_FIFO_buf613_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093_write_bundle_write(/* arg names */compute_result, merged_0_reconstruct_lp138_buf141_FIFO_buf613, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141_FIFO_buf613
	auto merged_0_reconstruct_lp138_buf141_FIFO_buf613__lp_2_m_pw_math_merged_0_reconstruct_lp138_buf141147149__p__1_rp__p_0_c_____pw_math_merged_0_reconstruct_lp138_buf141147148_p_0_value = merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_read_bundle_read(merged_0_reconstruct_lp138_buf141_FIFO_buf613/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = pw_math_merged_0_reconstruct_lp138_buf141147149_cu1120(merged_0_reconstruct_lp138_buf141_FIFO_buf613__lp_2_m_pw_math_merged_0_reconstruct_lp138_buf141147149__p__1_rp__p_0_c_____pw_math_merged_0_reconstruct_lp138_buf141147148_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_pw_math_merged_0_reconstruct_lp138_buf141147148_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */merged_0_reconstruct_lp138_buf141_to_gp_21445, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_pw_math_merged_0_reconstruct_lp138_buf141147148__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache merged_0_reconstruct_lp138_buf141_FIFO_buf613;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122(((((-114 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093(((((-113 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 2061 and 7 <= i2 <= 1030 and 113 <= i3 <= 114 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2061; i1++) {
	    for (int i2 = 7; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_merged1093(merged_0_reconstruct_lp138_buf141_to_gp_21445 /* buf name */, merged_0_reconstruct_lp138_buf141_FIFO_buf613, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122(merged_0_reconstruct_lp138_buf141_FIFO_buf613 /* buf name */, out, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_to_gp_22317
	auto gp_in0_1_buf8_to_gp_22317__lp__lp_1_m_gp_in0_1_buf8_to_gp_22317_ld486__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_to_gp_22317_ld487__p__3_rp__value = gp_in0_1_buf8_to_gp_22317.read();
	// Produce: gp_in0_1_buf8_FIFO_buf485
	gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926_write_bundle_write(/* arg names */gp_in0_1_buf8_to_gp_22317__lp__lp_1_m_gp_in0_1_buf8_to_gp_22317_ld486__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_to_gp_22317_ld487__p__3_rp__value, gp_in0_1_buf8_FIFO_buf485, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_gp_in0_1_buf850_merged1100(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_FIFO_buf485
	auto gp_in0_1_buf8_FIFO_buf485_floor_lp__lp_2_m_us_gp_in0_1_buf850__p__1_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in0_1_buf849__div__2_rp__p_3_value = gp_in0_1_buf8_FIFO_buf485_us_gp_in0_1_buf850_merged1100_read_bundle_read(gp_in0_1_buf8_FIFO_buf485/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_gp_in0_1_buf850_cu1099(gp_in0_1_buf8_FIFO_buf485_floor_lp__lp_2_m_us_gp_in0_1_buf850__p__1_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in0_1_buf849__div__2_rp__p_3_value);
	// Produce: gp_in0_1_buf8_us48
	gp_in0_1_buf8_us48_us_gp_in0_1_buf850_merged1100_write_bundle_write(/* arg names */compute_result, gp_in0_1_buf8_us48, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_1_buf8_us48_ld326_merged1124(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */gp_in0_1_buf8_us48_to_gp_6325, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_us48
	auto gp_in0_1_buf8_us48__lp_2_m_gp_in0_1_buf8_us48_ld326__p__1_rp__c____gp_in0_1_buf8_us48_ld327_value = gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_merged1124_read_bundle_read(gp_in0_1_buf8_us48/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_1_buf8_us48_ld326_cu1123(gp_in0_1_buf8_us48__lp_2_m_gp_in0_1_buf8_us48_ld326__p__1_rp__c____gp_in0_1_buf8_us48_ld327_value);
	// Produce: gp_in0_1_buf8_us48_to_gp_6325
	gp_in0_1_buf8_us48_to_gp_6325.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_1_buf8_to_gp_22317_ld487_gp_in0_1_buf8_us48_ld327_us_gp_in0_1_buf849_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, HWStream<hw_uint<64> >& /* get_args num ports = 2 */gp_in0_1_buf8_us48_to_gp_6325) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_1_buf8_to_gp_22317_ld487_gp_in0_1_buf8_us48_ld327_us_gp_in0_1_buf849__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_FIFO_buf485_cache gp_in0_1_buf8_FIFO_buf485;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_us48_cache gp_in0_1_buf8_us48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 16] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; us_gp_in0_1_buf850_merged1100[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 20] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; gp_in0_1_buf8_us48_ld326_merged1124[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 16] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { us_gp_in0_1_buf850_merged1100[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 20] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for us_gp_in0_1_buf850_merged1100(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in0_1_buf8_us48_ld326_merged1124[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for gp_in0_1_buf8_us48_ld326_merged1124(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 27] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 20] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 16] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 4 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 4; i2 <= 1027; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in0_1_buf8_FIFO_buf485488_sm701_0926(gp_in0_1_buf8_to_gp_22317 /* buf name */, gp_in0_1_buf8_FIFO_buf485, 0, ((-4 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us_gp_in0_1_buf850_merged1100(gp_in0_1_buf8_FIFO_buf485 /* buf name */, gp_in0_1_buf8_us48, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          gp_in0_1_buf8_us48_ld326_merged1124(gp_in0_1_buf8_us48 /* buf name */, gp_in0_1_buf8_us48_to_gp_6325, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_23333, gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_to_gp_23333
	auto gp_in0_2_buf16_to_gp_23333__lp__lp_1_m_gp_in0_2_buf16_to_gp_23333_ld502__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_to_gp_23333_ld503__p__1_rp__value = gp_in0_2_buf16_to_gp_23333.read();
	// Produce: gp_in0_2_buf16_FIFO_buf501
	gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798_write_bundle_write(/* arg names */gp_in0_2_buf16_to_gp_23333__lp__lp_1_m_gp_in0_2_buf16_to_gp_23333_ld502__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_to_gp_23333_ld503__p__1_rp__value, gp_in0_2_buf16_FIFO_buf501, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us43_sm739_0786(gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_FIFO_buf501
	auto gp_in0_2_buf16_FIFO_buf501_floor_lp__lp_1_m_us_gp_in0_2_buf1642__p__0_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in0_2_buf1641__div__2_rp__p_1_value = gp_in0_2_buf16_FIFO_buf501_us43_sm739_0786_read_bundle_read(gp_in0_2_buf16_FIFO_buf501/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_us40
	gp_in0_2_buf16_us40_us43_sm739_0786_write_bundle_write(/* arg names */gp_in0_2_buf16_FIFO_buf501_floor_lp__lp_1_m_us_gp_in0_2_buf1642__p__0_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in0_2_buf1641__div__2_rp__p_1_value, gp_in0_2_buf16_us40, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_us40_to_gp_7341, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_us40
	auto gp_in0_2_buf16_us40__lp_1_m_gp_in0_2_buf16_us40_ld342__p__0_rp__c____gp_in0_2_buf16_us40_ld343_value = gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040_read_bundle_read(gp_in0_2_buf16_us40/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_us40_to_gp_7341
	gp_in0_2_buf16_us40_to_gp_7341.write(gp_in0_2_buf16_us40__lp_1_m_gp_in0_2_buf16_us40_ld342__p__0_rp__c____gp_in0_2_buf16_us40_ld343_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_2_buf16_to_gp_23333_ld503_gp_in0_2_buf16_us40_ld343_us_gp_in0_2_buf1641_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_to_gp_23333, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_us40_to_gp_7341) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_2_buf16_to_gp_23333_ld503_gp_in0_2_buf16_us40_ld343_us_gp_in0_2_buf1641__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_FIFO_buf501_cache gp_in0_2_buf16_FIFO_buf501;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_us40_cache gp_in0_2_buf16_us40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us43_sm739_0786[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 37] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 56] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { us43_sm739_0786[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for us43_sm739_0786(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-54 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 37] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 56] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-56 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 37] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 10 <= i1 <= 2054 and 5 <= i2 <= 1027; [0, i1, i2, 56] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 54] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 5; i2 <= 1028; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_2_buf16_FIFO_buf501504_sm651_0798(gp_in0_2_buf16_to_gp_23333 /* buf name */, gp_in0_2_buf16_FIFO_buf501, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us43_sm739_0786(gp_in0_2_buf16_FIFO_buf501 /* buf name */, gp_in0_2_buf16_us40, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in0_2_buf16_us40_to_gp_7341344_sm761_01040(gp_in0_2_buf16_us40 /* buf name */, gp_in0_2_buf16_us40_to_gp_7341, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void us35_sm729_0778(gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_FIFO_buf517
	auto gp_in0_3_buf24_FIFO_buf517_floor_lp__lp_1_m_us_gp_in0_3_buf2434__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in0_3_buf2433__div__2_rp__p_0_value = gp_in0_3_buf24_FIFO_buf517_us35_sm729_0778_read_bundle_read(gp_in0_3_buf24_FIFO_buf517/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_us32
	gp_in0_3_buf24_us32_us35_sm729_0778_write_bundle_write(/* arg names */gp_in0_3_buf24_FIFO_buf517_floor_lp__lp_1_m_us_gp_in0_3_buf2434__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in0_3_buf2433__div__2_rp__p_0_value, gp_in0_3_buf24_us32, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_24349, gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_to_gp_24349
	auto gp_in0_3_buf24_to_gp_24349__lp_1_m_gp_in0_3_buf24_to_gp_24349_ld518__p__0_rp__c____gp_in0_3_buf24_to_gp_24349_ld519_value = gp_in0_3_buf24_to_gp_24349.read();
	// Produce: gp_in0_3_buf24_FIFO_buf517
	gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942_write_bundle_write(/* arg names */gp_in0_3_buf24_to_gp_24349__lp_1_m_gp_in0_3_buf24_to_gp_24349_ld518__p__0_rp__c____gp_in0_3_buf24_to_gp_24349_ld519_value, gp_in0_3_buf24_FIFO_buf517, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_us32_to_gp_8353, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_us32
	auto gp_in0_3_buf24_us32__lp_1_m_gp_in0_3_buf24_us32_ld354__p__0_rp__c____gp_in0_3_buf24_us32_ld355_value = gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844_read_bundle_read(gp_in0_3_buf24_us32/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_us32_to_gp_8353
	gp_in0_3_buf24_us32_to_gp_8353.write(gp_in0_3_buf24_us32__lp_1_m_gp_in0_3_buf24_us32_ld354__p__0_rp__c____gp_in0_3_buf24_us32_ld355_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_3_buf24_to_gp_24349_ld519_gp_in0_3_buf24_us32_ld355_us_gp_in0_3_buf2433_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_3_buf24_to_gp_24349, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_3_buf24_us32_to_gp_8353) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_3_buf24_to_gp_24349_ld519_gp_in0_3_buf24_us32_ld355_us_gp_in0_3_buf2433__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_FIFO_buf517_cache gp_in0_3_buf24_FIFO_buf517;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_us32_cache gp_in0_3_buf24_us32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 58] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 72] : 0 <= d1 <= 511 and 0 <= d2 <= 511; us35_sm729_0778[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 64] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 58] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-58 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 72] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-72 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { us35_sm729_0778[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 64] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us35_sm729_0778(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-64 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 72] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 64] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 58] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in0_3_buf24_FIFO_buf517520_sm707_0942(gp_in0_3_buf24_to_gp_24349 /* buf name */, gp_in0_3_buf24_FIFO_buf517, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          us35_sm729_0778(gp_in0_3_buf24_FIFO_buf517 /* buf name */, gp_in0_3_buf24_us32, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_3_buf24_us32_to_gp_8353356_sm670_0844(gp_in0_3_buf24_us32 /* buf name */, gp_in0_3_buf24_us32_to_gp_8353, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_to_gp_25361
	auto gp_in1_1_buf56_to_gp_25361__lp__lp_1_m_gp_in1_1_buf56_to_gp_25361_ld530__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_to_gp_25361_ld531__p__3_rp__value = gp_in1_1_buf56_to_gp_25361.read();
	// Produce: gp_in1_1_buf56_FIFO_buf529
	gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806_write_bundle_write(/* arg names */gp_in1_1_buf56_to_gp_25361__lp__lp_1_m_gp_in1_1_buf56_to_gp_25361_ld530__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_to_gp_25361_ld531__p__3_rp__value, gp_in1_1_buf56_FIFO_buf529, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_gp_in1_1_buf5698_merged1108(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_FIFO_buf529
	auto gp_in1_1_buf56_FIFO_buf529_floor_lp__lp_2_m_us_gp_in1_1_buf5698__p__1_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in1_1_buf5697__div__2_rp__p_3_value = gp_in1_1_buf56_FIFO_buf529_us_gp_in1_1_buf5698_merged1108_read_bundle_read(gp_in1_1_buf56_FIFO_buf529/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_gp_in1_1_buf5698_cu1107(gp_in1_1_buf56_FIFO_buf529_floor_lp__lp_2_m_us_gp_in1_1_buf5698__p__1_rp___div__2_rp__p_3_c_____floor_lp_us_gp_in1_1_buf5697__div__2_rp__p_3_value);
	// Produce: gp_in1_1_buf56_us96
	gp_in1_1_buf56_us96_us_gp_in1_1_buf5698_merged1108_write_bundle_write(/* arg names */compute_result, gp_in1_1_buf56_us96, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_1_buf56_us96_ld370_merged1128(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */gp_in1_1_buf56_us96_to_gp_9369, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_us96
	auto gp_in1_1_buf56_us96__lp_2_m_gp_in1_1_buf56_us96_ld370__p__1_rp__c____gp_in1_1_buf56_us96_ld371_value = gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_merged1128_read_bundle_read(gp_in1_1_buf56_us96/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_1_buf56_us96_ld370_cu1127(gp_in1_1_buf56_us96__lp_2_m_gp_in1_1_buf56_us96_ld370__p__1_rp__c____gp_in1_1_buf56_us96_ld371_value);
	// Produce: gp_in1_1_buf56_us96_to_gp_9369
	gp_in1_1_buf56_us96_to_gp_9369.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_1_buf56_to_gp_25361_ld531_gp_in1_1_buf56_us96_ld371_us_gp_in1_1_buf5697_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, HWStream<hw_uint<64> >& /* get_args num ports = 2 */gp_in1_1_buf56_us96_to_gp_9369) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_1_buf56_to_gp_25361_ld531_gp_in1_1_buf56_us96_ld371_us_gp_in1_1_buf5697__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_FIFO_buf529_cache gp_in1_1_buf56_FIFO_buf529;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_us96_cache gp_in1_1_buf56_us96;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us_gp_in1_1_buf5698_merged1108[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 23] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 18] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; gp_in1_1_buf56_us96_ld370_merged1128[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 25] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { us_gp_in1_1_buf5698_merged1108[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 23] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for us_gp_in1_1_buf5698_merged1108(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 18] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in1_1_buf56_us96_ld370_merged1128[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 25] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for gp_in1_1_buf56_us96_ld370_merged1128(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 25] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 23] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 18] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 4 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 4; i2 <= 1027; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_1_buf56_FIFO_buf529532_sm655_0806(gp_in1_1_buf56_to_gp_25361 /* buf name */, gp_in1_1_buf56_FIFO_buf529, 0, ((-4 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us_gp_in1_1_buf5698_merged1108(gp_in1_1_buf56_FIFO_buf529 /* buf name */, gp_in1_1_buf56_us96, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          gp_in1_1_buf56_us96_ld370_merged1128(gp_in1_1_buf56_us96 /* buf name */, gp_in1_1_buf56_us96_to_gp_9369, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void us91_sm735_0766(gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_FIFO_buf545
	auto gp_in1_2_buf64_FIFO_buf545_floor_lp__lp_1_m_us_gp_in1_2_buf6490__p__0_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in1_2_buf6489__div__2_rp__p_1_value = gp_in1_2_buf64_FIFO_buf545_us91_sm735_0766_read_bundle_read(gp_in1_2_buf64_FIFO_buf545/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_us88
	gp_in1_2_buf64_us88_us91_sm735_0766_write_bundle_write(/* arg names */gp_in1_2_buf64_FIFO_buf545_floor_lp__lp_1_m_us_gp_in1_2_buf6490__p__0_rp___div__2_rp__p_1_c_____floor_lp_us_gp_in1_2_buf6489__div__2_rp__p_1_value, gp_in1_2_buf64_us88, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_26377, gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_to_gp_26377
	auto gp_in1_2_buf64_to_gp_26377__lp__lp_1_m_gp_in1_2_buf64_to_gp_26377_ld546__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_to_gp_26377_ld547__p__1_rp__value = gp_in1_2_buf64_to_gp_26377.read();
	// Produce: gp_in1_2_buf64_FIFO_buf545
	gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898_write_bundle_write(/* arg names */gp_in1_2_buf64_to_gp_26377__lp__lp_1_m_gp_in1_2_buf64_to_gp_26377_ld546__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_to_gp_26377_ld547__p__1_rp__value, gp_in1_2_buf64_FIFO_buf545, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_us88_to_gp_10385, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_us88
	auto gp_in1_2_buf64_us88__lp_1_m_gp_in1_2_buf64_us88_ld386__p__0_rp__c____gp_in1_2_buf64_us88_ld387_value = gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886_read_bundle_read(gp_in1_2_buf64_us88/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_us88_to_gp_10385
	gp_in1_2_buf64_us88_to_gp_10385.write(gp_in1_2_buf64_us88__lp_1_m_gp_in1_2_buf64_us88_ld386__p__0_rp__c____gp_in1_2_buf64_us88_ld387_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_2_buf64_to_gp_26377_ld547_gp_in1_2_buf64_us88_ld387_us_gp_in1_2_buf6489_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_to_gp_26377, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_us88_to_gp_10385) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_2_buf64_to_gp_26377_ld547_gp_in1_2_buf64_us88_ld387_us_gp_in1_2_buf6489__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_FIFO_buf545_cache gp_in1_2_buf64_FIFO_buf545;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_us88_cache gp_in1_2_buf64_us88;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 61] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 53] : 0 <= d1 <= 511 and 0 <= d2 <= 511; us91_sm735_0766[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 57] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 61] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-61 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 53] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-53 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { us91_sm735_0766[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 57] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for us91_sm735_0766(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-57 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 53] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 10 <= i1 <= 2054 and 5 <= i2 <= 1027; [0, i1, i2, 61] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 57] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 5; i2 <= 1028; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_2_buf64_FIFO_buf545548_sm691_0898(gp_in1_2_buf64_to_gp_26377 /* buf name */, gp_in1_2_buf64_FIFO_buf545, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us91_sm735_0766(gp_in1_2_buf64_FIFO_buf545 /* buf name */, gp_in1_2_buf64_us88, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_2_buf64_us88_to_gp_10385388_sm686_0886(gp_in1_2_buf64_us88 /* buf name */, gp_in1_2_buf64_us88_to_gp_10385, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_us80_to_gp_11397, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_us80
	auto gp_in1_3_buf72_us80__lp_1_m_gp_in1_3_buf72_us80_ld398__p__0_rp__c____gp_in1_3_buf72_us80_ld399_value = gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854_read_bundle_read(gp_in1_3_buf72_us80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_us80_to_gp_11397
	gp_in1_3_buf72_us80_to_gp_11397.write(gp_in1_3_buf72_us80__lp_1_m_gp_in1_3_buf72_us80_ld398__p__0_rp__c____gp_in1_3_buf72_us80_ld399_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_27393, gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_to_gp_27393
	auto gp_in1_3_buf72_to_gp_27393__lp_1_m_gp_in1_3_buf72_to_gp_27393_ld562__p__0_rp__c____gp_in1_3_buf72_to_gp_27393_ld563_value = gp_in1_3_buf72_to_gp_27393.read();
	// Produce: gp_in1_3_buf72_FIFO_buf561
	gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802_write_bundle_write(/* arg names */gp_in1_3_buf72_to_gp_27393__lp_1_m_gp_in1_3_buf72_to_gp_27393_ld562__p__0_rp__c____gp_in1_3_buf72_to_gp_27393_ld563_value, gp_in1_3_buf72_FIFO_buf561, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us83_sm746_01000(gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_FIFO_buf561
	auto gp_in1_3_buf72_FIFO_buf561_floor_lp__lp_1_m_us_gp_in1_3_buf7282__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in1_3_buf7281__div__2_rp__p_0_value = gp_in1_3_buf72_FIFO_buf561_us83_sm746_01000_read_bundle_read(gp_in1_3_buf72_FIFO_buf561/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_us80
	gp_in1_3_buf72_us80_us83_sm746_01000_write_bundle_write(/* arg names */gp_in1_3_buf72_FIFO_buf561_floor_lp__lp_1_m_us_gp_in1_3_buf7282__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_gp_in1_3_buf7281__div__2_rp__p_0_value, gp_in1_3_buf72_us80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_3_buf72_to_gp_27393_ld563_gp_in1_3_buf72_us80_ld399_us_gp_in1_3_buf7281_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_3_buf72_to_gp_27393, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_3_buf72_us80_to_gp_11397) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_3_buf72_to_gp_27393_ld563_gp_in1_3_buf72_us80_ld399_us_gp_in1_3_buf7281__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_FIFO_buf561_cache gp_in1_3_buf72_FIFO_buf561;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_us80_cache gp_in1_3_buf72_us80;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 83] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 67] : 0 <= d1 <= 255 and 0 <= d2 <= 255; us83_sm746_01000[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 76] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 83] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-83 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 67] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-67 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { us83_sm746_01000[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 76] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us83_sm746_01000(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-76 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 83] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 76] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 67] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in1_3_buf72_FIFO_buf561564_sm653_0802(gp_in1_3_buf72_to_gp_27393 /* buf name */, gp_in1_3_buf72_FIFO_buf561, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          us83_sm746_01000(gp_in1_3_buf72_FIFO_buf561 /* buf name */, gp_in1_3_buf72_us80, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_3_buf72_us80_to_gp_11397400_sm675_0854(gp_in1_3_buf72_us80 /* buf name */, gp_in1_3_buf72_us80_to_gp_11397, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453, merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_to_gp_28453
	auto merged_1_reconstruct_lp129_buf132_to_gp_28453__lp_1_m_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622__p__0_rp__c____merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_value = merged_1_reconstruct_lp129_buf132_to_gp_28453.read();
	// Produce: merged_1_reconstruct_lp129_buf132_FIFO_buf621
	merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878_write_bundle_write(/* arg names */merged_1_reconstruct_lp129_buf132_to_gp_28453__lp_1_m_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622__p__0_rp__c____merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_value, merged_1_reconstruct_lp129_buf132_FIFO_buf621, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us_merged_1_reconstruct_lp129_buf132144_merged1116(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_FIFO_buf621
	auto merged_1_reconstruct_lp129_buf132_FIFO_buf621_floor_lp__lp_2_m_us_merged_1_reconstruct_lp129_buf132144__p__1_rp___div__2_rp__p_0_c_____floor_lp_us_merged_1_reconstruct_lp129_buf132143__div__2_rp__p_0_value = merged_1_reconstruct_lp129_buf132_FIFO_buf621_us_merged_1_reconstruct_lp129_buf132144_merged1116_read_bundle_read(merged_1_reconstruct_lp129_buf132_FIFO_buf621/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = us_merged_1_reconstruct_lp129_buf132144_cu1115(merged_1_reconstruct_lp129_buf132_FIFO_buf621_floor_lp__lp_2_m_us_merged_1_reconstruct_lp129_buf132144__p__1_rp___div__2_rp__p_0_c_____floor_lp_us_merged_1_reconstruct_lp129_buf132143__div__2_rp__p_0_value);
	// Produce: merged_1_reconstruct_lp129_buf132_us142
	merged_1_reconstruct_lp129_buf132_us142_us_merged_1_reconstruct_lp129_buf132144_merged1116_write_bundle_write(/* arg names */compute_result, merged_1_reconstruct_lp129_buf132_us142, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_us142
	auto merged_1_reconstruct_lp129_buf132_us142__lp_2_m_merged_1_reconstruct_lp129_buf132_us142_ld458__p__1_rp__c____merged_1_reconstruct_lp129_buf132_us142_ld459_value = merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merged_1_reconstruct_lp129_buf132_us142_ld458_cu1074(merged_1_reconstruct_lp129_buf132_us142__lp_2_m_merged_1_reconstruct_lp129_buf132_us142_ld458__p__1_rp__c____merged_1_reconstruct_lp129_buf132_us142_ld459_value);
	// Produce: merged_1_reconstruct_lp129_buf132_us142_to_gp_12457
	merged_1_reconstruct_lp129_buf132_us142_to_gp_12457.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_merged_1_reconstruct_lp129_buf132_us142_ld459_us_merged_1_reconstruct_lp129_buf132143_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453, HWStream<hw_uint<64> >& /* get_args num ports = 2 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_merged_1_reconstruct_lp129_buf132_us142_ld459_us_merged_1_reconstruct_lp129_buf132143__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache merged_1_reconstruct_lp129_buf132_FIFO_buf621;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_1_reconstruct_lp129_buf132_us142_cache merged_1_reconstruct_lp129_buf132_us142;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; us_merged_1_reconstruct_lp129_buf132144_merged1116[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-107 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075(((((-109 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { us_merged_1_reconstruct_lp129_buf132144_merged1116[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for us_merged_1_reconstruct_lp129_buf132144_merged1116(((((-108 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 2061 and 7 <= i2 <= 1030 and i3 <= 109 and 2*floor((i1)/2) >= 107 + i1 - i3 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2061; i1++) {
	    for (int i2 = 7; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_sm682_0878(merged_1_reconstruct_lp129_buf132_to_gp_28453 /* buf name */, merged_1_reconstruct_lp129_buf132_FIFO_buf621, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us_merged_1_reconstruct_lp129_buf132144_merged1116(merged_1_reconstruct_lp129_buf132_FIFO_buf621 /* buf name */, merged_1_reconstruct_lp129_buf132_us142, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          merged_1_reconstruct_lp129_buf132_us142_ld458_merged1075(merged_1_reconstruct_lp129_buf132_us142 /* buf name */, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void us136_sm747_01002(merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_FIFO_buf633
	auto merged_2_reconstruct_lp120_buf123_FIFO_buf633_floor_lp__lp_1_m_us_merged_2_reconstruct_lp120_buf123135__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_merged_2_reconstruct_lp120_buf123134__div__2_rp__p_0_value = merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_sm747_01002_read_bundle_read(merged_2_reconstruct_lp120_buf123_FIFO_buf633/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_reconstruct_lp120_buf123_us133
	merged_2_reconstruct_lp120_buf123_us133_us136_sm747_01002_write_bundle_write(/* arg names */merged_2_reconstruct_lp120_buf123_FIFO_buf633_floor_lp__lp_1_m_us_merged_2_reconstruct_lp120_buf123135__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_merged_2_reconstruct_lp120_buf123134__div__2_rp__p_0_value, merged_2_reconstruct_lp120_buf123_us133, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_to_gp_29465, merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_to_gp_29465
	auto merged_2_reconstruct_lp120_buf123_to_gp_29465__lp_1_m_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634__p__0_rp__c____merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_value = merged_2_reconstruct_lp120_buf123_to_gp_29465.read();
	// Produce: merged_2_reconstruct_lp120_buf123_FIFO_buf633
	merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970_write_bundle_write(/* arg names */merged_2_reconstruct_lp120_buf123_to_gp_29465__lp_1_m_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634__p__0_rp__c____merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_value, merged_2_reconstruct_lp120_buf123_FIFO_buf633, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_us133
	auto merged_2_reconstruct_lp120_buf123_us133__lp_1_m_merged_2_reconstruct_lp120_buf123_us133_ld470__p__0_rp__c____merged_2_reconstruct_lp120_buf123_us133_ld471_value = merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_reconstruct_lp120_buf123_us133_to_gp_13469
	merged_2_reconstruct_lp120_buf123_us133_to_gp_13469.write(merged_2_reconstruct_lp120_buf123_us133__lp_1_m_merged_2_reconstruct_lp120_buf123_us133_ld470__p__0_rp__c____merged_2_reconstruct_lp120_buf123_us133_ld471_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_merged_2_reconstruct_lp120_buf123_us133_ld471_us_merged_2_reconstruct_lp120_buf123134_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_2_reconstruct_lp120_buf123_to_gp_29465, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_merged_2_reconstruct_lp120_buf123_us133_ld471_us_merged_2_reconstruct_lp120_buf123134__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache merged_2_reconstruct_lp120_buf123_FIFO_buf633;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_2_reconstruct_lp120_buf123_us133_cache merged_2_reconstruct_lp120_buf123_us133;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us136_sm747_01002[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 101] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 103] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { us136_sm747_01002[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for us136_sm747_01002(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-102 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 101] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-101 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888[d0 = 0, d1, d2] -> [0, 14 + 2d1, 7 + d2, 103] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-103 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (i1) mod 2 = 0 and 14 <= i1 <= 2060 and 7 <= i2 <= 1030 and 102 <= i3 <= 103; [0, i1, i2, 101] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2060; i1++) {
	    for (int i2 = 7; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_sm718_0970(merged_2_reconstruct_lp120_buf123_to_gp_29465 /* buf name */, merged_2_reconstruct_lp120_buf123_FIFO_buf633, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us136_sm747_01002(merged_2_reconstruct_lp120_buf123_FIFO_buf633 /* buf name */, merged_2_reconstruct_lp120_buf123_us133, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_sm687_0888(merged_2_reconstruct_lp120_buf123_us133 /* buf name */, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void in1_to_gp_3409_ld578_merged1059(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in1_to_gp_3409, in1_FIFO_buf577_cache& in1_FIFO_buf577, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_to_gp_3409
	auto in1_to_gp_3409__lp_2_m_in1_to_gp_3409_ld578__p__1_rp__c____in1_to_gp_3409_ld579_value = in1_to_gp_3409.read();
	auto compute_result = in1_to_gp_3409_ld578_cu1058(in1_to_gp_3409__lp_2_m_in1_to_gp_3409_ld578__p__1_rp__c____in1_to_gp_3409_ld579_value);
	// Produce: in1_FIFO_buf577
	in1_FIFO_buf577_in1_to_gp_3409_ld578_merged1059_write_bundle_write(/* arg names */compute_result, in1_FIFO_buf577, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028(gp_in1_1_buf56_cache& gp_in1_1_buf56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56__lp__lp_1_m_gp_in1_1_buf56_ld362__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_ld363__p__3_rp__value = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028_read_bundle_read(gp_in1_1_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_to_gp_25361
	gp_in1_1_buf56_to_gp_25361.write(gp_in1_1_buf56__lp__lp_1_m_gp_in1_1_buf56_ld362__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_ld363__p__3_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_158_merged306_sm731_0784(in1_FIFO_buf577_cache& in1_FIFO_buf577, gp_in1_1_buf56_cache& gp_in1_1_buf56, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_FIFO_buf577
	auto in1_FIFO_buf577_2_m__lp__lp_1_m_gp_in1_158__p__0_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in1_157__p___m_3_rp___p__1_p_7_value = in1_FIFO_buf577_gp_in1_158_merged306_sm731_0784_read_bundle_read(in1_FIFO_buf577/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_158_cu304(in1_FIFO_buf577_2_m__lp__lp_1_m_gp_in1_158__p__0_rp___p___m_3_rp___p___m_1_p_7_c_________2_m__lp_gp_in1_157__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in1_1_buf56
	gp_in1_1_buf56_gp_in1_158_merged306_sm731_0784_write_bundle_write(/* arg names */compute_result, gp_in1_1_buf56, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850(gp_in1_1_buf56_cache& gp_in1_1_buf56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56__lp__lp_1_m_gp_in1_1_buf56_ld358__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_ld359__p__3_rp__value = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850_read_bundle_read(gp_in1_1_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_to_gp_10357
	gp_in1_1_buf56_to_gp_10357.write(gp_in1_1_buf56__lp__lp_1_m_gp_in1_1_buf56_ld358__p__0_rp___p__3_rp__c_______lp_gp_in1_1_buf56_ld359__p__3_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026(gp_in1_1_buf56_cache& gp_in1_1_buf56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_4365, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56__lp_1_m_gp_in1_1_buf56_ld366__p__0_rp__c____gp_in1_1_buf56_ld367_value = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026_read_bundle_read(gp_in1_1_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_to_gp_4365
	gp_in1_1_buf56_to_gp_4365.write(gp_in1_1_buf56__lp_1_m_gp_in1_1_buf56_ld366__p__0_rp__c____gp_in1_1_buf56_ld367_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_157_gp_in1_1_buf56_ld359_gp_in1_1_buf56_ld363_gp_in1_1_buf56_ld367_in1_to_gp_3409_ld579_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */in1_to_gp_3409, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_4365) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_157_gp_in1_1_buf56_ld359_gp_in1_1_buf56_ld363_gp_in1_1_buf56_ld367_in1_to_gp_3409_ld579__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_cache gp_in1_1_buf56;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in1_FIFO_buf577_cache in1_FIFO_buf577;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029; in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030; load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 14] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029; load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850[d0 = 0, d1, d2] -> [0, 10 + 2d1, 4 + d2, 15] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 13] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { gp_in1_158_merged306_sm731_0784[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 10] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
// Condition for gp_in1_158_merged306_sm731_0784(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { in1_to_gp_3409_ld578_merged1059[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 1030 }
// Condition for in1_to_gp_3409_ld578_merged1059(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 14] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
// Condition for load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850[d0 = 0, d1, d2] -> [0, 10 + 2d1, 4 + d2, 15] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028[d0 = 0, d1, d2] -> [0, 8 + 2d1, 4 + d2, 13] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 5] : 0 <= i1 <= 2054 and 0 <= i2 <= 1030; [0, i1, i2, 15] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 4 <= i2 <= 1027; [0, i1, i2, 14] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 1030; [0, i1, i2, 13] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 4 <= i2 <= 1027; [0, i1, i2, 10] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2056; i1++) {
	    for (int i2 = 0; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          in1_to_gp_3409_ld578_merged1059(in1_to_gp_3409 /* buf name */, in1_FIFO_buf577, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          gp_in1_158_merged306_sm731_0784(in1_FIFO_buf577 /* buf name */, gp_in1_1_buf56, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 4 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 4 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_to_gp_25361364_sm756_01028(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_to_gp_25361, 0, ((-4 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and i2 > 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_to_gp_4365368_sm755_01026(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_to_gp_4365, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 and 4 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 and 4 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_to_gp_10357360_sm673_0850(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_to_gp_10357, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_3_FIFO_buf641644_sm713_0956(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_to_gp_30473, merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_to_gp_30473
	auto merged_3_to_gp_30473__lp_1_m_merged_3_to_gp_30473_ld642__p__0_rp__c____merged_3_to_gp_30473_ld643_value = merged_3_to_gp_30473.read();
	// Produce: merged_3_FIFO_buf641
	merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_sm713_0956_write_bundle_write(/* arg names */merged_3_to_gp_30473__lp_1_m_merged_3_to_gp_30473_ld642__p__0_rp__c____merged_3_to_gp_30473_ld643_value, merged_3_FIFO_buf641, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us127_sm744_0996(merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, merged_3_us124_cache& merged_3_us124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_FIFO_buf641
	auto merged_3_FIFO_buf641_floor_lp__lp_1_m_us_merged_3126__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_merged_3125__div__2_rp__p_0_value = merged_3_FIFO_buf641_us127_sm744_0996_read_bundle_read(merged_3_FIFO_buf641/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_us124
	merged_3_us124_us127_sm744_0996_write_bundle_write(/* arg names */merged_3_FIFO_buf641_floor_lp__lp_1_m_us_merged_3126__p__0_rp___div__2_rp__p_0_c_____floor_lp_us_merged_3125__div__2_rp__p_0_value, merged_3_us124, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_3_us124_to_gp_14477480_sm650_0796(merged_3_us124_cache& merged_3_us124, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_us124_to_gp_14477, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_us124
	auto merged_3_us124__lp_1_m_merged_3_us124_ld478__p__0_rp__c____merged_3_us124_ld479_value = merged_3_us124_load_to_merged_3_us124_to_gp_14477480_sm650_0796_read_bundle_read(merged_3_us124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_us124_to_gp_14477
	merged_3_us124_to_gp_14477.write(merged_3_us124__lp_1_m_merged_3_us124_ld478__p__0_rp__c____merged_3_us124_ld479_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_3_to_gp_30473_ld643_merged_3_us124_ld479_us_merged_3125_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_3_to_gp_30473, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_3_us124_to_gp_14477) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_merged_3_to_gp_30473_ld643_merged_3_us124_ld479_us_merged_3125__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  merged_3_FIFO_buf641_cache merged_3_FIFO_buf641;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  merged_3_us124_cache merged_3_us124;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us127_sm744_0996[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_3_us124_to_gp_14477480_sm650_0796[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 87] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_3_FIFO_buf641644_sm713_0956[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 81] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { us127_sm744_0996[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us127_sm744_0996(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-84 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_merged_3_us124_to_gp_14477480_sm650_0796[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 87] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_3_us124_to_gp_14477480_sm650_0796(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-87 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_merged_3_FIFO_buf641644_sm713_0956[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 81] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_merged_3_FIFO_buf641644_sm713_0956(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-81 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 87] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 84] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 81] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_merged_3_FIFO_buf641644_sm713_0956(merged_3_to_gp_30473 /* buf name */, merged_3_FIFO_buf641, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          us127_sm744_0996(merged_3_FIFO_buf641 /* buf name */, merged_3_us124, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_3_us124_to_gp_14477480_sm650_0796(merged_3_us124 /* buf name */, merged_3_us124_to_gp_14477, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024(gp_in1_2_buf64_cache& gp_in1_2_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_26377, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64__lp__lp_1_m_gp_in1_2_buf64_ld378__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_ld379__p__1_rp__value = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024_read_bundle_read(gp_in1_2_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_to_gp_26377
	gp_in1_2_buf64_to_gp_26377.write(gp_in1_2_buf64__lp__lp_1_m_gp_in1_2_buf64_ld378__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_ld379__p__1_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852(gp_in1_2_buf64_cache& gp_in1_2_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_11373, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64__lp__lp_1_m_gp_in1_2_buf64_ld374__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_ld375__p__1_rp__value = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852_read_bundle_read(gp_in1_2_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_to_gp_11373
	gp_in1_2_buf64_to_gp_11373.write(gp_in1_2_buf64__lp__lp_1_m_gp_in1_2_buf64_ld374__p__0_rp___p__1_rp__c_______lp_gp_in1_2_buf64_ld375__p__1_rp__value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_4365, gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_to_gp_4365
	auto gp_in1_1_buf56_to_gp_4365__lp_1_m_gp_in1_1_buf56_to_gp_4365_ld534__p__0_rp__c____gp_in1_1_buf56_to_gp_4365_ld535_value = gp_in1_1_buf56_to_gp_4365.read();
	// Produce: gp_in1_1_buf56_FIFO_buf533
	gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810_write_bundle_write(/* arg names */gp_in1_1_buf56_to_gp_4365__lp_1_m_gp_in1_1_buf56_to_gp_4365_ld534__p__0_rp__c____gp_in1_1_buf56_to_gp_4365_ld535_value, gp_in1_1_buf56_FIFO_buf533, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_266_merged309_sm733_01052(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, gp_in1_2_buf64_cache& gp_in1_2_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_FIFO_buf533
	auto gp_in1_1_buf56_FIFO_buf533_2_m__lp__lp_1_m_gp_in1_266__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in1_265__p___m_1_rp___p__1_p_3_value = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged309_sm733_01052_read_bundle_read(gp_in1_1_buf56_FIFO_buf533/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_266_cu307(gp_in1_1_buf56_FIFO_buf533_2_m__lp__lp_1_m_gp_in1_266__p__0_rp___p___m_1_rp___p___m_1_p_3_c_________2_m__lp_gp_in1_265__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in1_2_buf64
	gp_in1_2_buf64_gp_in1_266_merged309_sm733_01052_write_bundle_write(/* arg names */compute_result, gp_in1_2_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856(gp_in1_2_buf64_cache& gp_in1_2_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_5381, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64__lp_1_m_gp_in1_2_buf64_ld382__p__0_rp__c____gp_in1_2_buf64_ld383_value = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856_read_bundle_read(gp_in1_2_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_to_gp_5381
	gp_in1_2_buf64_to_gp_5381.write(gp_in1_2_buf64__lp_1_m_gp_in1_2_buf64_ld382__p__0_rp__c____gp_in1_2_buf64_ld383_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_1_buf56_to_gp_4365_ld535_gp_in1_265_gp_in1_2_buf64_ld375_gp_in1_2_buf64_ld379_gp_in1_2_buf64_ld383_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_4365, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_to_gp_11373, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_to_gp_26377, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_to_gp_5381) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_1_buf56_to_gp_4365_ld535_gp_in1_265_gp_in1_2_buf64_ld375_gp_in1_2_buf64_ld379_gp_in1_2_buf64_ld383__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_FIFO_buf533_cache gp_in1_1_buf56_FIFO_buf533;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_cache gp_in1_2_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 47] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029; load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 38] : 0 <= d1 <= 511 and 0 <= d2 <= 511; gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513; load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 46] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
//   { load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 47] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810[d0 = 0, d1, d2] -> [0, 2 + 2d1, 1 + d2, 22] : 0 <= d1 <= 1026 and 0 <= d2 <= 1029 }
// Condition for load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((1030 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852[d0 = 0, d1, d2] -> [0, 10 + 4d1, 5 + 2d2, 38] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in1_266_merged309_sm733_01052[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 33] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
// Condition for gp_in1_266_merged309_sm733_01052(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 46] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
// Condition for load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 <= 2054 and 46 <= i3 <= 47 and 2i3 <= 1121 - i2 and 2i3 <= 89 + i2 and 4i3 <= 178 + i1; [0, i1, i2, 38] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 10 <= i1 <= 2054 and 5 <= i2 <= 1027; [0, i1, i2, 33] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 6 <= i1 <= 2054 and 3 <= i2 <= 1029; [0, i1, i2, 22] : (i1) mod 2 = 0 and 2 <= i1 <= 2054 and 0 < i2 <= 1030 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 2054; i1++) {
	    for (int i2 = 1; i2 <= 1030; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_1_buf56_FIFO_buf533536_sm657_0810(gp_in1_1_buf56_to_gp_4365 /* buf name */, gp_in1_1_buf56_FIFO_buf533, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          gp_in1_266_merged309_sm733_01052(gp_in1_1_buf56_FIFO_buf533 /* buf name */, gp_in1_2_buf64, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_2_buf64_to_gp_11373376_sm674_0852(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_to_gp_11373, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_2_buf64_to_gp_5381384_sm676_0856(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_to_gp_5381, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and i1 >= 10 and 5 <= i2 <= 1027 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	          // { [i0, i1, i2] : 1027 - i2 >= 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_2_buf64_to_gp_26377380_sm754_01024(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_to_gp_26377, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_5381, gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_to_gp_5381
	auto gp_in1_2_buf64_to_gp_5381__lp_1_m_gp_in1_2_buf64_to_gp_5381_ld550__p__0_rp__c____gp_in1_2_buf64_to_gp_5381_ld551_value = gp_in1_2_buf64_to_gp_5381.read();
	// Produce: gp_in1_2_buf64_FIFO_buf549
	gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946_write_bundle_write(/* arg names */gp_in1_2_buf64_to_gp_5381__lp_1_m_gp_in1_2_buf64_to_gp_5381_ld550__p__0_rp__c____gp_in1_2_buf64_to_gp_5381_ld551_value, gp_in1_2_buf64_FIFO_buf549, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_374_merged312_sm734_0764(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, gp_in1_3_buf72_cache& gp_in1_3_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_FIFO_buf549
	auto gp_in1_2_buf64_FIFO_buf549_2_m__lp_1_m_gp_in1_374__p__0_rp___p___m_1_p_1_c_______2_m_gp_in1_373__p__1_p_1_value = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged312_sm734_0764_read_bundle_read(gp_in1_2_buf64_FIFO_buf549/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_374_cu310(gp_in1_2_buf64_FIFO_buf549_2_m__lp_1_m_gp_in1_374__p__0_rp___p___m_1_p_1_c_______2_m_gp_in1_373__p__1_p_1_value);
	// Produce: gp_in1_3_buf72
	gp_in1_3_buf72_gp_in1_374_merged312_sm734_0764_write_bundle_write(/* arg names */compute_result, gp_in1_3_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884(gp_in1_3_buf72_cache& gp_in1_3_buf72, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_27393, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72
	auto gp_in1_3_buf72__lp_1_m_gp_in1_3_buf72_ld394__p__0_rp__c____gp_in1_3_buf72_ld395_value = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884_read_bundle_read(gp_in1_3_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_to_gp_27393
	gp_in1_3_buf72_to_gp_27393.write(gp_in1_3_buf72__lp_1_m_gp_in1_3_buf72_ld394__p__0_rp__c____gp_in1_3_buf72_ld395_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826(gp_in1_3_buf72_cache& gp_in1_3_buf72, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_15389, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72
	auto gp_in1_3_buf72__lp_1_m_gp_in1_3_buf72_ld390__p__0_rp__c____gp_in1_3_buf72_ld391_value = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826_read_bundle_read(gp_in1_3_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_to_gp_15389
	gp_in1_3_buf72_to_gp_15389.write(gp_in1_3_buf72__lp_1_m_gp_in1_3_buf72_ld390__p__0_rp__c____gp_in1_3_buf72_ld391_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_2_buf64_to_gp_5381_ld551_gp_in1_373_gp_in1_3_buf72_ld391_gp_in1_3_buf72_ld395_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_2_buf64_to_gp_5381, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_3_buf72_to_gp_15389, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_3_buf72_to_gp_27393) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_2_buf64_to_gp_5381_ld551_gp_in1_373_gp_in1_3_buf72_ld391_gp_in1_3_buf72_ld395__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_2_buf64_FIFO_buf549_cache gp_in1_2_buf64_FIFO_buf549;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in1_3_buf72_cache gp_in1_3_buf72;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 60] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513; gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 63] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 60] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-60 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946[d0 = 0, d1, d2] -> [0, 6 + 4d1, 3 + 2d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 513 }
// Condition for load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-51 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { gp_in1_374_merged312_sm734_0764[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 55] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for gp_in1_374_merged312_sm734_0764(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-55 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884[d0 = 0, d1, d2] -> [0, 14 + 8d1, 7 + 4d2, 63] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-63 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 63] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 60] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 55] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and 14 <= i1 <= 2054 and 7 <= i2 <= 1027; [0, i1, i2, 51] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 6 <= i1 <= 2054 and 3 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 2054; i1++) {
	    for (int i2 = 3; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_2_buf64_FIFO_buf549552_sm709_0946(gp_in1_2_buf64_to_gp_5381 /* buf name */, gp_in1_2_buf64_FIFO_buf549, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          gp_in1_374_merged312_sm734_0764(gp_in1_2_buf64_FIFO_buf549 /* buf name */, gp_in1_3_buf72, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_3_buf72_to_gp_15389392_sm663_0826(gp_in1_3_buf72 /* buf name */, gp_in1_3_buf72_to_gp_15389, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (1 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -1 - i2 + 4*floor((1 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_3_buf72_to_gp_27393396_sm685_0884(gp_in1_3_buf72 /* buf name */, gp_in1_3_buf72_to_gp_27393, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((1 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void lp_in0_0_buf52_ld418_merged1085(lp_in0_0_buf52_cache& lp_in0_0_buf52, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */lp_in0_0_buf52_to_gp_18417, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52
	auto lp_in0_0_buf52__lp_2_m_lp_in0_0_buf52_ld418__p__1_rp__c____lp_in0_0_buf52_ld419_value = lp_in0_0_buf52_lp_in0_0_buf52_ld418_merged1085_read_bundle_read(lp_in0_0_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in0_0_buf52_ld418_cu1084(lp_in0_0_buf52__lp_2_m_lp_in0_0_buf52_ld418__p__1_rp__c____lp_in0_0_buf52_ld419_value);
	// Produce: lp_in0_0_buf52_to_gp_18417
	lp_in0_0_buf52_to_gp_18417.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */gp_in0_1_buf8_us48_to_gp_6325, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_us48_to_gp_6325
	auto gp_in0_1_buf8_us48_to_gp_6325__lp_2_m_gp_in0_1_buf8_us48_to_gp_6325_ld494__p__1_rp__c____gp_in0_1_buf8_us48_to_gp_6325_ld495_value = gp_in0_1_buf8_us48_to_gp_6325.read();
	auto compute_result = gp_in0_1_buf8_us48_to_gp_6325_ld494_cu1062(gp_in0_1_buf8_us48_to_gp_6325__lp_2_m_gp_in0_1_buf8_us48_to_gp_6325_ld494__p__1_rp__c____gp_in0_1_buf8_us48_to_gp_6325_ld495_value);
	// Produce: gp_in0_1_buf8_us48_FIFO_buf493
	gp_in0_1_buf8_us48_FIFO_buf493_gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063_write_bundle_write(/* arg names */compute_result, gp_in0_1_buf8_us48_FIFO_buf493, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in0_to_gp_6405_ld574_merged1087(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in0_to_gp_6405, in0_FIFO_buf573_cache& in0_FIFO_buf573, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_to_gp_6405
	auto in0_to_gp_6405__lp__lp_2_m_in0_to_gp_6405_ld574__p__1_rp___p__7_rp__c_______lp_in0_to_gp_6405_ld575__p__7_rp__value = in0_to_gp_6405.read();
	auto compute_result = in0_to_gp_6405_ld574_cu1086(in0_to_gp_6405__lp__lp_2_m_in0_to_gp_6405_ld574__p__1_rp___p__7_rp__c_______lp_in0_to_gp_6405_ld575__p__7_rp__value);
	// Produce: in0_FIFO_buf573
	in0_FIFO_buf573_in0_to_gp_6405_ld574_merged1087_write_bundle_write(/* arg names */compute_result, in0_FIFO_buf573, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in0_054_merged1103(gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, in0_FIFO_buf573_cache& in0_FIFO_buf573, lp_in0_0_buf52_cache& lp_in0_0_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_us48_FIFO_buf493
	auto gp_in0_1_buf8_us48_FIFO_buf493__lp_2_m_lp_in0_054__p__1_rp__p_0_c_____lp_in0_053_p_0_value = gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_merged1103_read_bundle_read(gp_in0_1_buf8_us48_FIFO_buf493/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: in0_FIFO_buf573
	auto in0_FIFO_buf573__lp_2_m_lp_in0_054__p__1_rp__p_7_c_____lp_in0_053_p_7_value = in0_FIFO_buf573_lp_in0_054_merged1103_read_bundle_read(in0_FIFO_buf573/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in0_054_cu1101(gp_in0_1_buf8_us48_FIFO_buf493__lp_2_m_lp_in0_054__p__1_rp__p_0_c_____lp_in0_053_p_0_value, in0_FIFO_buf573__lp_2_m_lp_in0_054__p__1_rp__p_7_c_____lp_in0_053_p_7_value);
	// Produce: lp_in0_0_buf52
	lp_in0_0_buf52_lp_in0_054_merged1103_write_bundle_write(/* arg names */compute_result, lp_in0_0_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_1_buf8_us48_to_gp_6325_ld495_in0_to_gp_6405_ld575_lp_in0_053_lp_in0_0_buf52_ld419_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */gp_in0_1_buf8_us48_to_gp_6325, HWStream<hw_uint<64> >& /* get_args num ports = 2 */in0_to_gp_6405, HWStream<hw_uint<64> >& /* get_args num ports = 2 */lp_in0_0_buf52_to_gp_18417) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_1_buf8_us48_to_gp_6325_ld495_in0_to_gp_6405_ld575_lp_in0_053_lp_in0_0_buf52_ld419__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_us48_FIFO_buf493_cache gp_in0_1_buf8_us48_FIFO_buf493;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in0_FIFO_buf573_cache in0_FIFO_buf573;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in0_0_buf52_cache lp_in0_0_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in0_to_gp_6405_ld574_merged1087[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 9] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; lp_in0_0_buf52_ld418_merged1085[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 42] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 34] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { in0_to_gp_6405_ld574_merged1087[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 9] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for in0_to_gp_6405_ld574_merged1087(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { lp_in0_0_buf52_ld418_merged1085[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 42] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for lp_in0_0_buf52_ld418_merged1085(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 34] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { lp_in0_054_merged1103[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 39] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for lp_in0_054_merged1103(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 42] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 39] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 34] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 9] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 4; i2 <= 1027; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in0_to_gp_6405_ld574_merged1087(in0_to_gp_6405 /* buf name */, in0_FIFO_buf573, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          gp_in0_1_buf8_us48_to_gp_6325_ld494_merged1063(gp_in0_1_buf8_us48_to_gp_6325 /* buf name */, gp_in0_1_buf8_us48_FIFO_buf493, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          lp_in0_054_merged1103(gp_in0_1_buf8_us48_FIFO_buf493 /* buf name */, in0_FIFO_buf573 /* buf name */, lp_in0_0_buf52, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          lp_in0_0_buf52_ld418_merged1085(lp_in0_0_buf52 /* buf name */, lp_in0_0_buf52_to_gp_18417, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_us40_to_gp_7341, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_us40_to_gp_7341
	auto gp_in0_2_buf16_us40_to_gp_7341__lp_1_m_gp_in0_2_buf16_us40_to_gp_7341_ld510__p__0_rp__c____gp_in0_2_buf16_us40_to_gp_7341_ld511_value = gp_in0_2_buf16_us40_to_gp_7341.read();
	// Produce: gp_in0_2_buf16_us40_FIFO_buf509
	gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928_write_bundle_write(/* arg names */gp_in0_2_buf16_us40_to_gp_7341__lp_1_m_gp_in0_2_buf16_us40_to_gp_7341_ld510__p__0_rp__c____gp_in0_2_buf16_us40_to_gp_7341_ld511_value, gp_in0_2_buf16_us40_FIFO_buf509, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff47_sm725_01054(gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, lp_in0_1_buf44_cache& lp_in0_1_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_FIFO_buf489
	auto gp_in0_1_buf8_FIFO_buf489__lp_1_m_lp_in0_146__p__0_rp__p_3_c_____lp_in0_145_p_3_value = gp_in0_1_buf8_FIFO_buf489_diff47_sm725_01054_read_bundle_read(gp_in0_1_buf8_FIFO_buf489/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_2_buf16_us40_FIFO_buf509
	auto gp_in0_2_buf16_us40_FIFO_buf509__lp_1_m_lp_in0_146__p__0_rp__p_0_c_____lp_in0_145_p_0_value = gp_in0_2_buf16_us40_FIFO_buf509_diff47_sm725_01054_read_bundle_read(gp_in0_2_buf16_us40_FIFO_buf509/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489__lp_1_m_lp_in0_146__p__0_rp__p_3_c_____lp_in0_145_p_3_value, gp_in0_2_buf16_us40_FIFO_buf509__lp_1_m_lp_in0_146__p__0_rp__p_0_c_____lp_in0_145_p_0_value);
	// Produce: lp_in0_1_buf44
	lp_in0_1_buf44_diff47_sm725_01054_write_bundle_write(/* arg names */compute_result, lp_in0_1_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_7321, gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_to_gp_7321
	auto gp_in0_1_buf8_to_gp_7321__lp__lp_1_m_gp_in0_1_buf8_to_gp_7321_ld490__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_to_gp_7321_ld491__p__3_rp__value = gp_in0_1_buf8_to_gp_7321.read();
	// Produce: gp_in0_1_buf8_FIFO_buf489
	gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880_write_bundle_write(/* arg names */gp_in0_1_buf8_to_gp_7321__lp__lp_1_m_gp_in0_1_buf8_to_gp_7321_ld490__p__0_rp___p__3_rp__c_______lp_gp_in0_1_buf8_to_gp_7321_ld491__p__3_rp__value, gp_in0_1_buf8_FIFO_buf489, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912(lp_in0_1_buf44_cache& lp_in0_1_buf44, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_1_buf44_to_gp_19421, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44
	auto lp_in0_1_buf44__lp_1_m_lp_in0_1_buf44_ld422__p__0_rp__c____lp_in0_1_buf44_ld423_value = lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912_read_bundle_read(lp_in0_1_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in0_1_buf44_to_gp_19421
	lp_in0_1_buf44_to_gp_19421.write(lp_in0_1_buf44__lp_1_m_lp_in0_1_buf44_ld422__p__0_rp__c____lp_in0_1_buf44_ld423_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_1_buf8_to_gp_7321_ld491_gp_in0_2_buf16_us40_to_gp_7341_ld511_lp_in0_145_lp_in0_1_buf44_ld423_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_7321, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_us40_to_gp_7341, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in0_1_buf44_to_gp_19421) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_1_buf8_to_gp_7321_ld491_gp_in0_2_buf16_us40_to_gp_7341_ld511_lp_in0_145_lp_in0_1_buf44_ld423__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_1_buf8_FIFO_buf489_cache gp_in0_1_buf8_FIFO_buf489;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_us40_FIFO_buf509_cache gp_in0_2_buf16_us40_FIFO_buf509;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in0_1_buf44_cache lp_in0_1_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 68] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880[d0 = 0, d1, d2] -> [0, 8 + 2d1, 5 + d2, 28] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 62] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; diff47_sm725_01054[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 68] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-68 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880[d0 = 0, d1, d2] -> [0, 8 + 2d1, 5 + d2, 28] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 62] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-62 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))
//   { diff47_sm725_01054[d0 = 0, d1, d2] -> [0, 10 + 2d1, 5 + d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for diff47_sm725_01054(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-66 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((1028 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 68] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 66] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 62] : (i1) mod 2 = 0 and 10 <= i1 <= 2056 and 5 <= i2 <= 1028; [0, i1, i2, 28] : (i1) mod 2 = 0 and 8 <= i1 <= 2054 and 5 <= i2 <= 1028 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2056; i1++) {
	    for (int i2 = 5; i2 <= 1028; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 <= 2054 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 <= 2054 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2054 + -1*i1)) >= 0)))) {
	          load_to_gp_in0_1_buf8_FIFO_buf489492_sm683_0880(gp_in0_1_buf8_to_gp_7321 /* buf name */, gp_in0_1_buf8_FIFO_buf489, 0, ((-4 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0)))) {
	          load_to_gp_in0_2_buf16_us40_FIFO_buf509512_sm702_0928(gp_in0_2_buf16_us40_to_gp_7341 /* buf name */, gp_in0_2_buf16_us40_FIFO_buf509, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0)))) {
	          diff47_sm725_01054(gp_in0_1_buf8_FIFO_buf489 /* buf name */, gp_in0_2_buf16_us40_FIFO_buf509 /* buf name */, lp_in0_1_buf44, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and i1 >= 10 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	        if ((((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0)))) {
	          load_to_lp_in0_1_buf44_to_gp_19421424_sm696_0912(lp_in0_1_buf44 /* buf name */, lp_in0_1_buf44_to_gp_19421, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_us32_to_gp_8353, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_us32_to_gp_8353
	auto gp_in0_3_buf24_us32_to_gp_8353__lp_1_m_gp_in0_3_buf24_us32_to_gp_8353_ld522__p__0_rp__c____gp_in0_3_buf24_us32_to_gp_8353_ld523_value = gp_in0_3_buf24_us32_to_gp_8353.read();
	// Produce: gp_in0_3_buf24_us32_FIFO_buf521
	gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032_write_bundle_write(/* arg names */gp_in0_3_buf24_us32_to_gp_8353__lp_1_m_gp_in0_3_buf24_us32_to_gp_8353_ld522__p__0_rp__c____gp_in0_3_buf24_us32_to_gp_8353_ld523_value, gp_in0_3_buf24_us32_FIFO_buf521, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892(lp_in0_2_buf36_cache& lp_in0_2_buf36, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_2_buf36_to_gp_20425, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36
	auto lp_in0_2_buf36__lp_1_m_lp_in0_2_buf36_ld426__p__0_rp__c____lp_in0_2_buf36_ld427_value = lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892_read_bundle_read(lp_in0_2_buf36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in0_2_buf36_to_gp_20425
	lp_in0_2_buf36_to_gp_20425.write(lp_in0_2_buf36__lp_1_m_lp_in0_2_buf36_ld426__p__0_rp__c____lp_in0_2_buf36_ld427_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff39_sm726_01056(gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, lp_in0_2_buf36_cache& lp_in0_2_buf36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_FIFO_buf505
	auto gp_in0_2_buf16_FIFO_buf505__lp_1_m_lp_in0_238__p__0_rp__p_1_c_____lp_in0_237_p_1_value = gp_in0_2_buf16_FIFO_buf505_diff39_sm726_01056_read_bundle_read(gp_in0_2_buf16_FIFO_buf505/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_3_buf24_us32_FIFO_buf521
	auto gp_in0_3_buf24_us32_FIFO_buf521__lp_1_m_lp_in0_238__p__0_rp__p_0_c_____lp_in0_237_p_0_value = gp_in0_3_buf24_us32_FIFO_buf521_diff39_sm726_01056_read_bundle_read(gp_in0_3_buf24_us32_FIFO_buf521/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505__lp_1_m_lp_in0_238__p__0_rp__p_1_c_____lp_in0_237_p_1_value, gp_in0_3_buf24_us32_FIFO_buf521__lp_1_m_lp_in0_238__p__0_rp__p_0_c_____lp_in0_237_p_0_value);
	// Produce: lp_in0_2_buf36
	lp_in0_2_buf36_diff39_sm726_01056_write_bundle_write(/* arg names */compute_result, lp_in0_2_buf36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_8337, gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_to_gp_8337
	auto gp_in0_2_buf16_to_gp_8337__lp__lp_1_m_gp_in0_2_buf16_to_gp_8337_ld506__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_to_gp_8337_ld507__p__1_rp__value = gp_in0_2_buf16_to_gp_8337.read();
	// Produce: gp_in0_2_buf16_FIFO_buf505
	gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800_write_bundle_write(/* arg names */gp_in0_2_buf16_to_gp_8337__lp__lp_1_m_gp_in0_2_buf16_to_gp_8337_ld506__p__0_rp___p__1_rp__c_______lp_gp_in0_2_buf16_to_gp_8337_ld507__p__1_rp__value, gp_in0_2_buf16_FIFO_buf505, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_2_buf16_to_gp_8337_ld507_gp_in0_3_buf24_us32_to_gp_8353_ld523_lp_in0_237_lp_in0_2_buf36_ld427_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_2_buf16_to_gp_8337, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_3_buf24_us32_to_gp_8353, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in0_2_buf36_to_gp_20425) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in0_2_buf16_to_gp_8337_ld507_gp_in0_3_buf24_us32_to_gp_8353_ld523_lp_in0_237_lp_in0_2_buf36_ld427__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in0_2_buf16_FIFO_buf505_cache gp_in0_2_buf16_FIFO_buf505;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in0_3_buf24_us32_FIFO_buf521_cache gp_in0_3_buf24_us32_FIFO_buf521;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in0_2_buf36_cache lp_in0_2_buf36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 36] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511; diff39_sm726_01056[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 90] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 36] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-78 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { diff39_sm726_01056[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for diff39_sm726_01056(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-85 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))
//   { load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892[d0 = 0, d1, d2] -> [0, 14 + 4d1, 7 + 2d2, 90] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-90 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((1029 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 90] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 85] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 78] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029; [0, i1, i2, 36] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 and 14 <= i1 <= 2058 and 7 <= i2 <= 1029 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 7; i2 <= 1029; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_2_buf16_FIFO_buf505508_sm652_0800(gp_in0_2_buf16_to_gp_8337 /* buf name */, gp_in0_2_buf16_FIFO_buf505, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_3_buf24_us32_FIFO_buf521524_sm758_01032(gp_in0_3_buf24_us32_to_gp_8353 /* buf name */, gp_in0_3_buf24_us32_FIFO_buf521, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          diff39_sm726_01056(gp_in0_2_buf16_FIFO_buf505 /* buf name */, gp_in0_3_buf24_us32_FIFO_buf521 /* buf name */, lp_in0_2_buf36, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (1 + i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -1 - i2 + 2*floor((1 + i2)/2) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in0_2_buf36_to_gp_20425428_sm689_0892(lp_in0_2_buf36 /* buf name */, lp_in0_2_buf36_to_gp_20425, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((1 + 1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void in1_to_gp_9413_ld582_merged1065(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */in1_to_gp_9413, in1_FIFO_buf581_cache& in1_FIFO_buf581, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_to_gp_9413
	auto in1_to_gp_9413__lp__lp_2_m_in1_to_gp_9413_ld582__p__1_rp___p__7_rp__c_______lp_in1_to_gp_9413_ld583__p__7_rp__value = in1_to_gp_9413.read();
	auto compute_result = in1_to_gp_9413_ld582_cu1064(in1_to_gp_9413__lp__lp_2_m_in1_to_gp_9413_ld582__p__1_rp___p__7_rp__c_______lp_in1_to_gp_9413_ld583__p__7_rp__value);
	// Produce: in1_FIFO_buf581
	in1_FIFO_buf581_in1_to_gp_9413_ld582_merged1065_write_bundle_write(/* arg names */compute_result, in1_FIFO_buf581, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077(HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */gp_in1_1_buf56_us96_to_gp_9369, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_us96_to_gp_9369
	auto gp_in1_1_buf56_us96_to_gp_9369__lp_2_m_gp_in1_1_buf56_us96_to_gp_9369_ld538__p__1_rp__c____gp_in1_1_buf56_us96_to_gp_9369_ld539_value = gp_in1_1_buf56_us96_to_gp_9369.read();
	auto compute_result = gp_in1_1_buf56_us96_to_gp_9369_ld538_cu1076(gp_in1_1_buf56_us96_to_gp_9369__lp_2_m_gp_in1_1_buf56_us96_to_gp_9369_ld538__p__1_rp__c____gp_in1_1_buf56_us96_to_gp_9369_ld539_value);
	// Produce: gp_in1_1_buf56_us96_FIFO_buf537
	gp_in1_1_buf56_us96_FIFO_buf537_gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077_write_bundle_write(/* arg names */compute_result, gp_in1_1_buf56_us96_FIFO_buf537, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in1_0102_merged1111(gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, in1_FIFO_buf581_cache& in1_FIFO_buf581, lp_in1_0_buf100_cache& lp_in1_0_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_us96_FIFO_buf537
	auto gp_in1_1_buf56_us96_FIFO_buf537__lp_2_m_lp_in1_0102__p__1_rp__p_0_c_____lp_in1_0101_p_0_value = gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_merged1111_read_bundle_read(gp_in1_1_buf56_us96_FIFO_buf537/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: in1_FIFO_buf581
	auto in1_FIFO_buf581__lp_2_m_lp_in1_0102__p__1_rp__p_7_c_____lp_in1_0101_p_7_value = in1_FIFO_buf581_lp_in1_0102_merged1111_read_bundle_read(in1_FIFO_buf581/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in1_0102_cu1109(gp_in1_1_buf56_us96_FIFO_buf537__lp_2_m_lp_in1_0102__p__1_rp__p_0_c_____lp_in1_0101_p_0_value, in1_FIFO_buf581__lp_2_m_lp_in1_0102__p__1_rp__p_7_c_____lp_in1_0101_p_7_value);
	// Produce: lp_in1_0_buf100
	lp_in1_0_buf100_lp_in1_0102_merged1111_write_bundle_write(/* arg names */compute_result, lp_in1_0_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void lp_in1_0_buf100_ld430_merged1083(lp_in1_0_buf100_cache& lp_in1_0_buf100, HWStream<hw_uint<64> >& /* buffer_args num ports = 2 */lp_in1_0_buf100_to_gp_18429, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_0_buf100
	auto lp_in1_0_buf100__lp_2_m_lp_in1_0_buf100_ld430__p__1_rp__c____lp_in1_0_buf100_ld431_value = lp_in1_0_buf100_lp_in1_0_buf100_ld430_merged1083_read_bundle_read(lp_in1_0_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = lp_in1_0_buf100_ld430_cu1082(lp_in1_0_buf100__lp_2_m_lp_in1_0_buf100_ld430__p__1_rp__c____lp_in1_0_buf100_ld431_value);
	// Produce: lp_in1_0_buf100_to_gp_18429
	lp_in1_0_buf100_to_gp_18429.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_1_buf56_us96_to_gp_9369_ld539_in1_to_gp_9413_ld583_lp_in1_0101_lp_in1_0_buf100_ld431_(HWStream<hw_uint<64> >& /* get_args num ports = 2 */gp_in1_1_buf56_us96_to_gp_9369, HWStream<hw_uint<64> >& /* get_args num ports = 2 */in1_to_gp_9413, HWStream<hw_uint<64> >& /* get_args num ports = 2 */lp_in1_0_buf100_to_gp_18429) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in1_1_buf56_us96_to_gp_9369_ld539_in1_to_gp_9413_ld583_lp_in1_0101_lp_in1_0_buf100_ld431__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in1_1_buf56_us96_FIFO_buf537_cache gp_in1_1_buf56_us96_FIFO_buf537;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in1_FIFO_buf581_cache in1_FIFO_buf581;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in1_0_buf100_cache lp_in1_0_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { lp_in1_0_buf100_ld430_merged1083[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023; in1_to_gp_9413_ld582_merged1065[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
//   { lp_in1_0_buf100_ld430_merged1083[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for lp_in1_0_buf100_ld430_merged1083(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { lp_in1_0102_merged1111[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for lp_in1_0102_merged1111(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))
//   { in1_to_gp_9413_ld582_merged1065[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 7] : 0 <= d1 <= 2047 and 0 <= d2 <= 1023 }
// Condition for in1_to_gp_9413_ld582_merged1065(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1027 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 44] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 40] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 35] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027; [0, i1, i2, 7] : 8 <= i1 <= 2055 and 4 <= i2 <= 1027 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 4; i2 <= 1027; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in1_to_gp_9413_ld582_merged1065(in1_to_gp_9413 /* buf name */, in1_FIFO_buf581, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          gp_in1_1_buf56_us96_to_gp_9369_ld538_merged1077(gp_in1_1_buf56_us96_to_gp_9369 /* buf name */, gp_in1_1_buf56_us96_FIFO_buf537, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          lp_in1_0102_merged1111(gp_in1_1_buf56_us96_FIFO_buf537 /* buf name */, in1_FIFO_buf581 /* buf name */, lp_in1_0_buf100, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          lp_in1_0_buf100_ld430_merged1083(lp_in1_0_buf100 /* buf name */, lp_in1_0_buf100_to_gp_18429, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void two_in_blnd_d_2(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */in0_oc, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */in1_oc, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("two_in_blnd_d_2_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<64> > in0_to_gp_0401;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in0_to_gp_0401.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_1_buf8_to_gp_1313;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_1_buf8_to_gp_1313.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_1_buf8_to_gp_22317;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_1_buf8_to_gp_22317.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_1_buf8_to_gp_7321;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_1_buf8_to_gp_7321.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_2_buf16_to_gp_2329;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_2_buf16_to_gp_2329.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_2_buf16_to_gp_23333;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_2_buf16_to_gp_23333.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_2_buf16_to_gp_8337;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_2_buf16_to_gp_8337.values depth=1013
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_1_buf56_to_gp_10357;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_1_buf56_to_gp_10357.values depth=501
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_2_buf64_us88_to_gp_10385;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_2_buf64_us88_to_gp_10385.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in1_1_buf92_to_gp_19433;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in1_1_buf92_to_gp_19433.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_2_buf64_to_gp_11373;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_2_buf64_to_gp_11373.values depth=1013
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_3_buf72_us80_to_gp_11397;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_3_buf72_us80_to_gp_11397.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in1_2_buf84_to_gp_20437;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in1_2_buf84_to_gp_20437.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > merged_0_to_gp_12441;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_0_to_gp_12441.values depth=6647
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > merged_1_reconstruct_lp129_buf132_us142_to_gp_12457;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_1_reconstruct_lp129_buf132_us142_to_gp_12457.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > merged_0_reconstruct_lp138_buf141_to_gp_21445;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_0_reconstruct_lp138_buf141_to_gp_21445.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_1_to_gp_13449;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_1_to_gp_13449.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_2_reconstruct_lp120_buf123_us133_to_gp_13469;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_2_reconstruct_lp120_buf123_us133_to_gp_13469.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_1_reconstruct_lp129_buf132_to_gp_28453;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_1_reconstruct_lp129_buf132_to_gp_28453.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_2_to_gp_14461;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_2_to_gp_14461.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_3_us124_to_gp_14477;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_3_us124_to_gp_14477.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_2_reconstruct_lp120_buf123_to_gp_29465;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_2_reconstruct_lp120_buf123_to_gp_29465.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_3_buf24_to_gp_15345;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_3_buf24_to_gp_15345.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_3_buf72_to_gp_15389;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_3_buf72_to_gp_15389.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_3_to_gp_30473;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_3_to_gp_30473.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > in0_to_gp_6405;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in0_to_gp_6405.values depth=1524
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > in1_to_gp_3409;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in1_to_gp_3409.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > in1_to_gp_9413;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in1_to_gp_9413.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > lp_in0_0_buf52_to_gp_18417;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in0_0_buf52_to_gp_18417.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > lp_in1_0_buf100_to_gp_18429;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in1_0_buf100_to_gp_18429.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in0_1_buf44_to_gp_19421;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in0_1_buf44_to_gp_19421.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_3_buf24_to_gp_24349;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_3_buf24_to_gp_24349.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in0_2_buf36_to_gp_20425;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in0_2_buf36_to_gp_20425.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > gp_in0_1_buf8_us48_to_gp_6325;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_1_buf8_us48_to_gp_6325.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_2_buf16_us40_to_gp_7341;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_2_buf16_us40_to_gp_7341.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in0_3_buf24_us32_to_gp_8353;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in0_3_buf24_us32_to_gp_8353.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_1_buf56_to_gp_25361;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_1_buf56_to_gp_25361.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<64> > gp_in1_1_buf56_us96_to_gp_9369;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_1_buf56_us96_to_gp_9369.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_2_buf64_to_gp_26377;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_2_buf64_to_gp_26377.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_3_buf72_to_gp_27393;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_3_buf72_to_gp_27393.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_1_buf56_to_gp_4365;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_1_buf56_to_gp_4365.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_2_buf64_to_gp_5381;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_2_buf64_to_gp_5381.values depth=500
#endif //__VIVADO_SYNTH__


  Extracted_in0_ld403_in0_ld407_pw_math_in0_oc01_(in0_oc, in0_to_gp_0401, in0_to_gp_6405);
  Extracted_in1_ld411_in1_ld415_pw_math_in1_oc45_(in1_oc, in1_to_gp_3409, in1_to_gp_9413);
  Extracted_gp_in1_157_gp_in1_1_buf56_ld359_gp_in1_1_buf56_ld363_gp_in1_1_buf56_ld367_in1_to_gp_3409_ld579_(in1_to_gp_3409, gp_in1_1_buf56_to_gp_10357, gp_in1_1_buf56_to_gp_25361, gp_in1_1_buf56_to_gp_4365);
  Extracted_gp_in1_1_buf56_to_gp_4365_ld535_gp_in1_265_gp_in1_2_buf64_ld375_gp_in1_2_buf64_ld379_gp_in1_2_buf64_ld383_(gp_in1_1_buf56_to_gp_4365, gp_in1_2_buf64_to_gp_11373, gp_in1_2_buf64_to_gp_26377, gp_in1_2_buf64_to_gp_5381);
  Extracted_gp_in1_2_buf64_to_gp_5381_ld551_gp_in1_373_gp_in1_3_buf72_ld391_gp_in1_3_buf72_ld395_(gp_in1_2_buf64_to_gp_5381, gp_in1_3_buf72_to_gp_15389, gp_in1_3_buf72_to_gp_27393);
  Extracted_gp_in0_19_gp_in0_1_buf8_ld315_gp_in0_1_buf8_ld319_gp_in0_1_buf8_ld323_in0_to_gp_0401_ld571_(in0_to_gp_0401, gp_in0_1_buf8_to_gp_1313, gp_in0_1_buf8_to_gp_22317, gp_in0_1_buf8_to_gp_7321);
  Extracted_gp_in0_1_buf8_to_gp_1313_ld483_gp_in0_217_gp_in0_2_buf16_ld331_gp_in0_2_buf16_ld335_gp_in0_2_buf16_ld339_(gp_in0_1_buf8_to_gp_1313, gp_in0_2_buf16_to_gp_2329, gp_in0_2_buf16_to_gp_23333, gp_in0_2_buf16_to_gp_8337);
  Extracted_gp_in0_2_buf16_to_gp_2329_ld499_gp_in0_325_gp_in0_3_buf24_ld347_gp_in0_3_buf24_ld351_(gp_in0_2_buf16_to_gp_2329, gp_in0_3_buf24_to_gp_15345, gp_in0_3_buf24_to_gp_24349);
  Extracted_gp_in0_1_buf8_to_gp_22317_ld487_gp_in0_1_buf8_us48_ld327_us_gp_in0_1_buf849_(gp_in0_1_buf8_to_gp_22317, gp_in0_1_buf8_us48_to_gp_6325);
  Extracted_gp_in0_2_buf16_to_gp_23333_ld503_gp_in0_2_buf16_us40_ld343_us_gp_in0_2_buf1641_(gp_in0_2_buf16_to_gp_23333, gp_in0_2_buf16_us40_to_gp_7341);
  Extracted_gp_in0_3_buf24_to_gp_24349_ld519_gp_in0_3_buf24_us32_ld355_us_gp_in0_3_buf2433_(gp_in0_3_buf24_to_gp_24349, gp_in0_3_buf24_us32_to_gp_8353);
  Extracted_gp_in1_1_buf56_to_gp_25361_ld531_gp_in1_1_buf56_us96_ld371_us_gp_in1_1_buf5697_(gp_in1_1_buf56_to_gp_25361, gp_in1_1_buf56_us96_to_gp_9369);
  Extracted_gp_in1_2_buf64_to_gp_26377_ld547_gp_in1_2_buf64_us88_ld387_us_gp_in1_2_buf6489_(gp_in1_2_buf64_to_gp_26377, gp_in1_2_buf64_us88_to_gp_10385);
  Extracted_gp_in1_3_buf72_to_gp_27393_ld563_gp_in1_3_buf72_us80_ld399_us_gp_in1_3_buf7281_(gp_in1_3_buf72_to_gp_27393, gp_in1_3_buf72_us80_to_gp_11397);
  Extracted_gp_in0_1_buf8_us48_to_gp_6325_ld495_in0_to_gp_6405_ld575_lp_in0_053_lp_in0_0_buf52_ld419_(gp_in0_1_buf8_us48_to_gp_6325, in0_to_gp_6405, lp_in0_0_buf52_to_gp_18417);
  Extracted_gp_in0_1_buf8_to_gp_7321_ld491_gp_in0_2_buf16_us40_to_gp_7341_ld511_lp_in0_145_lp_in0_1_buf44_ld423_(gp_in0_1_buf8_to_gp_7321, gp_in0_2_buf16_us40_to_gp_7341, lp_in0_1_buf44_to_gp_19421);
  Extracted_gp_in0_2_buf16_to_gp_8337_ld507_gp_in0_3_buf24_us32_to_gp_8353_ld523_lp_in0_237_lp_in0_2_buf36_ld427_(gp_in0_2_buf16_to_gp_8337, gp_in0_3_buf24_us32_to_gp_8353, lp_in0_2_buf36_to_gp_20425);
  Extracted_gp_in1_1_buf56_us96_to_gp_9369_ld539_in1_to_gp_9413_ld583_lp_in1_0101_lp_in1_0_buf100_ld431_(gp_in1_1_buf56_us96_to_gp_9369, in1_to_gp_9413, lp_in1_0_buf100_to_gp_18429);
  Extracted_gp_in1_1_buf56_to_gp_10357_ld527_gp_in1_2_buf64_us88_to_gp_10385_ld555_lp_in1_193_lp_in1_1_buf92_ld435_(gp_in1_1_buf56_to_gp_10357, gp_in1_2_buf64_us88_to_gp_10385, lp_in1_1_buf92_to_gp_19433);
  Extracted_gp_in1_2_buf64_to_gp_11373_ld543_gp_in1_3_buf72_us80_to_gp_11397_ld567_lp_in1_285_lp_in1_2_buf84_ld439_(gp_in1_2_buf64_to_gp_11373, gp_in1_3_buf72_us80_to_gp_11397, lp_in1_2_buf84_to_gp_20437);
  Extracted_gp_in0_3_buf24_to_gp_15345_ld515_gp_in1_3_buf72_to_gp_15389_ld559_merged_3_ld475_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_(gp_in0_3_buf24_to_gp_15345, gp_in1_3_buf72_to_gp_15389, merged_3_to_gp_30473);
  Extracted_lp_in0_0_buf52_to_gp_18417_ld587_lp_in1_0_buf100_to_gp_18429_ld599_merged_0_ld443_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_(lp_in0_0_buf52_to_gp_18417, lp_in1_0_buf100_to_gp_18429, merged_0_to_gp_12441);
  Extracted_lp_in0_1_buf44_to_gp_19421_ld591_lp_in1_1_buf92_to_gp_19433_ld603_merged_1_ld451_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_(lp_in0_1_buf44_to_gp_19421, lp_in1_1_buf92_to_gp_19433, merged_1_to_gp_13449);
  Extracted_lp_in0_2_buf36_to_gp_20425_ld595_lp_in1_2_buf84_to_gp_20437_ld607_merged_2_ld463_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_(lp_in0_2_buf36_to_gp_20425, lp_in1_2_buf84_to_gp_20437, merged_2_to_gp_14461);
  Extracted_merged_3_to_gp_30473_ld643_merged_3_us124_ld479_us_merged_3125_(merged_3_to_gp_30473, merged_3_us124_to_gp_14477);
  Extracted_merged_2_reconstruct_lp120121_merged_2_reconstruct_lp120_buf123_ld467_merged_2_to_gp_14461_ld631_merged_3_us124_to_gp_14477_ld647_(merged_2_to_gp_14461, merged_3_us124_to_gp_14477, merged_2_reconstruct_lp120_buf123_to_gp_29465);
  Extracted_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_merged_2_reconstruct_lp120_buf123_us133_ld471_us_merged_2_reconstruct_lp120_buf123134_(merged_2_reconstruct_lp120_buf123_to_gp_29465, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469);
  Extracted_merged_1_reconstruct_lp129130_merged_1_reconstruct_lp129_buf132_ld455_merged_1_to_gp_13449_ld619_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639_(merged_1_to_gp_13449, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, merged_1_reconstruct_lp129_buf132_to_gp_28453);
  Extracted_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_merged_1_reconstruct_lp129_buf132_us142_ld459_us_merged_1_reconstruct_lp129_buf132143_(merged_1_reconstruct_lp129_buf132_to_gp_28453, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457);
  Extracted_merged_0_reconstruct_lp138139_merged_0_reconstruct_lp138_buf141_ld447_merged_0_to_gp_12441_ld611_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_(merged_0_to_gp_12441, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, merged_0_reconstruct_lp138_buf141_to_gp_21445);
  Extracted_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_pw_math_merged_0_reconstruct_lp138_buf141147148_(merged_0_reconstruct_lp138_buf141_to_gp_21445, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void two_in_blnd_d_2_wrapper(HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */in0_oc, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */in1_oc, HWStream<hw_uint<64> >& /* no bundle get_args num ports = 2 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    two_in_blnd_d_2(in0_oc, in1_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in0_oc02_merged1098[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[1 + 2pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 1030; pw_math_in0_oc02_merged1098[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[2pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 1030 }
const int pw_math_in0_oc02_merged1098_read_pipe0_num_transfers = 2118705;
  // { pw_math_in1_oc46_merged1106[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[1 + 2pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 1030; pw_math_in1_oc46_merged1106[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[2pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 1030 }
const int pw_math_in1_oc46_merged1106_read_pipe0_num_transfers = 2118705;
  // { pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[1 + 2pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 1023; pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[2pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 1023 }
const int pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0_num_transfers = 2097152;


extern "C" {

void two_in_blnd_d_2_accel(hw_uint<64>* pw_math_in0_oc02_merged1098_read_pipe0, hw_uint<64>* pw_math_in1_oc46_merged1106_read_pipe0, hw_uint<64>* pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in0_oc02_merged1098_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_in1_oc46_merged1106_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = pw_math_in0_oc02_merged1098_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_in1_oc46_merged1106_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<64> > pw_math_in0_oc02_merged1098_read_pipe0_channel;
  static HWStream<hw_uint<64> > pw_math_in1_oc46_merged1106_read_pipe0_channel;
  static HWStream<hw_uint<64> > pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0_channel;

  burst_read<64>(pw_math_in0_oc02_merged1098_read_pipe0, pw_math_in0_oc02_merged1098_read_pipe0_channel, pw_math_in0_oc02_merged1098_read_pipe0_num_transfers*size);
  burst_read<64>(pw_math_in1_oc46_merged1106_read_pipe0, pw_math_in1_oc46_merged1106_read_pipe0_channel, pw_math_in1_oc46_merged1106_read_pipe0_num_transfers*size);

  two_in_blnd_d_2_wrapper(pw_math_in0_oc02_merged1098_read_pipe0_channel, pw_math_in1_oc46_merged1106_read_pipe0_channel, pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0_channel, size);

  burst_write<64>(pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0, pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0_channel, pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0_num_transfers*size);
}

}
extern "C" {

void two_in_blnd_d_2_rdai(HWStream<hw_uint<64> >& pw_math_in0_oc02_merged1098_read_pipe0, HWStream<hw_uint<64> >& pw_math_in1_oc46_merged1106_read_pipe0, HWStream<hw_uint<64> >&  pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in0_oc02_merged1098_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_in1_oc46_merged1106_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  two_in_blnd_d_2(pw_math_in0_oc02_merged1098_read_pipe0, pw_math_in1_oc46_merged1106_read_pipe0, pw_math_merged_0_reconstruct_lp138_buf141147149_merged1122_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

