#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h"

struct gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3_cache {
	// RAM Box: {[0, 32], [0, 32]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct gp_in_on_chip_1_buf4_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_1_buf4_to_gp_1112115[root = 0, gp_in_on_chip_1_buf4_ld114, gp_in_on_chip_1_buf4_ld113] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld113, gp_in_on_chip_1_buf4_ld114] : 0 <= gp_in_on_chip_1_buf4_ld114 <= 32 and 0 <= gp_in_on_chip_1_buf4_ld113 <= 32 }
    // { load_to_gp_in_on_chip_1_buf4_to_gp_4116119[root = 0, gp_in_on_chip_1_buf4_ld118, gp_in_on_chip_1_buf4_ld117] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld117, gp_in_on_chip_1_buf4_ld118] : 0 < gp_in_on_chip_1_buf4_ld118 <= 32 and 0 < gp_in_on_chip_1_buf4_ld117 <= 32 }
    // { load_to_gp_in_on_chip_1_buf4_to_gp_8120123[root = 0, gp_in_on_chip_1_buf4_ld122, gp_in_on_chip_1_buf4_ld121] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld121, gp_in_on_chip_1_buf4_ld122] : 0 < gp_in_on_chip_1_buf4_ld122 <= 32 and 0 < gp_in_on_chip_1_buf4_ld121 <= 32 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3_cache gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3;
};



inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_write(hw_uint<32> & gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3.push(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld114, int gp_in_on_chip_1_buf4_ld113, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_1112115[root = 0, gp_in_on_chip_1_buf4_ld114, gp_in_on_chip_1_buf4_ld113] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld113, gp_in_on_chip_1_buf4_ld114] : 0 <= gp_in_on_chip_1_buf4_ld114 <= 32 and 0 <= gp_in_on_chip_1_buf4_ld113 <= 32 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_1112115[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld118, int gp_in_on_chip_1_buf4_ld117, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_4116119[root = 0, gp_in_on_chip_1_buf4_ld118, gp_in_on_chip_1_buf4_ld117] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld117, gp_in_on_chip_1_buf4_ld118] : 0 < gp_in_on_chip_1_buf4_ld118 <= 32 and 0 < gp_in_on_chip_1_buf4_ld117 <= 32 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_4116119[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 9] : 0 < d1 <= 32 and 0 < d2 <= 32 }
  // Write schedule: { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld122, int gp_in_on_chip_1_buf4_ld121, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_8120123[root = 0, gp_in_on_chip_1_buf4_ld122, gp_in_on_chip_1_buf4_ld121] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld121, gp_in_on_chip_1_buf4_ld122] : 0 < gp_in_on_chip_1_buf4_ld122 <= 32 and 0 < gp_in_on_chip_1_buf4_ld121 <= 32 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_8120123[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 6] : 0 < d1 <= 32 and 0 < d2 <= 32 }
  // Write schedule: { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_merged_banks_3.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88;
  return 0;
}

// # of bundles = 4
// gp_in_on_chip_16_merged108_write
//	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88
inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_write_bundle_write(hw_uint<32>& gp_in_on_chip_16_merged108_write, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_res = gp_in_on_chip_16_merged108_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_write(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_88_res, gp_in_on_chip_1_buf4, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
}

// load_to_gp_in_on_chip_1_buf4_to_gp_1112115_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld114, int gp_in_on_chip_1_buf4_ld113, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld114, gp_in_on_chip_1_buf4_ld113, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_71_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_to_gp_4116119_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld118, int gp_in_on_chip_1_buf4_ld117, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld118, gp_in_on_chip_1_buf4_ld117, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_69_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_to_gp_8120123_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld122, int gp_in_on_chip_1_buf4_ld121, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld122, gp_in_on_chip_1_buf4_ld121, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_67_res);
	return result;
}

struct gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9_cache {
	// RAM Box: {[0, 32], [0, 32]}
	// Capacity: 69
	// # of read delays: 9
  // 0, 1, 2, 33, 34, 35, 66, 67, 68
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 30> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 30> f11;
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

	inline hw_uint<32>  peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_33() {
		return f6;
	}

	inline hw_uint<32>  peek_34() {
		return f8;
	}

