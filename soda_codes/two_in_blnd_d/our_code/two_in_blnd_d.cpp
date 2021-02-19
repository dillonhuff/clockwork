#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206_cache {
	// RAM Box: {[0, 1026], [0, 1026]}
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

struct gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204_cache {
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

struct gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202_cache {
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

struct gp_in0_1_buf8_cache {
  // Reader addrs...
    // { load_to_gp_in0_1_buf8_to_gp_1313316[root = 0, gp_in0_1_buf8_ld315, gp_in0_1_buf8_ld314] -> gp_in0_1_buf8[gp_in0_1_buf8_ld314, gp_in0_1_buf8_ld315] : 0 <= gp_in0_1_buf8_ld315 <= 1026 and 0 <= gp_in0_1_buf8_ld314 <= 1026 }
    // { load_to_gp_in0_1_buf8_to_gp_22317320[root = 0, gp_in0_1_buf8_ld319, gp_in0_1_buf8_ld318] -> gp_in0_1_buf8[gp_in0_1_buf8_ld318, gp_in0_1_buf8_ld319] : 3 <= gp_in0_1_buf8_ld319 <= 1026 and 3 <= gp_in0_1_buf8_ld318 <= 1026 }
    // { load_to_gp_in0_1_buf8_to_gp_7321324[root = 0, gp_in0_1_buf8_ld323, gp_in0_1_buf8_ld322] -> gp_in0_1_buf8[gp_in0_1_buf8_ld322, gp_in0_1_buf8_ld323] : 3 <= gp_in0_1_buf8_ld323 <= 1026 and 3 <= gp_in0_1_buf8_ld322 <= 1026 }
  // # of banks: 3
  gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206_cache gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206;
  gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204_cache gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204;
  gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202_cache gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202;
};



inline void gp_in0_1_buf8_gp_in0_110_merged303_263_write(hw_uint<32> & gp_in0_1_buf8_gp_in0_110_merged303_263, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206.push(gp_in0_1_buf8_gp_in0_110_merged303_263);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204.push(gp_in0_1_buf8_gp_in0_110_merged303_263);
  gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202.push(gp_in0_1_buf8_gp_in0_110_merged303_263);
}

inline hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld315, int gp_in0_1_buf8_ld314, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206 read pattern: { load_to_gp_in0_1_buf8_to_gp_1313316[root = 0, gp_in0_1_buf8_ld315, gp_in0_1_buf8_ld314] -> gp_in0_1_buf8[gp_in0_1_buf8_ld314, gp_in0_1_buf8_ld315] : 0 <= gp_in0_1_buf8_ld315 <= 1026 and 0 <= gp_in0_1_buf8_ld314 <= 1026 }
  // Read schedule : { load_to_gp_in0_1_buf8_to_gp_1313316[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 18] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged303_263 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged303_263;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld319, int gp_in0_1_buf8_ld318, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204 read pattern: { load_to_gp_in0_1_buf8_to_gp_22317320[root = 0, gp_in0_1_buf8_ld319, gp_in0_1_buf8_ld318] -> gp_in0_1_buf8[gp_in0_1_buf8_ld318, gp_in0_1_buf8_ld319] : 3 <= gp_in0_1_buf8_ld319 <= 1026 and 3 <= gp_in0_1_buf8_ld318 <= 1026 }
  // Read schedule : { load_to_gp_in0_1_buf8_to_gp_22317320[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 10] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  // Write schedule: { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged303_263 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged303_263;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202_select(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld323, int gp_in0_1_buf8_ld322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202 read pattern: { load_to_gp_in0_1_buf8_to_gp_7321324[root = 0, gp_in0_1_buf8_ld323, gp_in0_1_buf8_ld322] -> gp_in0_1_buf8[gp_in0_1_buf8_ld322, gp_in0_1_buf8_ld323] : 3 <= gp_in0_1_buf8_ld323 <= 1026 and 3 <= gp_in0_1_buf8_ld322 <= 1026 }
  // Read schedule : { load_to_gp_in0_1_buf8_to_gp_7321324[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 13] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  // Write schedule: { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_gp_in0_110_merged303_263 = gp_in0_1_buf8.gp_in0_1_buf8_gp_in0_110_merged303_263_to_gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_gp_in0_110_merged303_263;
  return 0;
}

// # of bundles = 4
// gp_in0_110_merged303_write
//	gp_in0_1_buf8_gp_in0_110_merged303_263
inline void gp_in0_1_buf8_gp_in0_110_merged303_write_bundle_write(hw_uint<32>& gp_in0_110_merged303_write, gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_gp_in0_110_merged303_263_res = gp_in0_110_merged303_write.extract<0, 31>();
	gp_in0_1_buf8_gp_in0_110_merged303_263_write(gp_in0_1_buf8_gp_in0_110_merged303_263_res, gp_in0_1_buf8, root, gp_in0_19, gp_in0_110, dynamic_address);
}

// load_to_gp_in0_1_buf8_to_gp_1313316_read
//	gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206
inline hw_uint<32> gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld315, int gp_in0_1_buf8_ld314, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206_res = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206_select(gp_in0_1_buf8, root, gp_in0_1_buf8_ld315, gp_in0_1_buf8_ld314, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_206_res);
	return result;
}

// load_to_gp_in0_1_buf8_to_gp_22317320_read
//	gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204
inline hw_uint<32> gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld319, int gp_in0_1_buf8_ld318, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204_res = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204_select(gp_in0_1_buf8, root, gp_in0_1_buf8_ld319, gp_in0_1_buf8_ld318, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_204_res);
	return result;
}

// load_to_gp_in0_1_buf8_to_gp_7321324_read
//	gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202
inline hw_uint<32> gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_read_bundle_read(gp_in0_1_buf8_cache& gp_in0_1_buf8, int root, int gp_in0_1_buf8_ld323, int gp_in0_1_buf8_ld322, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202_res = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202_select(gp_in0_1_buf8, root, gp_in0_1_buf8_ld323, gp_in0_1_buf8_ld322, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_202_res);
	return result;
}

struct gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9_cache {
	// RAM Box: {[0, 1026], [0, 1026]}
	// Capacity: 2057
	// # of read delays: 9
  // 0, 1, 2, 1027, 1028, 1029, 2054, 2055, 2056
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 1024> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 1024> f11;
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

	inline hw_uint<32>  peek_1026() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1027() {
		return f6;
	}

	inline hw_uint<32>  peek_1028() {
		return f8;
	}

	inline hw_uint<32>  peek_1029() {
		return f10;
	}

	inline hw_uint<32>  peek_2053() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_2054() {
		return f12;
	}

	inline hw_uint<32>  peek_2055() {
		return f14;
	}

	inline hw_uint<32>  peek_2056() {
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
    // cap: 1 reading from capacity: 1024
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1024 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1024
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1024 reading from capacity: 1
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
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
    // { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // # of banks: 1
  gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9_cache gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9;
};



inline void gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_write(hw_uint<32> & gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211, gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_1_buf8_to_gp_1313_ld483, int gp_in0_1_buf8_to_gp_1313_ld482, int dynamic_address) {
  gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.push(gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211);
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_2();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_1();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_0();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_1029();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_1028();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 1 + 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_1027();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_2056();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[1 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_2055();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262_select(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262 read pattern: { gp_in0_218_merged309[root = 0, gp_in0_217, gp_in0_218] -> gp_in0_1_buf8_FIFO_buf481[2 + 2gp_in0_218, 2gp_in0_217] : 0 <= gp_in0_217 <= 512 and 0 <= gp_in0_218 <= 512 }
  // Read schedule : { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211 = gp_in0_1_buf8_FIFO_buf481.gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_merged_banks_9.peek_2054();
  return value_gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211;
  return 0;
}

// # of bundles = 2
// gp_in0_218_merged309_read
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261
//	gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262
inline hw_uint<288> gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_read_bundle_read(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261
    // gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262

	hw_uint<288> result;
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<0, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_254_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<32, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_255_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<64, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_256_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<96, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_257_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<128, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_258_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<160, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_259_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<192, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_260_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<224, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_261_res);
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262_res = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262_select(gp_in0_1_buf8_FIFO_buf481, root, gp_in0_217, gp_in0_218, dynamic_address);
	set_at<256, 288>(result, gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_262_res);
	return result;
}

// load_to_gp_in0_1_buf8_FIFO_buf481484_write
//	gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211
inline void gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_FIFO_buf481484_write, gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int root, int gp_in0_1_buf8_to_gp_1313_ld483, int gp_in0_1_buf8_to_gp_1313_ld482, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_res = load_to_gp_in0_1_buf8_FIFO_buf481484_write.extract<0, 31>();
	gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_write(gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_211_res, gp_in0_1_buf8_FIFO_buf481, root, gp_in0_1_buf8_to_gp_1313_ld483, gp_in0_1_buf8_to_gp_1313_ld482, dynamic_address);
}

struct gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_to_gp_in0_1_buf8_FIFO_buf485_us51_7_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1024
	// # of read delays: 1025
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
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
    // { us51[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8_FIFO_buf485[o0, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 2047 and 5 + us_gp_in0_1_buf850 <= 2o0 <= 6 + us_gp_in0_1_buf850 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // # of banks: 1
  gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_to_gp_in0_1_buf8_FIFO_buf485_us51_7_cache gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_to_gp_in0_1_buf8_FIFO_buf485_us51_7;
};



inline void gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_write(hw_uint<32> & gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209, gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int gp_in0_1_buf8_to_gp_22317_ld487, int gp_in0_1_buf8_to_gp_22317_ld486, int dynamic_address) {
  gp_in0_1_buf8_FIFO_buf485.gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_to_gp_in0_1_buf8_FIFO_buf485_us51_7.push(gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209);
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_us51_7_select(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf485_us51_7 read pattern: { us51[root = 0, us_gp_in0_1_buf849, us_gp_in0_1_buf850] -> gp_in0_1_buf8_FIFO_buf485[o0, o1] : 0 <= us_gp_in0_1_buf849 <= 2047 and 0 <= us_gp_in0_1_buf850 <= 2047 and 5 + us_gp_in0_1_buf850 <= 2o0 <= 6 + us_gp_in0_1_buf850 and 5 + us_gp_in0_1_buf849 <= 2o1 <= 6 + us_gp_in0_1_buf849 }
  // Read schedule : { us51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf485488[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 12] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209 = gp_in0_1_buf8_FIFO_buf485.gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_to_gp_in0_1_buf8_FIFO_buf485_us51_7.peek(/* one reader or all rams */ ((-1 - us_gp_in0_1_buf849) % 2 == 0 && 2045 - us_gp_in0_1_buf850 >= 0) ? ((1023 - floord(2*us_gp_in0_1_buf850, 4))) : 0);
  return value_gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_1_buf8_FIFO_buf485488_write
//	gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209
inline void gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_FIFO_buf485488_write, gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int gp_in0_1_buf8_to_gp_22317_ld487, int gp_in0_1_buf8_to_gp_22317_ld486, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_res = load_to_gp_in0_1_buf8_FIFO_buf485488_write.extract<0, 31>();
	gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_write(gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_209_res, gp_in0_1_buf8_FIFO_buf485, root, gp_in0_1_buf8_to_gp_22317_ld487, gp_in0_1_buf8_to_gp_22317_ld486, dynamic_address);
}

// us51_read
//	gp_in0_1_buf8_FIFO_buf485_us51_7
inline hw_uint<32> gp_in0_1_buf8_FIFO_buf485_us51_read_bundle_read(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_FIFO_buf485_us51_7

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf485_us51_7_res = gp_in0_1_buf8_FIFO_buf485_us51_7_select(gp_in0_1_buf8_FIFO_buf485, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_FIFO_buf485_us51_7_res);
	return result;
}

struct gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_to_gp_in0_1_buf8_FIFO_buf489_diff47_283_cache {
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

struct gp_in0_1_buf8_FIFO_buf489_cache {
  // Reader addrs...
    // { diff47[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8_FIFO_buf489[3 + lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // # of banks: 1
  gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_to_gp_in0_1_buf8_FIFO_buf489_diff47_283_cache gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_to_gp_in0_1_buf8_FIFO_buf489_diff47_283;
};



inline void gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_write(hw_uint<32> & gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207, gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int gp_in0_1_buf8_to_gp_7321_ld491, int gp_in0_1_buf8_to_gp_7321_ld490, int dynamic_address) {
  gp_in0_1_buf8_FIFO_buf489.gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_to_gp_in0_1_buf8_FIFO_buf489_diff47_283.push(gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207);
}

inline hw_uint<32>  gp_in0_1_buf8_FIFO_buf489_diff47_283_select(gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_FIFO_buf489_diff47_283 read pattern: { diff47[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_1_buf8_FIFO_buf489[3 + lp_in0_146, 3 + lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // Read schedule : { diff47[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_1_buf8_FIFO_buf489492[d0 = 0, d1, d2] -> [0, 4 + 2d1, 2 + 2d2, 14] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  auto value_gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207 = gp_in0_1_buf8_FIFO_buf489.gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_to_gp_in0_1_buf8_FIFO_buf489_diff47_283.peek(/* one reader or all rams */ (1022 - lp_in0_146 >= 0) ? (1) : 0);
  return value_gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207;
  return 0;
}

// # of bundles = 2
// diff47_read
//	gp_in0_1_buf8_FIFO_buf489_diff47_283
inline hw_uint<32> gp_in0_1_buf8_FIFO_buf489_diff47_read_bundle_read(gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_FIFO_buf489_diff47_283

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf489_diff47_283_res = gp_in0_1_buf8_FIFO_buf489_diff47_283_select(gp_in0_1_buf8_FIFO_buf489, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_FIFO_buf489_diff47_283_res);
	return result;
}

// load_to_gp_in0_1_buf8_FIFO_buf489492_write
//	gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207
inline void gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_FIFO_buf489492_write, gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int root, int gp_in0_1_buf8_to_gp_7321_ld491, int gp_in0_1_buf8_to_gp_7321_ld490, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_res = load_to_gp_in0_1_buf8_FIFO_buf489492_write.extract<0, 31>();
	gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_write(gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_207_res, gp_in0_1_buf8_FIFO_buf489, root, gp_in0_1_buf8_to_gp_7321_ld491, gp_in0_1_buf8_to_gp_7321_ld490, dynamic_address);
}

struct gp_in0_1_buf8_us48_us51_6_to_gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_gp_in0_1_buf8_us48_to_gp_6325328[root = 0, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326] -> gp_in0_1_buf8_us48[gp_in0_1_buf8_us48_ld326, gp_in0_1_buf8_us48_ld327] : 0 <= gp_in0_1_buf8_us48_ld327 <= 2047 and 0 <= gp_in0_1_buf8_us48_ld326 <= 2047 }
  // # of banks: 1
  gp_in0_1_buf8_us48_us51_6_to_gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198_cache gp_in0_1_buf8_us48_us51_6_to_gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198;
};



inline void gp_in0_1_buf8_us48_us51_6_write(hw_uint<32> & gp_in0_1_buf8_us48_us51_6, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
  gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us51_6_to_gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198.push(gp_in0_1_buf8_us48_us51_6);
}

inline hw_uint<32>  gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198_select(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int gp_in0_1_buf8_us48_ld327, int gp_in0_1_buf8_us48_ld326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198 read pattern: { load_to_gp_in0_1_buf8_us48_to_gp_6325328[root = 0, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326] -> gp_in0_1_buf8_us48[gp_in0_1_buf8_us48_ld326, gp_in0_1_buf8_us48_ld327] : 0 <= gp_in0_1_buf8_us48_ld327 <= 2047 and 0 <= gp_in0_1_buf8_us48_ld326 <= 2047 }
  // Read schedule : { load_to_gp_in0_1_buf8_us48_to_gp_6325328[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 17] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { us51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_gp_in0_1_buf8_us48_us51_6 = gp_in0_1_buf8_us48.gp_in0_1_buf8_us48_us51_6_to_gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_us51_6;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_1_buf8_us48_to_gp_6325328_read
//	gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198
inline hw_uint<32> gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_read_bundle_read(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int gp_in0_1_buf8_us48_ld327, int gp_in0_1_buf8_us48_ld326, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198_res = gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198_select(gp_in0_1_buf8_us48, root, gp_in0_1_buf8_us48_ld327, gp_in0_1_buf8_us48_ld326, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_198_res);
	return result;
}

// us51_write
//	gp_in0_1_buf8_us48_us51_6
inline void gp_in0_1_buf8_us48_us51_write_bundle_write(hw_uint<32>& us51_write, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int root, int us_gp_in0_1_buf849, int us_gp_in0_1_buf850, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_us48_us51_6_res = us51_write.extract<0, 31>();
	gp_in0_1_buf8_us48_us51_6_write(gp_in0_1_buf8_us48_us51_6_res, gp_in0_1_buf8_us48, root, us_gp_in0_1_buf849, us_gp_in0_1_buf850, dynamic_address);
}

struct gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_to_gp_in0_1_buf8_us48_FIFO_buf493_diff55_281_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { diff55[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48_FIFO_buf493[lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 2047 }
  // # of banks: 1
  gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_to_gp_in0_1_buf8_us48_FIFO_buf493_diff55_281_cache gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_to_gp_in0_1_buf8_us48_FIFO_buf493_diff55_281;
};



inline void gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_write(hw_uint<32> & gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int gp_in0_1_buf8_us48_to_gp_6325_ld495, int gp_in0_1_buf8_us48_to_gp_6325_ld494, int dynamic_address) {
  gp_in0_1_buf8_us48_FIFO_buf493.gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_to_gp_in0_1_buf8_us48_FIFO_buf493_diff55_281.push(gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199);
}

inline hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_diff55_281_select(gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_1_buf8_us48_FIFO_buf493_diff55_281 read pattern: { diff55[root = 0, lp_in0_053, lp_in0_054] -> gp_in0_1_buf8_us48_FIFO_buf493[lp_in0_054, lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 2047 }
  // Read schedule : { diff55[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_gp_in0_1_buf8_us48_FIFO_buf493496[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 22] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199 = gp_in0_1_buf8_us48_FIFO_buf493.gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_to_gp_in0_1_buf8_us48_FIFO_buf493_diff55_281.peek(/* one reader or all rams */ 0);
  return value_gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199;
  return 0;
}

// # of bundles = 2
// diff55_read
//	gp_in0_1_buf8_us48_FIFO_buf493_diff55_281
inline hw_uint<32> gp_in0_1_buf8_us48_FIFO_buf493_diff55_read_bundle_read(gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_1_buf8_us48_FIFO_buf493_diff55_281

	hw_uint<32> result;
	hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_diff55_281_res = gp_in0_1_buf8_us48_FIFO_buf493_diff55_281_select(gp_in0_1_buf8_us48_FIFO_buf493, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<0, 32>(result, gp_in0_1_buf8_us48_FIFO_buf493_diff55_281_res);
	return result;
}

// load_to_gp_in0_1_buf8_us48_FIFO_buf493496_write
//	gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199
inline void gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_write_bundle_write(hw_uint<32>& load_to_gp_in0_1_buf8_us48_FIFO_buf493496_write, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int root, int gp_in0_1_buf8_us48_to_gp_6325_ld495, int gp_in0_1_buf8_us48_to_gp_6325_ld494, int dynamic_address) {
	hw_uint<32>  gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_res = load_to_gp_in0_1_buf8_us48_FIFO_buf493496_write.extract<0, 31>();
	gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_write(gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_199_res, gp_in0_1_buf8_us48_FIFO_buf493, root, gp_in0_1_buf8_us48_to_gp_6325_ld495, gp_in0_1_buf8_us48_to_gp_6325_ld494, dynamic_address);
}

struct gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190_cache {
	// RAM Box: {[0, 512], [0, 512]}
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

struct gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188_cache {
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

struct gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186_cache {
	// RAM Box: {[1, 512], [1, 512]}
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

struct gp_in0_2_buf16_cache {
  // Reader addrs...
    // { load_to_gp_in0_2_buf16_to_gp_2329332[root = 0, gp_in0_2_buf16_ld331, gp_in0_2_buf16_ld330] -> gp_in0_2_buf16[gp_in0_2_buf16_ld330, gp_in0_2_buf16_ld331] : 0 <= gp_in0_2_buf16_ld331 <= 512 and 0 <= gp_in0_2_buf16_ld330 <= 512 }
    // { load_to_gp_in0_2_buf16_to_gp_23333336[root = 0, gp_in0_2_buf16_ld335, gp_in0_2_buf16_ld334] -> gp_in0_2_buf16[gp_in0_2_buf16_ld334, gp_in0_2_buf16_ld335] : 0 < gp_in0_2_buf16_ld335 <= 512 and 0 < gp_in0_2_buf16_ld334 <= 512 }
    // { load_to_gp_in0_2_buf16_to_gp_8337340[root = 0, gp_in0_2_buf16_ld339, gp_in0_2_buf16_ld338] -> gp_in0_2_buf16[gp_in0_2_buf16_ld338, gp_in0_2_buf16_ld339] : 0 < gp_in0_2_buf16_ld339 <= 512 and 0 < gp_in0_2_buf16_ld338 <= 512 }
  // # of banks: 3
  gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190_cache gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190;
  gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188_cache gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188;
  gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186_cache gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186;
};



inline void gp_in0_2_buf16_gp_in0_218_merged309_253_write(hw_uint<32> & gp_in0_2_buf16_gp_in0_218_merged309_253, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190.push(gp_in0_2_buf16_gp_in0_218_merged309_253);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188.push(gp_in0_2_buf16_gp_in0_218_merged309_253);
  gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186.push(gp_in0_2_buf16_gp_in0_218_merged309_253);
}

inline hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld331, int gp_in0_2_buf16_ld330, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190 read pattern: { load_to_gp_in0_2_buf16_to_gp_2329332[root = 0, gp_in0_2_buf16_ld331, gp_in0_2_buf16_ld330] -> gp_in0_2_buf16[gp_in0_2_buf16_ld330, gp_in0_2_buf16_ld331] : 0 <= gp_in0_2_buf16_ld331 <= 512 and 0 <= gp_in0_2_buf16_ld330 <= 512 }
  // Read schedule : { load_to_gp_in0_2_buf16_to_gp_2329332[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 30] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged309_253 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged309_253;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld335, int gp_in0_2_buf16_ld334, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188 read pattern: { load_to_gp_in0_2_buf16_to_gp_23333336[root = 0, gp_in0_2_buf16_ld335, gp_in0_2_buf16_ld334] -> gp_in0_2_buf16[gp_in0_2_buf16_ld334, gp_in0_2_buf16_ld335] : 0 < gp_in0_2_buf16_ld335 <= 512 and 0 < gp_in0_2_buf16_ld334 <= 512 }
  // Read schedule : { load_to_gp_in0_2_buf16_to_gp_23333336[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 33] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  // Write schedule: { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged309_253 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged309_253;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186_select(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld339, int gp_in0_2_buf16_ld338, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186 read pattern: { load_to_gp_in0_2_buf16_to_gp_8337340[root = 0, gp_in0_2_buf16_ld339, gp_in0_2_buf16_ld338] -> gp_in0_2_buf16[gp_in0_2_buf16_ld338, gp_in0_2_buf16_ld339] : 0 < gp_in0_2_buf16_ld339 <= 512 and 0 < gp_in0_2_buf16_ld338 <= 512 }
  // Read schedule : { load_to_gp_in0_2_buf16_to_gp_8337340[d0 = 0, d1, d2] -> [0, 6 + 4d1, 10 + 4d2, 37] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  // Write schedule: { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_gp_in0_218_merged309_253 = gp_in0_2_buf16.gp_in0_2_buf16_gp_in0_218_merged309_253_to_gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186.peek(/* one reader or all rams */ (511 - gp_in0_2_buf16_ld338 >= 0) ? (1) : 0);
  return value_gp_in0_2_buf16_gp_in0_218_merged309_253;
  return 0;
}

// # of bundles = 4
// gp_in0_218_merged309_write
//	gp_in0_2_buf16_gp_in0_218_merged309_253
inline void gp_in0_2_buf16_gp_in0_218_merged309_write_bundle_write(hw_uint<32>& gp_in0_218_merged309_write, gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_217, int gp_in0_218, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_gp_in0_218_merged309_253_res = gp_in0_218_merged309_write.extract<0, 31>();
	gp_in0_2_buf16_gp_in0_218_merged309_253_write(gp_in0_2_buf16_gp_in0_218_merged309_253_res, gp_in0_2_buf16, root, gp_in0_217, gp_in0_218, dynamic_address);
}

// load_to_gp_in0_2_buf16_to_gp_2329332_read
//	gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190
inline hw_uint<32> gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld331, int gp_in0_2_buf16_ld330, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190_res = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190_select(gp_in0_2_buf16, root, gp_in0_2_buf16_ld331, gp_in0_2_buf16_ld330, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_190_res);
	return result;
}

// load_to_gp_in0_2_buf16_to_gp_23333336_read
//	gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188
inline hw_uint<32> gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld335, int gp_in0_2_buf16_ld334, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188_res = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188_select(gp_in0_2_buf16, root, gp_in0_2_buf16_ld335, gp_in0_2_buf16_ld334, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_188_res);
	return result;
}

// load_to_gp_in0_2_buf16_to_gp_8337340_read
//	gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186
inline hw_uint<32> gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_read_bundle_read(gp_in0_2_buf16_cache& gp_in0_2_buf16, int root, int gp_in0_2_buf16_ld339, int gp_in0_2_buf16_ld338, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186_res = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186_select(gp_in0_2_buf16, root, gp_in0_2_buf16_ld339, gp_in0_2_buf16_ld338, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_186_res);
	return result;
}

struct gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9_cache {
	// RAM Box: {[0, 512], [0, 512]}
	// Capacity: 1029
	// # of read delays: 9
  // 0, 1, 2, 513, 514, 515, 1026, 1027, 1028
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 510> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 510> f11;
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

	inline hw_uint<32>  peek_512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_513() {
		return f6;
	}

	inline hw_uint<32>  peek_514() {
		return f8;
	}

	inline hw_uint<32>  peek_515() {
		return f10;
	}

	inline hw_uint<32>  peek_1025() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1026() {
		return f12;
	}

	inline hw_uint<32>  peek_1027() {
		return f14;
	}

	inline hw_uint<32>  peek_1028() {
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
    // cap: 1 reading from capacity: 510
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 510 reading from capacity: 1
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
    // cap: 1 reading from capacity: 510
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 510 reading from capacity: 1
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
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
    // { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // # of banks: 1
  gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9_cache gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9;
};



inline void gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_write(hw_uint<32> & gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195, gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_2_buf16_to_gp_2329_ld499, int gp_in0_2_buf16_to_gp_2329_ld498, int dynamic_address) {
  gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.push(gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195);
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_2();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_1();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_0();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_515();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_514();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 1 + 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_513();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_1028();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[1 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_1027();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252_select(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252 read pattern: { gp_in0_326_merged312[root = 0, gp_in0_325, gp_in0_326] -> gp_in0_2_buf16_FIFO_buf497[2 + 2gp_in0_326, 2gp_in0_325] : 0 <= gp_in0_325 <= 255 and 0 <= gp_in0_326 <= 255 }
  // Read schedule : { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195 = gp_in0_2_buf16_FIFO_buf497.gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_merged_banks_9.peek_1026();
  return value_gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195;
  return 0;
}

// # of bundles = 2
// gp_in0_326_merged312_read
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251
//	gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252
inline hw_uint<288> gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_read_bundle_read(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251
    // gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252

	hw_uint<288> result;
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<0, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_244_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<32, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_245_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<64, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_246_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<96, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_247_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<128, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_248_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<160, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_249_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<192, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_250_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<224, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_251_res);
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252_res = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252_select(gp_in0_2_buf16_FIFO_buf497, root, gp_in0_325, gp_in0_326, dynamic_address);
	set_at<256, 288>(result, gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_252_res);
	return result;
}

// load_to_gp_in0_2_buf16_FIFO_buf497500_write
//	gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195
inline void gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_FIFO_buf497500_write, gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int root, int gp_in0_2_buf16_to_gp_2329_ld499, int gp_in0_2_buf16_to_gp_2329_ld498, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_res = load_to_gp_in0_2_buf16_FIFO_buf497500_write.extract<0, 31>();
	gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_write(gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_195_res, gp_in0_2_buf16_FIFO_buf497, root, gp_in0_2_buf16_to_gp_2329_ld499, gp_in0_2_buf16_to_gp_2329_ld498, dynamic_address);
}

struct gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_to_gp_in0_2_buf16_FIFO_buf501_us43_9_cache {
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
    // { us43[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16_FIFO_buf501[o0, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 1023 and us_gp_in0_2_buf1642 < 2o0 <= 2 + us_gp_in0_2_buf1642 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // # of banks: 1
  gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_to_gp_in0_2_buf16_FIFO_buf501_us43_9_cache gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_to_gp_in0_2_buf16_FIFO_buf501_us43_9;
};



inline void gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_write(hw_uint<32> & gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193, gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int gp_in0_2_buf16_to_gp_23333_ld503, int gp_in0_2_buf16_to_gp_23333_ld502, int dynamic_address) {
  gp_in0_2_buf16_FIFO_buf501.gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_to_gp_in0_2_buf16_FIFO_buf501_us43_9.push(gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193);
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf501_us43_9_select(gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf501_us43_9 read pattern: { us43[root = 0, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642] -> gp_in0_2_buf16_FIFO_buf501[o0, o1] : 0 <= us_gp_in0_2_buf1641 <= 1023 and 0 <= us_gp_in0_2_buf1642 <= 1023 and us_gp_in0_2_buf1642 < 2o0 <= 2 + us_gp_in0_2_buf1642 and us_gp_in0_2_buf1641 < 2o1 <= 2 + us_gp_in0_2_buf1641 }
  // Read schedule : { us43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 48] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf501504[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 39] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193 = gp_in0_2_buf16_FIFO_buf501.gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_to_gp_in0_2_buf16_FIFO_buf501_us43_9.peek(/* one reader or all rams */ ((-1 - us_gp_in0_2_buf1641) % 2 == 0 && 1021 - us_gp_in0_2_buf1642 >= 0) ? ((511 - floord(2*us_gp_in0_2_buf1642, 4))) : 0);
  return value_gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_2_buf16_FIFO_buf501504_write
//	gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193
inline void gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_FIFO_buf501504_write, gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int gp_in0_2_buf16_to_gp_23333_ld503, int gp_in0_2_buf16_to_gp_23333_ld502, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_res = load_to_gp_in0_2_buf16_FIFO_buf501504_write.extract<0, 31>();
	gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_write(gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_193_res, gp_in0_2_buf16_FIFO_buf501, root, gp_in0_2_buf16_to_gp_23333_ld503, gp_in0_2_buf16_to_gp_23333_ld502, dynamic_address);
}

// us43_read
//	gp_in0_2_buf16_FIFO_buf501_us43_9
inline hw_uint<32> gp_in0_2_buf16_FIFO_buf501_us43_read_bundle_read(gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_FIFO_buf501_us43_9

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf501_us43_9_res = gp_in0_2_buf16_FIFO_buf501_us43_9_select(gp_in0_2_buf16_FIFO_buf501, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_FIFO_buf501_us43_9_res);
	return result;
}

struct gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_to_gp_in0_2_buf16_FIFO_buf505_diff39_286_cache {
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
    // { diff39[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_2_buf16_FIFO_buf505[1 + lp_in0_238, 1 + lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // # of banks: 1
  gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_to_gp_in0_2_buf16_FIFO_buf505_diff39_286_cache gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_to_gp_in0_2_buf16_FIFO_buf505_diff39_286;
};



inline void gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_write(hw_uint<32> & gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191, gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int gp_in0_2_buf16_to_gp_8337_ld507, int gp_in0_2_buf16_to_gp_8337_ld506, int dynamic_address) {
  gp_in0_2_buf16_FIFO_buf505.gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_to_gp_in0_2_buf16_FIFO_buf505_diff39_286.push(gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191);
}

inline hw_uint<32>  gp_in0_2_buf16_FIFO_buf505_diff39_286_select(gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_FIFO_buf505_diff39_286 read pattern: { diff39[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_2_buf16_FIFO_buf505[1 + lp_in0_238, 1 + lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // Read schedule : { diff39[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 69] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in0_2_buf16_FIFO_buf505508[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 38] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  auto value_gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191 = gp_in0_2_buf16_FIFO_buf505.gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_to_gp_in0_2_buf16_FIFO_buf505_diff39_286.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191;
  return 0;
}

// # of bundles = 2
// diff39_read
//	gp_in0_2_buf16_FIFO_buf505_diff39_286
inline hw_uint<32> gp_in0_2_buf16_FIFO_buf505_diff39_read_bundle_read(gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_FIFO_buf505_diff39_286

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf505_diff39_286_res = gp_in0_2_buf16_FIFO_buf505_diff39_286_select(gp_in0_2_buf16_FIFO_buf505, root, lp_in0_237, lp_in0_238, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_FIFO_buf505_diff39_286_res);
	return result;
}

// load_to_gp_in0_2_buf16_FIFO_buf505508_write
//	gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191
inline void gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_FIFO_buf505508_write, gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int root, int gp_in0_2_buf16_to_gp_8337_ld507, int gp_in0_2_buf16_to_gp_8337_ld506, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_res = load_to_gp_in0_2_buf16_FIFO_buf505508_write.extract<0, 31>();
	gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_write(gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_191_res, gp_in0_2_buf16_FIFO_buf505, root, gp_in0_2_buf16_to_gp_8337_ld507, gp_in0_2_buf16_to_gp_8337_ld506, dynamic_address);
}

struct gp_in0_2_buf16_us40_us43_8_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182_cache {
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
    // { load_to_gp_in0_2_buf16_us40_to_gp_7341344[root = 0, gp_in0_2_buf16_us40_ld343, gp_in0_2_buf16_us40_ld342] -> gp_in0_2_buf16_us40[gp_in0_2_buf16_us40_ld342, gp_in0_2_buf16_us40_ld343] : 0 <= gp_in0_2_buf16_us40_ld343 <= 1023 and 0 <= gp_in0_2_buf16_us40_ld342 <= 1023 }
  // # of banks: 1
  gp_in0_2_buf16_us40_us43_8_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182_cache gp_in0_2_buf16_us40_us43_8_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182;
};



inline void gp_in0_2_buf16_us40_us43_8_write(hw_uint<32> & gp_in0_2_buf16_us40_us43_8, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
  gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us43_8_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182.push(gp_in0_2_buf16_us40_us43_8);
}

inline hw_uint<32>  gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182_select(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int gp_in0_2_buf16_us40_ld343, int gp_in0_2_buf16_us40_ld342, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182 read pattern: { load_to_gp_in0_2_buf16_us40_to_gp_7341344[root = 0, gp_in0_2_buf16_us40_ld343, gp_in0_2_buf16_us40_ld342] -> gp_in0_2_buf16_us40[gp_in0_2_buf16_us40_ld342, gp_in0_2_buf16_us40_ld343] : 0 <= gp_in0_2_buf16_us40_ld343 <= 1023 and 0 <= gp_in0_2_buf16_us40_ld342 <= 1023 }
  // Read schedule : { load_to_gp_in0_2_buf16_us40_to_gp_7341344[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { us43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 48] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_2_buf16_us40_us43_8 = gp_in0_2_buf16_us40.gp_in0_2_buf16_us40_us43_8_to_gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_us40_us43_8;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_2_buf16_us40_to_gp_7341344_read
//	gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182
inline hw_uint<32> gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_read_bundle_read(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int gp_in0_2_buf16_us40_ld343, int gp_in0_2_buf16_us40_ld342, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182_res = gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182_select(gp_in0_2_buf16_us40, root, gp_in0_2_buf16_us40_ld343, gp_in0_2_buf16_us40_ld342, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_182_res);
	return result;
}

// us43_write
//	gp_in0_2_buf16_us40_us43_8
inline void gp_in0_2_buf16_us40_us43_write_bundle_write(hw_uint<32>& us43_write, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int root, int us_gp_in0_2_buf1641, int us_gp_in0_2_buf1642, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_us40_us43_8_res = us43_write.extract<0, 31>();
	gp_in0_2_buf16_us40_us43_8_write(gp_in0_2_buf16_us40_us43_8_res, gp_in0_2_buf16_us40, root, us_gp_in0_2_buf1641, us_gp_in0_2_buf1642, dynamic_address);
}

struct gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_284_cache {
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
    // { diff47[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40_FIFO_buf509[lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // # of banks: 1
  gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_284_cache gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_284;
};



inline void gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_write(hw_uint<32> & gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int gp_in0_2_buf16_us40_to_gp_7341_ld511, int gp_in0_2_buf16_us40_to_gp_7341_ld510, int dynamic_address) {
  gp_in0_2_buf16_us40_FIFO_buf509.gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_284.push(gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183);
}

inline hw_uint<32>  gp_in0_2_buf16_us40_FIFO_buf509_diff47_284_select(gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_2_buf16_us40_FIFO_buf509_diff47_284 read pattern: { diff47[root = 0, lp_in0_145, lp_in0_146] -> gp_in0_2_buf16_us40_FIFO_buf509[lp_in0_146, lp_in0_145] : 0 <= lp_in0_145 <= 1023 and 0 <= lp_in0_146 <= 1023 }
  // Read schedule : { diff47[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in0_2_buf16_us40_FIFO_buf509512[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 63] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183 = gp_in0_2_buf16_us40_FIFO_buf509.gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_to_gp_in0_2_buf16_us40_FIFO_buf509_diff47_284.peek(/* one reader or all rams */ 0);
  return value_gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183;
  return 0;
}

// # of bundles = 2
// diff47_read
//	gp_in0_2_buf16_us40_FIFO_buf509_diff47_284
inline hw_uint<32> gp_in0_2_buf16_us40_FIFO_buf509_diff47_read_bundle_read(gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_2_buf16_us40_FIFO_buf509_diff47_284

	hw_uint<32> result;
	hw_uint<32>  gp_in0_2_buf16_us40_FIFO_buf509_diff47_284_res = gp_in0_2_buf16_us40_FIFO_buf509_diff47_284_select(gp_in0_2_buf16_us40_FIFO_buf509, root, lp_in0_145, lp_in0_146, dynamic_address);
	set_at<0, 32>(result, gp_in0_2_buf16_us40_FIFO_buf509_diff47_284_res);
	return result;
}

// load_to_gp_in0_2_buf16_us40_FIFO_buf509512_write
//	gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183
inline void gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_write_bundle_write(hw_uint<32>& load_to_gp_in0_2_buf16_us40_FIFO_buf509512_write, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int root, int gp_in0_2_buf16_us40_to_gp_7341_ld511, int gp_in0_2_buf16_us40_to_gp_7341_ld510, int dynamic_address) {
	hw_uint<32>  gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_res = load_to_gp_in0_2_buf16_us40_FIFO_buf509512_write.extract<0, 31>();
	gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_write(gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_183_res, gp_in0_2_buf16_us40_FIFO_buf509, root, gp_in0_2_buf16_us40_to_gp_7341_ld511, gp_in0_2_buf16_us40_to_gp_7341_ld510, dynamic_address);
}

struct gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176_cache {
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

struct gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174_cache {
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
    // { load_to_gp_in0_3_buf24_to_gp_15345348[root = 0, gp_in0_3_buf24_ld347, gp_in0_3_buf24_ld346] -> gp_in0_3_buf24[gp_in0_3_buf24_ld346, gp_in0_3_buf24_ld347] : 0 <= gp_in0_3_buf24_ld347 <= 255 and 0 <= gp_in0_3_buf24_ld346 <= 255 }
    // { load_to_gp_in0_3_buf24_to_gp_24349352[root = 0, gp_in0_3_buf24_ld351, gp_in0_3_buf24_ld350] -> gp_in0_3_buf24[gp_in0_3_buf24_ld350, gp_in0_3_buf24_ld351] : 0 <= gp_in0_3_buf24_ld351 <= 255 and 0 <= gp_in0_3_buf24_ld350 <= 255 }
  // # of banks: 2
  gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176_cache gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176;
  gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174_cache gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174;
};



inline void gp_in0_3_buf24_gp_in0_326_merged312_243_write(hw_uint<32> & gp_in0_3_buf24_gp_in0_326_merged312_243, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
  gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176.push(gp_in0_3_buf24_gp_in0_326_merged312_243);
  gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174.push(gp_in0_3_buf24_gp_in0_326_merged312_243);
}

inline hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176_select(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld347, int gp_in0_3_buf24_ld346, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176 read pattern: { load_to_gp_in0_3_buf24_to_gp_15345348[root = 0, gp_in0_3_buf24_ld347, gp_in0_3_buf24_ld346] -> gp_in0_3_buf24[gp_in0_3_buf24_ld346, gp_in0_3_buf24_ld347] : 0 <= gp_in0_3_buf24_ld347 <= 255 and 0 <= gp_in0_3_buf24_ld346 <= 255 }
  // Read schedule : { load_to_gp_in0_3_buf24_to_gp_15345348[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 36] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_gp_in0_326_merged312_243 = gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_gp_in0_326_merged312_243;
  return 0;
}

inline hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174_select(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld351, int gp_in0_3_buf24_ld350, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174 read pattern: { load_to_gp_in0_3_buf24_to_gp_24349352[root = 0, gp_in0_3_buf24_ld351, gp_in0_3_buf24_ld350] -> gp_in0_3_buf24[gp_in0_3_buf24_ld350, gp_in0_3_buf24_ld351] : 0 <= gp_in0_3_buf24_ld351 <= 255 and 0 <= gp_in0_3_buf24_ld350 <= 255 }
  // Read schedule : { load_to_gp_in0_3_buf24_to_gp_24349352[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 45] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_gp_in0_326_merged312_243 = gp_in0_3_buf24.gp_in0_3_buf24_gp_in0_326_merged312_243_to_gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_gp_in0_326_merged312_243;
  return 0;
}

// # of bundles = 3
// gp_in0_326_merged312_write
//	gp_in0_3_buf24_gp_in0_326_merged312_243
inline void gp_in0_3_buf24_gp_in0_326_merged312_write_bundle_write(hw_uint<32>& gp_in0_326_merged312_write, gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_325, int gp_in0_326, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_gp_in0_326_merged312_243_res = gp_in0_326_merged312_write.extract<0, 31>();
	gp_in0_3_buf24_gp_in0_326_merged312_243_write(gp_in0_3_buf24_gp_in0_326_merged312_243_res, gp_in0_3_buf24, root, gp_in0_325, gp_in0_326, dynamic_address);
}

// load_to_gp_in0_3_buf24_to_gp_15345348_read
//	gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176
inline hw_uint<32> gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_read_bundle_read(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld347, int gp_in0_3_buf24_ld346, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176_res = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176_select(gp_in0_3_buf24, root, gp_in0_3_buf24_ld347, gp_in0_3_buf24_ld346, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_176_res);
	return result;
}

// load_to_gp_in0_3_buf24_to_gp_24349352_read
//	gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174
inline hw_uint<32> gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_read_bundle_read(gp_in0_3_buf24_cache& gp_in0_3_buf24, int root, int gp_in0_3_buf24_ld351, int gp_in0_3_buf24_ld350, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174_res = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174_select(gp_in0_3_buf24, root, gp_in0_3_buf24_ld351, gp_in0_3_buf24_ld350, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_174_res);
	return result;
}

struct gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43_cache {
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
    // { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in0_3_buf24_FIFO_buf513[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // # of banks: 1
  gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43_cache gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43;
};



inline void gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_write(hw_uint<32> & gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179, gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int gp_in0_3_buf24_to_gp_15345_ld515, int gp_in0_3_buf24_to_gp_15345_ld514, int dynamic_address) {
  gp_in0_3_buf24_FIFO_buf513.gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43.push(gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179);
}

inline hw_uint<32>  gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43_select(gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43 read pattern: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in0_3_buf24_FIFO_buf513[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // Read schedule : { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 72] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in0_3_buf24_FIFO_buf513516[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 42] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179 = gp_in0_3_buf24_FIFO_buf513.gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_to_gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_3_buf24_FIFO_buf513516_write
//	gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179
inline void gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_write_bundle_write(hw_uint<32>& load_to_gp_in0_3_buf24_FIFO_buf513516_write, gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int gp_in0_3_buf24_to_gp_15345_ld515, int gp_in0_3_buf24_to_gp_15345_ld514, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_res = load_to_gp_in0_3_buf24_FIFO_buf513516_write.extract<0, 31>();
	gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_write(gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_179_res, gp_in0_3_buf24_FIFO_buf513, root, gp_in0_3_buf24_to_gp_15345_ld515, gp_in0_3_buf24_to_gp_15345_ld514, dynamic_address);
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_read
//	gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43
inline hw_uint<32> gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_read_bundle_read(gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43_res = gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43_select(gp_in0_3_buf24_FIFO_buf513, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_43_res);
	return result;
}

struct gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_to_gp_in0_3_buf24_FIFO_buf517_us35_11_cache {
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
    // { us35[root = 0, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434] -> gp_in0_3_buf24_FIFO_buf517[o0, o1] : 0 <= us_gp_in0_3_buf2433 <= 511 and 0 <= us_gp_in0_3_buf2434 <= 511 and -1 + us_gp_in0_3_buf2434 <= 2o0 <= us_gp_in0_3_buf2434 and -1 + us_gp_in0_3_buf2433 <= 2o1 <= us_gp_in0_3_buf2433 }
  // # of banks: 1
  gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_to_gp_in0_3_buf24_FIFO_buf517_us35_11_cache gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_to_gp_in0_3_buf24_FIFO_buf517_us35_11;
};



inline void gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_write(hw_uint<32> & gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177, gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int gp_in0_3_buf24_to_gp_24349_ld519, int gp_in0_3_buf24_to_gp_24349_ld518, int dynamic_address) {
  gp_in0_3_buf24_FIFO_buf517.gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_to_gp_in0_3_buf24_FIFO_buf517_us35_11.push(gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177);
}

inline hw_uint<32>  gp_in0_3_buf24_FIFO_buf517_us35_11_select(gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_FIFO_buf517_us35_11 read pattern: { us35[root = 0, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434] -> gp_in0_3_buf24_FIFO_buf517[o0, o1] : 0 <= us_gp_in0_3_buf2433 <= 511 and 0 <= us_gp_in0_3_buf2434 <= 511 and -1 + us_gp_in0_3_buf2434 <= 2o0 <= us_gp_in0_3_buf2434 and -1 + us_gp_in0_3_buf2433 <= 2o1 <= us_gp_in0_3_buf2433 }
  // Read schedule : { us35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 59] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in0_3_buf24_FIFO_buf517520[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 57] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177 = gp_in0_3_buf24_FIFO_buf517.gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_to_gp_in0_3_buf24_FIFO_buf517_us35_11.peek(/* one reader or all rams */ ((-1 - us_gp_in0_3_buf2433) % 2 == 0 && 509 - us_gp_in0_3_buf2434 >= 0) ? ((255 - floord(2*us_gp_in0_3_buf2434, 4))) : 0);
  return value_gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_3_buf24_FIFO_buf517520_write
//	gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177
inline void gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_write_bundle_write(hw_uint<32>& load_to_gp_in0_3_buf24_FIFO_buf517520_write, gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int gp_in0_3_buf24_to_gp_24349_ld519, int gp_in0_3_buf24_to_gp_24349_ld518, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_res = load_to_gp_in0_3_buf24_FIFO_buf517520_write.extract<0, 31>();
	gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_write(gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_177_res, gp_in0_3_buf24_FIFO_buf517, root, gp_in0_3_buf24_to_gp_24349_ld519, gp_in0_3_buf24_to_gp_24349_ld518, dynamic_address);
}

// us35_read
//	gp_in0_3_buf24_FIFO_buf517_us35_11
inline hw_uint<32> gp_in0_3_buf24_FIFO_buf517_us35_read_bundle_read(gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_FIFO_buf517_us35_11

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_FIFO_buf517_us35_11_res = gp_in0_3_buf24_FIFO_buf517_us35_11_select(gp_in0_3_buf24_FIFO_buf517, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_FIFO_buf517_us35_11_res);
	return result;
}

struct gp_in0_3_buf24_us32_us35_10_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170_cache {
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
    // { load_to_gp_in0_3_buf24_us32_to_gp_8353356[root = 0, gp_in0_3_buf24_us32_ld355, gp_in0_3_buf24_us32_ld354] -> gp_in0_3_buf24_us32[gp_in0_3_buf24_us32_ld354, gp_in0_3_buf24_us32_ld355] : 0 <= gp_in0_3_buf24_us32_ld355 <= 511 and 0 <= gp_in0_3_buf24_us32_ld354 <= 511 }
  // # of banks: 1
  gp_in0_3_buf24_us32_us35_10_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170_cache gp_in0_3_buf24_us32_us35_10_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170;
};



inline void gp_in0_3_buf24_us32_us35_10_write(hw_uint<32> & gp_in0_3_buf24_us32_us35_10, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
  gp_in0_3_buf24_us32.gp_in0_3_buf24_us32_us35_10_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170.push(gp_in0_3_buf24_us32_us35_10);
}

inline hw_uint<32>  gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170_select(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int gp_in0_3_buf24_us32_ld355, int gp_in0_3_buf24_us32_ld354, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170 read pattern: { load_to_gp_in0_3_buf24_us32_to_gp_8353356[root = 0, gp_in0_3_buf24_us32_ld355, gp_in0_3_buf24_us32_ld354] -> gp_in0_3_buf24_us32[gp_in0_3_buf24_us32_ld354, gp_in0_3_buf24_us32_ld355] : 0 <= gp_in0_3_buf24_us32_ld355 <= 511 and 0 <= gp_in0_3_buf24_us32_ld354 <= 511 }
  // Read schedule : { load_to_gp_in0_3_buf24_us32_to_gp_8353356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 60] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 59] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_3_buf24_us32_us35_10 = gp_in0_3_buf24_us32.gp_in0_3_buf24_us32_us35_10_to_gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_us32_us35_10;
  return 0;
}

// # of bundles = 2
// load_to_gp_in0_3_buf24_us32_to_gp_8353356_read
//	gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170
inline hw_uint<32> gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_read_bundle_read(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int gp_in0_3_buf24_us32_ld355, int gp_in0_3_buf24_us32_ld354, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170_res = gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170_select(gp_in0_3_buf24_us32, root, gp_in0_3_buf24_us32_ld355, gp_in0_3_buf24_us32_ld354, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_170_res);
	return result;
}

// us35_write
//	gp_in0_3_buf24_us32_us35_10
inline void gp_in0_3_buf24_us32_us35_write_bundle_write(hw_uint<32>& us35_write, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int root, int us_gp_in0_3_buf2433, int us_gp_in0_3_buf2434, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_us32_us35_10_res = us35_write.extract<0, 31>();
	gp_in0_3_buf24_us32_us35_10_write(gp_in0_3_buf24_us32_us35_10_res, gp_in0_3_buf24_us32, root, us_gp_in0_3_buf2433, us_gp_in0_3_buf2434, dynamic_address);
}

struct gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_287_cache {
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
    // { diff39[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_3_buf24_us32_FIFO_buf521[lp_in0_238, lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // # of banks: 1
  gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_287_cache gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_287;
};



inline void gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_write(hw_uint<32> & gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int gp_in0_3_buf24_us32_to_gp_8353_ld523, int gp_in0_3_buf24_us32_to_gp_8353_ld522, int dynamic_address) {
  gp_in0_3_buf24_us32_FIFO_buf521.gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_287.push(gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171);
}

inline hw_uint<32>  gp_in0_3_buf24_us32_FIFO_buf521_diff39_287_select(gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in0_3_buf24_us32_FIFO_buf521_diff39_287 read pattern: { diff39[root = 0, lp_in0_237, lp_in0_238] -> gp_in0_3_buf24_us32_FIFO_buf521[lp_in0_238, lp_in0_237] : 0 <= lp_in0_237 <= 511 and 0 <= lp_in0_238 <= 511 }
  // Read schedule : { diff39[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 69] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in0_3_buf24_us32_FIFO_buf521524[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 65] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171 = gp_in0_3_buf24_us32_FIFO_buf521.gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_to_gp_in0_3_buf24_us32_FIFO_buf521_diff39_287.peek(/* one reader or all rams */ 0);
  return value_gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171;
  return 0;
}

// # of bundles = 2
// diff39_read
//	gp_in0_3_buf24_us32_FIFO_buf521_diff39_287
inline hw_uint<32> gp_in0_3_buf24_us32_FIFO_buf521_diff39_read_bundle_read(gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in0_3_buf24_us32_FIFO_buf521_diff39_287

	hw_uint<32> result;
	hw_uint<32>  gp_in0_3_buf24_us32_FIFO_buf521_diff39_287_res = gp_in0_3_buf24_us32_FIFO_buf521_diff39_287_select(gp_in0_3_buf24_us32_FIFO_buf521, root, lp_in0_237, lp_in0_238, dynamic_address);
	set_at<0, 32>(result, gp_in0_3_buf24_us32_FIFO_buf521_diff39_287_res);
	return result;
}

// load_to_gp_in0_3_buf24_us32_FIFO_buf521524_write
//	gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171
inline void gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_write_bundle_write(hw_uint<32>& load_to_gp_in0_3_buf24_us32_FIFO_buf521524_write, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int root, int gp_in0_3_buf24_us32_to_gp_8353_ld523, int gp_in0_3_buf24_us32_to_gp_8353_ld522, int dynamic_address) {
	hw_uint<32>  gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_res = load_to_gp_in0_3_buf24_us32_FIFO_buf521524_write.extract<0, 31>();
	gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_write(gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_171_res, gp_in0_3_buf24_us32_FIFO_buf521, root, gp_in0_3_buf24_us32_to_gp_8353_ld523, gp_in0_3_buf24_us32_to_gp_8353_ld522, dynamic_address);
}

struct gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162_cache {
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

struct gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160_cache {
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

struct gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158_cache {
	// RAM Box: {[0, 1026], [0, 1026]}
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
    // { load_to_gp_in1_1_buf56_to_gp_10357360[root = 0, gp_in1_1_buf56_ld359, gp_in1_1_buf56_ld358] -> gp_in1_1_buf56[gp_in1_1_buf56_ld358, gp_in1_1_buf56_ld359] : 3 <= gp_in1_1_buf56_ld359 <= 1026 and 3 <= gp_in1_1_buf56_ld358 <= 1026 }
    // { load_to_gp_in1_1_buf56_to_gp_25361364[root = 0, gp_in1_1_buf56_ld363, gp_in1_1_buf56_ld362] -> gp_in1_1_buf56[gp_in1_1_buf56_ld362, gp_in1_1_buf56_ld363] : 3 <= gp_in1_1_buf56_ld363 <= 1026 and 3 <= gp_in1_1_buf56_ld362 <= 1026 }
    // { load_to_gp_in1_1_buf56_to_gp_4365368[root = 0, gp_in1_1_buf56_ld367, gp_in1_1_buf56_ld366] -> gp_in1_1_buf56[gp_in1_1_buf56_ld366, gp_in1_1_buf56_ld367] : 0 <= gp_in1_1_buf56_ld367 <= 1026 and 0 <= gp_in1_1_buf56_ld366 <= 1026 }
  // # of banks: 3
  gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162_cache gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162;
  gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160_cache gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160;
  gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158_cache gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158;
};



inline void gp_in1_1_buf56_gp_in1_158_merged297_233_write(hw_uint<32> & gp_in1_1_buf56_gp_in1_158_merged297_233, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162.push(gp_in1_1_buf56_gp_in1_158_merged297_233);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160.push(gp_in1_1_buf56_gp_in1_158_merged297_233);
  gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158.push(gp_in1_1_buf56_gp_in1_158_merged297_233);
}

inline hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld359, int gp_in1_1_buf56_ld358, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162 read pattern: { load_to_gp_in1_1_buf56_to_gp_10357360[root = 0, gp_in1_1_buf56_ld359, gp_in1_1_buf56_ld358] -> gp_in1_1_buf56[gp_in1_1_buf56_ld358, gp_in1_1_buf56_ld359] : 3 <= gp_in1_1_buf56_ld359 <= 1026 and 3 <= gp_in1_1_buf56_ld358 <= 1026 }
  // Read schedule : { load_to_gp_in1_1_buf56_to_gp_10357360[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 23] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  // Write schedule: { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged297_233 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged297_233;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld363, int gp_in1_1_buf56_ld362, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160 read pattern: { load_to_gp_in1_1_buf56_to_gp_25361364[root = 0, gp_in1_1_buf56_ld363, gp_in1_1_buf56_ld362] -> gp_in1_1_buf56[gp_in1_1_buf56_ld362, gp_in1_1_buf56_ld363] : 3 <= gp_in1_1_buf56_ld363 <= 1026 and 3 <= gp_in1_1_buf56_ld362 <= 1026 }
  // Read schedule : { load_to_gp_in1_1_buf56_to_gp_25361364[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 19] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  // Write schedule: { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged297_233 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged297_233;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158_select(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld367, int gp_in1_1_buf56_ld366, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158 read pattern: { load_to_gp_in1_1_buf56_to_gp_4365368[root = 0, gp_in1_1_buf56_ld367, gp_in1_1_buf56_ld366] -> gp_in1_1_buf56[gp_in1_1_buf56_ld366, gp_in1_1_buf56_ld367] : 0 <= gp_in1_1_buf56_ld367 <= 1026 and 0 <= gp_in1_1_buf56_ld366 <= 1026 }
  // Read schedule : { load_to_gp_in1_1_buf56_to_gp_4365368[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_gp_in1_158_merged297_233 = gp_in1_1_buf56.gp_in1_1_buf56_gp_in1_158_merged297_233_to_gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_gp_in1_158_merged297_233;
  return 0;
}

// # of bundles = 4
// gp_in1_158_merged297_write
//	gp_in1_1_buf56_gp_in1_158_merged297_233
inline void gp_in1_1_buf56_gp_in1_158_merged297_write_bundle_write(hw_uint<32>& gp_in1_158_merged297_write, gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_gp_in1_158_merged297_233_res = gp_in1_158_merged297_write.extract<0, 31>();
	gp_in1_1_buf56_gp_in1_158_merged297_233_write(gp_in1_1_buf56_gp_in1_158_merged297_233_res, gp_in1_1_buf56, root, gp_in1_157, gp_in1_158, dynamic_address);
}

// load_to_gp_in1_1_buf56_to_gp_10357360_read
//	gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162
inline hw_uint<32> gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld359, int gp_in1_1_buf56_ld358, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162_res = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162_select(gp_in1_1_buf56, root, gp_in1_1_buf56_ld359, gp_in1_1_buf56_ld358, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_162_res);
	return result;
}

// load_to_gp_in1_1_buf56_to_gp_25361364_read
//	gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160
inline hw_uint<32> gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld363, int gp_in1_1_buf56_ld362, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160_res = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160_select(gp_in1_1_buf56, root, gp_in1_1_buf56_ld363, gp_in1_1_buf56_ld362, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_160_res);
	return result;
}

// load_to_gp_in1_1_buf56_to_gp_4365368_read
//	gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158
inline hw_uint<32> gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_read_bundle_read(gp_in1_1_buf56_cache& gp_in1_1_buf56, int root, int gp_in1_1_buf56_ld367, int gp_in1_1_buf56_ld366, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158_res = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158_select(gp_in1_1_buf56, root, gp_in1_1_buf56_ld367, gp_in1_1_buf56_ld366, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_158_res);
	return result;
}

struct gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_to_gp_in1_1_buf56_FIFO_buf525_diff95_274_cache {
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
    // { diff95[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56_FIFO_buf525[3 + lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // # of banks: 1
  gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_to_gp_in1_1_buf56_FIFO_buf525_diff95_274_cache gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_to_gp_in1_1_buf56_FIFO_buf525_diff95_274;
};



inline void gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_write(hw_uint<32> & gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167, gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int gp_in1_1_buf56_to_gp_10357_ld527, int gp_in1_1_buf56_to_gp_10357_ld526, int dynamic_address) {
  gp_in1_1_buf56_FIFO_buf525.gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_to_gp_in1_1_buf56_FIFO_buf525_diff95_274.push(gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167);
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf525_diff95_274_select(gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf525_diff95_274 read pattern: { diff95[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_1_buf56_FIFO_buf525[3 + lp_in1_194, 3 + lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // Read schedule : { diff95[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 83] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf525528[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 25] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167 = gp_in1_1_buf56_FIFO_buf525.gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_to_gp_in1_1_buf56_FIFO_buf525_diff95_274.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167;
  return 0;
}

// # of bundles = 2
// diff95_read
//	gp_in1_1_buf56_FIFO_buf525_diff95_274
inline hw_uint<32> gp_in1_1_buf56_FIFO_buf525_diff95_read_bundle_read(gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_FIFO_buf525_diff95_274

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf525_diff95_274_res = gp_in1_1_buf56_FIFO_buf525_diff95_274_select(gp_in1_1_buf56_FIFO_buf525, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_FIFO_buf525_diff95_274_res);
	return result;
}

// load_to_gp_in1_1_buf56_FIFO_buf525528_write
//	gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167
inline void gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_FIFO_buf525528_write, gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int root, int gp_in1_1_buf56_to_gp_10357_ld527, int gp_in1_1_buf56_to_gp_10357_ld526, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_res = load_to_gp_in1_1_buf56_FIFO_buf525528_write.extract<0, 31>();
	gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_write(gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_167_res, gp_in1_1_buf56_FIFO_buf525, root, gp_in1_1_buf56_to_gp_10357_ld527, gp_in1_1_buf56_to_gp_10357_ld526, dynamic_address);
}

struct gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_to_gp_in1_1_buf56_FIFO_buf529_us99_1_cache {
	// RAM Box: {[3, 1026], [3, 1026]}
	// Capacity: 1024
	// # of read delays: 1025
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
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
    // { us99[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56_FIFO_buf529[o0, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 2047 and 5 + us_gp_in1_1_buf5698 <= 2o0 <= 6 + us_gp_in1_1_buf5698 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // # of banks: 1
  gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_to_gp_in1_1_buf56_FIFO_buf529_us99_1_cache gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_to_gp_in1_1_buf56_FIFO_buf529_us99_1;
};



inline void gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_write(hw_uint<32> & gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165, gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int gp_in1_1_buf56_to_gp_25361_ld531, int gp_in1_1_buf56_to_gp_25361_ld530, int dynamic_address) {
  gp_in1_1_buf56_FIFO_buf529.gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_to_gp_in1_1_buf56_FIFO_buf529_us99_1.push(gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165);
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_us99_1_select(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf529_us99_1 read pattern: { us99[root = 0, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698] -> gp_in1_1_buf56_FIFO_buf529[o0, o1] : 0 <= us_gp_in1_1_buf5697 <= 2047 and 0 <= us_gp_in1_1_buf5698 <= 2047 and 5 + us_gp_in1_1_buf5698 <= 2o0 <= 6 + us_gp_in1_1_buf5698 and 5 + us_gp_in1_1_buf5697 <= 2o1 <= 6 + us_gp_in1_1_buf5697 }
  // Read schedule : { us99[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf529532[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 20] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165 = gp_in1_1_buf56_FIFO_buf529.gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_to_gp_in1_1_buf56_FIFO_buf529_us99_1.peek(/* one reader or all rams */ ((-1 - us_gp_in1_1_buf5697) % 2 == 0 && 2045 - us_gp_in1_1_buf5698 >= 0) ? ((1023 - floord(2*us_gp_in1_1_buf5698, 4))) : 0);
  return value_gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_1_buf56_FIFO_buf529532_write
//	gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165
inline void gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_FIFO_buf529532_write, gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int gp_in1_1_buf56_to_gp_25361_ld531, int gp_in1_1_buf56_to_gp_25361_ld530, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_res = load_to_gp_in1_1_buf56_FIFO_buf529532_write.extract<0, 31>();
	gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_write(gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_165_res, gp_in1_1_buf56_FIFO_buf529, root, gp_in1_1_buf56_to_gp_25361_ld531, gp_in1_1_buf56_to_gp_25361_ld530, dynamic_address);
}

// us99_read
//	gp_in1_1_buf56_FIFO_buf529_us99_1
inline hw_uint<32> gp_in1_1_buf56_FIFO_buf529_us99_read_bundle_read(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_FIFO_buf529_us99_1

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf529_us99_1_res = gp_in1_1_buf56_FIFO_buf529_us99_1_select(gp_in1_1_buf56_FIFO_buf529, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_FIFO_buf529_us99_1_res);
	return result;
}

struct gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9_cache {
	// RAM Box: {[0, 1026], [0, 1026]}
	// Capacity: 2057
	// # of read delays: 9
  // 0, 1, 2, 1027, 1028, 1029, 2054, 2055, 2056
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 1024> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 1024> f11;
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

	inline hw_uint<32>  peek_1026() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_1027() {
		return f6;
	}

	inline hw_uint<32>  peek_1028() {
		return f8;
	}

	inline hw_uint<32>  peek_1029() {
		return f10;
	}

	inline hw_uint<32>  peek_2053() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_2054() {
		return f12;
	}

	inline hw_uint<32>  peek_2055() {
		return f14;
	}

	inline hw_uint<32>  peek_2056() {
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
    // cap: 1 reading from capacity: 1024
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1024 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1024
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1024 reading from capacity: 1
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
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
    // { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // # of banks: 1
  gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9_cache gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9;
};



inline void gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_write(hw_uint<32> & gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163, gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_1_buf56_to_gp_4365_ld535, int gp_in1_1_buf56_to_gp_4365_ld534, int dynamic_address) {
  gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.push(gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163);
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_2();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_1();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_0();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_1029();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_1028();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 1 + 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_1027();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_2056();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[1 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_2055();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

inline hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232_select(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232 read pattern: { gp_in1_266_merged300[root = 0, gp_in1_265, gp_in1_266] -> gp_in1_1_buf56_FIFO_buf533[2 + 2gp_in1_266, 2gp_in1_265] : 0 <= gp_in1_265 <= 512 and 0 <= gp_in1_266 <= 512 }
  // Read schedule : { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  auto value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163 = gp_in1_1_buf56_FIFO_buf533.gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_merged_banks_9.peek_2054();
  return value_gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163;
  return 0;
}

// # of bundles = 2
// gp_in1_266_merged300_read
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231
//	gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232
inline hw_uint<288> gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_read_bundle_read(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231
    // gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232

	hw_uint<288> result;
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<0, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_224_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<32, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_225_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<64, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_226_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<96, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_227_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<128, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_228_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<160, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_229_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<192, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_230_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<224, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_231_res);
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232_res = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232_select(gp_in1_1_buf56_FIFO_buf533, root, gp_in1_265, gp_in1_266, dynamic_address);
	set_at<256, 288>(result, gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_232_res);
	return result;
}

// load_to_gp_in1_1_buf56_FIFO_buf533536_write
//	gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163
inline void gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_FIFO_buf533536_write, gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int root, int gp_in1_1_buf56_to_gp_4365_ld535, int gp_in1_1_buf56_to_gp_4365_ld534, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_res = load_to_gp_in1_1_buf56_FIFO_buf533536_write.extract<0, 31>();
	gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_write(gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_163_res, gp_in1_1_buf56_FIFO_buf533, root, gp_in1_1_buf56_to_gp_4365_ld535, gp_in1_1_buf56_to_gp_4365_ld534, dynamic_address);
}

struct gp_in1_1_buf56_us96_us99_0_to_gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_gp_in1_1_buf56_us96_to_gp_9369372[root = 0, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370] -> gp_in1_1_buf56_us96[gp_in1_1_buf56_us96_ld370, gp_in1_1_buf56_us96_ld371] : 0 <= gp_in1_1_buf56_us96_ld371 <= 2047 and 0 <= gp_in1_1_buf56_us96_ld370 <= 2047 }
  // # of banks: 1
  gp_in1_1_buf56_us96_us99_0_to_gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154_cache gp_in1_1_buf56_us96_us99_0_to_gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154;
};



inline void gp_in1_1_buf56_us96_us99_0_write(hw_uint<32> & gp_in1_1_buf56_us96_us99_0, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
  gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us99_0_to_gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154.push(gp_in1_1_buf56_us96_us99_0);
}

inline hw_uint<32>  gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154_select(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int gp_in1_1_buf56_us96_ld371, int gp_in1_1_buf56_us96_ld370, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154 read pattern: { load_to_gp_in1_1_buf56_us96_to_gp_9369372[root = 0, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370] -> gp_in1_1_buf56_us96[gp_in1_1_buf56_us96_ld370, gp_in1_1_buf56_us96_ld371] : 0 <= gp_in1_1_buf56_us96_ld371 <= 2047 and 0 <= gp_in1_1_buf56_us96_ld370 <= 2047 }
  // Read schedule : { load_to_gp_in1_1_buf56_us96_to_gp_9369372[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { us99[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_gp_in1_1_buf56_us96_us99_0 = gp_in1_1_buf56_us96.gp_in1_1_buf56_us96_us99_0_to_gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_us99_0;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_1_buf56_us96_to_gp_9369372_read
//	gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154
inline hw_uint<32> gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_read_bundle_read(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int gp_in1_1_buf56_us96_ld371, int gp_in1_1_buf56_us96_ld370, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154_res = gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154_select(gp_in1_1_buf56_us96, root, gp_in1_1_buf56_us96_ld371, gp_in1_1_buf56_us96_ld370, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_154_res);
	return result;
}

// us99_write
//	gp_in1_1_buf56_us96_us99_0
inline void gp_in1_1_buf56_us96_us99_write_bundle_write(hw_uint<32>& us99_write, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int root, int us_gp_in1_1_buf5697, int us_gp_in1_1_buf5698, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_us96_us99_0_res = us99_write.extract<0, 31>();
	gp_in1_1_buf56_us96_us99_0_write(gp_in1_1_buf56_us96_us99_0_res, gp_in1_1_buf56_us96, root, us_gp_in1_1_buf5697, us_gp_in1_1_buf5698, dynamic_address);
}

struct gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_to_gp_in1_1_buf56_us96_FIFO_buf537_diff103_290_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { diff103[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96_FIFO_buf537[lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 2047 }
  // # of banks: 1
  gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_to_gp_in1_1_buf56_us96_FIFO_buf537_diff103_290_cache gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_to_gp_in1_1_buf56_us96_FIFO_buf537_diff103_290;
};



inline void gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_write(hw_uint<32> & gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int gp_in1_1_buf56_us96_to_gp_9369_ld539, int gp_in1_1_buf56_us96_to_gp_9369_ld538, int dynamic_address) {
  gp_in1_1_buf56_us96_FIFO_buf537.gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_to_gp_in1_1_buf56_us96_FIFO_buf537_diff103_290.push(gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155);
}

inline hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_diff103_290_select(gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_1_buf56_us96_FIFO_buf537_diff103_290 read pattern: { diff103[root = 0, lp_in1_0101, lp_in1_0102] -> gp_in1_1_buf56_us96_FIFO_buf537[lp_in1_0102, lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 2047 }
  // Read schedule : { diff103[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_gp_in1_1_buf56_us96_FIFO_buf537540[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155 = gp_in1_1_buf56_us96_FIFO_buf537.gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_to_gp_in1_1_buf56_us96_FIFO_buf537_diff103_290.peek(/* one reader or all rams */ 0);
  return value_gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155;
  return 0;
}

// # of bundles = 2
// diff103_read
//	gp_in1_1_buf56_us96_FIFO_buf537_diff103_290
inline hw_uint<32> gp_in1_1_buf56_us96_FIFO_buf537_diff103_read_bundle_read(gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_1_buf56_us96_FIFO_buf537_diff103_290

	hw_uint<32> result;
	hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_diff103_290_res = gp_in1_1_buf56_us96_FIFO_buf537_diff103_290_select(gp_in1_1_buf56_us96_FIFO_buf537, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<0, 32>(result, gp_in1_1_buf56_us96_FIFO_buf537_diff103_290_res);
	return result;
}

// load_to_gp_in1_1_buf56_us96_FIFO_buf537540_write
//	gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155
inline void gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_write_bundle_write(hw_uint<32>& load_to_gp_in1_1_buf56_us96_FIFO_buf537540_write, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int root, int gp_in1_1_buf56_us96_to_gp_9369_ld539, int gp_in1_1_buf56_us96_to_gp_9369_ld538, int dynamic_address) {
	hw_uint<32>  gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_res = load_to_gp_in1_1_buf56_us96_FIFO_buf537540_write.extract<0, 31>();
	gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_write(gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_155_res, gp_in1_1_buf56_us96_FIFO_buf537, root, gp_in1_1_buf56_us96_to_gp_9369_ld539, gp_in1_1_buf56_us96_to_gp_9369_ld538, dynamic_address);
}

struct gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146_cache {
	// RAM Box: {[1, 512], [1, 512]}
	// Capacity: 515
	// # of read delays: 515
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514
	fifo<hw_uint<32> , 515> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(514 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144_cache {
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

struct gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142_cache {
	// RAM Box: {[0, 512], [0, 512]}
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
    // { load_to_gp_in1_2_buf64_to_gp_11373376[root = 0, gp_in1_2_buf64_ld375, gp_in1_2_buf64_ld374] -> gp_in1_2_buf64[gp_in1_2_buf64_ld374, gp_in1_2_buf64_ld375] : 0 < gp_in1_2_buf64_ld375 <= 512 and 0 < gp_in1_2_buf64_ld374 <= 512 }
    // { load_to_gp_in1_2_buf64_to_gp_26377380[root = 0, gp_in1_2_buf64_ld379, gp_in1_2_buf64_ld378] -> gp_in1_2_buf64[gp_in1_2_buf64_ld378, gp_in1_2_buf64_ld379] : 0 < gp_in1_2_buf64_ld379 <= 512 and 0 < gp_in1_2_buf64_ld378 <= 512 }
    // { load_to_gp_in1_2_buf64_to_gp_5381384[root = 0, gp_in1_2_buf64_ld383, gp_in1_2_buf64_ld382] -> gp_in1_2_buf64[gp_in1_2_buf64_ld382, gp_in1_2_buf64_ld383] : 0 <= gp_in1_2_buf64_ld383 <= 512 and 0 <= gp_in1_2_buf64_ld382 <= 512 }
  // # of banks: 3
  gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146_cache gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146;
  gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144_cache gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144;
  gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142_cache gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142;
};



inline void gp_in1_2_buf64_gp_in1_266_merged300_223_write(hw_uint<32> & gp_in1_2_buf64_gp_in1_266_merged300_223, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146.push(gp_in1_2_buf64_gp_in1_266_merged300_223);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144.push(gp_in1_2_buf64_gp_in1_266_merged300_223);
  gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142.push(gp_in1_2_buf64_gp_in1_266_merged300_223);
}

inline hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld375, int gp_in1_2_buf64_ld374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146 read pattern: { load_to_gp_in1_2_buf64_to_gp_11373376[root = 0, gp_in1_2_buf64_ld375, gp_in1_2_buf64_ld374] -> gp_in1_2_buf64[gp_in1_2_buf64_ld374, gp_in1_2_buf64_ld375] : 0 < gp_in1_2_buf64_ld375 <= 512 and 0 < gp_in1_2_buf64_ld374 <= 512 }
  // Read schedule : { load_to_gp_in1_2_buf64_to_gp_11373376[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 49] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  // Write schedule: { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged300_223 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146.peek(/* one reader or all rams */ (511 - gp_in1_2_buf64_ld374 >= 0 && 511 - gp_in1_2_buf64_ld375 >= 0) ? (514) : (-512 + gp_in1_2_buf64_ld374 == 0 && 511 - gp_in1_2_buf64_ld375 >= 0) ? (513) : (-512 + gp_in1_2_buf64_ld375 == 0 && 511 - gp_in1_2_buf64_ld374 >= 0) ? ((512 - gp_in1_2_buf64_ld374)) : 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged300_223;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld379, int gp_in1_2_buf64_ld378, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144 read pattern: { load_to_gp_in1_2_buf64_to_gp_26377380[root = 0, gp_in1_2_buf64_ld379, gp_in1_2_buf64_ld378] -> gp_in1_2_buf64[gp_in1_2_buf64_ld378, gp_in1_2_buf64_ld379] : 0 < gp_in1_2_buf64_ld379 <= 512 and 0 < gp_in1_2_buf64_ld378 <= 512 }
  // Read schedule : { load_to_gp_in1_2_buf64_to_gp_26377380[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 43] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  // Write schedule: { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged300_223 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged300_223;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142_select(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld383, int gp_in1_2_buf64_ld382, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142 read pattern: { load_to_gp_in1_2_buf64_to_gp_5381384[root = 0, gp_in1_2_buf64_ld383, gp_in1_2_buf64_ld382] -> gp_in1_2_buf64[gp_in1_2_buf64_ld382, gp_in1_2_buf64_ld383] : 0 <= gp_in1_2_buf64_ld383 <= 512 and 0 <= gp_in1_2_buf64_ld382 <= 512 }
  // Read schedule : { load_to_gp_in1_2_buf64_to_gp_5381384[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 47] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  // Write schedule: { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_gp_in1_266_merged300_223 = gp_in1_2_buf64.gp_in1_2_buf64_gp_in1_266_merged300_223_to_gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_gp_in1_266_merged300_223;
  return 0;
}

// # of bundles = 4
// gp_in1_266_merged300_write
//	gp_in1_2_buf64_gp_in1_266_merged300_223
inline void gp_in1_2_buf64_gp_in1_266_merged300_write_bundle_write(hw_uint<32>& gp_in1_266_merged300_write, gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_265, int gp_in1_266, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_gp_in1_266_merged300_223_res = gp_in1_266_merged300_write.extract<0, 31>();
	gp_in1_2_buf64_gp_in1_266_merged300_223_write(gp_in1_2_buf64_gp_in1_266_merged300_223_res, gp_in1_2_buf64, root, gp_in1_265, gp_in1_266, dynamic_address);
}

// load_to_gp_in1_2_buf64_to_gp_11373376_read
//	gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146
inline hw_uint<32> gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld375, int gp_in1_2_buf64_ld374, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146_res = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146_select(gp_in1_2_buf64, root, gp_in1_2_buf64_ld375, gp_in1_2_buf64_ld374, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_146_res);
	return result;
}

// load_to_gp_in1_2_buf64_to_gp_26377380_read
//	gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144
inline hw_uint<32> gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld379, int gp_in1_2_buf64_ld378, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144_res = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144_select(gp_in1_2_buf64, root, gp_in1_2_buf64_ld379, gp_in1_2_buf64_ld378, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_144_res);
	return result;
}

// load_to_gp_in1_2_buf64_to_gp_5381384_read
//	gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142
inline hw_uint<32> gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_read_bundle_read(gp_in1_2_buf64_cache& gp_in1_2_buf64, int root, int gp_in1_2_buf64_ld383, int gp_in1_2_buf64_ld382, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142_res = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142_select(gp_in1_2_buf64, root, gp_in1_2_buf64_ld383, gp_in1_2_buf64_ld382, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_142_res);
	return result;
}

struct gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_to_gp_in1_2_buf64_FIFO_buf541_diff87_277_cache {
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
    // { diff87[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_2_buf64_FIFO_buf541[1 + lp_in1_286, 1 + lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // # of banks: 1
  gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_to_gp_in1_2_buf64_FIFO_buf541_diff87_277_cache gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_to_gp_in1_2_buf64_FIFO_buf541_diff87_277;
};



inline void gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_write(hw_uint<32> & gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151, gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int gp_in1_2_buf64_to_gp_11373_ld543, int gp_in1_2_buf64_to_gp_11373_ld542, int dynamic_address) {
  gp_in1_2_buf64_FIFO_buf541.gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_to_gp_in1_2_buf64_FIFO_buf541_diff87_277.push(gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151);
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf541_diff87_277_select(gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf541_diff87_277 read pattern: { diff87[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_2_buf64_FIFO_buf541[1 + lp_in1_286, 1 + lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // Read schedule : { diff87[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf541544[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 52] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151 = gp_in1_2_buf64_FIFO_buf541.gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_to_gp_in1_2_buf64_FIFO_buf541_diff87_277.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151;
  return 0;
}

// # of bundles = 2
// diff87_read
//	gp_in1_2_buf64_FIFO_buf541_diff87_277
inline hw_uint<32> gp_in1_2_buf64_FIFO_buf541_diff87_read_bundle_read(gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_FIFO_buf541_diff87_277

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf541_diff87_277_res = gp_in1_2_buf64_FIFO_buf541_diff87_277_select(gp_in1_2_buf64_FIFO_buf541, root, lp_in1_285, lp_in1_286, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_FIFO_buf541_diff87_277_res);
	return result;
}

// load_to_gp_in1_2_buf64_FIFO_buf541544_write
//	gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151
inline void gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_FIFO_buf541544_write, gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int root, int gp_in1_2_buf64_to_gp_11373_ld543, int gp_in1_2_buf64_to_gp_11373_ld542, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_res = load_to_gp_in1_2_buf64_FIFO_buf541544_write.extract<0, 31>();
	gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_write(gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_151_res, gp_in1_2_buf64_FIFO_buf541, root, gp_in1_2_buf64_to_gp_11373_ld543, gp_in1_2_buf64_to_gp_11373_ld542, dynamic_address);
}

struct gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_to_gp_in1_2_buf64_FIFO_buf545_us91_3_cache {
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
    // { us91[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64_FIFO_buf545[o0, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 1023 and us_gp_in1_2_buf6490 < 2o0 <= 2 + us_gp_in1_2_buf6490 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // # of banks: 1
  gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_to_gp_in1_2_buf64_FIFO_buf545_us91_3_cache gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_to_gp_in1_2_buf64_FIFO_buf545_us91_3;
};



inline void gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_write(hw_uint<32> & gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149, gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int gp_in1_2_buf64_to_gp_26377_ld547, int gp_in1_2_buf64_to_gp_26377_ld546, int dynamic_address) {
  gp_in1_2_buf64_FIFO_buf545.gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_to_gp_in1_2_buf64_FIFO_buf545_us91_3.push(gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149);
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf545_us91_3_select(gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf545_us91_3 read pattern: { us91[root = 0, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490] -> gp_in1_2_buf64_FIFO_buf545[o0, o1] : 0 <= us_gp_in1_2_buf6489 <= 1023 and 0 <= us_gp_in1_2_buf6490 <= 1023 and us_gp_in1_2_buf6490 < 2o0 <= 2 + us_gp_in1_2_buf6490 and us_gp_in1_2_buf6489 < 2o1 <= 2 + us_gp_in1_2_buf6489 }
  // Read schedule : { us91[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 53] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf545548[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 46] : 0 < d1 <= 512 and 0 < d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149 = gp_in1_2_buf64_FIFO_buf545.gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_to_gp_in1_2_buf64_FIFO_buf545_us91_3.peek(/* one reader or all rams */ ((-1 - us_gp_in1_2_buf6489) % 2 == 0 && 1021 - us_gp_in1_2_buf6490 >= 0) ? ((511 - floord(2*us_gp_in1_2_buf6490, 4))) : 0);
  return value_gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_2_buf64_FIFO_buf545548_write
//	gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149
inline void gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_FIFO_buf545548_write, gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int gp_in1_2_buf64_to_gp_26377_ld547, int gp_in1_2_buf64_to_gp_26377_ld546, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_res = load_to_gp_in1_2_buf64_FIFO_buf545548_write.extract<0, 31>();
	gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_write(gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_149_res, gp_in1_2_buf64_FIFO_buf545, root, gp_in1_2_buf64_to_gp_26377_ld547, gp_in1_2_buf64_to_gp_26377_ld546, dynamic_address);
}

// us91_read
//	gp_in1_2_buf64_FIFO_buf545_us91_3
inline hw_uint<32> gp_in1_2_buf64_FIFO_buf545_us91_read_bundle_read(gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_FIFO_buf545_us91_3

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf545_us91_3_res = gp_in1_2_buf64_FIFO_buf545_us91_3_select(gp_in1_2_buf64_FIFO_buf545, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_FIFO_buf545_us91_3_res);
	return result;
}

struct gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9_cache {
	// RAM Box: {[0, 512], [0, 512]}
	// Capacity: 1029
	// # of read delays: 9
  // 0, 1, 2, 513, 514, 515, 1026, 1027, 1028
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 510> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 510> f11;
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

	inline hw_uint<32>  peek_512() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_513() {
		return f6;
	}

	inline hw_uint<32>  peek_514() {
		return f8;
	}

	inline hw_uint<32>  peek_515() {
		return f10;
	}

	inline hw_uint<32>  peek_1025() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_1026() {
		return f12;
	}

	inline hw_uint<32>  peek_1027() {
		return f14;
	}

	inline hw_uint<32>  peek_1028() {
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
    // cap: 1 reading from capacity: 510
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 510 reading from capacity: 1
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
    // cap: 1 reading from capacity: 510
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 510 reading from capacity: 1
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
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
    // { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // # of banks: 1
  gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9_cache gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9;
};



inline void gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_write(hw_uint<32> & gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147, gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_2_buf64_to_gp_5381_ld551, int gp_in1_2_buf64_to_gp_5381_ld550, int dynamic_address) {
  gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.push(gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147);
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_2();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_1();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_0();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_515();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_514();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 1 + 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_513();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_1028();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[1 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_1027();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

inline hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222_select(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222 read pattern: { gp_in1_374_merged306[root = 0, gp_in1_373, gp_in1_374] -> gp_in1_2_buf64_FIFO_buf549[2 + 2gp_in1_374, 2gp_in1_373] : 0 <= gp_in1_373 <= 255 and 0 <= gp_in1_374 <= 255 }
  // Read schedule : { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
  auto value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147 = gp_in1_2_buf64_FIFO_buf549.gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_merged_banks_9.peek_1026();
  return value_gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147;
  return 0;
}

// # of bundles = 2
// gp_in1_374_merged306_read
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221
//	gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222
inline hw_uint<288> gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_read_bundle_read(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221
    // gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222

	hw_uint<288> result;
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<0, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_214_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<32, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_215_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<64, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_216_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<96, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_217_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<128, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_218_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<160, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_219_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<192, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_220_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<224, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_221_res);
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222_res = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222_select(gp_in1_2_buf64_FIFO_buf549, root, gp_in1_373, gp_in1_374, dynamic_address);
	set_at<256, 288>(result, gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_222_res);
	return result;
}

// load_to_gp_in1_2_buf64_FIFO_buf549552_write
//	gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147
inline void gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_FIFO_buf549552_write, gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int root, int gp_in1_2_buf64_to_gp_5381_ld551, int gp_in1_2_buf64_to_gp_5381_ld550, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_res = load_to_gp_in1_2_buf64_FIFO_buf549552_write.extract<0, 31>();
	gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_write(gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_147_res, gp_in1_2_buf64_FIFO_buf549, root, gp_in1_2_buf64_to_gp_5381_ld551, gp_in1_2_buf64_to_gp_5381_ld550, dynamic_address);
}

struct gp_in1_2_buf64_us88_us91_2_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138_cache {
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
    // { load_to_gp_in1_2_buf64_us88_to_gp_10385388[root = 0, gp_in1_2_buf64_us88_ld387, gp_in1_2_buf64_us88_ld386] -> gp_in1_2_buf64_us88[gp_in1_2_buf64_us88_ld386, gp_in1_2_buf64_us88_ld387] : 0 <= gp_in1_2_buf64_us88_ld387 <= 1023 and 0 <= gp_in1_2_buf64_us88_ld386 <= 1023 }
  // # of banks: 1
  gp_in1_2_buf64_us88_us91_2_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138_cache gp_in1_2_buf64_us88_us91_2_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138;
};



inline void gp_in1_2_buf64_us88_us91_2_write(hw_uint<32> & gp_in1_2_buf64_us88_us91_2, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
  gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us91_2_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138.push(gp_in1_2_buf64_us88_us91_2);
}

inline hw_uint<32>  gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138_select(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int gp_in1_2_buf64_us88_ld387, int gp_in1_2_buf64_us88_ld386, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138 read pattern: { load_to_gp_in1_2_buf64_us88_to_gp_10385388[root = 0, gp_in1_2_buf64_us88_ld387, gp_in1_2_buf64_us88_ld386] -> gp_in1_2_buf64_us88[gp_in1_2_buf64_us88_ld386, gp_in1_2_buf64_us88_ld387] : 0 <= gp_in1_2_buf64_us88_ld387 <= 1023 and 0 <= gp_in1_2_buf64_us88_ld386 <= 1023 }
  // Read schedule : { load_to_gp_in1_2_buf64_us88_to_gp_10385388[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 61] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { us91[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 53] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_2_buf64_us88_us91_2 = gp_in1_2_buf64_us88.gp_in1_2_buf64_us88_us91_2_to_gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_us88_us91_2;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_2_buf64_us88_to_gp_10385388_read
//	gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138
inline hw_uint<32> gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_read_bundle_read(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int gp_in1_2_buf64_us88_ld387, int gp_in1_2_buf64_us88_ld386, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138_res = gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138_select(gp_in1_2_buf64_us88, root, gp_in1_2_buf64_us88_ld387, gp_in1_2_buf64_us88_ld386, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_138_res);
	return result;
}

// us91_write
//	gp_in1_2_buf64_us88_us91_2
inline void gp_in1_2_buf64_us88_us91_write_bundle_write(hw_uint<32>& us91_write, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int root, int us_gp_in1_2_buf6489, int us_gp_in1_2_buf6490, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_us88_us91_2_res = us91_write.extract<0, 31>();
	gp_in1_2_buf64_us88_us91_2_write(gp_in1_2_buf64_us88_us91_2_res, gp_in1_2_buf64_us88, root, us_gp_in1_2_buf6489, us_gp_in1_2_buf6490, dynamic_address);
}

struct gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_275_cache {
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
    // { diff95[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88_FIFO_buf553[lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // # of banks: 1
  gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_275_cache gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_275;
};



inline void gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_write(hw_uint<32> & gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int gp_in1_2_buf64_us88_to_gp_10385_ld555, int gp_in1_2_buf64_us88_to_gp_10385_ld554, int dynamic_address) {
  gp_in1_2_buf64_us88_FIFO_buf553.gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_275.push(gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139);
}

inline hw_uint<32>  gp_in1_2_buf64_us88_FIFO_buf553_diff95_275_select(gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_2_buf64_us88_FIFO_buf553_diff95_275 read pattern: { diff95[root = 0, lp_in1_193, lp_in1_194] -> gp_in1_2_buf64_us88_FIFO_buf553[lp_in1_194, lp_in1_193] : 0 <= lp_in1_193 <= 1023 and 0 <= lp_in1_194 <= 1023 }
  // Read schedule : { diff95[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 83] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_gp_in1_2_buf64_us88_FIFO_buf553556[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 71] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139 = gp_in1_2_buf64_us88_FIFO_buf553.gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_to_gp_in1_2_buf64_us88_FIFO_buf553_diff95_275.peek(/* one reader or all rams */ 0);
  return value_gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139;
  return 0;
}

// # of bundles = 2
// diff95_read
//	gp_in1_2_buf64_us88_FIFO_buf553_diff95_275
inline hw_uint<32> gp_in1_2_buf64_us88_FIFO_buf553_diff95_read_bundle_read(gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_2_buf64_us88_FIFO_buf553_diff95_275

	hw_uint<32> result;
	hw_uint<32>  gp_in1_2_buf64_us88_FIFO_buf553_diff95_275_res = gp_in1_2_buf64_us88_FIFO_buf553_diff95_275_select(gp_in1_2_buf64_us88_FIFO_buf553, root, lp_in1_193, lp_in1_194, dynamic_address);
	set_at<0, 32>(result, gp_in1_2_buf64_us88_FIFO_buf553_diff95_275_res);
	return result;
}

// load_to_gp_in1_2_buf64_us88_FIFO_buf553556_write
//	gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139
inline void gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_write_bundle_write(hw_uint<32>& load_to_gp_in1_2_buf64_us88_FIFO_buf553556_write, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int root, int gp_in1_2_buf64_us88_to_gp_10385_ld555, int gp_in1_2_buf64_us88_to_gp_10385_ld554, int dynamic_address) {
	hw_uint<32>  gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_res = load_to_gp_in1_2_buf64_us88_FIFO_buf553556_write.extract<0, 31>();
	gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_write(gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_139_res, gp_in1_2_buf64_us88_FIFO_buf553, root, gp_in1_2_buf64_us88_to_gp_10385_ld555, gp_in1_2_buf64_us88_to_gp_10385_ld554, dynamic_address);
}

struct gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132_cache {
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

struct gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130_cache {
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
    // { load_to_gp_in1_3_buf72_to_gp_15389392[root = 0, gp_in1_3_buf72_ld391, gp_in1_3_buf72_ld390] -> gp_in1_3_buf72[gp_in1_3_buf72_ld390, gp_in1_3_buf72_ld391] : 0 <= gp_in1_3_buf72_ld391 <= 255 and 0 <= gp_in1_3_buf72_ld390 <= 255 }
    // { load_to_gp_in1_3_buf72_to_gp_27393396[root = 0, gp_in1_3_buf72_ld395, gp_in1_3_buf72_ld394] -> gp_in1_3_buf72[gp_in1_3_buf72_ld394, gp_in1_3_buf72_ld395] : 0 <= gp_in1_3_buf72_ld395 <= 255 and 0 <= gp_in1_3_buf72_ld394 <= 255 }
  // # of banks: 2
  gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132_cache gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132;
  gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130_cache gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130;
};



inline void gp_in1_3_buf72_gp_in1_374_merged306_213_write(hw_uint<32> & gp_in1_3_buf72_gp_in1_374_merged306_213, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
  gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132.push(gp_in1_3_buf72_gp_in1_374_merged306_213);
  gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130.push(gp_in1_3_buf72_gp_in1_374_merged306_213);
}

inline hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132_select(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld391, int gp_in1_3_buf72_ld390, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132 read pattern: { load_to_gp_in1_3_buf72_to_gp_15389392[root = 0, gp_in1_3_buf72_ld391, gp_in1_3_buf72_ld390] -> gp_in1_3_buf72[gp_in1_3_buf72_ld390, gp_in1_3_buf72_ld391] : 0 <= gp_in1_3_buf72_ld391 <= 255 and 0 <= gp_in1_3_buf72_ld390 <= 255 }
  // Read schedule : { load_to_gp_in1_3_buf72_to_gp_15389392[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 58] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_gp_in1_374_merged306_213 = gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_gp_in1_374_merged306_213;
  return 0;
}

inline hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130_select(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld395, int gp_in1_3_buf72_ld394, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130 read pattern: { load_to_gp_in1_3_buf72_to_gp_27393396[root = 0, gp_in1_3_buf72_ld395, gp_in1_3_buf72_ld394] -> gp_in1_3_buf72[gp_in1_3_buf72_ld394, gp_in1_3_buf72_ld395] : 0 <= gp_in1_3_buf72_ld395 <= 255 and 0 <= gp_in1_3_buf72_ld394 <= 255 }
  // Read schedule : { load_to_gp_in1_3_buf72_to_gp_27393396[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 62] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_gp_in1_374_merged306_213 = gp_in1_3_buf72.gp_in1_3_buf72_gp_in1_374_merged306_213_to_gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_gp_in1_374_merged306_213;
  return 0;
}

// # of bundles = 3
// gp_in1_374_merged306_write
//	gp_in1_3_buf72_gp_in1_374_merged306_213
inline void gp_in1_3_buf72_gp_in1_374_merged306_write_bundle_write(hw_uint<32>& gp_in1_374_merged306_write, gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_373, int gp_in1_374, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_gp_in1_374_merged306_213_res = gp_in1_374_merged306_write.extract<0, 31>();
	gp_in1_3_buf72_gp_in1_374_merged306_213_write(gp_in1_3_buf72_gp_in1_374_merged306_213_res, gp_in1_3_buf72, root, gp_in1_373, gp_in1_374, dynamic_address);
}

// load_to_gp_in1_3_buf72_to_gp_15389392_read
//	gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132
inline hw_uint<32> gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_read_bundle_read(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld391, int gp_in1_3_buf72_ld390, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132_res = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132_select(gp_in1_3_buf72, root, gp_in1_3_buf72_ld391, gp_in1_3_buf72_ld390, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_132_res);
	return result;
}

// load_to_gp_in1_3_buf72_to_gp_27393396_read
//	gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130
inline hw_uint<32> gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_read_bundle_read(gp_in1_3_buf72_cache& gp_in1_3_buf72, int root, int gp_in1_3_buf72_ld395, int gp_in1_3_buf72_ld394, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130_res = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130_select(gp_in1_3_buf72, root, gp_in1_3_buf72_ld395, gp_in1_3_buf72_ld394, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_130_res);
	return result;
}

struct gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44_cache {
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
    // { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in1_3_buf72_FIFO_buf557[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // # of banks: 1
  gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44_cache gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44;
};



inline void gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_write(hw_uint<32> & gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int gp_in1_3_buf72_to_gp_15389_ld559, int gp_in1_3_buf72_to_gp_15389_ld558, int dynamic_address) {
  gp_in1_3_buf72_FIFO_buf557.gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44.push(gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135);
}

inline hw_uint<32>  gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44_select(gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44 read pattern: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[root = 0, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118] -> gp_in1_3_buf72_FIFO_buf557[pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117] : 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117 <= 255 and 0 <= pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118 <= 255 }
  // Read schedule : { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 72] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { load_to_gp_in1_3_buf72_FIFO_buf557560[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 68] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135 = gp_in1_3_buf72_FIFO_buf557.gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_to_gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_3_buf72_FIFO_buf557560_write
//	gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135
inline void gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_write_bundle_write(hw_uint<32>& load_to_gp_in1_3_buf72_FIFO_buf557560_write, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int gp_in1_3_buf72_to_gp_15389_ld559, int gp_in1_3_buf72_to_gp_15389_ld558, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_res = load_to_gp_in1_3_buf72_FIFO_buf557560_write.extract<0, 31>();
	gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_write(gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_135_res, gp_in1_3_buf72_FIFO_buf557, root, gp_in1_3_buf72_to_gp_15389_ld559, gp_in1_3_buf72_to_gp_15389_ld558, dynamic_address);
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_read
//	gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44
inline hw_uint<32> gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_read_bundle_read(gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44_res = gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44_select(gp_in1_3_buf72_FIFO_buf557, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_44_res);
	return result;
}

struct gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_to_gp_in1_3_buf72_FIFO_buf561_us83_5_cache {
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
    // { us83[root = 0, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282] -> gp_in1_3_buf72_FIFO_buf561[o0, o1] : 0 <= us_gp_in1_3_buf7281 <= 511 and 0 <= us_gp_in1_3_buf7282 <= 511 and -1 + us_gp_in1_3_buf7282 <= 2o0 <= us_gp_in1_3_buf7282 and -1 + us_gp_in1_3_buf7281 <= 2o1 <= us_gp_in1_3_buf7281 }
  // # of banks: 1
  gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_to_gp_in1_3_buf72_FIFO_buf561_us83_5_cache gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_to_gp_in1_3_buf72_FIFO_buf561_us83_5;
};



inline void gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_write(hw_uint<32> & gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133, gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int gp_in1_3_buf72_to_gp_27393_ld563, int gp_in1_3_buf72_to_gp_27393_ld562, int dynamic_address) {
  gp_in1_3_buf72_FIFO_buf561.gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_to_gp_in1_3_buf72_FIFO_buf561_us83_5.push(gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133);
}

inline hw_uint<32>  gp_in1_3_buf72_FIFO_buf561_us83_5_select(gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_FIFO_buf561_us83_5 read pattern: { us83[root = 0, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282] -> gp_in1_3_buf72_FIFO_buf561[o0, o1] : 0 <= us_gp_in1_3_buf7281 <= 511 and 0 <= us_gp_in1_3_buf7282 <= 511 and -1 + us_gp_in1_3_buf7282 <= 2o0 <= us_gp_in1_3_buf7282 and -1 + us_gp_in1_3_buf7281 <= 2o1 <= us_gp_in1_3_buf7281 }
  // Read schedule : { us83[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in1_3_buf72_FIFO_buf561564[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 73] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133 = gp_in1_3_buf72_FIFO_buf561.gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_to_gp_in1_3_buf72_FIFO_buf561_us83_5.peek(/* one reader or all rams */ ((-1 - us_gp_in1_3_buf7281) % 2 == 0 && 509 - us_gp_in1_3_buf7282 >= 0) ? ((255 - floord(2*us_gp_in1_3_buf7282, 4))) : 0);
  return value_gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_3_buf72_FIFO_buf561564_write
//	gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133
inline void gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_write_bundle_write(hw_uint<32>& load_to_gp_in1_3_buf72_FIFO_buf561564_write, gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int gp_in1_3_buf72_to_gp_27393_ld563, int gp_in1_3_buf72_to_gp_27393_ld562, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_res = load_to_gp_in1_3_buf72_FIFO_buf561564_write.extract<0, 31>();
	gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_write(gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_133_res, gp_in1_3_buf72_FIFO_buf561, root, gp_in1_3_buf72_to_gp_27393_ld563, gp_in1_3_buf72_to_gp_27393_ld562, dynamic_address);
}

// us83_read
//	gp_in1_3_buf72_FIFO_buf561_us83_5
inline hw_uint<32> gp_in1_3_buf72_FIFO_buf561_us83_read_bundle_read(gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_FIFO_buf561_us83_5

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_FIFO_buf561_us83_5_res = gp_in1_3_buf72_FIFO_buf561_us83_5_select(gp_in1_3_buf72_FIFO_buf561, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_FIFO_buf561_us83_5_res);
	return result;
}

struct gp_in1_3_buf72_us80_us83_4_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126_cache {
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
    // { load_to_gp_in1_3_buf72_us80_to_gp_11397400[root = 0, gp_in1_3_buf72_us80_ld399, gp_in1_3_buf72_us80_ld398] -> gp_in1_3_buf72_us80[gp_in1_3_buf72_us80_ld398, gp_in1_3_buf72_us80_ld399] : 0 <= gp_in1_3_buf72_us80_ld399 <= 511 and 0 <= gp_in1_3_buf72_us80_ld398 <= 511 }
  // # of banks: 1
  gp_in1_3_buf72_us80_us83_4_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126_cache gp_in1_3_buf72_us80_us83_4_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126;
};



inline void gp_in1_3_buf72_us80_us83_4_write(hw_uint<32> & gp_in1_3_buf72_us80_us83_4, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
  gp_in1_3_buf72_us80.gp_in1_3_buf72_us80_us83_4_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126.push(gp_in1_3_buf72_us80_us83_4);
}

inline hw_uint<32>  gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126_select(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int gp_in1_3_buf72_us80_ld399, int gp_in1_3_buf72_us80_ld398, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126 read pattern: { load_to_gp_in1_3_buf72_us80_to_gp_11397400[root = 0, gp_in1_3_buf72_us80_ld399, gp_in1_3_buf72_us80_ld398] -> gp_in1_3_buf72_us80[gp_in1_3_buf72_us80_ld398, gp_in1_3_buf72_us80_ld399] : 0 <= gp_in1_3_buf72_us80_ld399 <= 511 and 0 <= gp_in1_3_buf72_us80_ld398 <= 511 }
  // Read schedule : { load_to_gp_in1_3_buf72_us80_to_gp_11397400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us83[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_3_buf72_us80_us83_4 = gp_in1_3_buf72_us80.gp_in1_3_buf72_us80_us83_4_to_gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_us80_us83_4;
  return 0;
}

// # of bundles = 2
// load_to_gp_in1_3_buf72_us80_to_gp_11397400_read
//	gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126
inline hw_uint<32> gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_read_bundle_read(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int gp_in1_3_buf72_us80_ld399, int gp_in1_3_buf72_us80_ld398, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126_res = gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126_select(gp_in1_3_buf72_us80, root, gp_in1_3_buf72_us80_ld399, gp_in1_3_buf72_us80_ld398, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_126_res);
	return result;
}

// us83_write
//	gp_in1_3_buf72_us80_us83_4
inline void gp_in1_3_buf72_us80_us83_write_bundle_write(hw_uint<32>& us83_write, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int root, int us_gp_in1_3_buf7281, int us_gp_in1_3_buf7282, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_us80_us83_4_res = us83_write.extract<0, 31>();
	gp_in1_3_buf72_us80_us83_4_write(gp_in1_3_buf72_us80_us83_4_res, gp_in1_3_buf72_us80, root, us_gp_in1_3_buf7281, us_gp_in1_3_buf7282, dynamic_address);
}

struct gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_278_cache {
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
    // { diff87[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_3_buf72_us80_FIFO_buf565[lp_in1_286, lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // # of banks: 1
  gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_278_cache gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_278;
};



inline void gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_write(hw_uint<32> & gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int gp_in1_3_buf72_us80_to_gp_11397_ld567, int gp_in1_3_buf72_us80_to_gp_11397_ld566, int dynamic_address) {
  gp_in1_3_buf72_us80_FIFO_buf565.gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_278.push(gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127);
}

inline hw_uint<32>  gp_in1_3_buf72_us80_FIFO_buf565_diff87_278_select(gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in1_3_buf72_us80_FIFO_buf565_diff87_278 read pattern: { diff87[root = 0, lp_in1_285, lp_in1_286] -> gp_in1_3_buf72_us80_FIFO_buf565[lp_in1_286, lp_in1_285] : 0 <= lp_in1_285 <= 511 and 0 <= lp_in1_286 <= 511 }
  // Read schedule : { diff87[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_gp_in1_3_buf72_us80_FIFO_buf565568[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 88] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127 = gp_in1_3_buf72_us80_FIFO_buf565.gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_to_gp_in1_3_buf72_us80_FIFO_buf565_diff87_278.peek(/* one reader or all rams */ 0);
  return value_gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127;
  return 0;
}

// # of bundles = 2
// diff87_read
//	gp_in1_3_buf72_us80_FIFO_buf565_diff87_278
inline hw_uint<32> gp_in1_3_buf72_us80_FIFO_buf565_diff87_read_bundle_read(gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in1_3_buf72_us80_FIFO_buf565_diff87_278

	hw_uint<32> result;
	hw_uint<32>  gp_in1_3_buf72_us80_FIFO_buf565_diff87_278_res = gp_in1_3_buf72_us80_FIFO_buf565_diff87_278_select(gp_in1_3_buf72_us80_FIFO_buf565, root, lp_in1_285, lp_in1_286, dynamic_address);
	set_at<0, 32>(result, gp_in1_3_buf72_us80_FIFO_buf565_diff87_278_res);
	return result;
}

// load_to_gp_in1_3_buf72_us80_FIFO_buf565568_write
//	gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127
inline void gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_write_bundle_write(hw_uint<32>& load_to_gp_in1_3_buf72_us80_FIFO_buf565568_write, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int root, int gp_in1_3_buf72_us80_to_gp_11397_ld567, int gp_in1_3_buf72_us80_to_gp_11397_ld566, int dynamic_address) {
	hw_uint<32>  gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_res = load_to_gp_in1_3_buf72_us80_FIFO_buf565568_write.extract<0, 31>();
	gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_write(gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_127_res, gp_in1_3_buf72_us80_FIFO_buf565, root, gp_in1_3_buf72_us80_to_gp_11397_ld567, gp_in1_3_buf72_us80_to_gp_11397_ld566, dynamic_address);
}

struct in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_0401404_120_cache {
	// RAM Box: {[0, 2054], [0, 2054]}
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

struct in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_6405408_118_cache {
	// RAM Box: {[7, 2054], [7, 2054]}
	// Capacity: 2056
	// # of read delays: 2056
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055
	fifo<hw_uint<32> , 2056> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2055 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in0_cache {
  // Reader addrs...
    // { load_to_in0_to_gp_0401404[root = 0, in0_ld403, in0_ld402] -> in0[in0_ld402, in0_ld403] : 0 <= in0_ld403 <= 2054 and 0 <= in0_ld402 <= 2054 }
    // { load_to_in0_to_gp_6405408[root = 0, in0_ld407, in0_ld406] -> in0[in0_ld406, in0_ld407] : 7 <= in0_ld407 <= 2054 and 7 <= in0_ld406 <= 2054 }
  // # of banks: 2
  in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_0401404_120_cache in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_0401404_120;
  in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_6405408_118_cache in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_6405408_118;
};



inline void in0_pw_math_in0_oc03_40_write(hw_uint<32> & in0_pw_math_in0_oc03_40, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
  in0.in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_0401404_120.push(in0_pw_math_in0_oc03_40);
  in0.in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_6405408_118.push(in0_pw_math_in0_oc03_40);
}

inline hw_uint<32>  in0_load_to_in0_to_gp_0401404_120_select(in0_cache& in0, int root, int in0_ld403, int in0_ld402, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_load_to_in0_to_gp_0401404_120 read pattern: { load_to_in0_to_gp_0401404[root = 0, in0_ld403, in0_ld402] -> in0[in0_ld402, in0_ld403] : 0 <= in0_ld403 <= 2054 and 0 <= in0_ld402 <= 2054 }
  // Read schedule : { load_to_in0_to_gp_0401404[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  // Write schedule: { pw_math_in0_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_pw_math_in0_oc03_40 = in0.in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_0401404_120.peek(/* one reader or all rams */ 0);
  return value_in0_pw_math_in0_oc03_40;
  return 0;
}

inline hw_uint<32>  in0_load_to_in0_to_gp_6405408_118_select(in0_cache& in0, int root, int in0_ld407, int in0_ld406, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_load_to_in0_to_gp_6405408_118 read pattern: { load_to_in0_to_gp_6405408[root = 0, in0_ld407, in0_ld406] -> in0[in0_ld406, in0_ld407] : 7 <= in0_ld407 <= 2054 and 7 <= in0_ld406 <= 2054 }
  // Read schedule : { load_to_in0_to_gp_6405408[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
  // Write schedule: { pw_math_in0_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_pw_math_in0_oc03_40 = in0.in0_pw_math_in0_oc03_40_to_in0_load_to_in0_to_gp_6405408_118.peek(/* one reader or all rams */ (2053 - in0_ld406 >= 0 && 2053 - in0_ld407 >= 0) ? (2055) : (-2054 + in0_ld406 == 0 && 2053 - in0_ld407 >= 0) ? (2055) : (-2054 + in0_ld407 == 0 && 2053 - in0_ld406 >= 0) ? ((2054 - in0_ld406)) : 0);
  return value_in0_pw_math_in0_oc03_40;
  return 0;
}

// # of bundles = 3
// load_to_in0_to_gp_0401404_read
//	in0_load_to_in0_to_gp_0401404_120
inline hw_uint<32> in0_load_to_in0_to_gp_0401404_read_bundle_read(in0_cache& in0, int root, int in0_ld403, int in0_ld402, int dynamic_address) {
  // # of ports in bundle: 1
    // in0_load_to_in0_to_gp_0401404_120

	hw_uint<32> result;
	hw_uint<32>  in0_load_to_in0_to_gp_0401404_120_res = in0_load_to_in0_to_gp_0401404_120_select(in0, root, in0_ld403, in0_ld402, dynamic_address);
	set_at<0, 32>(result, in0_load_to_in0_to_gp_0401404_120_res);
	return result;
}

// load_to_in0_to_gp_6405408_read
//	in0_load_to_in0_to_gp_6405408_118
inline hw_uint<32> in0_load_to_in0_to_gp_6405408_read_bundle_read(in0_cache& in0, int root, int in0_ld407, int in0_ld406, int dynamic_address) {
  // # of ports in bundle: 1
    // in0_load_to_in0_to_gp_6405408_118

	hw_uint<32> result;
	hw_uint<32>  in0_load_to_in0_to_gp_6405408_118_res = in0_load_to_in0_to_gp_6405408_118_select(in0, root, in0_ld407, in0_ld406, dynamic_address);
	set_at<0, 32>(result, in0_load_to_in0_to_gp_6405408_118_res);
	return result;
}

// pw_math_in0_oc03_write
//	in0_pw_math_in0_oc03_40
inline void in0_pw_math_in0_oc03_write_bundle_write(hw_uint<32>& pw_math_in0_oc03_write, in0_cache& in0, int root, int pw_math_in0_oc01, int pw_math_in0_oc02, int dynamic_address) {
	hw_uint<32>  in0_pw_math_in0_oc03_40_res = pw_math_in0_oc03_write.extract<0, 31>();
	in0_pw_math_in0_oc03_40_write(in0_pw_math_in0_oc03_40_res, in0, root, pw_math_in0_oc01, pw_math_in0_oc02, dynamic_address);
}

struct in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9_cache {
	// RAM Box: {[0, 2054], [0, 2054]}
	// Capacity: 4113
	// # of read delays: 9
  // 0, 1, 2, 2055, 2056, 2057, 4110, 4111, 4112
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 2052> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2052> f11;
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

	inline hw_uint<32>  peek_2054() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2055() {
		return f6;
	}

	inline hw_uint<32>  peek_2056() {
		return f8;
	}

	inline hw_uint<32>  peek_2057() {
		return f10;
	}

	inline hw_uint<32>  peek_4109() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_4110() {
		return f12;
	}

	inline hw_uint<32>  peek_4111() {
		return f14;
	}

	inline hw_uint<32>  peek_4112() {
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
    // cap: 1 reading from capacity: 2052
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2052 reading from capacity: 1
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
    // cap: 1 reading from capacity: 2052
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2052 reading from capacity: 1
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

struct in0_FIFO_buf569_cache {
  // Reader addrs...
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
    // { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // # of banks: 1
  in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9_cache in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9;
};



inline void in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_write(hw_uint<32> & in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123, in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int in0_to_gp_0401_ld571, int in0_to_gp_0401_ld570, int dynamic_address) {
  in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.push(in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123);
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_264_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_264 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_2();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_265_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_265 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_1();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_266_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_266 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_0();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_267_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_267 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_2057();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_268_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_268 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_2056();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_269_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_269 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 1 + 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_2055();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_270_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_270 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_4112();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_271_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_271 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[1 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_4111();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

inline hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_272_select(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf569_gp_in0_110_merged303_272 read pattern: { gp_in0_110_merged303[root = 0, gp_in0_19, gp_in0_110] -> in0_FIFO_buf569[2 + 2gp_in0_110, 2gp_in0_19] : 0 <= gp_in0_19 <= 1026 and 0 <= gp_in0_110 <= 1026 }
  // Read schedule : { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123 = in0_FIFO_buf569.in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_merged_banks_9.peek_4110();
  return value_in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123;
  return 0;
}

// # of bundles = 2
// gp_in0_110_merged303_read
//	in0_FIFO_buf569_gp_in0_110_merged303_264
//	in0_FIFO_buf569_gp_in0_110_merged303_265
//	in0_FIFO_buf569_gp_in0_110_merged303_266
//	in0_FIFO_buf569_gp_in0_110_merged303_267
//	in0_FIFO_buf569_gp_in0_110_merged303_268
//	in0_FIFO_buf569_gp_in0_110_merged303_269
//	in0_FIFO_buf569_gp_in0_110_merged303_270
//	in0_FIFO_buf569_gp_in0_110_merged303_271
//	in0_FIFO_buf569_gp_in0_110_merged303_272
inline hw_uint<288> in0_FIFO_buf569_gp_in0_110_merged303_read_bundle_read(in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int gp_in0_19, int gp_in0_110, int dynamic_address) {
  // # of ports in bundle: 9
    // in0_FIFO_buf569_gp_in0_110_merged303_264
    // in0_FIFO_buf569_gp_in0_110_merged303_265
    // in0_FIFO_buf569_gp_in0_110_merged303_266
    // in0_FIFO_buf569_gp_in0_110_merged303_267
    // in0_FIFO_buf569_gp_in0_110_merged303_268
    // in0_FIFO_buf569_gp_in0_110_merged303_269
    // in0_FIFO_buf569_gp_in0_110_merged303_270
    // in0_FIFO_buf569_gp_in0_110_merged303_271
    // in0_FIFO_buf569_gp_in0_110_merged303_272

	hw_uint<288> result;
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_264_res = in0_FIFO_buf569_gp_in0_110_merged303_264_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<0, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_264_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_265_res = in0_FIFO_buf569_gp_in0_110_merged303_265_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<32, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_265_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_266_res = in0_FIFO_buf569_gp_in0_110_merged303_266_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<64, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_266_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_267_res = in0_FIFO_buf569_gp_in0_110_merged303_267_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<96, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_267_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_268_res = in0_FIFO_buf569_gp_in0_110_merged303_268_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<128, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_268_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_269_res = in0_FIFO_buf569_gp_in0_110_merged303_269_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<160, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_269_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_270_res = in0_FIFO_buf569_gp_in0_110_merged303_270_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<192, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_270_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_271_res = in0_FIFO_buf569_gp_in0_110_merged303_271_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<224, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_271_res);
	hw_uint<32>  in0_FIFO_buf569_gp_in0_110_merged303_272_res = in0_FIFO_buf569_gp_in0_110_merged303_272_select(in0_FIFO_buf569, root, gp_in0_19, gp_in0_110, dynamic_address);
	set_at<256, 288>(result, in0_FIFO_buf569_gp_in0_110_merged303_272_res);
	return result;
}

// load_to_in0_FIFO_buf569572_write
//	in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123
inline void in0_FIFO_buf569_load_to_in0_FIFO_buf569572_write_bundle_write(hw_uint<32>& load_to_in0_FIFO_buf569572_write, in0_FIFO_buf569_cache& in0_FIFO_buf569, int root, int in0_to_gp_0401_ld571, int in0_to_gp_0401_ld570, int dynamic_address) {
	hw_uint<32>  in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_res = load_to_in0_FIFO_buf569572_write.extract<0, 31>();
	in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_write(in0_FIFO_buf569_load_to_in0_FIFO_buf569572_123_res, in0_FIFO_buf569, root, in0_to_gp_0401_ld571, in0_to_gp_0401_ld570, dynamic_address);
}

struct in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_to_in0_FIFO_buf573_diff55_280_cache {
	// RAM Box: {[7, 2054], [7, 2054]}
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
    // { diff55[root = 0, lp_in0_053, lp_in0_054] -> in0_FIFO_buf573[7 + lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 2047 }
  // # of banks: 1
  in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_to_in0_FIFO_buf573_diff55_280_cache in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_to_in0_FIFO_buf573_diff55_280;
};



inline void in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_write(hw_uint<32> & in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121, in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int in0_to_gp_6405_ld575, int in0_to_gp_6405_ld574, int dynamic_address) {
  in0_FIFO_buf573.in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_to_in0_FIFO_buf573_diff55_280.push(in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121);
}

inline hw_uint<32>  in0_FIFO_buf573_diff55_280_select(in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in0_FIFO_buf573_diff55_280 read pattern: { diff55[root = 0, lp_in0_053, lp_in0_054] -> in0_FIFO_buf573[7 + lp_in0_054, 7 + lp_in0_053] : 0 <= lp_in0_053 <= 2047 and 0 <= lp_in0_054 <= 2047 }
  // Read schedule : { diff55[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_in0_FIFO_buf573576[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 11] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
  auto value_in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121 = in0_FIFO_buf573.in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_to_in0_FIFO_buf573_diff55_280.peek(/* one reader or all rams */ 0);
  return value_in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121;
  return 0;
}

// # of bundles = 2
// diff55_read
//	in0_FIFO_buf573_diff55_280
inline hw_uint<32> in0_FIFO_buf573_diff55_read_bundle_read(in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  // # of ports in bundle: 1
    // in0_FIFO_buf573_diff55_280

	hw_uint<32> result;
	hw_uint<32>  in0_FIFO_buf573_diff55_280_res = in0_FIFO_buf573_diff55_280_select(in0_FIFO_buf573, root, lp_in0_053, lp_in0_054, dynamic_address);
	set_at<0, 32>(result, in0_FIFO_buf573_diff55_280_res);
	return result;
}

// load_to_in0_FIFO_buf573576_write
//	in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121
inline void in0_FIFO_buf573_load_to_in0_FIFO_buf573576_write_bundle_write(hw_uint<32>& load_to_in0_FIFO_buf573576_write, in0_FIFO_buf573_cache& in0_FIFO_buf573, int root, int in0_to_gp_6405_ld575, int in0_to_gp_6405_ld574, int dynamic_address) {
	hw_uint<32>  in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_res = load_to_in0_FIFO_buf573576_write.extract<0, 31>();
	in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_write(in0_FIFO_buf573_load_to_in0_FIFO_buf573576_121_res, in0_FIFO_buf573, root, in0_to_gp_6405_ld575, in0_to_gp_6405_ld574, dynamic_address);
}

struct in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_3409412_112_cache {
	// RAM Box: {[0, 2054], [0, 2054]}
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

struct in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_9413416_110_cache {
	// RAM Box: {[7, 2054], [7, 2054]}
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

struct in1_cache {
  // Reader addrs...
    // { load_to_in1_to_gp_3409412[root = 0, in1_ld411, in1_ld410] -> in1[in1_ld410, in1_ld411] : 0 <= in1_ld411 <= 2054 and 0 <= in1_ld410 <= 2054 }
    // { load_to_in1_to_gp_9413416[root = 0, in1_ld415, in1_ld414] -> in1[in1_ld414, in1_ld415] : 7 <= in1_ld415 <= 2054 and 7 <= in1_ld414 <= 2054 }
  // # of banks: 2
  in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_3409412_112_cache in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_3409412_112;
  in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_9413416_110_cache in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_9413416_110;
};



inline void in1_pw_math_in1_oc47_38_write(hw_uint<32> & in1_pw_math_in1_oc47_38, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
  in1.in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_3409412_112.push(in1_pw_math_in1_oc47_38);
  in1.in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_9413416_110.push(in1_pw_math_in1_oc47_38);
}

inline hw_uint<32>  in1_load_to_in1_to_gp_3409412_112_select(in1_cache& in1, int root, int in1_ld411, int in1_ld410, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_load_to_in1_to_gp_3409412_112 read pattern: { load_to_in1_to_gp_3409412[root = 0, in1_ld411, in1_ld410] -> in1[in1_ld410, in1_ld411] : 0 <= in1_ld411 <= 2054 and 0 <= in1_ld410 <= 2054 }
  // Read schedule : { load_to_in1_to_gp_3409412[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  // Write schedule: { pw_math_in1_oc47[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_pw_math_in1_oc47_38 = in1.in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_3409412_112.peek(/* one reader or all rams */ 0);
  return value_in1_pw_math_in1_oc47_38;
  return 0;
}

inline hw_uint<32>  in1_load_to_in1_to_gp_9413416_110_select(in1_cache& in1, int root, int in1_ld415, int in1_ld414, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_load_to_in1_to_gp_9413416_110 read pattern: { load_to_in1_to_gp_9413416[root = 0, in1_ld415, in1_ld414] -> in1[in1_ld414, in1_ld415] : 7 <= in1_ld415 <= 2054 and 7 <= in1_ld414 <= 2054 }
  // Read schedule : { load_to_in1_to_gp_9413416[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
  // Write schedule: { pw_math_in1_oc47[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_pw_math_in1_oc47_38 = in1.in1_pw_math_in1_oc47_38_to_in1_load_to_in1_to_gp_9413416_110.peek(/* one reader or all rams */ 0);
  return value_in1_pw_math_in1_oc47_38;
  return 0;
}

// # of bundles = 3
// load_to_in1_to_gp_3409412_read
//	in1_load_to_in1_to_gp_3409412_112
inline hw_uint<32> in1_load_to_in1_to_gp_3409412_read_bundle_read(in1_cache& in1, int root, int in1_ld411, int in1_ld410, int dynamic_address) {
  // # of ports in bundle: 1
    // in1_load_to_in1_to_gp_3409412_112

	hw_uint<32> result;
	hw_uint<32>  in1_load_to_in1_to_gp_3409412_112_res = in1_load_to_in1_to_gp_3409412_112_select(in1, root, in1_ld411, in1_ld410, dynamic_address);
	set_at<0, 32>(result, in1_load_to_in1_to_gp_3409412_112_res);
	return result;
}

// load_to_in1_to_gp_9413416_read
//	in1_load_to_in1_to_gp_9413416_110
inline hw_uint<32> in1_load_to_in1_to_gp_9413416_read_bundle_read(in1_cache& in1, int root, int in1_ld415, int in1_ld414, int dynamic_address) {
  // # of ports in bundle: 1
    // in1_load_to_in1_to_gp_9413416_110

	hw_uint<32> result;
	hw_uint<32>  in1_load_to_in1_to_gp_9413416_110_res = in1_load_to_in1_to_gp_9413416_110_select(in1, root, in1_ld415, in1_ld414, dynamic_address);
	set_at<0, 32>(result, in1_load_to_in1_to_gp_9413416_110_res);
	return result;
}

// pw_math_in1_oc47_write
//	in1_pw_math_in1_oc47_38
inline void in1_pw_math_in1_oc47_write_bundle_write(hw_uint<32>& pw_math_in1_oc47_write, in1_cache& in1, int root, int pw_math_in1_oc45, int pw_math_in1_oc46, int dynamic_address) {
	hw_uint<32>  in1_pw_math_in1_oc47_38_res = pw_math_in1_oc47_write.extract<0, 31>();
	in1_pw_math_in1_oc47_38_write(in1_pw_math_in1_oc47_38_res, in1, root, pw_math_in1_oc45, pw_math_in1_oc46, dynamic_address);
}

struct in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9_cache {
	// RAM Box: {[0, 2054], [0, 2054]}
	// Capacity: 4113
	// # of read delays: 9
  // 0, 1, 2, 2055, 2056, 2057, 4110, 4111, 4112
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 2052> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 2052> f11;
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

	inline hw_uint<32>  peek_2054() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_2055() {
		return f6;
	}

	inline hw_uint<32>  peek_2056() {
		return f8;
	}

	inline hw_uint<32>  peek_2057() {
		return f10;
	}

	inline hw_uint<32>  peek_4109() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_4110() {
		return f12;
	}

	inline hw_uint<32>  peek_4111() {
		return f14;
	}

	inline hw_uint<32>  peek_4112() {
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
    // cap: 1 reading from capacity: 2052
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2052 reading from capacity: 1
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
    // cap: 1 reading from capacity: 2052
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 2052 reading from capacity: 1
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

struct in1_FIFO_buf577_cache {
  // Reader addrs...
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
    // { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // # of banks: 1
  in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9_cache in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9;
};



inline void in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_write(hw_uint<32> & in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115, in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int in1_to_gp_3409_ld579, int in1_to_gp_3409_ld578, int dynamic_address) {
  in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.push(in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115);
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_234_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_234 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_2();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_235_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_235 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_1();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_236_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_236 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_0();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_237_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_237 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_2057();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_238_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_238 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_2056();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_239_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_239 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 1 + 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_2055();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_240_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_240 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_4112();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_241_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_241 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[1 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_4111();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

inline hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_242_select(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf577_gp_in1_158_merged297_242 read pattern: { gp_in1_158_merged297[root = 0, gp_in1_157, gp_in1_158] -> in1_FIFO_buf577[2 + 2gp_in1_158, 2gp_in1_157] : 0 <= gp_in1_157 <= 1026 and 0 <= gp_in1_158 <= 1026 }
  // Read schedule : { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
  // Write schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
  auto value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115 = in1_FIFO_buf577.in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_merged_banks_9.peek_4110();
  return value_in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115;
  return 0;
}

// # of bundles = 2
// gp_in1_158_merged297_read
//	in1_FIFO_buf577_gp_in1_158_merged297_234
//	in1_FIFO_buf577_gp_in1_158_merged297_235
//	in1_FIFO_buf577_gp_in1_158_merged297_236
//	in1_FIFO_buf577_gp_in1_158_merged297_237
//	in1_FIFO_buf577_gp_in1_158_merged297_238
//	in1_FIFO_buf577_gp_in1_158_merged297_239
//	in1_FIFO_buf577_gp_in1_158_merged297_240
//	in1_FIFO_buf577_gp_in1_158_merged297_241
//	in1_FIFO_buf577_gp_in1_158_merged297_242
inline hw_uint<288> in1_FIFO_buf577_gp_in1_158_merged297_read_bundle_read(in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int gp_in1_157, int gp_in1_158, int dynamic_address) {
  // # of ports in bundle: 9
    // in1_FIFO_buf577_gp_in1_158_merged297_234
    // in1_FIFO_buf577_gp_in1_158_merged297_235
    // in1_FIFO_buf577_gp_in1_158_merged297_236
    // in1_FIFO_buf577_gp_in1_158_merged297_237
    // in1_FIFO_buf577_gp_in1_158_merged297_238
    // in1_FIFO_buf577_gp_in1_158_merged297_239
    // in1_FIFO_buf577_gp_in1_158_merged297_240
    // in1_FIFO_buf577_gp_in1_158_merged297_241
    // in1_FIFO_buf577_gp_in1_158_merged297_242

	hw_uint<288> result;
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_234_res = in1_FIFO_buf577_gp_in1_158_merged297_234_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<0, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_234_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_235_res = in1_FIFO_buf577_gp_in1_158_merged297_235_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<32, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_235_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_236_res = in1_FIFO_buf577_gp_in1_158_merged297_236_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<64, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_236_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_237_res = in1_FIFO_buf577_gp_in1_158_merged297_237_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<96, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_237_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_238_res = in1_FIFO_buf577_gp_in1_158_merged297_238_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<128, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_238_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_239_res = in1_FIFO_buf577_gp_in1_158_merged297_239_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<160, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_239_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_240_res = in1_FIFO_buf577_gp_in1_158_merged297_240_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<192, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_240_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_241_res = in1_FIFO_buf577_gp_in1_158_merged297_241_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<224, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_241_res);
	hw_uint<32>  in1_FIFO_buf577_gp_in1_158_merged297_242_res = in1_FIFO_buf577_gp_in1_158_merged297_242_select(in1_FIFO_buf577, root, gp_in1_157, gp_in1_158, dynamic_address);
	set_at<256, 288>(result, in1_FIFO_buf577_gp_in1_158_merged297_242_res);
	return result;
}

// load_to_in1_FIFO_buf577580_write
//	in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115
inline void in1_FIFO_buf577_load_to_in1_FIFO_buf577580_write_bundle_write(hw_uint<32>& load_to_in1_FIFO_buf577580_write, in1_FIFO_buf577_cache& in1_FIFO_buf577, int root, int in1_to_gp_3409_ld579, int in1_to_gp_3409_ld578, int dynamic_address) {
	hw_uint<32>  in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_res = load_to_in1_FIFO_buf577580_write.extract<0, 31>();
	in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_write(in1_FIFO_buf577_load_to_in1_FIFO_buf577580_115_res, in1_FIFO_buf577, root, in1_to_gp_3409_ld579, in1_to_gp_3409_ld578, dynamic_address);
}

struct in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_to_in1_FIFO_buf581_diff103_289_cache {
	// RAM Box: {[7, 2054], [7, 2054]}
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
    // { diff103[root = 0, lp_in1_0101, lp_in1_0102] -> in1_FIFO_buf581[7 + lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 2047 }
  // # of banks: 1
  in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_to_in1_FIFO_buf581_diff103_289_cache in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_to_in1_FIFO_buf581_diff103_289;
};



inline void in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_write(hw_uint<32> & in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113, in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int in1_to_gp_9413_ld583, int in1_to_gp_9413_ld582, int dynamic_address) {
  in1_FIFO_buf581.in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_to_in1_FIFO_buf581_diff103_289.push(in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113);
}

inline hw_uint<32>  in1_FIFO_buf581_diff103_289_select(in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in1_FIFO_buf581_diff103_289 read pattern: { diff103[root = 0, lp_in1_0101, lp_in1_0102] -> in1_FIFO_buf581[7 + lp_in1_0102, 7 + lp_in1_0101] : 0 <= lp_in1_0101 <= 2047 and 0 <= lp_in1_0102 <= 2047 }
  // Read schedule : { diff103[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_in1_FIFO_buf581584[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 7] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
  auto value_in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113 = in1_FIFO_buf581.in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_to_in1_FIFO_buf581_diff103_289.peek(/* one reader or all rams */ 0);
  return value_in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113;
  return 0;
}

// # of bundles = 2
// diff103_read
//	in1_FIFO_buf581_diff103_289
inline hw_uint<32> in1_FIFO_buf581_diff103_read_bundle_read(in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  // # of ports in bundle: 1
    // in1_FIFO_buf581_diff103_289

	hw_uint<32> result;
	hw_uint<32>  in1_FIFO_buf581_diff103_289_res = in1_FIFO_buf581_diff103_289_select(in1_FIFO_buf581, root, lp_in1_0101, lp_in1_0102, dynamic_address);
	set_at<0, 32>(result, in1_FIFO_buf581_diff103_289_res);
	return result;
}

// load_to_in1_FIFO_buf581584_write
//	in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113
inline void in1_FIFO_buf581_load_to_in1_FIFO_buf581584_write_bundle_write(hw_uint<32>& load_to_in1_FIFO_buf581584_write, in1_FIFO_buf581_cache& in1_FIFO_buf581, int root, int in1_to_gp_9413_ld583, int in1_to_gp_9413_ld582, int dynamic_address) {
	hw_uint<32>  in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_res = load_to_in1_FIFO_buf581584_write.extract<0, 31>();
	in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_write(in1_FIFO_buf581_load_to_in1_FIFO_buf581584_113_res, in1_FIFO_buf581, root, in1_to_gp_9413_ld583, in1_to_gp_9413_ld582, dynamic_address);
}

struct lp_in0_0_buf52_diff55_279_to_lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_lp_in0_0_buf52_to_gp_18417420[root = 0, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418] -> lp_in0_0_buf52[lp_in0_0_buf52_ld418, lp_in0_0_buf52_ld419] : 0 <= lp_in0_0_buf52_ld419 <= 2047 and 0 <= lp_in0_0_buf52_ld418 <= 2047 }
  // # of banks: 1
  lp_in0_0_buf52_diff55_279_to_lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106_cache lp_in0_0_buf52_diff55_279_to_lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106;
};



inline void lp_in0_0_buf52_diff55_279_write(hw_uint<32> & lp_in0_0_buf52_diff55_279, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
  lp_in0_0_buf52.lp_in0_0_buf52_diff55_279_to_lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106.push(lp_in0_0_buf52_diff55_279);
}

inline hw_uint<32>  lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106_select(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_0_buf52_ld419, int lp_in0_0_buf52_ld418, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106 read pattern: { load_to_lp_in0_0_buf52_to_gp_18417420[root = 0, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418] -> lp_in0_0_buf52[lp_in0_0_buf52_ld418, lp_in0_0_buf52_ld419] : 0 <= lp_in0_0_buf52_ld419 <= 2047 and 0 <= lp_in0_0_buf52_ld418 <= 2047 }
  // Read schedule : { load_to_lp_in0_0_buf52_to_gp_18417420[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { diff55[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_lp_in0_0_buf52_diff55_279 = lp_in0_0_buf52.lp_in0_0_buf52_diff55_279_to_lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_diff55_279;
  return 0;
}

// # of bundles = 2
// diff55_write
//	lp_in0_0_buf52_diff55_279
inline void lp_in0_0_buf52_diff55_write_bundle_write(hw_uint<32>& diff55_write, lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_053, int lp_in0_054, int dynamic_address) {
	hw_uint<32>  lp_in0_0_buf52_diff55_279_res = diff55_write.extract<0, 31>();
	lp_in0_0_buf52_diff55_279_write(lp_in0_0_buf52_diff55_279_res, lp_in0_0_buf52, root, lp_in0_053, lp_in0_054, dynamic_address);
}

// load_to_lp_in0_0_buf52_to_gp_18417420_read
//	lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106
inline hw_uint<32> lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_read_bundle_read(lp_in0_0_buf52_cache& lp_in0_0_buf52, int root, int lp_in0_0_buf52_ld419, int lp_in0_0_buf52_ld418, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106

	hw_uint<32> result;
	hw_uint<32>  lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106_res = lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106_select(lp_in0_0_buf52, root, lp_in0_0_buf52_ld419, lp_in0_0_buf52_ld418, dynamic_address);
	set_at<0, 32>(result, lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_106_res);
	return result;
}

struct lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52_FIFO_buf585[pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 2047 }
  // # of banks: 1
  lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36_cache lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36;
};



inline void lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_write(hw_uint<32> & lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int lp_in0_0_buf52_to_gp_18417_ld587, int lp_in0_0_buf52_to_gp_18417_ld586, int dynamic_address) {
  lp_in0_0_buf52_FIFO_buf585.lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36.push(lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107);
}

inline hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36_select(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in0_0_buf52_FIFO_buf585[pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 2047 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 67] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_lp_in0_0_buf52_FIFO_buf585588[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107 = lp_in0_0_buf52_FIFO_buf585.lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_to_lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36.peek(/* one reader or all rams */ 0);
  return value_lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107;
  return 0;
}

// # of bundles = 2
// load_to_lp_in0_0_buf52_FIFO_buf585588_write
//	lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107
inline void lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_write_bundle_write(hw_uint<32>& load_to_lp_in0_0_buf52_FIFO_buf585588_write, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int lp_in0_0_buf52_to_gp_18417_ld587, int lp_in0_0_buf52_to_gp_18417_ld586, int dynamic_address) {
	hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_res = load_to_lp_in0_0_buf52_FIFO_buf585588_write.extract<0, 31>();
	lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_write(lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_107_res, lp_in0_0_buf52_FIFO_buf585, root, lp_in0_0_buf52_to_gp_18417_ld587, lp_in0_0_buf52_to_gp_18417_ld586, dynamic_address);
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_read
//	lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36
inline hw_uint<32> lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_read_bundle_read(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36

	hw_uint<32> result;
	hw_uint<32>  lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36_res = lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36_select(lp_in0_0_buf52_FIFO_buf585, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<0, 32>(result, lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_36_res);
	return result;
}

struct lp_in0_1_buf44_diff47_282_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102_cache {
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
    // { load_to_lp_in0_1_buf44_to_gp_19421424[root = 0, lp_in0_1_buf44_ld423, lp_in0_1_buf44_ld422] -> lp_in0_1_buf44[lp_in0_1_buf44_ld422, lp_in0_1_buf44_ld423] : 0 <= lp_in0_1_buf44_ld423 <= 1023 and 0 <= lp_in0_1_buf44_ld422 <= 1023 }
  // # of banks: 1
  lp_in0_1_buf44_diff47_282_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102_cache lp_in0_1_buf44_diff47_282_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102;
};



inline void lp_in0_1_buf44_diff47_282_write(hw_uint<32> & lp_in0_1_buf44_diff47_282, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
  lp_in0_1_buf44.lp_in0_1_buf44_diff47_282_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102.push(lp_in0_1_buf44_diff47_282);
}

inline hw_uint<32>  lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102_select(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_1_buf44_ld423, int lp_in0_1_buf44_ld422, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102 read pattern: { load_to_lp_in0_1_buf44_to_gp_19421424[root = 0, lp_in0_1_buf44_ld423, lp_in0_1_buf44_ld422] -> lp_in0_1_buf44[lp_in0_1_buf44_ld422, lp_in0_1_buf44_ld423] : 0 <= lp_in0_1_buf44_ld423 <= 1023 and 0 <= lp_in0_1_buf44_ld422 <= 1023 }
  // Read schedule : { load_to_lp_in0_1_buf44_to_gp_19421424[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 75] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { diff47[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in0_1_buf44_diff47_282 = lp_in0_1_buf44.lp_in0_1_buf44_diff47_282_to_lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102.peek(/* one reader or all rams */ 0);
  return value_lp_in0_1_buf44_diff47_282;
  return 0;
}

// # of bundles = 2
// diff47_write
//	lp_in0_1_buf44_diff47_282
inline void lp_in0_1_buf44_diff47_write_bundle_write(hw_uint<32>& diff47_write, lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_145, int lp_in0_146, int dynamic_address) {
	hw_uint<32>  lp_in0_1_buf44_diff47_282_res = diff47_write.extract<0, 31>();
	lp_in0_1_buf44_diff47_282_write(lp_in0_1_buf44_diff47_282_res, lp_in0_1_buf44, root, lp_in0_145, lp_in0_146, dynamic_address);
}

// load_to_lp_in0_1_buf44_to_gp_19421424_read
//	lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102
inline hw_uint<32> lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_read_bundle_read(lp_in0_1_buf44_cache& lp_in0_1_buf44, int root, int lp_in0_1_buf44_ld423, int lp_in0_1_buf44_ld422, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102

	hw_uint<32> result;
	hw_uint<32>  lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102_res = lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102_select(lp_in0_1_buf44, root, lp_in0_1_buf44_ld423, lp_in0_1_buf44_ld422, dynamic_address);
	set_at<0, 32>(result, lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_102_res);
	return result;
}

struct lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33_cache {
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
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44_FIFO_buf589[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // # of banks: 1
  lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33_cache lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33;
};



inline void lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_write(hw_uint<32> & lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103, lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int lp_in0_1_buf44_to_gp_19421_ld591, int lp_in0_1_buf44_to_gp_19421_ld590, int dynamic_address) {
  lp_in0_1_buf44_FIFO_buf589.lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33.push(lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103);
}

inline hw_uint<32>  lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33_select(lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in0_1_buf44_FIFO_buf589[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 92] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_lp_in0_1_buf44_FIFO_buf589592[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 81] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103 = lp_in0_1_buf44_FIFO_buf589.lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_to_lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33.peek(/* one reader or all rams */ 0);
  return value_lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103;
  return 0;
}

// # of bundles = 2
// load_to_lp_in0_1_buf44_FIFO_buf589592_write
//	lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103
inline void lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_write_bundle_write(hw_uint<32>& load_to_lp_in0_1_buf44_FIFO_buf589592_write, lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int lp_in0_1_buf44_to_gp_19421_ld591, int lp_in0_1_buf44_to_gp_19421_ld590, int dynamic_address) {
	hw_uint<32>  lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_res = load_to_lp_in0_1_buf44_FIFO_buf589592_write.extract<0, 31>();
	lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_write(lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_103_res, lp_in0_1_buf44_FIFO_buf589, root, lp_in0_1_buf44_to_gp_19421_ld591, lp_in0_1_buf44_to_gp_19421_ld590, dynamic_address);
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_read
//	lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33
inline hw_uint<32> lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_read_bundle_read(lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33

	hw_uint<32> result;
	hw_uint<32>  lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33_res = lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33_select(lp_in0_1_buf44_FIFO_buf589, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<0, 32>(result, lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_33_res);
	return result;
}

struct lp_in0_2_buf36_diff39_285_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98_cache {
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
    // { load_to_lp_in0_2_buf36_to_gp_20425428[root = 0, lp_in0_2_buf36_ld427, lp_in0_2_buf36_ld426] -> lp_in0_2_buf36[lp_in0_2_buf36_ld426, lp_in0_2_buf36_ld427] : 0 <= lp_in0_2_buf36_ld427 <= 511 and 0 <= lp_in0_2_buf36_ld426 <= 511 }
  // # of banks: 1
  lp_in0_2_buf36_diff39_285_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98_cache lp_in0_2_buf36_diff39_285_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98;
};



inline void lp_in0_2_buf36_diff39_285_write(hw_uint<32> & lp_in0_2_buf36_diff39_285, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
  lp_in0_2_buf36.lp_in0_2_buf36_diff39_285_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98.push(lp_in0_2_buf36_diff39_285);
}

inline hw_uint<32>  lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98_select(lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_2_buf36_ld427, int lp_in0_2_buf36_ld426, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98 read pattern: { load_to_lp_in0_2_buf36_to_gp_20425428[root = 0, lp_in0_2_buf36_ld427, lp_in0_2_buf36_ld426] -> lp_in0_2_buf36[lp_in0_2_buf36_ld426, lp_in0_2_buf36_ld427] : 0 <= lp_in0_2_buf36_ld427 <= 511 and 0 <= lp_in0_2_buf36_ld426 <= 511 }
  // Read schedule : { load_to_lp_in0_2_buf36_to_gp_20425428[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 70] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { diff39[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 69] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in0_2_buf36_diff39_285 = lp_in0_2_buf36.lp_in0_2_buf36_diff39_285_to_lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98.peek(/* one reader or all rams */ 0);
  return value_lp_in0_2_buf36_diff39_285;
  return 0;
}

// # of bundles = 2
// diff39_write
//	lp_in0_2_buf36_diff39_285
inline void lp_in0_2_buf36_diff39_write_bundle_write(hw_uint<32>& diff39_write, lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_237, int lp_in0_238, int dynamic_address) {
	hw_uint<32>  lp_in0_2_buf36_diff39_285_res = diff39_write.extract<0, 31>();
	lp_in0_2_buf36_diff39_285_write(lp_in0_2_buf36_diff39_285_res, lp_in0_2_buf36, root, lp_in0_237, lp_in0_238, dynamic_address);
}

// load_to_lp_in0_2_buf36_to_gp_20425428_read
//	lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98
inline hw_uint<32> lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_read_bundle_read(lp_in0_2_buf36_cache& lp_in0_2_buf36, int root, int lp_in0_2_buf36_ld427, int lp_in0_2_buf36_ld426, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98

	hw_uint<32> result;
	hw_uint<32>  lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98_res = lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98_select(lp_in0_2_buf36, root, lp_in0_2_buf36_ld427, lp_in0_2_buf36_ld426, dynamic_address);
	set_at<0, 32>(result, lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_98_res);
	return result;
}

struct lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30_cache {
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
    // { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in0_2_buf36_FIFO_buf593[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // # of banks: 1
  lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30_cache lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30;
};



inline void lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_write(hw_uint<32> & lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99, lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int lp_in0_2_buf36_to_gp_20425_ld595, int lp_in0_2_buf36_to_gp_20425_ld594, int dynamic_address) {
  lp_in0_2_buf36_FIFO_buf593.lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30.push(lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99);
}

inline hw_uint<32>  lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30_select(lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30 read pattern: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in0_2_buf36_FIFO_buf593[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // Read schedule : { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_lp_in0_2_buf36_FIFO_buf593596[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 80] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99 = lp_in0_2_buf36_FIFO_buf593.lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_to_lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30.peek(/* one reader or all rams */ 0);
  return value_lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99;
  return 0;
}

// # of bundles = 2
// load_to_lp_in0_2_buf36_FIFO_buf593596_write
//	lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99
inline void lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_write_bundle_write(hw_uint<32>& load_to_lp_in0_2_buf36_FIFO_buf593596_write, lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int lp_in0_2_buf36_to_gp_20425_ld595, int lp_in0_2_buf36_to_gp_20425_ld594, int dynamic_address) {
	hw_uint<32>  lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_res = load_to_lp_in0_2_buf36_FIFO_buf593596_write.extract<0, 31>();
	lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_write(lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_99_res, lp_in0_2_buf36_FIFO_buf593, root, lp_in0_2_buf36_to_gp_20425_ld595, lp_in0_2_buf36_to_gp_20425_ld594, dynamic_address);
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_read
//	lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30
inline hw_uint<32> lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_read_bundle_read(lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30

	hw_uint<32> result;
	hw_uint<32>  lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30_res = lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30_select(lp_in0_2_buf36_FIFO_buf593, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
	set_at<0, 32>(result, lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_30_res);
	return result;
}

struct lp_in1_0_buf100_diff103_288_to_lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_lp_in1_0_buf100_to_gp_18429432[root = 0, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430] -> lp_in1_0_buf100[lp_in1_0_buf100_ld430, lp_in1_0_buf100_ld431] : 0 <= lp_in1_0_buf100_ld431 <= 2047 and 0 <= lp_in1_0_buf100_ld430 <= 2047 }
  // # of banks: 1
  lp_in1_0_buf100_diff103_288_to_lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94_cache lp_in1_0_buf100_diff103_288_to_lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94;
};



inline void lp_in1_0_buf100_diff103_288_write(hw_uint<32> & lp_in1_0_buf100_diff103_288, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
  lp_in1_0_buf100.lp_in1_0_buf100_diff103_288_to_lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94.push(lp_in1_0_buf100_diff103_288);
}

inline hw_uint<32>  lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94_select(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0_buf100_ld431, int lp_in1_0_buf100_ld430, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94 read pattern: { load_to_lp_in1_0_buf100_to_gp_18429432[root = 0, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430] -> lp_in1_0_buf100[lp_in1_0_buf100_ld430, lp_in1_0_buf100_ld431] : 0 <= lp_in1_0_buf100_ld431 <= 2047 and 0 <= lp_in1_0_buf100_ld430 <= 2047 }
  // Read schedule : { load_to_lp_in1_0_buf100_to_gp_18429432[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 55] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { diff103[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_lp_in1_0_buf100_diff103_288 = lp_in1_0_buf100.lp_in1_0_buf100_diff103_288_to_lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_diff103_288;
  return 0;
}

// # of bundles = 2
// diff103_write
//	lp_in1_0_buf100_diff103_288
inline void lp_in1_0_buf100_diff103_write_bundle_write(hw_uint<32>& diff103_write, lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0101, int lp_in1_0102, int dynamic_address) {
	hw_uint<32>  lp_in1_0_buf100_diff103_288_res = diff103_write.extract<0, 31>();
	lp_in1_0_buf100_diff103_288_write(lp_in1_0_buf100_diff103_288_res, lp_in1_0_buf100, root, lp_in1_0101, lp_in1_0102, dynamic_address);
}

// load_to_lp_in1_0_buf100_to_gp_18429432_read
//	lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94
inline hw_uint<32> lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_read_bundle_read(lp_in1_0_buf100_cache& lp_in1_0_buf100, int root, int lp_in1_0_buf100_ld431, int lp_in1_0_buf100_ld430, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94

	hw_uint<32> result;
	hw_uint<32>  lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94_res = lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94_select(lp_in1_0_buf100, root, lp_in1_0_buf100_ld431, lp_in1_0_buf100_ld430, dynamic_address);
	set_at<0, 32>(result, lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_94_res);
	return result;
}

struct lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100_FIFO_buf597[pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 2047 }
  // # of banks: 1
  lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37_cache lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37;
};



inline void lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_write(hw_uint<32> & lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int lp_in1_0_buf100_to_gp_18429_ld599, int lp_in1_0_buf100_to_gp_18429_ld598, int dynamic_address) {
  lp_in1_0_buf100_FIFO_buf597.lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37.push(lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95);
}

inline hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37_select(lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37 read pattern: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[root = 0, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106] -> lp_in1_0_buf100_FIFO_buf597[pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105] : 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105 <= 2047 and 0 <= pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106 <= 2047 }
  // Read schedule : { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 67] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_lp_in1_0_buf100_FIFO_buf597600[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 64] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95 = lp_in1_0_buf100_FIFO_buf597.lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_to_lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37.peek(/* one reader or all rams */ 0);
  return value_lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95;
  return 0;
}

// # of bundles = 2
// load_to_lp_in1_0_buf100_FIFO_buf597600_write
//	lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95
inline void lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_write_bundle_write(hw_uint<32>& load_to_lp_in1_0_buf100_FIFO_buf597600_write, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int lp_in1_0_buf100_to_gp_18429_ld599, int lp_in1_0_buf100_to_gp_18429_ld598, int dynamic_address) {
	hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_res = load_to_lp_in1_0_buf100_FIFO_buf597600_write.extract<0, 31>();
	lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_write(lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_95_res, lp_in1_0_buf100_FIFO_buf597, root, lp_in1_0_buf100_to_gp_18429_ld599, lp_in1_0_buf100_to_gp_18429_ld598, dynamic_address);
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_read
//	lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37
inline hw_uint<32> lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_read_bundle_read(lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37

	hw_uint<32> result;
	hw_uint<32>  lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37_res = lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37_select(lp_in1_0_buf100_FIFO_buf597, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
	set_at<0, 32>(result, lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_37_res);
	return result;
}

struct lp_in1_1_buf92_diff95_273_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90_cache {
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
    // { load_to_lp_in1_1_buf92_to_gp_19433436[root = 0, lp_in1_1_buf92_ld435, lp_in1_1_buf92_ld434] -> lp_in1_1_buf92[lp_in1_1_buf92_ld434, lp_in1_1_buf92_ld435] : 0 <= lp_in1_1_buf92_ld435 <= 1023 and 0 <= lp_in1_1_buf92_ld434 <= 1023 }
  // # of banks: 1
  lp_in1_1_buf92_diff95_273_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90_cache lp_in1_1_buf92_diff95_273_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90;
};



inline void lp_in1_1_buf92_diff95_273_write(hw_uint<32> & lp_in1_1_buf92_diff95_273, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
  lp_in1_1_buf92.lp_in1_1_buf92_diff95_273_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90.push(lp_in1_1_buf92_diff95_273);
}

inline hw_uint<32>  lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90_select(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_1_buf92_ld435, int lp_in1_1_buf92_ld434, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90 read pattern: { load_to_lp_in1_1_buf92_to_gp_19433436[root = 0, lp_in1_1_buf92_ld435, lp_in1_1_buf92_ld434] -> lp_in1_1_buf92[lp_in1_1_buf92_ld434, lp_in1_1_buf92_ld435] : 0 <= lp_in1_1_buf92_ld435 <= 1023 and 0 <= lp_in1_1_buf92_ld434 <= 1023 }
  // Read schedule : { load_to_lp_in1_1_buf92_to_gp_19433436[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 86] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { diff95[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 83] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in1_1_buf92_diff95_273 = lp_in1_1_buf92.lp_in1_1_buf92_diff95_273_to_lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90.peek(/* one reader or all rams */ 0);
  return value_lp_in1_1_buf92_diff95_273;
  return 0;
}

// # of bundles = 2
// diff95_write
//	lp_in1_1_buf92_diff95_273
inline void lp_in1_1_buf92_diff95_write_bundle_write(hw_uint<32>& diff95_write, lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_193, int lp_in1_194, int dynamic_address) {
	hw_uint<32>  lp_in1_1_buf92_diff95_273_res = diff95_write.extract<0, 31>();
	lp_in1_1_buf92_diff95_273_write(lp_in1_1_buf92_diff95_273_res, lp_in1_1_buf92, root, lp_in1_193, lp_in1_194, dynamic_address);
}

// load_to_lp_in1_1_buf92_to_gp_19433436_read
//	lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90
inline hw_uint<32> lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_read_bundle_read(lp_in1_1_buf92_cache& lp_in1_1_buf92, int root, int lp_in1_1_buf92_ld435, int lp_in1_1_buf92_ld434, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90

	hw_uint<32> result;
	hw_uint<32>  lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90_res = lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90_select(lp_in1_1_buf92, root, lp_in1_1_buf92_ld435, lp_in1_1_buf92_ld434, dynamic_address);
	set_at<0, 32>(result, lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_90_res);
	return result;
}

struct lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34_cache {
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
    // { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92_FIFO_buf601[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // # of banks: 1
  lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34_cache lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34;
};



inline void lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_write(hw_uint<32> & lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int lp_in1_1_buf92_to_gp_19433_ld603, int lp_in1_1_buf92_to_gp_19433_ld602, int dynamic_address) {
  lp_in1_1_buf92_FIFO_buf601.lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34.push(lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91);
}

inline hw_uint<32>  lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34_select(lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34 read pattern: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[root = 0, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110] -> lp_in1_1_buf92_FIFO_buf601[pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109] : 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109 <= 1023 and 0 <= pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110 <= 1023 }
  // Read schedule : { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 92] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_lp_in1_1_buf92_FIFO_buf601604[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 90] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91 = lp_in1_1_buf92_FIFO_buf601.lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_to_lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34.peek(/* one reader or all rams */ 0);
  return value_lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91;
  return 0;
}

// # of bundles = 2
// load_to_lp_in1_1_buf92_FIFO_buf601604_write
//	lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91
inline void lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_write_bundle_write(hw_uint<32>& load_to_lp_in1_1_buf92_FIFO_buf601604_write, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int lp_in1_1_buf92_to_gp_19433_ld603, int lp_in1_1_buf92_to_gp_19433_ld602, int dynamic_address) {
	hw_uint<32>  lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_res = load_to_lp_in1_1_buf92_FIFO_buf601604_write.extract<0, 31>();
	lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_write(lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_91_res, lp_in1_1_buf92_FIFO_buf601, root, lp_in1_1_buf92_to_gp_19433_ld603, lp_in1_1_buf92_to_gp_19433_ld602, dynamic_address);
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_read
//	lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34
inline hw_uint<32> lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_read_bundle_read(lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34

	hw_uint<32> result;
	hw_uint<32>  lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34_res = lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34_select(lp_in1_1_buf92_FIFO_buf601, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
	set_at<0, 32>(result, lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_34_res);
	return result;
}

struct lp_in1_2_buf84_diff87_276_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86_cache {
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
    // { load_to_lp_in1_2_buf84_to_gp_20437440[root = 0, lp_in1_2_buf84_ld439, lp_in1_2_buf84_ld438] -> lp_in1_2_buf84[lp_in1_2_buf84_ld438, lp_in1_2_buf84_ld439] : 0 <= lp_in1_2_buf84_ld439 <= 511 and 0 <= lp_in1_2_buf84_ld438 <= 511 }
  // # of banks: 1
  lp_in1_2_buf84_diff87_276_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86_cache lp_in1_2_buf84_diff87_276_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86;
};



inline void lp_in1_2_buf84_diff87_276_write(hw_uint<32> & lp_in1_2_buf84_diff87_276, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
  lp_in1_2_buf84.lp_in1_2_buf84_diff87_276_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86.push(lp_in1_2_buf84_diff87_276);
}

inline hw_uint<32>  lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86_select(lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_2_buf84_ld439, int lp_in1_2_buf84_ld438, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86 read pattern: { load_to_lp_in1_2_buf84_to_gp_20437440[root = 0, lp_in1_2_buf84_ld439, lp_in1_2_buf84_ld438] -> lp_in1_2_buf84[lp_in1_2_buf84_ld438, lp_in1_2_buf84_ld439] : 0 <= lp_in1_2_buf84_ld439 <= 511 and 0 <= lp_in1_2_buf84_ld438 <= 511 }
  // Read schedule : { load_to_lp_in1_2_buf84_to_gp_20437440[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 91] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { diff87[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in1_2_buf84_diff87_276 = lp_in1_2_buf84.lp_in1_2_buf84_diff87_276_to_lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86.peek(/* one reader or all rams */ 0);
  return value_lp_in1_2_buf84_diff87_276;
  return 0;
}

// # of bundles = 2
// diff87_write
//	lp_in1_2_buf84_diff87_276
inline void lp_in1_2_buf84_diff87_write_bundle_write(hw_uint<32>& diff87_write, lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_285, int lp_in1_286, int dynamic_address) {
	hw_uint<32>  lp_in1_2_buf84_diff87_276_res = diff87_write.extract<0, 31>();
	lp_in1_2_buf84_diff87_276_write(lp_in1_2_buf84_diff87_276_res, lp_in1_2_buf84, root, lp_in1_285, lp_in1_286, dynamic_address);
}

// load_to_lp_in1_2_buf84_to_gp_20437440_read
//	lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86
inline hw_uint<32> lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_read_bundle_read(lp_in1_2_buf84_cache& lp_in1_2_buf84, int root, int lp_in1_2_buf84_ld439, int lp_in1_2_buf84_ld438, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86

	hw_uint<32> result;
	hw_uint<32>  lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86_res = lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86_select(lp_in1_2_buf84, root, lp_in1_2_buf84_ld439, lp_in1_2_buf84_ld438, dynamic_address);
	set_at<0, 32>(result, lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_86_res);
	return result;
}

struct lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31_cache {
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
    // { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in1_2_buf84_FIFO_buf605[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // # of banks: 1
  lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31_cache lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31;
};



inline void lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_write(hw_uint<32> & lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int lp_in1_2_buf84_to_gp_20437_ld607, int lp_in1_2_buf84_to_gp_20437_ld606, int dynamic_address) {
  lp_in1_2_buf84_FIFO_buf605.lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31.push(lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87);
}

inline hw_uint<32>  lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31_select(lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31 read pattern: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[root = 0, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114] -> lp_in1_2_buf84_FIFO_buf605[pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113] : 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113 <= 511 and 0 <= pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114 <= 511 }
  // Read schedule : { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_lp_in1_2_buf84_FIFO_buf605608[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87 = lp_in1_2_buf84_FIFO_buf605.lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_to_lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31.peek(/* one reader or all rams */ 0);
  return value_lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87;
  return 0;
}

// # of bundles = 2
// load_to_lp_in1_2_buf84_FIFO_buf605608_write
//	lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87
inline void lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_write_bundle_write(hw_uint<32>& load_to_lp_in1_2_buf84_FIFO_buf605608_write, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int lp_in1_2_buf84_to_gp_20437_ld607, int lp_in1_2_buf84_to_gp_20437_ld606, int dynamic_address) {
	hw_uint<32>  lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_res = load_to_lp_in1_2_buf84_FIFO_buf605608_write.extract<0, 31>();
	lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_write(lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_87_res, lp_in1_2_buf84_FIFO_buf605, root, lp_in1_2_buf84_to_gp_20437_ld607, lp_in1_2_buf84_to_gp_20437_ld606, dynamic_address);
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_read
//	lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31
inline hw_uint<32> lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_read_bundle_read(lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31

	hw_uint<32> result;
	hw_uint<32>  lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31_res = lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31_select(lp_in1_2_buf84_FIFO_buf605, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
	set_at<0, 32>(result, lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_31_res);
	return result;
}

struct merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_to_merged_0_load_to_merged_0_to_gp_12441444_78_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_merged_0_to_gp_12441444[root = 0, merged_0_ld443, merged_0_ld442] -> merged_0[merged_0_ld442, merged_0_ld443] : 0 <= merged_0_ld443 <= 2047 and 0 <= merged_0_ld442 <= 2047 }
  // # of banks: 1
  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_to_merged_0_load_to_merged_0_to_gp_12441444_78_cache merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_to_merged_0_load_to_merged_0_to_gp_12441444_78;
};



inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_write(hw_uint<32> & merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
  merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_to_merged_0_load_to_merged_0_to_gp_12441444_78.push(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35);
}

inline hw_uint<32>  merged_0_load_to_merged_0_to_gp_12441444_78_select(merged_0_cache& merged_0, int root, int merged_0_ld443, int merged_0_ld442, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_load_to_merged_0_to_gp_12441444_78 read pattern: { load_to_merged_0_to_gp_12441444[root = 0, merged_0_ld443, merged_0_ld442] -> merged_0[merged_0_ld442, merged_0_ld443] : 0 <= merged_0_ld443 <= 2047 and 0 <= merged_0_ld442 <= 2047 }
  // Read schedule : { load_to_merged_0_to_gp_12441444[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 77] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 67] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35 = merged_0.merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_to_merged_0_load_to_merged_0_to_gp_12441444_78.peek(/* one reader or all rams */ 0);
  return value_merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35;
  return 0;
}

// # of bundles = 2
// load_to_merged_0_to_gp_12441444_read
//	merged_0_load_to_merged_0_to_gp_12441444_78
inline hw_uint<32> merged_0_load_to_merged_0_to_gp_12441444_read_bundle_read(merged_0_cache& merged_0, int root, int merged_0_ld443, int merged_0_ld442, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_0_load_to_merged_0_to_gp_12441444_78

	hw_uint<32> result;
	hw_uint<32>  merged_0_load_to_merged_0_to_gp_12441444_78_res = merged_0_load_to_merged_0_to_gp_12441444_78_select(merged_0, root, merged_0_ld443, merged_0_ld442, dynamic_address);
	set_at<0, 32>(result, merged_0_load_to_merged_0_to_gp_12441444_78_res);
	return result;
}

// pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_write
//	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35
inline void merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_write_bundle_write(hw_uint<32>& pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_write, merged_0_cache& merged_0, int root, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, int pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, int dynamic_address) {
	hw_uint<32>  merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_res = pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_write.extract<0, 31>();
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_write(merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_35_res, merged_0, root, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105, pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106, dynamic_address);
}

struct merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_to_merged_0_FIFO_buf609_rc146_19_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
	// Capacity: 7
	// # of read delays: 7
  // 0, 1, 2, 3, 4, 5, 6
	fifo<hw_uint<32> , 7> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(6 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct merged_0_FIFO_buf609_cache {
  // Reader addrs...
    // { rc146[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0_FIFO_buf609[merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 2047 }
  // # of banks: 1
  merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_to_merged_0_FIFO_buf609_rc146_19_cache merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_to_merged_0_FIFO_buf609_rc146_19;
};



inline void merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_write(hw_uint<32> & merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_to_gp_12441_ld611, int merged_0_to_gp_12441_ld610, int dynamic_address) {
  merged_0_FIFO_buf609.merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_to_merged_0_FIFO_buf609_rc146_19.push(merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83);
}

inline hw_uint<32>  merged_0_FIFO_buf609_rc146_19_select(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_FIFO_buf609_rc146_19 read pattern: { rc146[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_0_FIFO_buf609[merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 2047 }
  // Read schedule : { rc146[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_merged_0_FIFO_buf609612[d0 = 0, d1, d2] -> [0, 14 + d1, 8 + d2, 79] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83 = merged_0_FIFO_buf609.merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_to_merged_0_FIFO_buf609_rc146_19.peek(/* one reader or all rams */ (-2042 + merged_0_reconstruct_lp138140 == 0) ? (5) : (2041 - merged_0_reconstruct_lp138140 >= 0) ? (6) : (-2043 + merged_0_reconstruct_lp138140 >= 0 && 2046 - merged_0_reconstruct_lp138140 >= 0) ? ((2047 - merged_0_reconstruct_lp138140)) : 0);
  return value_merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83;
  return 0;
}

// # of bundles = 2
// load_to_merged_0_FIFO_buf609612_write
//	merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83
inline void merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_write_bundle_write(hw_uint<32>& load_to_merged_0_FIFO_buf609612_write, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_to_gp_12441_ld611, int merged_0_to_gp_12441_ld610, int dynamic_address) {
	hw_uint<32>  merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_res = load_to_merged_0_FIFO_buf609612_write.extract<0, 31>();
	merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_write(merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_83_res, merged_0_FIFO_buf609, root, merged_0_to_gp_12441_ld611, merged_0_to_gp_12441_ld610, dynamic_address);
}

// rc146_read
//	merged_0_FIFO_buf609_rc146_19
inline hw_uint<32> merged_0_FIFO_buf609_rc146_read_bundle_read(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_0_FIFO_buf609_rc146_19

	hw_uint<32> result;
	hw_uint<32>  merged_0_FIFO_buf609_rc146_19_res = merged_0_FIFO_buf609_rc146_19_select(merged_0_FIFO_buf609, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<0, 32>(result, merged_0_FIFO_buf609_rc146_19_res);
	return result;
}

struct merged_0_reconstruct_lp138_buf141_rc146_18_to_merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448[root = 0, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446] -> merged_0_reconstruct_lp138_buf141[merged_0_reconstruct_lp138_buf141_ld446, merged_0_reconstruct_lp138_buf141_ld447] : 0 <= merged_0_reconstruct_lp138_buf141_ld447 <= 2047 and 0 <= merged_0_reconstruct_lp138_buf141_ld446 <= 2047 }
  // # of banks: 1
  merged_0_reconstruct_lp138_buf141_rc146_18_to_merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80_cache merged_0_reconstruct_lp138_buf141_rc146_18_to_merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80;
};



inline void merged_0_reconstruct_lp138_buf141_rc146_18_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_rc146_18, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_rc146_18_to_merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80.push(merged_0_reconstruct_lp138_buf141_rc146_18);
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80_select(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138_buf141_ld447, int merged_0_reconstruct_lp138_buf141_ld446, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80 read pattern: { load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448[root = 0, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446] -> merged_0_reconstruct_lp138_buf141[merged_0_reconstruct_lp138_buf141_ld446, merged_0_reconstruct_lp138_buf141_ld447] : 0 <= merged_0_reconstruct_lp138_buf141_ld447 <= 2047 and 0 <= merged_0_reconstruct_lp138_buf141_ld446 <= 2047 }
  // Read schedule : { load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { rc146[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_merged_0_reconstruct_lp138_buf141_rc146_18 = merged_0_reconstruct_lp138_buf141.merged_0_reconstruct_lp138_buf141_rc146_18_to_merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_rc146_18;
  return 0;
}

// # of bundles = 2
// load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_read
//	merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80
inline hw_uint<32> merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_read_bundle_read(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138_buf141_ld447, int merged_0_reconstruct_lp138_buf141_ld446, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80

	hw_uint<32> result;
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80_res = merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80_select(merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138_buf141_ld447, merged_0_reconstruct_lp138_buf141_ld446, dynamic_address);
	set_at<0, 32>(result, merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_80_res);
	return result;
}

// rc146_write
//	merged_0_reconstruct_lp138_buf141_rc146_18
inline void merged_0_reconstruct_lp138_buf141_rc146_write_bundle_write(hw_uint<32>& rc146_write, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_rc146_18_res = rc146_write.extract<0, 31>();
	merged_0_reconstruct_lp138_buf141_rc146_18_write(merged_0_reconstruct_lp138_buf141_rc146_18_res, merged_0_reconstruct_lp138_buf141, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
}

struct merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { pw_math_merged_0_reconstruct_lp138_buf141147150[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141_FIFO_buf613[pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 2047 }
  // # of banks: 1
  merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28_cache merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28;
};



inline void merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_write(hw_uint<32> & merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, int dynamic_address) {
  merged_0_reconstruct_lp138_buf141_FIFO_buf613.merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28.push(merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81);
}

inline hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28_select(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28 read pattern: { pw_math_merged_0_reconstruct_lp138_buf141147150[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> merged_0_reconstruct_lp138_buf141_FIFO_buf613[pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 2047 }
  // Read schedule : { pw_math_merged_0_reconstruct_lp138_buf141147150[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81 = merged_0_reconstruct_lp138_buf141_FIFO_buf613.merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28.peek(/* one reader or all rams */ 0);
  return value_merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81;
  return 0;
}

// # of bundles = 2
// load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_write
//	merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81
inline void merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_write_bundle_write(hw_uint<32>& load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_write, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, int merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, int dynamic_address) {
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_res = load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_write.extract<0, 31>();
	merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_write(merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_81_res, merged_0_reconstruct_lp138_buf141_FIFO_buf613, root, merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615, merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614, dynamic_address);
}

// pw_math_merged_0_reconstruct_lp138_buf141147150_read
//	merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28
inline hw_uint<32> merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_read_bundle_read(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int root, int pw_math_merged_0_reconstruct_lp138_buf141147148, int pw_math_merged_0_reconstruct_lp138_buf141147149, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28

	hw_uint<32> result;
	hw_uint<32>  merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28_res = merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28_select(merged_0_reconstruct_lp138_buf141_FIFO_buf613, root, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149, dynamic_address);
	set_at<0, 32>(result, merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_28_res);
	return result;
}

struct merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_to_merged_1_load_to_merged_1_to_gp_13449452_66_cache {
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

struct merged_1_cache {
  // Reader addrs...
    // { load_to_merged_1_to_gp_13449452[root = 0, merged_1_ld451, merged_1_ld450] -> merged_1[merged_1_ld450, merged_1_ld451] : 0 <= merged_1_ld451 <= 1023 and 0 <= merged_1_ld450 <= 1023 }
  // # of banks: 1
  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_to_merged_1_load_to_merged_1_to_gp_13449452_66_cache merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_to_merged_1_load_to_merged_1_to_gp_13449452_66;
};



inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_write(hw_uint<32> & merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
  merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_to_merged_1_load_to_merged_1_to_gp_13449452_66.push(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32);
}

inline hw_uint<32>  merged_1_load_to_merged_1_to_gp_13449452_66_select(merged_1_cache& merged_1, int root, int merged_1_ld451, int merged_1_ld450, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_load_to_merged_1_to_gp_13449452_66 read pattern: { load_to_merged_1_to_gp_13449452[root = 0, merged_1_ld451, merged_1_ld450] -> merged_1[merged_1_ld450, merged_1_ld451] : 0 <= merged_1_ld451 <= 1023 and 0 <= merged_1_ld450 <= 1023 }
  // Read schedule : { load_to_merged_1_to_gp_13449452[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 94] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 92] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32 = merged_1.merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_to_merged_1_load_to_merged_1_to_gp_13449452_66.peek(/* one reader or all rams */ (-1023 + merged_1_ld450 == 0 && -1022 + merged_1_ld451 == 0) ? (1024) : (-1023 + merged_1_ld450 == 0 && 1021 - merged_1_ld451 >= 0) ? (2048) : (-1022 + merged_1_ld450 == 0 && 1021 - merged_1_ld451 >= 0) ? (2049) : (1021 - merged_1_ld450 >= 0 && 1021 - merged_1_ld451 >= 0) ? (2050) : (-1023 + merged_1_ld451 == 0 && 1022 - merged_1_ld450 >= 0) ? ((1023 - merged_1_ld450)) : (-1022 + merged_1_ld451 == 0 && 1022 - merged_1_ld450 >= 0) ? ((2047 - merged_1_ld450)) : 0);
  return value_merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_to_gp_13449452_read
//	merged_1_load_to_merged_1_to_gp_13449452_66
inline hw_uint<32> merged_1_load_to_merged_1_to_gp_13449452_read_bundle_read(merged_1_cache& merged_1, int root, int merged_1_ld451, int merged_1_ld450, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_load_to_merged_1_to_gp_13449452_66

	hw_uint<32> result;
	hw_uint<32>  merged_1_load_to_merged_1_to_gp_13449452_66_res = merged_1_load_to_merged_1_to_gp_13449452_66_select(merged_1, root, merged_1_ld451, merged_1_ld450, dynamic_address);
	set_at<0, 32>(result, merged_1_load_to_merged_1_to_gp_13449452_66_res);
	return result;
}

// pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_write
//	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32
inline void merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_write_bundle_write(hw_uint<32>& pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_write, merged_1_cache& merged_1, int root, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, int pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, int dynamic_address) {
	hw_uint<32>  merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_res = pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_write.extract<0, 31>();
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_write(merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_32_res, merged_1, root, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109, pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110, dynamic_address);
}

struct merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_to_merged_1_FIFO_buf617_rc137_22_cache {
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

struct merged_1_FIFO_buf617_cache {
  // Reader addrs...
    // { rc137[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1_FIFO_buf617[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // # of banks: 1
  merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_to_merged_1_FIFO_buf617_rc137_22_cache merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_to_merged_1_FIFO_buf617_rc137_22;
};



inline void merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_write(hw_uint<32> & merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75, merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_to_gp_13449_ld619, int merged_1_to_gp_13449_ld618, int dynamic_address) {
  merged_1_FIFO_buf617.merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_to_merged_1_FIFO_buf617_rc137_22.push(merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75);
}

inline hw_uint<32>  merged_1_FIFO_buf617_rc137_22_select(merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_FIFO_buf617_rc137_22 read pattern: { rc137[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_1_FIFO_buf617[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // Read schedule : { rc137[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_1_FIFO_buf617620[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 96] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75 = merged_1_FIFO_buf617.merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_to_merged_1_FIFO_buf617_rc137_22.peek(/* one reader or all rams */ 0);
  return value_merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_FIFO_buf617620_write
//	merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75
inline void merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_write_bundle_write(hw_uint<32>& load_to_merged_1_FIFO_buf617620_write, merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_to_gp_13449_ld619, int merged_1_to_gp_13449_ld618, int dynamic_address) {
	hw_uint<32>  merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_res = load_to_merged_1_FIFO_buf617620_write.extract<0, 31>();
	merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_write(merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_75_res, merged_1_FIFO_buf617, root, merged_1_to_gp_13449_ld619, merged_1_to_gp_13449_ld618, dynamic_address);
}

// rc137_read
//	merged_1_FIFO_buf617_rc137_22
inline hw_uint<32> merged_1_FIFO_buf617_rc137_read_bundle_read(merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_FIFO_buf617_rc137_22

	hw_uint<32> result;
	hw_uint<32>  merged_1_FIFO_buf617_rc137_22_res = merged_1_FIFO_buf617_rc137_22_select(merged_1_FIFO_buf617, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<0, 32>(result, merged_1_FIFO_buf617_rc137_22_res);
	return result;
}

struct merged_1_reconstruct_lp129_buf132_rc137_21_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72_cache {
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
    // { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456[root = 0, merged_1_reconstruct_lp129_buf132_ld455, merged_1_reconstruct_lp129_buf132_ld454] -> merged_1_reconstruct_lp129_buf132[merged_1_reconstruct_lp129_buf132_ld454, merged_1_reconstruct_lp129_buf132_ld455] : 0 <= merged_1_reconstruct_lp129_buf132_ld455 <= 1023 and 0 <= merged_1_reconstruct_lp129_buf132_ld454 <= 1023 }
  // # of banks: 1
  merged_1_reconstruct_lp129_buf132_rc137_21_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72_cache merged_1_reconstruct_lp129_buf132_rc137_21_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72;
};



inline void merged_1_reconstruct_lp129_buf132_rc137_21_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_rc137_21, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_rc137_21_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72.push(merged_1_reconstruct_lp129_buf132_rc137_21);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72_select(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129_buf132_ld455, int merged_1_reconstruct_lp129_buf132_ld454, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72 read pattern: { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456[root = 0, merged_1_reconstruct_lp129_buf132_ld455, merged_1_reconstruct_lp129_buf132_ld454] -> merged_1_reconstruct_lp129_buf132[merged_1_reconstruct_lp129_buf132_ld454, merged_1_reconstruct_lp129_buf132_ld455] : 0 <= merged_1_reconstruct_lp129_buf132_ld455 <= 1023 and 0 <= merged_1_reconstruct_lp129_buf132_ld454 <= 1023 }
  // Read schedule : { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 106] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { rc137[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_rc137_21 = merged_1_reconstruct_lp129_buf132.merged_1_reconstruct_lp129_buf132_rc137_21_to_merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_rc137_21;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_read
//	merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72
inline hw_uint<32> merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_read_bundle_read(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129_buf132_ld455, int merged_1_reconstruct_lp129_buf132_ld454, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72

	hw_uint<32> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72_res = merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72_select(merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129_buf132_ld455, merged_1_reconstruct_lp129_buf132_ld454, dynamic_address);
	set_at<0, 32>(result, merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_72_res);
	return result;
}

// rc137_write
//	merged_1_reconstruct_lp129_buf132_rc137_21
inline void merged_1_reconstruct_lp129_buf132_rc137_write_bundle_write(hw_uint<32>& rc137_write, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_rc137_21_res = rc137_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_rc137_21_write(merged_1_reconstruct_lp129_buf132_rc137_21_res, merged_1_reconstruct_lp129_buf132, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
}

struct merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13_cache {
	// RAM Box: {[0, 1023], [0, 1023]}
	// Capacity: 1024
	// # of read delays: 1025
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023
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
    // { us145[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132_FIFO_buf621[o0, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 2047 and -1 + us_merged_1_reconstruct_lp129_buf132144 <= 2o0 <= us_merged_1_reconstruct_lp129_buf132144 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // # of banks: 1
  merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13_cache merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13;
};



inline void merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73, merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_FIFO_buf621.merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13.push(merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13_select(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13 read pattern: { us145[root = 0, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144] -> merged_1_reconstruct_lp129_buf132_FIFO_buf621[o0, o1] : 0 <= us_merged_1_reconstruct_lp129_buf132143 <= 2047 and 0 <= us_merged_1_reconstruct_lp129_buf132144 <= 2047 and -1 + us_merged_1_reconstruct_lp129_buf132144 <= 2o0 <= us_merged_1_reconstruct_lp129_buf132144 and -1 + us_merged_1_reconstruct_lp129_buf132143 <= 2o1 <= us_merged_1_reconstruct_lp129_buf132143 }
  // Read schedule : { us145[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73 = merged_1_reconstruct_lp129_buf132_FIFO_buf621.merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13.peek(/* one reader or all rams */ ((-1 - us_merged_1_reconstruct_lp129_buf132143) % 2 == 0 && 2045 - us_merged_1_reconstruct_lp129_buf132144 >= 0) ? ((1023 - floord(2*us_merged_1_reconstruct_lp129_buf132144, 4))) : 0);
  return value_merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_write
//	merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73
inline void merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_write_bundle_write(hw_uint<32>& load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_write, merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623, int merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_res = load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_write(merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_73_res, merged_1_reconstruct_lp129_buf132_FIFO_buf621, root, merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623, merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622, dynamic_address);
}

// us145_read
//	merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13
inline hw_uint<32> merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_read_bundle_read(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13

	hw_uint<32> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13_res = merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13_select(merged_1_reconstruct_lp129_buf132_FIFO_buf621, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
	set_at<0, 32>(result, merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_13_res);
	return result;
}

struct merged_1_reconstruct_lp129_buf132_us142_us145_12_to_merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460[root = 0, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458] -> merged_1_reconstruct_lp129_buf132_us142[merged_1_reconstruct_lp129_buf132_us142_ld458, merged_1_reconstruct_lp129_buf132_us142_ld459] : 0 <= merged_1_reconstruct_lp129_buf132_us142_ld459 <= 2047 and 0 <= merged_1_reconstruct_lp129_buf132_us142_ld458 <= 2047 }
  // # of banks: 1
  merged_1_reconstruct_lp129_buf132_us142_us145_12_to_merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68_cache merged_1_reconstruct_lp129_buf132_us142_us145_12_to_merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68;
};



inline void merged_1_reconstruct_lp129_buf132_us142_us145_12_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_us145_12, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us145_12_to_merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68.push(merged_1_reconstruct_lp129_buf132_us142_us145_12);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68_select(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_1_reconstruct_lp129_buf132_us142_ld459, int merged_1_reconstruct_lp129_buf132_us142_ld458, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68 read pattern: { load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460[root = 0, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458] -> merged_1_reconstruct_lp129_buf132_us142[merged_1_reconstruct_lp129_buf132_us142_ld458, merged_1_reconstruct_lp129_buf132_us142_ld459] : 0 <= merged_1_reconstruct_lp129_buf132_us142_ld459 <= 2047 and 0 <= merged_1_reconstruct_lp129_buf132_us142_ld458 <= 2047 }
  // Read schedule : { load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { us145[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_us145_12 = merged_1_reconstruct_lp129_buf132_us142.merged_1_reconstruct_lp129_buf132_us142_us145_12_to_merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_us145_12;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_read
//	merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68
inline hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int merged_1_reconstruct_lp129_buf132_us142_ld459, int merged_1_reconstruct_lp129_buf132_us142_ld458, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68

	hw_uint<32> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68_res = merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68_select(merged_1_reconstruct_lp129_buf132_us142, root, merged_1_reconstruct_lp129_buf132_us142_ld459, merged_1_reconstruct_lp129_buf132_us142_ld458, dynamic_address);
	set_at<0, 32>(result, merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_68_res);
	return result;
}

// us145_write
//	merged_1_reconstruct_lp129_buf132_us142_us145_12
inline void merged_1_reconstruct_lp129_buf132_us142_us145_write_bundle_write(hw_uint<32>& us145_write, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int root, int us_merged_1_reconstruct_lp129_buf132143, int us_merged_1_reconstruct_lp129_buf132144, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_us145_12_res = us145_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_us142_us145_12_write(merged_1_reconstruct_lp129_buf132_us142_us145_12_res, merged_1_reconstruct_lp129_buf132_us142, root, us_merged_1_reconstruct_lp129_buf132143, us_merged_1_reconstruct_lp129_buf132144, dynamic_address);
}

struct merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20_cache {
	// RAM Box: {[0, 2047], [0, 2047]}
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
    // { rc146[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625[merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 2047 }
  // # of banks: 1
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20_cache merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20;
};



inline void merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_write(hw_uint<32> & merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, int dynamic_address) {
  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20.push(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69);
}

inline hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20_select(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20 read pattern: { rc146[root = 0, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140] -> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625[merged_0_reconstruct_lp138140, merged_0_reconstruct_lp138139] : 0 <= merged_0_reconstruct_lp138139 <= 2047 and 0 <= merged_0_reconstruct_lp138140 <= 2047 }
  // Read schedule : { rc146[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  // Write schedule: { load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
  auto value_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69 = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625.merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20.peek(/* one reader or all rams */ 0);
  return value_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69;
  return 0;
}

// # of bundles = 2
// load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_write
//	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69
inline void merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_write_bundle_write(hw_uint<32>& load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_write, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, int merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, int dynamic_address) {
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_res = load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_write.extract<0, 31>();
	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_write(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_69_res, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, root, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626, dynamic_address);
}

// rc146_read
//	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20
inline hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int root, int merged_0_reconstruct_lp138139, int merged_0_reconstruct_lp138140, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20

	hw_uint<32> result;
	hw_uint<32>  merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20_res = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20_select(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, root, merged_0_reconstruct_lp138139, merged_0_reconstruct_lp138140, dynamic_address);
	set_at<0, 32>(result, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_20_res);
	return result;
}

struct merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_to_merged_2_load_to_merged_2_to_gp_14461464_54_cache {
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
    // { load_to_merged_2_to_gp_14461464[root = 0, merged_2_ld463, merged_2_ld462] -> merged_2[merged_2_ld462, merged_2_ld463] : 0 <= merged_2_ld463 <= 511 and 0 <= merged_2_ld462 <= 511 }
  // # of banks: 1
  merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_to_merged_2_load_to_merged_2_to_gp_14461464_54_cache merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_to_merged_2_load_to_merged_2_to_gp_14461464_54;
};



inline void merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_write(hw_uint<32> & merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
  merged_2.merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_to_merged_2_load_to_merged_2_to_gp_14461464_54.push(merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29);
}

inline hw_uint<32>  merged_2_load_to_merged_2_to_gp_14461464_54_select(merged_2_cache& merged_2, int root, int merged_2_ld463, int merged_2_ld462, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_load_to_merged_2_to_gp_14461464_54 read pattern: { load_to_merged_2_to_gp_14461464[root = 0, merged_2_ld463, merged_2_ld462] -> merged_2[merged_2_ld462, merged_2_ld463] : 0 <= merged_2_ld463 <= 511 and 0 <= merged_2_ld462 <= 511 }
  // Read schedule : { load_to_merged_2_to_gp_14461464[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 97] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29 = merged_2.merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_to_merged_2_load_to_merged_2_to_gp_14461464_54.peek(/* one reader or all rams */ 0);
  return value_merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_to_gp_14461464_read
//	merged_2_load_to_merged_2_to_gp_14461464_54
inline hw_uint<32> merged_2_load_to_merged_2_to_gp_14461464_read_bundle_read(merged_2_cache& merged_2, int root, int merged_2_ld463, int merged_2_ld462, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_load_to_merged_2_to_gp_14461464_54

	hw_uint<32> result;
	hw_uint<32>  merged_2_load_to_merged_2_to_gp_14461464_54_res = merged_2_load_to_merged_2_to_gp_14461464_54_select(merged_2, root, merged_2_ld463, merged_2_ld462, dynamic_address);
	set_at<0, 32>(result, merged_2_load_to_merged_2_to_gp_14461464_54_res);
	return result;
}

// pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_write
//	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29
inline void merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_write_bundle_write(hw_uint<32>& pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_write, merged_2_cache& merged_2, int root, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, int pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, int dynamic_address) {
	hw_uint<32>  merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_res = pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_write.extract<0, 31>();
	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_write(merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_29_res, merged_2, root, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113, pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114, dynamic_address);
}

struct merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_to_merged_2_FIFO_buf629_rc128_25_cache {
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
    // { rc128[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_2_FIFO_buf629[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // # of banks: 1
  merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_to_merged_2_FIFO_buf629_rc128_25_cache merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_to_merged_2_FIFO_buf629_rc128_25;
};



inline void merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_write(hw_uint<32> & merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63, merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_to_gp_14461_ld631, int merged_2_to_gp_14461_ld630, int dynamic_address) {
  merged_2_FIFO_buf629.merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_to_merged_2_FIFO_buf629_rc128_25.push(merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63);
}

inline hw_uint<32>  merged_2_FIFO_buf629_rc128_25_select(merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_FIFO_buf629_rc128_25 read pattern: { rc128[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_2_FIFO_buf629[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // Read schedule : { rc128[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_merged_2_FIFO_buf629632[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 98] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63 = merged_2_FIFO_buf629.merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_to_merged_2_FIFO_buf629_rc128_25.peek(/* one reader or all rams */ 0);
  return value_merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_FIFO_buf629632_write
//	merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63
inline void merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_write_bundle_write(hw_uint<32>& load_to_merged_2_FIFO_buf629632_write, merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_to_gp_14461_ld631, int merged_2_to_gp_14461_ld630, int dynamic_address) {
	hw_uint<32>  merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_res = load_to_merged_2_FIFO_buf629632_write.extract<0, 31>();
	merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_write(merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_63_res, merged_2_FIFO_buf629, root, merged_2_to_gp_14461_ld631, merged_2_to_gp_14461_ld630, dynamic_address);
}

// rc128_read
//	merged_2_FIFO_buf629_rc128_25
inline hw_uint<32> merged_2_FIFO_buf629_rc128_read_bundle_read(merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_FIFO_buf629_rc128_25

	hw_uint<32> result;
	hw_uint<32>  merged_2_FIFO_buf629_rc128_25_res = merged_2_FIFO_buf629_rc128_25_select(merged_2_FIFO_buf629, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
	set_at<0, 32>(result, merged_2_FIFO_buf629_rc128_25_res);
	return result;
}

struct merged_2_reconstruct_lp120_buf123_rc128_24_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60_cache {
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
    // { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468[root = 0, merged_2_reconstruct_lp120_buf123_ld467, merged_2_reconstruct_lp120_buf123_ld466] -> merged_2_reconstruct_lp120_buf123[merged_2_reconstruct_lp120_buf123_ld466, merged_2_reconstruct_lp120_buf123_ld467] : 0 <= merged_2_reconstruct_lp120_buf123_ld467 <= 511 and 0 <= merged_2_reconstruct_lp120_buf123_ld466 <= 511 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_rc128_24_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60_cache merged_2_reconstruct_lp120_buf123_rc128_24_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60;
};



inline void merged_2_reconstruct_lp120_buf123_rc128_24_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_rc128_24, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_24_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60.push(merged_2_reconstruct_lp120_buf123_rc128_24);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60_select(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120_buf123_ld467, int merged_2_reconstruct_lp120_buf123_ld466, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60 read pattern: { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468[root = 0, merged_2_reconstruct_lp120_buf123_ld467, merged_2_reconstruct_lp120_buf123_ld466] -> merged_2_reconstruct_lp120_buf123[merged_2_reconstruct_lp120_buf123_ld466, merged_2_reconstruct_lp120_buf123_ld467] : 0 <= merged_2_reconstruct_lp120_buf123_ld467 <= 511 and 0 <= merged_2_reconstruct_lp120_buf123_ld466 <= 511 }
  // Read schedule : { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 100] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { rc128[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_rc128_24 = merged_2_reconstruct_lp120_buf123.merged_2_reconstruct_lp120_buf123_rc128_24_to_merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_rc128_24;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_read
//	merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_read_bundle_read(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120_buf123_ld467, int merged_2_reconstruct_lp120_buf123_ld466, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60_res = merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60_select(merged_2_reconstruct_lp120_buf123, root, merged_2_reconstruct_lp120_buf123_ld467, merged_2_reconstruct_lp120_buf123_ld466, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_60_res);
	return result;
}

// rc128_write
//	merged_2_reconstruct_lp120_buf123_rc128_24
inline void merged_2_reconstruct_lp120_buf123_rc128_write_bundle_write(hw_uint<32>& rc128_write, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_rc128_24_res = rc128_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_rc128_24_write(merged_2_reconstruct_lp120_buf123_rc128_24_res, merged_2_reconstruct_lp120_buf123, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
}

struct merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15_cache {
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
    // { us136[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123_FIFO_buf633[o0, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 1023 and -1 + us_merged_2_reconstruct_lp120_buf123135 <= 2o0 <= us_merged_2_reconstruct_lp120_buf123135 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15_cache merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15;
};



inline void merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61, merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_FIFO_buf633.merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15.push(merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15_select(merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15 read pattern: { us136[root = 0, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135] -> merged_2_reconstruct_lp120_buf123_FIFO_buf633[o0, o1] : 0 <= us_merged_2_reconstruct_lp120_buf123134 <= 1023 and 0 <= us_merged_2_reconstruct_lp120_buf123135 <= 1023 and -1 + us_merged_2_reconstruct_lp120_buf123135 <= 2o0 <= us_merged_2_reconstruct_lp120_buf123135 and -1 + us_merged_2_reconstruct_lp120_buf123134 <= 2o1 <= us_merged_2_reconstruct_lp120_buf123134 }
  // Read schedule : { us136[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 101] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61 = merged_2_reconstruct_lp120_buf123_FIFO_buf633.merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15.peek(/* one reader or all rams */ ((-1 - us_merged_2_reconstruct_lp120_buf123134) % 2 == 0 && 1021 - us_merged_2_reconstruct_lp120_buf123135 >= 0) ? ((511 - floord(2*us_merged_2_reconstruct_lp120_buf123135, 4))) : 0);
  return value_merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_write
//	merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61
inline void merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_write_bundle_write(hw_uint<32>& load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_write, merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635, int merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_res = load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_write(merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_61_res, merged_2_reconstruct_lp120_buf123_FIFO_buf633, root, merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635, merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634, dynamic_address);
}

// us136_read
//	merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_read_bundle_read(merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15_res = merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15_select(merged_2_reconstruct_lp120_buf123_FIFO_buf633, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_15_res);
	return result;
}

struct merged_2_reconstruct_lp120_buf123_us133_us136_14_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56_cache {
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
    // { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472[root = 0, merged_2_reconstruct_lp120_buf123_us133_ld471, merged_2_reconstruct_lp120_buf123_us133_ld470] -> merged_2_reconstruct_lp120_buf123_us133[merged_2_reconstruct_lp120_buf123_us133_ld470, merged_2_reconstruct_lp120_buf123_us133_ld471] : 0 <= merged_2_reconstruct_lp120_buf123_us133_ld471 <= 1023 and 0 <= merged_2_reconstruct_lp120_buf123_us133_ld470 <= 1023 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_us133_us136_14_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56_cache merged_2_reconstruct_lp120_buf123_us133_us136_14_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56;
};



inline void merged_2_reconstruct_lp120_buf123_us133_us136_14_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_us133_us136_14, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us136_14_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56.push(merged_2_reconstruct_lp120_buf123_us133_us136_14);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56_select(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_2_reconstruct_lp120_buf123_us133_ld471, int merged_2_reconstruct_lp120_buf123_us133_ld470, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56 read pattern: { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472[root = 0, merged_2_reconstruct_lp120_buf123_us133_ld471, merged_2_reconstruct_lp120_buf123_us133_ld470] -> merged_2_reconstruct_lp120_buf123_us133[merged_2_reconstruct_lp120_buf123_us133_ld470, merged_2_reconstruct_lp120_buf123_us133_ld471] : 0 <= merged_2_reconstruct_lp120_buf123_us133_ld471 <= 1023 and 0 <= merged_2_reconstruct_lp120_buf123_us133_ld470 <= 1023 }
  // Read schedule : { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 103] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { us136[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_2_reconstruct_lp120_buf123_us133_us136_14 = merged_2_reconstruct_lp120_buf123_us133.merged_2_reconstruct_lp120_buf123_us133_us136_14_to_merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_us133_us136_14;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_read
//	merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int merged_2_reconstruct_lp120_buf123_us133_ld471, int merged_2_reconstruct_lp120_buf123_us133_ld470, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56_res = merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56_select(merged_2_reconstruct_lp120_buf123_us133, root, merged_2_reconstruct_lp120_buf123_us133_ld471, merged_2_reconstruct_lp120_buf123_us133_ld470, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_56_res);
	return result;
}

// us136_write
//	merged_2_reconstruct_lp120_buf123_us133_us136_14
inline void merged_2_reconstruct_lp120_buf123_us133_us136_write_bundle_write(hw_uint<32>& us136_write, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int root, int us_merged_2_reconstruct_lp120_buf123134, int us_merged_2_reconstruct_lp120_buf123135, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_us136_14_res = us136_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_us133_us136_14_write(merged_2_reconstruct_lp120_buf123_us133_us136_14_res, merged_2_reconstruct_lp120_buf123_us133, root, us_merged_2_reconstruct_lp120_buf123134, us_merged_2_reconstruct_lp120_buf123135, dynamic_address);
}

struct merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23_cache {
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
    // { rc137[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // # of banks: 1
  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23_cache merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23;
};



inline void merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_write(hw_uint<32> & merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638, int dynamic_address) {
  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23.push(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57);
}

inline hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23_select(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23 read pattern: { rc137[root = 0, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131] -> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637[merged_1_reconstruct_lp129131, merged_1_reconstruct_lp129130] : 0 <= merged_1_reconstruct_lp129130 <= 1023 and 0 <= merged_1_reconstruct_lp129131 <= 1023 }
  // Read schedule : { rc137[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  // Write schedule: { load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 104] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
  auto value_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57 = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637.merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23.peek(/* one reader or all rams */ 0);
  return value_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57;
  return 0;
}

// # of bundles = 2
// load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_write
//	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57
inline void merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_write_bundle_write(hw_uint<32>& load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_write, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639, int merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638, int dynamic_address) {
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_res = load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_write.extract<0, 31>();
	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_write(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_57_res, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, root, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638, dynamic_address);
}

// rc137_read
//	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23
inline hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int root, int merged_1_reconstruct_lp129130, int merged_1_reconstruct_lp129131, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23

	hw_uint<32> result;
	hw_uint<32>  merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23_res = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23_select(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, root, merged_1_reconstruct_lp129130, merged_1_reconstruct_lp129131, dynamic_address);
	set_at<0, 32>(result, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_23_res);
	return result;
}

struct merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_to_merged_3_load_to_merged_3_to_gp_30473476_50_cache {
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
    // { load_to_merged_3_to_gp_30473476[root = 0, merged_3_ld475, merged_3_ld474] -> merged_3[merged_3_ld474, merged_3_ld475] : 0 <= merged_3_ld475 <= 255 and 0 <= merged_3_ld474 <= 255 }
  // # of banks: 1
  merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_to_merged_3_load_to_merged_3_to_gp_30473476_50_cache merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_to_merged_3_load_to_merged_3_to_gp_30473476_50;
};



inline void merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_write(hw_uint<32> & merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
  merged_3.merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_to_merged_3_load_to_merged_3_to_gp_30473476_50.push(merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42);
}

inline hw_uint<32>  merged_3_load_to_merged_3_to_gp_30473476_50_select(merged_3_cache& merged_3, int root, int merged_3_ld475, int merged_3_ld474, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_load_to_merged_3_to_gp_30473476_50 read pattern: { load_to_merged_3_to_gp_30473476[root = 0, merged_3_ld475, merged_3_ld474] -> merged_3[merged_3_ld474, merged_3_ld475] : 0 <= merged_3_ld475 <= 255 and 0 <= merged_3_ld474 <= 255 }
  // Read schedule : { load_to_merged_3_to_gp_30473476[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 74] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  // Write schedule: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 72] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42 = merged_3.merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_to_merged_3_load_to_merged_3_to_gp_30473476_50.peek(/* one reader or all rams */ 0);
  return value_merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_to_gp_30473476_read
//	merged_3_load_to_merged_3_to_gp_30473476_50
inline hw_uint<32> merged_3_load_to_merged_3_to_gp_30473476_read_bundle_read(merged_3_cache& merged_3, int root, int merged_3_ld475, int merged_3_ld474, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_load_to_merged_3_to_gp_30473476_50

	hw_uint<32> result;
	hw_uint<32>  merged_3_load_to_merged_3_to_gp_30473476_50_res = merged_3_load_to_merged_3_to_gp_30473476_50_select(merged_3, root, merged_3_ld475, merged_3_ld474, dynamic_address);
	set_at<0, 32>(result, merged_3_load_to_merged_3_to_gp_30473476_50_res);
	return result;
}

// pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_write
//	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42
inline void merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_write_bundle_write(hw_uint<32>& pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_write, merged_3_cache& merged_3, int root, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, int pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, int dynamic_address) {
	hw_uint<32>  merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_res = pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_write.extract<0, 31>();
	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_write(merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_42_res, merged_3, root, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117, pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118, dynamic_address);
}

struct merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_to_merged_3_FIFO_buf641_us127_17_cache {
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
    // { us127[root = 0, us_merged_3125, us_merged_3126] -> merged_3_FIFO_buf641[o0, o1] : 0 <= us_merged_3125 <= 511 and 0 <= us_merged_3126 <= 511 and -1 + us_merged_3126 <= 2o0 <= us_merged_3126 and -1 + us_merged_3125 <= 2o1 <= us_merged_3125 }
  // # of banks: 1
  merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_to_merged_3_FIFO_buf641_us127_17_cache merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_to_merged_3_FIFO_buf641_us127_17;
};



inline void merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_write(hw_uint<32> & merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51, merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int merged_3_to_gp_30473_ld643, int merged_3_to_gp_30473_ld642, int dynamic_address) {
  merged_3_FIFO_buf641.merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_to_merged_3_FIFO_buf641_us127_17.push(merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51);
}

inline hw_uint<32>  merged_3_FIFO_buf641_us127_17_select(merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_FIFO_buf641_us127_17 read pattern: { us127[root = 0, us_merged_3125, us_merged_3126] -> merged_3_FIFO_buf641[o0, o1] : 0 <= us_merged_3125 <= 511 and 0 <= us_merged_3126 <= 511 and -1 + us_merged_3126 <= 2o0 <= us_merged_3126 and -1 + us_merged_3125 <= 2o1 <= us_merged_3125 }
  // Read schedule : { us127[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_merged_3_FIFO_buf641644[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 76] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
  auto value_merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51 = merged_3_FIFO_buf641.merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_to_merged_3_FIFO_buf641_us127_17.peek(/* one reader or all rams */ ((-1 - us_merged_3125) % 2 == 0 && 509 - us_merged_3126 >= 0) ? ((255 - floord(2*us_merged_3126, 4))) : 0);
  return value_merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_FIFO_buf641644_write
//	merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51
inline void merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_write_bundle_write(hw_uint<32>& load_to_merged_3_FIFO_buf641644_write, merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int merged_3_to_gp_30473_ld643, int merged_3_to_gp_30473_ld642, int dynamic_address) {
	hw_uint<32>  merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_res = load_to_merged_3_FIFO_buf641644_write.extract<0, 31>();
	merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_write(merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_51_res, merged_3_FIFO_buf641, root, merged_3_to_gp_30473_ld643, merged_3_to_gp_30473_ld642, dynamic_address);
}

// us127_read
//	merged_3_FIFO_buf641_us127_17
inline hw_uint<32> merged_3_FIFO_buf641_us127_read_bundle_read(merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_FIFO_buf641_us127_17

	hw_uint<32> result;
	hw_uint<32>  merged_3_FIFO_buf641_us127_17_res = merged_3_FIFO_buf641_us127_17_select(merged_3_FIFO_buf641, root, us_merged_3125, us_merged_3126, dynamic_address);
	set_at<0, 32>(result, merged_3_FIFO_buf641_us127_17_res);
	return result;
}

struct merged_3_us124_us127_16_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46_cache {
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
    // { load_to_merged_3_us124_to_gp_14477480[root = 0, merged_3_us124_ld479, merged_3_us124_ld478] -> merged_3_us124[merged_3_us124_ld478, merged_3_us124_ld479] : 0 <= merged_3_us124_ld479 <= 511 and 0 <= merged_3_us124_ld478 <= 511 }
  // # of banks: 1
  merged_3_us124_us127_16_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46_cache merged_3_us124_us127_16_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46;
};



inline void merged_3_us124_us127_16_write(hw_uint<32> & merged_3_us124_us127_16, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
  merged_3_us124.merged_3_us124_us127_16_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46.push(merged_3_us124_us127_16);
}

inline hw_uint<32>  merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46_select(merged_3_us124_cache& merged_3_us124, int root, int merged_3_us124_ld479, int merged_3_us124_ld478, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46 read pattern: { load_to_merged_3_us124_to_gp_14477480[root = 0, merged_3_us124_ld479, merged_3_us124_ld478] -> merged_3_us124[merged_3_us124_ld478, merged_3_us124_ld479] : 0 <= merged_3_us124_ld479 <= 511 and 0 <= merged_3_us124_ld478 <= 511 }
  // Read schedule : { load_to_merged_3_us124_to_gp_14477480[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 82] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { us127[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_3_us124_us127_16 = merged_3_us124.merged_3_us124_us127_16_to_merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46.peek(/* one reader or all rams */ 0);
  return value_merged_3_us124_us127_16;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_us124_to_gp_14477480_read
//	merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46
inline hw_uint<32> merged_3_us124_load_to_merged_3_us124_to_gp_14477480_read_bundle_read(merged_3_us124_cache& merged_3_us124, int root, int merged_3_us124_ld479, int merged_3_us124_ld478, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46

	hw_uint<32> result;
	hw_uint<32>  merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46_res = merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46_select(merged_3_us124, root, merged_3_us124_ld479, merged_3_us124_ld478, dynamic_address);
	set_at<0, 32>(result, merged_3_us124_load_to_merged_3_us124_to_gp_14477480_46_res);
	return result;
}

// us127_write
//	merged_3_us124_us127_16
inline void merged_3_us124_us127_write_bundle_write(hw_uint<32>& us127_write, merged_3_us124_cache& merged_3_us124, int root, int us_merged_3125, int us_merged_3126, int dynamic_address) {
	hw_uint<32>  merged_3_us124_us127_16_res = us127_write.extract<0, 31>();
	merged_3_us124_us127_16_write(merged_3_us124_us127_16_res, merged_3_us124, root, us_merged_3125, us_merged_3126, dynamic_address);
}

struct merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_to_merged_3_us124_FIFO_buf645_rc128_26_cache {
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
    // { rc128[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_3_us124_FIFO_buf645[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // # of banks: 1
  merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_to_merged_3_us124_FIFO_buf645_rc128_26_cache merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_to_merged_3_us124_FIFO_buf645_rc128_26;
};



inline void merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_write(hw_uint<32> & merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_3_us124_to_gp_14477_ld647, int merged_3_us124_to_gp_14477_ld646, int dynamic_address) {
  merged_3_us124_FIFO_buf645.merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_to_merged_3_us124_FIFO_buf645_rc128_26.push(merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47);
}

inline hw_uint<32>  merged_3_us124_FIFO_buf645_rc128_26_select(merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // merged_3_us124_FIFO_buf645_rc128_26 read pattern: { rc128[root = 0, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122] -> merged_3_us124_FIFO_buf645[merged_2_reconstruct_lp120122, merged_2_reconstruct_lp120121] : 0 <= merged_2_reconstruct_lp120121 <= 511 and 0 <= merged_2_reconstruct_lp120122 <= 511 }
  // Read schedule : { rc128[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { load_to_merged_3_us124_FIFO_buf645648[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 87] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47 = merged_3_us124_FIFO_buf645.merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_to_merged_3_us124_FIFO_buf645_rc128_26.peek(/* one reader or all rams */ 0);
  return value_merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47;
  return 0;
}

// # of bundles = 2
// load_to_merged_3_us124_FIFO_buf645648_write
//	merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47
inline void merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_write_bundle_write(hw_uint<32>& load_to_merged_3_us124_FIFO_buf645648_write, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_3_us124_to_gp_14477_ld647, int merged_3_us124_to_gp_14477_ld646, int dynamic_address) {
	hw_uint<32>  merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_res = load_to_merged_3_us124_FIFO_buf645648_write.extract<0, 31>();
	merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_write(merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_47_res, merged_3_us124_FIFO_buf645, root, merged_3_us124_to_gp_14477_ld647, merged_3_us124_to_gp_14477_ld646, dynamic_address);
}

// rc128_read
//	merged_3_us124_FIFO_buf645_rc128_26
inline hw_uint<32> merged_3_us124_FIFO_buf645_rc128_read_bundle_read(merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int root, int merged_2_reconstruct_lp120121, int merged_2_reconstruct_lp120122, int dynamic_address) {
  // # of ports in bundle: 1
    // merged_3_us124_FIFO_buf645_rc128_26

	hw_uint<32> result;
	hw_uint<32>  merged_3_us124_FIFO_buf645_rc128_26_res = merged_3_us124_FIFO_buf645_rc128_26_select(merged_3_us124_FIFO_buf645, root, merged_2_reconstruct_lp120121, merged_2_reconstruct_lp120122, dynamic_address);
	set_at<0, 32>(result, merged_3_us124_FIFO_buf645_rc128_26_res);
	return result;
}

// Operation logic
inline void load_to_gp_in0_1_buf8_to_gp_7321324(gp_in0_1_buf8_cache& gp_in0_1_buf8, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_7321, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8_gp_in0_1_buf8_ld322_c__gp_in0_1_buf8_ld323_value = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_7321324_read_bundle_read(gp_in0_1_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_to_gp_7321
	gp_in0_1_buf8_to_gp_7321.write(gp_in0_1_buf8_gp_in0_1_buf8_ld322_c__gp_in0_1_buf8_ld323_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in0_FIFO_buf569572(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in0_to_gp_0401, in0_FIFO_buf569_cache& in0_FIFO_buf569, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_to_gp_0401
	auto in0_to_gp_0401_in0_to_gp_0401_ld570_c__in0_to_gp_0401_ld571_value = in0_to_gp_0401.read();
	// Produce: in0_FIFO_buf569
	in0_FIFO_buf569_load_to_in0_FIFO_buf569572_write_bundle_write(/* arg names */in0_to_gp_0401_in0_to_gp_0401_ld570_c__in0_to_gp_0401_ld571_value, in0_FIFO_buf569, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_to_gp_22317320(gp_in0_1_buf8_cache& gp_in0_1_buf8, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8_gp_in0_1_buf8_ld318_c__gp_in0_1_buf8_ld319_value = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_22317320_read_bundle_read(gp_in0_1_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_to_gp_22317
	gp_in0_1_buf8_to_gp_22317.write(gp_in0_1_buf8_gp_in0_1_buf8_ld318_c__gp_in0_1_buf8_ld319_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_110_merged303(in0_FIFO_buf569_cache& in0_FIFO_buf569, gp_in0_1_buf8_cache& gp_in0_1_buf8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_FIFO_buf569
	auto in0_FIFO_buf569_2_m__lp_gp_in0_110__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in0_19__p___m_3_rp___p__1_p_7_value = in0_FIFO_buf569_gp_in0_110_merged303_read_bundle_read(in0_FIFO_buf569/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_110_cu301(in0_FIFO_buf569_2_m__lp_gp_in0_110__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in0_19__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in0_1_buf8
	gp_in0_1_buf8_gp_in0_110_merged303_write_bundle_write(/* arg names */compute_result, gp_in0_1_buf8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_to_gp_1313316(gp_in0_1_buf8_cache& gp_in0_1_buf8, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8
	auto gp_in0_1_buf8_gp_in0_1_buf8_ld314_c__gp_in0_1_buf8_ld315_value = gp_in0_1_buf8_load_to_gp_in0_1_buf8_to_gp_1313316_read_bundle_read(gp_in0_1_buf8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_to_gp_1313
	gp_in0_1_buf8_to_gp_1313.write(gp_in0_1_buf8_gp_in0_1_buf8_ld314_c__gp_in0_1_buf8_ld315_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_19_gp_in0_1_buf8_ld315_gp_in0_1_buf8_ld319_gp_in0_1_buf8_ld323_in0_to_gp_0401_ld571_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_to_gp_0401, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_7321) {

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

// schedule: { load_to_gp_in0_1_buf8_to_gp_7321324[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 13] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026; load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054; load_to_gp_in0_1_buf8_to_gp_1313316[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 18] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026; load_to_gp_in0_1_buf8_to_gp_22317320[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 10] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
//   { load_to_gp_in0_1_buf8_to_gp_7321324[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 13] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in0_1_buf8_to_gp_7321324(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { gp_in0_110_merged303[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
// Condition for gp_in0_110_merged303(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_in0_FIFO_buf569572[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
// Condition for load_to_in0_FIFO_buf569572(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_to_gp_1313316[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 18] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
// Condition for load_to_gp_in0_1_buf8_to_gp_1313316(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_to_gp_22317320[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 10] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in0_1_buf8_to_gp_22317320(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 18] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 2054 and 2 <= i2 <= 2054; [0, i1, i2, 13] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 8 <= i1 <= 2054 and 8 <= i2 <= 2054; [0, i1, i2, 10] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 8 <= i1 <= 2054 and 8 <= i2 <= 2054; [0, i1, i2, 8] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 2054 and 2 <= i2 <= 2054; [0, i1, i2, 4] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2054; i1++) {
	    for (int i2 = 0; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in0_FIFO_buf569572(in0_to_gp_0401 /* buf name */, in0_FIFO_buf569, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          gp_in0_110_merged303(in0_FIFO_buf569 /* buf name */, gp_in0_1_buf8, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_to_gp_22317320(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_to_gp_22317, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_to_gp_7321324(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_to_gp_7321, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_to_gp_1313316(gp_in0_1_buf8 /* buf name */, gp_in0_1_buf8_to_gp_1313, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_1_buf8_FIFO_buf481484(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_1313, gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_to_gp_1313
	auto gp_in0_1_buf8_to_gp_1313_gp_in0_1_buf8_to_gp_1313_ld482_c__gp_in0_1_buf8_to_gp_1313_ld483_value = gp_in0_1_buf8_to_gp_1313.read();
	// Produce: gp_in0_1_buf8_FIFO_buf481
	gp_in0_1_buf8_FIFO_buf481_load_to_gp_in0_1_buf8_FIFO_buf481484_write_bundle_write(/* arg names */gp_in0_1_buf8_to_gp_1313_gp_in0_1_buf8_to_gp_1313_ld482_c__gp_in0_1_buf8_to_gp_1313_ld483_value, gp_in0_1_buf8_FIFO_buf481, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_to_gp_23333336(gp_in0_2_buf16_cache& gp_in0_2_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_23333, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16_gp_in0_2_buf16_ld334_c__gp_in0_2_buf16_ld335_value = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_23333336_read_bundle_read(gp_in0_2_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_to_gp_23333
	gp_in0_2_buf16_to_gp_23333.write(gp_in0_2_buf16_gp_in0_2_buf16_ld334_c__gp_in0_2_buf16_ld335_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_218_merged309(gp_in0_1_buf8_FIFO_buf481_cache& gp_in0_1_buf8_FIFO_buf481, gp_in0_2_buf16_cache& gp_in0_2_buf16, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_FIFO_buf481
	auto gp_in0_1_buf8_FIFO_buf481_2_m__lp_gp_in0_218__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in0_217__p___m_1_rp___p__1_p_3_value = gp_in0_1_buf8_FIFO_buf481_gp_in0_218_merged309_read_bundle_read(gp_in0_1_buf8_FIFO_buf481/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_218_cu307(gp_in0_1_buf8_FIFO_buf481_2_m__lp_gp_in0_218__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in0_217__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in0_2_buf16
	gp_in0_2_buf16_gp_in0_218_merged309_write_bundle_write(/* arg names */compute_result, gp_in0_2_buf16, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_to_gp_2329332(gp_in0_2_buf16_cache& gp_in0_2_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_2329, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16_gp_in0_2_buf16_ld330_c__gp_in0_2_buf16_ld331_value = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_2329332_read_bundle_read(gp_in0_2_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_to_gp_2329
	gp_in0_2_buf16_to_gp_2329.write(gp_in0_2_buf16_gp_in0_2_buf16_ld330_c__gp_in0_2_buf16_ld331_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_to_gp_8337340(gp_in0_2_buf16_cache& gp_in0_2_buf16, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_8337, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16
	auto gp_in0_2_buf16_gp_in0_2_buf16_ld338_c__gp_in0_2_buf16_ld339_value = gp_in0_2_buf16_load_to_gp_in0_2_buf16_to_gp_8337340_read_bundle_read(gp_in0_2_buf16/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_to_gp_8337
	gp_in0_2_buf16_to_gp_8337.write(gp_in0_2_buf16_gp_in0_2_buf16_ld338_c__gp_in0_2_buf16_ld339_value);

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

// schedule: { load_to_gp_in0_2_buf16_to_gp_23333336[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 33] : 0 < d1 <= 512 and 0 < d2 <= 512; gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512; load_to_gp_in0_2_buf16_to_gp_2329332[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 30] : 0 <= d1 <= 512 and 0 <= d2 <= 512; load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026; load_to_gp_in0_2_buf16_to_gp_8337340[d0 = 0, d1, d2] -> [0, 6 + 4d1, 10 + 4d2, 37] : 0 < d1 <= 512 and 0 < d2 <= 512 }
//   { load_to_gp_in0_2_buf16_to_gp_23333336[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 33] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in0_2_buf16_to_gp_23333336(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { gp_in0_218_merged309[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 26] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
// Condition for gp_in0_218_merged309(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_to_gp_2329332[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 30] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
// Condition for load_to_gp_in0_2_buf16_to_gp_2329332(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_FIFO_buf481484[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 24] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
// Condition for load_to_gp_in0_1_buf8_FIFO_buf481484(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_to_gp_8337340[d0 = 0, d1, d2] -> [0, 6 + 4d1, 10 + 4d2, 37] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in0_2_buf16_to_gp_8337340(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 37] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 14 <= i2 <= 2058; [0, i1, i2, 33] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 10 <= i2 <= 2054; [0, i1, i2, 30] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054; [0, i1, i2, 26] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054; [0, i1, i2, 24] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 2054 and 2 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 2054; i1++) {
	    for (int i2 = 2; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 <= 2054 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 <= 2054 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_FIFO_buf481484(gp_in0_1_buf8_to_gp_1313 /* buf name */, gp_in0_1_buf8_FIFO_buf481, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and 6 <= i2 <= 2054 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and 6 <= i2 <= 2054 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          gp_in0_218_merged309(gp_in0_1_buf8_FIFO_buf481 /* buf name */, gp_in0_2_buf16, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and 6 <= i2 <= 2054 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and 6 <= i2 <= 2054 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_to_gp_2329332(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_to_gp_2329, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 10 and 10 <= i2 <= 2054 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 10 and 10 <= i2 <= 2054 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_to_gp_23333336(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_to_gp_23333, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 10 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 10 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_to_gp_8337340(gp_in0_2_buf16 /* buf name */, gp_in0_2_buf16_to_gp_8337, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_1_buf56_FIFO_buf525528(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_to_gp_10357
	auto gp_in1_1_buf56_to_gp_10357_gp_in1_1_buf56_to_gp_10357_ld526_c__gp_in1_1_buf56_to_gp_10357_ld527_value = gp_in1_1_buf56_to_gp_10357.read();
	// Produce: gp_in1_1_buf56_FIFO_buf525
	gp_in1_1_buf56_FIFO_buf525_load_to_gp_in1_1_buf56_FIFO_buf525528_write_bundle_write(/* arg names */gp_in1_1_buf56_to_gp_10357_gp_in1_1_buf56_to_gp_10357_ld526_c__gp_in1_1_buf56_to_gp_10357_ld527_value, gp_in1_1_buf56_FIFO_buf525, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_us88_FIFO_buf553556(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_us88_to_gp_10385, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_us88_to_gp_10385
	auto gp_in1_2_buf64_us88_to_gp_10385_gp_in1_2_buf64_us88_to_gp_10385_ld554_c__gp_in1_2_buf64_us88_to_gp_10385_ld555_value = gp_in1_2_buf64_us88_to_gp_10385.read();
	// Produce: gp_in1_2_buf64_us88_FIFO_buf553
	gp_in1_2_buf64_us88_FIFO_buf553_load_to_gp_in1_2_buf64_us88_FIFO_buf553556_write_bundle_write(/* arg names */gp_in1_2_buf64_us88_to_gp_10385_gp_in1_2_buf64_us88_to_gp_10385_ld554_c__gp_in1_2_buf64_us88_to_gp_10385_ld555_value, gp_in1_2_buf64_us88_FIFO_buf553, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff95(gp_in1_1_buf56_FIFO_buf525_cache& gp_in1_1_buf56_FIFO_buf525, gp_in1_2_buf64_us88_FIFO_buf553_cache& gp_in1_2_buf64_us88_FIFO_buf553, lp_in1_1_buf92_cache& lp_in1_1_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_FIFO_buf525
	auto gp_in1_1_buf56_FIFO_buf525_lp_in1_194_p_3_c___lp_in1_193_p_3_value = gp_in1_1_buf56_FIFO_buf525_diff95_read_bundle_read(gp_in1_1_buf56_FIFO_buf525/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_2_buf64_us88_FIFO_buf553
	auto gp_in1_2_buf64_us88_FIFO_buf553_lp_in1_194_p_0_c___lp_in1_193_p_0_value = gp_in1_2_buf64_us88_FIFO_buf553_diff95_read_bundle_read(gp_in1_2_buf64_us88_FIFO_buf553/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in1_1_buf56_FIFO_buf525_lp_in1_194_p_3_c___lp_in1_193_p_3_value, gp_in1_2_buf64_us88_FIFO_buf553_lp_in1_194_p_0_c___lp_in1_193_p_0_value);
	// Produce: lp_in1_1_buf92
	lp_in1_1_buf92_diff95_write_bundle_write(/* arg names */compute_result, lp_in1_1_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_1_buf92_to_gp_19433436(lp_in1_1_buf92_cache& lp_in1_1_buf92, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_1_buf92_to_gp_19433, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_1_buf92
	auto lp_in1_1_buf92_lp_in1_1_buf92_ld434_c__lp_in1_1_buf92_ld435_value = lp_in1_1_buf92_load_to_lp_in1_1_buf92_to_gp_19433436_read_bundle_read(lp_in1_1_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in1_1_buf92_to_gp_19433
	lp_in1_1_buf92_to_gp_19433.write(lp_in1_1_buf92_lp_in1_1_buf92_ld434_c__lp_in1_1_buf92_ld435_value);

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

// schedule: { load_to_lp_in1_1_buf92_to_gp_19433436[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 86] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_2_buf64_us88_FIFO_buf553556[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 71] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_1_buf56_FIFO_buf525528[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 25] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; diff95[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 83] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_lp_in1_1_buf92_to_gp_19433436[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 86] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in1_1_buf92_to_gp_19433436(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-86 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_us88_FIFO_buf553556[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 71] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_2_buf64_us88_FIFO_buf553556(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-71 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_FIFO_buf525528[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 25] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in1_1_buf56_FIFO_buf525528(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { diff95[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 83] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for diff95(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-83 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 86] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 83] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 71] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 25] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 10; i2 <= 2056; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_1_buf56_FIFO_buf525528(gp_in1_1_buf56_to_gp_10357 /* buf name */, gp_in1_1_buf56_FIFO_buf525, 0, ((-2 + (1*(((1*i1)) >> 1)))), ((-2 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_2_buf64_us88_FIFO_buf553556(gp_in1_2_buf64_us88_to_gp_10385 /* buf name */, gp_in1_2_buf64_us88_FIFO_buf553, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          diff95(gp_in1_1_buf56_FIFO_buf525 /* buf name */, gp_in1_2_buf64_us88_FIFO_buf553 /* buf name */, lp_in1_1_buf92, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in1_1_buf92_to_gp_19433436(lp_in1_1_buf92 /* buf name */, lp_in1_1_buf92_to_gp_19433, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_2_buf64_FIFO_buf541544(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_11373, gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_to_gp_11373
	auto gp_in1_2_buf64_to_gp_11373_gp_in1_2_buf64_to_gp_11373_ld542_c__gp_in1_2_buf64_to_gp_11373_ld543_value = gp_in1_2_buf64_to_gp_11373.read();
	// Produce: gp_in1_2_buf64_FIFO_buf541
	gp_in1_2_buf64_FIFO_buf541_load_to_gp_in1_2_buf64_FIFO_buf541544_write_bundle_write(/* arg names */gp_in1_2_buf64_to_gp_11373_gp_in1_2_buf64_to_gp_11373_ld542_c__gp_in1_2_buf64_to_gp_11373_ld543_value, gp_in1_2_buf64_FIFO_buf541, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff87(gp_in1_2_buf64_FIFO_buf541_cache& gp_in1_2_buf64_FIFO_buf541, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, lp_in1_2_buf84_cache& lp_in1_2_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_FIFO_buf541
	auto gp_in1_2_buf64_FIFO_buf541_lp_in1_286_p_1_c___lp_in1_285_p_1_value = gp_in1_2_buf64_FIFO_buf541_diff87_read_bundle_read(gp_in1_2_buf64_FIFO_buf541/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_3_buf72_us80_FIFO_buf565
	auto gp_in1_3_buf72_us80_FIFO_buf565_lp_in1_286_p_0_c___lp_in1_285_p_0_value = gp_in1_3_buf72_us80_FIFO_buf565_diff87_read_bundle_read(gp_in1_3_buf72_us80_FIFO_buf565/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in1_2_buf64_FIFO_buf541_lp_in1_286_p_1_c___lp_in1_285_p_1_value, gp_in1_3_buf72_us80_FIFO_buf565_lp_in1_286_p_0_c___lp_in1_285_p_0_value);
	// Produce: lp_in1_2_buf84
	lp_in1_2_buf84_diff87_write_bundle_write(/* arg names */compute_result, lp_in1_2_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_us80_FIFO_buf565568(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_us80_to_gp_11397, gp_in1_3_buf72_us80_FIFO_buf565_cache& gp_in1_3_buf72_us80_FIFO_buf565, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_us80_to_gp_11397
	auto gp_in1_3_buf72_us80_to_gp_11397_gp_in1_3_buf72_us80_to_gp_11397_ld566_c__gp_in1_3_buf72_us80_to_gp_11397_ld567_value = gp_in1_3_buf72_us80_to_gp_11397.read();
	// Produce: gp_in1_3_buf72_us80_FIFO_buf565
	gp_in1_3_buf72_us80_FIFO_buf565_load_to_gp_in1_3_buf72_us80_FIFO_buf565568_write_bundle_write(/* arg names */gp_in1_3_buf72_us80_to_gp_11397_gp_in1_3_buf72_us80_to_gp_11397_ld566_c__gp_in1_3_buf72_us80_to_gp_11397_ld567_value, gp_in1_3_buf72_us80_FIFO_buf565, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_2_buf84_to_gp_20437440(lp_in1_2_buf84_cache& lp_in1_2_buf84, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_2_buf84_to_gp_20437, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_2_buf84
	auto lp_in1_2_buf84_lp_in1_2_buf84_ld438_c__lp_in1_2_buf84_ld439_value = lp_in1_2_buf84_load_to_lp_in1_2_buf84_to_gp_20437440_read_bundle_read(lp_in1_2_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in1_2_buf84_to_gp_20437
	lp_in1_2_buf84_to_gp_20437.write(lp_in1_2_buf84_lp_in1_2_buf84_ld438_c__lp_in1_2_buf84_ld439_value);

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

// schedule: { load_to_gp_in1_2_buf64_FIFO_buf541544[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 52] : 0 < d1 <= 512 and 0 < d2 <= 512; load_to_lp_in1_2_buf84_to_gp_20437440[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 91] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_3_buf72_us80_FIFO_buf565568[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 88] : 0 <= d1 <= 511 and 0 <= d2 <= 511; diff87[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_gp_in1_2_buf64_FIFO_buf541544[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 52] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in1_2_buf64_FIFO_buf541544(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-52 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_lp_in1_2_buf84_to_gp_20437440[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 91] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in1_2_buf84_to_gp_20437440(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-91 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_us80_FIFO_buf565568[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 88] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_3_buf72_us80_FIFO_buf565568(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-88 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { diff87[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 89] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for diff87(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-89 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 and 88 <= i3 <= 89; [0, i1, i2, 91] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 52] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_2_buf64_FIFO_buf541544(gp_in1_2_buf64_to_gp_11373 /* buf name */, gp_in1_2_buf64_FIFO_buf541, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_3_buf72_us80_FIFO_buf565568(gp_in1_3_buf72_us80_to_gp_11397 /* buf name */, gp_in1_3_buf72_us80_FIFO_buf565, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          diff87(gp_in1_2_buf64_FIFO_buf541 /* buf name */, gp_in1_3_buf72_us80_FIFO_buf565 /* buf name */, lp_in1_2_buf84, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in1_2_buf84_to_gp_20437440(lp_in1_2_buf84 /* buf name */, lp_in1_2_buf84_to_gp_20437, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448(merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_0_reconstruct_lp138_buf141_to_gp_21445, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141
	auto merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_c__merged_0_reconstruct_lp138_buf141_ld447_value = merged_0_reconstruct_lp138_buf141_load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448_read_bundle_read(merged_0_reconstruct_lp138_buf141/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_0_reconstruct_lp138_buf141_to_gp_21445
	merged_0_reconstruct_lp138_buf141_to_gp_21445.write(merged_0_reconstruct_lp138_buf141_merged_0_reconstruct_lp138_buf141_ld446_c__merged_0_reconstruct_lp138_buf141_ld447_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc146(merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, merged_0_reconstruct_lp138_buf141_cache& merged_0_reconstruct_lp138_buf141, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_FIFO_buf609
	auto merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_p_0_c___merged_0_reconstruct_lp138139_p_0_value = merged_0_FIFO_buf609_rc146_read_bundle_read(merged_0_FIFO_buf609/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625
	auto merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_p_0_c___merged_0_reconstruct_lp138139_p_0_value = merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_rc146_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(merged_0_FIFO_buf609_merged_0_reconstruct_lp138140_p_0_c___merged_0_reconstruct_lp138139_p_0_value, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_merged_0_reconstruct_lp138140_p_0_c___merged_0_reconstruct_lp138139_p_0_value);
	// Produce: merged_0_reconstruct_lp138_buf141
	merged_0_reconstruct_lp138_buf141_rc146_write_bundle_write(/* arg names */compute_result, merged_0_reconstruct_lp138_buf141, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_0_FIFO_buf609612(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_0_to_gp_12441, merged_0_FIFO_buf609_cache& merged_0_FIFO_buf609, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_to_gp_12441
	auto merged_0_to_gp_12441_merged_0_to_gp_12441_ld610_c__merged_0_to_gp_12441_ld611_value = merged_0_to_gp_12441.read();
	// Produce: merged_0_FIFO_buf609
	merged_0_FIFO_buf609_load_to_merged_0_FIFO_buf609612_write_bundle_write(/* arg names */merged_0_to_gp_12441_merged_0_to_gp_12441_ld610_c__merged_0_to_gp_12441_ld611_value, merged_0_FIFO_buf609, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_cache& merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_us142_to_gp_12457
	auto merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_c__merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_value = merged_1_reconstruct_lp129_buf132_us142_to_gp_12457.read();
	// Produce: merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625
	merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625_load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628_write_bundle_write(/* arg names */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld626_c__merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_value, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_0_reconstruct_lp138139_merged_0_reconstruct_lp138_buf141_ld447_merged_0_to_gp_12441_ld611_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457_ld627_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_0_to_gp_12441, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_0_reconstruct_lp138_buf141_to_gp_21445) {

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

// schedule: { load_to_merged_0_FIFO_buf609612[d0 = 0, d1, d2] -> [0, 14 + d1, 8 + d2, 79] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; rc146[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { load_to_merged_0_FIFO_buf609612[d0 = 0, d1, d2] -> [0, 14 + d1, 8 + d2, 79] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_merged_0_FIFO_buf609612(((((-79 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { rc146[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 111] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for rc146(((((-111 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))
//   { load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 112] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448(((((-112 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))
//   { load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 110] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628(((((-110 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 2061 and 14 <= i2 <= 2061 and 110 <= i3 <= 112; [0, i1, i2, 79] : 14 <= i1 <= 2061 and 8 <= i2 <= 2055 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2061; i1++) {
	    for (int i2 = 8; i2 <= 2061; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i2 <= 2055 }
	        // { [i0, i1, i2] : i2 <= 2055 }
	          // { [i0, i1, i2] : 2055 - i2 >= 0 }
	        if ((((((2055 + -1*i2)) >= 0)))) {
	          load_to_merged_0_FIFO_buf609612(merged_0_to_gp_12441 /* buf name */, merged_0_FIFO_buf609, 0, ((-14 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 14 }
	        // { [i0, i1, i2] : i2 >= 14 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-14 + 1*i2)) >= 0)))) {
	          load_to_merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625628(merged_1_reconstruct_lp129_buf132_us142_to_gp_12457 /* buf name */, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 14 }
	        // { [i0, i1, i2] : i2 >= 14 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-14 + 1*i2)) >= 0)))) {
	          rc146(merged_0_FIFO_buf609 /* buf name */, merged_1_reconstruct_lp129_buf132_us142_FIFO_buf625 /* buf name */, merged_0_reconstruct_lp138_buf141, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 14 }
	        // { [i0, i1, i2] : i2 >= 14 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-14 + 1*i2)) >= 0)))) {
	          load_to_merged_0_reconstruct_lp138_buf141_to_gp_21445448(merged_0_reconstruct_lp138_buf141 /* buf name */, merged_0_reconstruct_lp138_buf141_to_gp_21445, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_1_FIFO_buf617620(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_to_gp_13449, merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_to_gp_13449
	auto merged_1_to_gp_13449_merged_1_to_gp_13449_ld618_c__merged_1_to_gp_13449_ld619_value = merged_1_to_gp_13449.read();
	// Produce: merged_1_FIFO_buf617
	merged_1_FIFO_buf617_load_to_merged_1_FIFO_buf617620_write_bundle_write(/* arg names */merged_1_to_gp_13449_merged_1_to_gp_13449_ld618_c__merged_1_to_gp_13449_ld619_value, merged_1_FIFO_buf617, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456(merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132
	auto merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129_buf132_ld454_c__merged_1_reconstruct_lp129_buf132_ld455_value = merged_1_reconstruct_lp129_buf132_load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456_read_bundle_read(merged_1_reconstruct_lp129_buf132/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_1_reconstruct_lp129_buf132_to_gp_28453
	merged_1_reconstruct_lp129_buf132_to_gp_28453.write(merged_1_reconstruct_lp129_buf132_merged_1_reconstruct_lp129_buf132_ld454_c__merged_1_reconstruct_lp129_buf132_ld455_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_us133_to_gp_13469
	auto merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638_c__merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639_value = merged_2_reconstruct_lp120_buf123_us133_to_gp_13469.read();
	// Produce: merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637
	merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640_write_bundle_write(/* arg names */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld638_c__merged_2_reconstruct_lp120_buf123_us133_to_gp_13469_ld639_value, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc137(merged_1_FIFO_buf617_cache& merged_1_FIFO_buf617, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_cache& merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, merged_1_reconstruct_lp129_buf132_cache& merged_1_reconstruct_lp129_buf132, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_FIFO_buf617
	auto merged_1_FIFO_buf617_merged_1_reconstruct_lp129131_p_0_c___merged_1_reconstruct_lp129130_p_0_value = merged_1_FIFO_buf617_rc137_read_bundle_read(merged_1_FIFO_buf617/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637
	auto merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_merged_1_reconstruct_lp129131_p_0_c___merged_1_reconstruct_lp129130_p_0_value = merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_rc137_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(merged_1_FIFO_buf617_merged_1_reconstruct_lp129131_p_0_c___merged_1_reconstruct_lp129130_p_0_value, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637_merged_1_reconstruct_lp129131_p_0_c___merged_1_reconstruct_lp129130_p_0_value);
	// Produce: merged_1_reconstruct_lp129_buf132
	merged_1_reconstruct_lp129_buf132_rc137_write_bundle_write(/* arg names */compute_result, merged_1_reconstruct_lp129_buf132, d0, d1, d2, 0);

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

// schedule: { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 106] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; rc137[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 104] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_1_FIFO_buf617620[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 96] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 106] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-106 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))
//   { rc137[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 105] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for rc137(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-105 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 104] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-104 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))
//   { load_to_merged_1_FIFO_buf617620[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 96] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_FIFO_buf617620(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-96 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2060 and 14 <= i2 <= 2060 and 104 <= i3 <= 106; [0, i1, i2, 96] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2060 and 14 <= i2 <= 2060 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2060; i1++) {
	    for (int i2 = 14; i2 <= 2060; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_1_FIFO_buf617620(merged_1_to_gp_13449 /* buf name */, merged_1_FIFO_buf617, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637640(merged_2_reconstruct_lp120_buf123_us133_to_gp_13469 /* buf name */, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          rc137(merged_1_FIFO_buf617 /* buf name */, merged_2_reconstruct_lp120_buf123_us133_FIFO_buf637 /* buf name */, merged_1_reconstruct_lp129_buf132, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_1_reconstruct_lp129_buf132_to_gp_28453456(merged_1_reconstruct_lp129_buf132 /* buf name */, merged_1_reconstruct_lp129_buf132_to_gp_28453, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_3_us124_FIFO_buf645648(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_us124_to_gp_14477, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_us124_to_gp_14477
	auto merged_3_us124_to_gp_14477_merged_3_us124_to_gp_14477_ld646_c__merged_3_us124_to_gp_14477_ld647_value = merged_3_us124_to_gp_14477.read();
	// Produce: merged_3_us124_FIFO_buf645
	merged_3_us124_FIFO_buf645_load_to_merged_3_us124_FIFO_buf645648_write_bundle_write(/* arg names */merged_3_us124_to_gp_14477_merged_3_us124_to_gp_14477_ld646_c__merged_3_us124_to_gp_14477_ld647_value, merged_3_us124_FIFO_buf645, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_FIFO_buf629632(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_to_gp_14461, merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_to_gp_14461
	auto merged_2_to_gp_14461_merged_2_to_gp_14461_ld630_c__merged_2_to_gp_14461_ld631_value = merged_2_to_gp_14461.read();
	// Produce: merged_2_FIFO_buf629
	merged_2_FIFO_buf629_load_to_merged_2_FIFO_buf629632_write_bundle_write(/* arg names */merged_2_to_gp_14461_merged_2_to_gp_14461_ld630_c__merged_2_to_gp_14461_ld631_value, merged_2_FIFO_buf629, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468(merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_to_gp_29465, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123
	auto merged_2_reconstruct_lp120_buf123_merged_2_reconstruct_lp120_buf123_ld466_c__merged_2_reconstruct_lp120_buf123_ld467_value = merged_2_reconstruct_lp120_buf123_load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468_read_bundle_read(merged_2_reconstruct_lp120_buf123/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_reconstruct_lp120_buf123_to_gp_29465
	merged_2_reconstruct_lp120_buf123_to_gp_29465.write(merged_2_reconstruct_lp120_buf123_merged_2_reconstruct_lp120_buf123_ld466_c__merged_2_reconstruct_lp120_buf123_ld467_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc128(merged_2_FIFO_buf629_cache& merged_2_FIFO_buf629, merged_3_us124_FIFO_buf645_cache& merged_3_us124_FIFO_buf645, merged_2_reconstruct_lp120_buf123_cache& merged_2_reconstruct_lp120_buf123, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_FIFO_buf629
	auto merged_2_FIFO_buf629_merged_2_reconstruct_lp120122_p_0_c___merged_2_reconstruct_lp120121_p_0_value = merged_2_FIFO_buf629_rc128_read_bundle_read(merged_2_FIFO_buf629/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: merged_3_us124_FIFO_buf645
	auto merged_3_us124_FIFO_buf645_merged_2_reconstruct_lp120122_p_0_c___merged_2_reconstruct_lp120121_p_0_value = merged_3_us124_FIFO_buf645_rc128_read_bundle_read(merged_3_us124_FIFO_buf645/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(merged_2_FIFO_buf629_merged_2_reconstruct_lp120122_p_0_c___merged_2_reconstruct_lp120121_p_0_value, merged_3_us124_FIFO_buf645_merged_2_reconstruct_lp120122_p_0_c___merged_2_reconstruct_lp120121_p_0_value);
	// Produce: merged_2_reconstruct_lp120_buf123
	merged_2_reconstruct_lp120_buf123_rc128_write_bundle_write(/* arg names */compute_result, merged_2_reconstruct_lp120_buf123, d0, d1, d2, 0);

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

// schedule: { rc128[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 100] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_2_FIFO_buf629632[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 98] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_3_us124_FIFO_buf645648[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 87] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { rc128[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 99] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for rc128(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-99 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 100] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-100 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_merged_2_FIFO_buf629632[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 98] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_FIFO_buf629632(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-98 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_merged_3_us124_FIFO_buf645648[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 87] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_3_us124_FIFO_buf645648(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-87 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 and 98 <= i3 <= 100; [0, i1, i2, 87] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_3_us124_FIFO_buf645648(merged_3_us124_to_gp_14477 /* buf name */, merged_3_us124_FIFO_buf645, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_FIFO_buf629632(merged_2_to_gp_14461 /* buf name */, merged_2_FIFO_buf629, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          rc128(merged_2_FIFO_buf629 /* buf name */, merged_3_us124_FIFO_buf645 /* buf name */, merged_2_reconstruct_lp120_buf123, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_to_gp_29465468(merged_2_reconstruct_lp120_buf123 /* buf name */, merged_2_reconstruct_lp120_buf123_to_gp_29465, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_3_buf24_FIFO_buf513516(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_15345, gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_to_gp_15345
	auto gp_in0_3_buf24_to_gp_15345_gp_in0_3_buf24_to_gp_15345_ld514_c__gp_in0_3_buf24_to_gp_15345_ld515_value = gp_in0_3_buf24_to_gp_15345.read();
	// Produce: gp_in0_3_buf24_FIFO_buf513
	gp_in0_3_buf24_FIFO_buf513_load_to_gp_in0_3_buf24_FIFO_buf513516_write_bundle_write(/* arg names */gp_in0_3_buf24_to_gp_15345_gp_in0_3_buf24_to_gp_15345_ld514_c__gp_in0_3_buf24_to_gp_15345_ld515_value, gp_in0_3_buf24_FIFO_buf513, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_FIFO_buf557560(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_15389, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_to_gp_15389
	auto gp_in1_3_buf72_to_gp_15389_gp_in1_3_buf72_to_gp_15389_ld558_c__gp_in1_3_buf72_to_gp_15389_ld559_value = gp_in1_3_buf72_to_gp_15389.read();
	// Produce: gp_in1_3_buf72_FIFO_buf557
	gp_in1_3_buf72_FIFO_buf557_load_to_gp_in1_3_buf72_FIFO_buf557560_write_bundle_write(/* arg names */gp_in1_3_buf72_to_gp_15389_gp_in1_3_buf72_to_gp_15389_ld558_c__gp_in1_3_buf72_to_gp_15389_ld559_value, gp_in1_3_buf72_FIFO_buf557, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_3_to_gp_30473476(merged_3_cache& merged_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_to_gp_30473, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3
	auto merged_3_merged_3_ld474_c__merged_3_ld475_value = merged_3_load_to_merged_3_to_gp_30473476_read_bundle_read(merged_3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_to_gp_30473
	merged_3_to_gp_30473.write(merged_3_merged_3_ld474_c__merged_3_ld475_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119(gp_in0_3_buf24_FIFO_buf513_cache& gp_in0_3_buf24_FIFO_buf513, gp_in1_3_buf72_FIFO_buf557_cache& gp_in1_3_buf72_FIFO_buf557, merged_3_cache& merged_3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_FIFO_buf513
	auto gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118_p_0_c___pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value = gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_read_bundle_read(gp_in0_3_buf24_FIFO_buf513/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_3_buf72_FIFO_buf557
	auto gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118_p_0_c___pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value = gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_read_bundle_read(gp_in1_3_buf72_FIFO_buf557/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(gp_in0_3_buf24_FIFO_buf513_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118_p_0_c___pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value, gp_in1_3_buf72_FIFO_buf557_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118_p_0_c___pw_math_gp_in0_3_buf24_gp_in1_3_buf72116117_p_0_value);
	// Produce: merged_3
	merged_3_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_write_bundle_write(/* arg names */compute_result, merged_3, d0, d1, d2, 0);

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

// schedule: { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 72] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_merged_3_to_gp_30473476[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 74] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in1_3_buf72_FIFO_buf557560[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 68] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_3_buf24_FIFO_buf513516[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 42] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 72] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-72 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_merged_3_to_gp_30473476[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 74] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_merged_3_to_gp_30473476(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-74 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_FIFO_buf557560[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 68] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_FIFO_buf557560(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-68 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_FIFO_buf513516[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 42] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_FIFO_buf513516(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 74] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 72] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 68] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 42] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2054; i1++) {
	    for (int i2 = 14; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in0_3_buf24_FIFO_buf513516(gp_in0_3_buf24_to_gp_15345 /* buf name */, gp_in0_3_buf24_FIFO_buf513, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in1_3_buf72_FIFO_buf557560(gp_in1_3_buf72_to_gp_15389 /* buf name */, gp_in1_3_buf72_FIFO_buf557, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119(gp_in0_3_buf24_FIFO_buf513 /* buf name */, gp_in1_3_buf72_FIFO_buf557 /* buf name */, merged_3, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_merged_3_to_gp_30473476(merged_3 /* buf name */, merged_3_to_gp_30473, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in0_oc03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in0_oc, in0_cache& in0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_oc
	auto in0_oc__lp_pw_math_in0_oc02__p___m_7_rp__p_7_c______lp_pw_math_in0_oc01__p___m_7_rp__p_7_value = in0_oc.read();
	auto compute_result = llf_int_to_float(in0_oc__lp_pw_math_in0_oc02__p___m_7_rp__p_7_c______lp_pw_math_in0_oc01__p___m_7_rp__p_7_value);
	// Produce: in0
	in0_pw_math_in0_oc03_write_bundle_write(/* arg names */compute_result, in0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in0_to_gp_6405408(in0_cache& in0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in0_to_gp_6405, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0
	auto in0_in0_ld406_c__in0_ld407_value = in0_load_to_in0_to_gp_6405408_read_bundle_read(in0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in0_to_gp_6405
	in0_to_gp_6405.write(in0_in0_ld406_c__in0_ld407_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in0_to_gp_0401404(in0_cache& in0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in0_to_gp_0401, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0
	auto in0_in0_ld402_c__in0_ld403_value = in0_load_to_in0_to_gp_0401404_read_bundle_read(in0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in0_to_gp_0401
	in0_to_gp_0401.write(in0_in0_ld402_c__in0_ld403_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in0_ld403_in0_ld407_pw_math_in0_oc01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_to_gp_0401, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_to_gp_6405) {

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

// schedule: { load_to_in0_to_gp_6405408[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054; load_to_in0_to_gp_0401404[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054; pw_math_in0_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
//   { load_to_in0_to_gp_6405408[d0 = 0, d1, d2] -> [0, 1 + d1, d2, 6] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
// Condition for load_to_in0_to_gp_6405408(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_in0_to_gp_0401404[d0 = 0, d1, d2] -> [0, d1, d2, 3] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
// Condition for load_to_in0_to_gp_0401404(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { pw_math_in0_oc03[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
// Condition for pw_math_in0_oc03(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 6] : 8 <= i1 <= 2055 and 7 <= i2 <= 2054; [0, i1, i2, 3] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054; [0, i1, i2, 1] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2055; i1++) {
	    for (int i2 = 0; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          pw_math_in0_oc03(in0_oc /* buf name */, in0, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 <= 2054 }
	        // { [i0, i1, i2] : i1 <= 2054 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	        if ((((((2054 + -1*i1)) >= 0)))) {
	          load_to_in0_to_gp_0401404(in0 /* buf name */, in0_to_gp_0401, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 7 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_in0_to_gp_6405408(in0 /* buf name */, in0_to_gp_6405, 0, ((-1 + 1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in1_oc47(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in1_oc, in1_cache& in1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_oc
	auto in1_oc__lp_pw_math_in1_oc46__p___m_7_rp__p_7_c______lp_pw_math_in1_oc45__p___m_7_rp__p_7_value = in1_oc.read();
	auto compute_result = llf_int_to_float(in1_oc__lp_pw_math_in1_oc46__p___m_7_rp__p_7_c______lp_pw_math_in1_oc45__p___m_7_rp__p_7_value);
	// Produce: in1
	in1_pw_math_in1_oc47_write_bundle_write(/* arg names */compute_result, in1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in1_to_gp_9413416(in1_cache& in1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in1_to_gp_9413, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1
	auto in1_in1_ld414_c__in1_ld415_value = in1_load_to_in1_to_gp_9413416_read_bundle_read(in1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in1_to_gp_9413
	in1_to_gp_9413.write(in1_in1_ld414_c__in1_ld415_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in1_to_gp_3409412(in1_cache& in1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in1_to_gp_3409, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1
	auto in1_in1_ld410_c__in1_ld411_value = in1_load_to_in1_to_gp_3409412_read_bundle_read(in1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in1_to_gp_3409
	in1_to_gp_3409.write(in1_in1_ld410_c__in1_ld411_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in1_ld411_in1_ld415_pw_math_in1_oc45_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_to_gp_3409, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_to_gp_9413) {

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

// schedule: { load_to_in1_to_gp_3409412[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054; load_to_in1_to_gp_9413416[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054; pw_math_in1_oc47[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
//   { load_to_in1_to_gp_3409412[d0 = 0, d1, d2] -> [0, d1, d2, 5] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
// Condition for load_to_in1_to_gp_3409412(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_in1_to_gp_9413416[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
// Condition for load_to_in1_to_gp_9413416(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { pw_math_in1_oc47[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
// Condition for pw_math_in1_oc47(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 5] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054; [0, i1, i2, 2] : 7 <= i1 <= 2054 and 7 <= i2 <= 2054; [0, i1, i2, 0] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2054; i1++) {
	    for (int i2 = 0; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_in1_oc47(in1_oc /* buf name */, in1, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 7 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_in1_to_gp_9413416(in1 /* buf name */, in1_to_gp_9413, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in1_to_gp_3409412(in1 /* buf name */, in1_to_gp_3409, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_0_to_gp_12441444(merged_0_cache& merged_0, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_0_to_gp_12441, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0
	auto merged_0_merged_0_ld442_c__merged_0_ld443_value = merged_0_load_to_merged_0_to_gp_12441444_read_bundle_read(merged_0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_0_to_gp_12441
	merged_0_to_gp_12441.write(merged_0_merged_0_ld442_c__merged_0_ld443_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107(lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, merged_0_cache& merged_0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52_FIFO_buf585
	auto lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_p_0_c___pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value = lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_read_bundle_read(lp_in0_0_buf52_FIFO_buf585/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_0_buf100_FIFO_buf597
	auto lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_p_0_c___pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value = lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_read_bundle_read(lp_in1_0_buf100_FIFO_buf597/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(lp_in0_0_buf52_FIFO_buf585_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_p_0_c___pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value, lp_in1_0_buf100_FIFO_buf597_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_p_0_c___pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_p_0_value);
	// Produce: merged_0
	merged_0_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_write_bundle_write(/* arg names */compute_result, merged_0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_0_buf52_FIFO_buf585588(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_0_buf52_to_gp_18417, lp_in0_0_buf52_FIFO_buf585_cache& lp_in0_0_buf52_FIFO_buf585, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52_to_gp_18417
	auto lp_in0_0_buf52_to_gp_18417_lp_in0_0_buf52_to_gp_18417_ld586_c__lp_in0_0_buf52_to_gp_18417_ld587_value = lp_in0_0_buf52_to_gp_18417.read();
	// Produce: lp_in0_0_buf52_FIFO_buf585
	lp_in0_0_buf52_FIFO_buf585_load_to_lp_in0_0_buf52_FIFO_buf585588_write_bundle_write(/* arg names */lp_in0_0_buf52_to_gp_18417_lp_in0_0_buf52_to_gp_18417_ld586_c__lp_in0_0_buf52_to_gp_18417_ld587_value, lp_in0_0_buf52_FIFO_buf585, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_0_buf100_FIFO_buf597600(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_0_buf100_to_gp_18429, lp_in1_0_buf100_FIFO_buf597_cache& lp_in1_0_buf100_FIFO_buf597, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_0_buf100_to_gp_18429
	auto lp_in1_0_buf100_to_gp_18429_lp_in1_0_buf100_to_gp_18429_ld598_c__lp_in1_0_buf100_to_gp_18429_ld599_value = lp_in1_0_buf100_to_gp_18429.read();
	// Produce: lp_in1_0_buf100_FIFO_buf597
	lp_in1_0_buf100_FIFO_buf597_load_to_lp_in1_0_buf100_FIFO_buf597600_write_bundle_write(/* arg names */lp_in1_0_buf100_to_gp_18429_lp_in1_0_buf100_to_gp_18429_ld598_c__lp_in1_0_buf100_to_gp_18429_ld599_value, lp_in1_0_buf100_FIFO_buf597, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in0_0_buf52_to_gp_18417_ld587_lp_in1_0_buf100_to_gp_18429_ld599_merged_0_ld443_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104105_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in0_0_buf52_to_gp_18417, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in1_0_buf100_to_gp_18429, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_0_to_gp_12441) {

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

// schedule: { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 67] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_merged_0_to_gp_12441444[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 77] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_lp_in0_0_buf52_FIFO_buf585588[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_lp_in1_0_buf100_FIFO_buf597600[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 64] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 67] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107(((((-67 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_merged_0_to_gp_12441444[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 77] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_merged_0_to_gp_12441444(((((-77 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_lp_in0_0_buf52_FIFO_buf585588[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 44] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_lp_in0_0_buf52_FIFO_buf585588(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_lp_in1_0_buf100_FIFO_buf597600[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 64] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_lp_in1_0_buf100_FIFO_buf597600(((((-64 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 77] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 67] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 64] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 44] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 8; i2 <= 2055; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in0_0_buf52_FIFO_buf585588(lp_in0_0_buf52_to_gp_18417 /* buf name */, lp_in0_0_buf52_FIFO_buf585, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in1_0_buf100_FIFO_buf597600(lp_in1_0_buf100_to_gp_18429 /* buf name */, lp_in1_0_buf100_FIFO_buf597, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107(lp_in0_0_buf52_FIFO_buf585 /* buf name */, lp_in1_0_buf100_FIFO_buf597 /* buf name */, merged_0, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_merged_0_to_gp_12441444(merged_0 /* buf name */, merged_0_to_gp_12441, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_1_to_gp_13449452(merged_1_cache& merged_1, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_to_gp_13449, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1
	auto merged_1_merged_1_ld450_c__merged_1_ld451_value = merged_1_load_to_merged_1_to_gp_13449452_read_bundle_read(merged_1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_1_to_gp_13449
	merged_1_to_gp_13449.write(merged_1_merged_1_ld450_c__merged_1_ld451_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111(lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, merged_1_cache& merged_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44_FIFO_buf589
	auto lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_p_0_c___pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value = lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_read_bundle_read(lp_in0_1_buf44_FIFO_buf589/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_1_buf92_FIFO_buf601
	auto lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_p_0_c___pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value = lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_read_bundle_read(lp_in1_1_buf92_FIFO_buf601/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(lp_in0_1_buf44_FIFO_buf589_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_p_0_c___pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value, lp_in1_1_buf92_FIFO_buf601_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_p_0_c___pw_math_lp_in0_1_buf44_lp_in1_1_buf92108109_p_0_value);
	// Produce: merged_1
	merged_1_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_write_bundle_write(/* arg names */compute_result, merged_1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_1_buf44_FIFO_buf589592(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_1_buf44_to_gp_19421, lp_in0_1_buf44_FIFO_buf589_cache& lp_in0_1_buf44_FIFO_buf589, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44_to_gp_19421
	auto lp_in0_1_buf44_to_gp_19421_lp_in0_1_buf44_to_gp_19421_ld590_c__lp_in0_1_buf44_to_gp_19421_ld591_value = lp_in0_1_buf44_to_gp_19421.read();
	// Produce: lp_in0_1_buf44_FIFO_buf589
	lp_in0_1_buf44_FIFO_buf589_load_to_lp_in0_1_buf44_FIFO_buf589592_write_bundle_write(/* arg names */lp_in0_1_buf44_to_gp_19421_lp_in0_1_buf44_to_gp_19421_ld590_c__lp_in0_1_buf44_to_gp_19421_ld591_value, lp_in0_1_buf44_FIFO_buf589, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_1_buf92_FIFO_buf601604(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_1_buf92_to_gp_19433, lp_in1_1_buf92_FIFO_buf601_cache& lp_in1_1_buf92_FIFO_buf601, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_1_buf92_to_gp_19433
	auto lp_in1_1_buf92_to_gp_19433_lp_in1_1_buf92_to_gp_19433_ld602_c__lp_in1_1_buf92_to_gp_19433_ld603_value = lp_in1_1_buf92_to_gp_19433.read();
	// Produce: lp_in1_1_buf92_FIFO_buf601
	lp_in1_1_buf92_FIFO_buf601_load_to_lp_in1_1_buf92_FIFO_buf601604_write_bundle_write(/* arg names */lp_in1_1_buf92_to_gp_19433_lp_in1_1_buf92_to_gp_19433_ld602_c__lp_in1_1_buf92_to_gp_19433_ld603_value, lp_in1_1_buf92_FIFO_buf601, d0, d1, d2, 0);

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

// schedule: { load_to_lp_in1_1_buf92_FIFO_buf601604[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 90] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_lp_in0_1_buf44_FIFO_buf589592[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 81] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 92] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_1_to_gp_13449452[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 94] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_lp_in1_1_buf92_FIFO_buf601604[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 90] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in1_1_buf92_FIFO_buf601604(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-90 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_lp_in0_1_buf44_FIFO_buf589592[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 81] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in0_1_buf44_FIFO_buf589592(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-81 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 92] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-92 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_merged_1_to_gp_13449452[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 94] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_to_gp_13449452(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-94 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 94] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2060 and 14 <= i2 <= 2060; [0, i1, i2, 92] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 90] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 81] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2060; i1++) {
	    for (int i2 = 10; i2 <= 2060; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2056 and i2 <= 2056 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2056 and i2 <= 2056 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2056 + -1*i1)) >= 0) && (((2056 + -1*i2)) >= 0)))) {
	          load_to_lp_in0_1_buf44_FIFO_buf589592(lp_in0_1_buf44_to_gp_19421 /* buf name */, lp_in0_1_buf44_FIFO_buf589, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2056 and i2 <= 2056 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2056 and i2 <= 2056 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2056 + -1*i1)) >= 0) && (((2056 + -1*i2)) >= 0)))) {
	          load_to_lp_in1_1_buf92_FIFO_buf601604(lp_in1_1_buf92_to_gp_19433 /* buf name */, lp_in1_1_buf92_FIFO_buf601, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2056 and i2 <= 2056 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2056 and i2 <= 2056 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2056 - i1 >= 0 }
	          // { [i0, i1, i2] : 2056 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2056 + -1*i1)) >= 0) && (((2056 + -1*i2)) >= 0)))) {
	          pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111(lp_in0_1_buf44_FIFO_buf589 /* buf name */, lp_in1_1_buf92_FIFO_buf601 /* buf name */, merged_1, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_merged_1_to_gp_13449452(merged_1 /* buf name */, merged_1_to_gp_13449, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_2_buf16_FIFO_buf497500(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_2329, gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_to_gp_2329
	auto gp_in0_2_buf16_to_gp_2329_gp_in0_2_buf16_to_gp_2329_ld498_c__gp_in0_2_buf16_to_gp_2329_ld499_value = gp_in0_2_buf16_to_gp_2329.read();
	// Produce: gp_in0_2_buf16_FIFO_buf497
	gp_in0_2_buf16_FIFO_buf497_load_to_gp_in0_2_buf16_FIFO_buf497500_write_bundle_write(/* arg names */gp_in0_2_buf16_to_gp_2329_gp_in0_2_buf16_to_gp_2329_ld498_c__gp_in0_2_buf16_to_gp_2329_ld499_value, gp_in0_2_buf16_FIFO_buf497, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in0_326_merged312(gp_in0_2_buf16_FIFO_buf497_cache& gp_in0_2_buf16_FIFO_buf497, gp_in0_3_buf24_cache& gp_in0_3_buf24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_FIFO_buf497
	auto gp_in0_2_buf16_FIFO_buf497_2_m_gp_in0_326__p___m_1_p_1_c_____2_m_gp_in0_325__p__1_p_1_value = gp_in0_2_buf16_FIFO_buf497_gp_in0_326_merged312_read_bundle_read(gp_in0_2_buf16_FIFO_buf497/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in0_326_cu310(gp_in0_2_buf16_FIFO_buf497_2_m_gp_in0_326__p___m_1_p_1_c_____2_m_gp_in0_325__p__1_p_1_value);
	// Produce: gp_in0_3_buf24
	gp_in0_3_buf24_gp_in0_326_merged312_write_bundle_write(/* arg names */compute_result, gp_in0_3_buf24, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_to_gp_24349352(gp_in0_3_buf24_cache& gp_in0_3_buf24, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_24349, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24
	auto gp_in0_3_buf24_gp_in0_3_buf24_ld350_c__gp_in0_3_buf24_ld351_value = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_24349352_read_bundle_read(gp_in0_3_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_to_gp_24349
	gp_in0_3_buf24_to_gp_24349.write(gp_in0_3_buf24_gp_in0_3_buf24_ld350_c__gp_in0_3_buf24_ld351_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_to_gp_15345348(gp_in0_3_buf24_cache& gp_in0_3_buf24, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_15345, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24
	auto gp_in0_3_buf24_gp_in0_3_buf24_ld346_c__gp_in0_3_buf24_ld347_value = gp_in0_3_buf24_load_to_gp_in0_3_buf24_to_gp_15345348_read_bundle_read(gp_in0_3_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_to_gp_15345
	gp_in0_3_buf24_to_gp_15345.write(gp_in0_3_buf24_gp_in0_3_buf24_ld346_c__gp_in0_3_buf24_ld347_value);

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

// schedule: { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_3_buf24_to_gp_15345348[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 36] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512; load_to_gp_in0_3_buf24_to_gp_24349352[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 45] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { gp_in0_326_merged312[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 34] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for gp_in0_326_merged312(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_to_gp_15345348[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 36] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_to_gp_15345348(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_FIFO_buf497500[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 32] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
// Condition for load_to_gp_in0_2_buf16_FIFO_buf497500(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_to_gp_24349352[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 45] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_to_gp_24349352(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 45] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 36] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 34] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 32] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 2054; i1++) {
	    for (int i2 = 6; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_2_buf16_FIFO_buf497500(gp_in0_2_buf16_to_gp_2329 /* buf name */, gp_in0_2_buf16_FIFO_buf497, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          gp_in0_326_merged312(gp_in0_2_buf16_FIFO_buf497 /* buf name */, gp_in0_3_buf24, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_3_buf24_to_gp_15345348(gp_in0_3_buf24 /* buf name */, gp_in0_3_buf24_to_gp_15345, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_3_buf24_to_gp_24349352(gp_in0_3_buf24 /* buf name */, gp_in0_3_buf24_to_gp_24349, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115(lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, merged_2_cache& merged_2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36_FIFO_buf593
	auto lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_p_0_c___pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value = lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_read_bundle_read(lp_in0_2_buf36_FIFO_buf593/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in1_2_buf84_FIFO_buf605
	auto lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_p_0_c___pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value = lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_read_bundle_read(lp_in1_2_buf84_FIFO_buf605/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_average(lp_in0_2_buf36_FIFO_buf593_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_p_0_c___pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value, lp_in1_2_buf84_FIFO_buf605_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_p_0_c___pw_math_lp_in0_2_buf36_lp_in1_2_buf84112113_p_0_value);
	// Produce: merged_2
	merged_2_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_write_bundle_write(/* arg names */compute_result, merged_2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_2_buf36_FIFO_buf593596(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_2_buf36_to_gp_20425, lp_in0_2_buf36_FIFO_buf593_cache& lp_in0_2_buf36_FIFO_buf593, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36_to_gp_20425
	auto lp_in0_2_buf36_to_gp_20425_lp_in0_2_buf36_to_gp_20425_ld594_c__lp_in0_2_buf36_to_gp_20425_ld595_value = lp_in0_2_buf36_to_gp_20425.read();
	// Produce: lp_in0_2_buf36_FIFO_buf593
	lp_in0_2_buf36_FIFO_buf593_load_to_lp_in0_2_buf36_FIFO_buf593596_write_bundle_write(/* arg names */lp_in0_2_buf36_to_gp_20425_lp_in0_2_buf36_to_gp_20425_ld594_c__lp_in0_2_buf36_to_gp_20425_ld595_value, lp_in0_2_buf36_FIFO_buf593, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_2_buf84_FIFO_buf605608(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_2_buf84_to_gp_20437, lp_in1_2_buf84_FIFO_buf605_cache& lp_in1_2_buf84_FIFO_buf605, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_2_buf84_to_gp_20437
	auto lp_in1_2_buf84_to_gp_20437_lp_in1_2_buf84_to_gp_20437_ld606_c__lp_in1_2_buf84_to_gp_20437_ld607_value = lp_in1_2_buf84_to_gp_20437.read();
	// Produce: lp_in1_2_buf84_FIFO_buf605
	lp_in1_2_buf84_FIFO_buf605_load_to_lp_in1_2_buf84_FIFO_buf605608_write_bundle_write(/* arg names */lp_in1_2_buf84_to_gp_20437_lp_in1_2_buf84_to_gp_20437_ld606_c__lp_in1_2_buf84_to_gp_20437_ld607_value, lp_in1_2_buf84_FIFO_buf605, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_to_gp_14461464(merged_2_cache& merged_2, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_to_gp_14461, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2
	auto merged_2_merged_2_ld462_c__merged_2_ld463_value = merged_2_load_to_merged_2_to_gp_14461464_read_bundle_read(merged_2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_to_gp_14461
	merged_2_to_gp_14461.write(merged_2_merged_2_ld462_c__merged_2_ld463_value);

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

// schedule: { load_to_lp_in1_2_buf84_FIFO_buf605608[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_merged_2_to_gp_14461464[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 97] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_lp_in0_2_buf36_FIFO_buf593596[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 80] : 0 <= d1 <= 511 and 0 <= d2 <= 511; pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_lp_in1_2_buf84_FIFO_buf605608[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 93] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in1_2_buf84_FIFO_buf605608(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-93 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_merged_2_to_gp_14461464[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 97] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_to_gp_14461464(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-97 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_lp_in0_2_buf36_FIFO_buf593596[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 80] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in0_2_buf36_FIFO_buf593596(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-80 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 95] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-95 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 97] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 95] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 93] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 80] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in0_2_buf36_FIFO_buf593596(lp_in0_2_buf36_to_gp_20425 /* buf name */, lp_in0_2_buf36_FIFO_buf593, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in1_2_buf84_FIFO_buf605608(lp_in1_2_buf84_to_gp_20437 /* buf name */, lp_in1_2_buf84_FIFO_buf605, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115(lp_in0_2_buf36_FIFO_buf593 /* buf name */, lp_in1_2_buf84_FIFO_buf605 /* buf name */, merged_2, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_to_gp_14461464(merged_2 /* buf name */, merged_2_to_gp_14461, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_merged_0_reconstruct_lp138_buf141147150(merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141_FIFO_buf613
	auto merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_p_0_c___pw_math_merged_0_reconstruct_lp138_buf141147148_p_0_value = merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147150_read_bundle_read(merged_0_reconstruct_lp138_buf141_FIFO_buf613/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_float_to_int(merged_0_reconstruct_lp138_buf141_FIFO_buf613_pw_math_merged_0_reconstruct_lp138_buf141147149_p_0_c___pw_math_merged_0_reconstruct_lp138_buf141147148_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_0_reconstruct_lp138_buf141_to_gp_21445, merged_0_reconstruct_lp138_buf141_FIFO_buf613_cache& merged_0_reconstruct_lp138_buf141_FIFO_buf613, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_0_reconstruct_lp138_buf141_to_gp_21445
	auto merged_0_reconstruct_lp138_buf141_to_gp_21445_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_c__merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_value = merged_0_reconstruct_lp138_buf141_to_gp_21445.read();
	// Produce: merged_0_reconstruct_lp138_buf141_FIFO_buf613
	merged_0_reconstruct_lp138_buf141_FIFO_buf613_load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616_write_bundle_write(/* arg names */merged_0_reconstruct_lp138_buf141_to_gp_21445_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld614_c__merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_value, merged_0_reconstruct_lp138_buf141_FIFO_buf613, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_0_reconstruct_lp138_buf141_to_gp_21445_ld615_pw_math_merged_0_reconstruct_lp138_buf141147148_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_0_reconstruct_lp138_buf141_to_gp_21445, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

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

// schedule: { pw_math_merged_0_reconstruct_lp138_buf141147150[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { pw_math_merged_0_reconstruct_lp138_buf141147150[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 114] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for pw_math_merged_0_reconstruct_lp138_buf141147150(((((-114 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))
//   { load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 113] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616(((((-113 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 2061 and 14 <= i2 <= 2061 and 113 <= i3 <= 114 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2061; i1++) {
	    for (int i2 = 14; i2 <= 2061; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_merged_0_reconstruct_lp138_buf141_FIFO_buf613616(merged_0_reconstruct_lp138_buf141_to_gp_21445 /* buf name */, merged_0_reconstruct_lp138_buf141_FIFO_buf613, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_merged_0_reconstruct_lp138_buf141147150(merged_0_reconstruct_lp138_buf141_FIFO_buf613 /* buf name */, out, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_1_buf8_FIFO_buf485488(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_to_gp_22317
	auto gp_in0_1_buf8_to_gp_22317_gp_in0_1_buf8_to_gp_22317_ld486_c__gp_in0_1_buf8_to_gp_22317_ld487_value = gp_in0_1_buf8_to_gp_22317.read();
	// Produce: gp_in0_1_buf8_FIFO_buf485
	gp_in0_1_buf8_FIFO_buf485_load_to_gp_in0_1_buf8_FIFO_buf485488_write_bundle_write(/* arg names */gp_in0_1_buf8_to_gp_22317_gp_in0_1_buf8_to_gp_22317_ld486_c__gp_in0_1_buf8_to_gp_22317_ld487_value, gp_in0_1_buf8_FIFO_buf485, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us51(gp_in0_1_buf8_FIFO_buf485_cache& gp_in0_1_buf8_FIFO_buf485, gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_FIFO_buf485
	auto gp_in0_1_buf8_FIFO_buf485_floor_lp_us_gp_in0_1_buf850__div__2_rp__p_3_c___floor_lp_us_gp_in0_1_buf849__div__2_rp__p_3_value = gp_in0_1_buf8_FIFO_buf485_us51_read_bundle_read(gp_in0_1_buf8_FIFO_buf485/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_us48
	gp_in0_1_buf8_us48_us51_write_bundle_write(/* arg names */gp_in0_1_buf8_FIFO_buf485_floor_lp_us_gp_in0_1_buf850__div__2_rp__p_3_c___floor_lp_us_gp_in0_1_buf849__div__2_rp__p_3_value, gp_in0_1_buf8_us48, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_us48_to_gp_6325328(gp_in0_1_buf8_us48_cache& gp_in0_1_buf8_us48, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_us48_to_gp_6325, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_us48
	auto gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_c__gp_in0_1_buf8_us48_ld327_value = gp_in0_1_buf8_us48_load_to_gp_in0_1_buf8_us48_to_gp_6325328_read_bundle_read(gp_in0_1_buf8_us48/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_1_buf8_us48_to_gp_6325
	gp_in0_1_buf8_us48_to_gp_6325.write(gp_in0_1_buf8_us48_gp_in0_1_buf8_us48_ld326_c__gp_in0_1_buf8_us48_ld327_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_1_buf8_to_gp_22317_ld487_gp_in0_1_buf8_us48_ld327_us_gp_in0_1_buf849_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_to_gp_22317, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_us48_to_gp_6325) {

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

// schedule: { load_to_gp_in0_1_buf8_us48_to_gp_6325328[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 17] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_gp_in0_1_buf8_FIFO_buf485488[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 12] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; us51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { load_to_gp_in0_1_buf8_us48_to_gp_6325328[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 17] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_gp_in0_1_buf8_us48_to_gp_6325328(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_FIFO_buf485488[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 12] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in0_1_buf8_FIFO_buf485488(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { us51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for us51(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 17] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 15] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 12] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 8 <= i1 <= 2054 and 8 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 8; i2 <= 2055; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in0_1_buf8_FIFO_buf485488(gp_in0_1_buf8_to_gp_22317 /* buf name */, gp_in0_1_buf8_FIFO_buf485, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us51(gp_in0_1_buf8_FIFO_buf485 /* buf name */, gp_in0_1_buf8_us48, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gp_in0_1_buf8_us48_to_gp_6325328(gp_in0_1_buf8_us48 /* buf name */, gp_in0_1_buf8_us48_to_gp_6325, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_2_buf16_us40_to_gp_7341344(gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_us40_to_gp_7341, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_us40
	auto gp_in0_2_buf16_us40_gp_in0_2_buf16_us40_ld342_c__gp_in0_2_buf16_us40_ld343_value = gp_in0_2_buf16_us40_load_to_gp_in0_2_buf16_us40_to_gp_7341344_read_bundle_read(gp_in0_2_buf16_us40/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_us40_to_gp_7341
	gp_in0_2_buf16_us40_to_gp_7341.write(gp_in0_2_buf16_us40_gp_in0_2_buf16_us40_ld342_c__gp_in0_2_buf16_us40_ld343_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_FIFO_buf501504(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_23333, gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_to_gp_23333
	auto gp_in0_2_buf16_to_gp_23333_gp_in0_2_buf16_to_gp_23333_ld502_c__gp_in0_2_buf16_to_gp_23333_ld503_value = gp_in0_2_buf16_to_gp_23333.read();
	// Produce: gp_in0_2_buf16_FIFO_buf501
	gp_in0_2_buf16_FIFO_buf501_load_to_gp_in0_2_buf16_FIFO_buf501504_write_bundle_write(/* arg names */gp_in0_2_buf16_to_gp_23333_gp_in0_2_buf16_to_gp_23333_ld502_c__gp_in0_2_buf16_to_gp_23333_ld503_value, gp_in0_2_buf16_FIFO_buf501, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us43(gp_in0_2_buf16_FIFO_buf501_cache& gp_in0_2_buf16_FIFO_buf501, gp_in0_2_buf16_us40_cache& gp_in0_2_buf16_us40, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_FIFO_buf501
	auto gp_in0_2_buf16_FIFO_buf501_floor_lp_us_gp_in0_2_buf1642__div__2_rp__p_1_c___floor_lp_us_gp_in0_2_buf1641__div__2_rp__p_1_value = gp_in0_2_buf16_FIFO_buf501_us43_read_bundle_read(gp_in0_2_buf16_FIFO_buf501/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_2_buf16_us40
	gp_in0_2_buf16_us40_us43_write_bundle_write(/* arg names */gp_in0_2_buf16_FIFO_buf501_floor_lp_us_gp_in0_2_buf1642__div__2_rp__p_1_c___floor_lp_us_gp_in0_2_buf1641__div__2_rp__p_1_value, gp_in0_2_buf16_us40, d0, d1, d2, 0);

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

// schedule: { us43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 48] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in0_2_buf16_FIFO_buf501504[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 39] : 0 < d1 <= 512 and 0 < d2 <= 512; load_to_gp_in0_2_buf16_us40_to_gp_7341344[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { us43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 48] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for us43(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_FIFO_buf501504[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 39] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in0_2_buf16_FIFO_buf501504(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_us40_to_gp_7341344[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 54] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_2_buf16_us40_to_gp_7341344(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-54 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 54] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 48] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 39] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 10 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 10; i2 <= 2056; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_2_buf16_FIFO_buf501504(gp_in0_2_buf16_to_gp_23333 /* buf name */, gp_in0_2_buf16_FIFO_buf501, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us43(gp_in0_2_buf16_FIFO_buf501 /* buf name */, gp_in0_2_buf16_us40, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in0_2_buf16_us40_to_gp_7341344(gp_in0_2_buf16_us40 /* buf name */, gp_in0_2_buf16_us40_to_gp_7341, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_3_buf24_FIFO_buf517520(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_to_gp_24349, gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_to_gp_24349
	auto gp_in0_3_buf24_to_gp_24349_gp_in0_3_buf24_to_gp_24349_ld518_c__gp_in0_3_buf24_to_gp_24349_ld519_value = gp_in0_3_buf24_to_gp_24349.read();
	// Produce: gp_in0_3_buf24_FIFO_buf517
	gp_in0_3_buf24_FIFO_buf517_load_to_gp_in0_3_buf24_FIFO_buf517520_write_bundle_write(/* arg names */gp_in0_3_buf24_to_gp_24349_gp_in0_3_buf24_to_gp_24349_ld518_c__gp_in0_3_buf24_to_gp_24349_ld519_value, gp_in0_3_buf24_FIFO_buf517, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_us32_to_gp_8353356(gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_us32_to_gp_8353, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_us32
	auto gp_in0_3_buf24_us32_gp_in0_3_buf24_us32_ld354_c__gp_in0_3_buf24_us32_ld355_value = gp_in0_3_buf24_us32_load_to_gp_in0_3_buf24_us32_to_gp_8353356_read_bundle_read(gp_in0_3_buf24_us32/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_us32_to_gp_8353
	gp_in0_3_buf24_us32_to_gp_8353.write(gp_in0_3_buf24_us32_gp_in0_3_buf24_us32_ld354_c__gp_in0_3_buf24_us32_ld355_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us35(gp_in0_3_buf24_FIFO_buf517_cache& gp_in0_3_buf24_FIFO_buf517, gp_in0_3_buf24_us32_cache& gp_in0_3_buf24_us32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_FIFO_buf517
	auto gp_in0_3_buf24_FIFO_buf517_floor_lp_us_gp_in0_3_buf2434__div__2_rp__p_0_c___floor_lp_us_gp_in0_3_buf2433__div__2_rp__p_0_value = gp_in0_3_buf24_FIFO_buf517_us35_read_bundle_read(gp_in0_3_buf24_FIFO_buf517/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in0_3_buf24_us32
	gp_in0_3_buf24_us32_us35_write_bundle_write(/* arg names */gp_in0_3_buf24_FIFO_buf517_floor_lp_us_gp_in0_3_buf2434__div__2_rp__p_0_c___floor_lp_us_gp_in0_3_buf2433__div__2_rp__p_0_value, gp_in0_3_buf24_us32, d0, d1, d2, 0);

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

// schedule: { us35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 59] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in0_3_buf24_FIFO_buf517520[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 57] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in0_3_buf24_us32_to_gp_8353356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 60] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { us35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 59] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us35(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-59 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_FIFO_buf517520[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 57] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in0_3_buf24_FIFO_buf517520(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-57 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in0_3_buf24_us32_to_gp_8353356[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 60] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_3_buf24_us32_to_gp_8353356(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-60 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 and 59 <= i3 <= 60; [0, i1, i2, 57] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in0_3_buf24_FIFO_buf517520(gp_in0_3_buf24_to_gp_24349 /* buf name */, gp_in0_3_buf24_FIFO_buf517, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          us35(gp_in0_3_buf24_FIFO_buf517 /* buf name */, gp_in0_3_buf24_us32, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_3_buf24_us32_to_gp_8353356(gp_in0_3_buf24_us32 /* buf name */, gp_in0_3_buf24_us32_to_gp_8353, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_1_buf56_FIFO_buf529532(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_to_gp_25361
	auto gp_in1_1_buf56_to_gp_25361_gp_in1_1_buf56_to_gp_25361_ld530_c__gp_in1_1_buf56_to_gp_25361_ld531_value = gp_in1_1_buf56_to_gp_25361.read();
	// Produce: gp_in1_1_buf56_FIFO_buf529
	gp_in1_1_buf56_FIFO_buf529_load_to_gp_in1_1_buf56_FIFO_buf529532_write_bundle_write(/* arg names */gp_in1_1_buf56_to_gp_25361_gp_in1_1_buf56_to_gp_25361_ld530_c__gp_in1_1_buf56_to_gp_25361_ld531_value, gp_in1_1_buf56_FIFO_buf529, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_us96_to_gp_9369372(gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_us96_to_gp_9369, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_us96
	auto gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_c__gp_in1_1_buf56_us96_ld371_value = gp_in1_1_buf56_us96_load_to_gp_in1_1_buf56_us96_to_gp_9369372_read_bundle_read(gp_in1_1_buf56_us96/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_us96_to_gp_9369
	gp_in1_1_buf56_us96_to_gp_9369.write(gp_in1_1_buf56_us96_gp_in1_1_buf56_us96_ld370_c__gp_in1_1_buf56_us96_ld371_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us99(gp_in1_1_buf56_FIFO_buf529_cache& gp_in1_1_buf56_FIFO_buf529, gp_in1_1_buf56_us96_cache& gp_in1_1_buf56_us96, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_FIFO_buf529
	auto gp_in1_1_buf56_FIFO_buf529_floor_lp_us_gp_in1_1_buf5698__div__2_rp__p_3_c___floor_lp_us_gp_in1_1_buf5697__div__2_rp__p_3_value = gp_in1_1_buf56_FIFO_buf529_us99_read_bundle_read(gp_in1_1_buf56_FIFO_buf529/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_us96
	gp_in1_1_buf56_us96_us99_write_bundle_write(/* arg names */gp_in1_1_buf56_FIFO_buf529_floor_lp_us_gp_in1_1_buf5698__div__2_rp__p_3_c___floor_lp_us_gp_in1_1_buf5697__div__2_rp__p_3_value, gp_in1_1_buf56_us96, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_1_buf56_to_gp_25361_ld531_gp_in1_1_buf56_us96_ld371_us_gp_in1_1_buf5697_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_us96_to_gp_9369) {

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

// schedule: { load_to_gp_in1_1_buf56_us96_to_gp_9369372[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_gp_in1_1_buf56_FIFO_buf529532[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 20] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; us99[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { load_to_gp_in1_1_buf56_us96_to_gp_9369372[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_gp_in1_1_buf56_us96_to_gp_9369372(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_FIFO_buf529532[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 20] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in1_1_buf56_FIFO_buf529532(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { us99[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for us99(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055 and 27 <= i3 <= 28; [0, i1, i2, 20] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 8 <= i1 <= 2054 and 8 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 8; i2 <= 2055; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_1_buf56_FIFO_buf529532(gp_in1_1_buf56_to_gp_25361 /* buf name */, gp_in1_1_buf56_FIFO_buf529, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us99(gp_in1_1_buf56_FIFO_buf529 /* buf name */, gp_in1_1_buf56_us96, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gp_in1_1_buf56_us96_to_gp_9369372(gp_in1_1_buf56_us96 /* buf name */, gp_in1_1_buf56_us96_to_gp_9369, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void us91(gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_FIFO_buf545
	auto gp_in1_2_buf64_FIFO_buf545_floor_lp_us_gp_in1_2_buf6490__div__2_rp__p_1_c___floor_lp_us_gp_in1_2_buf6489__div__2_rp__p_1_value = gp_in1_2_buf64_FIFO_buf545_us91_read_bundle_read(gp_in1_2_buf64_FIFO_buf545/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_us88
	gp_in1_2_buf64_us88_us91_write_bundle_write(/* arg names */gp_in1_2_buf64_FIFO_buf545_floor_lp_us_gp_in1_2_buf6490__div__2_rp__p_1_c___floor_lp_us_gp_in1_2_buf6489__div__2_rp__p_1_value, gp_in1_2_buf64_us88, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_FIFO_buf545548(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_26377, gp_in1_2_buf64_FIFO_buf545_cache& gp_in1_2_buf64_FIFO_buf545, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_to_gp_26377
	auto gp_in1_2_buf64_to_gp_26377_gp_in1_2_buf64_to_gp_26377_ld546_c__gp_in1_2_buf64_to_gp_26377_ld547_value = gp_in1_2_buf64_to_gp_26377.read();
	// Produce: gp_in1_2_buf64_FIFO_buf545
	gp_in1_2_buf64_FIFO_buf545_load_to_gp_in1_2_buf64_FIFO_buf545548_write_bundle_write(/* arg names */gp_in1_2_buf64_to_gp_26377_gp_in1_2_buf64_to_gp_26377_ld546_c__gp_in1_2_buf64_to_gp_26377_ld547_value, gp_in1_2_buf64_FIFO_buf545, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_us88_to_gp_10385388(gp_in1_2_buf64_us88_cache& gp_in1_2_buf64_us88, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_us88_to_gp_10385, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_us88
	auto gp_in1_2_buf64_us88_gp_in1_2_buf64_us88_ld386_c__gp_in1_2_buf64_us88_ld387_value = gp_in1_2_buf64_us88_load_to_gp_in1_2_buf64_us88_to_gp_10385388_read_bundle_read(gp_in1_2_buf64_us88/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_us88_to_gp_10385
	gp_in1_2_buf64_us88_to_gp_10385.write(gp_in1_2_buf64_us88_gp_in1_2_buf64_us88_ld386_c__gp_in1_2_buf64_us88_ld387_value);

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

// schedule: { us91[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 53] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in1_2_buf64_FIFO_buf545548[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 46] : 0 < d1 <= 512 and 0 < d2 <= 512; load_to_gp_in1_2_buf64_us88_to_gp_10385388[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 61] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { us91[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 53] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for us91(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-53 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_FIFO_buf545548[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 46] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in1_2_buf64_FIFO_buf545548(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_us88_to_gp_10385388[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 61] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in1_2_buf64_us88_to_gp_10385388(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-61 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 61] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 53] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 46] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 10 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 10; i2 <= 2056; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_2_buf64_FIFO_buf545548(gp_in1_2_buf64_to_gp_26377 /* buf name */, gp_in1_2_buf64_FIFO_buf545, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us91(gp_in1_2_buf64_FIFO_buf545 /* buf name */, gp_in1_2_buf64_us88, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_gp_in1_2_buf64_us88_to_gp_10385388(gp_in1_2_buf64_us88 /* buf name */, gp_in1_2_buf64_us88_to_gp_10385, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_3_buf72_us80_to_gp_11397400(gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_us80_to_gp_11397, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_us80
	auto gp_in1_3_buf72_us80_gp_in1_3_buf72_us80_ld398_c__gp_in1_3_buf72_us80_ld399_value = gp_in1_3_buf72_us80_load_to_gp_in1_3_buf72_us80_to_gp_11397400_read_bundle_read(gp_in1_3_buf72_us80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_us80_to_gp_11397
	gp_in1_3_buf72_us80_to_gp_11397.write(gp_in1_3_buf72_us80_gp_in1_3_buf72_us80_ld398_c__gp_in1_3_buf72_us80_ld399_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_FIFO_buf561564(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_27393, gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_to_gp_27393
	auto gp_in1_3_buf72_to_gp_27393_gp_in1_3_buf72_to_gp_27393_ld562_c__gp_in1_3_buf72_to_gp_27393_ld563_value = gp_in1_3_buf72_to_gp_27393.read();
	// Produce: gp_in1_3_buf72_FIFO_buf561
	gp_in1_3_buf72_FIFO_buf561_load_to_gp_in1_3_buf72_FIFO_buf561564_write_bundle_write(/* arg names */gp_in1_3_buf72_to_gp_27393_gp_in1_3_buf72_to_gp_27393_ld562_c__gp_in1_3_buf72_to_gp_27393_ld563_value, gp_in1_3_buf72_FIFO_buf561, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us83(gp_in1_3_buf72_FIFO_buf561_cache& gp_in1_3_buf72_FIFO_buf561, gp_in1_3_buf72_us80_cache& gp_in1_3_buf72_us80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72_FIFO_buf561
	auto gp_in1_3_buf72_FIFO_buf561_floor_lp_us_gp_in1_3_buf7282__div__2_rp__p_0_c___floor_lp_us_gp_in1_3_buf7281__div__2_rp__p_0_value = gp_in1_3_buf72_FIFO_buf561_us83_read_bundle_read(gp_in1_3_buf72_FIFO_buf561/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_us80
	gp_in1_3_buf72_us80_us83_write_bundle_write(/* arg names */gp_in1_3_buf72_FIFO_buf561_floor_lp_us_gp_in1_3_buf7282__div__2_rp__p_0_c___floor_lp_us_gp_in1_3_buf7281__div__2_rp__p_0_value, gp_in1_3_buf72_us80, d0, d1, d2, 0);

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

// schedule: { us83[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_3_buf72_us80_to_gp_11397400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in1_3_buf72_FIFO_buf561564[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 73] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { us83[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 84] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us83(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-84 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_us80_to_gp_11397400[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 85] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in1_3_buf72_us80_to_gp_11397400(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-85 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_FIFO_buf561564[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 73] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_FIFO_buf561564(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-73 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 and 84 <= i3 <= 85; [0, i1, i2, 73] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_gp_in1_3_buf72_FIFO_buf561564(gp_in1_3_buf72_to_gp_27393 /* buf name */, gp_in1_3_buf72_FIFO_buf561, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          us83(gp_in1_3_buf72_FIFO_buf561 /* buf name */, gp_in1_3_buf72_us80, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_3_buf72_us80_to_gp_11397400(gp_in1_3_buf72_us80 /* buf name */, gp_in1_3_buf72_us80_to_gp_11397, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460(merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_us142
	auto merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_c__merged_1_reconstruct_lp129_buf132_us142_ld459_value = merged_1_reconstruct_lp129_buf132_us142_load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460_read_bundle_read(merged_1_reconstruct_lp129_buf132_us142/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_1_reconstruct_lp129_buf132_us142_to_gp_12457
	merged_1_reconstruct_lp129_buf132_us142_to_gp_12457.write(merged_1_reconstruct_lp129_buf132_us142_merged_1_reconstruct_lp129_buf132_us142_ld458_c__merged_1_reconstruct_lp129_buf132_us142_ld459_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us145(merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, merged_1_reconstruct_lp129_buf132_us142_cache& merged_1_reconstruct_lp129_buf132_us142, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_FIFO_buf621
	auto merged_1_reconstruct_lp129_buf132_FIFO_buf621_floor_lp_us_merged_1_reconstruct_lp129_buf132144__div__2_rp__p_0_c___floor_lp_us_merged_1_reconstruct_lp129_buf132143__div__2_rp__p_0_value = merged_1_reconstruct_lp129_buf132_FIFO_buf621_us145_read_bundle_read(merged_1_reconstruct_lp129_buf132_FIFO_buf621/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_1_reconstruct_lp129_buf132_us142
	merged_1_reconstruct_lp129_buf132_us142_us145_write_bundle_write(/* arg names */merged_1_reconstruct_lp129_buf132_FIFO_buf621_floor_lp_us_merged_1_reconstruct_lp129_buf132144__div__2_rp__p_0_c___floor_lp_us_merged_1_reconstruct_lp129_buf132143__div__2_rp__p_0_value, merged_1_reconstruct_lp129_buf132_us142, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453, merged_1_reconstruct_lp129_buf132_FIFO_buf621_cache& merged_1_reconstruct_lp129_buf132_FIFO_buf621, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_1_reconstruct_lp129_buf132_to_gp_28453
	auto merged_1_reconstruct_lp129_buf132_to_gp_28453_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622_c__merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_value = merged_1_reconstruct_lp129_buf132_to_gp_28453.read();
	// Produce: merged_1_reconstruct_lp129_buf132_FIFO_buf621
	merged_1_reconstruct_lp129_buf132_FIFO_buf621_load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624_write_bundle_write(/* arg names */merged_1_reconstruct_lp129_buf132_to_gp_28453_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld622_c__merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_value, merged_1_reconstruct_lp129_buf132_FIFO_buf621, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_merged_1_reconstruct_lp129_buf132_to_gp_28453_ld623_merged_1_reconstruct_lp129_buf132_us142_ld459_us_merged_1_reconstruct_lp129_buf132143_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_reconstruct_lp129_buf132_to_gp_28453, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */merged_1_reconstruct_lp129_buf132_us142_to_gp_12457) {

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

// schedule: { load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; us145[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 109] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460(((((-109 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))
//   { us145[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 108] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for us145(((((-108 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2061 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2061 + -1*i2)) >= 0)))
//   { load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 107] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-107 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 2061 and i2 <= 2061 and i3 <= 109 and 2*floor((i1)/2) >= 107 + i1 - i3 and floor((i2)/2) >= 7 and 2*floor((i2)/2) >= 107 + i2 - i3 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2061; i1++) {
	    for (int i2 = 14; i2 <= 2061; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_1_reconstruct_lp129_buf132_FIFO_buf621624(merged_1_reconstruct_lp129_buf132_to_gp_28453 /* buf name */, merged_1_reconstruct_lp129_buf132_FIFO_buf621, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us145(merged_1_reconstruct_lp129_buf132_FIFO_buf621 /* buf name */, merged_1_reconstruct_lp129_buf132_us142, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_merged_1_reconstruct_lp129_buf132_us142_to_gp_12457460(merged_1_reconstruct_lp129_buf132_us142 /* buf name */, merged_1_reconstruct_lp129_buf132_us142_to_gp_12457, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_to_gp_29465, merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_to_gp_29465
	auto merged_2_reconstruct_lp120_buf123_to_gp_29465_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634_c__merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_value = merged_2_reconstruct_lp120_buf123_to_gp_29465.read();
	// Produce: merged_2_reconstruct_lp120_buf123_FIFO_buf633
	merged_2_reconstruct_lp120_buf123_FIFO_buf633_load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636_write_bundle_write(/* arg names */merged_2_reconstruct_lp120_buf123_to_gp_29465_merged_2_reconstruct_lp120_buf123_to_gp_29465_ld634_c__merged_2_reconstruct_lp120_buf123_to_gp_29465_ld635_value, merged_2_reconstruct_lp120_buf123_FIFO_buf633, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472(merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_us133
	auto merged_2_reconstruct_lp120_buf123_us133_merged_2_reconstruct_lp120_buf123_us133_ld470_c__merged_2_reconstruct_lp120_buf123_us133_ld471_value = merged_2_reconstruct_lp120_buf123_us133_load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472_read_bundle_read(merged_2_reconstruct_lp120_buf123_us133/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_reconstruct_lp120_buf123_us133_to_gp_13469
	merged_2_reconstruct_lp120_buf123_us133_to_gp_13469.write(merged_2_reconstruct_lp120_buf123_us133_merged_2_reconstruct_lp120_buf123_us133_ld470_c__merged_2_reconstruct_lp120_buf123_us133_ld471_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us136(merged_2_reconstruct_lp120_buf123_FIFO_buf633_cache& merged_2_reconstruct_lp120_buf123_FIFO_buf633, merged_2_reconstruct_lp120_buf123_us133_cache& merged_2_reconstruct_lp120_buf123_us133, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_2_reconstruct_lp120_buf123_FIFO_buf633
	auto merged_2_reconstruct_lp120_buf123_FIFO_buf633_floor_lp_us_merged_2_reconstruct_lp120_buf123135__div__2_rp__p_0_c___floor_lp_us_merged_2_reconstruct_lp120_buf123134__div__2_rp__p_0_value = merged_2_reconstruct_lp120_buf123_FIFO_buf633_us136_read_bundle_read(merged_2_reconstruct_lp120_buf123_FIFO_buf633/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_2_reconstruct_lp120_buf123_us133
	merged_2_reconstruct_lp120_buf123_us133_us136_write_bundle_write(/* arg names */merged_2_reconstruct_lp120_buf123_FIFO_buf633_floor_lp_us_merged_2_reconstruct_lp120_buf123135__div__2_rp__p_0_c___floor_lp_us_merged_2_reconstruct_lp120_buf123134__div__2_rp__p_0_value, merged_2_reconstruct_lp120_buf123_us133, d0, d1, d2, 0);

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

// schedule: { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 103] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; us136[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 101] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 103] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-103 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))
//   { us136[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 102] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for us136(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-102 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2060 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2060 + -1*i2)) >= 0)))
//   { load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 101] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-101 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 2060 and 14 <= i2 <= 2060 and 102 <= i3 <= 103; [0, i1, i2, 101] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2060; i1++) {
	    for (int i2 = 14; i2 <= 2060; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_FIFO_buf633636(merged_2_reconstruct_lp120_buf123_to_gp_29465 /* buf name */, merged_2_reconstruct_lp120_buf123_FIFO_buf633, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us136(merged_2_reconstruct_lp120_buf123_FIFO_buf633 /* buf name */, merged_2_reconstruct_lp120_buf123_us133, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_merged_2_reconstruct_lp120_buf123_us133_to_gp_13469472(merged_2_reconstruct_lp120_buf123_us133 /* buf name */, merged_2_reconstruct_lp120_buf123_us133_to_gp_13469, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in1_FIFO_buf577580(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in1_to_gp_3409, in1_FIFO_buf577_cache& in1_FIFO_buf577, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_to_gp_3409
	auto in1_to_gp_3409_in1_to_gp_3409_ld578_c__in1_to_gp_3409_ld579_value = in1_to_gp_3409.read();
	// Produce: in1_FIFO_buf577
	in1_FIFO_buf577_load_to_in1_FIFO_buf577580_write_bundle_write(/* arg names */in1_to_gp_3409_in1_to_gp_3409_ld578_c__in1_to_gp_3409_ld579_value, in1_FIFO_buf577, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_to_gp_4365368(gp_in1_1_buf56_cache& gp_in1_1_buf56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_4365, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56_gp_in1_1_buf56_ld366_c__gp_in1_1_buf56_ld367_value = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_4365368_read_bundle_read(gp_in1_1_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_to_gp_4365
	gp_in1_1_buf56_to_gp_4365.write(gp_in1_1_buf56_gp_in1_1_buf56_ld366_c__gp_in1_1_buf56_ld367_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_to_gp_25361364(gp_in1_1_buf56_cache& gp_in1_1_buf56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56_gp_in1_1_buf56_ld362_c__gp_in1_1_buf56_ld363_value = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_25361364_read_bundle_read(gp_in1_1_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_to_gp_25361
	gp_in1_1_buf56_to_gp_25361.write(gp_in1_1_buf56_gp_in1_1_buf56_ld362_c__gp_in1_1_buf56_ld363_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_to_gp_10357360(gp_in1_1_buf56_cache& gp_in1_1_buf56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56
	auto gp_in1_1_buf56_gp_in1_1_buf56_ld358_c__gp_in1_1_buf56_ld359_value = gp_in1_1_buf56_load_to_gp_in1_1_buf56_to_gp_10357360_read_bundle_read(gp_in1_1_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_1_buf56_to_gp_10357
	gp_in1_1_buf56_to_gp_10357.write(gp_in1_1_buf56_gp_in1_1_buf56_ld358_c__gp_in1_1_buf56_ld359_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_158_merged297(in1_FIFO_buf577_cache& in1_FIFO_buf577, gp_in1_1_buf56_cache& gp_in1_1_buf56, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_FIFO_buf577
	auto in1_FIFO_buf577_2_m__lp_gp_in1_158__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in1_157__p___m_3_rp___p__1_p_7_value = in1_FIFO_buf577_gp_in1_158_merged297_read_bundle_read(in1_FIFO_buf577/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_158_cu295(in1_FIFO_buf577_2_m__lp_gp_in1_158__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in1_157__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in1_1_buf56
	gp_in1_1_buf56_gp_in1_158_merged297_write_bundle_write(/* arg names */compute_result, gp_in1_1_buf56, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_157_gp_in1_1_buf56_ld359_gp_in1_1_buf56_ld363_gp_in1_1_buf56_ld367_in1_to_gp_3409_ld579_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_to_gp_3409, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_10357, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_25361, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_to_gp_4365) {

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

// schedule: { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054; load_to_gp_in1_1_buf56_to_gp_25361364[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 19] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; load_to_gp_in1_1_buf56_to_gp_10357360[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 23] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026; load_to_gp_in1_1_buf56_to_gp_4365368[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
//   { load_to_in1_FIFO_buf577580[d0 = 0, d1, d2] -> [0, d1, d2, 9] : 0 <= d1 <= 2054 and 0 <= d2 <= 2054 }
// Condition for load_to_in1_FIFO_buf577580(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_to_gp_25361364[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 19] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in1_1_buf56_to_gp_25361364(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_to_gp_10357360[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 23] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in1_1_buf56_to_gp_10357360(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { gp_in1_158_merged297[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 16] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
// Condition for gp_in1_158_merged297(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_to_gp_4365368[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 21] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
// Condition for load_to_gp_in1_1_buf56_to_gp_4365368(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 23] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 8 <= i1 <= 2054 and 8 <= i2 <= 2054; [0, i1, i2, 21] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 2054 and 2 <= i2 <= 2054; [0, i1, i2, 19] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 8 <= i1 <= 2054 and 8 <= i2 <= 2054; [0, i1, i2, 16] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 2054 and 2 <= i2 <= 2054; [0, i1, i2, 9] : 0 <= i1 <= 2054 and 0 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 2054; i1++) {
	    for (int i2 = 0; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in1_FIFO_buf577580(in1_to_gp_3409 /* buf name */, in1_FIFO_buf577, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          gp_in1_158_merged297(in1_FIFO_buf577 /* buf name */, gp_in1_1_buf56, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_to_gp_25361364(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_to_gp_25361, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 2 and i2 >= 2 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_to_gp_4365368(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_to_gp_4365, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_to_gp_10357360(gp_in1_1_buf56 /* buf name */, gp_in1_1_buf56_to_gp_10357, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_merged_3_FIFO_buf641644(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_to_gp_30473, merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_to_gp_30473
	auto merged_3_to_gp_30473_merged_3_to_gp_30473_ld642_c__merged_3_to_gp_30473_ld643_value = merged_3_to_gp_30473.read();
	// Produce: merged_3_FIFO_buf641
	merged_3_FIFO_buf641_load_to_merged_3_FIFO_buf641644_write_bundle_write(/* arg names */merged_3_to_gp_30473_merged_3_to_gp_30473_ld642_c__merged_3_to_gp_30473_ld643_value, merged_3_FIFO_buf641, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_merged_3_us124_to_gp_14477480(merged_3_us124_cache& merged_3_us124, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */merged_3_us124_to_gp_14477, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_us124
	auto merged_3_us124_merged_3_us124_ld478_c__merged_3_us124_ld479_value = merged_3_us124_load_to_merged_3_us124_to_gp_14477480_read_bundle_read(merged_3_us124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_us124_to_gp_14477
	merged_3_us124_to_gp_14477.write(merged_3_us124_merged_3_us124_ld478_c__merged_3_us124_ld479_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us127(merged_3_FIFO_buf641_cache& merged_3_FIFO_buf641, merged_3_us124_cache& merged_3_us124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: merged_3_FIFO_buf641
	auto merged_3_FIFO_buf641_floor_lp_us_merged_3126__div__2_rp__p_0_c___floor_lp_us_merged_3125__div__2_rp__p_0_value = merged_3_FIFO_buf641_us127_read_bundle_read(merged_3_FIFO_buf641/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: merged_3_us124
	merged_3_us124_us127_write_bundle_write(/* arg names */merged_3_FIFO_buf641_floor_lp_us_merged_3126__div__2_rp__p_0_c___floor_lp_us_merged_3125__div__2_rp__p_0_value, merged_3_us124, d0, d1, d2, 0);

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

// schedule: { load_to_merged_3_FIFO_buf641644[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 76] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_merged_3_us124_to_gp_14477480[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 82] : 0 <= d1 <= 511 and 0 <= d2 <= 511; us127[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_merged_3_FIFO_buf641644[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 76] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_merged_3_FIFO_buf641644(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-76 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_merged_3_us124_to_gp_14477480[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 82] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_merged_3_us124_to_gp_14477480(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-82 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { us127[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 78] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for us127(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-78 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 82] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 78] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 76] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0)))) {
	          load_to_merged_3_FIFO_buf641644(merged_3_to_gp_30473 /* buf name */, merged_3_FIFO_buf641, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          us127(merged_3_FIFO_buf641 /* buf name */, merged_3_us124, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_merged_3_us124_to_gp_14477480(merged_3_us124 /* buf name */, merged_3_us124_to_gp_14477, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_2_buf64_to_gp_26377380(gp_in1_2_buf64_cache& gp_in1_2_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_26377, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64_gp_in1_2_buf64_ld378_c__gp_in1_2_buf64_ld379_value = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_26377380_read_bundle_read(gp_in1_2_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_to_gp_26377
	gp_in1_2_buf64_to_gp_26377.write(gp_in1_2_buf64_gp_in1_2_buf64_ld378_c__gp_in1_2_buf64_ld379_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_FIFO_buf533536(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_to_gp_4365, gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_to_gp_4365
	auto gp_in1_1_buf56_to_gp_4365_gp_in1_1_buf56_to_gp_4365_ld534_c__gp_in1_1_buf56_to_gp_4365_ld535_value = gp_in1_1_buf56_to_gp_4365.read();
	// Produce: gp_in1_1_buf56_FIFO_buf533
	gp_in1_1_buf56_FIFO_buf533_load_to_gp_in1_1_buf56_FIFO_buf533536_write_bundle_write(/* arg names */gp_in1_1_buf56_to_gp_4365_gp_in1_1_buf56_to_gp_4365_ld534_c__gp_in1_1_buf56_to_gp_4365_ld535_value, gp_in1_1_buf56_FIFO_buf533, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_to_gp_11373376(gp_in1_2_buf64_cache& gp_in1_2_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_11373, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64_gp_in1_2_buf64_ld374_c__gp_in1_2_buf64_ld375_value = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_11373376_read_bundle_read(gp_in1_2_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_to_gp_11373
	gp_in1_2_buf64_to_gp_11373.write(gp_in1_2_buf64_gp_in1_2_buf64_ld374_c__gp_in1_2_buf64_ld375_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_2_buf64_to_gp_5381384(gp_in1_2_buf64_cache& gp_in1_2_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_5381, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64
	auto gp_in1_2_buf64_gp_in1_2_buf64_ld382_c__gp_in1_2_buf64_ld383_value = gp_in1_2_buf64_load_to_gp_in1_2_buf64_to_gp_5381384_read_bundle_read(gp_in1_2_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_2_buf64_to_gp_5381
	gp_in1_2_buf64_to_gp_5381.write(gp_in1_2_buf64_gp_in1_2_buf64_ld382_c__gp_in1_2_buf64_ld383_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_266_merged300(gp_in1_1_buf56_FIFO_buf533_cache& gp_in1_1_buf56_FIFO_buf533, gp_in1_2_buf64_cache& gp_in1_2_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_FIFO_buf533
	auto gp_in1_1_buf56_FIFO_buf533_2_m__lp_gp_in1_266__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in1_265__p___m_1_rp___p__1_p_3_value = gp_in1_1_buf56_FIFO_buf533_gp_in1_266_merged300_read_bundle_read(gp_in1_1_buf56_FIFO_buf533/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_266_cu298(gp_in1_1_buf56_FIFO_buf533_2_m__lp_gp_in1_266__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in1_265__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in1_2_buf64
	gp_in1_2_buf64_gp_in1_266_merged300_write_bundle_write(/* arg names */compute_result, gp_in1_2_buf64, d0, d1, d2, 0);

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

// schedule: { load_to_gp_in1_2_buf64_to_gp_5381384[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 47] : 0 <= d1 <= 512 and 0 <= d2 <= 512; load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026; gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512; load_to_gp_in1_2_buf64_to_gp_26377380[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 43] : 0 < d1 <= 512 and 0 < d2 <= 512; load_to_gp_in1_2_buf64_to_gp_11373376[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 49] : 0 < d1 <= 512 and 0 < d2 <= 512 }
//   { load_to_gp_in1_2_buf64_to_gp_5381384[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 47] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
// Condition for load_to_gp_in1_2_buf64_to_gp_5381384(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_FIFO_buf533536[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 31] : 0 <= d1 <= 1026 and 0 <= d2 <= 1026 }
// Condition for load_to_gp_in1_1_buf56_FIFO_buf533536(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { gp_in1_266_merged300[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 41] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
// Condition for gp_in1_266_merged300(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_to_gp_26377380[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 43] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in1_2_buf64_to_gp_26377380(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_to_gp_11373376[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 49] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in1_2_buf64_to_gp_11373376(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-49 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 49] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 47] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054; [0, i1, i2, 43] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 10 <= i2 <= 2054; [0, i1, i2, 41] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054; [0, i1, i2, 31] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 2054 and 2 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 2058; i1++) {
	    for (int i2 = 2; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2054 and i2 <= 2054 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 2054 and i2 <= 2054 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2054 + -1*i1)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_1_buf56_FIFO_buf533536(gp_in1_1_buf56_to_gp_4365 /* buf name */, gp_in1_1_buf56_FIFO_buf533, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          gp_in1_266_merged300(gp_in1_1_buf56_FIFO_buf533 /* buf name */, gp_in1_2_buf64, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 10 <= i2 <= 2054 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 2054 and 10 <= i2 <= 2054 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_2_buf64_to_gp_26377380(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_to_gp_26377, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : 2054 - i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in1_2_buf64_to_gp_5381384(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_to_gp_5381, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_2_buf64_to_gp_11373376(gp_in1_2_buf64 /* buf name */, gp_in1_2_buf64_to_gp_11373, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in1_2_buf64_FIFO_buf549552(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_2_buf64_to_gp_5381, gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_to_gp_5381
	auto gp_in1_2_buf64_to_gp_5381_gp_in1_2_buf64_to_gp_5381_ld550_c__gp_in1_2_buf64_to_gp_5381_ld551_value = gp_in1_2_buf64_to_gp_5381.read();
	// Produce: gp_in1_2_buf64_FIFO_buf549
	gp_in1_2_buf64_FIFO_buf549_load_to_gp_in1_2_buf64_FIFO_buf549552_write_bundle_write(/* arg names */gp_in1_2_buf64_to_gp_5381_gp_in1_2_buf64_to_gp_5381_ld550_c__gp_in1_2_buf64_to_gp_5381_ld551_value, gp_in1_2_buf64_FIFO_buf549, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in1_374_merged306(gp_in1_2_buf64_FIFO_buf549_cache& gp_in1_2_buf64_FIFO_buf549, gp_in1_3_buf72_cache& gp_in1_3_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_2_buf64_FIFO_buf549
	auto gp_in1_2_buf64_FIFO_buf549_2_m_gp_in1_374__p___m_1_p_1_c_____2_m_gp_in1_373__p__1_p_1_value = gp_in1_2_buf64_FIFO_buf549_gp_in1_374_merged306_read_bundle_read(gp_in1_2_buf64_FIFO_buf549/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in1_374_cu304(gp_in1_2_buf64_FIFO_buf549_2_m_gp_in1_374__p___m_1_p_1_c_____2_m_gp_in1_373__p__1_p_1_value);
	// Produce: gp_in1_3_buf72
	gp_in1_3_buf72_gp_in1_374_merged306_write_bundle_write(/* arg names */compute_result, gp_in1_3_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_to_gp_27393396(gp_in1_3_buf72_cache& gp_in1_3_buf72, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_27393, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72
	auto gp_in1_3_buf72_gp_in1_3_buf72_ld394_c__gp_in1_3_buf72_ld395_value = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_27393396_read_bundle_read(gp_in1_3_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_to_gp_27393
	gp_in1_3_buf72_to_gp_27393.write(gp_in1_3_buf72_gp_in1_3_buf72_ld394_c__gp_in1_3_buf72_ld395_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_3_buf72_to_gp_15389392(gp_in1_3_buf72_cache& gp_in1_3_buf72, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_3_buf72_to_gp_15389, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_3_buf72
	auto gp_in1_3_buf72_gp_in1_3_buf72_ld390_c__gp_in1_3_buf72_ld391_value = gp_in1_3_buf72_load_to_gp_in1_3_buf72_to_gp_15389392_read_bundle_read(gp_in1_3_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in1_3_buf72_to_gp_15389
	gp_in1_3_buf72_to_gp_15389.write(gp_in1_3_buf72_gp_in1_3_buf72_ld390_c__gp_in1_3_buf72_ld391_value);

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

// schedule: { load_to_gp_in1_3_buf72_to_gp_15389392[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 58] : 0 <= d1 <= 255 and 0 <= d2 <= 255; gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255; load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512; load_to_gp_in1_3_buf72_to_gp_27393396[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 62] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
//   { load_to_gp_in1_3_buf72_to_gp_15389392[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 58] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_to_gp_15389392(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-58 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { gp_in1_374_merged306[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 56] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for gp_in1_374_merged306(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-56 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_2_buf64_FIFO_buf549552[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 51] : 0 <= d1 <= 512 and 0 <= d2 <= 512 }
// Condition for load_to_gp_in1_2_buf64_FIFO_buf549552(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-51 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_gp_in1_3_buf72_to_gp_27393396[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 62] : 0 <= d1 <= 255 and 0 <= d2 <= 255 }
// Condition for load_to_gp_in1_3_buf72_to_gp_27393396(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-62 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2054 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 62] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 58] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 56] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 2054 and 14 <= i2 <= 2054; [0, i1, i2, 51] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 2054 and 6 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 2054; i1++) {
	    for (int i2 = 6; i2 <= 2054; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in1_2_buf64_FIFO_buf549552(gp_in1_2_buf64_to_gp_5381 /* buf name */, gp_in1_2_buf64_FIFO_buf549, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          gp_in1_374_merged306(gp_in1_2_buf64_FIFO_buf549 /* buf name */, gp_in1_3_buf72, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_3_buf72_to_gp_15389392(gp_in1_3_buf72 /* buf name */, gp_in1_3_buf72_to_gp_15389, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in1_3_buf72_to_gp_27393396(gp_in1_3_buf72 /* buf name */, gp_in1_3_buf72_to_gp_27393, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in0_0_buf52_to_gp_18417420(lp_in0_0_buf52_cache& lp_in0_0_buf52, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_0_buf52_to_gp_18417, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_0_buf52
	auto lp_in0_0_buf52_lp_in0_0_buf52_ld418_c__lp_in0_0_buf52_ld419_value = lp_in0_0_buf52_load_to_lp_in0_0_buf52_to_gp_18417420_read_bundle_read(lp_in0_0_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in0_0_buf52_to_gp_18417
	lp_in0_0_buf52_to_gp_18417.write(lp_in0_0_buf52_lp_in0_0_buf52_ld418_c__lp_in0_0_buf52_ld419_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_1_buf8_us48_FIFO_buf493496(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_us48_to_gp_6325, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_us48_to_gp_6325
	auto gp_in0_1_buf8_us48_to_gp_6325_gp_in0_1_buf8_us48_to_gp_6325_ld494_c__gp_in0_1_buf8_us48_to_gp_6325_ld495_value = gp_in0_1_buf8_us48_to_gp_6325.read();
	// Produce: gp_in0_1_buf8_us48_FIFO_buf493
	gp_in0_1_buf8_us48_FIFO_buf493_load_to_gp_in0_1_buf8_us48_FIFO_buf493496_write_bundle_write(/* arg names */gp_in0_1_buf8_us48_to_gp_6325_gp_in0_1_buf8_us48_to_gp_6325_ld494_c__gp_in0_1_buf8_us48_to_gp_6325_ld495_value, gp_in0_1_buf8_us48_FIFO_buf493, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff55(in0_FIFO_buf573_cache& in0_FIFO_buf573, gp_in0_1_buf8_us48_FIFO_buf493_cache& gp_in0_1_buf8_us48_FIFO_buf493, lp_in0_0_buf52_cache& lp_in0_0_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_FIFO_buf573
	auto in0_FIFO_buf573_lp_in0_054_p_7_c___lp_in0_053_p_7_value = in0_FIFO_buf573_diff55_read_bundle_read(in0_FIFO_buf573/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_1_buf8_us48_FIFO_buf493
	auto gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_p_0_c___lp_in0_053_p_0_value = gp_in0_1_buf8_us48_FIFO_buf493_diff55_read_bundle_read(gp_in0_1_buf8_us48_FIFO_buf493/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(in0_FIFO_buf573_lp_in0_054_p_7_c___lp_in0_053_p_7_value, gp_in0_1_buf8_us48_FIFO_buf493_lp_in0_054_p_0_c___lp_in0_053_p_0_value);
	// Produce: lp_in0_0_buf52
	lp_in0_0_buf52_diff55_write_bundle_write(/* arg names */compute_result, lp_in0_0_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in0_FIFO_buf573576(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in0_to_gp_6405, in0_FIFO_buf573_cache& in0_FIFO_buf573, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in0_to_gp_6405
	auto in0_to_gp_6405_in0_to_gp_6405_ld574_c__in0_to_gp_6405_ld575_value = in0_to_gp_6405.read();
	// Produce: in0_FIFO_buf573
	in0_FIFO_buf573_load_to_in0_FIFO_buf573576_write_bundle_write(/* arg names */in0_to_gp_6405_in0_to_gp_6405_ld574_c__in0_to_gp_6405_ld575_value, in0_FIFO_buf573, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in0_1_buf8_us48_to_gp_6325_ld495_in0_to_gp_6405_ld575_lp_in0_053_lp_in0_0_buf52_ld419_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in0_1_buf8_us48_to_gp_6325, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_to_gp_6405, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in0_0_buf52_to_gp_18417) {

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

// schedule: { diff55[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_in0_FIFO_buf573576[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 11] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054; load_to_lp_in0_0_buf52_to_gp_18417420[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_gp_in0_1_buf8_us48_FIFO_buf493496[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 22] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { diff55[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for diff55(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_in0_FIFO_buf573576[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 11] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
// Condition for load_to_in0_FIFO_buf573576(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_lp_in0_0_buf52_to_gp_18417420[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 35] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_lp_in0_0_buf52_to_gp_18417420(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_us48_FIFO_buf493496[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 22] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_gp_in0_1_buf8_us48_FIFO_buf493496(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 35] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 29] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 22] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 11] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 8; i2 <= 2055; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in0_FIFO_buf573576(in0_to_gp_6405 /* buf name */, in0_FIFO_buf573, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gp_in0_1_buf8_us48_FIFO_buf493496(gp_in0_1_buf8_us48_to_gp_6325 /* buf name */, gp_in0_1_buf8_us48_FIFO_buf493, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          diff55(in0_FIFO_buf573 /* buf name */, gp_in0_1_buf8_us48_FIFO_buf493 /* buf name */, lp_in0_0_buf52, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in0_0_buf52_to_gp_18417420(lp_in0_0_buf52 /* buf name */, lp_in0_0_buf52_to_gp_18417, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_1_buf8_FIFO_buf489492(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_1_buf8_to_gp_7321, gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_to_gp_7321
	auto gp_in0_1_buf8_to_gp_7321_gp_in0_1_buf8_to_gp_7321_ld490_c__gp_in0_1_buf8_to_gp_7321_ld491_value = gp_in0_1_buf8_to_gp_7321.read();
	// Produce: gp_in0_1_buf8_FIFO_buf489
	gp_in0_1_buf8_FIFO_buf489_load_to_gp_in0_1_buf8_FIFO_buf489492_write_bundle_write(/* arg names */gp_in0_1_buf8_to_gp_7321_gp_in0_1_buf8_to_gp_7321_ld490_c__gp_in0_1_buf8_to_gp_7321_ld491_value, gp_in0_1_buf8_FIFO_buf489, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_1_buf44_to_gp_19421424(lp_in0_1_buf44_cache& lp_in0_1_buf44, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_1_buf44_to_gp_19421, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_1_buf44
	auto lp_in0_1_buf44_lp_in0_1_buf44_ld422_c__lp_in0_1_buf44_ld423_value = lp_in0_1_buf44_load_to_lp_in0_1_buf44_to_gp_19421424_read_bundle_read(lp_in0_1_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in0_1_buf44_to_gp_19421
	lp_in0_1_buf44_to_gp_19421.write(lp_in0_1_buf44_lp_in0_1_buf44_ld422_c__lp_in0_1_buf44_ld423_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff47(gp_in0_1_buf8_FIFO_buf489_cache& gp_in0_1_buf8_FIFO_buf489, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, lp_in0_1_buf44_cache& lp_in0_1_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_1_buf8_FIFO_buf489
	auto gp_in0_1_buf8_FIFO_buf489_lp_in0_146_p_3_c___lp_in0_145_p_3_value = gp_in0_1_buf8_FIFO_buf489_diff47_read_bundle_read(gp_in0_1_buf8_FIFO_buf489/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_2_buf16_us40_FIFO_buf509
	auto gp_in0_2_buf16_us40_FIFO_buf509_lp_in0_146_p_0_c___lp_in0_145_p_0_value = gp_in0_2_buf16_us40_FIFO_buf509_diff47_read_bundle_read(gp_in0_2_buf16_us40_FIFO_buf509/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in0_1_buf8_FIFO_buf489_lp_in0_146_p_3_c___lp_in0_145_p_3_value, gp_in0_2_buf16_us40_FIFO_buf509_lp_in0_146_p_0_c___lp_in0_145_p_0_value);
	// Produce: lp_in0_1_buf44
	lp_in0_1_buf44_diff47_write_bundle_write(/* arg names */compute_result, lp_in0_1_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_2_buf16_us40_FIFO_buf509512(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_us40_to_gp_7341, gp_in0_2_buf16_us40_FIFO_buf509_cache& gp_in0_2_buf16_us40_FIFO_buf509, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_us40_to_gp_7341
	auto gp_in0_2_buf16_us40_to_gp_7341_gp_in0_2_buf16_us40_to_gp_7341_ld510_c__gp_in0_2_buf16_us40_to_gp_7341_ld511_value = gp_in0_2_buf16_us40_to_gp_7341.read();
	// Produce: gp_in0_2_buf16_us40_FIFO_buf509
	gp_in0_2_buf16_us40_FIFO_buf509_load_to_gp_in0_2_buf16_us40_FIFO_buf509512_write_bundle_write(/* arg names */gp_in0_2_buf16_us40_to_gp_7341_gp_in0_2_buf16_us40_to_gp_7341_ld510_c__gp_in0_2_buf16_us40_to_gp_7341_ld511_value, gp_in0_2_buf16_us40_FIFO_buf509, d0, d1, d2, 0);

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

// schedule: { diff47[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in0_1_buf8_FIFO_buf489492[d0 = 0, d1, d2] -> [0, 4 + 2d1, 2 + 2d2, 14] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026; load_to_lp_in0_1_buf44_to_gp_19421424[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 75] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023; load_to_gp_in0_2_buf16_us40_FIFO_buf509512[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 63] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
//   { diff47[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 66] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for diff47(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-66 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_gp_in0_1_buf8_FIFO_buf489492[d0 = 0, d1, d2] -> [0, 4 + 2d1, 2 + 2d2, 14] : 3 <= d1 <= 1026 and 3 <= d2 <= 1026 }
// Condition for load_to_gp_in0_1_buf8_FIFO_buf489492(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2054 + -1*i2)) >= 0)))
//   { load_to_lp_in0_1_buf44_to_gp_19421424[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 75] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_lp_in0_1_buf44_to_gp_19421424(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-75 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_us40_FIFO_buf509512[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 63] : 0 <= d1 <= 1023 and 0 <= d2 <= 1023 }
// Condition for load_to_gp_in0_2_buf16_us40_FIFO_buf509512(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-63 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((2056 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((2056 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 75] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 66] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 63] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 10 <= i2 <= 2056; [0, i1, i2, 14] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 2056 and 8 <= i2 <= 2054 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 2056; i1++) {
	    for (int i2 = 8; i2 <= 2056; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 <= 2054 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 <= 2054 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 2054 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((2054 + -1*i2)) >= 0)))) {
	          load_to_gp_in0_1_buf8_FIFO_buf489492(gp_in0_1_buf8_to_gp_7321 /* buf name */, gp_in0_1_buf8_FIFO_buf489, 0, ((-2 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 >= 10 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_gp_in0_2_buf16_us40_FIFO_buf509512(gp_in0_2_buf16_us40_to_gp_7341 /* buf name */, gp_in0_2_buf16_us40_FIFO_buf509, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 >= 10 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i2)) >= 0)))) {
	          diff47(gp_in0_1_buf8_FIFO_buf489 /* buf name */, gp_in0_2_buf16_us40_FIFO_buf509 /* buf name */, lp_in0_1_buf44, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i2 >= 10 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_lp_in0_1_buf44_to_gp_19421424(lp_in0_1_buf44 /* buf name */, lp_in0_1_buf44_to_gp_19421, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in0_2_buf16_FIFO_buf505508(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_2_buf16_to_gp_8337, gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_to_gp_8337
	auto gp_in0_2_buf16_to_gp_8337_gp_in0_2_buf16_to_gp_8337_ld506_c__gp_in0_2_buf16_to_gp_8337_ld507_value = gp_in0_2_buf16_to_gp_8337.read();
	// Produce: gp_in0_2_buf16_FIFO_buf505
	gp_in0_2_buf16_FIFO_buf505_load_to_gp_in0_2_buf16_FIFO_buf505508_write_bundle_write(/* arg names */gp_in0_2_buf16_to_gp_8337_gp_in0_2_buf16_to_gp_8337_ld506_c__gp_in0_2_buf16_to_gp_8337_ld507_value, gp_in0_2_buf16_FIFO_buf505, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in0_3_buf24_us32_FIFO_buf521524(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in0_3_buf24_us32_to_gp_8353, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_3_buf24_us32_to_gp_8353
	auto gp_in0_3_buf24_us32_to_gp_8353_gp_in0_3_buf24_us32_to_gp_8353_ld522_c__gp_in0_3_buf24_us32_to_gp_8353_ld523_value = gp_in0_3_buf24_us32_to_gp_8353.read();
	// Produce: gp_in0_3_buf24_us32_FIFO_buf521
	gp_in0_3_buf24_us32_FIFO_buf521_load_to_gp_in0_3_buf24_us32_FIFO_buf521524_write_bundle_write(/* arg names */gp_in0_3_buf24_us32_to_gp_8353_gp_in0_3_buf24_us32_to_gp_8353_ld522_c__gp_in0_3_buf24_us32_to_gp_8353_ld523_value, gp_in0_3_buf24_us32_FIFO_buf521, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff39(gp_in0_2_buf16_FIFO_buf505_cache& gp_in0_2_buf16_FIFO_buf505, gp_in0_3_buf24_us32_FIFO_buf521_cache& gp_in0_3_buf24_us32_FIFO_buf521, lp_in0_2_buf36_cache& lp_in0_2_buf36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in0_2_buf16_FIFO_buf505
	auto gp_in0_2_buf16_FIFO_buf505_lp_in0_238_p_1_c___lp_in0_237_p_1_value = gp_in0_2_buf16_FIFO_buf505_diff39_read_bundle_read(gp_in0_2_buf16_FIFO_buf505/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in0_3_buf24_us32_FIFO_buf521
	auto gp_in0_3_buf24_us32_FIFO_buf521_lp_in0_238_p_0_c___lp_in0_237_p_0_value = gp_in0_3_buf24_us32_FIFO_buf521_diff39_read_bundle_read(gp_in0_3_buf24_us32_FIFO_buf521/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in0_2_buf16_FIFO_buf505_lp_in0_238_p_1_c___lp_in0_237_p_1_value, gp_in0_3_buf24_us32_FIFO_buf521_lp_in0_238_p_0_c___lp_in0_237_p_0_value);
	// Produce: lp_in0_2_buf36
	lp_in0_2_buf36_diff39_write_bundle_write(/* arg names */compute_result, lp_in0_2_buf36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in0_2_buf36_to_gp_20425428(lp_in0_2_buf36_cache& lp_in0_2_buf36, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in0_2_buf36_to_gp_20425, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in0_2_buf36
	auto lp_in0_2_buf36_lp_in0_2_buf36_ld426_c__lp_in0_2_buf36_ld427_value = lp_in0_2_buf36_load_to_lp_in0_2_buf36_to_gp_20425428_read_bundle_read(lp_in0_2_buf36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in0_2_buf36_to_gp_20425
	lp_in0_2_buf36_to_gp_20425.write(lp_in0_2_buf36_lp_in0_2_buf36_ld426_c__lp_in0_2_buf36_ld427_value);

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

// schedule: { load_to_gp_in0_3_buf24_us32_FIFO_buf521524[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 65] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_gp_in0_2_buf16_FIFO_buf505508[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 38] : 0 < d1 <= 512 and 0 < d2 <= 512; diff39[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 69] : 0 <= d1 <= 511 and 0 <= d2 <= 511; load_to_lp_in0_2_buf36_to_gp_20425428[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 70] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
//   { load_to_gp_in0_3_buf24_us32_FIFO_buf521524[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 65] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_gp_in0_3_buf24_us32_FIFO_buf521524(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-65 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_gp_in0_2_buf16_FIFO_buf505508[d0 = 0, d1, d2] -> [0, 10 + 4d1, 10 + 4d2, 38] : 0 < d1 <= 512 and 0 < d2 <= 512 }
// Condition for load_to_gp_in0_2_buf16_FIFO_buf505508(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { diff39[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 69] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for diff39(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-69 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))
//   { load_to_lp_in0_2_buf36_to_gp_20425428[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 70] : 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for load_to_lp_in0_2_buf36_to_gp_20425428(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-70 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((2058 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((2058 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 and 69 <= i3 <= 70; [0, i1, i2, 65] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058; [0, i1, i2, 38] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 2058 and 14 <= i2 <= 2058 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 2058; i1++) {
	    for (int i2 = 14; i2 <= 2058; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_2_buf16_FIFO_buf505508(gp_in0_2_buf16_to_gp_8337 /* buf name */, gp_in0_2_buf16_FIFO_buf505, 0, ((-3 + (1*(((2 + 1*i1)) >> 2)))), ((-3 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in0_3_buf24_us32_FIFO_buf521524(gp_in0_3_buf24_us32_to_gp_8353 /* buf name */, gp_in0_3_buf24_us32_FIFO_buf521, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          diff39(gp_in0_2_buf16_FIFO_buf505 /* buf name */, gp_in0_3_buf24_us32_FIFO_buf521 /* buf name */, lp_in0_2_buf36, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in0_2_buf36_to_gp_20425428(lp_in0_2_buf36 /* buf name */, lp_in0_2_buf36_to_gp_20425, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in1_FIFO_buf581584(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in1_to_gp_9413, in1_FIFO_buf581_cache& in1_FIFO_buf581, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_to_gp_9413
	auto in1_to_gp_9413_in1_to_gp_9413_ld582_c__in1_to_gp_9413_ld583_value = in1_to_gp_9413.read();
	// Produce: in1_FIFO_buf581
	in1_FIFO_buf581_load_to_in1_FIFO_buf581584_write_bundle_write(/* arg names */in1_to_gp_9413_in1_to_gp_9413_ld582_c__in1_to_gp_9413_ld583_value, in1_FIFO_buf581, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in1_1_buf56_us96_FIFO_buf537540(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in1_1_buf56_us96_to_gp_9369, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in1_1_buf56_us96_to_gp_9369
	auto gp_in1_1_buf56_us96_to_gp_9369_gp_in1_1_buf56_us96_to_gp_9369_ld538_c__gp_in1_1_buf56_us96_to_gp_9369_ld539_value = gp_in1_1_buf56_us96_to_gp_9369.read();
	// Produce: gp_in1_1_buf56_us96_FIFO_buf537
	gp_in1_1_buf56_us96_FIFO_buf537_load_to_gp_in1_1_buf56_us96_FIFO_buf537540_write_bundle_write(/* arg names */gp_in1_1_buf56_us96_to_gp_9369_gp_in1_1_buf56_us96_to_gp_9369_ld538_c__gp_in1_1_buf56_us96_to_gp_9369_ld539_value, gp_in1_1_buf56_us96_FIFO_buf537, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff103(in1_FIFO_buf581_cache& in1_FIFO_buf581, gp_in1_1_buf56_us96_FIFO_buf537_cache& gp_in1_1_buf56_us96_FIFO_buf537, lp_in1_0_buf100_cache& lp_in1_0_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in1_FIFO_buf581
	auto in1_FIFO_buf581_lp_in1_0102_p_7_c___lp_in1_0101_p_7_value = in1_FIFO_buf581_diff103_read_bundle_read(in1_FIFO_buf581/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in1_1_buf56_us96_FIFO_buf537
	auto gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_p_0_c___lp_in1_0101_p_0_value = gp_in1_1_buf56_us96_FIFO_buf537_diff103_read_bundle_read(gp_in1_1_buf56_us96_FIFO_buf537/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(in1_FIFO_buf581_lp_in1_0102_p_7_c___lp_in1_0101_p_7_value, gp_in1_1_buf56_us96_FIFO_buf537_lp_in1_0102_p_0_c___lp_in1_0101_p_0_value);
	// Produce: lp_in1_0_buf100
	lp_in1_0_buf100_diff103_write_bundle_write(/* arg names */compute_result, lp_in1_0_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in1_0_buf100_to_gp_18429432(lp_in1_0_buf100_cache& lp_in1_0_buf100, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in1_0_buf100_to_gp_18429, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in1_0_buf100
	auto lp_in1_0_buf100_lp_in1_0_buf100_ld430_c__lp_in1_0_buf100_ld431_value = lp_in1_0_buf100_load_to_lp_in1_0_buf100_to_gp_18429432_read_bundle_read(lp_in1_0_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in1_0_buf100_to_gp_18429
	lp_in1_0_buf100_to_gp_18429.write(lp_in1_0_buf100_lp_in1_0_buf100_ld430_c__lp_in1_0_buf100_ld431_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in1_1_buf56_us96_to_gp_9369_ld539_in1_to_gp_9413_ld583_lp_in1_0101_lp_in1_0_buf100_ld431_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in1_1_buf56_us96_to_gp_9369, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_to_gp_9413, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in1_0_buf100_to_gp_18429) {

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

// schedule: { load_to_lp_in1_0_buf100_to_gp_18429432[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 55] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; diff103[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047; load_to_in1_FIFO_buf581584[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 7] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054; load_to_gp_in1_1_buf56_us96_FIFO_buf537540[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
//   { load_to_lp_in1_0_buf100_to_gp_18429432[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 55] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_lp_in1_0_buf100_to_gp_18429432(((((-55 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { diff103[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 50] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for diff103(((((-50 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_in1_FIFO_buf581584[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 7] : 7 <= d1 <= 2054 and 7 <= d2 <= 2054 }
// Condition for load_to_in1_FIFO_buf581584(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))
//   { load_to_gp_in1_1_buf56_us96_FIFO_buf537540[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 40] : 0 <= d1 <= 2047 and 0 <= d2 <= 2047 }
// Condition for load_to_gp_in1_1_buf56_us96_FIFO_buf537540(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((2055 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((2055 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 55] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 50] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 40] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055; [0, i1, i2, 7] : 8 <= i1 <= 2055 and 8 <= i2 <= 2055 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 2055; i1++) {
	    for (int i2 = 8; i2 <= 2055; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in1_FIFO_buf581584(in1_to_gp_9413 /* buf name */, in1_FIFO_buf581, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gp_in1_1_buf56_us96_FIFO_buf537540(gp_in1_1_buf56_us96_to_gp_9369 /* buf name */, gp_in1_1_buf56_us96_FIFO_buf537, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          diff103(in1_FIFO_buf581 /* buf name */, gp_in1_1_buf56_us96_FIFO_buf537 /* buf name */, lp_in1_0_buf100, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in1_0_buf100_to_gp_18429432(lp_in1_0_buf100 /* buf name */, lp_in1_0_buf100_to_gp_18429, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void two_in_blnd_d(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("two_in_blnd_d_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > in0_to_gp_0401;
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
#pragma HLS stream variable=gp_in0_1_buf8_to_gp_7321.values depth=1524
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
#pragma HLS stream variable=gp_in0_2_buf16_to_gp_8337.values depth=1012
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_1_buf56_to_gp_10357;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_1_buf56_to_gp_10357.values depth=1525
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
#pragma HLS stream variable=gp_in1_2_buf64_to_gp_11373.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in1_3_buf72_us80_to_gp_11397;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in1_3_buf72_us80_to_gp_11397.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in1_2_buf84_to_gp_20437;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in1_2_buf84_to_gp_20437.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_0_to_gp_12441;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_0_to_gp_12441.values depth=12788
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_1_reconstruct_lp129_buf132_us142_to_gp_12457;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=merged_1_reconstruct_lp129_buf132_us142_to_gp_12457.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > merged_0_reconstruct_lp138_buf141_to_gp_21445;
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
  HWStream< hw_uint<32> > in0_to_gp_6405;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in0_to_gp_6405.values depth=501
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > in1_to_gp_3409;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in1_to_gp_3409.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > in1_to_gp_9413;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in1_to_gp_9413.values depth=2549
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in0_0_buf52_to_gp_18417;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in0_0_buf52_to_gp_18417.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in1_0_buf100_to_gp_18429;
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
  HWStream< hw_uint<32> > gp_in0_1_buf8_us48_to_gp_6325;
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
  HWStream< hw_uint<32> > gp_in1_1_buf56_us96_to_gp_9369;
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

void two_in_blnd_d_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in0_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in1_oc, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    two_in_blnd_d(in0_oc, in1_oc, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in0_oc03[root = 0, pw_math_in0_oc01, pw_math_in0_oc02] -> in0_oc[pw_math_in0_oc02, pw_math_in0_oc01] : 0 <= pw_math_in0_oc01 <= 2054 and 0 <= pw_math_in0_oc02 <= 2054 }
const int pw_math_in0_oc03_read_pipe0_num_transfers = 4223025;
  // { pw_math_in1_oc47[root = 0, pw_math_in1_oc45, pw_math_in1_oc46] -> in1_oc[pw_math_in1_oc46, pw_math_in1_oc45] : 0 <= pw_math_in1_oc45 <= 2054 and 0 <= pw_math_in1_oc46 <= 2054 }
const int pw_math_in1_oc47_read_pipe0_num_transfers = 4223025;
  // { pw_math_merged_0_reconstruct_lp138_buf141147150[root = 0, pw_math_merged_0_reconstruct_lp138_buf141147148, pw_math_merged_0_reconstruct_lp138_buf141147149] -> out[pw_math_merged_0_reconstruct_lp138_buf141147149, pw_math_merged_0_reconstruct_lp138_buf141147148] : 0 <= pw_math_merged_0_reconstruct_lp138_buf141147148 <= 2047 and 0 <= pw_math_merged_0_reconstruct_lp138_buf141147149 <= 2047 }
const int pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0_num_transfers = 4194304;


extern "C" {

void two_in_blnd_d_accel(hw_uint<32>* pw_math_in0_oc03_read_pipe0, hw_uint<32>* pw_math_in1_oc47_read_pipe0, hw_uint<32>* pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in0_oc03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_in1_oc47_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0 offset = slave depth = 65536 bundle = gmem2

#pragma HLS INTERFACE s_axilite port = pw_math_in0_oc03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_in1_oc47_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in0_oc03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_in1_oc47_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0_channel;

  burst_read<32>(pw_math_in0_oc03_read_pipe0, pw_math_in0_oc03_read_pipe0_channel, pw_math_in0_oc03_read_pipe0_num_transfers*size);
  burst_read<32>(pw_math_in1_oc47_read_pipe0, pw_math_in1_oc47_read_pipe0_channel, pw_math_in1_oc47_read_pipe0_num_transfers*size);

  two_in_blnd_d_wrapper(pw_math_in0_oc03_read_pipe0_channel, pw_math_in1_oc47_read_pipe0_channel, pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0_channel, size);

  burst_write<32>(pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0, pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0_channel, pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0_num_transfers*size);
}

}
extern "C" {

void two_in_blnd_d_rdai(HWStream<hw_uint<32> >& pw_math_in0_oc03_read_pipe0, HWStream<hw_uint<32> >& pw_math_in1_oc47_read_pipe0, HWStream<hw_uint<32> >&  pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in0_oc03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_in1_oc47_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  two_in_blnd_d(pw_math_in0_oc03_read_pipe0, pw_math_in1_oc47_read_pipe0, pw_math_merged_0_reconstruct_lp138_buf141147150_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