	inline hw_uint<32>  peek_35() {
		return f10;
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_66() {
		return f12;
	}

	inline hw_uint<32>  peek_67() {
		return f14;
	}

	inline hw_uint<32>  peek_68() {
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
    // cap: 1 reading from capacity: 30
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
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
    // cap: 1 reading from capacity: 30
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 30 reading from capacity: 1
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

struct gp_in_on_chip_1_buf4_FIFO_buf172_cache {
  // Reader addrs...
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[1 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[1 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[1 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
    // { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9_cache gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76, gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_1_buf4_to_gp_1112_ld174, int gp_in_on_chip_1_buf4_to_gp_1112_ld173, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.push(gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_2();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[1 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_1();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_0();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_35();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[1 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_34();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_33();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_68();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[1 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_67();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87_select(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87 read pattern: { gp_in_on_chip_214_merged111[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf172[2 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 15 and 0 <= gp_in_on_chip_214 <= 15 }
  // Read schedule : { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76 = gp_in_on_chip_1_buf4_FIFO_buf172.gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_merged_banks_9.peek_66();
  return value_gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_214_merged111_read
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86
//	gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87
inline hw_uint<288> gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86
    // gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87

	hw_uint<288> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<0, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_79_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<32, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_80_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<64, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_81_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<96, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_82_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<128, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_83_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<160, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_84_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<192, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_85_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<224, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_86_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87_res = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87_select(gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<256, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_87_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_write
//	gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76
inline void gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_write, gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int root, int gp_in_on_chip_1_buf4_to_gp_1112_ld174, int gp_in_on_chip_1_buf4_to_gp_1112_ld173, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_write(gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_76_res, gp_in_on_chip_1_buf4_FIFO_buf172, root, gp_in_on_chip_1_buf4_to_gp_1112_ld174, gp_in_on_chip_1_buf4_to_gp_1112_ld173, dynamic_address);
}

struct gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_to_gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102_cache {
	// RAM Box: {[1, 32], [1, 32]}
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

struct gp_in_on_chip_1_buf4_FIFO_buf176_cache {
  // Reader addrs...
    // { diff27[root = 0, lp_in_on_chip_125, lp_in_on_chip_126] -> gp_in_on_chip_1_buf4_FIFO_buf176[1 + lp_in_on_chip_126, 1 + lp_in_on_chip_125] : 0 <= lp_in_on_chip_125 <= 31 and 0 <= lp_in_on_chip_126 <= 31 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_to_gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102_cache gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_to_gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74, gp_in_on_chip_1_buf4_FIFO_buf176_cache& gp_in_on_chip_1_buf4_FIFO_buf176, int root, int gp_in_on_chip_1_buf4_to_gp_4116_ld178, int gp_in_on_chip_1_buf4_to_gp_4116_ld177, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf176.gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_to_gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102.push(gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102_select(gp_in_on_chip_1_buf4_FIFO_buf176_cache& gp_in_on_chip_1_buf4_FIFO_buf176, int root, int lp_in_on_chip_125, int lp_in_on_chip_126, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102 read pattern: { diff27[root = 0, lp_in_on_chip_125, lp_in_on_chip_126] -> gp_in_on_chip_1_buf4_FIFO_buf176[1 + lp_in_on_chip_126, 1 + lp_in_on_chip_125] : 0 <= lp_in_on_chip_125 <= 31 and 0 <= lp_in_on_chip_126 <= 31 }
  // Read schedule : { diff27[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 29] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf176179[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 12] : 0 < d1 <= 32 and 0 < d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74 = gp_in_on_chip_1_buf4_FIFO_buf176.gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_to_gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74;
  return 0;
}

// # of bundles = 2
// diff27_read
//	gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf176_diff27_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf176_cache& gp_in_on_chip_1_buf4_FIFO_buf176, int root, int lp_in_on_chip_125, int lp_in_on_chip_126, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102_res = gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102_select(gp_in_on_chip_1_buf4_FIFO_buf176, root, lp_in_on_chip_125, lp_in_on_chip_126, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf176_diff27_102_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_write
//	gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74
inline void gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_write, gp_in_on_chip_1_buf4_FIFO_buf176_cache& gp_in_on_chip_1_buf4_FIFO_buf176, int root, int gp_in_on_chip_1_buf4_to_gp_4116_ld178, int gp_in_on_chip_1_buf4_to_gp_4116_ld177, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_write(gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_74_res, gp_in_on_chip_1_buf4_FIFO_buf176, root, gp_in_on_chip_1_buf4_to_gp_4116_ld178, gp_in_on_chip_1_buf4_to_gp_4116_ld177, dynamic_address);
}

struct gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_to_gp_in_on_chip_1_buf4_FIFO_buf180_us31_5_cache {
	// RAM Box: {[1, 32], [1, 32]}
	// Capacity: 32
	// # of read delays: 33
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31
	fifo<hw_uint<32> , 32> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(31 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_1_buf4_FIFO_buf180_cache {
  // Reader addrs...
    // { us31[root = 0, us_gp_in_on_chip_1_buf429, us_gp_in_on_chip_1_buf430] -> gp_in_on_chip_1_buf4_FIFO_buf180[o0, o1] : 0 <= us_gp_in_on_chip_1_buf429 <= 63 and 0 <= us_gp_in_on_chip_1_buf430 <= 63 and us_gp_in_on_chip_1_buf430 < 2o0 <= 2 + us_gp_in_on_chip_1_buf430 and us_gp_in_on_chip_1_buf429 < 2o1 <= 2 + us_gp_in_on_chip_1_buf429 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_to_gp_in_on_chip_1_buf4_FIFO_buf180_us31_5_cache gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_to_gp_in_on_chip_1_buf4_FIFO_buf180_us31_5;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72, gp_in_on_chip_1_buf4_FIFO_buf180_cache& gp_in_on_chip_1_buf4_FIFO_buf180, int root, int gp_in_on_chip_1_buf4_to_gp_8120_ld182, int gp_in_on_chip_1_buf4_to_gp_8120_ld181, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf180.gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_to_gp_in_on_chip_1_buf4_FIFO_buf180_us31_5.push(gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf180_us31_5_select(gp_in_on_chip_1_buf4_FIFO_buf180_cache& gp_in_on_chip_1_buf4_FIFO_buf180, int root, int us_gp_in_on_chip_1_buf429, int us_gp_in_on_chip_1_buf430, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf180_us31_5 read pattern: { us31[root = 0, us_gp_in_on_chip_1_buf429, us_gp_in_on_chip_1_buf430] -> gp_in_on_chip_1_buf4_FIFO_buf180[o0, o1] : 0 <= us_gp_in_on_chip_1_buf429 <= 63 and 0 <= us_gp_in_on_chip_1_buf430 <= 63 and us_gp_in_on_chip_1_buf430 < 2o0 <= 2 + us_gp_in_on_chip_1_buf430 and us_gp_in_on_chip_1_buf429 < 2o1 <= 2 + us_gp_in_on_chip_1_buf429 }
  // Read schedule : { us31[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf180183[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 7] : 0 < d1 <= 32 and 0 < d2 <= 32 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72 = gp_in_on_chip_1_buf4_FIFO_buf180.gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_to_gp_in_on_chip_1_buf4_FIFO_buf180_us31_5.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_1_buf429) % 2 == 0 && 61 - us_gp_in_on_chip_1_buf430 >= 0) ? ((31 - floord(2*us_gp_in_on_chip_1_buf430, 4))) : 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_write
//	gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72
inline void gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_write, gp_in_on_chip_1_buf4_FIFO_buf180_cache& gp_in_on_chip_1_buf4_FIFO_buf180, int root, int gp_in_on_chip_1_buf4_to_gp_8120_ld182, int gp_in_on_chip_1_buf4_to_gp_8120_ld181, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_write(gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_72_res, gp_in_on_chip_1_buf4_FIFO_buf180, root, gp_in_on_chip_1_buf4_to_gp_8120_ld182, gp_in_on_chip_1_buf4_to_gp_8120_ld181, dynamic_address);
}

// us31_read
//	gp_in_on_chip_1_buf4_FIFO_buf180_us31_5
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf180_us31_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf180_cache& gp_in_on_chip_1_buf4_FIFO_buf180, int root, int us_gp_in_on_chip_1_buf429, int us_gp_in_on_chip_1_buf430, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf180_us31_5

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf180_us31_5_res = gp_in_on_chip_1_buf4_FIFO_buf180_us31_5_select(gp_in_on_chip_1_buf4_FIFO_buf180, root, us_gp_in_on_chip_1_buf429, us_gp_in_on_chip_1_buf430, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf180_us31_5_res);
	return result;
}

struct gp_in_on_chip_1_buf4_us28_us31_4_to_gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us28_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127[root = 0, gp_in_on_chip_1_buf4_us28_ld126, gp_in_on_chip_1_buf4_us28_ld125] -> gp_in_on_chip_1_buf4_us28[gp_in_on_chip_1_buf4_us28_ld125, gp_in_on_chip_1_buf4_us28_ld126] : 0 <= gp_in_on_chip_1_buf4_us28_ld126 <= 63 and 0 <= gp_in_on_chip_1_buf4_us28_ld125 <= 63 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_us28_us31_4_to_gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63_cache gp_in_on_chip_1_buf4_us28_us31_4_to_gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63;
};



inline void gp_in_on_chip_1_buf4_us28_us31_4_write(hw_uint<32> & gp_in_on_chip_1_buf4_us28_us31_4, gp_in_on_chip_1_buf4_us28_cache& gp_in_on_chip_1_buf4_us28, int root, int us_gp_in_on_chip_1_buf429, int us_gp_in_on_chip_1_buf430, int dynamic_address) {
  gp_in_on_chip_1_buf4_us28.gp_in_on_chip_1_buf4_us28_us31_4_to_gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63.push(gp_in_on_chip_1_buf4_us28_us31_4);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63_select(gp_in_on_chip_1_buf4_us28_cache& gp_in_on_chip_1_buf4_us28, int root, int gp_in_on_chip_1_buf4_us28_ld126, int gp_in_on_chip_1_buf4_us28_ld125, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63 read pattern: { load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127[root = 0, gp_in_on_chip_1_buf4_us28_ld126, gp_in_on_chip_1_buf4_us28_ld125] -> gp_in_on_chip_1_buf4_us28[gp_in_on_chip_1_buf4_us28_ld125, gp_in_on_chip_1_buf4_us28_ld126] : 0 <= gp_in_on_chip_1_buf4_us28_ld126 <= 63 and 0 <= gp_in_on_chip_1_buf4_us28_ld125 <= 63 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 11] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { us31[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us28_us31_4 = gp_in_on_chip_1_buf4_us28.gp_in_on_chip_1_buf4_us28_us31_4_to_gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us28_us31_4;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_read
//	gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63
inline hw_uint<32> gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_read_bundle_read(gp_in_on_chip_1_buf4_us28_cache& gp_in_on_chip_1_buf4_us28, int root, int gp_in_on_chip_1_buf4_us28_ld126, int gp_in_on_chip_1_buf4_us28_ld125, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63_res = gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63_select(gp_in_on_chip_1_buf4_us28, root, gp_in_on_chip_1_buf4_us28_ld126, gp_in_on_chip_1_buf4_us28_ld125, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_63_res);
	return result;
}

// us31_write
//	gp_in_on_chip_1_buf4_us28_us31_4
inline void gp_in_on_chip_1_buf4_us28_us31_write_bundle_write(hw_uint<32>& us31_write, gp_in_on_chip_1_buf4_us28_cache& gp_in_on_chip_1_buf4_us28, int root, int us_gp_in_on_chip_1_buf429, int us_gp_in_on_chip_1_buf430, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us28_us31_4_res = us31_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us28_us31_4_write(gp_in_on_chip_1_buf4_us28_us31_4_res, gp_in_on_chip_1_buf4_us28, root, us_gp_in_on_chip_1_buf429, us_gp_in_on_chip_1_buf430, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache {
  // Reader addrs...
    // { diff35[root = 0, lp_in_on_chip_033, lp_in_on_chip_034] -> gp_in_on_chip_1_buf4_us28_FIFO_buf184[lp_in_on_chip_034, lp_in_on_chip_033] : 0 <= lp_in_on_chip_033 <= 63 and 0 <= lp_in_on_chip_034 <= 63 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100_cache gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100;
};



inline void gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_write(hw_uint<32> & gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64, gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache& gp_in_on_chip_1_buf4_us28_FIFO_buf184, int root, int gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186, int gp_in_on_chip_1_buf4_us28_to_gp_2124_ld185, int dynamic_address) {
  gp_in_on_chip_1_buf4_us28_FIFO_buf184.gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100.push(gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100_select(gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache& gp_in_on_chip_1_buf4_us28_FIFO_buf184, int root, int lp_in_on_chip_033, int lp_in_on_chip_034, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100 read pattern: { diff35[root = 0, lp_in_on_chip_033, lp_in_on_chip_034] -> gp_in_on_chip_1_buf4_us28_FIFO_buf184[lp_in_on_chip_034, lp_in_on_chip_033] : 0 <= lp_in_on_chip_033 <= 63 and 0 <= lp_in_on_chip_034 <= 63 }
  // Read schedule : { diff35[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 13] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64 = gp_in_on_chip_1_buf4_us28_FIFO_buf184.gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64;
  return 0;
}

// # of bundles = 2
// diff35_read
//	gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100
inline hw_uint<32> gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_read_bundle_read(gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache& gp_in_on_chip_1_buf4_us28_FIFO_buf184, int root, int lp_in_on_chip_033, int lp_in_on_chip_034, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100_res = gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100_select(gp_in_on_chip_1_buf4_us28_FIFO_buf184, root, lp_in_on_chip_033, lp_in_on_chip_034, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_100_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_write
//	gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64
inline void gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_write, gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache& gp_in_on_chip_1_buf4_us28_FIFO_buf184, int root, int gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186, int gp_in_on_chip_1_buf4_us28_to_gp_2124_ld185, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_res = load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_write(gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_64_res, gp_in_on_chip_1_buf4_us28_FIFO_buf184, root, gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186, gp_in_on_chip_1_buf4_us28_to_gp_2124_ld185, dynamic_address);
}

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_merged_banks_2_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 1
	// # of read delays: 1
  // 0
	hw_uint<32>  f1;


	inline hw_uint<32>  peek_0() {
		return f1;
	}



	inline void push(const hw_uint<32>  value) {
    // cap: 1
    f1 = value;
	}

};

struct gp_in_on_chip_2_buf12_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_to_gp_10128131[root = 0, gp_in_on_chip_2_buf12_ld130, gp_in_on_chip_2_buf12_ld129] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld129, gp_in_on_chip_2_buf12_ld130] : 0 <= gp_in_on_chip_2_buf12_ld130 <= 15 and 0 <= gp_in_on_chip_2_buf12_ld129 <= 15 }
    // { load_to_gp_in_on_chip_2_buf12_to_gp_9132135[root = 0, gp_in_on_chip_2_buf12_ld134, gp_in_on_chip_2_buf12_ld133] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld133, gp_in_on_chip_2_buf12_ld134] : 0 <= gp_in_on_chip_2_buf12_ld134 <= 15 and 0 <= gp_in_on_chip_2_buf12_ld133 <= 15 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_merged_banks_2_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_merged_banks_2;
};



inline void gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_write(hw_uint<32> & gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_merged_banks_2.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld130, int gp_in_on_chip_2_buf12_ld129, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_10128131[root = 0, gp_in_on_chip_2_buf12_ld130, gp_in_on_chip_2_buf12_ld129] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld129, gp_in_on_chip_2_buf12_ld130] : 0 <= gp_in_on_chip_2_buf12_ld130 <= 15 and 0 <= gp_in_on_chip_2_buf12_ld129 <= 15 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_10128131[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_merged_banks_2.peek_0();
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld134, int gp_in_on_chip_2_buf12_ld133, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_9132135[root = 0, gp_in_on_chip_2_buf12_ld134, gp_in_on_chip_2_buf12_ld133] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld133, gp_in_on_chip_2_buf12_ld134] : 0 <= gp_in_on_chip_2_buf12_ld134 <= 15 and 0 <= gp_in_on_chip_2_buf12_ld133 <= 15 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_9132135[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 17] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_merged_banks_2.peek_0();
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78;
  return 0;
}

// # of bundles = 3
// gp_in_on_chip_214_merged111_write
//	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78
inline void gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_write_bundle_write(hw_uint<32>& gp_in_on_chip_214_merged111_write, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_res = gp_in_on_chip_214_merged111_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_write(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_78_res, gp_in_on_chip_2_buf12, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
}

// load_to_gp_in_on_chip_2_buf12_to_gp_10128131_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld130, int gp_in_on_chip_2_buf12_ld129, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld130, gp_in_on_chip_2_buf12_ld129, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_57_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_to_gp_9132135_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld134, int gp_in_on_chip_2_buf12_ld133, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld134, gp_in_on_chip_2_buf12_ld133, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_55_res);
	return result;
}

struct gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_to_gp_in_on_chip_2_buf12_FIFO_buf188_us43_3_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 16
	// # of read delays: 17
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf188_cache {
  // Reader addrs...
    // { us43[root = 0, us_gp_in_on_chip_2_buf1241, us_gp_in_on_chip_2_buf1242] -> gp_in_on_chip_2_buf12_FIFO_buf188[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1241 <= 31 and 0 <= us_gp_in_on_chip_2_buf1242 <= 31 and -1 + us_gp_in_on_chip_2_buf1242 <= 2o0 <= us_gp_in_on_chip_2_buf1242 and -1 + us_gp_in_on_chip_2_buf1241 <= 2o1 <= us_gp_in_on_chip_2_buf1241 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_to_gp_in_on_chip_2_buf12_FIFO_buf188_us43_3_cache gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_to_gp_in_on_chip_2_buf12_FIFO_buf188_us43_3;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60, gp_in_on_chip_2_buf12_FIFO_buf188_cache& gp_in_on_chip_2_buf12_FIFO_buf188, int root, int gp_in_on_chip_2_buf12_to_gp_10128_ld190, int gp_in_on_chip_2_buf12_to_gp_10128_ld189, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf188.gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_to_gp_in_on_chip_2_buf12_FIFO_buf188_us43_3.push(gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf188_us43_3_select(gp_in_on_chip_2_buf12_FIFO_buf188_cache& gp_in_on_chip_2_buf12_FIFO_buf188, int root, int us_gp_in_on_chip_2_buf1241, int us_gp_in_on_chip_2_buf1242, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf188_us43_3 read pattern: { us43[root = 0, us_gp_in_on_chip_2_buf1241, us_gp_in_on_chip_2_buf1242] -> gp_in_on_chip_2_buf12_FIFO_buf188[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1241 <= 31 and 0 <= us_gp_in_on_chip_2_buf1242 <= 31 and -1 + us_gp_in_on_chip_2_buf1242 <= 2o0 <= us_gp_in_on_chip_2_buf1242 and -1 + us_gp_in_on_chip_2_buf1241 <= 2o1 <= us_gp_in_on_chip_2_buf1241 }
  // Read schedule : { us43[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf188191[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 22] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60 = gp_in_on_chip_2_buf12_FIFO_buf188.gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_to_gp_in_on_chip_2_buf12_FIFO_buf188_us43_3.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_2_buf1241) % 2 == 0 && 29 - us_gp_in_on_chip_2_buf1242 >= 0) ? ((15 - floord(2*us_gp_in_on_chip_2_buf1242, 4))) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_write
//	gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60
inline void gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_write, gp_in_on_chip_2_buf12_FIFO_buf188_cache& gp_in_on_chip_2_buf12_FIFO_buf188, int root, int gp_in_on_chip_2_buf12_to_gp_10128_ld190, int gp_in_on_chip_2_buf12_to_gp_10128_ld189, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_write(gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_60_res, gp_in_on_chip_2_buf12_FIFO_buf188, root, gp_in_on_chip_2_buf12_to_gp_10128_ld190, gp_in_on_chip_2_buf12_to_gp_10128_ld189, dynamic_address);
}

// us43_read
//	gp_in_on_chip_2_buf12_FIFO_buf188_us43_3
inline hw_uint<32> gp_in_on_chip_2_buf12_FIFO_buf188_us43_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf188_cache& gp_in_on_chip_2_buf12_FIFO_buf188, int root, int us_gp_in_on_chip_2_buf1241, int us_gp_in_on_chip_2_buf1242, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_FIFO_buf188_us43_3

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf188_us43_3_res = gp_in_on_chip_2_buf12_FIFO_buf188_us43_3_select(gp_in_on_chip_2_buf12_FIFO_buf188, root, us_gp_in_on_chip_2_buf1241, us_gp_in_on_chip_2_buf1242, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_FIFO_buf188_us43_3_res);
	return result;
}

struct gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_to_gp_in_on_chip_2_buf12_FIFO_buf192_us23_7_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 16
	// # of read delays: 17
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf192_cache {
  // Reader addrs...
    // { us23[root = 0, us_gp_in_on_chip_2_buf1221, us_gp_in_on_chip_2_buf1222] -> gp_in_on_chip_2_buf12_FIFO_buf192[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1221 <= 31 and 0 <= us_gp_in_on_chip_2_buf1222 <= 31 and -1 + us_gp_in_on_chip_2_buf1222 <= 2o0 <= us_gp_in_on_chip_2_buf1222 and -1 + us_gp_in_on_chip_2_buf1221 <= 2o1 <= us_gp_in_on_chip_2_buf1221 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_to_gp_in_on_chip_2_buf12_FIFO_buf192_us23_7_cache gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_to_gp_in_on_chip_2_buf12_FIFO_buf192_us23_7;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58, gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int gp_in_on_chip_2_buf12_to_gp_9132_ld194, int gp_in_on_chip_2_buf12_to_gp_9132_ld193, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf192.gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_to_gp_in_on_chip_2_buf12_FIFO_buf192_us23_7.push(gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf192_us23_7_select(gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int us_gp_in_on_chip_2_buf1221, int us_gp_in_on_chip_2_buf1222, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf192_us23_7 read pattern: { us23[root = 0, us_gp_in_on_chip_2_buf1221, us_gp_in_on_chip_2_buf1222] -> gp_in_on_chip_2_buf12_FIFO_buf192[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1221 <= 31 and 0 <= us_gp_in_on_chip_2_buf1222 <= 31 and -1 + us_gp_in_on_chip_2_buf1222 <= 2o0 <= us_gp_in_on_chip_2_buf1222 and -1 + us_gp_in_on_chip_2_buf1221 <= 2o1 <= us_gp_in_on_chip_2_buf1221 }
  // Read schedule : { us23[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 23] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf192195[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58 = gp_in_on_chip_2_buf12_FIFO_buf192.gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_to_gp_in_on_chip_2_buf12_FIFO_buf192_us23_7.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_2_buf1221) % 2 == 0 && 29 - us_gp_in_on_chip_2_buf1222 >= 0) ? ((15 - floord(2*us_gp_in_on_chip_2_buf1222, 4))) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write
//	gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58
inline void gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write, gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int gp_in_on_chip_2_buf12_to_gp_9132_ld194, int gp_in_on_chip_2_buf12_to_gp_9132_ld193, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_write(gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_58_res, gp_in_on_chip_2_buf12_FIFO_buf192, root, gp_in_on_chip_2_buf12_to_gp_9132_ld194, gp_in_on_chip_2_buf12_to_gp_9132_ld193, dynamic_address);
}

// us23_read
//	gp_in_on_chip_2_buf12_FIFO_buf192_us23_7
inline hw_uint<32> gp_in_on_chip_2_buf12_FIFO_buf192_us23_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int us_gp_in_on_chip_2_buf1221, int us_gp_in_on_chip_2_buf1222, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_FIFO_buf192_us23_7

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf192_us23_7_res = gp_in_on_chip_2_buf12_FIFO_buf192_us23_7_select(gp_in_on_chip_2_buf12_FIFO_buf192, root, us_gp_in_on_chip_2_buf1221, us_gp_in_on_chip_2_buf1222, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_FIFO_buf192_us23_7_res);
	return result;
}

struct gp_in_on_chip_2_buf12_us20_us23_6_to_gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct gp_in_on_chip_2_buf12_us20_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139[root = 0, gp_in_on_chip_2_buf12_us20_ld138, gp_in_on_chip_2_buf12_us20_ld137] -> gp_in_on_chip_2_buf12_us20[gp_in_on_chip_2_buf12_us20_ld137, gp_in_on_chip_2_buf12_us20_ld138] : 0 <= gp_in_on_chip_2_buf12_us20_ld138 <= 31 and 0 <= gp_in_on_chip_2_buf12_us20_ld137 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us20_us23_6_to_gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51_cache gp_in_on_chip_2_buf12_us20_us23_6_to_gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51;
};



inline void gp_in_on_chip_2_buf12_us20_us23_6_write(hw_uint<32> & gp_in_on_chip_2_buf12_us20_us23_6, gp_in_on_chip_2_buf12_us20_cache& gp_in_on_chip_2_buf12_us20, int root, int us_gp_in_on_chip_2_buf1221, int us_gp_in_on_chip_2_buf1222, int dynamic_address) {
  gp_in_on_chip_2_buf12_us20.gp_in_on_chip_2_buf12_us20_us23_6_to_gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51.push(gp_in_on_chip_2_buf12_us20_us23_6);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51_select(gp_in_on_chip_2_buf12_us20_cache& gp_in_on_chip_2_buf12_us20, int root, int gp_in_on_chip_2_buf12_us20_ld138, int gp_in_on_chip_2_buf12_us20_ld137, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51 read pattern: { load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139[root = 0, gp_in_on_chip_2_buf12_us20_ld138, gp_in_on_chip_2_buf12_us20_ld137] -> gp_in_on_chip_2_buf12_us20[gp_in_on_chip_2_buf12_us20_ld137, gp_in_on_chip_2_buf12_us20_ld138] : 0 <= gp_in_on_chip_2_buf12_us20_ld138 <= 31 and 0 <= gp_in_on_chip_2_buf12_us20_ld137 <= 31 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 25] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { us23[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 23] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us20_us23_6 = gp_in_on_chip_2_buf12_us20.gp_in_on_chip_2_buf12_us20_us23_6_to_gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us20_us23_6;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_read
//	gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51
inline hw_uint<32> gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_read_bundle_read(gp_in_on_chip_2_buf12_us20_cache& gp_in_on_chip_2_buf12_us20, int root, int gp_in_on_chip_2_buf12_us20_ld138, int gp_in_on_chip_2_buf12_us20_ld137, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51_res = gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51_select(gp_in_on_chip_2_buf12_us20, root, gp_in_on_chip_2_buf12_us20_ld138, gp_in_on_chip_2_buf12_us20_ld137, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_51_res);
	return result;
}

// us23_write
//	gp_in_on_chip_2_buf12_us20_us23_6
inline void gp_in_on_chip_2_buf12_us20_us23_write_bundle_write(hw_uint<32>& us23_write, gp_in_on_chip_2_buf12_us20_cache& gp_in_on_chip_2_buf12_us20, int root, int us_gp_in_on_chip_2_buf1221, int us_gp_in_on_chip_2_buf1222, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us20_us23_6_res = us23_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us20_us23_6_write(gp_in_on_chip_2_buf12_us20_us23_6_res, gp_in_on_chip_2_buf12_us20, root, us_gp_in_on_chip_2_buf1221, us_gp_in_on_chip_2_buf1222, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache {
  // Reader addrs...
    // { diff27[root = 0, lp_in_on_chip_125, lp_in_on_chip_126] -> gp_in_on_chip_2_buf12_us20_FIFO_buf196[lp_in_on_chip_126, lp_in_on_chip_125] : 0 <= lp_in_on_chip_125 <= 31 and 0 <= lp_in_on_chip_126 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103_cache gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103;
};



inline void gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_write(hw_uint<32> & gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52, gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache& gp_in_on_chip_2_buf12_us20_FIFO_buf196, int root, int gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198, int gp_in_on_chip_2_buf12_us20_to_gp_4136_ld197, int dynamic_address) {
  gp_in_on_chip_2_buf12_us20_FIFO_buf196.gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103.push(gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103_select(gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache& gp_in_on_chip_2_buf12_us20_FIFO_buf196, int root, int lp_in_on_chip_125, int lp_in_on_chip_126, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103 read pattern: { diff27[root = 0, lp_in_on_chip_125, lp_in_on_chip_126] -> gp_in_on_chip_2_buf12_us20_FIFO_buf196[lp_in_on_chip_126, lp_in_on_chip_125] : 0 <= lp_in_on_chip_125 <= 31 and 0 <= lp_in_on_chip_126 <= 31 }
  // Read schedule : { diff27[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 29] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 28] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52 = gp_in_on_chip_2_buf12_us20_FIFO_buf196.gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52;
  return 0;
}

// # of bundles = 2
// diff27_read
//	gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103
inline hw_uint<32> gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_read_bundle_read(gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache& gp_in_on_chip_2_buf12_us20_FIFO_buf196, int root, int lp_in_on_chip_125, int lp_in_on_chip_126, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103_res = gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103_select(gp_in_on_chip_2_buf12_us20_FIFO_buf196, root, lp_in_on_chip_125, lp_in_on_chip_126, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_103_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_write
//	gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52
inline void gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_write, gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache& gp_in_on_chip_2_buf12_us20_FIFO_buf196, int root, int gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198, int gp_in_on_chip_2_buf12_us20_to_gp_4136_ld197, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_res = load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_write(gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_52_res, gp_in_on_chip_2_buf12_us20_FIFO_buf196, root, gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198, gp_in_on_chip_2_buf12_us20_to_gp_4136_ld197, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us40_us43_2_to_gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct gp_in_on_chip_2_buf12_us40_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143[root = 0, gp_in_on_chip_2_buf12_us40_ld142, gp_in_on_chip_2_buf12_us40_ld141] -> gp_in_on_chip_2_buf12_us40[gp_in_on_chip_2_buf12_us40_ld141, gp_in_on_chip_2_buf12_us40_ld142] : 0 <= gp_in_on_chip_2_buf12_us40_ld142 <= 31 and 0 <= gp_in_on_chip_2_buf12_us40_ld141 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us40_us43_2_to_gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47_cache gp_in_on_chip_2_buf12_us40_us43_2_to_gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47;
};



inline void gp_in_on_chip_2_buf12_us40_us43_2_write(hw_uint<32> & gp_in_on_chip_2_buf12_us40_us43_2, gp_in_on_chip_2_buf12_us40_cache& gp_in_on_chip_2_buf12_us40, int root, int us_gp_in_on_chip_2_buf1241, int us_gp_in_on_chip_2_buf1242, int dynamic_address) {
  gp_in_on_chip_2_buf12_us40.gp_in_on_chip_2_buf12_us40_us43_2_to_gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47.push(gp_in_on_chip_2_buf12_us40_us43_2);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47_select(gp_in_on_chip_2_buf12_us40_cache& gp_in_on_chip_2_buf12_us40, int root, int gp_in_on_chip_2_buf12_us40_ld142, int gp_in_on_chip_2_buf12_us40_ld141, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47 read pattern: { load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143[root = 0, gp_in_on_chip_2_buf12_us40_ld142, gp_in_on_chip_2_buf12_us40_ld141] -> gp_in_on_chip_2_buf12_us40[gp_in_on_chip_2_buf12_us40_ld141, gp_in_on_chip_2_buf12_us40_ld142] : 0 <= gp_in_on_chip_2_buf12_us40_ld142 <= 31 and 0 <= gp_in_on_chip_2_buf12_us40_ld141 <= 31 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 26] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { us43[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us40_us43_2 = gp_in_on_chip_2_buf12_us40.gp_in_on_chip_2_buf12_us40_us43_2_to_gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us40_us43_2;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_read
//	gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47
inline hw_uint<32> gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_read_bundle_read(gp_in_on_chip_2_buf12_us40_cache& gp_in_on_chip_2_buf12_us40, int root, int gp_in_on_chip_2_buf12_us40_ld142, int gp_in_on_chip_2_buf12_us40_ld141, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47_res = gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47_select(gp_in_on_chip_2_buf12_us40, root, gp_in_on_chip_2_buf12_us40_ld142, gp_in_on_chip_2_buf12_us40_ld141, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_47_res);
	return result;
}

// us43_write
//	gp_in_on_chip_2_buf12_us40_us43_2
inline void gp_in_on_chip_2_buf12_us40_us43_write_bundle_write(hw_uint<32>& us43_write, gp_in_on_chip_2_buf12_us40_cache& gp_in_on_chip_2_buf12_us40, int root, int us_gp_in_on_chip_2_buf1241, int us_gp_in_on_chip_2_buf1242, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us40_us43_2_res = us43_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us40_us43_2_write(gp_in_on_chip_2_buf12_us40_us43_2_res, gp_in_on_chip_2_buf12_us40, root, us_gp_in_on_chip_2_buf1241, us_gp_in_on_chip_2_buf1242, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache {
  // Reader addrs...
    // { rc44[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638] -> gp_in_on_chip_2_buf12_us40_FIFO_buf200[lp_in_on_chip_1_buf24_reconstruct_lp3638, lp_in_on_chip_1_buf24_reconstruct_lp3637] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3637 <= 31 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3638 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13_cache gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13;
};



inline void gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_write(hw_uint<32> & gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48, gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us40_FIFO_buf200, int root, int gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202, int gp_in_on_chip_2_buf12_us40_to_gp_5140_ld201, int dynamic_address) {
  gp_in_on_chip_2_buf12_us40_FIFO_buf200.gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13.push(gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13_select(gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us40_FIFO_buf200, int root, int lp_in_on_chip_1_buf24_reconstruct_lp3637, int lp_in_on_chip_1_buf24_reconstruct_lp3638, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13 read pattern: { rc44[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638] -> gp_in_on_chip_2_buf12_us40_FIFO_buf200[lp_in_on_chip_1_buf24_reconstruct_lp3638, lp_in_on_chip_1_buf24_reconstruct_lp3637] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3637 <= 31 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3638 <= 31 }
  // Read schedule : { rc44[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 32] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 27] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48 = gp_in_on_chip_2_buf12_us40_FIFO_buf200.gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_write
//	gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48
inline void gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_write, gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us40_FIFO_buf200, int root, int gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202, int gp_in_on_chip_2_buf12_us40_to_gp_5140_ld201, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_res = load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_write(gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_48_res, gp_in_on_chip_2_buf12_us40_FIFO_buf200, root, gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202, gp_in_on_chip_2_buf12_us40_to_gp_5140_ld201, dynamic_address);
}

// rc44_read
//	gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13
inline hw_uint<32> gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_read_bundle_read(gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us40_FIFO_buf200, int root, int lp_in_on_chip_1_buf24_reconstruct_lp3637, int lp_in_on_chip_1_buf24_reconstruct_lp3638, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13_res = gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13_select(gp_in_on_chip_2_buf12_us40_FIFO_buf200, root, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_13_res);
	return result;
}

struct in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_0144147_41_cache {
	// RAM Box: {[0, 66], [0, 66]}
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

struct in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_2148151_39_cache {
	// RAM Box: {[3, 66], [3, 66]}
	// Capacity: 69
	// # of read delays: 69
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68
	fifo<hw_uint<32> , 69> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(68 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_on_chip_cache {
  // Reader addrs...
    // { load_to_in_on_chip_to_gp_0144147[root = 0, in_on_chip_ld146, in_on_chip_ld145] -> in_on_chip[in_on_chip_ld145, in_on_chip_ld146] : 0 <= in_on_chip_ld146 <= 66 and 0 <= in_on_chip_ld145 <= 66 }
    // { load_to_in_on_chip_to_gp_2148151[root = 0, in_on_chip_ld150, in_on_chip_ld149] -> in_on_chip[in_on_chip_ld149, in_on_chip_ld150] : 3 <= in_on_chip_ld150 <= 66 and 3 <= in_on_chip_ld149 <= 66 }
  // # of banks: 2
  in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_0144147_41_cache in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_0144147_41;
  in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_2148151_39_cache in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_2148151_39;
};



inline void in_on_chip_pw_math_in03_16_write(hw_uint<32> & in_on_chip_pw_math_in03_16, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
  in_on_chip.in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_0144147_41.push(in_on_chip_pw_math_in03_16);
  in_on_chip.in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_2148151_39.push(in_on_chip_pw_math_in03_16);
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_0144147_41_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld146, int in_on_chip_ld145, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_0144147_41 read pattern: { load_to_in_on_chip_to_gp_0144147[root = 0, in_on_chip_ld146, in_on_chip_ld145] -> in_on_chip[in_on_chip_ld145, in_on_chip_ld146] : 0 <= in_on_chip_ld146 <= 66 and 0 <= in_on_chip_ld145 <= 66 }
  // Read schedule : { load_to_in_on_chip_to_gp_0144147[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_pw_math_in03_16 = in_on_chip.in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_0144147_41.peek(/* one reader or all rams */ 0);
  return value_in_on_chip_pw_math_in03_16;
  return 0;
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_2148151_39_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld150, int in_on_chip_ld149, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_2148151_39 read pattern: { load_to_in_on_chip_to_gp_2148151[root = 0, in_on_chip_ld150, in_on_chip_ld149] -> in_on_chip[in_on_chip_ld149, in_on_chip_ld150] : 3 <= in_on_chip_ld150 <= 66 and 3 <= in_on_chip_ld149 <= 66 }
  // Read schedule : { load_to_in_on_chip_to_gp_2148151[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : 3 <= d1 <= 66 and 3 <= d2 <= 66 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_pw_math_in03_16 = in_on_chip.in_on_chip_pw_math_in03_16_to_in_on_chip_load_to_in_on_chip_to_gp_2148151_39.peek(/* one reader or all rams */ (65 - in_on_chip_ld149 >= 0 && 65 - in_on_chip_ld150 >= 0) ? (68) : (-66 + in_on_chip_ld149 == 0 && 65 - in_on_chip_ld150 >= 0) ? (67) : (-66 + in_on_chip_ld150 == 0 && 65 - in_on_chip_ld149 >= 0) ? ((66 - in_on_chip_ld149)) : 0);
  return value_in_on_chip_pw_math_in03_16;
  return 0;
}

// # of bundles = 3
// load_to_in_on_chip_to_gp_0144147_read
//	in_on_chip_load_to_in_on_chip_to_gp_0144147_41
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_0144147_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld146, int in_on_chip_ld145, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_0144147_41

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_0144147_41_res = in_on_chip_load_to_in_on_chip_to_gp_0144147_41_select(in_on_chip, root, in_on_chip_ld146, in_on_chip_ld145, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_0144147_41_res);
	return result;
}

// load_to_in_on_chip_to_gp_2148151_read
//	in_on_chip_load_to_in_on_chip_to_gp_2148151_39
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_2148151_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld150, int in_on_chip_ld149, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_2148151_39

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_2148151_39_res = in_on_chip_load_to_in_on_chip_to_gp_2148151_39_select(in_on_chip, root, in_on_chip_ld150, in_on_chip_ld149, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_2148151_39_res);
	return result;
}

// pw_math_in03_write
//	in_on_chip_pw_math_in03_16
inline void in_on_chip_pw_math_in03_write_bundle_write(hw_uint<32>& pw_math_in03_write, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
	hw_uint<32>  in_on_chip_pw_math_in03_16_res = pw_math_in03_write.extract<0, 31>();
	in_on_chip_pw_math_in03_16_write(in_on_chip_pw_math_in03_16_res, in_on_chip, root, pw_math_in01, pw_math_in02, dynamic_address);
}

struct in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9_cache {
	// RAM Box: {[0, 66], [0, 66]}
	// Capacity: 137
	// # of read delays: 9
  // 0, 1, 2, 67, 68, 69, 134, 135, 136
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 64> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 64> f11;
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

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_67() {
		return f6;
	}

	inline hw_uint<32>  peek_68() {
		return f8;
	}

	inline hw_uint<32>  peek_69() {
		return f10;
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_134() {
		return f12;
	}

	inline hw_uint<32>  peek_135() {
		return f14;
	}

	inline hw_uint<32>  peek_136() {
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
    // cap: 1 reading from capacity: 64
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
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
    // cap: 1 reading from capacity: 64
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
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

struct in_on_chip_FIFO_buf204_cache {
  // Reader addrs...
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
    // { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // # of banks: 1
  in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9_cache in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9;
};



inline void in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_write(hw_uint<32> & in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44, in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int in_on_chip_to_gp_0144_ld206, int in_on_chip_to_gp_0144_ld205, int dynamic_address) {
  in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.push(in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44);
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_2();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_1();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_0();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_69();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_68();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_67();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_136();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_135();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97_select(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97 read pattern: { gp_in_on_chip_16_merged108[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf204[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 32 and 0 <= gp_in_on_chip_16 <= 32 }
  // Read schedule : { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44 = in_on_chip_FIFO_buf204.in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_merged_banks_9.peek_134();
  return value_in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_16_merged108_read
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96
//	in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97
inline hw_uint<288> in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_read_bundle_read(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  // # of ports in bundle: 9
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96
    // in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97

	hw_uint<288> result;
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<0, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_89_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<32, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_90_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<64, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_91_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<96, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_92_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<128, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_93_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<160, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_94_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<192, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_95_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<224, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_96_res);
	hw_uint<32>  in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97_res = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97_select(in_on_chip_FIFO_buf204, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<256, 288>(result, in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_97_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf204207_write
//	in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44
inline void in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf204207_write, in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int root, int in_on_chip_to_gp_0144_ld206, int in_on_chip_to_gp_0144_ld205, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_res = load_to_in_on_chip_FIFO_buf204207_write.extract<0, 31>();
	in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_write(in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_44_res, in_on_chip_FIFO_buf204, root, in_on_chip_to_gp_0144_ld206, in_on_chip_to_gp_0144_ld205, dynamic_address);
}

struct in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_to_in_on_chip_FIFO_buf208_diff35_99_cache {
	// RAM Box: {[3, 66], [3, 66]}
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

struct in_on_chip_FIFO_buf208_cache {
  // Reader addrs...
    // { diff35[root = 0, lp_in_on_chip_033, lp_in_on_chip_034] -> in_on_chip_FIFO_buf208[3 + lp_in_on_chip_034, 3 + lp_in_on_chip_033] : 0 <= lp_in_on_chip_033 <= 63 and 0 <= lp_in_on_chip_034 <= 63 }
  // # of banks: 1
  in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_to_in_on_chip_FIFO_buf208_diff35_99_cache in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_to_in_on_chip_FIFO_buf208_diff35_99;
};



inline void in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_write(hw_uint<32> & in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42, in_on_chip_FIFO_buf208_cache& in_on_chip_FIFO_buf208, int root, int in_on_chip_to_gp_2148_ld210, int in_on_chip_to_gp_2148_ld209, int dynamic_address) {
  in_on_chip_FIFO_buf208.in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_to_in_on_chip_FIFO_buf208_diff35_99.push(in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42);
}

inline hw_uint<32>  in_on_chip_FIFO_buf208_diff35_99_select(in_on_chip_FIFO_buf208_cache& in_on_chip_FIFO_buf208, int root, int lp_in_on_chip_033, int lp_in_on_chip_034, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf208_diff35_99 read pattern: { diff35[root = 0, lp_in_on_chip_033, lp_in_on_chip_034] -> in_on_chip_FIFO_buf208[3 + lp_in_on_chip_034, 3 + lp_in_on_chip_033] : 0 <= lp_in_on_chip_033 <= 63 and 0 <= lp_in_on_chip_034 <= 63 }
  // Read schedule : { diff35[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf208211[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : 3 <= d1 <= 66 and 3 <= d2 <= 66 }
  auto value_in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42 = in_on_chip_FIFO_buf208.in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_to_in_on_chip_FIFO_buf208_diff35_99.peek(/* one reader or all rams */ 0);
  return value_in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42;
  return 0;
}

// # of bundles = 2
// diff35_read
//	in_on_chip_FIFO_buf208_diff35_99
inline hw_uint<32> in_on_chip_FIFO_buf208_diff35_read_bundle_read(in_on_chip_FIFO_buf208_cache& in_on_chip_FIFO_buf208, int root, int lp_in_on_chip_033, int lp_in_on_chip_034, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_FIFO_buf208_diff35_99

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_FIFO_buf208_diff35_99_res = in_on_chip_FIFO_buf208_diff35_99_select(in_on_chip_FIFO_buf208, root, lp_in_on_chip_033, lp_in_on_chip_034, dynamic_address);
	set_at<0, 32>(result, in_on_chip_FIFO_buf208_diff35_99_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf208211_write
//	in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42
inline void in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf208211_write, in_on_chip_FIFO_buf208_cache& in_on_chip_FIFO_buf208, int root, int in_on_chip_to_gp_2148_ld210, int in_on_chip_to_gp_2148_ld209, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_res = load_to_in_on_chip_FIFO_buf208211_write.extract<0, 31>();
	in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_write(in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_42_res, in_on_chip_FIFO_buf208, root, in_on_chip_to_gp_2148_ld210, in_on_chip_to_gp_2148_ld209, dynamic_address);
}

struct lp_in_on_chip_0_buf32_diff35_98_to_lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf32_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_0_buf32_to_gp_3152155[root = 0, lp_in_on_chip_0_buf32_ld154, lp_in_on_chip_0_buf32_ld153] -> lp_in_on_chip_0_buf32[lp_in_on_chip_0_buf32_ld153, lp_in_on_chip_0_buf32_ld154] : 0 <= lp_in_on_chip_0_buf32_ld154 <= 63 and 0 <= lp_in_on_chip_0_buf32_ld153 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf32_diff35_98_to_lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31_cache lp_in_on_chip_0_buf32_diff35_98_to_lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31;
};



inline void lp_in_on_chip_0_buf32_diff35_98_write(hw_uint<32> & lp_in_on_chip_0_buf32_diff35_98, lp_in_on_chip_0_buf32_cache& lp_in_on_chip_0_buf32, int root, int lp_in_on_chip_033, int lp_in_on_chip_034, int dynamic_address) {
  lp_in_on_chip_0_buf32.lp_in_on_chip_0_buf32_diff35_98_to_lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31.push(lp_in_on_chip_0_buf32_diff35_98);
}

inline hw_uint<32>  lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31_select(lp_in_on_chip_0_buf32_cache& lp_in_on_chip_0_buf32, int root, int lp_in_on_chip_0_buf32_ld154, int lp_in_on_chip_0_buf32_ld153, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31 read pattern: { load_to_lp_in_on_chip_0_buf32_to_gp_3152155[root = 0, lp_in_on_chip_0_buf32_ld154, lp_in_on_chip_0_buf32_ld153] -> lp_in_on_chip_0_buf32[lp_in_on_chip_0_buf32_ld153, lp_in_on_chip_0_buf32_ld154] : 0 <= lp_in_on_chip_0_buf32_ld154 <= 63 and 0 <= lp_in_on_chip_0_buf32_ld153 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf32_to_gp_3152155[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { diff35[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf32_diff35_98 = lp_in_on_chip_0_buf32.lp_in_on_chip_0_buf32_diff35_98_to_lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf32_diff35_98;
  return 0;
}

// # of bundles = 2
// diff35_write
//	lp_in_on_chip_0_buf32_diff35_98
inline void lp_in_on_chip_0_buf32_diff35_write_bundle_write(hw_uint<32>& diff35_write, lp_in_on_chip_0_buf32_cache& lp_in_on_chip_0_buf32, int root, int lp_in_on_chip_033, int lp_in_on_chip_034, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf32_diff35_98_res = diff35_write.extract<0, 31>();
	lp_in_on_chip_0_buf32_diff35_98_write(lp_in_on_chip_0_buf32_diff35_98_res, lp_in_on_chip_0_buf32, root, lp_in_on_chip_033, lp_in_on_chip_034, dynamic_address);
}

// load_to_lp_in_on_chip_0_buf32_to_gp_3152155_read
//	lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31
inline hw_uint<32> lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_read_bundle_read(lp_in_on_chip_0_buf32_cache& lp_in_on_chip_0_buf32, int root, int lp_in_on_chip_0_buf32_ld154, int lp_in_on_chip_0_buf32_ld153, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31_res = lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31_select(lp_in_on_chip_0_buf32, root, lp_in_on_chip_0_buf32_ld154, lp_in_on_chip_0_buf32_ld153, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_31_res);
	return result;
}

struct lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_to_lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf32_FIFO_buf212_cache {
  // Reader addrs...
    // { rc53[root = 0, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547] -> lp_in_on_chip_0_buf32_FIFO_buf212[lp_in_on_chip_0_buf32_reconstruct_lp4547, lp_in_on_chip_0_buf32_reconstruct_lp4546] : 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4546 <= 63 and 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4547 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_to_lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9_cache lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_to_lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9;
};



inline void lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_write(hw_uint<32> & lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36, lp_in_on_chip_0_buf32_FIFO_buf212_cache& lp_in_on_chip_0_buf32_FIFO_buf212, int root, int lp_in_on_chip_0_buf32_to_gp_3152_ld214, int lp_in_on_chip_0_buf32_to_gp_3152_ld213, int dynamic_address) {
  lp_in_on_chip_0_buf32_FIFO_buf212.lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_to_lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9.push(lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36);
}

inline hw_uint<32>  lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9_select(lp_in_on_chip_0_buf32_FIFO_buf212_cache& lp_in_on_chip_0_buf32_FIFO_buf212, int root, int lp_in_on_chip_0_buf32_reconstruct_lp4546, int lp_in_on_chip_0_buf32_reconstruct_lp4547, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9 read pattern: { rc53[root = 0, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547] -> lp_in_on_chip_0_buf32_FIFO_buf212[lp_in_on_chip_0_buf32_reconstruct_lp4547, lp_in_on_chip_0_buf32_reconstruct_lp4546] : 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4546 <= 63 and 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4547 <= 63 }
  // Read schedule : { rc53[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf32_FIFO_buf212215[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 21] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36 = lp_in_on_chip_0_buf32_FIFO_buf212.lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_to_lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_write
//	lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36
inline void lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_write, lp_in_on_chip_0_buf32_FIFO_buf212_cache& lp_in_on_chip_0_buf32_FIFO_buf212, int root, int lp_in_on_chip_0_buf32_to_gp_3152_ld214, int lp_in_on_chip_0_buf32_to_gp_3152_ld213, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_res = load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_write.extract<0, 31>();
	lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_write(lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_36_res, lp_in_on_chip_0_buf32_FIFO_buf212, root, lp_in_on_chip_0_buf32_to_gp_3152_ld214, lp_in_on_chip_0_buf32_to_gp_3152_ld213, dynamic_address);
}

// rc53_read
//	lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9
inline hw_uint<32> lp_in_on_chip_0_buf32_FIFO_buf212_rc53_read_bundle_read(lp_in_on_chip_0_buf32_FIFO_buf212_cache& lp_in_on_chip_0_buf32_FIFO_buf212, int root, int lp_in_on_chip_0_buf32_reconstruct_lp4546, int lp_in_on_chip_0_buf32_reconstruct_lp4547, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9_res = lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9_select(lp_in_on_chip_0_buf32_FIFO_buf212, root, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf32_FIFO_buf212_rc53_9_res);
	return result;
}

struct lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159[root = 0, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157] -> lp_in_on_chip_0_buf32_reconstruct_lp45_buf48[lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158] : 0 <= lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158 <= 63 and 0 <= lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33_cache lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33;
};



inline void lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_write(hw_uint<32> & lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, int root, int lp_in_on_chip_0_buf32_reconstruct_lp4546, int lp_in_on_chip_0_buf32_reconstruct_lp4547, int dynamic_address) {
  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48.lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33.push(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8);
}

inline hw_uint<32>  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33_select(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, int root, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33 read pattern: { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159[root = 0, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157] -> lp_in_on_chip_0_buf32_reconstruct_lp45_buf48[lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158] : 0 <= lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158 <= 63 and 0 <= lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 39] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { rc53[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8 = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48.lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_read
//	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33
inline hw_uint<32> lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_read_bundle_read(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, int root, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33_res = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33_select(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, root, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_33_res);
	return result;
}

// rc53_write
//	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8
inline void lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_write_bundle_write(hw_uint<32>& rc53_write, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, int root, int lp_in_on_chip_0_buf32_reconstruct_lp4546, int lp_in_on_chip_0_buf32_reconstruct_lp4547, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_res = rc53_write.extract<0, 31>();
	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_write(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_8_res, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, root, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547, dynamic_address);
}

struct lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache {
  // Reader addrs...
    // { pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457[root = 0, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456] -> lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216[pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455] : 0 <= pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15_cache lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15;
};



inline void lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_write(hw_uint<32> & lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, int root, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld217, int dynamic_address) {
  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216.lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15.push(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34);
}

inline hw_uint<32>  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15_select(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, int root, int pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455, int pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15 read pattern: { pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457[root = 0, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456] -> lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216[pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455] : 0 <= pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456 <= 63 }
  // Read schedule : { pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 40] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34 = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216.lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_write
//	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34
inline void lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_write, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, int root, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218, int lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld217, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_res = load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_write.extract<0, 31>();
	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_write(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_34_res, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, root, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld217, dynamic_address);
}

// pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_read
//	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15
inline hw_uint<32> lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_read_bundle_read(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, int root, int pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455, int pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15_res = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15_select(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, root, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_15_res);
	return result;
}

struct lp_in_on_chip_1_buf24_diff27_101_to_lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct lp_in_on_chip_1_buf24_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf24_to_gp_5160163[root = 0, lp_in_on_chip_1_buf24_ld162, lp_in_on_chip_1_buf24_ld161] -> lp_in_on_chip_1_buf24[lp_in_on_chip_1_buf24_ld161, lp_in_on_chip_1_buf24_ld162] : 0 <= lp_in_on_chip_1_buf24_ld162 <= 31 and 0 <= lp_in_on_chip_1_buf24_ld161 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf24_diff27_101_to_lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19_cache lp_in_on_chip_1_buf24_diff27_101_to_lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19;
};



inline void lp_in_on_chip_1_buf24_diff27_101_write(hw_uint<32> & lp_in_on_chip_1_buf24_diff27_101, lp_in_on_chip_1_buf24_cache& lp_in_on_chip_1_buf24, int root, int lp_in_on_chip_125, int lp_in_on_chip_126, int dynamic_address) {
  lp_in_on_chip_1_buf24.lp_in_on_chip_1_buf24_diff27_101_to_lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19.push(lp_in_on_chip_1_buf24_diff27_101);
}

inline hw_uint<32>  lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19_select(lp_in_on_chip_1_buf24_cache& lp_in_on_chip_1_buf24, int root, int lp_in_on_chip_1_buf24_ld162, int lp_in_on_chip_1_buf24_ld161, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19 read pattern: { load_to_lp_in_on_chip_1_buf24_to_gp_5160163[root = 0, lp_in_on_chip_1_buf24_ld162, lp_in_on_chip_1_buf24_ld161] -> lp_in_on_chip_1_buf24[lp_in_on_chip_1_buf24_ld161, lp_in_on_chip_1_buf24_ld162] : 0 <= lp_in_on_chip_1_buf24_ld162 <= 31 and 0 <= lp_in_on_chip_1_buf24_ld161 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf24_to_gp_5160163[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 30] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { diff27[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 29] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf24_diff27_101 = lp_in_on_chip_1_buf24.lp_in_on_chip_1_buf24_diff27_101_to_lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf24_diff27_101;
  return 0;
}

// # of bundles = 2
// diff27_write
//	lp_in_on_chip_1_buf24_diff27_101
inline void lp_in_on_chip_1_buf24_diff27_write_bundle_write(hw_uint<32>& diff27_write, lp_in_on_chip_1_buf24_cache& lp_in_on_chip_1_buf24, int root, int lp_in_on_chip_125, int lp_in_on_chip_126, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf24_diff27_101_res = diff27_write.extract<0, 31>();
	lp_in_on_chip_1_buf24_diff27_101_write(lp_in_on_chip_1_buf24_diff27_101_res, lp_in_on_chip_1_buf24, root, lp_in_on_chip_125, lp_in_on_chip_126, dynamic_address);
}

// load_to_lp_in_on_chip_1_buf24_to_gp_5160163_read
//	lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19
inline hw_uint<32> lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_read_bundle_read(lp_in_on_chip_1_buf24_cache& lp_in_on_chip_1_buf24, int root, int lp_in_on_chip_1_buf24_ld162, int lp_in_on_chip_1_buf24_ld161, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19_res = lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19_select(lp_in_on_chip_1_buf24, root, lp_in_on_chip_1_buf24_ld162, lp_in_on_chip_1_buf24_ld161, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_19_res);
	return result;
}

struct lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_to_lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct lp_in_on_chip_1_buf24_FIFO_buf220_cache {
  // Reader addrs...
    // { rc44[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638] -> lp_in_on_chip_1_buf24_FIFO_buf220[lp_in_on_chip_1_buf24_reconstruct_lp3638, lp_in_on_chip_1_buf24_reconstruct_lp3637] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3637 <= 31 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3638 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_to_lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12_cache lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_to_lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12;
};



inline void lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_write(hw_uint<32> & lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28, lp_in_on_chip_1_buf24_FIFO_buf220_cache& lp_in_on_chip_1_buf24_FIFO_buf220, int root, int lp_in_on_chip_1_buf24_to_gp_5160_ld222, int lp_in_on_chip_1_buf24_to_gp_5160_ld221, int dynamic_address) {
  lp_in_on_chip_1_buf24_FIFO_buf220.lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_to_lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12.push(lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28);
}

inline hw_uint<32>  lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12_select(lp_in_on_chip_1_buf24_FIFO_buf220_cache& lp_in_on_chip_1_buf24_FIFO_buf220, int root, int lp_in_on_chip_1_buf24_reconstruct_lp3637, int lp_in_on_chip_1_buf24_reconstruct_lp3638, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12 read pattern: { rc44[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638] -> lp_in_on_chip_1_buf24_FIFO_buf220[lp_in_on_chip_1_buf24_reconstruct_lp3638, lp_in_on_chip_1_buf24_reconstruct_lp3637] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3637 <= 31 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp3638 <= 31 }
  // Read schedule : { rc44[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 32] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf24_FIFO_buf220223[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 31] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28 = lp_in_on_chip_1_buf24_FIFO_buf220.lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_to_lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_write
//	lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28
inline void lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_write, lp_in_on_chip_1_buf24_FIFO_buf220_cache& lp_in_on_chip_1_buf24_FIFO_buf220, int root, int lp_in_on_chip_1_buf24_to_gp_5160_ld222, int lp_in_on_chip_1_buf24_to_gp_5160_ld221, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_res = load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_write.extract<0, 31>();
	lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_write(lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_28_res, lp_in_on_chip_1_buf24_FIFO_buf220, root, lp_in_on_chip_1_buf24_to_gp_5160_ld222, lp_in_on_chip_1_buf24_to_gp_5160_ld221, dynamic_address);
}

// rc44_read
//	lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12
inline hw_uint<32> lp_in_on_chip_1_buf24_FIFO_buf220_rc44_read_bundle_read(lp_in_on_chip_1_buf24_FIFO_buf220_cache& lp_in_on_chip_1_buf24_FIFO_buf220, int root, int lp_in_on_chip_1_buf24_reconstruct_lp3637, int lp_in_on_chip_1_buf24_reconstruct_lp3638, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12_res = lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12_select(lp_in_on_chip_1_buf24_FIFO_buf220, root, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf24_FIFO_buf220_rc44_12_res);
	return result;
}

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39[lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166 <= 31 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25;
};



inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_write(hw_uint<32> & lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, int root, int lp_in_on_chip_1_buf24_reconstruct_lp3637, int lp_in_on_chip_1_buf24_reconstruct_lp3638, int dynamic_address) {
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25.push(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11);
}

inline hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25 read pattern: { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39[lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166 <= 31 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 33] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { rc44[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 32] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11 = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_read
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25
inline hw_uint<32> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25_res = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, root, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_25_res);
	return result;
}

// rc44_write
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11
inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_write_bundle_write(hw_uint<32>& rc44_write, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, int root, int lp_in_on_chip_1_buf24_reconstruct_lp3637, int lp_in_on_chip_1_buf24_reconstruct_lp3638, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_res = rc44_write.extract<0, 31>();
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_write(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_11_res, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, root, lp_in_on_chip_1_buf24_reconstruct_lp3637, lp_in_on_chip_1_buf24_reconstruct_lp3638, dynamic_address);
}

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 32
	// # of read delays: 33
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31
	fifo<hw_uint<32> , 32> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(31 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache {
  // Reader addrs...
    // { us52[root = 0, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224[o0, o1] : 0 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950 <= 63 and 0 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 <= 63 and -1 + us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 <= 2o0 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 and -1 + us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950 <= 2o1 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950 }
  // # of banks: 1
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1;
};



inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_write(hw_uint<32> & lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld225, int dynamic_address) {
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1.push(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26);
}

inline hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, int root, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1 read pattern: { us52[root = 0, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224[o0, o1] : 0 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950 <= 63 and 0 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 <= 63 and -1 + us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 <= 2o0 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 and -1 + us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950 <= 2o1 <= us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950 }
  // Read schedule : { us52[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 35] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26 = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1.peek(/* one reader or all rams */ ((-1 - us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950) % 2 == 0 && 61 - us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951 >= 0) ? ((31 - floord(2*us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, 4))) : 0);
  return value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_write
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26
inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_write, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld225, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_res = load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_write.extract<0, 31>();
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_write(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_26_res, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, root, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld225, dynamic_address);
}

// us52_read
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1
inline hw_uint<32> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, int root, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1_res = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, root, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_1_res);
	return result;
}

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49[lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170 <= 63 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169 <= 63 }
  // # of banks: 1
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21;
};



inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_write(hw_uint<32> & lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, int root, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, int dynamic_address) {
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21.push(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0);
}

inline hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21 read pattern: { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171[root = 0, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49[lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170] : 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170 <= 63 and 0 <= lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 36] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { us52[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 35] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0 = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_read
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21
inline hw_uint<32> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21_res = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, root, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_21_res);
	return result;
}

// us52_write
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0
inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_write_bundle_write(hw_uint<32>& us52_write, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, int root, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, int us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_res = us52_write.extract<0, 31>();
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_write(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_0_res, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, root, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950, us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951, dynamic_address);
}

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache {
  // Reader addrs...
    // { rc53[root = 0, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228[lp_in_on_chip_0_buf32_reconstruct_lp4547, lp_in_on_chip_0_buf32_reconstruct_lp4546] : 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4546 <= 63 and 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4547 <= 63 }
  // # of banks: 1
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10;
};



inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_write(hw_uint<32> & lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld229, int dynamic_address) {
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10.push(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22);
}

inline hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, int root, int lp_in_on_chip_0_buf32_reconstruct_lp4546, int lp_in_on_chip_0_buf32_reconstruct_lp4547, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10 read pattern: { rc53[root = 0, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547] -> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228[lp_in_on_chip_0_buf32_reconstruct_lp4547, lp_in_on_chip_0_buf32_reconstruct_lp4546] : 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4546 <= 63 and 0 <= lp_in_on_chip_0_buf32_reconstruct_lp4547 <= 63 }
  // Read schedule : { rc53[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 37] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22 = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228.lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_write
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22
inline void lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_write, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, int root, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230, int lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld229, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_res = load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_write.extract<0, 31>();
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_write(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_22_res, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, root, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld229, dynamic_address);
}

// rc53_read
//	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10
inline hw_uint<32> lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, int root, int lp_in_on_chip_0_buf32_reconstruct_lp4546, int lp_in_on_chip_0_buf32_reconstruct_lp4547, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10_res = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10_select(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, root, lp_in_on_chip_0_buf32_reconstruct_lp4546, lp_in_on_chip_0_buf32_reconstruct_lp4547, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_10_res);
	return result;
}

// Operation logic
inline void load_to_in_on_chip_FIFO_buf204207(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_0144, in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_0144
	auto in_on_chip_to_gp_0144_in_on_chip_to_gp_0144_ld205_c__in_on_chip_to_gp_0144_ld206_value = in_on_chip_to_gp_0144.read();
	// Produce: in_on_chip_FIFO_buf204
	in_on_chip_FIFO_buf204_load_to_in_on_chip_FIFO_buf204207_write_bundle_write(/* arg names */in_on_chip_to_gp_0144_in_on_chip_to_gp_0144_ld205_c__in_on_chip_to_gp_0144_ld206_value, in_on_chip_FIFO_buf204, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_16_merged108(in_on_chip_FIFO_buf204_cache& in_on_chip_FIFO_buf204, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf204
	auto in_on_chip_FIFO_buf204_2_m__lp_gp_in_on_chip_16__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in_on_chip_15__p___m_1_rp___p__1_p_3_value = in_on_chip_FIFO_buf204_gp_in_on_chip_16_merged108_read_bundle_read(in_on_chip_FIFO_buf204/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_16_cu106(in_on_chip_FIFO_buf204_2_m__lp_gp_in_on_chip_16__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in_on_chip_15__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in_on_chip_1_buf4
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged108_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_1_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_8120123(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_8120, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld121_c__gp_in_on_chip_1_buf4_ld122_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_8120123_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_8120
	gp_in_on_chip_1_buf4_to_gp_8120.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld121_c__gp_in_on_chip_1_buf4_ld122_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_4116119(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_4116, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld117_c__gp_in_on_chip_1_buf4_ld118_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_4116119_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_4116
	gp_in_on_chip_1_buf4_to_gp_4116.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld117_c__gp_in_on_chip_1_buf4_ld118_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_1112115(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1112, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld113_c__gp_in_on_chip_1_buf4_ld114_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1112115_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_1112
	gp_in_on_chip_1_buf4_to_gp_1112.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld113_c__gp_in_on_chip_1_buf4_ld114_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld114_gp_in_on_chip_1_buf4_ld118_gp_in_on_chip_1_buf4_ld122_in_on_chip_to_gp_0144_ld206_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_0144, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1112, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_4116, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_8120) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld114_gp_in_on_chip_1_buf4_ld118_gp_in_on_chip_1_buf4_ld122_in_on_chip_to_gp_0144_ld206__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_cache gp_in_on_chip_1_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf204_cache in_on_chip_FIFO_buf204;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_1_buf4_to_gp_8120123[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 6] : 0 < d1 <= 32 and 0 < d2 <= 32; gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32; load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66; load_to_gp_in_on_chip_1_buf4_to_gp_4116119[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 9] : 0 < d1 <= 32 and 0 < d2 <= 32; load_to_gp_in_on_chip_1_buf4_to_gp_1112115[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
//   { load_to_gp_in_on_chip_1_buf4_to_gp_8120123[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 6] : 0 < d1 <= 32 and 0 < d2 <= 32 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_8120123(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { gp_in_on_chip_16_merged108[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 5] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
// Condition for gp_in_on_chip_16_merged108(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_FIFO_buf204207[d0 = 0, d1, d2] -> [0, d1, d2, 4] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
// Condition for load_to_in_on_chip_FIFO_buf204207(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_to_gp_4116119[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 9] : 0 < d1 <= 32 and 0 < d2 <= 32 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_4116119(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_to_gp_1112115[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 8] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_1112115(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 66; c1 += 1)
	  for (int c2 = 0; c2 <= 66; c2 += 1) {
	    load_to_in_on_chip_FIFO_buf204207(in_on_chip_to_gp_0144 /* buf name */, in_on_chip_FIFO_buf204, 0, c1, c2);
	    if (c1 >= 2 && c2 >= 2 && c1 % 2 == 0 && c2 % 2 == 0) {
	      gp_in_on_chip_16_merged108(in_on_chip_FIFO_buf204 /* buf name */, gp_in_on_chip_1_buf4, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	      if (c1 >= 4 && c2 >= 4)
	        load_to_gp_in_on_chip_1_buf4_to_gp_8120123(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_8120, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	      load_to_gp_in_on_chip_1_buf4_to_gp_1112115(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_1112, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	      if (c1 >= 4 && c2 >= 4)
	        load_to_gp_in_on_chip_1_buf4_to_gp_4116119(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_4116, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf172175(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1112, gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_1112
	auto gp_in_on_chip_1_buf4_to_gp_1112_gp_in_on_chip_1_buf4_to_gp_1112_ld173_c__gp_in_on_chip_1_buf4_to_gp_1112_ld174_value = gp_in_on_chip_1_buf4_to_gp_1112.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf172
	gp_in_on_chip_1_buf4_FIFO_buf172_load_to_gp_in_on_chip_1_buf4_FIFO_buf172175_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_1112_gp_in_on_chip_1_buf4_to_gp_1112_ld173_c__gp_in_on_chip_1_buf4_to_gp_1112_ld174_value, gp_in_on_chip_1_buf4_FIFO_buf172, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_214_merged111(gp_in_on_chip_1_buf4_FIFO_buf172_cache& gp_in_on_chip_1_buf4_FIFO_buf172, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf172
	auto gp_in_on_chip_1_buf4_FIFO_buf172_2_m_gp_in_on_chip_214__p___m_1_p_1_c_____2_m_gp_in_on_chip_213__p__1_p_1_value = gp_in_on_chip_1_buf4_FIFO_buf172_gp_in_on_chip_214_merged111_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf172/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_214_cu109(gp_in_on_chip_1_buf4_FIFO_buf172_2_m_gp_in_on_chip_214__p___m_1_p_1_c_____2_m_gp_in_on_chip_213__p__1_p_1_value);
	// Produce: gp_in_on_chip_2_buf12
	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged111_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_2_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_9132135(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_9132, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld133_c__gp_in_on_chip_2_buf12_ld134_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_9132135_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_9132
	gp_in_on_chip_2_buf12_to_gp_9132.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld133_c__gp_in_on_chip_2_buf12_ld134_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_10128131(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_10128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld129_c__gp_in_on_chip_2_buf12_ld130_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_10128131_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_10128
	gp_in_on_chip_2_buf12_to_gp_10128.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld129_c__gp_in_on_chip_2_buf12_ld130_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_1112_ld174_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld130_gp_in_on_chip_2_buf12_ld134_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1112, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_10128, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_9132) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_1112_ld174_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld130_gp_in_on_chip_2_buf12_ld134__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf172_cache gp_in_on_chip_1_buf4_FIFO_buf172;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_cache gp_in_on_chip_2_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_2_buf12_to_gp_9132135[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 17] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_2_buf12_to_gp_10128131[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
//   { gp_in_on_chip_214_merged111[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 16] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for gp_in_on_chip_214_merged111(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_9132135[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 17] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_9132135(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_10128131[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_10128131(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf172175[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 14] : 0 <= d1 <= 32 and 0 <= d2 <= 32 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf172175(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))

	for (int c1 = 1; c1 <= 33; c1 += 1)
	  for (int c2 = 1; c2 <= 33; c2 += 1) {
	    load_to_gp_in_on_chip_1_buf4_FIFO_buf172175(gp_in_on_chip_1_buf4_to_gp_1112 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf172, 0, c1 - 1, c2 - 1);
	    if (c1 >= 3 && c2 >= 3 && (c1 + 1) % 2 == 0 && (c2 + 1) % 2 == 0) {
	      gp_in_on_chip_214_merged111(gp_in_on_chip_1_buf4_FIFO_buf172 /* buf name */, gp_in_on_chip_2_buf12, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	      load_to_gp_in_on_chip_2_buf12_to_gp_9132135(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_9132, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	      load_to_gp_in_on_chip_2_buf12_to_gp_10128131(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_10128, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf188191(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_10128, gp_in_on_chip_2_buf12_FIFO_buf188_cache& gp_in_on_chip_2_buf12_FIFO_buf188, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_10128
	auto gp_in_on_chip_2_buf12_to_gp_10128_gp_in_on_chip_2_buf12_to_gp_10128_ld189_c__gp_in_on_chip_2_buf12_to_gp_10128_ld190_value = gp_in_on_chip_2_buf12_to_gp_10128.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf188
	gp_in_on_chip_2_buf12_FIFO_buf188_load_to_gp_in_on_chip_2_buf12_FIFO_buf188191_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_10128_gp_in_on_chip_2_buf12_to_gp_10128_ld189_c__gp_in_on_chip_2_buf12_to_gp_10128_ld190_value, gp_in_on_chip_2_buf12_FIFO_buf188, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us43(gp_in_on_chip_2_buf12_FIFO_buf188_cache& gp_in_on_chip_2_buf12_FIFO_buf188, gp_in_on_chip_2_buf12_us40_cache& gp_in_on_chip_2_buf12_us40, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf188
	auto gp_in_on_chip_2_buf12_FIFO_buf188_floor_lp_us_gp_in_on_chip_2_buf1242__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_2_buf1241__div__2_rp__p_0_value = gp_in_on_chip_2_buf12_FIFO_buf188_us43_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf188/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us40
	gp_in_on_chip_2_buf12_us40_us43_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_FIFO_buf188_floor_lp_us_gp_in_on_chip_2_buf1242__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_2_buf1241__div__2_rp__p_0_value, gp_in_on_chip_2_buf12_us40, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143(gp_in_on_chip_2_buf12_us40_cache& gp_in_on_chip_2_buf12_us40, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us40_to_gp_5140, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us40
	auto gp_in_on_chip_2_buf12_us40_gp_in_on_chip_2_buf12_us40_ld141_c__gp_in_on_chip_2_buf12_us40_ld142_value = gp_in_on_chip_2_buf12_us40_load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143_read_bundle_read(gp_in_on_chip_2_buf12_us40/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us40_to_gp_5140
	gp_in_on_chip_2_buf12_us40_to_gp_5140.write(gp_in_on_chip_2_buf12_us40_gp_in_on_chip_2_buf12_us40_ld141_c__gp_in_on_chip_2_buf12_us40_ld142_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_10128_ld190_gp_in_on_chip_2_buf12_us40_ld142_us_gp_in_on_chip_2_buf1241_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_10128, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us40_to_gp_5140) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_10128_ld190_gp_in_on_chip_2_buf12_us40_ld142_us_gp_in_on_chip_2_buf1241__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf188_cache gp_in_on_chip_2_buf12_FIFO_buf188;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us40_cache gp_in_on_chip_2_buf12_us40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us43[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 26] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_2_buf12_FIFO_buf188191[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 22] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
//   { us43[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for us43(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 26] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf188191[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 22] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf188191(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))

	for (int c1 = 3; c1 <= 34; c1 += 1)
	  for (int c2 = 3; c2 <= 34; c2 += 1) {
	    if ((c1 + 1) % 2 == 0 && (c2 + 1) % 2 == 0)
	      load_to_gp_in_on_chip_2_buf12_FIFO_buf188191(gp_in_on_chip_2_buf12_to_gp_10128 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf188, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	    us43(gp_in_on_chip_2_buf12_FIFO_buf188 /* buf name */, gp_in_on_chip_2_buf12_us40, 0, c1 - 3, c2 - 3);
	    load_to_gp_in_on_chip_2_buf12_us40_to_gp_5140143(gp_in_on_chip_2_buf12_us40 /* buf name */, gp_in_on_chip_2_buf12_us40_to_gp_5140, 0, c1 - 3, c2 - 3);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164
	auto lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld225_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226_value = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164.read();
	// Produce: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227_write_bundle_write(/* arg names */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld225_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226_value, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us52(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224
	auto lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_floor_lp_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950__div__2_rp__p_0_value = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_us52_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_us52_write_bundle_write(/* arg names */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_floor_lp_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3951__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950__div__2_rp__p_0_value, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49
	auto lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170_value = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168.write(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld169_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 36] : 0 <= d1 <= 63 and 0 <= d2 <= 63; us52[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 35] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
//   { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 36] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { us52[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 35] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for us52(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))

	for (int c1 = 6; c1 <= 69; c1 += 1)
	  for (int c2 = 6; c2 <= 69; c2 += 1) {
	    if (c1 % 2 == 0 && c2 % 2 == 0)
	      load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224227(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224, 0, (c1 / 2) - 3, (c2 / 2) - 3);
	    us52(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_FIFO_buf224 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49, 0, c1 - 6, c2 - 6);
	    load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168171(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168, 0, c1 - 6, c2 - 6);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us28_to_gp_2124, gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache& gp_in_on_chip_1_buf4_us28_FIFO_buf184, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us28_to_gp_2124
	auto gp_in_on_chip_1_buf4_us28_to_gp_2124_gp_in_on_chip_1_buf4_us28_to_gp_2124_ld185_c__gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186_value = gp_in_on_chip_1_buf4_us28_to_gp_2124.read();
	// Produce: gp_in_on_chip_1_buf4_us28_FIFO_buf184
	gp_in_on_chip_1_buf4_us28_FIFO_buf184_load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_us28_to_gp_2124_gp_in_on_chip_1_buf4_us28_to_gp_2124_ld185_c__gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186_value, gp_in_on_chip_1_buf4_us28_FIFO_buf184, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_FIFO_buf208211(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_2148, in_on_chip_FIFO_buf208_cache& in_on_chip_FIFO_buf208, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_2148
	auto in_on_chip_to_gp_2148_in_on_chip_to_gp_2148_ld209_c__in_on_chip_to_gp_2148_ld210_value = in_on_chip_to_gp_2148.read();
	// Produce: in_on_chip_FIFO_buf208
	in_on_chip_FIFO_buf208_load_to_in_on_chip_FIFO_buf208211_write_bundle_write(/* arg names */in_on_chip_to_gp_2148_in_on_chip_to_gp_2148_ld209_c__in_on_chip_to_gp_2148_ld210_value, in_on_chip_FIFO_buf208, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff35(in_on_chip_FIFO_buf208_cache& in_on_chip_FIFO_buf208, gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache& gp_in_on_chip_1_buf4_us28_FIFO_buf184, lp_in_on_chip_0_buf32_cache& lp_in_on_chip_0_buf32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf208
	auto in_on_chip_FIFO_buf208_lp_in_on_chip_034_p_3_c___lp_in_on_chip_033_p_3_value = in_on_chip_FIFO_buf208_diff35_read_bundle_read(in_on_chip_FIFO_buf208/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_1_buf4_us28_FIFO_buf184
	auto gp_in_on_chip_1_buf4_us28_FIFO_buf184_lp_in_on_chip_034_p_0_c___lp_in_on_chip_033_p_0_value = gp_in_on_chip_1_buf4_us28_FIFO_buf184_diff35_read_bundle_read(gp_in_on_chip_1_buf4_us28_FIFO_buf184/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(in_on_chip_FIFO_buf208_lp_in_on_chip_034_p_3_c___lp_in_on_chip_033_p_3_value, gp_in_on_chip_1_buf4_us28_FIFO_buf184_lp_in_on_chip_034_p_0_c___lp_in_on_chip_033_p_0_value);
	// Produce: lp_in_on_chip_0_buf32
	lp_in_on_chip_0_buf32_diff35_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf32, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf32_to_gp_3152155(lp_in_on_chip_0_buf32_cache& lp_in_on_chip_0_buf32, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf32_to_gp_3152, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf32
	auto lp_in_on_chip_0_buf32_lp_in_on_chip_0_buf32_ld153_c__lp_in_on_chip_0_buf32_ld154_value = lp_in_on_chip_0_buf32_load_to_lp_in_on_chip_0_buf32_to_gp_3152155_read_bundle_read(lp_in_on_chip_0_buf32/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf32_to_gp_3152
	lp_in_on_chip_0_buf32_to_gp_3152.write(lp_in_on_chip_0_buf32_lp_in_on_chip_0_buf32_ld153_c__lp_in_on_chip_0_buf32_ld154_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186_in_on_chip_to_gp_2148_ld210_lp_in_on_chip_033_lp_in_on_chip_0_buf32_ld154_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us28_to_gp_2124, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_2148, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf32_to_gp_3152) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186_in_on_chip_to_gp_2148_ld210_lp_in_on_chip_033_lp_in_on_chip_0_buf32_ld154__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us28_FIFO_buf184_cache gp_in_on_chip_1_buf4_us28_FIFO_buf184;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf208_cache in_on_chip_FIFO_buf208;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf32_cache lp_in_on_chip_0_buf32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_0_buf32_to_gp_3152155[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_in_on_chip_FIFO_buf208211[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : 3 <= d1 <= 66 and 3 <= d2 <= 66; diff35[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 13] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_lp_in_on_chip_0_buf32_to_gp_3152155[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf32_to_gp_3152155(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_FIFO_buf208211[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : 3 <= d1 <= 66 and 3 <= d2 <= 66 }
// Condition for load_to_in_on_chip_FIFO_buf208211(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { diff35[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for diff35(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 13] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))

	for (int c1 = 4; c1 <= 67; c1 += 1)
	  for (int c2 = 4; c2 <= 67; c2 += 1) {
	    load_to_in_on_chip_FIFO_buf208211(in_on_chip_to_gp_2148 /* buf name */, in_on_chip_FIFO_buf208, 0, c1 - 1, c2 - 1);
	    load_to_gp_in_on_chip_1_buf4_us28_FIFO_buf184187(gp_in_on_chip_1_buf4_us28_to_gp_2124 /* buf name */, gp_in_on_chip_1_buf4_us28_FIFO_buf184, 0, c1 - 4, c2 - 4);
	    diff35(in_on_chip_FIFO_buf208 /* buf name */, gp_in_on_chip_1_buf4_us28_FIFO_buf184 /* buf name */, lp_in_on_chip_0_buf32, 0, c1 - 4, c2 - 4);
	    load_to_lp_in_on_chip_0_buf32_to_gp_3152155(lp_in_on_chip_0_buf32 /* buf name */, lp_in_on_chip_0_buf32_to_gp_3152, 0, c1 - 4, c2 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf32_FIFO_buf212215(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf32_to_gp_3152, lp_in_on_chip_0_buf32_FIFO_buf212_cache& lp_in_on_chip_0_buf32_FIFO_buf212, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf32_to_gp_3152
	auto lp_in_on_chip_0_buf32_to_gp_3152_lp_in_on_chip_0_buf32_to_gp_3152_ld213_c__lp_in_on_chip_0_buf32_to_gp_3152_ld214_value = lp_in_on_chip_0_buf32_to_gp_3152.read();
	// Produce: lp_in_on_chip_0_buf32_FIFO_buf212
	lp_in_on_chip_0_buf32_FIFO_buf212_load_to_lp_in_on_chip_0_buf32_FIFO_buf212215_write_bundle_write(/* arg names */lp_in_on_chip_0_buf32_to_gp_3152_lp_in_on_chip_0_buf32_to_gp_3152_ld213_c__lp_in_on_chip_0_buf32_to_gp_3152_ld214_value, lp_in_on_chip_0_buf32_FIFO_buf212, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168
	auto lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld229_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230_value = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168.read();
	// Produce: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231_write_bundle_write(/* arg names */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld229_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230_value, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc53(lp_in_on_chip_0_buf32_FIFO_buf212_cache& lp_in_on_chip_0_buf32_FIFO_buf212, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf32_FIFO_buf212
	auto lp_in_on_chip_0_buf32_FIFO_buf212_lp_in_on_chip_0_buf32_reconstruct_lp4547_p_0_c___lp_in_on_chip_0_buf32_reconstruct_lp4546_p_0_value = lp_in_on_chip_0_buf32_FIFO_buf212_rc53_read_bundle_read(lp_in_on_chip_0_buf32_FIFO_buf212/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228
	auto lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_lp_in_on_chip_0_buf32_reconstruct_lp4547_p_0_c___lp_in_on_chip_0_buf32_reconstruct_lp4546_p_0_value = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_rc53_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_0_buf32_FIFO_buf212_lp_in_on_chip_0_buf32_reconstruct_lp4547_p_0_c___lp_in_on_chip_0_buf32_reconstruct_lp4546_p_0_value, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_lp_in_on_chip_0_buf32_reconstruct_lp4547_p_0_c___lp_in_on_chip_0_buf32_reconstruct_lp4546_p_0_value);
	// Produce: lp_in_on_chip_0_buf32_reconstruct_lp45_buf48
	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_rc53_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf32_reconstruct_lp45_buf48
	auto lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157_c__lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158_value = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159_read_bundle_read(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156
	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156.write(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld157_c__lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_0_buf32_reconstruct_lp4546_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158_lp_in_on_chip_0_buf32_to_gp_3152_ld214_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf32_to_gp_3152, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_0_buf32_reconstruct_lp4546_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158_lp_in_on_chip_0_buf32_to_gp_3152_ld214_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf32_FIFO_buf212_cache lp_in_on_chip_0_buf32_FIFO_buf212;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_cache lp_in_on_chip_0_buf32_reconstruct_lp45_buf48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 39] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 37] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_0_buf32_FIFO_buf212215[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 21] : 0 <= d1 <= 63 and 0 <= d2 <= 63; rc53[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 39] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 37] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_0_buf32_FIFO_buf212215[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 21] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf32_FIFO_buf212215(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { rc53[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for rc53(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))

	for (int c1 = 6; c1 <= 69; c1 += 1)
	  for (int c2 = 6; c2 <= 69; c2 += 1) {
	    load_to_lp_in_on_chip_0_buf32_FIFO_buf212215(lp_in_on_chip_0_buf32_to_gp_3152 /* buf name */, lp_in_on_chip_0_buf32_FIFO_buf212, 0, c1 - 6, c2 - 6);
	    load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228231(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228, 0, c1 - 6, c2 - 6);
	    rc53(lp_in_on_chip_0_buf32_FIFO_buf212 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_FIFO_buf228 /* buf name */, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48, 0, c1 - 6, c2 - 6);
	    load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156159(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48 /* buf name */, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156, 0, c1 - 6, c2 - 6);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf176179(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_4116, gp_in_on_chip_1_buf4_FIFO_buf176_cache& gp_in_on_chip_1_buf4_FIFO_buf176, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_4116
	auto gp_in_on_chip_1_buf4_to_gp_4116_gp_in_on_chip_1_buf4_to_gp_4116_ld177_c__gp_in_on_chip_1_buf4_to_gp_4116_ld178_value = gp_in_on_chip_1_buf4_to_gp_4116.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf176
	gp_in_on_chip_1_buf4_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_FIFO_buf176179_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_4116_gp_in_on_chip_1_buf4_to_gp_4116_ld177_c__gp_in_on_chip_1_buf4_to_gp_4116_ld178_value, gp_in_on_chip_1_buf4_FIFO_buf176, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us20_to_gp_4136, gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache& gp_in_on_chip_2_buf12_us20_FIFO_buf196, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us20_to_gp_4136
	auto gp_in_on_chip_2_buf12_us20_to_gp_4136_gp_in_on_chip_2_buf12_us20_to_gp_4136_ld197_c__gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198_value = gp_in_on_chip_2_buf12_us20_to_gp_4136.read();
	// Produce: gp_in_on_chip_2_buf12_us20_FIFO_buf196
	gp_in_on_chip_2_buf12_us20_FIFO_buf196_load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_us20_to_gp_4136_gp_in_on_chip_2_buf12_us20_to_gp_4136_ld197_c__gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198_value, gp_in_on_chip_2_buf12_us20_FIFO_buf196, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff27(gp_in_on_chip_1_buf4_FIFO_buf176_cache& gp_in_on_chip_1_buf4_FIFO_buf176, gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache& gp_in_on_chip_2_buf12_us20_FIFO_buf196, lp_in_on_chip_1_buf24_cache& lp_in_on_chip_1_buf24, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf176
	auto gp_in_on_chip_1_buf4_FIFO_buf176_lp_in_on_chip_126_p_1_c___lp_in_on_chip_125_p_1_value = gp_in_on_chip_1_buf4_FIFO_buf176_diff27_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf176/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_2_buf12_us20_FIFO_buf196
	auto gp_in_on_chip_2_buf12_us20_FIFO_buf196_lp_in_on_chip_126_p_0_c___lp_in_on_chip_125_p_0_value = gp_in_on_chip_2_buf12_us20_FIFO_buf196_diff27_read_bundle_read(gp_in_on_chip_2_buf12_us20_FIFO_buf196/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in_on_chip_1_buf4_FIFO_buf176_lp_in_on_chip_126_p_1_c___lp_in_on_chip_125_p_1_value, gp_in_on_chip_2_buf12_us20_FIFO_buf196_lp_in_on_chip_126_p_0_c___lp_in_on_chip_125_p_0_value);
	// Produce: lp_in_on_chip_1_buf24
	lp_in_on_chip_1_buf24_diff27_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_1_buf24, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf24_to_gp_5160163(lp_in_on_chip_1_buf24_cache& lp_in_on_chip_1_buf24, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf24_to_gp_5160, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24
	auto lp_in_on_chip_1_buf24_lp_in_on_chip_1_buf24_ld161_c__lp_in_on_chip_1_buf24_ld162_value = lp_in_on_chip_1_buf24_load_to_lp_in_on_chip_1_buf24_to_gp_5160163_read_bundle_read(lp_in_on_chip_1_buf24/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf24_to_gp_5160
	lp_in_on_chip_1_buf24_to_gp_5160.write(lp_in_on_chip_1_buf24_lp_in_on_chip_1_buf24_ld161_c__lp_in_on_chip_1_buf24_ld162_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_4116_ld178_gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198_lp_in_on_chip_125_lp_in_on_chip_1_buf24_ld162_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_4116, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us20_to_gp_4136, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf24_to_gp_5160) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_4116_ld178_gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198_lp_in_on_chip_125_lp_in_on_chip_1_buf24_ld162__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf176_cache gp_in_on_chip_1_buf4_FIFO_buf176;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us20_FIFO_buf196_cache gp_in_on_chip_2_buf12_us20_FIFO_buf196;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf24_cache lp_in_on_chip_1_buf24;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 28] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_lp_in_on_chip_1_buf24_to_gp_5160163[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 30] : 0 <= d1 <= 31 and 0 <= d2 <= 31; diff27[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 29] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_1_buf4_FIFO_buf176179[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 12] : 0 < d1 <= 32 and 0 < d2 <= 32 }
//   { load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 28] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf24_to_gp_5160163[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 30] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf24_to_gp_5160163(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { diff27[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 29] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for diff27(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf176179[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 12] : 0 < d1 <= 32 and 0 < d2 <= 32 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf176179(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))

	for (int c1 = 3; c1 <= 34; c1 += 1)
	  for (int c2 = 3; c2 <= 34; c2 += 1) {
	    load_to_gp_in_on_chip_1_buf4_FIFO_buf176179(gp_in_on_chip_1_buf4_to_gp_4116 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf176, 0, c1 - 2, c2 - 2);
	    load_to_gp_in_on_chip_2_buf12_us20_FIFO_buf196199(gp_in_on_chip_2_buf12_us20_to_gp_4136 /* buf name */, gp_in_on_chip_2_buf12_us20_FIFO_buf196, 0, c1 - 3, c2 - 3);
	    diff27(gp_in_on_chip_1_buf4_FIFO_buf176 /* buf name */, gp_in_on_chip_2_buf12_us20_FIFO_buf196 /* buf name */, lp_in_on_chip_1_buf24, 0, c1 - 3, c2 - 3);
	    load_to_lp_in_on_chip_1_buf24_to_gp_5160163(lp_in_on_chip_1_buf24 /* buf name */, lp_in_on_chip_1_buf24_to_gp_5160, 0, c1 - 3, c2 - 3);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us40_to_gp_5140, gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us40_FIFO_buf200, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us40_to_gp_5140
	auto gp_in_on_chip_2_buf12_us40_to_gp_5140_gp_in_on_chip_2_buf12_us40_to_gp_5140_ld201_c__gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202_value = gp_in_on_chip_2_buf12_us40_to_gp_5140.read();
	// Produce: gp_in_on_chip_2_buf12_us40_FIFO_buf200
	gp_in_on_chip_2_buf12_us40_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_us40_to_gp_5140_gp_in_on_chip_2_buf12_us40_to_gp_5140_ld201_c__gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202_value, gp_in_on_chip_2_buf12_us40_FIFO_buf200, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf24_FIFO_buf220223(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf24_to_gp_5160, lp_in_on_chip_1_buf24_FIFO_buf220_cache& lp_in_on_chip_1_buf24_FIFO_buf220, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_to_gp_5160
	auto lp_in_on_chip_1_buf24_to_gp_5160_lp_in_on_chip_1_buf24_to_gp_5160_ld221_c__lp_in_on_chip_1_buf24_to_gp_5160_ld222_value = lp_in_on_chip_1_buf24_to_gp_5160.read();
	// Produce: lp_in_on_chip_1_buf24_FIFO_buf220
	lp_in_on_chip_1_buf24_FIFO_buf220_load_to_lp_in_on_chip_1_buf24_FIFO_buf220223_write_bundle_write(/* arg names */lp_in_on_chip_1_buf24_to_gp_5160_lp_in_on_chip_1_buf24_to_gp_5160_ld221_c__lp_in_on_chip_1_buf24_to_gp_5160_ld222_value, lp_in_on_chip_1_buf24_FIFO_buf220, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc44(lp_in_on_chip_1_buf24_FIFO_buf220_cache& lp_in_on_chip_1_buf24_FIFO_buf220, gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us40_FIFO_buf200, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_FIFO_buf220
	auto lp_in_on_chip_1_buf24_FIFO_buf220_lp_in_on_chip_1_buf24_reconstruct_lp3638_p_0_c___lp_in_on_chip_1_buf24_reconstruct_lp3637_p_0_value = lp_in_on_chip_1_buf24_FIFO_buf220_rc44_read_bundle_read(lp_in_on_chip_1_buf24_FIFO_buf220/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_2_buf12_us40_FIFO_buf200
	auto gp_in_on_chip_2_buf12_us40_FIFO_buf200_lp_in_on_chip_1_buf24_reconstruct_lp3638_p_0_c___lp_in_on_chip_1_buf24_reconstruct_lp3637_p_0_value = gp_in_on_chip_2_buf12_us40_FIFO_buf200_rc44_read_bundle_read(gp_in_on_chip_2_buf12_us40_FIFO_buf200/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_1_buf24_FIFO_buf220_lp_in_on_chip_1_buf24_reconstruct_lp3638_p_0_c___lp_in_on_chip_1_buf24_reconstruct_lp3637_p_0_value, gp_in_on_chip_2_buf12_us40_FIFO_buf200_lp_in_on_chip_1_buf24_reconstruct_lp3638_p_0_c___lp_in_on_chip_1_buf24_reconstruct_lp3637_p_0_value);
	// Produce: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_rc44_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache& lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39
	auto lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166_value = lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167_read_bundle_read(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164
	lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164.write(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld165_c__lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202_lp_in_on_chip_1_buf24_reconstruct_lp3637_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166_lp_in_on_chip_1_buf24_to_gp_5160_ld222_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us40_to_gp_5140, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf24_to_gp_5160, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202_lp_in_on_chip_1_buf24_reconstruct_lp3637_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166_lp_in_on_chip_1_buf24_to_gp_5160_ld222__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us40_FIFO_buf200_cache gp_in_on_chip_2_buf12_us40_FIFO_buf200;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf24_FIFO_buf220_cache lp_in_on_chip_1_buf24_FIFO_buf220;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_cache lp_in_on_chip_1_buf24_reconstruct_lp36_buf39;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_1_buf24_FIFO_buf220223[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 31] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 33] : 0 <= d1 <= 31 and 0 <= d2 <= 31; rc44[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 32] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 27] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
//   { load_to_lp_in_on_chip_1_buf24_FIFO_buf220223[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 31] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf24_FIFO_buf220223(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 33] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { rc44[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 32] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for rc44(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 27] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))

	for (int c1 = 3; c1 <= 34; c1 += 1)
	  for (int c2 = 3; c2 <= 34; c2 += 1) {
	    load_to_gp_in_on_chip_2_buf12_us40_FIFO_buf200203(gp_in_on_chip_2_buf12_us40_to_gp_5140 /* buf name */, gp_in_on_chip_2_buf12_us40_FIFO_buf200, 0, c1 - 3, c2 - 3);
	    load_to_lp_in_on_chip_1_buf24_FIFO_buf220223(lp_in_on_chip_1_buf24_to_gp_5160 /* buf name */, lp_in_on_chip_1_buf24_FIFO_buf220, 0, c1 - 3, c2 - 3);
	    rc44(lp_in_on_chip_1_buf24_FIFO_buf220 /* buf name */, gp_in_on_chip_2_buf12_us40_FIFO_buf200 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39, 0, c1 - 3, c2 - 3);
	    load_to_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164167(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39 /* buf name */, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164, 0, c1 - 3, c2 - 3);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_on_chip_cache& in_on_chip, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_pw_math_in02__p___m_3_rp__p_3_c______lp_pw_math_in01__p___m_3_rp__p_3_value = in.read();
	auto compute_result = id(in__lp_pw_math_in02__p___m_3_rp__p_3_c______lp_pw_math_in01__p___m_3_rp__p_3_value);
	// Produce: in_on_chip
	in_on_chip_pw_math_in03_write_bundle_write(/* arg names */compute_result, in_on_chip, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_to_gp_2148151(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_2148, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld149_c__in_on_chip_ld150_value = in_on_chip_load_to_in_on_chip_to_gp_2148151_read_bundle_read(in_on_chip/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_2148
	in_on_chip_to_gp_2148.write(in_on_chip_in_on_chip_ld149_c__in_on_chip_ld150_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_to_gp_0144147(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_0144, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld145_c__in_on_chip_ld146_value = in_on_chip_load_to_in_on_chip_to_gp_0144147_read_bundle_read(in_on_chip/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_0144
	in_on_chip_to_gp_0144.write(in_on_chip_in_on_chip_ld145_c__in_on_chip_ld146_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_on_chip_ld146_in_on_chip_ld150_pw_math_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_0144, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_2148) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_on_chip_ld146_in_on_chip_ld150_pw_math_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_on_chip_cache in_on_chip;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_in_on_chip_to_gp_0144147[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 66 and 0 <= d2 <= 66; load_to_in_on_chip_to_gp_2148151[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : 3 <= d1 <= 66 and 3 <= d2 <= 66; pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
//   { load_to_in_on_chip_to_gp_0144147[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
// Condition for load_to_in_on_chip_to_gp_0144147(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_to_gp_2148151[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : 3 <= d1 <= 66 and 3 <= d2 <= 66 }
// Condition for load_to_in_on_chip_to_gp_2148151(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 66 and 0 <= d2 <= 66 }
// Condition for pw_math_in03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))

	for (int c1 = 0; c1 <= 67; c1 += 1) {
	  if (c1 >= 4) {
	    if (c1 <= 66)
	      for (int c2 = 0; c2 <= 3; c2 += 1) {
	        pw_math_in03(in /* buf name */, in_on_chip, 0, c1, c2);
	        load_to_in_on_chip_to_gp_0144147(in_on_chip /* buf name */, in_on_chip_to_gp_0144, 0, c1, c2);
	      }
	    for (int c2 = 4; c2 <= 67; c2 += 1) {
	      if (c1 <= 66 && c2 <= 66) {
	        pw_math_in03(in /* buf name */, in_on_chip, 0, c1, c2);
	        load_to_in_on_chip_to_gp_0144147(in_on_chip /* buf name */, in_on_chip_to_gp_0144, 0, c1, c2);
	      }
	      load_to_in_on_chip_to_gp_2148151(in_on_chip /* buf name */, in_on_chip_to_gp_2148, 0, c1 - 1, c2 - 1);
	    }
	  } else {
	    for (int c2 = 0; c2 <= 66; c2 += 1) {
	      pw_math_in03(in /* buf name */, in_on_chip, 0, c1, c2);
	      load_to_in_on_chip_to_gp_0144147(in_on_chip /* buf name */, in_on_chip_to_gp_0144, 0, c1, c2);
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156
	auto lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld217_c__lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218_value = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156.read();
	// Produce: lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216
	lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219_write_bundle_write(/* arg names */lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld217_c__lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218_value, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache& lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216
	auto lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456_p_0_c___pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455_p_0_value = lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_read_bundle_read(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456_p_0_c___pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216_cache lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 40] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 40] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((69 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((69 + -1*i2)) >= 0)))

	for (int c1 = 6; c1 <= 69; c1 += 1)
	  for (int c2 = 6; c2 <= 69; c2 += 1) {
	    load_to_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216219(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156 /* buf name */, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216, 0, c1 - 6, c2 - 6);
	    pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_FIFO_buf216 /* buf name */, out, 0, c1 - 6, c2 - 6);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf180183(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_8120, gp_in_on_chip_1_buf4_FIFO_buf180_cache& gp_in_on_chip_1_buf4_FIFO_buf180, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_8120
	auto gp_in_on_chip_1_buf4_to_gp_8120_gp_in_on_chip_1_buf4_to_gp_8120_ld181_c__gp_in_on_chip_1_buf4_to_gp_8120_ld182_value = gp_in_on_chip_1_buf4_to_gp_8120.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf180
	gp_in_on_chip_1_buf4_FIFO_buf180_load_to_gp_in_on_chip_1_buf4_FIFO_buf180183_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_8120_gp_in_on_chip_1_buf4_to_gp_8120_ld181_c__gp_in_on_chip_1_buf4_to_gp_8120_ld182_value, gp_in_on_chip_1_buf4_FIFO_buf180, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us31(gp_in_on_chip_1_buf4_FIFO_buf180_cache& gp_in_on_chip_1_buf4_FIFO_buf180, gp_in_on_chip_1_buf4_us28_cache& gp_in_on_chip_1_buf4_us28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf180
	auto gp_in_on_chip_1_buf4_FIFO_buf180_floor_lp_us_gp_in_on_chip_1_buf430__div__2_rp__p_1_c___floor_lp_us_gp_in_on_chip_1_buf429__div__2_rp__p_1_value = gp_in_on_chip_1_buf4_FIFO_buf180_us31_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf180/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us28
	gp_in_on_chip_1_buf4_us28_us31_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_FIFO_buf180_floor_lp_us_gp_in_on_chip_1_buf430__div__2_rp__p_1_c___floor_lp_us_gp_in_on_chip_1_buf429__div__2_rp__p_1_value, gp_in_on_chip_1_buf4_us28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127(gp_in_on_chip_1_buf4_us28_cache& gp_in_on_chip_1_buf4_us28, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us28_to_gp_2124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us28
	auto gp_in_on_chip_1_buf4_us28_gp_in_on_chip_1_buf4_us28_ld125_c__gp_in_on_chip_1_buf4_us28_ld126_value = gp_in_on_chip_1_buf4_us28_load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127_read_bundle_read(gp_in_on_chip_1_buf4_us28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us28_to_gp_2124
	gp_in_on_chip_1_buf4_us28_to_gp_2124.write(gp_in_on_chip_1_buf4_us28_gp_in_on_chip_1_buf4_us28_ld125_c__gp_in_on_chip_1_buf4_us28_ld126_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_8120_ld182_gp_in_on_chip_1_buf4_us28_ld126_us_gp_in_on_chip_1_buf429_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_8120, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us28_to_gp_2124) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_8120_ld182_gp_in_on_chip_1_buf4_us28_ld126_us_gp_in_on_chip_1_buf429__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf180_cache gp_in_on_chip_1_buf4_FIFO_buf180;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us28_cache gp_in_on_chip_1_buf4_us28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us31[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 11] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gp_in_on_chip_1_buf4_FIFO_buf180183[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 7] : 0 < d1 <= 32 and 0 < d2 <= 32 }
//   { us31[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for us31(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 11] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((67 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((67 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf180183[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 7] : 0 < d1 <= 32 and 0 < d2 <= 32 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf180183(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))

	for (int c1 = 4; c1 <= 67; c1 += 1)
	  for (int c2 = 4; c2 <= 67; c2 += 1) {
	    if (c1 % 2 == 0 && c2 % 2 == 0)
	      load_to_gp_in_on_chip_1_buf4_FIFO_buf180183(gp_in_on_chip_1_buf4_to_gp_8120 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf180, 0, (c1 / 2) - 1, (c2 / 2) - 1);
	    us31(gp_in_on_chip_1_buf4_FIFO_buf180 /* buf name */, gp_in_on_chip_1_buf4_us28, 0, c1 - 4, c2 - 4);
	    load_to_gp_in_on_chip_1_buf4_us28_to_gp_2124127(gp_in_on_chip_1_buf4_us28 /* buf name */, gp_in_on_chip_1_buf4_us28_to_gp_2124, 0, c1 - 4, c2 - 4);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf192195(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_9132, gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_9132
	auto gp_in_on_chip_2_buf12_to_gp_9132_gp_in_on_chip_2_buf12_to_gp_9132_ld193_c__gp_in_on_chip_2_buf12_to_gp_9132_ld194_value = gp_in_on_chip_2_buf12_to_gp_9132.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf192
	gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_9132_gp_in_on_chip_2_buf12_to_gp_9132_ld193_c__gp_in_on_chip_2_buf12_to_gp_9132_ld194_value, gp_in_on_chip_2_buf12_FIFO_buf192, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us23(gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, gp_in_on_chip_2_buf12_us20_cache& gp_in_on_chip_2_buf12_us20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf192
	auto gp_in_on_chip_2_buf12_FIFO_buf192_floor_lp_us_gp_in_on_chip_2_buf1222__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_2_buf1221__div__2_rp__p_0_value = gp_in_on_chip_2_buf12_FIFO_buf192_us23_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf192/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us20
	gp_in_on_chip_2_buf12_us20_us23_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_FIFO_buf192_floor_lp_us_gp_in_on_chip_2_buf1222__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_2_buf1221__div__2_rp__p_0_value, gp_in_on_chip_2_buf12_us20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139(gp_in_on_chip_2_buf12_us20_cache& gp_in_on_chip_2_buf12_us20, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us20_to_gp_4136, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us20
	auto gp_in_on_chip_2_buf12_us20_gp_in_on_chip_2_buf12_us20_ld137_c__gp_in_on_chip_2_buf12_us20_ld138_value = gp_in_on_chip_2_buf12_us20_load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139_read_bundle_read(gp_in_on_chip_2_buf12_us20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us20_to_gp_4136
	gp_in_on_chip_2_buf12_us20_to_gp_4136.write(gp_in_on_chip_2_buf12_us20_gp_in_on_chip_2_buf12_us20_ld137_c__gp_in_on_chip_2_buf12_us20_ld138_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_9132_ld194_gp_in_on_chip_2_buf12_us20_ld138_us_gp_in_on_chip_2_buf1221_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_9132, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us20_to_gp_4136) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_9132_ld194_gp_in_on_chip_2_buf12_us20_ld138_us_gp_in_on_chip_2_buf1221__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf192_cache gp_in_on_chip_2_buf12_FIFO_buf192;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us20_cache gp_in_on_chip_2_buf12_us20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us23[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 23] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 25] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_2_buf12_FIFO_buf192195[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
//   { us23[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 23] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for us23(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139[d0 = 0, d1, d2] -> [0, 6 + 2d1, 6 + 2d2, 25] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((68 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf192195[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf192195(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((66 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((66 + -1*i2)) >= 0)))

	for (int c1 = 3; c1 <= 34; c1 += 1)
	  for (int c2 = 3; c2 <= 34; c2 += 1) {
	    if ((c1 + 1) % 2 == 0 && (c2 + 1) % 2 == 0)
	      load_to_gp_in_on_chip_2_buf12_FIFO_buf192195(gp_in_on_chip_2_buf12_to_gp_9132 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf192, 0, (c1 - 3) / 2, (c2 - 3) / 2);
	    us23(gp_in_on_chip_2_buf12_FIFO_buf192 /* buf name */, gp_in_on_chip_2_buf12_us20, 0, c1 - 3, c2 - 3);
	    load_to_gp_in_on_chip_2_buf12_us20_to_gp_4136139(gp_in_on_chip_2_buf12_us20 /* buf name */, gp_in_on_chip_2_buf12_us20_to_gp_4136, 0, c1 - 3, c2 - 3);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void pyr_blndd2048_ii1(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pyr_blndd2048_ii1_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > in_on_chip_to_gp_0144("in_on_chip_to_gp_0144");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_0144.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_1112("gp_in_on_chip_1_buf4_to_gp_1112");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_1112.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_4116("gp_in_on_chip_1_buf4_to_gp_4116");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_4116.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_8120("gp_in_on_chip_1_buf4_to_gp_8120");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_8120.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_10128("gp_in_on_chip_2_buf12_to_gp_10128");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_10128.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_9132("gp_in_on_chip_2_buf12_to_gp_9132");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_9132.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_us40_to_gp_5140("gp_in_on_chip_2_buf12_us40_to_gp_5140");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_us40_to_gp_5140.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164("lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168("lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_us28_to_gp_2124("gp_in_on_chip_1_buf4_us28_to_gp_2124");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_us28_to_gp_2124.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > in_on_chip_to_gp_2148("in_on_chip_to_gp_2148");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_2148.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf32_to_gp_3152("lp_in_on_chip_0_buf32_to_gp_3152");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf32_to_gp_3152.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156("lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_us20_to_gp_4136("gp_in_on_chip_2_buf12_us20_to_gp_4136");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_us20_to_gp_4136.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf24_to_gp_5160("lp_in_on_chip_1_buf24_to_gp_5160");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf24_to_gp_5160.values depth=2048
#endif //__VIVADO_SYNTH__


  Extracted_in_on_chip_ld146_in_on_chip_ld150_pw_math_in01_(in, in_on_chip_to_gp_0144, in_on_chip_to_gp_2148);
  Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld114_gp_in_on_chip_1_buf4_ld118_gp_in_on_chip_1_buf4_ld122_in_on_chip_to_gp_0144_ld206_(in_on_chip_to_gp_0144, gp_in_on_chip_1_buf4_to_gp_1112, gp_in_on_chip_1_buf4_to_gp_4116, gp_in_on_chip_1_buf4_to_gp_8120);
  Extracted_gp_in_on_chip_1_buf4_to_gp_1112_ld174_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld130_gp_in_on_chip_2_buf12_ld134_(gp_in_on_chip_1_buf4_to_gp_1112, gp_in_on_chip_2_buf12_to_gp_10128, gp_in_on_chip_2_buf12_to_gp_9132);
  Extracted_gp_in_on_chip_2_buf12_to_gp_10128_ld190_gp_in_on_chip_2_buf12_us40_ld142_us_gp_in_on_chip_2_buf1241_(gp_in_on_chip_2_buf12_to_gp_10128, gp_in_on_chip_2_buf12_us40_to_gp_5140);
  Extracted_gp_in_on_chip_1_buf4_to_gp_8120_ld182_gp_in_on_chip_1_buf4_us28_ld126_us_gp_in_on_chip_1_buf429_(gp_in_on_chip_1_buf4_to_gp_8120, gp_in_on_chip_1_buf4_us28_to_gp_2124);
  Extracted_gp_in_on_chip_2_buf12_to_gp_9132_ld194_gp_in_on_chip_2_buf12_us20_ld138_us_gp_in_on_chip_2_buf1221_(gp_in_on_chip_2_buf12_to_gp_9132, gp_in_on_chip_2_buf12_us20_to_gp_4136);
  Extracted_gp_in_on_chip_1_buf4_us28_to_gp_2124_ld186_in_on_chip_to_gp_2148_ld210_lp_in_on_chip_033_lp_in_on_chip_0_buf32_ld154_(gp_in_on_chip_1_buf4_us28_to_gp_2124, in_on_chip_to_gp_2148, lp_in_on_chip_0_buf32_to_gp_3152);
  Extracted_gp_in_on_chip_1_buf4_to_gp_4116_ld178_gp_in_on_chip_2_buf12_us20_to_gp_4136_ld198_lp_in_on_chip_125_lp_in_on_chip_1_buf24_ld162_(gp_in_on_chip_1_buf4_to_gp_4116, gp_in_on_chip_2_buf12_us20_to_gp_4136, lp_in_on_chip_1_buf24_to_gp_5160);
  Extracted_gp_in_on_chip_2_buf12_us40_to_gp_5140_ld202_lp_in_on_chip_1_buf24_reconstruct_lp3637_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_ld166_lp_in_on_chip_1_buf24_to_gp_5160_ld222_(gp_in_on_chip_2_buf12_us40_to_gp_5140, lp_in_on_chip_1_buf24_to_gp_5160, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164);
  Extracted_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164_ld226_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_ld170_us_lp_in_on_chip_1_buf24_reconstruct_lp36_buf3950_(lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_to_gp_11164, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168);
  Extracted_lp_in_on_chip_0_buf32_reconstruct_lp4546_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_ld158_lp_in_on_chip_0_buf32_to_gp_3152_ld214_lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168_ld230_(lp_in_on_chip_0_buf32_to_gp_3152, lp_in_on_chip_1_buf24_reconstruct_lp36_buf39_us49_to_gp_3168, lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156);
  Extracted_lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156_ld218_pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455_(lp_in_on_chip_0_buf32_reconstruct_lp45_buf48_to_gp_7156, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pyr_blndd2048_ii1_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    pyr_blndd2048_ii1(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 66 and 0 <= pw_math_in02 <= 66 }
const int pw_math_in03_read_pipe0_num_transfers = 4489;
  // { pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457[root = 0, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456] -> out[pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455] : 0 <= pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485455 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485456 <= 63 }
const int pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0_num_transfers = 4096;


extern "C" {

void pyr_blndd2048_ii1_accel(hw_uint<32>* pw_math_in03_read_pipe0, hw_uint<32>* pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0_channel;

  burst_read<32>(pw_math_in03_read_pipe0, pw_math_in03_read_pipe0_channel, pw_math_in03_read_pipe0_num_transfers*size);

  pyr_blndd2048_ii1_wrapper(pw_math_in03_read_pipe0_channel, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0_channel, size);

  burst_write<32>(pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0_channel, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pyr_blndd2048_ii1_rdai(HWStream<hw_uint<32> >& pw_math_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pyr_blndd2048_ii1(pw_math_in03_read_pipe0, pw_math_lp_in_on_chip_0_buf32_reconstruct_lp45_buf485457_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

