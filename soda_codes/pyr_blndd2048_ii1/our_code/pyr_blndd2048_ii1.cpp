#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h"

struct gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3_cache {
	// RAM Box: {[0, 34], [0, 34]}
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
    // { load_to_gp_in_on_chip_1_buf4_to_gp_11168171[root = 0, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld169, gp_in_on_chip_1_buf4_ld170] : 3 <= gp_in_on_chip_1_buf4_ld170 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld169 <= 34 }
    // { load_to_gp_in_on_chip_1_buf4_to_gp_1164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld165, gp_in_on_chip_1_buf4_ld166] : 0 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 0 <= gp_in_on_chip_1_buf4_ld165 <= 34 }
    // { load_to_gp_in_on_chip_1_buf4_to_gp_5172175[root = 0, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld173, gp_in_on_chip_1_buf4_ld174] : 3 <= gp_in_on_chip_1_buf4_ld174 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld173 <= 34 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3_cache gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3;
};



inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_write(hw_uint<32> & gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3.push(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld170, int gp_in_on_chip_1_buf4_ld169, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_11168171[root = 0, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld169, gp_in_on_chip_1_buf4_ld170] : 3 <= gp_in_on_chip_1_buf4_ld170 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld169 <= 34 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_11168171[root = 0, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169] -> [2 + 2gp_in_on_chip_1_buf4_ld170, 0, 2 + 2gp_in_on_chip_1_buf4_ld169, 46] : 3 <= gp_in_on_chip_1_buf4_ld170 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld169 <= 34 }
  // Write schedule: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld166, int gp_in_on_chip_1_buf4_ld165, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_1164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld165, gp_in_on_chip_1_buf4_ld166] : 0 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 0 <= gp_in_on_chip_1_buf4_ld165 <= 34 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_1164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> [2 + 2gp_in_on_chip_1_buf4_ld166, 0, 2 + 2gp_in_on_chip_1_buf4_ld165, 4] : 0 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 0 <= gp_in_on_chip_1_buf4_ld165 <= 34 }
  // Write schedule: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld174, int gp_in_on_chip_1_buf4_ld173, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_5172175[root = 0, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld173, gp_in_on_chip_1_buf4_ld174] : 3 <= gp_in_on_chip_1_buf4_ld174 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld173 <= 34 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_5172175[root = 0, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173] -> [2 + 2gp_in_on_chip_1_buf4_ld174, 0, 2 + 2gp_in_on_chip_1_buf4_ld173, 32] : 3 <= gp_in_on_chip_1_buf4_ld174 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld173 <= 34 }
  // Write schedule: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_merged_banks_3.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133;
  return 0;
}

// # of bundles = 4
// gp_in_on_chip_16_merged157_write
//	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133
inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_write_bundle_write(hw_uint<32>& gp_in_on_chip_16_merged157_write, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_res = gp_in_on_chip_16_merged157_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_write(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_133_res, gp_in_on_chip_1_buf4, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
}

// load_to_gp_in_on_chip_1_buf4_to_gp_11168171_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld170, int gp_in_on_chip_1_buf4_ld169, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_106_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_to_gp_1164167_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld166, int gp_in_on_chip_1_buf4_ld165, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_104_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_to_gp_5172175_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld174, int gp_in_on_chip_1_buf4_ld173, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_102_res);
	return result;
}

struct gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9_cache {
	// RAM Box: {[0, 34], [0, 34]}
	// Capacity: 73
	// # of read delays: 9
  // 0, 1, 2, 35, 36, 37, 70, 71, 72
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 32> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 32> f11;
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

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35() {
		return f6;
	}

	inline hw_uint<32>  peek_36() {
		return f8;
	}

	inline hw_uint<32>  peek_37() {
		return f10;
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_70() {
		return f12;
	}

	inline hw_uint<32>  peek_71() {
		return f14;
	}

	inline hw_uint<32>  peek_72() {
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
    // cap: 1 reading from capacity: 32
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
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
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
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

struct gp_in_on_chip_1_buf4_FIFO_buf252_cache {
  // Reader addrs...
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[1 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[1 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[1 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9_cache gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111, gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_1_buf4_to_gp_1164_ld254, int gp_in_on_chip_1_buf4_to_gp_1164_ld253, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.push(gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_2();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[1 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_1();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_0();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_37();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[1 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_36();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_35();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_72();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[1 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_71();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132_select(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4_FIFO_buf252[2 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111 = gp_in_on_chip_1_buf4_FIFO_buf252.gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_merged_banks_9.peek_70();
  return value_gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_214_merged160_read
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131
//	gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132
inline hw_uint<288> gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131
    // gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132

	hw_uint<288> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<0, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_124_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<32, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_125_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<64, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_126_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<96, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_127_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<128, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_128_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<160, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_129_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<192, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_130_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<224, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_131_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132_res = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132_select(gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<256, 288>(result, gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_132_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_write
//	gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111
inline void gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_write, gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_1_buf4_to_gp_1164_ld254, int gp_in_on_chip_1_buf4_to_gp_1164_ld253, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_write(gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_111_res, gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253, dynamic_address);
}

struct gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_to_gp_in_on_chip_1_buf4_FIFO_buf256_us47_7_cache {
	// RAM Box: {[3, 34], [3, 34]}
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

struct gp_in_on_chip_1_buf4_FIFO_buf256_cache {
  // Reader addrs...
    // { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> gp_in_on_chip_1_buf4_FIFO_buf256[o0, o1] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 and 5 + us_gp_in_on_chip_1_buf446 <= 2o0 <= 6 + us_gp_in_on_chip_1_buf446 and 5 + us_gp_in_on_chip_1_buf445 <= 2o1 <= 6 + us_gp_in_on_chip_1_buf445 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_to_gp_in_on_chip_1_buf4_FIFO_buf256_us47_7_cache gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_to_gp_in_on_chip_1_buf4_FIFO_buf256_us47_7;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109, gp_in_on_chip_1_buf4_FIFO_buf256_cache& gp_in_on_chip_1_buf4_FIFO_buf256, int root, int gp_in_on_chip_1_buf4_to_gp_11168_ld258, int gp_in_on_chip_1_buf4_to_gp_11168_ld257, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf256.gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_to_gp_in_on_chip_1_buf4_FIFO_buf256_us47_7.push(gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf256_us47_7_select(gp_in_on_chip_1_buf4_FIFO_buf256_cache& gp_in_on_chip_1_buf4_FIFO_buf256, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf256_us47_7 read pattern: { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> gp_in_on_chip_1_buf4_FIFO_buf256[o0, o1] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 and 5 + us_gp_in_on_chip_1_buf446 <= 2o0 <= 6 + us_gp_in_on_chip_1_buf446 and 5 + us_gp_in_on_chip_1_buf445 <= 2o1 <= 6 + us_gp_in_on_chip_1_buf445 }
  // Read schedule : { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> [8 + us_gp_in_on_chip_1_buf445, 0, 8 + us_gp_in_on_chip_1_buf446, 48] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf256259[root = 0, gp_in_on_chip_1_buf4_to_gp_11168_ld258, gp_in_on_chip_1_buf4_to_gp_11168_ld257] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_11168_ld258, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_11168_ld257, 47] : 3 <= gp_in_on_chip_1_buf4_to_gp_11168_ld258 <= 34 and 3 <= gp_in_on_chip_1_buf4_to_gp_11168_ld257 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109 = gp_in_on_chip_1_buf4_FIFO_buf256.gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_to_gp_in_on_chip_1_buf4_FIFO_buf256_us47_7.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_1_buf445) % 2 == 0 && 61 - us_gp_in_on_chip_1_buf446 >= 0) ? ((31 - floord(2*us_gp_in_on_chip_1_buf446, 4))) : 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_write
//	gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109
inline void gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_write, gp_in_on_chip_1_buf4_FIFO_buf256_cache& gp_in_on_chip_1_buf4_FIFO_buf256, int root, int gp_in_on_chip_1_buf4_to_gp_11168_ld258, int gp_in_on_chip_1_buf4_to_gp_11168_ld257, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_write(gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_109_res, gp_in_on_chip_1_buf4_FIFO_buf256, root, gp_in_on_chip_1_buf4_to_gp_11168_ld258, gp_in_on_chip_1_buf4_to_gp_11168_ld257, dynamic_address);
}

// us47_read
//	gp_in_on_chip_1_buf4_FIFO_buf256_us47_7
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf256_us47_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf256_cache& gp_in_on_chip_1_buf4_FIFO_buf256, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf256_us47_7

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf256_us47_7_res = gp_in_on_chip_1_buf4_FIFO_buf256_us47_7_select(gp_in_on_chip_1_buf4_FIFO_buf256, root, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf256_us47_7_res);
	return result;
}

struct gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_to_gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147_cache {
	// RAM Box: {[3, 34], [3, 34]}
	// Capacity: 256
	// # of read delays: 256
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
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

struct gp_in_on_chip_1_buf4_FIFO_buf260_cache {
  // Reader addrs...
    // { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_1_buf4_FIFO_buf260[3 + lp_in_on_chip_142, 3 + lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_to_gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147_cache gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_to_gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107, gp_in_on_chip_1_buf4_FIFO_buf260_cache& gp_in_on_chip_1_buf4_FIFO_buf260, int root, int gp_in_on_chip_1_buf4_to_gp_5172_ld262, int gp_in_on_chip_1_buf4_to_gp_5172_ld261, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf260.gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_to_gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147.push(gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147_select(gp_in_on_chip_1_buf4_FIFO_buf260_cache& gp_in_on_chip_1_buf4_FIFO_buf260, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147 read pattern: { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_1_buf4_FIFO_buf260[3 + lp_in_on_chip_142, 3 + lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // Read schedule : { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> [25 + 2lp_in_on_chip_141, 0, 40 + lp_in_on_chip_142, 51] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf260263[root = 0, gp_in_on_chip_1_buf4_to_gp_5172_ld262, gp_in_on_chip_1_buf4_to_gp_5172_ld261] -> [3 + 2gp_in_on_chip_1_buf4_to_gp_5172_ld262, 3, gp_in_on_chip_1_buf4_to_gp_5172_ld261, 0] : 3 <= gp_in_on_chip_1_buf4_to_gp_5172_ld262 <= 34 and 3 <= gp_in_on_chip_1_buf4_to_gp_5172_ld261 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107 = gp_in_on_chip_1_buf4_FIFO_buf260.gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_to_gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147.peek(/* one reader or all rams */ (-31 + lp_in_on_chip_142 == 0 && 24 - lp_in_on_chip_141 >= 0) ? (224) : (-31 + lp_in_on_chip_142 == 0 && -25 + lp_in_on_chip_141 >= 0 && 30 - lp_in_on_chip_141 >= 0) ? ((992 - 32 * lp_in_on_chip_141)) : (-31 + lp_in_on_chip_141 == 0 && 30 - lp_in_on_chip_142 >= 0) ? ((31 - lp_in_on_chip_142)) : (30 - lp_in_on_chip_142 >= 0 && 24 - lp_in_on_chip_141 >= 0) ? ((255 - lp_in_on_chip_142)) : (-25 + lp_in_on_chip_141 >= 0 && 30 - lp_in_on_chip_141 >= 0 && 30 - lp_in_on_chip_142 >= 0) ? (((1023 - 32 * lp_in_on_chip_141) - lp_in_on_chip_142)) : 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107;
  return 0;
}

// # of bundles = 2
// diff43_read
//	gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf260_diff43_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf260_cache& gp_in_on_chip_1_buf4_FIFO_buf260, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147_res = gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147_select(gp_in_on_chip_1_buf4_FIFO_buf260, root, lp_in_on_chip_141, lp_in_on_chip_142, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf260_diff43_147_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_write
//	gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107
inline void gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_write, gp_in_on_chip_1_buf4_FIFO_buf260_cache& gp_in_on_chip_1_buf4_FIFO_buf260, int root, int gp_in_on_chip_1_buf4_to_gp_5172_ld262, int gp_in_on_chip_1_buf4_to_gp_5172_ld261, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_write(gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_107_res, gp_in_on_chip_1_buf4_FIFO_buf260, root, gp_in_on_chip_1_buf4_to_gp_5172_ld262, gp_in_on_chip_1_buf4_to_gp_5172_ld261, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98_cache {
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

struct gp_in_on_chip_1_buf4_us44_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179[root = 0, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177] -> gp_in_on_chip_1_buf4_us44[gp_in_on_chip_1_buf4_us44_ld177, gp_in_on_chip_1_buf4_us44_ld178] : 0 <= gp_in_on_chip_1_buf4_us44_ld178 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld177 <= 63 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98_cache gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98;
};



inline void gp_in_on_chip_1_buf4_us44_us47_6_write(hw_uint<32> & gp_in_on_chip_1_buf4_us44_us47_6, gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
  gp_in_on_chip_1_buf4_us44.gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98.push(gp_in_on_chip_1_buf4_us44_us47_6);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98_select(gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int gp_in_on_chip_1_buf4_us44_ld178, int gp_in_on_chip_1_buf4_us44_ld177, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98 read pattern: { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179[root = 0, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177] -> gp_in_on_chip_1_buf4_us44[gp_in_on_chip_1_buf4_us44_ld177, gp_in_on_chip_1_buf4_us44_ld178] : 0 <= gp_in_on_chip_1_buf4_us44_ld178 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld177 <= 63 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179[root = 0, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177] -> [8 + gp_in_on_chip_1_buf4_us44_ld178, 0, 8 + gp_in_on_chip_1_buf4_us44_ld177, 49] : 0 <= gp_in_on_chip_1_buf4_us44_ld178 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld177 <= 63 }
  // Write schedule: { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> [8 + us_gp_in_on_chip_1_buf445, 0, 8 + us_gp_in_on_chip_1_buf446, 48] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us44_us47_6 = gp_in_on_chip_1_buf4_us44.gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us44_us47_6;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_read
//	gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98
inline hw_uint<32> gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_read_bundle_read(gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int gp_in_on_chip_1_buf4_us44_ld178, int gp_in_on_chip_1_buf4_us44_ld177, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98_res = gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98_select(gp_in_on_chip_1_buf4_us44, root, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_98_res);
	return result;
}

// us47_write
//	gp_in_on_chip_1_buf4_us44_us47_6
inline void gp_in_on_chip_1_buf4_us44_us47_write_bundle_write(hw_uint<32>& us47_write, gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_us47_6_res = us47_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us44_us47_6_write(gp_in_on_chip_1_buf4_us44_us47_6_res, gp_in_on_chip_1_buf4_us44, root, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 512
	// # of read delays: 512
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511
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

struct gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache {
  // Reader addrs...
    // { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> gp_in_on_chip_1_buf4_us44_FIFO_buf264[lp_in_on_chip_050, lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145_cache gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145;
};



inline void gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_write(hw_uint<32> & gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99, gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf264, int root, int gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, int gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, int dynamic_address) {
  gp_in_on_chip_1_buf4_us44_FIFO_buf264.gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145.push(gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145_select(gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf264, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145 read pattern: { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> gp_in_on_chip_1_buf4_us44_FIFO_buf264[lp_in_on_chip_050, lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // Read schedule : { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> [15 + lp_in_on_chip_049, 1, lp_in_on_chip_050, 0] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267[root = 0, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265] -> [8 + gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, 0, 8 + gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, 53] : 0 <= gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99 = gp_in_on_chip_1_buf4_us44_FIFO_buf264.gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145.peek(/* one reader or all rams */ (-63 + lp_in_on_chip_050 == 0 && -57 + lp_in_on_chip_049 == 0) ? (384) : (-63 + lp_in_on_chip_050 == 0 && 56 - lp_in_on_chip_049 >= 0) ? (448) : (-63 + lp_in_on_chip_050 == 0 && -58 + lp_in_on_chip_049 >= 0 && 62 - lp_in_on_chip_049 >= 0) ? ((4032 - 64 * lp_in_on_chip_049)) : (-63 + lp_in_on_chip_049 == 0 && 62 - lp_in_on_chip_050 >= 0) ? ((63 - lp_in_on_chip_050)) : (-57 + lp_in_on_chip_049 == 0 && 62 - lp_in_on_chip_050 >= 0) ? ((447 - lp_in_on_chip_050)) : (62 - lp_in_on_chip_050 >= 0 && 56 - lp_in_on_chip_049 >= 0) ? ((511 - lp_in_on_chip_050)) : (-58 + lp_in_on_chip_049 >= 0 && 62 - lp_in_on_chip_049 >= 0 && 62 - lp_in_on_chip_050 >= 0) ? (((4095 - 64 * lp_in_on_chip_049) - lp_in_on_chip_050)) : 0);
  return value_gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99;
  return 0;
}

// # of bundles = 2
// diff51_read
//	gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145
inline hw_uint<32> gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_read_bundle_read(gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf264, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145_res = gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145_select(gp_in_on_chip_1_buf4_us44_FIFO_buf264, root, lp_in_on_chip_049, lp_in_on_chip_050, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_145_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_write
//	gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99
inline void gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_write, gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf264, int root, int gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, int gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_res = load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_write(gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_99_res, gp_in_on_chip_1_buf4_us44_FIFO_buf264, root, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, dynamic_address);
}

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90_cache {
	// RAM Box: {[1, 16], [1, 16]}
	// Capacity: 75
	// # of read delays: 76
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74
	fifo<hw_uint<32> , 75> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(74 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88_cache {
	// RAM Box: {[0, 16], [0, 16]}
	// Capacity: 80
	// # of read delays: 81
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79
	fifo<hw_uint<32> , 80> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(79 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86_cache {
	// RAM Box: {[1, 16], [1, 16]}
	// Capacity: 75
	// # of read delays: 76
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74
	fifo<hw_uint<32> , 75> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(74 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_to_gp_12180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld181, gp_in_on_chip_2_buf12_ld182] : 0 < gp_in_on_chip_2_buf12_ld182 <= 16 and 0 < gp_in_on_chip_2_buf12_ld181 <= 16 }
    // { load_to_gp_in_on_chip_2_buf12_to_gp_2184187[root = 0, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld185, gp_in_on_chip_2_buf12_ld186] : 0 <= gp_in_on_chip_2_buf12_ld186 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld185 <= 16 }
    // { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld189, gp_in_on_chip_2_buf12_ld190] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16 }
  // # of banks: 3
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90;
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88;
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86;
};



inline void gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_write(hw_uint<32> & gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123);
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123);
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld182, int gp_in_on_chip_2_buf12_ld181, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_12180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld181, gp_in_on_chip_2_buf12_ld182] : 0 < gp_in_on_chip_2_buf12_ld182 <= 16 and 0 < gp_in_on_chip_2_buf12_ld181 <= 16 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_12180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> [22 + 3gp_in_on_chip_2_buf12_ld182, 0, 22 + 3gp_in_on_chip_2_buf12_ld181, 27] : 0 < gp_in_on_chip_2_buf12_ld182 <= 16 and 0 < gp_in_on_chip_2_buf12_ld181 <= 16 }
  // Write schedule: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90.peek(/* one reader or all rams */ (-12 + gp_in_on_chip_2_buf12_ld181 == 0 && -16 + gp_in_on_chip_2_buf12_ld182 == 0) ? (1) : (-13 + gp_in_on_chip_2_buf12_ld182 >= 0 && 15 - gp_in_on_chip_2_buf12_ld182 >= 0 && 15 - gp_in_on_chip_2_buf12_ld181 >= 0) ? ((16 - gp_in_on_chip_2_buf12_ld181)) : (-16 + gp_in_on_chip_2_buf12_ld181 == 0 && 11 - gp_in_on_chip_2_buf12_ld182 >= 0 && -1 + gp_in_on_chip_2_buf12_ld182 - 4*floord(gp_in_on_chip_2_buf12_ld182, 4) >= 0) ? ((51 - 17 * floord(gp_in_on_chip_2_buf12_ld182, 4))) : (15 - gp_in_on_chip_2_buf12_ld181 >= 0 && 11 - gp_in_on_chip_2_buf12_ld182 >= 0 && -1 + gp_in_on_chip_2_buf12_ld182 - 4*floord(gp_in_on_chip_2_buf12_ld182, 4) >= 0) ? (((67 - gp_in_on_chip_2_buf12_ld181) - 17 * floord(gp_in_on_chip_2_buf12_ld182, 4))) : ((-gp_in_on_chip_2_buf12_ld181) % 4 == 0 && -16 + gp_in_on_chip_2_buf12_ld182 == 0 && 8 - gp_in_on_chip_2_buf12_ld181 >= 0) ? (((16 - gp_in_on_chip_2_buf12_ld181))/4) : (-16 + gp_in_on_chip_2_buf12_ld182 == 0 && 11 - gp_in_on_chip_2_buf12_ld181 >= 0 && -1 + gp_in_on_chip_2_buf12_ld181 - 4*floord(gp_in_on_chip_2_buf12_ld181, 4) >= 0) ? ((3 - floord(gp_in_on_chip_2_buf12_ld181, 4))) : (-16 + gp_in_on_chip_2_buf12_ld181 == 0 && -12 + gp_in_on_chip_2_buf12_ld182 == 0) ? (17) : ((-gp_in_on_chip_2_buf12_ld181) % 4 == 0 && -12 + gp_in_on_chip_2_buf12_ld182 == 0 && 12 - gp_in_on_chip_2_buf12_ld181 >= 0) ? (((84 - gp_in_on_chip_2_buf12_ld181))/4) : (-12 + gp_in_on_chip_2_buf12_ld182 == 0 && -1 + gp_in_on_chip_2_buf12_ld181 - 4*floord(gp_in_on_chip_2_buf12_ld181, 4) >= 0) ? ((20 - floord(4*gp_in_on_chip_2_buf12_ld181, 16))) : ((-gp_in_on_chip_2_buf12_ld182) % 4 == 0 && -16 + gp_in_on_chip_2_buf12_ld181 == 0 && 8 - gp_in_on_chip_2_buf12_ld182 >= 0) ? (((272 - 17 * gp_in_on_chip_2_buf12_ld182))/4) : ((-gp_in_on_chip_2_buf12_ld181) % 4 == 0 && (-gp_in_on_chip_2_buf12_ld182) % 4 == 0 && 8 - gp_in_on_chip_2_buf12_ld182 >= 0 && 12 - gp_in_on_chip_2_buf12_ld181 >= 0) ? ((((288 - 17 * gp_in_on_chip_2_buf12_ld182) - gp_in_on_chip_2_buf12_ld181))/4) : ((-gp_in_on_chip_2_buf12_ld182) % 4 == 0 && 8 - gp_in_on_chip_2_buf12_ld182 >= 0 && -1 + gp_in_on_chip_2_buf12_ld181 - 4*floord(gp_in_on_chip_2_buf12_ld181, 4) >= 0) ? ((((284 - 17 * gp_in_on_chip_2_buf12_ld182) - 4 * floord(4*gp_in_on_chip_2_buf12_ld181, 16)))/4) : 0);
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld186, int gp_in_on_chip_2_buf12_ld185, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_2184187[root = 0, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld185, gp_in_on_chip_2_buf12_ld186] : 0 <= gp_in_on_chip_2_buf12_ld186 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld185 <= 16 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_2184187[root = 0, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185] -> [22 + 3gp_in_on_chip_2_buf12_ld186, 0, 22 + 3gp_in_on_chip_2_buf12_ld185, 7] : 0 <= gp_in_on_chip_2_buf12_ld186 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld185 <= 16 }
  // Write schedule: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88.peek(/* one reader or all rams */ (-12 + gp_in_on_chip_2_buf12_ld185 == 0 && -16 + gp_in_on_chip_2_buf12_ld186 == 0) ? (1) : (-13 + gp_in_on_chip_2_buf12_ld186 >= 0 && 15 - gp_in_on_chip_2_buf12_ld186 >= 0 && 15 - gp_in_on_chip_2_buf12_ld185 >= 0) ? ((16 - gp_in_on_chip_2_buf12_ld185)) : (-16 + gp_in_on_chip_2_buf12_ld185 == 0 && 11 - gp_in_on_chip_2_buf12_ld186 >= 0 && -1 + gp_in_on_chip_2_buf12_ld186 - 4*floord(gp_in_on_chip_2_buf12_ld186, 4) >= 0) ? ((51 - 17 * floord(gp_in_on_chip_2_buf12_ld186, 4))) : (15 - gp_in_on_chip_2_buf12_ld185 >= 0 && 11 - gp_in_on_chip_2_buf12_ld186 >= 0 && -1 + gp_in_on_chip_2_buf12_ld186 - 4*floord(gp_in_on_chip_2_buf12_ld186, 4) >= 0) ? (((67 - gp_in_on_chip_2_buf12_ld185) - 17 * floord(gp_in_on_chip_2_buf12_ld186, 4))) : ((-gp_in_on_chip_2_buf12_ld185) % 4 == 0 && -16 + gp_in_on_chip_2_buf12_ld186 == 0 && 8 - gp_in_on_chip_2_buf12_ld185 >= 0) ? (((16 - gp_in_on_chip_2_buf12_ld185))/4) : (-16 + gp_in_on_chip_2_buf12_ld186 == 0 && 11 - gp_in_on_chip_2_buf12_ld185 >= 0 && -1 + gp_in_on_chip_2_buf12_ld185 - 4*floord(gp_in_on_chip_2_buf12_ld185, 4) >= 0) ? ((3 - floord(gp_in_on_chip_2_buf12_ld185, 4))) : (-16 + gp_in_on_chip_2_buf12_ld185 == 0 && -12 + gp_in_on_chip_2_buf12_ld186 == 0) ? (17) : ((-gp_in_on_chip_2_buf12_ld185) % 4 == 0 && -12 + gp_in_on_chip_2_buf12_ld186 == 0 && 12 - gp_in_on_chip_2_buf12_ld185 >= 0) ? (((84 - gp_in_on_chip_2_buf12_ld185))/4) : (-12 + gp_in_on_chip_2_buf12_ld186 == 0 && -1 + gp_in_on_chip_2_buf12_ld185 - 4*floord(gp_in_on_chip_2_buf12_ld185, 4) >= 0) ? ((20 - floord(4*gp_in_on_chip_2_buf12_ld185, 16))) : ((-gp_in_on_chip_2_buf12_ld186) % 4 == 0 && -16 + gp_in_on_chip_2_buf12_ld185 == 0 && 8 - gp_in_on_chip_2_buf12_ld186 >= 0) ? (((272 - 17 * gp_in_on_chip_2_buf12_ld186))/4) : ((-gp_in_on_chip_2_buf12_ld185) % 4 == 0 && (-gp_in_on_chip_2_buf12_ld186) % 4 == 0 && 8 - gp_in_on_chip_2_buf12_ld186 >= 0 && 12 - gp_in_on_chip_2_buf12_ld185 >= 0) ? ((((288 - 17 * gp_in_on_chip_2_buf12_ld186) - gp_in_on_chip_2_buf12_ld185))/4) : ((-gp_in_on_chip_2_buf12_ld186) % 4 == 0 && 8 - gp_in_on_chip_2_buf12_ld186 >= 0 && -1 + gp_in_on_chip_2_buf12_ld185 - 4*floord(gp_in_on_chip_2_buf12_ld185, 4) >= 0) ? ((((284 - 17 * gp_in_on_chip_2_buf12_ld186) - 4 * floord(4*gp_in_on_chip_2_buf12_ld185, 16)))/4) : 0);
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld190, int gp_in_on_chip_2_buf12_ld189, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld189, gp_in_on_chip_2_buf12_ld190] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> [22 + 3gp_in_on_chip_2_buf12_ld190, 0, 22 + 3gp_in_on_chip_2_buf12_ld189, 50] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16 }
  // Write schedule: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86.peek(/* one reader or all rams */ (-12 + gp_in_on_chip_2_buf12_ld189 == 0 && -16 + gp_in_on_chip_2_buf12_ld190 == 0) ? (1) : (-13 + gp_in_on_chip_2_buf12_ld190 >= 0 && 15 - gp_in_on_chip_2_buf12_ld190 >= 0 && 15 - gp_in_on_chip_2_buf12_ld189 >= 0) ? ((16 - gp_in_on_chip_2_buf12_ld189)) : (-16 + gp_in_on_chip_2_buf12_ld189 == 0 && 11 - gp_in_on_chip_2_buf12_ld190 >= 0 && -1 + gp_in_on_chip_2_buf12_ld190 - 4*floord(gp_in_on_chip_2_buf12_ld190, 4) >= 0) ? ((51 - 17 * floord(gp_in_on_chip_2_buf12_ld190, 4))) : (15 - gp_in_on_chip_2_buf12_ld189 >= 0 && 11 - gp_in_on_chip_2_buf12_ld190 >= 0 && -1 + gp_in_on_chip_2_buf12_ld190 - 4*floord(gp_in_on_chip_2_buf12_ld190, 4) >= 0) ? (((67 - gp_in_on_chip_2_buf12_ld189) - 17 * floord(gp_in_on_chip_2_buf12_ld190, 4))) : ((-gp_in_on_chip_2_buf12_ld189) % 4 == 0 && -16 + gp_in_on_chip_2_buf12_ld190 == 0 && 8 - gp_in_on_chip_2_buf12_ld189 >= 0) ? (((16 - gp_in_on_chip_2_buf12_ld189))/4) : (-16 + gp_in_on_chip_2_buf12_ld190 == 0 && 11 - gp_in_on_chip_2_buf12_ld189 >= 0 && -1 + gp_in_on_chip_2_buf12_ld189 - 4*floord(gp_in_on_chip_2_buf12_ld189, 4) >= 0) ? ((3 - floord(gp_in_on_chip_2_buf12_ld189, 4))) : (-16 + gp_in_on_chip_2_buf12_ld189 == 0 && -12 + gp_in_on_chip_2_buf12_ld190 == 0) ? (17) : ((-gp_in_on_chip_2_buf12_ld189) % 4 == 0 && -12 + gp_in_on_chip_2_buf12_ld190 == 0 && 12 - gp_in_on_chip_2_buf12_ld189 >= 0) ? (((84 - gp_in_on_chip_2_buf12_ld189))/4) : (-12 + gp_in_on_chip_2_buf12_ld190 == 0 && -1 + gp_in_on_chip_2_buf12_ld189 - 4*floord(gp_in_on_chip_2_buf12_ld189, 4) >= 0) ? ((20 - floord(4*gp_in_on_chip_2_buf12_ld189, 16))) : ((-gp_in_on_chip_2_buf12_ld190) % 4 == 0 && -16 + gp_in_on_chip_2_buf12_ld189 == 0 && 8 - gp_in_on_chip_2_buf12_ld190 >= 0) ? (((272 - 17 * gp_in_on_chip_2_buf12_ld190))/4) : ((-gp_in_on_chip_2_buf12_ld189) % 4 == 0 && (-gp_in_on_chip_2_buf12_ld190) % 4 == 0 && 8 - gp_in_on_chip_2_buf12_ld190 >= 0 && 12 - gp_in_on_chip_2_buf12_ld189 >= 0) ? ((((288 - 17 * gp_in_on_chip_2_buf12_ld190) - gp_in_on_chip_2_buf12_ld189))/4) : ((-gp_in_on_chip_2_buf12_ld190) % 4 == 0 && 8 - gp_in_on_chip_2_buf12_ld190 >= 0 && -1 + gp_in_on_chip_2_buf12_ld189 - 4*floord(gp_in_on_chip_2_buf12_ld189, 4) >= 0) ? ((((284 - 17 * gp_in_on_chip_2_buf12_ld190) - 4 * floord(4*gp_in_on_chip_2_buf12_ld189, 16)))/4) : 0);
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123;
  return 0;
}

// # of bundles = 4
// gp_in_on_chip_214_merged160_write
//	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123
inline void gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_write_bundle_write(hw_uint<32>& gp_in_on_chip_214_merged160_write, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_res = gp_in_on_chip_214_merged160_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_write(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_123_res, gp_in_on_chip_2_buf12, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
}

// load_to_gp_in_on_chip_2_buf12_to_gp_12180183_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld182, int gp_in_on_chip_2_buf12_ld181, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_90_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_to_gp_2184187_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld186, int gp_in_on_chip_2_buf12_ld185, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_88_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_to_gp_7188191_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld190, int gp_in_on_chip_2_buf12_ld189, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_86_res);
	return result;
}

struct gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_to_gp_in_on_chip_2_buf12_FIFO_buf268_us39_9_cache {
	// RAM Box: {[1, 16], [1, 16]}
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

struct gp_in_on_chip_2_buf12_FIFO_buf268_cache {
  // Reader addrs...
    // { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> gp_in_on_chip_2_buf12_FIFO_buf268[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 and us_gp_in_on_chip_2_buf1238 < 2o0 <= 2 + us_gp_in_on_chip_2_buf1238 and us_gp_in_on_chip_2_buf1237 < 2o1 <= 2 + us_gp_in_on_chip_2_buf1237 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_to_gp_in_on_chip_2_buf12_FIFO_buf268_us39_9_cache gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_to_gp_in_on_chip_2_buf12_FIFO_buf268_us39_9;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95, gp_in_on_chip_2_buf12_FIFO_buf268_cache& gp_in_on_chip_2_buf12_FIFO_buf268, int root, int gp_in_on_chip_2_buf12_to_gp_12180_ld270, int gp_in_on_chip_2_buf12_to_gp_12180_ld269, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf268.gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_to_gp_in_on_chip_2_buf12_FIFO_buf268_us39_9.push(gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf268_us39_9_select(gp_in_on_chip_2_buf12_FIFO_buf268_cache& gp_in_on_chip_2_buf12_FIFO_buf268, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf268_us39_9 read pattern: { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> gp_in_on_chip_2_buf12_FIFO_buf268[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 and us_gp_in_on_chip_2_buf1238 < 2o0 <= 2 + us_gp_in_on_chip_2_buf1238 and us_gp_in_on_chip_2_buf1237 < 2o1 <= 2 + us_gp_in_on_chip_2_buf1237 }
  // Read schedule : { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> [25 + 2us_gp_in_on_chip_2_buf1237, 0, 40 + us_gp_in_on_chip_2_buf1238, 29] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf268271[root = 0, gp_in_on_chip_2_buf12_to_gp_12180_ld270, gp_in_on_chip_2_buf12_to_gp_12180_ld269] -> [21 + 4gp_in_on_chip_2_buf12_to_gp_12180_ld270, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_12180_ld269, 28] : 0 < gp_in_on_chip_2_buf12_to_gp_12180_ld270 <= 16 and 0 < gp_in_on_chip_2_buf12_to_gp_12180_ld269 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95 = gp_in_on_chip_2_buf12_FIFO_buf268.gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_to_gp_in_on_chip_2_buf12_FIFO_buf268_us39_9.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_2_buf1237) % 2 == 0 && 29 - us_gp_in_on_chip_2_buf1238 >= 0) ? ((15 - floord(2*us_gp_in_on_chip_2_buf1238, 4))) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_write
//	gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95
inline void gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_write, gp_in_on_chip_2_buf12_FIFO_buf268_cache& gp_in_on_chip_2_buf12_FIFO_buf268, int root, int gp_in_on_chip_2_buf12_to_gp_12180_ld270, int gp_in_on_chip_2_buf12_to_gp_12180_ld269, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_write(gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_95_res, gp_in_on_chip_2_buf12_FIFO_buf268, root, gp_in_on_chip_2_buf12_to_gp_12180_ld270, gp_in_on_chip_2_buf12_to_gp_12180_ld269, dynamic_address);
}

// us39_read
//	gp_in_on_chip_2_buf12_FIFO_buf268_us39_9
inline hw_uint<32> gp_in_on_chip_2_buf12_FIFO_buf268_us39_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf268_cache& gp_in_on_chip_2_buf12_FIFO_buf268, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_FIFO_buf268_us39_9

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf268_us39_9_res = gp_in_on_chip_2_buf12_FIFO_buf268_us39_9_select(gp_in_on_chip_2_buf12_FIFO_buf268, root, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_FIFO_buf268_us39_9_res);
	return result;
}

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114_cache {
	// RAM Box: {[0, 14], [2, 16]}
	// Capacity: 68
	// # of read delays: 67
  // 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67
	fifo<hw_uint<32> , 68> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(67 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115_cache {
	// RAM Box: {[1, 15], [2, 16]}
	// Capacity: 67
	// # of read delays: 67
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66
	fifo<hw_uint<32> , 67> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(66 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116_cache {
	// RAM Box: {[2, 16], [2, 16]}
	// Capacity: 66
	// # of read delays: 66
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65
	fifo<hw_uint<32> , 66> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(65 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117_cache {
	// RAM Box: {[0, 14], [1, 15]}
	// Capacity: 85
	// # of read delays: 67
  // 0, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84
	fifo<hw_uint<32> , 85> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(84 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118_cache {
	// RAM Box: {[1, 15], [1, 15]}
	// Capacity: 84
	// # of read delays: 67
  // 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83
	fifo<hw_uint<32> , 84> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(83 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119_cache {
	// RAM Box: {[2, 16], [1, 15]}
	// Capacity: 83
	// # of read delays: 67
  // 0, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82
	fifo<hw_uint<32> , 83> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(82 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120_cache {
	// RAM Box: {[0, 14], [0, 14]}
	// Capacity: 102
	// # of read delays: 67
  // 0, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101
	fifo<hw_uint<32> , 102> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(101 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121_cache {
	// RAM Box: {[1, 15], [0, 14]}
	// Capacity: 101
	// # of read delays: 67
  // 0, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100
	fifo<hw_uint<32> , 101> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(100 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122_cache {
	// RAM Box: {[2, 16], [0, 14]}
	// Capacity: 100
	// # of read delays: 67
  // 0, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
	fifo<hw_uint<32> , 100> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(99 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf272_cache {
  // Reader addrs...
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[1 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[1 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[1 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // # of banks: 9
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121;
  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122_cache gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93, gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_2_buf12_to_gp_2184_ld274, int gp_in_on_chip_2_buf12_to_gp_2184_ld273, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
  gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122.push(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114.peek(/* one reader or all rams */ (-6 + gp_in_on_chip_321 == 0) ? ((16 - 2 * gp_in_on_chip_322)) : ((-gp_in_on_chip_321) % 2 == 0 && 4 - gp_in_on_chip_321 >= 0) ? ((((134 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((11 - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((10 - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -5 + gp_in_on_chip_321 == 0) ? (((44 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -5 + gp_in_on_chip_321 == 0) ? (((45 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 3 - gp_in_on_chip_321 >= 0) ? ((((130 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 3 - gp_in_on_chip_321 >= 0) ? ((((129 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[1 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115.peek(/* one reader or all rams */ (-7 + gp_in_on_chip_322 == 0 && -7 + gp_in_on_chip_321 == 0) ? (1) : (-6 + gp_in_on_chip_321 == 0) ? ((15 - 2 * gp_in_on_chip_322)) : ((-gp_in_on_chip_321) % 2 == 0 && 4 - gp_in_on_chip_321 >= 0) ? ((((132 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0 && 5 - gp_in_on_chip_322 >= 0) ? (((9 - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((8 - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -5 + gp_in_on_chip_321 == 0) ? (((42 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -5 + gp_in_on_chip_321 == 0) ? (((43 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 3 - gp_in_on_chip_321 >= 0) ? ((((128 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 3 - gp_in_on_chip_321 >= 0) ? ((((127 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116.peek(/* one reader or all rams */ (-5 + gp_in_on_chip_322 == 0 && -7 + gp_in_on_chip_321 == 0) ? (1) : (-6 + gp_in_on_chip_321 == 0 && 6 - gp_in_on_chip_322 >= 0) ? ((14 - 2 * gp_in_on_chip_322)) : ((-gp_in_on_chip_321) % 2 == 0 && 4 - gp_in_on_chip_321 >= 0 && 6 - gp_in_on_chip_322 >= 0) ? ((((130 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-gp_in_on_chip_321) % 2 == 0 && -7 + gp_in_on_chip_322 == 0 && 4 - gp_in_on_chip_321 >= 0) ? (((102 - 17 * gp_in_on_chip_321))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0 && 3 - gp_in_on_chip_322 >= 0) ? (((7 - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0 && 4 - gp_in_on_chip_322 >= 0) ? (((6 - gp_in_on_chip_322))/2) : (-7 + gp_in_on_chip_322 == 0 && -5 + gp_in_on_chip_321 == 0) ? (17) : ((-gp_in_on_chip_322) % 2 == 0 && -5 + gp_in_on_chip_321 == 0) ? (((40 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -5 + gp_in_on_chip_321 == 0 && 5 - gp_in_on_chip_322 >= 0) ? (((41 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_321) % 2 == 0 && -7 + gp_in_on_chip_322 == 0 && 3 - gp_in_on_chip_321 >= 0) ? (((119 - 17 * gp_in_on_chip_321))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 3 - gp_in_on_chip_321 >= 0 && 5 - gp_in_on_chip_322 >= 0) ? ((((126 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 3 - gp_in_on_chip_321 >= 0) ? ((((125 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117.peek(/* one reader or all rams */ ((-gp_in_on_chip_321) % 2 == 0) ? ((((168 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((44 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((45 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_321 >= 0) ? ((((164 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_321 >= 0) ? ((((163 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[1 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118.peek(/* one reader or all rams */ ((-gp_in_on_chip_321) % 2 == 0) ? ((((166 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((42 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((43 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_321 >= 0) ? ((((162 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_321 >= 0) ? ((((161 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119.peek(/* one reader or all rams */ ((-gp_in_on_chip_321) % 2 == 0 && 6 - gp_in_on_chip_322 >= 0) ? ((((164 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-gp_in_on_chip_321) % 2 == 0 && -7 + gp_in_on_chip_322 == 0) ? (((136 - 17 * gp_in_on_chip_321))/2) : (-7 + gp_in_on_chip_322 == 0 && -7 + gp_in_on_chip_321 == 0) ? (17) : ((-gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0) ? (((40 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && -7 + gp_in_on_chip_321 == 0 && 5 - gp_in_on_chip_322 >= 0) ? (((41 - gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_321) % 2 == 0 && -7 + gp_in_on_chip_322 == 0 && 5 - gp_in_on_chip_321 >= 0) ? (((153 - 17 * gp_in_on_chip_321))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_321 >= 0 && 5 - gp_in_on_chip_322 >= 0) ? ((((160 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_321 >= 0) ? ((((159 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120.peek(/* one reader or all rams */ ((-gp_in_on_chip_321) % 2 == 0) ? ((((202 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0) ? ((((198 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0) ? ((((197 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[1 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121.peek(/* one reader or all rams */ ((-gp_in_on_chip_321) % 2 == 0) ? ((((200 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0) ? ((((196 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0) ? ((((195 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122_select(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf272[2 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93 = gp_in_on_chip_2_buf12_FIFO_buf272.gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_to_gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122.peek(/* one reader or all rams */ ((-gp_in_on_chip_321) % 2 == 0 && 6 - gp_in_on_chip_322 >= 0) ? ((((198 - 17 * gp_in_on_chip_321) - 4 * gp_in_on_chip_322))/2) : ((-gp_in_on_chip_321) % 2 == 0 && -7 + gp_in_on_chip_322 == 0) ? (((170 - 17 * gp_in_on_chip_321))/2) : ((-1 - gp_in_on_chip_321) % 2 == 0 && -7 + gp_in_on_chip_322 == 0) ? (((187 - 17 * gp_in_on_chip_321))/2) : ((-1 - gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0 && 5 - gp_in_on_chip_322 >= 0) ? ((((194 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : ((-gp_in_on_chip_322) % 2 == 0 && (-1 - gp_in_on_chip_321) % 2 == 0) ? ((((193 - 17 * gp_in_on_chip_321) - gp_in_on_chip_322))/2) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_322_merged163_read
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121
//	gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122
inline hw_uint<288> gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121
    // gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122

	hw_uint<288> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<0, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_114_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<32, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_115_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<64, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_116_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<96, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_117_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<128, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_118_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<160, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_119_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<192, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_120_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<224, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_121_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122_res = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122_select(gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<256, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_122_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_write
//	gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93
inline void gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_write, gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_2_buf12_to_gp_2184_ld274, int gp_in_on_chip_2_buf12_to_gp_2184_ld273, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_write(gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_93_res, gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273, dynamic_address);
}

struct gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_to_gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150_cache {
	// RAM Box: {[1, 16], [1, 16]}
	// Capacity: 140
	// # of read delays: 140
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139
	fifo<hw_uint<32> , 140> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(139 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf276_cache {
  // Reader addrs...
    // { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_2_buf12_FIFO_buf276[1 + lp_in_on_chip_234, 1 + lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_to_gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150_cache gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_to_gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91, gp_in_on_chip_2_buf12_FIFO_buf276_cache& gp_in_on_chip_2_buf12_FIFO_buf276, int root, int gp_in_on_chip_2_buf12_to_gp_7188_ld278, int gp_in_on_chip_2_buf12_to_gp_7188_ld277, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf276.gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_to_gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150.push(gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150_select(gp_in_on_chip_2_buf12_FIFO_buf276_cache& gp_in_on_chip_2_buf12_FIFO_buf276, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150 read pattern: { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_2_buf12_FIFO_buf276[1 + lp_in_on_chip_234, 1 + lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // Read schedule : { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> [56 + lp_in_on_chip_233, 0, 63 + lp_in_on_chip_234, 43] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf276279[root = 0, gp_in_on_chip_2_buf12_to_gp_7188_ld278, gp_in_on_chip_2_buf12_to_gp_7188_ld277] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_7188_ld278, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_7188_ld277, 52] : 0 < gp_in_on_chip_2_buf12_to_gp_7188_ld278 <= 16 and 0 < gp_in_on_chip_2_buf12_to_gp_7188_ld277 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91 = gp_in_on_chip_2_buf12_FIFO_buf276.gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_to_gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150.peek(/* one reader or all rams */ (-15 + lp_in_on_chip_234 == 0 && -14 + lp_in_on_chip_233 == 0) ? (16) : (-15 + lp_in_on_chip_233 == 0 && 14 - lp_in_on_chip_234 >= 0) ? ((15 - lp_in_on_chip_234)) : (-14 + lp_in_on_chip_233 == 0 && -9 + lp_in_on_chip_234 >= 0 && 14 - lp_in_on_chip_234 >= 0) ? ((31 - lp_in_on_chip_234)) : ((-lp_in_on_chip_233) % 2 == 0 && -15 + lp_in_on_chip_234 == 0 && 12 - lp_in_on_chip_233 >= 0) ? ((128 - 8 * lp_in_on_chip_233)) : ((-1 - lp_in_on_chip_233) % 2 == 0 && 13 - lp_in_on_chip_233 >= 0 && 14 - lp_in_on_chip_234 >= 0) ? (((135 - 8 * lp_in_on_chip_233) - lp_in_on_chip_234)) : ((-lp_in_on_chip_233) % 2 == 0 && 12 - lp_in_on_chip_233 >= 0 && -9 + lp_in_on_chip_234 >= 0 && 14 - lp_in_on_chip_234 >= 0) ? (((143 - 8 * lp_in_on_chip_233) - lp_in_on_chip_234)) : ((-1 - lp_in_on_chip_233) % 2 == 0 && -15 + lp_in_on_chip_234 == 0 && 13 - lp_in_on_chip_233 >= 0) ? ((120 - 8 * lp_in_on_chip_233)) : (-14 + lp_in_on_chip_233 == 0 && 8 - lp_in_on_chip_234 >= 0) ? (((27 - lp_in_on_chip_234) + floord(2*lp_in_on_chip_234, 4))) : ((-lp_in_on_chip_233) % 2 == 0 && 12 - lp_in_on_chip_233 >= 0 && 8 - lp_in_on_chip_234 >= 0) ? ((((139 - 8 * lp_in_on_chip_233) - lp_in_on_chip_234) + floord(2*lp_in_on_chip_234, 4))) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91;
  return 0;
}

// # of bundles = 2
// diff35_read
//	gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150
inline hw_uint<32> gp_in_on_chip_2_buf12_FIFO_buf276_diff35_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf276_cache& gp_in_on_chip_2_buf12_FIFO_buf276, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150_res = gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150_select(gp_in_on_chip_2_buf12_FIFO_buf276, root, lp_in_on_chip_233, lp_in_on_chip_234, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_FIFO_buf276_diff35_150_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_write
//	gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91
inline void gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_write, gp_in_on_chip_2_buf12_FIFO_buf276_cache& gp_in_on_chip_2_buf12_FIFO_buf276, int root, int gp_in_on_chip_2_buf12_to_gp_7188_ld278, int gp_in_on_chip_2_buf12_to_gp_7188_ld277, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_write(gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_91_res, gp_in_on_chip_2_buf12_FIFO_buf276, root, gp_in_on_chip_2_buf12_to_gp_7188_ld278, gp_in_on_chip_2_buf12_to_gp_7188_ld277, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82_cache {
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

struct gp_in_on_chip_2_buf12_us36_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195[root = 0, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193] -> gp_in_on_chip_2_buf12_us36[gp_in_on_chip_2_buf12_us36_ld193, gp_in_on_chip_2_buf12_us36_ld194] : 0 <= gp_in_on_chip_2_buf12_us36_ld194 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld193 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82_cache gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82;
};



inline void gp_in_on_chip_2_buf12_us36_us39_8_write(hw_uint<32> & gp_in_on_chip_2_buf12_us36_us39_8, gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
  gp_in_on_chip_2_buf12_us36.gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82.push(gp_in_on_chip_2_buf12_us36_us39_8);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82_select(gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int gp_in_on_chip_2_buf12_us36_ld194, int gp_in_on_chip_2_buf12_us36_ld193, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82 read pattern: { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195[root = 0, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193] -> gp_in_on_chip_2_buf12_us36[gp_in_on_chip_2_buf12_us36_ld193, gp_in_on_chip_2_buf12_us36_ld194] : 0 <= gp_in_on_chip_2_buf12_us36_ld194 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld193 <= 31 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195[root = 0, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193] -> [25 + 2gp_in_on_chip_2_buf12_us36_ld194, 0, 40 + gp_in_on_chip_2_buf12_us36_ld193, 30] : 0 <= gp_in_on_chip_2_buf12_us36_ld194 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld193 <= 31 }
  // Write schedule: { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> [25 + 2us_gp_in_on_chip_2_buf1237, 0, 40 + us_gp_in_on_chip_2_buf1238, 29] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us36_us39_8 = gp_in_on_chip_2_buf12_us36.gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us36_us39_8;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_read
//	gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82
inline hw_uint<32> gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_read_bundle_read(gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int gp_in_on_chip_2_buf12_us36_ld194, int gp_in_on_chip_2_buf12_us36_ld193, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82_res = gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82_select(gp_in_on_chip_2_buf12_us36, root, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_82_res);
	return result;
}

// us39_write
//	gp_in_on_chip_2_buf12_us36_us39_8
inline void gp_in_on_chip_2_buf12_us36_us39_write_bundle_write(hw_uint<32>& us39_write, gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_us39_8_res = us39_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us36_us39_8_write(gp_in_on_chip_2_buf12_us36_us39_8_res, gp_in_on_chip_2_buf12_us36, root, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148_cache {
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

struct gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache {
  // Reader addrs...
    // { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_2_buf12_us36_FIFO_buf280[lp_in_on_chip_142, lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148_cache gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148;
};



inline void gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_write(hw_uint<32> & gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83, gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf280, int root, int gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, int gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, int dynamic_address) {
  gp_in_on_chip_2_buf12_us36_FIFO_buf280.gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148.push(gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148_select(gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf280, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148 read pattern: { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_2_buf12_us36_FIFO_buf280[lp_in_on_chip_142, lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // Read schedule : { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> [25 + 2lp_in_on_chip_141, 0, 40 + lp_in_on_chip_142, 51] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283[root = 0, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281] -> [25 + 2gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, 0, 40 + gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, 31] : 0 <= gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83 = gp_in_on_chip_2_buf12_us36_FIFO_buf280.gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83;
  return 0;
}

// # of bundles = 2
// diff43_read
//	gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148
inline hw_uint<32> gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_read_bundle_read(gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf280, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148_res = gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148_select(gp_in_on_chip_2_buf12_us36_FIFO_buf280, root, lp_in_on_chip_141, lp_in_on_chip_142, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_148_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_write
//	gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83
inline void gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_write, gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf280, int root, int gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, int gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_res = load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_write(gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_83_res, gp_in_on_chip_2_buf12_us36_FIFO_buf280, root, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, dynamic_address);
}

struct gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 24
	// # of read delays: 25
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23
	fifo<hw_uint<32> , 24> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(23 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 42
	// # of read delays: 43
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41
	fifo<hw_uint<32> , 42> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(41 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_3_buf20_to_gp_13196199[root = 0, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197] -> gp_in_on_chip_3_buf20[gp_in_on_chip_3_buf20_ld197, gp_in_on_chip_3_buf20_ld198] : 0 <= gp_in_on_chip_3_buf20_ld198 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld197 <= 7 }
    // { load_to_gp_in_on_chip_3_buf20_to_gp_14200203[root = 0, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201] -> gp_in_on_chip_3_buf20[gp_in_on_chip_3_buf20_ld201, gp_in_on_chip_3_buf20_ld202] : 0 <= gp_in_on_chip_3_buf20_ld202 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld201 <= 7 }
  // # of banks: 2
  gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76_cache gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76;
  gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74_cache gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74;
};



inline void gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_write(hw_uint<32> & gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113, gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
  gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76.push(gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113);
  gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74.push(gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76_select(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_3_buf20_ld198, int gp_in_on_chip_3_buf20_ld197, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76 read pattern: { load_to_gp_in_on_chip_3_buf20_to_gp_13196199[root = 0, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197] -> gp_in_on_chip_3_buf20[gp_in_on_chip_3_buf20_ld197, gp_in_on_chip_3_buf20_ld198] : 0 <= gp_in_on_chip_3_buf20_ld198 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld197 <= 7 }
  // Read schedule : { load_to_gp_in_on_chip_3_buf20_to_gp_13196199[root = 0, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197] -> [56 + 2gp_in_on_chip_3_buf20_ld198, 0, 63 + gp_in_on_chip_3_buf20_ld197, 38] : 0 <= gp_in_on_chip_3_buf20_ld198 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld197 <= 7 }
  // Write schedule: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  auto value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113 = gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76.peek(/* one reader or all rams */ (-5 + gp_in_on_chip_3_buf20_ld198 >= 0 && 6 - gp_in_on_chip_3_buf20_ld198 >= 0 && 6 - gp_in_on_chip_3_buf20_ld197 >= 0) ? ((7 - gp_in_on_chip_3_buf20_ld197)) : (-7 + gp_in_on_chip_3_buf20_ld197 == 0 && 3 - gp_in_on_chip_3_buf20_ld198 >= 0 && -2 + gp_in_on_chip_3_buf20_ld198 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld198, 3) >= 0) ? ((16 - 8 * floord(2 + gp_in_on_chip_3_buf20_ld198, 3))) : (6 - gp_in_on_chip_3_buf20_ld197 >= 0 && 3 - gp_in_on_chip_3_buf20_ld198 >= 0 && -2 + gp_in_on_chip_3_buf20_ld198 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld198, 3) >= 0) ? (((23 - gp_in_on_chip_3_buf20_ld197) - 8 * floord(2 + gp_in_on_chip_3_buf20_ld198, 3))) : ((1 - gp_in_on_chip_3_buf20_ld197) % 3 == 0 && -7 + gp_in_on_chip_3_buf20_ld198 == 0 && 4 - gp_in_on_chip_3_buf20_ld197 >= 0) ? (((14 - 2 * gp_in_on_chip_3_buf20_ld197))/3) : (-7 + gp_in_on_chip_3_buf20_ld198 == 0 && 5 - gp_in_on_chip_3_buf20_ld197 >= 0 && -2 + gp_in_on_chip_3_buf20_ld197 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld197, 3) >= 0) ? (((4 - gp_in_on_chip_3_buf20_ld197) + floord(1 + gp_in_on_chip_3_buf20_ld197, 3))) : (-7 + gp_in_on_chip_3_buf20_ld197 == 0 && -4 + gp_in_on_chip_3_buf20_ld198 == 0) ? (8) : ((1 - gp_in_on_chip_3_buf20_ld197) % 3 == 0 && -4 + gp_in_on_chip_3_buf20_ld198 == 0 && 4 - gp_in_on_chip_3_buf20_ld197 >= 0) ? (((38 - 2 * gp_in_on_chip_3_buf20_ld197))/3) : (-7 + gp_in_on_chip_3_buf20_ld197 == 0 && -1 + gp_in_on_chip_3_buf20_ld198 == 0) ? (16) : ((1 - gp_in_on_chip_3_buf20_ld197) % 3 == 0 && -1 + gp_in_on_chip_3_buf20_ld198 == 0 && 4 - gp_in_on_chip_3_buf20_ld197 >= 0) ? (((62 - 2 * gp_in_on_chip_3_buf20_ld197))/3) : (-4 + gp_in_on_chip_3_buf20_ld198 == 0 && -2 + gp_in_on_chip_3_buf20_ld197 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld197, 3) >= 0) ? (((12 - gp_in_on_chip_3_buf20_ld197) + floord(3 + 3*gp_in_on_chip_3_buf20_ld197, 9))) : (-1 + gp_in_on_chip_3_buf20_ld198 == 0 && -2 + gp_in_on_chip_3_buf20_ld197 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld197, 3) >= 0) ? (((20 - gp_in_on_chip_3_buf20_ld197) + floord(3 + 3*gp_in_on_chip_3_buf20_ld197, 9))) : 0);
  return value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74_select(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_3_buf20_ld202, int gp_in_on_chip_3_buf20_ld201, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74 read pattern: { load_to_gp_in_on_chip_3_buf20_to_gp_14200203[root = 0, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201] -> gp_in_on_chip_3_buf20[gp_in_on_chip_3_buf20_ld201, gp_in_on_chip_3_buf20_ld202] : 0 <= gp_in_on_chip_3_buf20_ld202 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld201 <= 7 }
  // Read schedule : { load_to_gp_in_on_chip_3_buf20_to_gp_14200203[root = 0, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201] -> [63 + gp_in_on_chip_3_buf20_ld202, 0, 63 + gp_in_on_chip_3_buf20_ld201, 10] : 0 <= gp_in_on_chip_3_buf20_ld202 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld201 <= 7 }
  // Write schedule: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  auto value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113 = gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_to_gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74.peek(/* one reader or all rams */ (-6 + gp_in_on_chip_3_buf20_ld202 == 0 && 6 - gp_in_on_chip_3_buf20_ld201 >= 0) ? ((7 - gp_in_on_chip_3_buf20_ld201)) : (-7 + gp_in_on_chip_3_buf20_ld201 == 0 && 5 - gp_in_on_chip_3_buf20_ld202 >= 0 && -2 + gp_in_on_chip_3_buf20_ld202 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld202, 3) >= 0) ? (((32 - 8 * gp_in_on_chip_3_buf20_ld202) + 8 * floord(1 + gp_in_on_chip_3_buf20_ld202, 3))) : (6 - gp_in_on_chip_3_buf20_ld201 >= 0 && 5 - gp_in_on_chip_3_buf20_ld202 >= 0 && -2 + gp_in_on_chip_3_buf20_ld202 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld202, 3) >= 0) ? ((((39 - 8 * gp_in_on_chip_3_buf20_ld202) - gp_in_on_chip_3_buf20_ld201) + 8 * floord(1 + gp_in_on_chip_3_buf20_ld202, 3))) : ((1 - gp_in_on_chip_3_buf20_ld201) % 3 == 0 && -7 + gp_in_on_chip_3_buf20_ld202 == 0 && 4 - gp_in_on_chip_3_buf20_ld201 >= 0) ? (((14 - 2 * gp_in_on_chip_3_buf20_ld201))/3) : (-7 + gp_in_on_chip_3_buf20_ld202 == 0 && 5 - gp_in_on_chip_3_buf20_ld201 >= 0 && -2 + gp_in_on_chip_3_buf20_ld201 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld201, 3) >= 0) ? (((4 - gp_in_on_chip_3_buf20_ld201) + floord(1 + gp_in_on_chip_3_buf20_ld201, 3))) : ((1 - gp_in_on_chip_3_buf20_ld202) % 3 == 0 && -7 + gp_in_on_chip_3_buf20_ld201 == 0 && 4 - gp_in_on_chip_3_buf20_ld202 >= 0) ? (((112 - 16 * gp_in_on_chip_3_buf20_ld202))/3) : ((1 - gp_in_on_chip_3_buf20_ld201) % 3 == 0 && (1 - gp_in_on_chip_3_buf20_ld202) % 3 == 0 && 4 - gp_in_on_chip_3_buf20_ld202 >= 0 && 4 - gp_in_on_chip_3_buf20_ld201 >= 0) ? ((((126 - 16 * gp_in_on_chip_3_buf20_ld202) - 2 * gp_in_on_chip_3_buf20_ld201))/3) : ((1 - gp_in_on_chip_3_buf20_ld202) % 3 == 0 && 4 - gp_in_on_chip_3_buf20_ld202 >= 0 && -2 + gp_in_on_chip_3_buf20_ld201 - 3*floord(-1 + gp_in_on_chip_3_buf20_ld201, 3) >= 0) ? (((((124 - 16 * gp_in_on_chip_3_buf20_ld202) - 3 * gp_in_on_chip_3_buf20_ld201) + 3 * floord(3 + 3*gp_in_on_chip_3_buf20_ld201, 9)))/3) : 0);
  return value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113;
  return 0;
}

// # of bundles = 3
// gp_in_on_chip_322_merged163_write
//	gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113
inline void gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_write_bundle_write(hw_uint<32>& gp_in_on_chip_322_merged163_write, gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_res = gp_in_on_chip_322_merged163_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_write(gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_113_res, gp_in_on_chip_3_buf20, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
}

// load_to_gp_in_on_chip_3_buf20_to_gp_13196199_read
//	gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76
inline hw_uint<32> gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_read_bundle_read(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_3_buf20_ld198, int gp_in_on_chip_3_buf20_ld197, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76_res = gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76_select(gp_in_on_chip_3_buf20, root, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_76_res);
	return result;
}

// load_to_gp_in_on_chip_3_buf20_to_gp_14200203_read
//	gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74
inline hw_uint<32> gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_read_bundle_read(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_3_buf20_ld202, int gp_in_on_chip_3_buf20_ld201, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74_res = gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74_select(gp_in_on_chip_3_buf20, root, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_74_res);
	return result;
}

struct gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_to_gp_in_on_chip_3_buf20_FIFO_buf284_us31_11_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 8
	// # of read delays: 9
  // 0, 0, 1, 2, 3, 4, 5, 6, 7
	fifo<hw_uint<32> , 8> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_FIFO_buf284_cache {
  // Reader addrs...
    // { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> gp_in_on_chip_3_buf20_FIFO_buf284[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 and -1 + us_gp_in_on_chip_3_buf2030 <= 2o0 <= us_gp_in_on_chip_3_buf2030 and -1 + us_gp_in_on_chip_3_buf2029 <= 2o1 <= us_gp_in_on_chip_3_buf2029 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_to_gp_in_on_chip_3_buf20_FIFO_buf284_us31_11_cache gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_to_gp_in_on_chip_3_buf20_FIFO_buf284_us31_11;
};



inline void gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_write(hw_uint<32> & gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79, gp_in_on_chip_3_buf20_FIFO_buf284_cache& gp_in_on_chip_3_buf20_FIFO_buf284, int root, int gp_in_on_chip_3_buf20_to_gp_13196_ld286, int gp_in_on_chip_3_buf20_to_gp_13196_ld285, int dynamic_address) {
  gp_in_on_chip_3_buf20_FIFO_buf284.gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_to_gp_in_on_chip_3_buf20_FIFO_buf284_us31_11.push(gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_FIFO_buf284_us31_11_select(gp_in_on_chip_3_buf20_FIFO_buf284_cache& gp_in_on_chip_3_buf20_FIFO_buf284, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_FIFO_buf284_us31_11 read pattern: { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> gp_in_on_chip_3_buf20_FIFO_buf284[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 and -1 + us_gp_in_on_chip_3_buf2030 <= 2o0 <= us_gp_in_on_chip_3_buf2030 and -1 + us_gp_in_on_chip_3_buf2029 <= 2o1 <= us_gp_in_on_chip_3_buf2029 }
  // Read schedule : { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> [56 + us_gp_in_on_chip_3_buf2029, 0, 63 + us_gp_in_on_chip_3_buf2030, 40] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_3_buf20_FIFO_buf284287[root = 0, gp_in_on_chip_3_buf20_to_gp_13196_ld286, gp_in_on_chip_3_buf20_to_gp_13196_ld285] -> [56 + 2gp_in_on_chip_3_buf20_to_gp_13196_ld286, 0, 63 + gp_in_on_chip_3_buf20_to_gp_13196_ld285, 39] : 0 <= gp_in_on_chip_3_buf20_to_gp_13196_ld286 <= 7 and 0 <= gp_in_on_chip_3_buf20_to_gp_13196_ld285 <= 7 }
  auto value_gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79 = gp_in_on_chip_3_buf20_FIFO_buf284.gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_to_gp_in_on_chip_3_buf20_FIFO_buf284_us31_11.peek(/* one reader or all rams */ ((-us_gp_in_on_chip_3_buf2029) % 2 == 0 && -1 + us_gp_in_on_chip_3_buf2030 >= 0 && 2 - us_gp_in_on_chip_3_buf2030 >= 0) ? (1) : (((-us_gp_in_on_chip_3_buf2029) % 2 == 0 && -9 + us_gp_in_on_chip_3_buf2030 >= 0 && 13 - us_gp_in_on_chip_3_buf2030 >= 0) || ((-1 - us_gp_in_on_chip_3_buf2029) % 2 == 0 && 13 - us_gp_in_on_chip_3_buf2030 >= 0)) ? ((7 - floord(2*us_gp_in_on_chip_3_buf2030, 4))) : ((-us_gp_in_on_chip_3_buf2029) % 2 == 0 && -8 + us_gp_in_on_chip_3_buf2030 == 0) ? (3) : ((-us_gp_in_on_chip_3_buf2029) % 2 == 0 && -3 + us_gp_in_on_chip_3_buf2030 >= 0 && 7 - us_gp_in_on_chip_3_buf2030 >= 0) ? ((us_gp_in_on_chip_3_buf2030 - floord(2*us_gp_in_on_chip_3_buf2030, 4))) : 0);
  return value_gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_write
//	gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79
inline void gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_write, gp_in_on_chip_3_buf20_FIFO_buf284_cache& gp_in_on_chip_3_buf20_FIFO_buf284, int root, int gp_in_on_chip_3_buf20_to_gp_13196_ld286, int gp_in_on_chip_3_buf20_to_gp_13196_ld285, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_res = load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_write(gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_79_res, gp_in_on_chip_3_buf20_FIFO_buf284, root, gp_in_on_chip_3_buf20_to_gp_13196_ld286, gp_in_on_chip_3_buf20_to_gp_13196_ld285, dynamic_address);
}

// us31_read
//	gp_in_on_chip_3_buf20_FIFO_buf284_us31_11
inline hw_uint<32> gp_in_on_chip_3_buf20_FIFO_buf284_us31_read_bundle_read(gp_in_on_chip_3_buf20_FIFO_buf284_cache& gp_in_on_chip_3_buf20_FIFO_buf284, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_FIFO_buf284_us31_11

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_FIFO_buf284_us31_11_res = gp_in_on_chip_3_buf20_FIFO_buf284_us31_11_select(gp_in_on_chip_3_buf20_FIFO_buf284, root, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_FIFO_buf284_us31_11_res);
	return result;
}

struct gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_to_gp_in_on_chip_3_buf20_FIFO_buf288_us59_5_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 37
	// # of read delays: 38
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36
	fifo<hw_uint<32> , 37> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(36 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_FIFO_buf288_cache {
  // Reader addrs...
    // { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> gp_in_on_chip_3_buf20_FIFO_buf288[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 and -1 + us_gp_in_on_chip_3_buf2058 <= 2o0 <= us_gp_in_on_chip_3_buf2058 and -1 + us_gp_in_on_chip_3_buf2057 <= 2o1 <= us_gp_in_on_chip_3_buf2057 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_to_gp_in_on_chip_3_buf20_FIFO_buf288_us59_5_cache gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_to_gp_in_on_chip_3_buf20_FIFO_buf288_us59_5;
};



inline void gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_write(hw_uint<32> & gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77, gp_in_on_chip_3_buf20_FIFO_buf288_cache& gp_in_on_chip_3_buf20_FIFO_buf288, int root, int gp_in_on_chip_3_buf20_to_gp_14200_ld290, int gp_in_on_chip_3_buf20_to_gp_14200_ld289, int dynamic_address) {
  gp_in_on_chip_3_buf20_FIFO_buf288.gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_to_gp_in_on_chip_3_buf20_FIFO_buf288_us59_5.push(gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_FIFO_buf288_us59_5_select(gp_in_on_chip_3_buf20_FIFO_buf288_cache& gp_in_on_chip_3_buf20_FIFO_buf288, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_FIFO_buf288_us59_5 read pattern: { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> gp_in_on_chip_3_buf20_FIFO_buf288[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 and -1 + us_gp_in_on_chip_3_buf2058 <= 2o0 <= us_gp_in_on_chip_3_buf2058 and -1 + us_gp_in_on_chip_3_buf2057 <= 2o1 <= us_gp_in_on_chip_3_buf2057 }
  // Read schedule : { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> [63 + us_gp_in_on_chip_3_buf2057, 0, 63 + us_gp_in_on_chip_3_buf2058, 12] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_3_buf20_FIFO_buf288291[root = 0, gp_in_on_chip_3_buf20_to_gp_14200_ld290, gp_in_on_chip_3_buf20_to_gp_14200_ld289] -> [63 + gp_in_on_chip_3_buf20_to_gp_14200_ld290, 0, 63 + gp_in_on_chip_3_buf20_to_gp_14200_ld289, 11] : 0 <= gp_in_on_chip_3_buf20_to_gp_14200_ld290 <= 7 and 0 <= gp_in_on_chip_3_buf20_to_gp_14200_ld289 <= 7 }
  auto value_gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77 = gp_in_on_chip_3_buf20_FIFO_buf288.gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_to_gp_in_on_chip_3_buf20_FIFO_buf288_us59_5.peek(/* one reader or all rams */ (us_gp_in_on_chip_3_buf2057 == 0 && -1 + us_gp_in_on_chip_3_buf2058 >= 0 && 2 - us_gp_in_on_chip_3_buf2058 >= 0) ? (1) : (-1 + us_gp_in_on_chip_3_buf2057 >= 0 && 2 - us_gp_in_on_chip_3_buf2057 >= 0 && -14 + us_gp_in_on_chip_3_buf2058 >= 0) ? (8) : (us_gp_in_on_chip_3_buf2058 == 0 && -1 + us_gp_in_on_chip_3_buf2057 >= 0 && 2 - us_gp_in_on_chip_3_buf2057 >= 0) ? (8) : (-8 + us_gp_in_on_chip_3_buf2058 == 0 && -1 + us_gp_in_on_chip_3_buf2057 >= 0 && 2 - us_gp_in_on_chip_3_buf2057 >= 0) ? (11) : (-9 + us_gp_in_on_chip_3_buf2057 >= 0 && 13 - us_gp_in_on_chip_3_buf2057 >= 0 && -14 + us_gp_in_on_chip_3_buf2058 >= 0) ? ((56 - 8 * floord(us_gp_in_on_chip_3_buf2057, 2))) : (-8 + us_gp_in_on_chip_3_buf2057 == 0 && -14 + us_gp_in_on_chip_3_buf2058 >= 0) ? (24) : ((-3 + us_gp_in_on_chip_3_buf2057 >= 0 && 7 - us_gp_in_on_chip_3_buf2057 >= 0 && -14 + us_gp_in_on_chip_3_buf2058 >= 0) || (us_gp_in_on_chip_3_buf2058 == 0 && -3 + us_gp_in_on_chip_3_buf2057 >= 0 && 7 - us_gp_in_on_chip_3_buf2057 >= 0)) ? ((8 * us_gp_in_on_chip_3_buf2057 - 8 * floord(us_gp_in_on_chip_3_buf2057, 2))) : (-8 + us_gp_in_on_chip_3_buf2058 == 0 && -3 + us_gp_in_on_chip_3_buf2057 >= 0 && 7 - us_gp_in_on_chip_3_buf2057 >= 0) ? (((3 + 8 * us_gp_in_on_chip_3_buf2057) - 8 * floord(us_gp_in_on_chip_3_buf2057, 2))) : ((us_gp_in_on_chip_3_buf2057 == 0 && -9 + us_gp_in_on_chip_3_buf2058 >= 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0) || (-14 + us_gp_in_on_chip_3_buf2057 >= 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0)) ? ((7 - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-8 + us_gp_in_on_chip_3_buf2057 == 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0) ? ((31 - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-8 + us_gp_in_on_chip_3_buf2058 == 0 && us_gp_in_on_chip_3_buf2057 == 0) ? (3) : (us_gp_in_on_chip_3_buf2057 == 0 && -3 + us_gp_in_on_chip_3_buf2058 >= 0 && 7 - us_gp_in_on_chip_3_buf2058 >= 0) ? ((us_gp_in_on_chip_3_buf2058 - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-1 + us_gp_in_on_chip_3_buf2057 >= 0 && 2 - us_gp_in_on_chip_3_buf2057 >= 0 && -9 + us_gp_in_on_chip_3_buf2058 >= 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0) ? ((15 - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-1 + us_gp_in_on_chip_3_buf2057 >= 0 && 2 - us_gp_in_on_chip_3_buf2057 >= 0 && -1 + us_gp_in_on_chip_3_buf2058 >= 0 && 7 - us_gp_in_on_chip_3_buf2058 >= 0) ? (((8 + us_gp_in_on_chip_3_buf2058) - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-9 + us_gp_in_on_chip_3_buf2057 >= 0 && 13 - us_gp_in_on_chip_3_buf2057 >= 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0) ? (((63 - 8 * floord(us_gp_in_on_chip_3_buf2057, 2)) - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-3 + us_gp_in_on_chip_3_buf2057 >= 0 && 7 - us_gp_in_on_chip_3_buf2057 >= 0 && -9 + us_gp_in_on_chip_3_buf2058 >= 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0) ? ((((7 + 8 * us_gp_in_on_chip_3_buf2057) - 8 * floord(us_gp_in_on_chip_3_buf2057, 2)) - floord(us_gp_in_on_chip_3_buf2058, 2))) : (-3 + us_gp_in_on_chip_3_buf2057 >= 0 && 7 - us_gp_in_on_chip_3_buf2057 >= 0 && -1 + us_gp_in_on_chip_3_buf2058 >= 0 && 7 - us_gp_in_on_chip_3_buf2058 >= 0) ? ((((8 * us_gp_in_on_chip_3_buf2057 + us_gp_in_on_chip_3_buf2058) - 8 * floord(us_gp_in_on_chip_3_buf2057, 2)) - floord(us_gp_in_on_chip_3_buf2058, 2))) : 0);
  return value_gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_write
//	gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77
inline void gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_write, gp_in_on_chip_3_buf20_FIFO_buf288_cache& gp_in_on_chip_3_buf20_FIFO_buf288, int root, int gp_in_on_chip_3_buf20_to_gp_14200_ld290, int gp_in_on_chip_3_buf20_to_gp_14200_ld289, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_res = load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_write(gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_77_res, gp_in_on_chip_3_buf20_FIFO_buf288, root, gp_in_on_chip_3_buf20_to_gp_14200_ld290, gp_in_on_chip_3_buf20_to_gp_14200_ld289, dynamic_address);
}

// us59_read
//	gp_in_on_chip_3_buf20_FIFO_buf288_us59_5
inline hw_uint<32> gp_in_on_chip_3_buf20_FIFO_buf288_us59_read_bundle_read(gp_in_on_chip_3_buf20_FIFO_buf288_cache& gp_in_on_chip_3_buf20_FIFO_buf288, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_FIFO_buf288_us59_5

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_FIFO_buf288_us59_5_res = gp_in_on_chip_3_buf20_FIFO_buf288_us59_5_select(gp_in_on_chip_3_buf20_FIFO_buf288, root, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_FIFO_buf288_us59_5_res);
	return result;
}

struct gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us28_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> gp_in_on_chip_3_buf20_us28[gp_in_on_chip_3_buf20_us28_ld205, gp_in_on_chip_3_buf20_us28_ld206] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70_cache gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70;
};



inline void gp_in_on_chip_3_buf20_us28_us31_10_write(hw_uint<32> & gp_in_on_chip_3_buf20_us28_us31_10, gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
  gp_in_on_chip_3_buf20_us28.gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70.push(gp_in_on_chip_3_buf20_us28_us31_10);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70_select(gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int gp_in_on_chip_3_buf20_us28_ld206, int gp_in_on_chip_3_buf20_us28_ld205, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70 read pattern: { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> gp_in_on_chip_3_buf20_us28[gp_in_on_chip_3_buf20_us28_ld205, gp_in_on_chip_3_buf20_us28_ld206] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15 }
  // Read schedule : { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> [56 + gp_in_on_chip_3_buf20_us28_ld206, 0, 63 + gp_in_on_chip_3_buf20_us28_ld205, 41] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15 }
  // Write schedule: { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> [56 + us_gp_in_on_chip_3_buf2029, 0, 63 + us_gp_in_on_chip_3_buf2030, 40] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us28_us31_10 = gp_in_on_chip_3_buf20_us28.gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us28_us31_10;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_read
//	gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70
inline hw_uint<32> gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_read_bundle_read(gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int gp_in_on_chip_3_buf20_us28_ld206, int gp_in_on_chip_3_buf20_us28_ld205, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70_res = gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70_select(gp_in_on_chip_3_buf20_us28, root, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_70_res);
	return result;
}

// us31_write
//	gp_in_on_chip_3_buf20_us28_us31_10
inline void gp_in_on_chip_3_buf20_us28_us31_write_bundle_write(hw_uint<32>& us31_write, gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_us31_10_res = us31_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us28_us31_10_write(gp_in_on_chip_3_buf20_us28_us31_10_res, gp_in_on_chip_3_buf20_us28, root, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030, dynamic_address);
}

struct gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache {
  // Reader addrs...
    // { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_3_buf20_us28_FIFO_buf292[lp_in_on_chip_234, lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151_cache gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151;
};



inline void gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_write(hw_uint<32> & gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71, gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf292, int root, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, int dynamic_address) {
  gp_in_on_chip_3_buf20_us28_FIFO_buf292.gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151.push(gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151_select(gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf292, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151 read pattern: { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_3_buf20_us28_FIFO_buf292[lp_in_on_chip_234, lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // Read schedule : { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> [56 + lp_in_on_chip_233, 0, 63 + lp_in_on_chip_234, 43] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295[root = 0, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293] -> [56 + gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, 0, 63 + gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, 42] : 0 <= gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71 = gp_in_on_chip_3_buf20_us28_FIFO_buf292.gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71;
  return 0;
}

// # of bundles = 2
// diff35_read
//	gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151
inline hw_uint<32> gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_read_bundle_read(gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf292, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151_res = gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151_select(gp_in_on_chip_3_buf20_us28_FIFO_buf292, root, lp_in_on_chip_233, lp_in_on_chip_234, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_151_res);
	return result;
}

// load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_write
//	gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71
inline void gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_write, gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf292, int root, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_res = load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_write(gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_71_res, gp_in_on_chip_3_buf20_us28_FIFO_buf292, root, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, dynamic_address);
}

struct gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us56_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211[root = 0, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209] -> gp_in_on_chip_3_buf20_us56[gp_in_on_chip_3_buf20_us56_ld209, gp_in_on_chip_3_buf20_us56_ld210] : 0 <= gp_in_on_chip_3_buf20_us56_ld210 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld209 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66_cache gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66;
};



inline void gp_in_on_chip_3_buf20_us56_us59_4_write(hw_uint<32> & gp_in_on_chip_3_buf20_us56_us59_4, gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
  gp_in_on_chip_3_buf20_us56.gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66.push(gp_in_on_chip_3_buf20_us56_us59_4);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66_select(gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int gp_in_on_chip_3_buf20_us56_ld210, int gp_in_on_chip_3_buf20_us56_ld209, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66 read pattern: { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211[root = 0, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209] -> gp_in_on_chip_3_buf20_us56[gp_in_on_chip_3_buf20_us56_ld209, gp_in_on_chip_3_buf20_us56_ld210] : 0 <= gp_in_on_chip_3_buf20_us56_ld210 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld209 <= 15 }
  // Read schedule : { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211[root = 0, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209] -> [63 + gp_in_on_chip_3_buf20_us56_ld210, 0, 63 + gp_in_on_chip_3_buf20_us56_ld209, 13] : 0 <= gp_in_on_chip_3_buf20_us56_ld210 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld209 <= 15 }
  // Write schedule: { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> [63 + us_gp_in_on_chip_3_buf2057, 0, 63 + us_gp_in_on_chip_3_buf2058, 12] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us56_us59_4 = gp_in_on_chip_3_buf20_us56.gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us56_us59_4;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_read
//	gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66
inline hw_uint<32> gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_read_bundle_read(gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int gp_in_on_chip_3_buf20_us56_ld210, int gp_in_on_chip_3_buf20_us56_ld209, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66_res = gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66_select(gp_in_on_chip_3_buf20_us56, root, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_66_res);
	return result;
}

// us59_write
//	gp_in_on_chip_3_buf20_us56_us59_4
inline void gp_in_on_chip_3_buf20_us56_us59_write_bundle_write(hw_uint<32>& us59_write, gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_us59_4_res = us59_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us56_us59_4_write(gp_in_on_chip_3_buf20_us56_us59_4_res, gp_in_on_chip_3_buf20_us56, root, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058, dynamic_address);
}

struct gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 128
	// # of read delays: 128
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127
	fifo<hw_uint<32> , 128> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(127 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache {
  // Reader addrs...
    // { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> gp_in_on_chip_3_buf20_us56_FIFO_buf296[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20_cache gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20;
};



inline void gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_write(hw_uint<32> & gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67, gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf296, int root, int gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, int gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, int dynamic_address) {
  gp_in_on_chip_3_buf20_us56_FIFO_buf296.gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20.push(gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20_select(gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf296, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20 read pattern: { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> gp_in_on_chip_3_buf20_us56_FIFO_buf296[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // Read schedule : { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5253, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5254, 15] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299[root = 0, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297] -> [63 + gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, 0, 63 + gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, 14] : 0 <= gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67 = gp_in_on_chip_3_buf20_us56_FIFO_buf296.gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20.peek(/* one reader or all rams */ (-1 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0) ? (1) : ((-15 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0) || (lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0)) ? (16) : (-8 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0) ? (23) : (-15 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -8 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0) ? (112) : ((-15 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0) || (lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0)) ? (16 * lp_in_on_chip_2_buf32_reconstruct_lp5253) : (-8 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0) ? ((7 + 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253)) : (-15 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -9 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0) ? ((240 - 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253)) : (-8 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0) ? (7) : (lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? (lp_in_on_chip_2_buf32_reconstruct_lp5254) : ((lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && -9 + lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) || (-15 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0)) ? ((15 - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && -1 + lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? ((16 + lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && -9 + lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? ((31 - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-8 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? ((127 - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-2 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && -1 + lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? ((16 * lp_in_on_chip_2_buf32_reconstruct_lp5253 + lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-2 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && -9 + lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? (((15 + 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253) - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-9 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? (((255 - 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253) - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : 0);
  return value_gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_write
//	gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67
inline void gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_write, gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf296, int root, int gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, int gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_res = load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_write(gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_67_res, gp_in_on_chip_3_buf20_us56_FIFO_buf296, root, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, dynamic_address);
}

// rc60_read
//	gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20
inline hw_uint<32> gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_read_bundle_read(gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf296, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20_res = gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20_select(gp_in_on_chip_3_buf20_us56_FIFO_buf296, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_20_res);
	return result;
}

struct in_on_chip_pw_math_in03_23_merged_banks_2_cache {
	// RAM Box: {[0, 70], [0, 70]}
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

struct in_on_chip_cache {
  // Reader addrs...
    // { load_to_in_on_chip_to_gp_0212215[root = 0, in_on_chip_ld214, in_on_chip_ld213] -> in_on_chip[in_on_chip_ld213, in_on_chip_ld214] : 0 <= in_on_chip_ld214 <= 70 and 0 <= in_on_chip_ld213 <= 70 }
    // { load_to_in_on_chip_to_gp_3216219[root = 0, in_on_chip_ld218, in_on_chip_ld217] -> in_on_chip[in_on_chip_ld217, in_on_chip_ld218] : 7 <= in_on_chip_ld218 <= 70 and 7 <= in_on_chip_ld217 <= 70 }
  // # of banks: 1
  in_on_chip_pw_math_in03_23_merged_banks_2_cache in_on_chip_pw_math_in03_23_merged_banks_2;
};



inline void in_on_chip_pw_math_in03_23_write(hw_uint<32> & in_on_chip_pw_math_in03_23, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
  in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_2.push(in_on_chip_pw_math_in03_23);
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_0212215_60_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld214, int in_on_chip_ld213, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_0212215_60 read pattern: { load_to_in_on_chip_to_gp_0212215[root = 0, in_on_chip_ld214, in_on_chip_ld213] -> in_on_chip[in_on_chip_ld213, in_on_chip_ld214] : 0 <= in_on_chip_ld214 <= 70 and 0 <= in_on_chip_ld213 <= 70 }
  // Read schedule : { load_to_in_on_chip_to_gp_0212215[root = 0, in_on_chip_ld214, in_on_chip_ld213] -> [in_on_chip_ld214, 0, in_on_chip_ld213, 1] : 0 <= in_on_chip_ld214 <= 70 and 0 <= in_on_chip_ld213 <= 70 }
  // Write schedule: { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, 0, pw_math_in02, 0] : 0 <= pw_math_in01 <= 70 and 0 <= pw_math_in02 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_2.peek_0();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_3216219_58_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld218, int in_on_chip_ld217, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_3216219_58 read pattern: { load_to_in_on_chip_to_gp_3216219[root = 0, in_on_chip_ld218, in_on_chip_ld217] -> in_on_chip[in_on_chip_ld217, in_on_chip_ld218] : 7 <= in_on_chip_ld218 <= 70 and 7 <= in_on_chip_ld217 <= 70 }
  // Read schedule : { load_to_in_on_chip_to_gp_3216219[root = 0, in_on_chip_ld218, in_on_chip_ld217] -> [in_on_chip_ld218, 0, in_on_chip_ld217, 25] : 7 <= in_on_chip_ld218 <= 70 and 7 <= in_on_chip_ld217 <= 70 }
  // Write schedule: { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, 0, pw_math_in02, 0] : 0 <= pw_math_in01 <= 70 and 0 <= pw_math_in02 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_2.peek_0();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

// # of bundles = 3
// load_to_in_on_chip_to_gp_0212215_read
//	in_on_chip_load_to_in_on_chip_to_gp_0212215_60
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_0212215_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld214, int in_on_chip_ld213, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_0212215_60

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_0212215_60_res = in_on_chip_load_to_in_on_chip_to_gp_0212215_60_select(in_on_chip, root, in_on_chip_ld214, in_on_chip_ld213, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_0212215_60_res);
	return result;
}

// load_to_in_on_chip_to_gp_3216219_read
//	in_on_chip_load_to_in_on_chip_to_gp_3216219_58
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_3216219_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld218, int in_on_chip_ld217, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_3216219_58

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_3216219_58_res = in_on_chip_load_to_in_on_chip_to_gp_3216219_58_select(in_on_chip, root, in_on_chip_ld218, in_on_chip_ld217, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_3216219_58_res);
	return result;
}

// pw_math_in03_write
//	in_on_chip_pw_math_in03_23
inline void in_on_chip_pw_math_in03_write_bundle_write(hw_uint<32>& pw_math_in03_write, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
	hw_uint<32>  in_on_chip_pw_math_in03_23_res = pw_math_in03_write.extract<0, 31>();
	in_on_chip_pw_math_in03_23_write(in_on_chip_pw_math_in03_23_res, in_on_chip, root, pw_math_in01, pw_math_in02, dynamic_address);
}

struct in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9_cache {
	// RAM Box: {[0, 70], [0, 70]}
	// Capacity: 145
	// # of read delays: 9
  // 0, 1, 2, 71, 72, 73, 142, 143, 144
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 68> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 68> f11;
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

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_71() {
		return f6;
	}

	inline hw_uint<32>  peek_72() {
		return f8;
	}

	inline hw_uint<32>  peek_73() {
		return f10;
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_142() {
		return f12;
	}

	inline hw_uint<32>  peek_143() {
		return f14;
	}

	inline hw_uint<32>  peek_144() {
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
    // cap: 1 reading from capacity: 68
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
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
    // cap: 1 reading from capacity: 68
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
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

struct in_on_chip_FIFO_buf300_cache {
  // Reader addrs...
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // # of banks: 1
  in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9_cache in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9;
};



inline void in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_write(hw_uint<32> & in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63, in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int in_on_chip_to_gp_0212_ld302, int in_on_chip_to_gp_0212_ld301, int dynamic_address) {
  in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.push(in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63);
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_2();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_1();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_0();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_73();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_72();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_71();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_144();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_143();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

inline hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142_select(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip_FIFO_buf300[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
  auto value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63 = in_on_chip_FIFO_buf300.in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_merged_banks_9.peek_142();
  return value_in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_16_merged157_read
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141
//	in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142
inline hw_uint<288> in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_read_bundle_read(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  // # of ports in bundle: 9
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141
    // in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142

	hw_uint<288> result;
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<0, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_134_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<32, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_135_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<64, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_136_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<96, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_137_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<128, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_138_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<160, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_139_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<192, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_140_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<224, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_141_res);
	hw_uint<32>  in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142_res = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142_select(in_on_chip_FIFO_buf300, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<256, 288>(result, in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_142_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf300303_write
//	in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63
inline void in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf300303_write, in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int in_on_chip_to_gp_0212_ld302, int in_on_chip_to_gp_0212_ld301, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_res = load_to_in_on_chip_FIFO_buf300303_write.extract<0, 31>();
	in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_write(in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_63_res, in_on_chip_FIFO_buf300, root, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301, dynamic_address);
}

struct in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_to_in_on_chip_FIFO_buf304_diff51_144_cache {
	// RAM Box: {[7, 70], [7, 70]}
	// Capacity: 576
	// # of read delays: 576
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575
	fifo<hw_uint<32> , 576> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(575 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_on_chip_FIFO_buf304_cache {
  // Reader addrs...
    // { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> in_on_chip_FIFO_buf304[7 + lp_in_on_chip_050, 7 + lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // # of banks: 1
  in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_to_in_on_chip_FIFO_buf304_diff51_144_cache in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_to_in_on_chip_FIFO_buf304_diff51_144;
};



inline void in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_write(hw_uint<32> & in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61, in_on_chip_FIFO_buf304_cache& in_on_chip_FIFO_buf304, int root, int in_on_chip_to_gp_3216_ld306, int in_on_chip_to_gp_3216_ld305, int dynamic_address) {
  in_on_chip_FIFO_buf304.in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_to_in_on_chip_FIFO_buf304_diff51_144.push(in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61);
}

inline hw_uint<32>  in_on_chip_FIFO_buf304_diff51_144_select(in_on_chip_FIFO_buf304_cache& in_on_chip_FIFO_buf304, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf304_diff51_144 read pattern: { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> in_on_chip_FIFO_buf304[7 + lp_in_on_chip_050, 7 + lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // Read schedule : { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> [15 + lp_in_on_chip_049, 1, lp_in_on_chip_050, 0] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf304307[root = 0, in_on_chip_to_gp_3216_ld306, in_on_chip_to_gp_3216_ld305] -> [in_on_chip_to_gp_3216_ld306, 0, in_on_chip_to_gp_3216_ld305, 26] : 7 <= in_on_chip_to_gp_3216_ld306 <= 70 and 7 <= in_on_chip_to_gp_3216_ld305 <= 70 }
  auto value_in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61 = in_on_chip_FIFO_buf304.in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_to_in_on_chip_FIFO_buf304_diff51_144.peek(/* one reader or all rams */ (-63 + lp_in_on_chip_050 == 0 && -56 + lp_in_on_chip_049 == 0) ? (448) : (-63 + lp_in_on_chip_050 == 0 && 55 - lp_in_on_chip_049 >= 0) ? (512) : (-63 + lp_in_on_chip_050 == 0 && -57 + lp_in_on_chip_049 >= 0 && 62 - lp_in_on_chip_049 >= 0) ? ((4032 - 64 * lp_in_on_chip_049)) : (-63 + lp_in_on_chip_049 == 0 && 62 - lp_in_on_chip_050 >= 0) ? ((63 - lp_in_on_chip_050)) : (-56 + lp_in_on_chip_049 == 0 && 62 - lp_in_on_chip_050 >= 0) ? ((511 - lp_in_on_chip_050)) : (62 - lp_in_on_chip_050 >= 0 && 55 - lp_in_on_chip_049 >= 0) ? ((575 - lp_in_on_chip_050)) : (-57 + lp_in_on_chip_049 >= 0 && 62 - lp_in_on_chip_049 >= 0 && 62 - lp_in_on_chip_050 >= 0) ? (((4095 - 64 * lp_in_on_chip_049) - lp_in_on_chip_050)) : 0);
  return value_in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61;
  return 0;
}

// # of bundles = 2
// diff51_read
//	in_on_chip_FIFO_buf304_diff51_144
inline hw_uint<32> in_on_chip_FIFO_buf304_diff51_read_bundle_read(in_on_chip_FIFO_buf304_cache& in_on_chip_FIFO_buf304, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_FIFO_buf304_diff51_144

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_FIFO_buf304_diff51_144_res = in_on_chip_FIFO_buf304_diff51_144_select(in_on_chip_FIFO_buf304, root, lp_in_on_chip_049, lp_in_on_chip_050, dynamic_address);
	set_at<0, 32>(result, in_on_chip_FIFO_buf304_diff51_144_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf304307_write
//	in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61
inline void in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf304307_write, in_on_chip_FIFO_buf304_cache& in_on_chip_FIFO_buf304, int root, int in_on_chip_to_gp_3216_ld306, int in_on_chip_to_gp_3216_ld305, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_res = load_to_in_on_chip_FIFO_buf304307_write.extract<0, 31>();
	in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_write(in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_61_res, in_on_chip_FIFO_buf304, root, in_on_chip_to_gp_3216_ld306, in_on_chip_to_gp_3216_ld305, dynamic_address);
}

struct lp_in_on_chip_0_buf48_diff51_143_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1088
	// # of read delays: 1088
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087
	fifo<hw_uint<32> , 1088> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1087 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_0_buf48_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_0_buf48_to_gp_4220223[root = 0, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221] -> lp_in_on_chip_0_buf48[lp_in_on_chip_0_buf48_ld221, lp_in_on_chip_0_buf48_ld222] : 0 <= lp_in_on_chip_0_buf48_ld222 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld221 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_diff51_143_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50_cache lp_in_on_chip_0_buf48_diff51_143_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50;
};



inline void lp_in_on_chip_0_buf48_diff51_143_write(hw_uint<32> & lp_in_on_chip_0_buf48_diff51_143, lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
  lp_in_on_chip_0_buf48.lp_in_on_chip_0_buf48_diff51_143_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50.push(lp_in_on_chip_0_buf48_diff51_143);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50_select(lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_0_buf48_ld222, int lp_in_on_chip_0_buf48_ld221, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50 read pattern: { load_to_lp_in_on_chip_0_buf48_to_gp_4220223[root = 0, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221] -> lp_in_on_chip_0_buf48[lp_in_on_chip_0_buf48_ld221, lp_in_on_chip_0_buf48_ld222] : 0 <= lp_in_on_chip_0_buf48_ld222 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld221 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf48_to_gp_4220223[root = 0, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221] -> [31 + lp_in_on_chip_0_buf48_ld222, 5, lp_in_on_chip_0_buf48_ld221, 0] : 0 <= lp_in_on_chip_0_buf48_ld222 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld221 <= 63 }
  // Write schedule: { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> [15 + lp_in_on_chip_049, 1, lp_in_on_chip_050, 0] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  auto value_lp_in_on_chip_0_buf48_diff51_143 = lp_in_on_chip_0_buf48.lp_in_on_chip_0_buf48_diff51_143_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50.peek(/* one reader or all rams */ (-63 + lp_in_on_chip_0_buf48_ld221 == 0 && -48 + lp_in_on_chip_0_buf48_ld222 == 0) ? (960) : (-63 + lp_in_on_chip_0_buf48_ld221 == 0 && 47 - lp_in_on_chip_0_buf48_ld222 >= 0) ? (1024) : (-63 + lp_in_on_chip_0_buf48_ld221 == 0 && -49 + lp_in_on_chip_0_buf48_ld222 >= 0 && 62 - lp_in_on_chip_0_buf48_ld222 >= 0) ? ((4032 - 64 * lp_in_on_chip_0_buf48_ld222)) : (-63 + lp_in_on_chip_0_buf48_ld222 == 0 && 62 - lp_in_on_chip_0_buf48_ld221 >= 0) ? ((63 - lp_in_on_chip_0_buf48_ld221)) : (-48 + lp_in_on_chip_0_buf48_ld222 == 0 && 62 - lp_in_on_chip_0_buf48_ld221 >= 0) ? ((1023 - lp_in_on_chip_0_buf48_ld221)) : (62 - lp_in_on_chip_0_buf48_ld221 >= 0 && 47 - lp_in_on_chip_0_buf48_ld222 >= 0) ? ((1087 - lp_in_on_chip_0_buf48_ld221)) : (-49 + lp_in_on_chip_0_buf48_ld222 >= 0 && 62 - lp_in_on_chip_0_buf48_ld222 >= 0 && 62 - lp_in_on_chip_0_buf48_ld221 >= 0) ? (((4095 - 64 * lp_in_on_chip_0_buf48_ld222) - lp_in_on_chip_0_buf48_ld221)) : 0);
  return value_lp_in_on_chip_0_buf48_diff51_143;
  return 0;
}

// # of bundles = 2
// diff51_write
//	lp_in_on_chip_0_buf48_diff51_143
inline void lp_in_on_chip_0_buf48_diff51_write_bundle_write(hw_uint<32>& diff51_write, lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_diff51_143_res = diff51_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_diff51_143_write(lp_in_on_chip_0_buf48_diff51_143_res, lp_in_on_chip_0_buf48, root, lp_in_on_chip_049, lp_in_on_chip_050, dynamic_address);
}

// load_to_lp_in_on_chip_0_buf48_to_gp_4220223_read
//	lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50
inline hw_uint<32> lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_read_bundle_read(lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_0_buf48_ld222, int lp_in_on_chip_0_buf48_ld221, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50_res = lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50_select(lp_in_on_chip_0_buf48, root, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_50_res);
	return result;
}

struct lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_to_lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf48_FIFO_buf308_cache {
  // Reader addrs...
    // { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_0_buf48_FIFO_buf308[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_to_lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13_cache lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_to_lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13;
};



inline void lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_write(hw_uint<32> & lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55, lp_in_on_chip_0_buf48_FIFO_buf308_cache& lp_in_on_chip_0_buf48_FIFO_buf308, int root, int lp_in_on_chip_0_buf48_to_gp_4220_ld310, int lp_in_on_chip_0_buf48_to_gp_4220_ld309, int dynamic_address) {
  lp_in_on_chip_0_buf48_FIFO_buf308.lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_to_lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13.push(lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13_select(lp_in_on_chip_0_buf48_FIFO_buf308_cache& lp_in_on_chip_0_buf48_FIFO_buf308, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13 read pattern: { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_0_buf48_FIFO_buf308[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // Read schedule : { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp7071, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp7072, 35] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf48_FIFO_buf308311[root = 0, lp_in_on_chip_0_buf48_to_gp_4220_ld310, lp_in_on_chip_0_buf48_to_gp_4220_ld309] -> [47 + lp_in_on_chip_0_buf48_to_gp_4220_ld310, 7, lp_in_on_chip_0_buf48_to_gp_4220_ld309, 0] : 0 <= lp_in_on_chip_0_buf48_to_gp_4220_ld310 <= 63 and 0 <= lp_in_on_chip_0_buf48_to_gp_4220_ld309 <= 63 }
  auto value_lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55 = lp_in_on_chip_0_buf48_FIFO_buf308.lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_to_lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13.peek(/* one reader or all rams */ (-63 + lp_in_on_chip_0_buf48_reconstruct_lp7072 == 0 && 48 - lp_in_on_chip_0_buf48_reconstruct_lp7071 >= 0) ? (960) : (-63 + lp_in_on_chip_0_buf48_reconstruct_lp7072 == 0 && -49 + lp_in_on_chip_0_buf48_reconstruct_lp7071 >= 0 && 62 - lp_in_on_chip_0_buf48_reconstruct_lp7071 >= 0) ? ((4032 - 64 * lp_in_on_chip_0_buf48_reconstruct_lp7071)) : (-63 + lp_in_on_chip_0_buf48_reconstruct_lp7071 == 0 && 62 - lp_in_on_chip_0_buf48_reconstruct_lp7072 >= 0) ? ((63 - lp_in_on_chip_0_buf48_reconstruct_lp7072)) : (62 - lp_in_on_chip_0_buf48_reconstruct_lp7072 >= 0 && 48 - lp_in_on_chip_0_buf48_reconstruct_lp7071 >= 0) ? ((1023 - lp_in_on_chip_0_buf48_reconstruct_lp7072)) : (-49 + lp_in_on_chip_0_buf48_reconstruct_lp7071 >= 0 && 62 - lp_in_on_chip_0_buf48_reconstruct_lp7071 >= 0 && 62 - lp_in_on_chip_0_buf48_reconstruct_lp7072 >= 0) ? (((4095 - 64 * lp_in_on_chip_0_buf48_reconstruct_lp7071) - lp_in_on_chip_0_buf48_reconstruct_lp7072)) : 0);
  return value_lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_write
//	lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55
inline void lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_write, lp_in_on_chip_0_buf48_FIFO_buf308_cache& lp_in_on_chip_0_buf48_FIFO_buf308, int root, int lp_in_on_chip_0_buf48_to_gp_4220_ld310, int lp_in_on_chip_0_buf48_to_gp_4220_ld309, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_res = load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_write(lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_55_res, lp_in_on_chip_0_buf48_FIFO_buf308, root, lp_in_on_chip_0_buf48_to_gp_4220_ld310, lp_in_on_chip_0_buf48_to_gp_4220_ld309, dynamic_address);
}

// rc78_read
//	lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13
inline hw_uint<32> lp_in_on_chip_0_buf48_FIFO_buf308_rc78_read_bundle_read(lp_in_on_chip_0_buf48_FIFO_buf308_cache& lp_in_on_chip_0_buf48_FIFO_buf308, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13_res = lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13_select(lp_in_on_chip_0_buf48_FIFO_buf308, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_FIFO_buf308_rc78_13_res);
	return result;
}

struct lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52_cache {
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

struct lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225] -> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73[lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52_cache lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52;
};



inline void lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_write(hw_uint<32> & lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73.lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52.push(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52_select(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52 read pattern: { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225] -> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73[lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, 36] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225 <= 63 }
  // Write schedule: { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp7071, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp7072, 35] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  auto value_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12 = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73.lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_read
//	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52
inline hw_uint<32> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_read_bundle_read(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52_res = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52_select(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, root, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_52_res);
	return result;
}

// rc78_write
//	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12
inline void lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_write_bundle_write(hw_uint<32>& rc78_write, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_res = rc78_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_write(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_res, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, dynamic_address);
}

struct lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_cache {
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

struct lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache {
  // Reader addrs...
    // { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312[pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_cache lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22;
};



inline void lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_write(hw_uint<32> & lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, int root, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, int dynamic_address) {
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312.lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22.push(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_select(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, int root, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22 read pattern: { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312[pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
  // Read schedule : { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> [63 + pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, 0, 63 + pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, 45] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, 37] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313 <= 63 }
  auto value_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53 = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312.lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_write
//	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53
inline void lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_write, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, int root, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_res = load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_write(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_53_res, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, root, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, dynamic_address);
}

// pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_read
//	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22
inline hw_uint<32> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_read_bundle_read(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, int root, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_res = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_select(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, root, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_res);
	return result;
}

struct lp_in_on_chip_1_buf40_diff43_146_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 128
	// # of read delays: 128
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127
	fifo<hw_uint<32> , 128> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(127 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_1_buf40_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf40_to_gp_6228231[root = 0, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229] -> lp_in_on_chip_1_buf40[lp_in_on_chip_1_buf40_ld229, lp_in_on_chip_1_buf40_ld230] : 0 <= lp_in_on_chip_1_buf40_ld230 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld229 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_diff43_146_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38_cache lp_in_on_chip_1_buf40_diff43_146_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38;
};



inline void lp_in_on_chip_1_buf40_diff43_146_write(hw_uint<32> & lp_in_on_chip_1_buf40_diff43_146, lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
  lp_in_on_chip_1_buf40.lp_in_on_chip_1_buf40_diff43_146_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38.push(lp_in_on_chip_1_buf40_diff43_146);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38_select(lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_1_buf40_ld230, int lp_in_on_chip_1_buf40_ld229, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38 read pattern: { load_to_lp_in_on_chip_1_buf40_to_gp_6228231[root = 0, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229] -> lp_in_on_chip_1_buf40[lp_in_on_chip_1_buf40_ld229, lp_in_on_chip_1_buf40_ld230] : 0 <= lp_in_on_chip_1_buf40_ld230 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld229 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf40_to_gp_6228231[root = 0, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229] -> [31 + 2lp_in_on_chip_1_buf40_ld230, 2, lp_in_on_chip_1_buf40_ld229, 0] : 0 <= lp_in_on_chip_1_buf40_ld230 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld229 <= 31 }
  // Write schedule: { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> [25 + 2lp_in_on_chip_141, 0, 40 + lp_in_on_chip_142, 51] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  auto value_lp_in_on_chip_1_buf40_diff43_146 = lp_in_on_chip_1_buf40.lp_in_on_chip_1_buf40_diff43_146_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38.peek(/* one reader or all rams */ (-31 + lp_in_on_chip_1_buf40_ld229 == 0 && -30 + lp_in_on_chip_1_buf40_ld230 == 0) ? (32) : (-31 + lp_in_on_chip_1_buf40_ld229 == 0 && -29 + lp_in_on_chip_1_buf40_ld230 == 0) ? (64) : (-31 + lp_in_on_chip_1_buf40_ld229 == 0 && 28 - lp_in_on_chip_1_buf40_ld230 >= 0) ? (96) : (-31 + lp_in_on_chip_1_buf40_ld230 == 0 && 30 - lp_in_on_chip_1_buf40_ld229 >= 0) ? ((31 - lp_in_on_chip_1_buf40_ld229)) : (-30 + lp_in_on_chip_1_buf40_ld230 == 0 && 30 - lp_in_on_chip_1_buf40_ld229 >= 0) ? ((63 - lp_in_on_chip_1_buf40_ld229)) : (-29 + lp_in_on_chip_1_buf40_ld230 == 0 && 30 - lp_in_on_chip_1_buf40_ld229 >= 0) ? ((95 - lp_in_on_chip_1_buf40_ld229)) : (30 - lp_in_on_chip_1_buf40_ld229 >= 0 && 28 - lp_in_on_chip_1_buf40_ld230 >= 0) ? ((127 - lp_in_on_chip_1_buf40_ld229)) : 0);
  return value_lp_in_on_chip_1_buf40_diff43_146;
  return 0;
}

// # of bundles = 2
// diff43_write
//	lp_in_on_chip_1_buf40_diff43_146
inline void lp_in_on_chip_1_buf40_diff43_write_bundle_write(hw_uint<32>& diff43_write, lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_diff43_146_res = diff43_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_diff43_146_write(lp_in_on_chip_1_buf40_diff43_146_res, lp_in_on_chip_1_buf40, root, lp_in_on_chip_141, lp_in_on_chip_142, dynamic_address);
}

// load_to_lp_in_on_chip_1_buf40_to_gp_6228231_read
//	lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38
inline hw_uint<32> lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_read_bundle_read(lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_1_buf40_ld230, int lp_in_on_chip_1_buf40_ld229, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38_res = lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38_select(lp_in_on_chip_1_buf40, root, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_38_res);
	return result;
}

struct lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_to_lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 256
	// # of read delays: 256
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
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

struct lp_in_on_chip_1_buf40_FIFO_buf316_cache {
  // Reader addrs...
    // { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_1_buf40_FIFO_buf316[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_to_lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16_cache lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_to_lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16;
};



inline void lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_write(hw_uint<32> & lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47, lp_in_on_chip_1_buf40_FIFO_buf316_cache& lp_in_on_chip_1_buf40_FIFO_buf316, int root, int lp_in_on_chip_1_buf40_to_gp_6228_ld318, int lp_in_on_chip_1_buf40_to_gp_6228_ld317, int dynamic_address) {
  lp_in_on_chip_1_buf40_FIFO_buf316.lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_to_lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16.push(lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16_select(lp_in_on_chip_1_buf40_FIFO_buf316_cache& lp_in_on_chip_1_buf40_FIFO_buf316, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16 read pattern: { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_1_buf40_FIFO_buf316[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // Read schedule : { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6162, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6163, 21] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf40_FIFO_buf316319[root = 0, lp_in_on_chip_1_buf40_to_gp_6228_ld318, lp_in_on_chip_1_buf40_to_gp_6228_ld317] -> [47 + 2lp_in_on_chip_1_buf40_to_gp_6228_ld318, 6, lp_in_on_chip_1_buf40_to_gp_6228_ld317, 0] : 0 <= lp_in_on_chip_1_buf40_to_gp_6228_ld318 <= 31 and 0 <= lp_in_on_chip_1_buf40_to_gp_6228_ld317 <= 31 }
  auto value_lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47 = lp_in_on_chip_1_buf40_FIFO_buf316.lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_to_lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16.peek(/* one reader or all rams */ (-31 + lp_in_on_chip_1_buf40_reconstruct_lp6163 == 0 && 24 - lp_in_on_chip_1_buf40_reconstruct_lp6162 >= 0) ? (224) : (-31 + lp_in_on_chip_1_buf40_reconstruct_lp6163 == 0 && -25 + lp_in_on_chip_1_buf40_reconstruct_lp6162 >= 0 && 30 - lp_in_on_chip_1_buf40_reconstruct_lp6162 >= 0) ? ((992 - 32 * lp_in_on_chip_1_buf40_reconstruct_lp6162)) : (-31 + lp_in_on_chip_1_buf40_reconstruct_lp6162 == 0 && 30 - lp_in_on_chip_1_buf40_reconstruct_lp6163 >= 0) ? ((31 - lp_in_on_chip_1_buf40_reconstruct_lp6163)) : (30 - lp_in_on_chip_1_buf40_reconstruct_lp6163 >= 0 && 24 - lp_in_on_chip_1_buf40_reconstruct_lp6162 >= 0) ? ((255 - lp_in_on_chip_1_buf40_reconstruct_lp6163)) : (-25 + lp_in_on_chip_1_buf40_reconstruct_lp6162 >= 0 && 30 - lp_in_on_chip_1_buf40_reconstruct_lp6162 >= 0 && 30 - lp_in_on_chip_1_buf40_reconstruct_lp6163 >= 0) ? (((1023 - 32 * lp_in_on_chip_1_buf40_reconstruct_lp6162) - lp_in_on_chip_1_buf40_reconstruct_lp6163)) : 0);
  return value_lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_write
//	lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47
inline void lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_write, lp_in_on_chip_1_buf40_FIFO_buf316_cache& lp_in_on_chip_1_buf40_FIFO_buf316, int root, int lp_in_on_chip_1_buf40_to_gp_6228_ld318, int lp_in_on_chip_1_buf40_to_gp_6228_ld317, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_res = load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_write(lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_47_res, lp_in_on_chip_1_buf40_FIFO_buf316, root, lp_in_on_chip_1_buf40_to_gp_6228_ld318, lp_in_on_chip_1_buf40_to_gp_6228_ld317, dynamic_address);
}

// rc69_read
//	lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16
inline hw_uint<32> lp_in_on_chip_1_buf40_FIFO_buf316_rc69_read_bundle_read(lp_in_on_chip_1_buf40_FIFO_buf316_cache& lp_in_on_chip_1_buf40_FIFO_buf316, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16_res = lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16_select(lp_in_on_chip_1_buf40_FIFO_buf316, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_FIFO_buf316_rc69_16_res);
	return result;
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44_cache {
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

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64[lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44 read pattern: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64[lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, 22] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233 <= 31 }
  // Write schedule: { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6162, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6163, 21] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_44_res);
	return result;
}

// rc69_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_write_bundle_write(hw_uint<32>& rc69_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_res = rc69_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, dynamic_address);
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1_cache {
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

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache {
  // Reader addrs...
    // { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320[o0, o1] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 2o0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 2o1 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1 read pattern: { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320[o0, o1] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 2o0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 2o1 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 }
  // Read schedule : { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> [63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, 0, 63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 24] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, 23] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321 <= 31 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1.peek(/* one reader or all rams */ ((-1 - us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475) % 2 == 0 && 61 - us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 >= 0) ? ((31 - floord(2*us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 4))) : 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_res = load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_45_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, dynamic_address);
}

// us77_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, root, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_1_res);
	return result;
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40_cache {
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

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74[lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237 <= 63 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40 read pattern: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74[lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237] -> [63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, 0, 63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, 33] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237 <= 63 }
  // Write schedule: { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> [63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, 0, 63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 24] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_40_res);
	return result;
}

// us77_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_write_bundle_write(hw_uint<32>& us77_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_res = us77_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, root, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, dynamic_address);
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14_cache {
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

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache {
  // Reader addrs...
    // { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14 read pattern: { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // Read schedule : { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp7071, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp7072, 35] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325] -> [63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, 0, 63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, 34] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325 <= 63 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_res = load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_41_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, dynamic_address);
}

// rc78_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_14_res);
	return result;
}

struct lp_in_on_chip_2_buf32_diff35_149_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct lp_in_on_chip_2_buf32_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_2_buf32_to_gp_8240243[root = 0, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241] -> lp_in_on_chip_2_buf32[lp_in_on_chip_2_buf32_ld241, lp_in_on_chip_2_buf32_ld242] : 0 <= lp_in_on_chip_2_buf32_ld242 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld241 <= 15 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_diff35_149_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26_cache lp_in_on_chip_2_buf32_diff35_149_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26;
};



inline void lp_in_on_chip_2_buf32_diff35_149_write(hw_uint<32> & lp_in_on_chip_2_buf32_diff35_149, lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
  lp_in_on_chip_2_buf32.lp_in_on_chip_2_buf32_diff35_149_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26.push(lp_in_on_chip_2_buf32_diff35_149);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26_select(lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_2_buf32_ld242, int lp_in_on_chip_2_buf32_ld241, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26 read pattern: { load_to_lp_in_on_chip_2_buf32_to_gp_8240243[root = 0, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241] -> lp_in_on_chip_2_buf32[lp_in_on_chip_2_buf32_ld241, lp_in_on_chip_2_buf32_ld242] : 0 <= lp_in_on_chip_2_buf32_ld242 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld241 <= 15 }
  // Read schedule : { load_to_lp_in_on_chip_2_buf32_to_gp_8240243[root = 0, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241] -> [56 + lp_in_on_chip_2_buf32_ld242, 0, 63 + lp_in_on_chip_2_buf32_ld241, 44] : 0 <= lp_in_on_chip_2_buf32_ld242 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld241 <= 15 }
  // Write schedule: { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> [56 + lp_in_on_chip_233, 0, 63 + lp_in_on_chip_234, 43] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  auto value_lp_in_on_chip_2_buf32_diff35_149 = lp_in_on_chip_2_buf32.lp_in_on_chip_2_buf32_diff35_149_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_diff35_149;
  return 0;
}

// # of bundles = 2
// diff35_write
//	lp_in_on_chip_2_buf32_diff35_149
inline void lp_in_on_chip_2_buf32_diff35_write_bundle_write(hw_uint<32>& diff35_write, lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_diff35_149_res = diff35_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_diff35_149_write(lp_in_on_chip_2_buf32_diff35_149_res, lp_in_on_chip_2_buf32, root, lp_in_on_chip_233, lp_in_on_chip_234, dynamic_address);
}

// load_to_lp_in_on_chip_2_buf32_to_gp_8240243_read
//	lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26
inline hw_uint<32> lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_read_bundle_read(lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_2_buf32_ld242, int lp_in_on_chip_2_buf32_ld241, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26_res = lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26_select(lp_in_on_chip_2_buf32, root, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_26_res);
	return result;
}

struct lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_to_lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 128
	// # of read delays: 128
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127
	fifo<hw_uint<32> , 128> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(127 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_2_buf32_FIFO_buf328_cache {
  // Reader addrs...
    // { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> lp_in_on_chip_2_buf32_FIFO_buf328[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_to_lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19_cache lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_to_lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19;
};



inline void lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_write(hw_uint<32> & lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35, lp_in_on_chip_2_buf32_FIFO_buf328_cache& lp_in_on_chip_2_buf32_FIFO_buf328, int root, int lp_in_on_chip_2_buf32_to_gp_8240_ld330, int lp_in_on_chip_2_buf32_to_gp_8240_ld329, int dynamic_address) {
  lp_in_on_chip_2_buf32_FIFO_buf328.lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_to_lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19.push(lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19_select(lp_in_on_chip_2_buf32_FIFO_buf328_cache& lp_in_on_chip_2_buf32_FIFO_buf328, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19 read pattern: { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> lp_in_on_chip_2_buf32_FIFO_buf328[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // Read schedule : { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5253, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5254, 15] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // Write schedule: { load_to_lp_in_on_chip_2_buf32_FIFO_buf328331[root = 0, lp_in_on_chip_2_buf32_to_gp_8240_ld330, lp_in_on_chip_2_buf32_to_gp_8240_ld329] -> [62 + lp_in_on_chip_2_buf32_to_gp_8240_ld330, 4, lp_in_on_chip_2_buf32_to_gp_8240_ld329, 0] : 0 <= lp_in_on_chip_2_buf32_to_gp_8240_ld330 <= 15 and 0 <= lp_in_on_chip_2_buf32_to_gp_8240_ld329 <= 15 }
  auto value_lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35 = lp_in_on_chip_2_buf32_FIFO_buf328.lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_to_lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19.peek(/* one reader or all rams */ (-15 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0) ? (16 * lp_in_on_chip_2_buf32_reconstruct_lp5253) : (-15 + lp_in_on_chip_2_buf32_reconstruct_lp5254 == 0 && -8 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0) ? ((240 - 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253)) : ((lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) || (-15 + lp_in_on_chip_2_buf32_reconstruct_lp5253 == 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0)) ? ((15 - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-1 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 7 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? (((15 + 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253) - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : (-8 + lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5253 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp5254 >= 0) ? (((255 - 16 * lp_in_on_chip_2_buf32_reconstruct_lp5253) - lp_in_on_chip_2_buf32_reconstruct_lp5254)) : 0);
  return value_lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_write
//	lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35
inline void lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_write, lp_in_on_chip_2_buf32_FIFO_buf328_cache& lp_in_on_chip_2_buf32_FIFO_buf328, int root, int lp_in_on_chip_2_buf32_to_gp_8240_ld330, int lp_in_on_chip_2_buf32_to_gp_8240_ld329, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_res = load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_write(lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_35_res, lp_in_on_chip_2_buf32_FIFO_buf328, root, lp_in_on_chip_2_buf32_to_gp_8240_ld330, lp_in_on_chip_2_buf32_to_gp_8240_ld329, dynamic_address);
}

// rc60_read
//	lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19
inline hw_uint<32> lp_in_on_chip_2_buf32_FIFO_buf328_rc60_read_bundle_read(lp_in_on_chip_2_buf32_FIFO_buf328_cache& lp_in_on_chip_2_buf32_FIFO_buf328, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19_res = lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19_select(lp_in_on_chip_2_buf32_FIFO_buf328, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_FIFO_buf328_rc60_19_res);
	return result;
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 86
	// # of read delays: 86
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85
	fifo<hw_uint<32> , 86> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(85 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55[lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 <= 15 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32 read pattern: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55[lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 <= 15 }
  // Read schedule : { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245] -> [63 + 3lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, 0, 63 + 3lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, 16] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 <= 15 }
  // Write schedule: { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5253, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5254, 15] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32.peek(/* one reader or all rams */ (-2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0) ? (1) : ((-15 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0) || (lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0)) ? (16) : (-15 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && -11 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0) ? ((240 - 16 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246)) : ((lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && -11 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) || (-15 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) || (-1 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0)) ? ((15 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245)) : (-2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && -11 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? ((31 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245)) : (-11 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((255 - 16 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245)) : (((-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && -15 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && -4 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0) || ((-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && -4 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0)) ? (8 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) : ((-1 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && -3 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 9 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((7 + 8 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245)) : ((-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && -4 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && -11 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 14 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((15 + 8 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245)) : ((-1 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && -15 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 == 0 && -3 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 9 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0) ? ((-8 + 8 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246)) : ((-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) % 2 == 0 && lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && -4 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? ((lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245)/2) : ((-1 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) % 2 == 0 && lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && -3 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 9 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((-1 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245))/2) : ((-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) % 2 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((32 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245))/2) : ((-1 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) % 2 == 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 == 0 && 9 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((31 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245))/2) : ((-1 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) % 2 == 0 && (-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && -4 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 9 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? ((((-1 + 16 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245))/2) : ((-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) % 2 == 0 && (-lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246) % 2 == 0 && -4 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 >= 0 && -2 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0 && 10 - lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 >= 0) ? (((16 * lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 + lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245))/2) : 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_32_res);
	return result;
}

// rc60_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_write_bundle_write(hw_uint<32>& rc60_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_res = rc60_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, dynamic_address);
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3_cache {
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

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache {
  // Reader addrs...
    // { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332[o0, o1] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 2o0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 2o1 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3 read pattern: { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332[o0, o1] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 2o0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 2o1 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 }
  // Read schedule : { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> [63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, 0, 63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 18] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 }
  // Write schedule: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333] -> [63 + 4lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, 0, 63 + 4lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, 17] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333 <= 15 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3.peek(/* one reader or all rams */ ((-1 - us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566) % 2 == 0 && 29 - us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 >= 0) ? ((15 - floord(2*us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 4))) : 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_res = load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_33_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, dynamic_address);
}

// us68_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, root, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_3_res);
	return result;
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28_cache {
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

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65[lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249 <= 31 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28 read pattern: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65[lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, 19] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249 <= 31 }
  // Write schedule: { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> [63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, 0, 63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 18] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_28_res);
	return result;
}

// us68_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_write_bundle_write(hw_uint<32>& us68_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_res = us68_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, root, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, dynamic_address);
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17_cache {
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

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache {
  // Reader addrs...
    // { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17 read pattern: { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // Read schedule : { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6162, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6163, 21] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // Write schedule: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, 20] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337 <= 31 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_res = load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_29_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, dynamic_address);
}

// rc69_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_17_res);
	return result;
}

// Operation logic
inline void load_to_in_on_chip_FIFO_buf300303(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_0212, in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, int root, int in_on_chip_to_gp_0212_ld302, int in_on_chip_to_gp_0212_ld301) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_0212
	auto in_on_chip_to_gp_0212_in_on_chip_to_gp_0212_ld301_c__in_on_chip_to_gp_0212_ld302_value = in_on_chip_to_gp_0212.read();
	// Produce: in_on_chip_FIFO_buf300
	in_on_chip_FIFO_buf300_load_to_in_on_chip_FIFO_buf300303_write_bundle_write(/* arg names */in_on_chip_to_gp_0212_in_on_chip_to_gp_0212_ld301_c__in_on_chip_to_gp_0212_ld302_value, in_on_chip_FIFO_buf300, root, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_16_merged157(in_on_chip_FIFO_buf300_cache& in_on_chip_FIFO_buf300, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf300
	auto in_on_chip_FIFO_buf300_2_m__lp_gp_in_on_chip_16__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in_on_chip_15__p___m_3_rp___p__1_p_7_value = in_on_chip_FIFO_buf300_gp_in_on_chip_16_merged157_read_bundle_read(in_on_chip_FIFO_buf300/* source_delay */, root, gp_in_on_chip_15, gp_in_on_chip_16, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_16_cu155(in_on_chip_FIFO_buf300_2_m__lp_gp_in_on_chip_16__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in_on_chip_15__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in_on_chip_1_buf4
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_1_buf4, root, gp_in_on_chip_15, gp_in_on_chip_16, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_5172175(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5172, int root, int gp_in_on_chip_1_buf4_ld174, int gp_in_on_chip_1_buf4_ld173) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld173_c__gp_in_on_chip_1_buf4_ld174_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5172175_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, root, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_5172
	gp_in_on_chip_1_buf4_to_gp_5172.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld173_c__gp_in_on_chip_1_buf4_ld174_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_11168171(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_11168, int root, int gp_in_on_chip_1_buf4_ld170, int gp_in_on_chip_1_buf4_ld169) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld169_c__gp_in_on_chip_1_buf4_ld170_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_11168171_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, root, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_11168
	gp_in_on_chip_1_buf4_to_gp_11168.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld169_c__gp_in_on_chip_1_buf4_ld170_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_1164167(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1164, int root, int gp_in_on_chip_1_buf4_ld166, int gp_in_on_chip_1_buf4_ld165) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld165_c__gp_in_on_chip_1_buf4_ld166_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_1164167_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, root, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_1164
	gp_in_on_chip_1_buf4_to_gp_1164.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld165_c__gp_in_on_chip_1_buf4_ld166_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld166_gp_in_on_chip_1_buf4_ld170_gp_in_on_chip_1_buf4_ld174_in_on_chip_to_gp_0212_ld302_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_0212, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_11168, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1164, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5172) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld166_gp_in_on_chip_1_buf4_ld170_gp_in_on_chip_1_buf4_ld174_in_on_chip_to_gp_0212_ld302__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_cache gp_in_on_chip_1_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf300_cache in_on_chip_FIFO_buf300;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_1_buf4_to_gp_11168171[root = 0, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169] -> [2 + 2gp_in_on_chip_1_buf4_ld170, 0, 2 + 2gp_in_on_chip_1_buf4_ld169, 46] : 3 <= gp_in_on_chip_1_buf4_ld170 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld169 <= 34; load_to_gp_in_on_chip_1_buf4_to_gp_1164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> [2 + 2gp_in_on_chip_1_buf4_ld166, 0, 2 + 2gp_in_on_chip_1_buf4_ld165, 4] : 0 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 0 <= gp_in_on_chip_1_buf4_ld165 <= 34; load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70; gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34; load_to_gp_in_on_chip_1_buf4_to_gp_5172175[root = 0, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173] -> [2 + 2gp_in_on_chip_1_buf4_ld174, 0, 2 + 2gp_in_on_chip_1_buf4_ld173, 32] : 3 <= gp_in_on_chip_1_buf4_ld174 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld173 <= 34 }
//   { load_to_gp_in_on_chip_1_buf4_to_gp_11168171[root = 0, gp_in_on_chip_1_buf4_ld170, gp_in_on_chip_1_buf4_ld169] -> [2 + 2gp_in_on_chip_1_buf4_ld170, 0, 2 + 2gp_in_on_chip_1_buf4_ld169, 46] : 3 <= gp_in_on_chip_1_buf4_ld170 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld169 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_11168171(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-46 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-8 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-8 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_to_gp_1164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> [2 + 2gp_in_on_chip_1_buf4_ld166, 0, 2 + 2gp_in_on_chip_1_buf4_ld165, 4] : 0 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 0 <= gp_in_on_chip_1_buf4_ld165 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_1164167(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-4 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-2 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-2 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_FIFO_buf300303[root = 0, in_on_chip_to_gp_0212_ld302, in_on_chip_to_gp_0212_ld301] -> [in_on_chip_to_gp_0212_ld302, 0, in_on_chip_to_gp_0212_ld301, 2] : 0 <= in_on_chip_to_gp_0212_ld302 <= 70 and 0 <= in_on_chip_to_gp_0212_ld301 <= 70 }
// Condition for load_to_in_on_chip_FIFO_buf300303(((((-2 + 1*i3)) == 0) && (((1*i1)) == 0) && (((1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> [2 + 2gp_in_on_chip_15, 0, 2 + 2gp_in_on_chip_16, 3] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
// Condition for gp_in_on_chip_16_merged157(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-3 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-2 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-2 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_to_gp_5172175[root = 0, gp_in_on_chip_1_buf4_ld174, gp_in_on_chip_1_buf4_ld173] -> [2 + 2gp_in_on_chip_1_buf4_ld174, 0, 2 + 2gp_in_on_chip_1_buf4_ld173, 32] : 3 <= gp_in_on_chip_1_buf4_ld174 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld173 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_5172175(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-32 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-8 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-8 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 0; c0 <= 70; c0 += 1)
	  for (int c2 = 0; c2 <= 70; c2 += 1) {
	    load_to_in_on_chip_FIFO_buf300303(in_on_chip_to_gp_0212 /* buf name */, in_on_chip_FIFO_buf300, 0, c0, c2);
	    if (c0 >= 2 && c2 >= 2 && c0 % 2 == 0 && c2 % 2 == 0) {
	      gp_in_on_chip_16_merged157(in_on_chip_FIFO_buf300 /* buf name */, gp_in_on_chip_1_buf4, 0, (c0 / 2) - 1, (c2 / 2) - 1);
	      load_to_gp_in_on_chip_1_buf4_to_gp_1164167(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_1164, 0, (c0 / 2) - 1, (c2 / 2) - 1);
	      if (c0 >= 8 && c2 >= 8) {
	        load_to_gp_in_on_chip_1_buf4_to_gp_5172175(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_5172, 0, (c0 / 2) - 1, (c2 / 2) - 1);
	        load_to_gp_in_on_chip_1_buf4_to_gp_11168171(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_11168, 0, (c0 / 2) - 1, (c2 / 2) - 1);
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf252255(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1164, gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, int root, int gp_in_on_chip_1_buf4_to_gp_1164_ld254, int gp_in_on_chip_1_buf4_to_gp_1164_ld253) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_1164
	auto gp_in_on_chip_1_buf4_to_gp_1164_gp_in_on_chip_1_buf4_to_gp_1164_ld253_c__gp_in_on_chip_1_buf4_to_gp_1164_ld254_value = gp_in_on_chip_1_buf4_to_gp_1164.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf252
	gp_in_on_chip_1_buf4_FIFO_buf252_load_to_gp_in_on_chip_1_buf4_FIFO_buf252255_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_1164_gp_in_on_chip_1_buf4_to_gp_1164_ld253_c__gp_in_on_chip_1_buf4_to_gp_1164_ld254_value, gp_in_on_chip_1_buf4_FIFO_buf252, root, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_214_merged160(gp_in_on_chip_1_buf4_FIFO_buf252_cache& gp_in_on_chip_1_buf4_FIFO_buf252, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf252
	auto gp_in_on_chip_1_buf4_FIFO_buf252_2_m__lp_gp_in_on_chip_214__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in_on_chip_213__p___m_1_rp___p__1_p_3_value = gp_in_on_chip_1_buf4_FIFO_buf252_gp_in_on_chip_214_merged160_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf252/* source_delay */, root, gp_in_on_chip_213, gp_in_on_chip_214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_214_cu158(gp_in_on_chip_1_buf4_FIFO_buf252_2_m__lp_gp_in_on_chip_214__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in_on_chip_213__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in_on_chip_2_buf12
	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_2_buf12, root, gp_in_on_chip_213, gp_in_on_chip_214, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_7188191(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, int root, int gp_in_on_chip_2_buf12_ld190, int gp_in_on_chip_2_buf12_ld189) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld189_c__gp_in_on_chip_2_buf12_ld190_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, root, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_7188
	gp_in_on_chip_2_buf12_to_gp_7188.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld189_c__gp_in_on_chip_2_buf12_ld190_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_2184187(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2184, int root, int gp_in_on_chip_2_buf12_ld186, int gp_in_on_chip_2_buf12_ld185) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld185_c__gp_in_on_chip_2_buf12_ld186_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2184187_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, root, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_2184
	gp_in_on_chip_2_buf12_to_gp_2184.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld185_c__gp_in_on_chip_2_buf12_ld186_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_12180183(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_12180, int root, int gp_in_on_chip_2_buf12_ld182, int gp_in_on_chip_2_buf12_ld181) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld181_c__gp_in_on_chip_2_buf12_ld182_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_12180183_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, root, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_12180
	gp_in_on_chip_2_buf12_to_gp_12180.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld181_c__gp_in_on_chip_2_buf12_ld182_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_1164_ld254_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld182_gp_in_on_chip_2_buf12_ld186_gp_in_on_chip_2_buf12_ld190_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_1164, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_12180, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2184, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_1164_ld254_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld182_gp_in_on_chip_2_buf12_ld186_gp_in_on_chip_2_buf12_ld190__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf252_cache gp_in_on_chip_1_buf4_FIFO_buf252;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_cache gp_in_on_chip_2_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34; load_to_gp_in_on_chip_2_buf12_to_gp_12180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> [22 + 3gp_in_on_chip_2_buf12_ld182, 0, 22 + 3gp_in_on_chip_2_buf12_ld181, 27] : 0 < gp_in_on_chip_2_buf12_ld182 <= 16 and 0 < gp_in_on_chip_2_buf12_ld181 <= 16; load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> [22 + 3gp_in_on_chip_2_buf12_ld190, 0, 22 + 3gp_in_on_chip_2_buf12_ld189, 50] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16; load_to_gp_in_on_chip_2_buf12_to_gp_2184187[root = 0, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185] -> [22 + 3gp_in_on_chip_2_buf12_ld186, 0, 22 + 3gp_in_on_chip_2_buf12_ld185, 7] : 0 <= gp_in_on_chip_2_buf12_ld186 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld185 <= 16; gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf252255[root = 0, gp_in_on_chip_1_buf4_to_gp_1164_ld254, gp_in_on_chip_1_buf4_to_gp_1164_ld253] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld254, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_1164_ld253, 5] : 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld254 <= 34 and 0 <= gp_in_on_chip_1_buf4_to_gp_1164_ld253 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf252255(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-5 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-2 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-2 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_12180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> [22 + 3gp_in_on_chip_2_buf12_ld182, 0, 22 + 3gp_in_on_chip_2_buf12_ld181, 27] : 0 < gp_in_on_chip_2_buf12_ld182 <= 16 and 0 < gp_in_on_chip_2_buf12_ld181 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_12180183(((((1 + -1*i0 + (3*$rtoi($floor(((-1 + 1*i0)) / 3))))) == 0) && (((1 + -1*i2 + (3*$rtoi($floor(((-1 + 1*i2)) / 3))))) == 0) && (((-27 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-25 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> [22 + 3gp_in_on_chip_2_buf12_ld190, 0, 22 + 3gp_in_on_chip_2_buf12_ld189, 50] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_7188191(((((1 + -1*i0 + (3*$rtoi($floor(((-1 + 1*i0)) / 3))))) == 0) && (((1 + -1*i2 + (3*$rtoi($floor(((-1 + 1*i2)) / 3))))) == 0) && (((-50 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-25 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_2184187[root = 0, gp_in_on_chip_2_buf12_ld186, gp_in_on_chip_2_buf12_ld185] -> [22 + 3gp_in_on_chip_2_buf12_ld186, 0, 22 + 3gp_in_on_chip_2_buf12_ld185, 7] : 0 <= gp_in_on_chip_2_buf12_ld186 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld185 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_2184187(((((1 + -1*i0 + (3*$rtoi($floor(((-1 + 1*i0)) / 3))))) == 0) && (((1 + -1*i2 + (3*$rtoi($floor(((-1 + 1*i2)) / 3))))) == 0) && (((-7 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-22 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-22 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> [6 + 4gp_in_on_chip_213, 0, 6 + 4gp_in_on_chip_214, 6] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
// Condition for gp_in_on_chip_214_merged160(((((-2 + -1*i0 + (4*(((2 + 1*i0)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-6 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-6 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-6 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 2; c0 <= 70; c0 += 1) {
	  if (c0 <= 16 && (c0 + 2) % 6 == 0) {
	    for (int c2 = 1; c2 <= 35; c2 += 1) {
	      load_to_gp_in_on_chip_1_buf4_FIFO_buf252255(gp_in_on_chip_1_buf4_to_gp_1164 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf252, 0, (c0 / 2) - 1, c2 - 1);
	      if (c0 == 10 && c2 >= 3 && (c2 + 1) % 2 == 0)
	        gp_in_on_chip_214_merged160(gp_in_on_chip_1_buf4_FIFO_buf252 /* buf name */, gp_in_on_chip_2_buf12, 0, 1, (c2 - 3) / 2);
	    }
	  } else if (c0 >= 22 && (c0 - 1) % 3 == 0) {
	    if (c0 % 2 == 0) {
	      for (int c2 = 2; c2 <= 70; c2 += 1) {
	        if (c2 % 2 == 0) {
	          load_to_gp_in_on_chip_1_buf4_FIFO_buf252255(gp_in_on_chip_1_buf4_to_gp_1164 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf252, 0, (c0 / 2) - 1, (c2 / 2) - 1);
	          if (c2 >= 6 && (c0 + 2) % 4 == 0 && (c2 + 2) % 4 == 0)
	            gp_in_on_chip_214_merged160(gp_in_on_chip_1_buf4_FIFO_buf252 /* buf name */, gp_in_on_chip_2_buf12, 0, (c0 - 6) / 4, (c2 - 6) / 4);
	        }
	        if (c2 >= 22 && (c2 - 1) % 3 == 0) {
	          load_to_gp_in_on_chip_2_buf12_to_gp_2184187(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_2184, 0, (c0 - 22) / 3, (c2 - 22) / 3);
	          if (c0 >= 28 && c2 >= 25) {
	            load_to_gp_in_on_chip_2_buf12_to_gp_12180183(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_12180, 0, (c0 - 22) / 3, (c2 - 22) / 3);
	            load_to_gp_in_on_chip_2_buf12_to_gp_7188191(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_7188, 0, (c0 - 22) / 3, (c2 - 22) / 3);
	          }
	        }
	      }
	    } else {
	      for (int c2 = 22; c2 <= 70; c2 += 3) {
	        load_to_gp_in_on_chip_2_buf12_to_gp_2184187(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_2184, 0, (c0 - 22) / 3, (c2 - 22) / 3);
	        if (c2 >= 25) {
	          load_to_gp_in_on_chip_2_buf12_to_gp_12180183(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_12180, 0, (c0 - 22) / 3, (c2 - 22) / 3);
	          load_to_gp_in_on_chip_2_buf12_to_gp_7188191(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_7188, 0, (c0 - 22) / 3, (c2 - 22) / 3);
	        }
	      }
	    }
	  } else if (c0 % 2 == 0) {
	    for (int c2 = 1; c2 <= 35; c2 += 1) {
	      load_to_gp_in_on_chip_1_buf4_FIFO_buf252255(gp_in_on_chip_1_buf4_to_gp_1164 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf252, 0, (c0 / 2) - 1, c2 - 1);
	      if (c0 >= 6 && c2 >= 3 && c0 + 4 * ((c0 + 2) / 12) == 4 * ((c0 - 1) / 3) + 2 && (c0 + 2) % 4 == 0 && (c2 + 1) % 2 == 0)
	        gp_in_on_chip_214_merged160(gp_in_on_chip_1_buf4_FIFO_buf252 /* buf name */, gp_in_on_chip_2_buf12, 0, (c0 - 6) / 4, (c2 - 3) / 2);
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, int root, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224
	auto lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313_c__lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314_value = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224.read();
	// Produce: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315_write_bundle_write(/* arg names */lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313_c__lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314_value, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, root, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int root, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312
	auto lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981_p_0_c___pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_p_0_value = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_read_bundle_read(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312/* source_delay */, root, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981_p_0_c___pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312_cache lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, 37] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313 <= 63; pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> [63 + pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, 0, 63 + pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, 45] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
//   { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313, 37] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld313 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315(((((-37 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))
//   { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> [63 + pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, 0, 63 + pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, 45] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
// Condition for pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982(((((-45 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))

	for (int c0 = 63; c0 <= 126; c0 += 1)
	  for (int c2 = 63; c2 <= 126; c2 += 1) {
	    load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312315(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224 /* buf name */, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312, 0, c0 - 63, c2 - 63);
	    pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_FIFO_buf312 /* buf name */, out, 0, c0 - 63, c2 - 63);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf256259(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_11168, gp_in_on_chip_1_buf4_FIFO_buf256_cache& gp_in_on_chip_1_buf4_FIFO_buf256, int root, int gp_in_on_chip_1_buf4_to_gp_11168_ld258, int gp_in_on_chip_1_buf4_to_gp_11168_ld257) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_11168
	auto gp_in_on_chip_1_buf4_to_gp_11168_gp_in_on_chip_1_buf4_to_gp_11168_ld257_c__gp_in_on_chip_1_buf4_to_gp_11168_ld258_value = gp_in_on_chip_1_buf4_to_gp_11168.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf256
	gp_in_on_chip_1_buf4_FIFO_buf256_load_to_gp_in_on_chip_1_buf4_FIFO_buf256259_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_11168_gp_in_on_chip_1_buf4_to_gp_11168_ld257_c__gp_in_on_chip_1_buf4_to_gp_11168_ld258_value, gp_in_on_chip_1_buf4_FIFO_buf256, root, gp_in_on_chip_1_buf4_to_gp_11168_ld258, gp_in_on_chip_1_buf4_to_gp_11168_ld257, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us47(gp_in_on_chip_1_buf4_FIFO_buf256_cache& gp_in_on_chip_1_buf4_FIFO_buf256, gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf256
	auto gp_in_on_chip_1_buf4_FIFO_buf256_floor_lp_us_gp_in_on_chip_1_buf446__div__2_rp__p_3_c___floor_lp_us_gp_in_on_chip_1_buf445__div__2_rp__p_3_value = gp_in_on_chip_1_buf4_FIFO_buf256_us47_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf256/* source_delay */, root, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us44
	gp_in_on_chip_1_buf4_us44_us47_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_FIFO_buf256_floor_lp_us_gp_in_on_chip_1_buf446__div__2_rp__p_3_c___floor_lp_us_gp_in_on_chip_1_buf445__div__2_rp__p_3_value, gp_in_on_chip_1_buf4_us44, root, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179(gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3176, int root, int gp_in_on_chip_1_buf4_us44_ld178, int gp_in_on_chip_1_buf4_us44_ld177) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us44
	auto gp_in_on_chip_1_buf4_us44_gp_in_on_chip_1_buf4_us44_ld177_c__gp_in_on_chip_1_buf4_us44_ld178_value = gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179_read_bundle_read(gp_in_on_chip_1_buf4_us44/* source_delay */, root, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us44_to_gp_3176
	gp_in_on_chip_1_buf4_us44_to_gp_3176.write(gp_in_on_chip_1_buf4_us44_gp_in_on_chip_1_buf4_us44_ld177_c__gp_in_on_chip_1_buf4_us44_ld178_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_11168_ld258_gp_in_on_chip_1_buf4_us44_ld178_us_gp_in_on_chip_1_buf445_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_11168, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3176) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_11168_ld258_gp_in_on_chip_1_buf4_us44_ld178_us_gp_in_on_chip_1_buf445__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf256_cache gp_in_on_chip_1_buf4_FIFO_buf256;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us44_cache gp_in_on_chip_1_buf4_us44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> [8 + us_gp_in_on_chip_1_buf445, 0, 8 + us_gp_in_on_chip_1_buf446, 48] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63; load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179[root = 0, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177] -> [8 + gp_in_on_chip_1_buf4_us44_ld178, 0, 8 + gp_in_on_chip_1_buf4_us44_ld177, 49] : 0 <= gp_in_on_chip_1_buf4_us44_ld178 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld177 <= 63; load_to_gp_in_on_chip_1_buf4_FIFO_buf256259[root = 0, gp_in_on_chip_1_buf4_to_gp_11168_ld258, gp_in_on_chip_1_buf4_to_gp_11168_ld257] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_11168_ld258, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_11168_ld257, 47] : 3 <= gp_in_on_chip_1_buf4_to_gp_11168_ld258 <= 34 and 3 <= gp_in_on_chip_1_buf4_to_gp_11168_ld257 <= 34 }
//   { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> [8 + us_gp_in_on_chip_1_buf445, 0, 8 + us_gp_in_on_chip_1_buf446, 48] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 }
// Condition for us47(((((-48 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-8 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179[root = 0, gp_in_on_chip_1_buf4_us44_ld178, gp_in_on_chip_1_buf4_us44_ld177] -> [8 + gp_in_on_chip_1_buf4_us44_ld178, 0, 8 + gp_in_on_chip_1_buf4_us44_ld177, 49] : 0 <= gp_in_on_chip_1_buf4_us44_ld178 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld177 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179(((((-49 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-8 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf256259[root = 0, gp_in_on_chip_1_buf4_to_gp_11168_ld258, gp_in_on_chip_1_buf4_to_gp_11168_ld257] -> [2 + 2gp_in_on_chip_1_buf4_to_gp_11168_ld258, 0, 2 + 2gp_in_on_chip_1_buf4_to_gp_11168_ld257, 47] : 3 <= gp_in_on_chip_1_buf4_to_gp_11168_ld258 <= 34 and 3 <= gp_in_on_chip_1_buf4_to_gp_11168_ld257 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf256259(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-47 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-8 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-8 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 8; c0 <= 71; c0 += 1)
	  for (int c2 = 8; c2 <= 71; c2 += 1) {
	    if (c0 % 2 == 0 && c2 % 2 == 0)
	      load_to_gp_in_on_chip_1_buf4_FIFO_buf256259(gp_in_on_chip_1_buf4_to_gp_11168 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf256, 0, (c0 / 2) - 1, (c2 / 2) - 1);
	    us47(gp_in_on_chip_1_buf4_FIFO_buf256 /* buf name */, gp_in_on_chip_1_buf4_us44, 0, c0 - 8, c2 - 8);
	    load_to_gp_in_on_chip_1_buf4_us44_to_gp_3176179(gp_in_on_chip_1_buf4_us44 /* buf name */, gp_in_on_chip_1_buf4_us44_to_gp_3176, 0, c0 - 8, c2 - 8);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf268271(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_12180, gp_in_on_chip_2_buf12_FIFO_buf268_cache& gp_in_on_chip_2_buf12_FIFO_buf268, int root, int gp_in_on_chip_2_buf12_to_gp_12180_ld270, int gp_in_on_chip_2_buf12_to_gp_12180_ld269) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_12180
	auto gp_in_on_chip_2_buf12_to_gp_12180_gp_in_on_chip_2_buf12_to_gp_12180_ld269_c__gp_in_on_chip_2_buf12_to_gp_12180_ld270_value = gp_in_on_chip_2_buf12_to_gp_12180.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf268
	gp_in_on_chip_2_buf12_FIFO_buf268_load_to_gp_in_on_chip_2_buf12_FIFO_buf268271_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_12180_gp_in_on_chip_2_buf12_to_gp_12180_ld269_c__gp_in_on_chip_2_buf12_to_gp_12180_ld270_value, gp_in_on_chip_2_buf12_FIFO_buf268, root, gp_in_on_chip_2_buf12_to_gp_12180_ld270, gp_in_on_chip_2_buf12_to_gp_12180_ld269, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us39(gp_in_on_chip_2_buf12_FIFO_buf268_cache& gp_in_on_chip_2_buf12_FIFO_buf268, gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf268
	auto gp_in_on_chip_2_buf12_FIFO_buf268_floor_lp_us_gp_in_on_chip_2_buf1238__div__2_rp__p_1_c___floor_lp_us_gp_in_on_chip_2_buf1237__div__2_rp__p_1_value = gp_in_on_chip_2_buf12_FIFO_buf268_us39_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf268/* source_delay */, root, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us36
	gp_in_on_chip_2_buf12_us36_us39_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_FIFO_buf268_floor_lp_us_gp_in_on_chip_2_buf1238__div__2_rp__p_1_c___floor_lp_us_gp_in_on_chip_2_buf1237__div__2_rp__p_1_value, gp_in_on_chip_2_buf12_us36, root, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195(gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5192, int root, int gp_in_on_chip_2_buf12_us36_ld194, int gp_in_on_chip_2_buf12_us36_ld193) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us36
	auto gp_in_on_chip_2_buf12_us36_gp_in_on_chip_2_buf12_us36_ld193_c__gp_in_on_chip_2_buf12_us36_ld194_value = gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195_read_bundle_read(gp_in_on_chip_2_buf12_us36/* source_delay */, root, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us36_to_gp_5192
	gp_in_on_chip_2_buf12_us36_to_gp_5192.write(gp_in_on_chip_2_buf12_us36_gp_in_on_chip_2_buf12_us36_ld193_c__gp_in_on_chip_2_buf12_us36_ld194_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_12180_ld270_gp_in_on_chip_2_buf12_us36_ld194_us_gp_in_on_chip_2_buf1237_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_12180, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5192) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_12180_ld270_gp_in_on_chip_2_buf12_us36_ld194_us_gp_in_on_chip_2_buf1237__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf268_cache gp_in_on_chip_2_buf12_FIFO_buf268;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us36_cache gp_in_on_chip_2_buf12_us36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195[root = 0, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193] -> [25 + 2gp_in_on_chip_2_buf12_us36_ld194, 0, 40 + gp_in_on_chip_2_buf12_us36_ld193, 30] : 0 <= gp_in_on_chip_2_buf12_us36_ld194 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld193 <= 31; load_to_gp_in_on_chip_2_buf12_FIFO_buf268271[root = 0, gp_in_on_chip_2_buf12_to_gp_12180_ld270, gp_in_on_chip_2_buf12_to_gp_12180_ld269] -> [21 + 4gp_in_on_chip_2_buf12_to_gp_12180_ld270, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_12180_ld269, 28] : 0 < gp_in_on_chip_2_buf12_to_gp_12180_ld270 <= 16 and 0 < gp_in_on_chip_2_buf12_to_gp_12180_ld269 <= 16; us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> [25 + 2us_gp_in_on_chip_2_buf1237, 0, 40 + us_gp_in_on_chip_2_buf1238, 29] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 }
//   { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195[root = 0, gp_in_on_chip_2_buf12_us36_ld194, gp_in_on_chip_2_buf12_us36_ld193] -> [25 + 2gp_in_on_chip_2_buf12_us36_ld194, 0, 40 + gp_in_on_chip_2_buf12_us36_ld193, 30] : 0 <= gp_in_on_chip_2_buf12_us36_ld194 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld193 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-30 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((87 + -1*i0)) >= 0) && (((-40 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf268271[root = 0, gp_in_on_chip_2_buf12_to_gp_12180_ld270, gp_in_on_chip_2_buf12_to_gp_12180_ld269] -> [21 + 4gp_in_on_chip_2_buf12_to_gp_12180_ld270, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_12180_ld269, 28] : 0 < gp_in_on_chip_2_buf12_to_gp_12180_ld270 <= 16 and 0 < gp_in_on_chip_2_buf12_to_gp_12180_ld269 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf268271(((((1 + -1*i0 + (4*(((-1 + 1*i0)) >> 2)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-28 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((85 + -1*i0)) >= 0) && (((-40 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> [25 + 2us_gp_in_on_chip_2_buf1237, 0, 40 + us_gp_in_on_chip_2_buf1238, 29] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 }
// Condition for us39(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-29 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((87 + -1*i0)) >= 0) && (((-40 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))

	for (int c0 = 25; c0 <= 87; c0 += 2)
	  for (int c2 = 40; c2 <= 71; c2 += 1) {
	    if ((c0 - 1) % 4 == 0 && c2 % 2 == 0)
	      load_to_gp_in_on_chip_2_buf12_FIFO_buf268271(gp_in_on_chip_2_buf12_to_gp_12180 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf268, 0, (c0 - 21) / 4, (c2 / 2) - 19);
	    us39(gp_in_on_chip_2_buf12_FIFO_buf268 /* buf name */, gp_in_on_chip_2_buf12_us36, 0, (c0 - 25) / 2, c2 - 40);
	    load_to_gp_in_on_chip_2_buf12_us36_to_gp_5192195(gp_in_on_chip_2_buf12_us36 /* buf name */, gp_in_on_chip_2_buf12_us36_to_gp_5192, 0, (c0 - 25) / 2, c2 - 40);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_3_buf20_FIFO_buf284287(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_13196, gp_in_on_chip_3_buf20_FIFO_buf284_cache& gp_in_on_chip_3_buf20_FIFO_buf284, int root, int gp_in_on_chip_3_buf20_to_gp_13196_ld286, int gp_in_on_chip_3_buf20_to_gp_13196_ld285) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_to_gp_13196
	auto gp_in_on_chip_3_buf20_to_gp_13196_gp_in_on_chip_3_buf20_to_gp_13196_ld285_c__gp_in_on_chip_3_buf20_to_gp_13196_ld286_value = gp_in_on_chip_3_buf20_to_gp_13196.read();
	// Produce: gp_in_on_chip_3_buf20_FIFO_buf284
	gp_in_on_chip_3_buf20_FIFO_buf284_load_to_gp_in_on_chip_3_buf20_FIFO_buf284287_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_to_gp_13196_gp_in_on_chip_3_buf20_to_gp_13196_ld285_c__gp_in_on_chip_3_buf20_to_gp_13196_ld286_value, gp_in_on_chip_3_buf20_FIFO_buf284, root, gp_in_on_chip_3_buf20_to_gp_13196_ld286, gp_in_on_chip_3_buf20_to_gp_13196_ld285, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us31(gp_in_on_chip_3_buf20_FIFO_buf284_cache& gp_in_on_chip_3_buf20_FIFO_buf284, gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_FIFO_buf284
	auto gp_in_on_chip_3_buf20_FIFO_buf284_floor_lp_us_gp_in_on_chip_3_buf2030__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2029__div__2_rp__p_0_value = gp_in_on_chip_3_buf20_FIFO_buf284_us31_read_bundle_read(gp_in_on_chip_3_buf20_FIFO_buf284/* source_delay */, root, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us28
	gp_in_on_chip_3_buf20_us28_us31_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_FIFO_buf284_floor_lp_us_gp_in_on_chip_3_buf2030__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2029__div__2_rp__p_0_value, gp_in_on_chip_3_buf20_us28, root, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207(gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, int root, int gp_in_on_chip_3_buf20_us28_ld206, int gp_in_on_chip_3_buf20_us28_ld205) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us28
	auto gp_in_on_chip_3_buf20_us28_gp_in_on_chip_3_buf20_us28_ld205_c__gp_in_on_chip_3_buf20_us28_ld206_value = gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_read_bundle_read(gp_in_on_chip_3_buf20_us28/* source_delay */, root, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us28_to_gp_7204
	gp_in_on_chip_3_buf20_us28_to_gp_7204.write(gp_in_on_chip_3_buf20_us28_gp_in_on_chip_3_buf20_us28_ld205_c__gp_in_on_chip_3_buf20_us28_ld206_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_3_buf20_to_gp_13196_ld286_gp_in_on_chip_3_buf20_us28_ld206_us_gp_in_on_chip_3_buf2029_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_13196, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_3_buf20_to_gp_13196_ld286_gp_in_on_chip_3_buf20_us28_ld206_us_gp_in_on_chip_3_buf2029__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_FIFO_buf284_cache gp_in_on_chip_3_buf20_FIFO_buf284;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us28_cache gp_in_on_chip_3_buf20_us28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> [56 + us_gp_in_on_chip_3_buf2029, 0, 63 + us_gp_in_on_chip_3_buf2030, 40] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15; load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> [56 + gp_in_on_chip_3_buf20_us28_ld206, 0, 63 + gp_in_on_chip_3_buf20_us28_ld205, 41] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15; load_to_gp_in_on_chip_3_buf20_FIFO_buf284287[root = 0, gp_in_on_chip_3_buf20_to_gp_13196_ld286, gp_in_on_chip_3_buf20_to_gp_13196_ld285] -> [56 + 2gp_in_on_chip_3_buf20_to_gp_13196_ld286, 0, 63 + gp_in_on_chip_3_buf20_to_gp_13196_ld285, 39] : 0 <= gp_in_on_chip_3_buf20_to_gp_13196_ld286 <= 7 and 0 <= gp_in_on_chip_3_buf20_to_gp_13196_ld285 <= 7 }
//   { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> [56 + us_gp_in_on_chip_3_buf2029, 0, 63 + us_gp_in_on_chip_3_buf2030, 40] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 }
// Condition for us31(((((-40 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> [56 + gp_in_on_chip_3_buf20_us28_ld206, 0, 63 + gp_in_on_chip_3_buf20_us28_ld205, 41] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207(((((-41 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_FIFO_buf284287[root = 0, gp_in_on_chip_3_buf20_to_gp_13196_ld286, gp_in_on_chip_3_buf20_to_gp_13196_ld285] -> [56 + 2gp_in_on_chip_3_buf20_to_gp_13196_ld286, 0, 63 + gp_in_on_chip_3_buf20_to_gp_13196_ld285, 39] : 0 <= gp_in_on_chip_3_buf20_to_gp_13196_ld286 <= 7 and 0 <= gp_in_on_chip_3_buf20_to_gp_13196_ld285 <= 7 }
// Condition for load_to_gp_in_on_chip_3_buf20_FIFO_buf284287(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-39 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 56; c0 <= 71; c0 += 1)
	  for (int c2 = 63; c2 <= 78; c2 += 1) {
	    if (c2 <= 70 && c0 % 2 == 0)
	      load_to_gp_in_on_chip_3_buf20_FIFO_buf284287(gp_in_on_chip_3_buf20_to_gp_13196 /* buf name */, gp_in_on_chip_3_buf20_FIFO_buf284, 0, (c0 / 2) - 28, c2 - 63);
	    us31(gp_in_on_chip_3_buf20_FIFO_buf284 /* buf name */, gp_in_on_chip_3_buf20_us28, 0, c0 - 56, c2 - 63);
	    load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207(gp_in_on_chip_3_buf20_us28 /* buf name */, gp_in_on_chip_3_buf20_us28_to_gp_7204, 0, c0 - 56, c2 - 63);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_3_buf20_FIFO_buf288291(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_14200, gp_in_on_chip_3_buf20_FIFO_buf288_cache& gp_in_on_chip_3_buf20_FIFO_buf288, int root, int gp_in_on_chip_3_buf20_to_gp_14200_ld290, int gp_in_on_chip_3_buf20_to_gp_14200_ld289) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_to_gp_14200
	auto gp_in_on_chip_3_buf20_to_gp_14200_gp_in_on_chip_3_buf20_to_gp_14200_ld289_c__gp_in_on_chip_3_buf20_to_gp_14200_ld290_value = gp_in_on_chip_3_buf20_to_gp_14200.read();
	// Produce: gp_in_on_chip_3_buf20_FIFO_buf288
	gp_in_on_chip_3_buf20_FIFO_buf288_load_to_gp_in_on_chip_3_buf20_FIFO_buf288291_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_to_gp_14200_gp_in_on_chip_3_buf20_to_gp_14200_ld289_c__gp_in_on_chip_3_buf20_to_gp_14200_ld290_value, gp_in_on_chip_3_buf20_FIFO_buf288, root, gp_in_on_chip_3_buf20_to_gp_14200_ld290, gp_in_on_chip_3_buf20_to_gp_14200_ld289, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us59(gp_in_on_chip_3_buf20_FIFO_buf288_cache& gp_in_on_chip_3_buf20_FIFO_buf288, gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_FIFO_buf288
	auto gp_in_on_chip_3_buf20_FIFO_buf288_floor_lp_us_gp_in_on_chip_3_buf2058__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2057__div__2_rp__p_0_value = gp_in_on_chip_3_buf20_FIFO_buf288_us59_read_bundle_read(gp_in_on_chip_3_buf20_FIFO_buf288/* source_delay */, root, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us56
	gp_in_on_chip_3_buf20_us56_us59_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_FIFO_buf288_floor_lp_us_gp_in_on_chip_3_buf2058__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2057__div__2_rp__p_0_value, gp_in_on_chip_3_buf20_us56, root, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211(gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8208, int root, int gp_in_on_chip_3_buf20_us56_ld210, int gp_in_on_chip_3_buf20_us56_ld209) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us56
	auto gp_in_on_chip_3_buf20_us56_gp_in_on_chip_3_buf20_us56_ld209_c__gp_in_on_chip_3_buf20_us56_ld210_value = gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211_read_bundle_read(gp_in_on_chip_3_buf20_us56/* source_delay */, root, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us56_to_gp_8208
	gp_in_on_chip_3_buf20_us56_to_gp_8208.write(gp_in_on_chip_3_buf20_us56_gp_in_on_chip_3_buf20_us56_ld209_c__gp_in_on_chip_3_buf20_us56_ld210_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_3_buf20_to_gp_14200_ld290_gp_in_on_chip_3_buf20_us56_ld210_us_gp_in_on_chip_3_buf2057_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_14200, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8208) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_3_buf20_to_gp_14200_ld290_gp_in_on_chip_3_buf20_us56_ld210_us_gp_in_on_chip_3_buf2057__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_FIFO_buf288_cache gp_in_on_chip_3_buf20_FIFO_buf288;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us56_cache gp_in_on_chip_3_buf20_us56;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> [63 + us_gp_in_on_chip_3_buf2057, 0, 63 + us_gp_in_on_chip_3_buf2058, 12] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15; load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211[root = 0, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209] -> [63 + gp_in_on_chip_3_buf20_us56_ld210, 0, 63 + gp_in_on_chip_3_buf20_us56_ld209, 13] : 0 <= gp_in_on_chip_3_buf20_us56_ld210 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld209 <= 15; load_to_gp_in_on_chip_3_buf20_FIFO_buf288291[root = 0, gp_in_on_chip_3_buf20_to_gp_14200_ld290, gp_in_on_chip_3_buf20_to_gp_14200_ld289] -> [63 + gp_in_on_chip_3_buf20_to_gp_14200_ld290, 0, 63 + gp_in_on_chip_3_buf20_to_gp_14200_ld289, 11] : 0 <= gp_in_on_chip_3_buf20_to_gp_14200_ld290 <= 7 and 0 <= gp_in_on_chip_3_buf20_to_gp_14200_ld289 <= 7 }
//   { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> [63 + us_gp_in_on_chip_3_buf2057, 0, 63 + us_gp_in_on_chip_3_buf2058, 12] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 }
// Condition for us59(((((-12 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((78 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211[root = 0, gp_in_on_chip_3_buf20_us56_ld210, gp_in_on_chip_3_buf20_us56_ld209] -> [63 + gp_in_on_chip_3_buf20_us56_ld210, 0, 63 + gp_in_on_chip_3_buf20_us56_ld209, 13] : 0 <= gp_in_on_chip_3_buf20_us56_ld210 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld209 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211(((((-13 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((78 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_FIFO_buf288291[root = 0, gp_in_on_chip_3_buf20_to_gp_14200_ld290, gp_in_on_chip_3_buf20_to_gp_14200_ld289] -> [63 + gp_in_on_chip_3_buf20_to_gp_14200_ld290, 0, 63 + gp_in_on_chip_3_buf20_to_gp_14200_ld289, 11] : 0 <= gp_in_on_chip_3_buf20_to_gp_14200_ld290 <= 7 and 0 <= gp_in_on_chip_3_buf20_to_gp_14200_ld289 <= 7 }
// Condition for load_to_gp_in_on_chip_3_buf20_FIFO_buf288291(((((-11 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 63; c0 <= 78; c0 += 1)
	  for (int c2 = 63; c2 <= 78; c2 += 1) {
	    if (c0 <= 70 && c2 <= 70)
	      load_to_gp_in_on_chip_3_buf20_FIFO_buf288291(gp_in_on_chip_3_buf20_to_gp_14200 /* buf name */, gp_in_on_chip_3_buf20_FIFO_buf288, 0, c0 - 63, c2 - 63);
	    us59(gp_in_on_chip_3_buf20_FIFO_buf288 /* buf name */, gp_in_on_chip_3_buf20_us56, 0, c0 - 63, c2 - 63);
	    load_to_gp_in_on_chip_3_buf20_us56_to_gp_8208211(gp_in_on_chip_3_buf20_us56 /* buf name */, gp_in_on_chip_3_buf20_us56_to_gp_8208, 0, c0 - 63, c2 - 63);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232.read();
	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us77(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475__div__2_rp__p_0_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_us77_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320/* source_delay */, root, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475__div__2_rp__p_0_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, root, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74/* source_delay */, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236.write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, 23] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321 <= 31; us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> [63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, 0, 63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 24] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63; load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237] -> [63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, 0, 63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, 33] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237 <= 63 }
//   { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321, 23] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld321 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-23 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((125 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((125 + -1*i2)) >= 0)))
//   { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> [63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, 0, 63 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 24] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 }
// Condition for us77(((((-24 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237] -> [63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238, 0, 63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237, 33] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld237 <= 63 }
// Condition for load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239(((((-33 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))

	for (int c0 = 63; c0 <= 126; c0 += 1)
	  for (int c2 = 63; c2 <= 126; c2 += 1) {
	    if ((c0 + 1) % 2 == 0 && (c2 + 1) % 2 == 0)
	      load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320323(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	    us77(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_FIFO_buf320 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, 0, c0 - 63, c2 - 63);
	    load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236239(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236, 0, c0 - 63, c2 - 63);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244.read();
	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us68(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566__div__2_rp__p_0_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_us68_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332/* source_delay */, root, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566__div__2_rp__p_0_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, root, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65/* source_delay */, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248.write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333] -> [63 + 4lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, 0, 63 + 4lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, 17] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333 <= 15; load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, 19] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249 <= 31; us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> [63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, 0, 63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 18] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 }
//   { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333] -> [63 + 4lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334, 0, 63 + 4lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333, 17] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld333 <= 15 }
// Condition for load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1 + -1*i2 + (4*(((1 + 1*i2)) >> 2)))) == 0) && (((-17 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((123 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((123 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249, 19] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld249 <= 31 }
// Condition for load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-19 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((125 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((125 + -1*i2)) >= 0)))
//   { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> [63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, 0, 63 + 2us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 18] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 }
// Condition for us68(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-18 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((125 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((125 + -1*i2)) >= 0)))

	for (int c0 = 63; c0 <= 125; c0 += 2)
	  for (int c2 = 63; c2 <= 125; c2 += 2) {
	    if ((c0 + 1) % 4 == 0 && (c2 + 1) % 4 == 0)
	      load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332335(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332, 0, (c0 - 63) / 4, (c2 - 63) / 4);
	    us68(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_FIFO_buf332 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	    load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248251(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf272275(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2184, gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, int root, int gp_in_on_chip_2_buf12_to_gp_2184_ld274, int gp_in_on_chip_2_buf12_to_gp_2184_ld273) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_2184
	auto gp_in_on_chip_2_buf12_to_gp_2184_gp_in_on_chip_2_buf12_to_gp_2184_ld273_c__gp_in_on_chip_2_buf12_to_gp_2184_ld274_value = gp_in_on_chip_2_buf12_to_gp_2184.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf272
	gp_in_on_chip_2_buf12_FIFO_buf272_load_to_gp_in_on_chip_2_buf12_FIFO_buf272275_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_2184_gp_in_on_chip_2_buf12_to_gp_2184_ld273_c__gp_in_on_chip_2_buf12_to_gp_2184_ld274_value, gp_in_on_chip_2_buf12_FIFO_buf272, root, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf272_cache& gp_in_on_chip_2_buf12_FIFO_buf272, gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_321, int gp_in_on_chip_322) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf272
	auto gp_in_on_chip_2_buf12_FIFO_buf272_2_m_gp_in_on_chip_322__p___m_1_p_1_c_____2_m_gp_in_on_chip_321__p__1_p_1_value = gp_in_on_chip_2_buf12_FIFO_buf272_gp_in_on_chip_322_merged163_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf272/* source_delay */, root, gp_in_on_chip_321, gp_in_on_chip_322, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_322_cu161(gp_in_on_chip_2_buf12_FIFO_buf272_2_m_gp_in_on_chip_322__p___m_1_p_1_c_____2_m_gp_in_on_chip_321__p__1_p_1_value);
	// Produce: gp_in_on_chip_3_buf20
	gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_3_buf20, root, gp_in_on_chip_321, gp_in_on_chip_322, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_to_gp_14200203(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_14200, int root, int gp_in_on_chip_3_buf20_ld202, int gp_in_on_chip_3_buf20_ld201) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20
	auto gp_in_on_chip_3_buf20_gp_in_on_chip_3_buf20_ld201_c__gp_in_on_chip_3_buf20_ld202_value = gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_14200203_read_bundle_read(gp_in_on_chip_3_buf20/* source_delay */, root, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_to_gp_14200
	gp_in_on_chip_3_buf20_to_gp_14200.write(gp_in_on_chip_3_buf20_gp_in_on_chip_3_buf20_ld201_c__gp_in_on_chip_3_buf20_ld202_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_to_gp_13196199(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_13196, int root, int gp_in_on_chip_3_buf20_ld198, int gp_in_on_chip_3_buf20_ld197) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20
	auto gp_in_on_chip_3_buf20_gp_in_on_chip_3_buf20_ld197_c__gp_in_on_chip_3_buf20_ld198_value = gp_in_on_chip_3_buf20_load_to_gp_in_on_chip_3_buf20_to_gp_13196199_read_bundle_read(gp_in_on_chip_3_buf20/* source_delay */, root, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_to_gp_13196
	gp_in_on_chip_3_buf20_to_gp_13196.write(gp_in_on_chip_3_buf20_gp_in_on_chip_3_buf20_ld197_c__gp_in_on_chip_3_buf20_ld198_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_2184_ld274_gp_in_on_chip_321_gp_in_on_chip_3_buf20_ld198_gp_in_on_chip_3_buf20_ld202_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2184, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_13196, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_to_gp_14200) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_2184_ld274_gp_in_on_chip_321_gp_in_on_chip_3_buf20_ld198_gp_in_on_chip_3_buf20_ld202__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf272_cache gp_in_on_chip_2_buf12_FIFO_buf272;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_cache gp_in_on_chip_3_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_3_buf20_to_gp_13196199[root = 0, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197] -> [56 + 2gp_in_on_chip_3_buf20_ld198, 0, 63 + gp_in_on_chip_3_buf20_ld197, 38] : 0 <= gp_in_on_chip_3_buf20_ld198 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld197 <= 7; load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16; load_to_gp_in_on_chip_3_buf20_to_gp_14200203[root = 0, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201] -> [63 + gp_in_on_chip_3_buf20_ld202, 0, 63 + gp_in_on_chip_3_buf20_ld201, 10] : 0 <= gp_in_on_chip_3_buf20_ld202 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld201 <= 7; gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
//   { load_to_gp_in_on_chip_3_buf20_to_gp_13196199[root = 0, gp_in_on_chip_3_buf20_ld198, gp_in_on_chip_3_buf20_ld197] -> [56 + 2gp_in_on_chip_3_buf20_ld198, 0, 63 + gp_in_on_chip_3_buf20_ld197, 38] : 0 <= gp_in_on_chip_3_buf20_ld198 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld197 <= 7 }
// Condition for load_to_gp_in_on_chip_3_buf20_to_gp_13196199(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-38 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf272275[root = 0, gp_in_on_chip_2_buf12_to_gp_2184_ld274, gp_in_on_chip_2_buf12_to_gp_2184_ld273] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld274, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_2184_ld273, 8] : 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld274 <= 16 and 0 <= gp_in_on_chip_2_buf12_to_gp_2184_ld273 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf272275(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-8 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-38 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-38 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_to_gp_14200203[root = 0, gp_in_on_chip_3_buf20_ld202, gp_in_on_chip_3_buf20_ld201] -> [63 + gp_in_on_chip_3_buf20_ld202, 0, 63 + gp_in_on_chip_3_buf20_ld201, 10] : 0 <= gp_in_on_chip_3_buf20_ld202 <= 7 and 0 <= gp_in_on_chip_3_buf20_ld201 <= 7 }
// Condition for load_to_gp_in_on_chip_3_buf20_to_gp_14200203(((((-10 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> [49 + 3gp_in_on_chip_321, 0, 49 + 3gp_in_on_chip_322, 9] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
// Condition for gp_in_on_chip_322_merged163(((((1 + -1*i0 + (3*$rtoi($floor(((-1 + 1*i0)) / 3))))) == 0) && (((1 + -1*i2 + (3*$rtoi($floor(((-1 + 1*i2)) / 3))))) == 0) && (((-9 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-49 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-49 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 38; c0 <= 70; c0 += 1) {
	  if (c0 >= 63) {
	    if (c0 == 67) {
	      for (int c2 = 49; c2 <= 62; c2 += 3)
	        gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf272 /* buf name */, gp_in_on_chip_3_buf20, 0, 6, (c2 - 49) / 3);
	    } else if (c0 % 2 == 0) {
	      for (int c2 = 38; c2 <= 62; c2 += 1) {
	        if (c2 % 2 == 0)
	          load_to_gp_in_on_chip_2_buf12_FIFO_buf272275(gp_in_on_chip_2_buf12_to_gp_2184 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf272, 0, (c0 / 2) - 19, (c2 / 2) - 19);
	        if (c2 >= 49 && (c0 - 1) % 3 == 0 && (c2 - 1) % 3 == 0)
	          gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf272 /* buf name */, gp_in_on_chip_3_buf20, 0, (c0 - 49) / 3, (c2 - 49) / 3);
	      }
	    }
	    for (int c2 = 63; c2 <= 70; c2 += 1) {
	      if (c0 % 2 == 0 && c2 % 2 == 0)
	        load_to_gp_in_on_chip_2_buf12_FIFO_buf272275(gp_in_on_chip_2_buf12_to_gp_2184 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf272, 0, (c0 / 2) - 19, (c2 / 2) - 19);
	      if ((c0 - 1) % 3 == 0 && (c2 - 1) % 3 == 0)
	        gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf272 /* buf name */, gp_in_on_chip_3_buf20, 0, (c0 - 49) / 3, (c2 - 49) / 3);
	      load_to_gp_in_on_chip_3_buf20_to_gp_14200203(gp_in_on_chip_3_buf20 /* buf name */, gp_in_on_chip_3_buf20_to_gp_14200, 0, c0 - 63, c2 - 63);
	      if (c0 % 2 == 0)
	        load_to_gp_in_on_chip_3_buf20_to_gp_13196199(gp_in_on_chip_3_buf20 /* buf name */, gp_in_on_chip_3_buf20_to_gp_13196, 0, (c0 / 2) - 28, c2 - 63);
	    }
	  } else if (c0 % 2 == 0) {
	    for (int c2 = 38; c2 <= 70; c2 += 1) {
	      if (c2 % 2 == 0)
	        load_to_gp_in_on_chip_2_buf12_FIFO_buf272275(gp_in_on_chip_2_buf12_to_gp_2184 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf272, 0, (c0 / 2) - 19, (c2 / 2) - 19);
	      if (c0 >= 52 && c2 >= 49 && (c0 - 1) % 3 == 0 && (c2 - 1) % 3 == 0)
	        gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf272 /* buf name */, gp_in_on_chip_3_buf20, 0, (c0 - 49) / 3, (c2 - 49) / 3);
	      if (c0 >= 56 && c2 >= 63)
	        load_to_gp_in_on_chip_3_buf20_to_gp_13196199(gp_in_on_chip_3_buf20 /* buf name */, gp_in_on_chip_3_buf20_to_gp_13196, 0, (c0 / 2) - 28, c2 - 63);
	    }
	  } else if (c0 >= 49 && (c0 - 1) % 3 == 0) {
	    for (int c2 = 49; c2 <= 70; c2 += 3)
	      gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf272 /* buf name */, gp_in_on_chip_3_buf20, 0, (c0 - 49) / 3, (c2 - 49) / 3);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3176, gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf264, int root, int gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, int gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us44_to_gp_3176
	auto gp_in_on_chip_1_buf4_us44_to_gp_3176_gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265_c__gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266_value = gp_in_on_chip_1_buf4_us44_to_gp_3176.read();
	// Produce: gp_in_on_chip_1_buf4_us44_FIFO_buf264
	gp_in_on_chip_1_buf4_us44_FIFO_buf264_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_us44_to_gp_3176_gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265_c__gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266_value, gp_in_on_chip_1_buf4_us44_FIFO_buf264, root, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_FIFO_buf304307(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_3216, in_on_chip_FIFO_buf304_cache& in_on_chip_FIFO_buf304, int root, int in_on_chip_to_gp_3216_ld306, int in_on_chip_to_gp_3216_ld305) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_3216
	auto in_on_chip_to_gp_3216_in_on_chip_to_gp_3216_ld305_c__in_on_chip_to_gp_3216_ld306_value = in_on_chip_to_gp_3216.read();
	// Produce: in_on_chip_FIFO_buf304
	in_on_chip_FIFO_buf304_load_to_in_on_chip_FIFO_buf304307_write_bundle_write(/* arg names */in_on_chip_to_gp_3216_in_on_chip_to_gp_3216_ld305_c__in_on_chip_to_gp_3216_ld306_value, in_on_chip_FIFO_buf304, root, in_on_chip_to_gp_3216_ld306, in_on_chip_to_gp_3216_ld305, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff51(in_on_chip_FIFO_buf304_cache& in_on_chip_FIFO_buf304, gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf264, lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_049, int lp_in_on_chip_050) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf304
	auto in_on_chip_FIFO_buf304_lp_in_on_chip_050_p_7_c___lp_in_on_chip_049_p_7_value = in_on_chip_FIFO_buf304_diff51_read_bundle_read(in_on_chip_FIFO_buf304/* source_delay */, root, lp_in_on_chip_049, lp_in_on_chip_050, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_1_buf4_us44_FIFO_buf264
	auto gp_in_on_chip_1_buf4_us44_FIFO_buf264_lp_in_on_chip_050_p_0_c___lp_in_on_chip_049_p_0_value = gp_in_on_chip_1_buf4_us44_FIFO_buf264_diff51_read_bundle_read(gp_in_on_chip_1_buf4_us44_FIFO_buf264/* source_delay */, root, lp_in_on_chip_049, lp_in_on_chip_050, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(in_on_chip_FIFO_buf304_lp_in_on_chip_050_p_7_c___lp_in_on_chip_049_p_7_value, gp_in_on_chip_1_buf4_us44_FIFO_buf264_lp_in_on_chip_050_p_0_c___lp_in_on_chip_049_p_0_value);
	// Produce: lp_in_on_chip_0_buf48
	lp_in_on_chip_0_buf48_diff51_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf48, root, lp_in_on_chip_049, lp_in_on_chip_050, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf48_to_gp_4220223(lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4220, int root, int lp_in_on_chip_0_buf48_ld222, int lp_in_on_chip_0_buf48_ld221) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48
	auto lp_in_on_chip_0_buf48_lp_in_on_chip_0_buf48_ld221_c__lp_in_on_chip_0_buf48_ld222_value = lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4220223_read_bundle_read(lp_in_on_chip_0_buf48/* source_delay */, root, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf48_to_gp_4220
	lp_in_on_chip_0_buf48_to_gp_4220.write(lp_in_on_chip_0_buf48_lp_in_on_chip_0_buf48_ld221_c__lp_in_on_chip_0_buf48_ld222_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266_in_on_chip_to_gp_3216_ld306_lp_in_on_chip_049_lp_in_on_chip_0_buf48_ld222_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3176, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_3216, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4220) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266_in_on_chip_to_gp_3216_ld306_lp_in_on_chip_049_lp_in_on_chip_0_buf48_ld222__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us44_FIFO_buf264_cache gp_in_on_chip_1_buf4_us44_FIFO_buf264;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf304_cache in_on_chip_FIFO_buf304;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_cache lp_in_on_chip_0_buf48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> [15 + lp_in_on_chip_049, 1, lp_in_on_chip_050, 0] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63; load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267[root = 0, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265] -> [8 + gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, 0, 8 + gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, 53] : 0 <= gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265 <= 63; load_to_lp_in_on_chip_0_buf48_to_gp_4220223[root = 0, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221] -> [31 + lp_in_on_chip_0_buf48_ld222, 5, lp_in_on_chip_0_buf48_ld221, 0] : 0 <= lp_in_on_chip_0_buf48_ld222 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld221 <= 63; load_to_in_on_chip_FIFO_buf304307[root = 0, in_on_chip_to_gp_3216_ld306, in_on_chip_to_gp_3216_ld305] -> [in_on_chip_to_gp_3216_ld306, 0, in_on_chip_to_gp_3216_ld305, 26] : 7 <= in_on_chip_to_gp_3216_ld306 <= 70 and 7 <= in_on_chip_to_gp_3216_ld305 <= 70 }
//   { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> [15 + lp_in_on_chip_049, 1, lp_in_on_chip_050, 0] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
// Condition for diff51(((((1*i3)) == 0) && (((-1 + 1*i1)) == 0) && (((-15 + 1*i0)) >= 0) && (((78 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267[root = 0, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265] -> [8 + gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266, 0, 8 + gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265, 53] : 0 <= gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_to_gp_3176_ld265 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267(((((-53 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-8 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_0_buf48_to_gp_4220223[root = 0, lp_in_on_chip_0_buf48_ld222, lp_in_on_chip_0_buf48_ld221] -> [31 + lp_in_on_chip_0_buf48_ld222, 5, lp_in_on_chip_0_buf48_ld221, 0] : 0 <= lp_in_on_chip_0_buf48_ld222 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld221 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf48_to_gp_4220223(((((1*i3)) == 0) && (((-5 + 1*i1)) == 0) && (((-31 + 1*i0)) >= 0) && (((94 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_FIFO_buf304307[root = 0, in_on_chip_to_gp_3216_ld306, in_on_chip_to_gp_3216_ld305] -> [in_on_chip_to_gp_3216_ld306, 0, in_on_chip_to_gp_3216_ld305, 26] : 7 <= in_on_chip_to_gp_3216_ld306 <= 70 and 7 <= in_on_chip_to_gp_3216_ld305 <= 70 }
// Condition for load_to_in_on_chip_FIFO_buf304307(((((-26 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-7 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-7 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 7; c0 <= 94; c0 += 1) {
	  if (c0 <= 71)
	    for (int c2 = max(7, c0 - 63); c2 <= min(71, c0 + 63); c2 += 1) {
	      if (c0 <= 70 && c2 <= 70)
	        load_to_in_on_chip_FIFO_buf304307(in_on_chip_to_gp_3216 /* buf name */, in_on_chip_FIFO_buf304, 0, c0, c2);
	      if (c0 >= 8 && c2 >= 8)
	        load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf264267(gp_in_on_chip_1_buf4_us44_to_gp_3176 /* buf name */, gp_in_on_chip_1_buf4_us44_FIFO_buf264, 0, c0 - 8, c2 - 8);
	    }
	  if (c0 >= 15 && c0 <= 78)
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      diff51(in_on_chip_FIFO_buf304 /* buf name */, gp_in_on_chip_1_buf4_us44_FIFO_buf264 /* buf name */, lp_in_on_chip_0_buf48, 0, c0 - 15, c2);
	  if (c0 >= 31)
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      load_to_lp_in_on_chip_0_buf48_to_gp_4220223(lp_in_on_chip_0_buf48 /* buf name */, lp_in_on_chip_0_buf48_to_gp_4220, 0, c0 - 31, c2);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf48_FIFO_buf308311(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4220, lp_in_on_chip_0_buf48_FIFO_buf308_cache& lp_in_on_chip_0_buf48_FIFO_buf308, int root, int lp_in_on_chip_0_buf48_to_gp_4220_ld310, int lp_in_on_chip_0_buf48_to_gp_4220_ld309) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_to_gp_4220
	auto lp_in_on_chip_0_buf48_to_gp_4220_lp_in_on_chip_0_buf48_to_gp_4220_ld309_c__lp_in_on_chip_0_buf48_to_gp_4220_ld310_value = lp_in_on_chip_0_buf48_to_gp_4220.read();
	// Produce: lp_in_on_chip_0_buf48_FIFO_buf308
	lp_in_on_chip_0_buf48_FIFO_buf308_load_to_lp_in_on_chip_0_buf48_FIFO_buf308311_write_bundle_write(/* arg names */lp_in_on_chip_0_buf48_to_gp_4220_lp_in_on_chip_0_buf48_to_gp_4220_ld309_c__lp_in_on_chip_0_buf48_to_gp_4220_ld310_value, lp_in_on_chip_0_buf48_FIFO_buf308, root, lp_in_on_chip_0_buf48_to_gp_4220_ld310, lp_in_on_chip_0_buf48_to_gp_4220_ld309, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236.read();
	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc78(lp_in_on_chip_0_buf48_FIFO_buf308_cache& lp_in_on_chip_0_buf48_FIFO_buf308, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_FIFO_buf308
	auto lp_in_on_chip_0_buf48_FIFO_buf308_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value = lp_in_on_chip_0_buf48_FIFO_buf308_rc78_read_bundle_read(lp_in_on_chip_0_buf48_FIFO_buf308/* source_delay */, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_rc78_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324/* source_delay */, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_0_buf48_FIFO_buf308_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value);
	// Produce: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224, int root, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, int lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73
	auto lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225_c__lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226_value = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227_read_bundle_read(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73/* source_delay */, root, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224.write(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225_c__lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_0_buf48_reconstruct_lp7071_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226_lp_in_on_chip_0_buf48_to_gp_4220_ld310_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4220, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_0_buf48_reconstruct_lp7071_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226_lp_in_on_chip_0_buf48_to_gp_4220_ld310_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_FIFO_buf308_cache lp_in_on_chip_0_buf48_FIFO_buf308;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache lp_in_on_chip_0_buf48_reconstruct_lp70_buf73;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_0_buf48_FIFO_buf308311[root = 0, lp_in_on_chip_0_buf48_to_gp_4220_ld310, lp_in_on_chip_0_buf48_to_gp_4220_ld309] -> [47 + lp_in_on_chip_0_buf48_to_gp_4220_ld310, 7, lp_in_on_chip_0_buf48_to_gp_4220_ld309, 0] : 0 <= lp_in_on_chip_0_buf48_to_gp_4220_ld310 <= 63 and 0 <= lp_in_on_chip_0_buf48_to_gp_4220_ld309 <= 63; load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325] -> [63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, 0, 63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, 34] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325 <= 63; load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, 36] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225 <= 63; rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp7071, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp7072, 35] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
//   { load_to_lp_in_on_chip_0_buf48_FIFO_buf308311[root = 0, lp_in_on_chip_0_buf48_to_gp_4220_ld310, lp_in_on_chip_0_buf48_to_gp_4220_ld309] -> [47 + lp_in_on_chip_0_buf48_to_gp_4220_ld310, 7, lp_in_on_chip_0_buf48_to_gp_4220_ld309, 0] : 0 <= lp_in_on_chip_0_buf48_to_gp_4220_ld310 <= 63 and 0 <= lp_in_on_chip_0_buf48_to_gp_4220_ld309 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf48_FIFO_buf308311(((((1*i3)) == 0) && (((-7 + 1*i1)) == 0) && (((-47 + 1*i0)) >= 0) && (((110 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((63 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325] -> [63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326, 0, 63 + lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325, 34] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld325 <= 63 }
// Condition for load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327(((((-34 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225, 36] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld225 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227(((((-36 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))
//   { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> [63 + lp_in_on_chip_0_buf48_reconstruct_lp7071, 0, 63 + lp_in_on_chip_0_buf48_reconstruct_lp7072, 35] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
// Condition for rc78(((((-35 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((126 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((126 + -1*i2)) >= 0)))

	for (int c0 = 47; c0 <= 126; c0 += 1) {
	  if (c0 >= 63)
	    for (int c2 = 63; c2 <= 126; c2 += 1) {
	      load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324327(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324, 0, c0 - 63, c2 - 63);
	      rc78(lp_in_on_chip_0_buf48_FIFO_buf308 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf324 /* buf name */, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, 0, c0 - 63, c2 - 63);
	      load_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224227(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73 /* buf name */, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224, 0, c0 - 63, c2 - 63);
	    }
	  if (c0 <= 110)
	    for (int c2 = 0; c2 <= 63; c2 += 1)
	      load_to_lp_in_on_chip_0_buf48_FIFO_buf308311(lp_in_on_chip_0_buf48_to_gp_4220 /* buf name */, lp_in_on_chip_0_buf48_FIFO_buf308, 0, c0 - 47, c2);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf260263(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5172, gp_in_on_chip_1_buf4_FIFO_buf260_cache& gp_in_on_chip_1_buf4_FIFO_buf260, int root, int gp_in_on_chip_1_buf4_to_gp_5172_ld262, int gp_in_on_chip_1_buf4_to_gp_5172_ld261) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_5172
	auto gp_in_on_chip_1_buf4_to_gp_5172_gp_in_on_chip_1_buf4_to_gp_5172_ld261_c__gp_in_on_chip_1_buf4_to_gp_5172_ld262_value = gp_in_on_chip_1_buf4_to_gp_5172.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf260
	gp_in_on_chip_1_buf4_FIFO_buf260_load_to_gp_in_on_chip_1_buf4_FIFO_buf260263_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_5172_gp_in_on_chip_1_buf4_to_gp_5172_ld261_c__gp_in_on_chip_1_buf4_to_gp_5172_ld262_value, gp_in_on_chip_1_buf4_FIFO_buf260, root, gp_in_on_chip_1_buf4_to_gp_5172_ld262, gp_in_on_chip_1_buf4_to_gp_5172_ld261, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5192, gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf280, int root, int gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, int gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us36_to_gp_5192
	auto gp_in_on_chip_2_buf12_us36_to_gp_5192_gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281_c__gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282_value = gp_in_on_chip_2_buf12_us36_to_gp_5192.read();
	// Produce: gp_in_on_chip_2_buf12_us36_FIFO_buf280
	gp_in_on_chip_2_buf12_us36_FIFO_buf280_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_us36_to_gp_5192_gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281_c__gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282_value, gp_in_on_chip_2_buf12_us36_FIFO_buf280, root, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff43(gp_in_on_chip_1_buf4_FIFO_buf260_cache& gp_in_on_chip_1_buf4_FIFO_buf260, gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf280, lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_141, int lp_in_on_chip_142) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf260
	auto gp_in_on_chip_1_buf4_FIFO_buf260_lp_in_on_chip_142_p_3_c___lp_in_on_chip_141_p_3_value = gp_in_on_chip_1_buf4_FIFO_buf260_diff43_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf260/* source_delay */, root, lp_in_on_chip_141, lp_in_on_chip_142, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_2_buf12_us36_FIFO_buf280
	auto gp_in_on_chip_2_buf12_us36_FIFO_buf280_lp_in_on_chip_142_p_0_c___lp_in_on_chip_141_p_0_value = gp_in_on_chip_2_buf12_us36_FIFO_buf280_diff43_read_bundle_read(gp_in_on_chip_2_buf12_us36_FIFO_buf280/* source_delay */, root, lp_in_on_chip_141, lp_in_on_chip_142, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in_on_chip_1_buf4_FIFO_buf260_lp_in_on_chip_142_p_3_c___lp_in_on_chip_141_p_3_value, gp_in_on_chip_2_buf12_us36_FIFO_buf280_lp_in_on_chip_142_p_0_c___lp_in_on_chip_141_p_0_value);
	// Produce: lp_in_on_chip_1_buf40
	lp_in_on_chip_1_buf40_diff43_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_1_buf40, root, lp_in_on_chip_141, lp_in_on_chip_142, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_to_gp_6228231(lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6228, int root, int lp_in_on_chip_1_buf40_ld230, int lp_in_on_chip_1_buf40_ld229) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40
	auto lp_in_on_chip_1_buf40_lp_in_on_chip_1_buf40_ld229_c__lp_in_on_chip_1_buf40_ld230_value = lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6228231_read_bundle_read(lp_in_on_chip_1_buf40/* source_delay */, root, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_to_gp_6228
	lp_in_on_chip_1_buf40_to_gp_6228.write(lp_in_on_chip_1_buf40_lp_in_on_chip_1_buf40_ld229_c__lp_in_on_chip_1_buf40_ld230_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_5172_ld262_gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282_lp_in_on_chip_141_lp_in_on_chip_1_buf40_ld230_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5172, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5192, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6228) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_5172_ld262_gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282_lp_in_on_chip_141_lp_in_on_chip_1_buf40_ld230__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf260_cache gp_in_on_chip_1_buf4_FIFO_buf260;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us36_FIFO_buf280_cache gp_in_on_chip_2_buf12_us36_FIFO_buf280;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_cache lp_in_on_chip_1_buf40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283[root = 0, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281] -> [25 + 2gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, 0, 40 + gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, 31] : 0 <= gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281 <= 31; load_to_lp_in_on_chip_1_buf40_to_gp_6228231[root = 0, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229] -> [31 + 2lp_in_on_chip_1_buf40_ld230, 2, lp_in_on_chip_1_buf40_ld229, 0] : 0 <= lp_in_on_chip_1_buf40_ld230 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld229 <= 31; load_to_gp_in_on_chip_1_buf4_FIFO_buf260263[root = 0, gp_in_on_chip_1_buf4_to_gp_5172_ld262, gp_in_on_chip_1_buf4_to_gp_5172_ld261] -> [3 + 2gp_in_on_chip_1_buf4_to_gp_5172_ld262, 3, gp_in_on_chip_1_buf4_to_gp_5172_ld261, 0] : 3 <= gp_in_on_chip_1_buf4_to_gp_5172_ld262 <= 34 and 3 <= gp_in_on_chip_1_buf4_to_gp_5172_ld261 <= 34; diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> [25 + 2lp_in_on_chip_141, 0, 40 + lp_in_on_chip_142, 51] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
//   { load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283[root = 0, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281] -> [25 + 2gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282, 0, 40 + gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281, 31] : 0 <= gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_to_gp_5192_ld281 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-31 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((87 + -1*i0)) >= 0) && (((-40 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_to_gp_6228231[root = 0, lp_in_on_chip_1_buf40_ld230, lp_in_on_chip_1_buf40_ld229] -> [31 + 2lp_in_on_chip_1_buf40_ld230, 2, lp_in_on_chip_1_buf40_ld229, 0] : 0 <= lp_in_on_chip_1_buf40_ld230 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld229 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf40_to_gp_6228231(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((1*i3)) == 0) && (((-2 + 1*i1)) == 0) && (((-31 + 1*i0)) >= 0) && (((93 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf260263[root = 0, gp_in_on_chip_1_buf4_to_gp_5172_ld262, gp_in_on_chip_1_buf4_to_gp_5172_ld261] -> [3 + 2gp_in_on_chip_1_buf4_to_gp_5172_ld262, 3, gp_in_on_chip_1_buf4_to_gp_5172_ld261, 0] : 3 <= gp_in_on_chip_1_buf4_to_gp_5172_ld262 <= 34 and 3 <= gp_in_on_chip_1_buf4_to_gp_5172_ld261 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf260263(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((1*i3)) == 0) && (((-3 + 1*i1)) == 0) && (((-9 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-3 + 1*i2)) >= 0) && (((34 + -1*i2)) >= 0)))
//   { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> [25 + 2lp_in_on_chip_141, 0, 40 + lp_in_on_chip_142, 51] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
// Condition for diff43(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-51 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-25 + 1*i0)) >= 0) && (((87 + -1*i0)) >= 0) && (((-40 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))

	for (int c0 = 9; c0 <= 93; c0 += 2) {
	  if (c0 >= 25 && c0 <= 87)
	    for (int c2 = 40; c2 <= 71; c2 += 1) {
	      load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf280283(gp_in_on_chip_2_buf12_us36_to_gp_5192 /* buf name */, gp_in_on_chip_2_buf12_us36_FIFO_buf280, 0, (c0 - 25) / 2, c2 - 40);
	      diff43(gp_in_on_chip_1_buf4_FIFO_buf260 /* buf name */, gp_in_on_chip_2_buf12_us36_FIFO_buf280 /* buf name */, lp_in_on_chip_1_buf40, 0, (c0 - 25) / 2, c2 - 40);
	    }
	  if (c0 >= 31)
	    for (int c2 = 0; c2 <= 31; c2 += 1)
	      load_to_lp_in_on_chip_1_buf40_to_gp_6228231(lp_in_on_chip_1_buf40 /* buf name */, lp_in_on_chip_1_buf40_to_gp_6228, 0, (c0 - 31) / 2, c2);
	  if (c0 <= 71)
	    for (int c2 = 3; c2 <= 34; c2 += 1)
	      load_to_gp_in_on_chip_1_buf4_FIFO_buf260263(gp_in_on_chip_1_buf4_to_gp_5172 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf260, 0, (c0 - 3) / 2, c2);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_1_buf40_FIFO_buf316319(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6228, lp_in_on_chip_1_buf40_FIFO_buf316_cache& lp_in_on_chip_1_buf40_FIFO_buf316, int root, int lp_in_on_chip_1_buf40_to_gp_6228_ld318, int lp_in_on_chip_1_buf40_to_gp_6228_ld317) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_to_gp_6228
	auto lp_in_on_chip_1_buf40_to_gp_6228_lp_in_on_chip_1_buf40_to_gp_6228_ld317_c__lp_in_on_chip_1_buf40_to_gp_6228_ld318_value = lp_in_on_chip_1_buf40_to_gp_6228.read();
	// Produce: lp_in_on_chip_1_buf40_FIFO_buf316
	lp_in_on_chip_1_buf40_FIFO_buf316_load_to_lp_in_on_chip_1_buf40_FIFO_buf316319_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_to_gp_6228_lp_in_on_chip_1_buf40_to_gp_6228_ld317_c__lp_in_on_chip_1_buf40_to_gp_6228_ld318_value, lp_in_on_chip_1_buf40_FIFO_buf316, root, lp_in_on_chip_1_buf40_to_gp_6228_ld318, lp_in_on_chip_1_buf40_to_gp_6228_ld317, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248.read();
	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc69(lp_in_on_chip_1_buf40_FIFO_buf316_cache& lp_in_on_chip_1_buf40_FIFO_buf316, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_FIFO_buf316
	auto lp_in_on_chip_1_buf40_FIFO_buf316_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value = lp_in_on_chip_1_buf40_FIFO_buf316_rc69_read_bundle_read(lp_in_on_chip_1_buf40_FIFO_buf316/* source_delay */, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_rc69_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336/* source_delay */, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_1_buf40_FIFO_buf316_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value);
	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64/* source_delay */, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232.write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_1_buf40_reconstruct_lp6162_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234_lp_in_on_chip_1_buf40_to_gp_6228_ld318_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6228, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_1_buf40_reconstruct_lp6162_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234_lp_in_on_chip_1_buf40_to_gp_6228_ld318_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_FIFO_buf316_cache lp_in_on_chip_1_buf40_FIFO_buf316;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, 22] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233 <= 31; rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6162, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6163, 21] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31; load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, 20] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337 <= 31; load_to_lp_in_on_chip_1_buf40_FIFO_buf316319[root = 0, lp_in_on_chip_1_buf40_to_gp_6228_ld318, lp_in_on_chip_1_buf40_to_gp_6228_ld317] -> [47 + 2lp_in_on_chip_1_buf40_to_gp_6228_ld318, 6, lp_in_on_chip_1_buf40_to_gp_6228_ld317, 0] : 0 <= lp_in_on_chip_1_buf40_to_gp_6228_ld318 <= 31 and 0 <= lp_in_on_chip_1_buf40_to_gp_6228_ld317 <= 31 }
//   { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233, 22] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld233 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-22 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((125 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((125 + -1*i2)) >= 0)))
//   { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> [63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6162, 0, 63 + 2lp_in_on_chip_1_buf40_reconstruct_lp6163, 21] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
// Condition for rc69(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-21 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((125 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((125 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337, 20] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld337 <= 31 }
// Condition for load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-20 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((125 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((125 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_FIFO_buf316319[root = 0, lp_in_on_chip_1_buf40_to_gp_6228_ld318, lp_in_on_chip_1_buf40_to_gp_6228_ld317] -> [47 + 2lp_in_on_chip_1_buf40_to_gp_6228_ld318, 6, lp_in_on_chip_1_buf40_to_gp_6228_ld317, 0] : 0 <= lp_in_on_chip_1_buf40_to_gp_6228_ld318 <= 31 and 0 <= lp_in_on_chip_1_buf40_to_gp_6228_ld317 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf40_FIFO_buf316319(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((1*i3)) == 0) && (((-6 + 1*i1)) == 0) && (((-47 + 1*i0)) >= 0) && (((109 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((31 + -1*i2)) >= 0)))

	for (int c0 = 47; c0 <= 125; c0 += 2) {
	  if (c0 >= 63)
	    for (int c2 = 63; c2 <= 125; c2 += 2) {
	      load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336339(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	      rc69(lp_in_on_chip_1_buf40_FIFO_buf316 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf336 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	      load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232235(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	    }
	  if (c0 <= 109)
	    for (int c2 = 0; c2 <= 31; c2 += 1)
	      load_to_lp_in_on_chip_1_buf40_FIFO_buf316319(lp_in_on_chip_1_buf40_to_gp_6228 /* buf name */, lp_in_on_chip_1_buf40_FIFO_buf316, 0, (c0 - 47) / 2, c2);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf276279(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, gp_in_on_chip_2_buf12_FIFO_buf276_cache& gp_in_on_chip_2_buf12_FIFO_buf276, int root, int gp_in_on_chip_2_buf12_to_gp_7188_ld278, int gp_in_on_chip_2_buf12_to_gp_7188_ld277) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_7188
	auto gp_in_on_chip_2_buf12_to_gp_7188_gp_in_on_chip_2_buf12_to_gp_7188_ld277_c__gp_in_on_chip_2_buf12_to_gp_7188_ld278_value = gp_in_on_chip_2_buf12_to_gp_7188.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf276
	gp_in_on_chip_2_buf12_FIFO_buf276_load_to_gp_in_on_chip_2_buf12_FIFO_buf276279_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_7188_gp_in_on_chip_2_buf12_to_gp_7188_ld277_c__gp_in_on_chip_2_buf12_to_gp_7188_ld278_value, gp_in_on_chip_2_buf12_FIFO_buf276, root, gp_in_on_chip_2_buf12_to_gp_7188_ld278, gp_in_on_chip_2_buf12_to_gp_7188_ld277, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf292, int root, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us28_to_gp_7204
	auto gp_in_on_chip_3_buf20_us28_to_gp_7204_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293_c__gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294_value = gp_in_on_chip_3_buf20_us28_to_gp_7204.read();
	// Produce: gp_in_on_chip_3_buf20_us28_FIFO_buf292
	gp_in_on_chip_3_buf20_us28_FIFO_buf292_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_us28_to_gp_7204_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293_c__gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294_value, gp_in_on_chip_3_buf20_us28_FIFO_buf292, root, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff35(gp_in_on_chip_2_buf12_FIFO_buf276_cache& gp_in_on_chip_2_buf12_FIFO_buf276, gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf292, lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_233, int lp_in_on_chip_234) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf276
	auto gp_in_on_chip_2_buf12_FIFO_buf276_lp_in_on_chip_234_p_1_c___lp_in_on_chip_233_p_1_value = gp_in_on_chip_2_buf12_FIFO_buf276_diff35_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf276/* source_delay */, root, lp_in_on_chip_233, lp_in_on_chip_234, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_3_buf20_us28_FIFO_buf292
	auto gp_in_on_chip_3_buf20_us28_FIFO_buf292_lp_in_on_chip_234_p_0_c___lp_in_on_chip_233_p_0_value = gp_in_on_chip_3_buf20_us28_FIFO_buf292_diff35_read_bundle_read(gp_in_on_chip_3_buf20_us28_FIFO_buf292/* source_delay */, root, lp_in_on_chip_233, lp_in_on_chip_234, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in_on_chip_2_buf12_FIFO_buf276_lp_in_on_chip_234_p_1_c___lp_in_on_chip_233_p_1_value, gp_in_on_chip_3_buf20_us28_FIFO_buf292_lp_in_on_chip_234_p_0_c___lp_in_on_chip_233_p_0_value);
	// Produce: lp_in_on_chip_2_buf32
	lp_in_on_chip_2_buf32_diff35_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_2_buf32, root, lp_in_on_chip_233, lp_in_on_chip_234, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_to_gp_8240243(lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8240, int root, int lp_in_on_chip_2_buf32_ld242, int lp_in_on_chip_2_buf32_ld241) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32
	auto lp_in_on_chip_2_buf32_lp_in_on_chip_2_buf32_ld241_c__lp_in_on_chip_2_buf32_ld242_value = lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8240243_read_bundle_read(lp_in_on_chip_2_buf32/* source_delay */, root, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_to_gp_8240
	lp_in_on_chip_2_buf32_to_gp_8240.write(lp_in_on_chip_2_buf32_lp_in_on_chip_2_buf32_ld241_c__lp_in_on_chip_2_buf32_ld242_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_7188_ld278_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294_lp_in_on_chip_233_lp_in_on_chip_2_buf32_ld242_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8240) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_7188_ld278_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294_lp_in_on_chip_233_lp_in_on_chip_2_buf32_ld242__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf276_cache gp_in_on_chip_2_buf12_FIFO_buf276;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us28_FIFO_buf292_cache gp_in_on_chip_3_buf20_us28_FIFO_buf292;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_cache lp_in_on_chip_2_buf32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> [56 + lp_in_on_chip_233, 0, 63 + lp_in_on_chip_234, 43] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15; load_to_gp_in_on_chip_2_buf12_FIFO_buf276279[root = 0, gp_in_on_chip_2_buf12_to_gp_7188_ld278, gp_in_on_chip_2_buf12_to_gp_7188_ld277] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_7188_ld278, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_7188_ld277, 52] : 0 < gp_in_on_chip_2_buf12_to_gp_7188_ld278 <= 16 and 0 < gp_in_on_chip_2_buf12_to_gp_7188_ld277 <= 16; load_to_lp_in_on_chip_2_buf32_to_gp_8240243[root = 0, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241] -> [56 + lp_in_on_chip_2_buf32_ld242, 0, 63 + lp_in_on_chip_2_buf32_ld241, 44] : 0 <= lp_in_on_chip_2_buf32_ld242 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld241 <= 15; load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295[root = 0, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293] -> [56 + gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, 0, 63 + gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, 42] : 0 <= gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293 <= 15 }
//   { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> [56 + lp_in_on_chip_233, 0, 63 + lp_in_on_chip_234, 43] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
// Condition for diff35(((((-43 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf276279[root = 0, gp_in_on_chip_2_buf12_to_gp_7188_ld278, gp_in_on_chip_2_buf12_to_gp_7188_ld277] -> [38 + 2gp_in_on_chip_2_buf12_to_gp_7188_ld278, 0, 38 + 2gp_in_on_chip_2_buf12_to_gp_7188_ld277, 52] : 0 < gp_in_on_chip_2_buf12_to_gp_7188_ld278 <= 16 and 0 < gp_in_on_chip_2_buf12_to_gp_7188_ld277 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf276279(((((-1*i0 + (2*(((1*i0)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-52 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-40 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-40 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_to_gp_8240243[root = 0, lp_in_on_chip_2_buf32_ld242, lp_in_on_chip_2_buf32_ld241] -> [56 + lp_in_on_chip_2_buf32_ld242, 0, 63 + lp_in_on_chip_2_buf32_ld241, 44] : 0 <= lp_in_on_chip_2_buf32_ld242 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld241 <= 15 }
// Condition for load_to_lp_in_on_chip_2_buf32_to_gp_8240243(((((-44 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295[root = 0, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293] -> [56 + gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294, 0, 63 + gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293, 42] : 0 <= gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_to_gp_7204_ld293 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295(((((-42 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-56 + 1*i0)) >= 0) && (((71 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))

	for (int c0 = 40; c0 <= 71; c0 += 1) {
	  if (c0 >= 56) {
	    if (c0 % 2 == 0)
	      for (int c2 = 20; c2 <= 31; c2 += 1)
	        load_to_gp_in_on_chip_2_buf12_FIFO_buf276279(gp_in_on_chip_2_buf12_to_gp_7188 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf276, 0, (c0 / 2) - 19, c2 - 19);
	    for (int c2 = 63; c2 <= 78; c2 += 1) {
	      load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf292295(gp_in_on_chip_3_buf20_us28_to_gp_7204 /* buf name */, gp_in_on_chip_3_buf20_us28_FIFO_buf292, 0, c0 - 56, c2 - 63);
	      diff35(gp_in_on_chip_2_buf12_FIFO_buf276 /* buf name */, gp_in_on_chip_3_buf20_us28_FIFO_buf292 /* buf name */, lp_in_on_chip_2_buf32, 0, c0 - 56, c2 - 63);
	      load_to_lp_in_on_chip_2_buf32_to_gp_8240243(lp_in_on_chip_2_buf32 /* buf name */, lp_in_on_chip_2_buf32_to_gp_8240, 0, c0 - 56, c2 - 63);
	      if (c2 <= 70 && c0 % 2 == 0 && c2 % 2 == 0)
	        load_to_gp_in_on_chip_2_buf12_FIFO_buf276279(gp_in_on_chip_2_buf12_to_gp_7188 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf276, 0, (c0 / 2) - 19, (c2 / 2) - 19);
	    }
	  } else if (c0 % 2 == 0) {
	    for (int c2 = 20; c2 <= 35; c2 += 1)
	      load_to_gp_in_on_chip_2_buf12_FIFO_buf276279(gp_in_on_chip_2_buf12_to_gp_7188 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf276, 0, (c0 / 2) - 19, c2 - 19);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8208, gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf296, int root, int gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, int gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us56_to_gp_8208
	auto gp_in_on_chip_3_buf20_us56_to_gp_8208_gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297_c__gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298_value = gp_in_on_chip_3_buf20_us56_to_gp_8208.read();
	// Produce: gp_in_on_chip_3_buf20_us56_FIFO_buf296
	gp_in_on_chip_3_buf20_us56_FIFO_buf296_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_us56_to_gp_8208_gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297_c__gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298_value, gp_in_on_chip_3_buf20_us56_FIFO_buf296, root, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_FIFO_buf328331(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8240, lp_in_on_chip_2_buf32_FIFO_buf328_cache& lp_in_on_chip_2_buf32_FIFO_buf328, int root, int lp_in_on_chip_2_buf32_to_gp_8240_ld330, int lp_in_on_chip_2_buf32_to_gp_8240_ld329) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_to_gp_8240
	auto lp_in_on_chip_2_buf32_to_gp_8240_lp_in_on_chip_2_buf32_to_gp_8240_ld329_c__lp_in_on_chip_2_buf32_to_gp_8240_ld330_value = lp_in_on_chip_2_buf32_to_gp_8240.read();
	// Produce: lp_in_on_chip_2_buf32_FIFO_buf328
	lp_in_on_chip_2_buf32_FIFO_buf328_load_to_lp_in_on_chip_2_buf32_FIFO_buf328331_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_to_gp_8240_lp_in_on_chip_2_buf32_to_gp_8240_ld329_c__lp_in_on_chip_2_buf32_to_gp_8240_ld330_value, lp_in_on_chip_2_buf32_FIFO_buf328, root, lp_in_on_chip_2_buf32_to_gp_8240_ld330, lp_in_on_chip_2_buf32_to_gp_8240_ld329, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc60(lp_in_on_chip_2_buf32_FIFO_buf328_cache& lp_in_on_chip_2_buf32_FIFO_buf328, gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf296, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_FIFO_buf328
	auto lp_in_on_chip_2_buf32_FIFO_buf328_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value = lp_in_on_chip_2_buf32_FIFO_buf328_rc60_read_bundle_read(lp_in_on_chip_2_buf32_FIFO_buf328/* source_delay */, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_3_buf20_us56_FIFO_buf296
	auto gp_in_on_chip_3_buf20_us56_FIFO_buf296_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value = gp_in_on_chip_3_buf20_us56_FIFO_buf296_rc60_read_bundle_read(gp_in_on_chip_3_buf20_us56_FIFO_buf296/* source_delay */, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_2_buf32_FIFO_buf328_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value, gp_in_on_chip_3_buf20_us56_FIFO_buf296_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value);
	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55/* source_delay */, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244.write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298_lp_in_on_chip_2_buf32_reconstruct_lp5253_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246_lp_in_on_chip_2_buf32_to_gp_8240_ld330_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8208, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8240, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298_lp_in_on_chip_2_buf32_reconstruct_lp5253_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246_lp_in_on_chip_2_buf32_to_gp_8240_ld330__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us56_FIFO_buf296_cache gp_in_on_chip_3_buf20_us56_FIFO_buf296;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_FIFO_buf328_cache lp_in_on_chip_2_buf32_FIFO_buf328;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299[root = 0, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297] -> [63 + gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, 0, 63 + gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, 14] : 0 <= gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297 <= 15; rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5253, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5254, 15] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15; load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245] -> [63 + 3lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, 0, 63 + 3lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, 16] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 <= 15; load_to_lp_in_on_chip_2_buf32_FIFO_buf328331[root = 0, lp_in_on_chip_2_buf32_to_gp_8240_ld330, lp_in_on_chip_2_buf32_to_gp_8240_ld329] -> [62 + lp_in_on_chip_2_buf32_to_gp_8240_ld330, 4, lp_in_on_chip_2_buf32_to_gp_8240_ld329, 0] : 0 <= lp_in_on_chip_2_buf32_to_gp_8240_ld330 <= 15 and 0 <= lp_in_on_chip_2_buf32_to_gp_8240_ld329 <= 15 }
//   { load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299[root = 0, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297] -> [63 + gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298, 0, 63 + gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297, 14] : 0 <= gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_to_gp_8208_ld297 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299(((((-14 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((78 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((78 + -1*i2)) >= 0)))
//   { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> [63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5253, 0, 63 + 2lp_in_on_chip_2_buf32_reconstruct_lp5254, 15] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
// Condition for rc60(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-1 + -1*i2 + (2*(((1 + 1*i2)) >> 1)))) == 0) && (((-15 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((93 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((93 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245] -> [63 + 3lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246, 0, 63 + 3lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245, 16] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld245 <= 15 }
// Condition for load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(((((-1*i0 + (3*$rtoi($floor(((1*i0)) / 3))))) == 0) && (((-1*i2 + (3*$rtoi($floor(((1*i2)) / 3))))) == 0) && (((-16 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-63 + 1*i0)) >= 0) && (((108 + -1*i0)) >= 0) && (((-63 + 1*i2)) >= 0) && (((108 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_FIFO_buf328331[root = 0, lp_in_on_chip_2_buf32_to_gp_8240_ld330, lp_in_on_chip_2_buf32_to_gp_8240_ld329] -> [62 + lp_in_on_chip_2_buf32_to_gp_8240_ld330, 4, lp_in_on_chip_2_buf32_to_gp_8240_ld329, 0] : 0 <= lp_in_on_chip_2_buf32_to_gp_8240_ld330 <= 15 and 0 <= lp_in_on_chip_2_buf32_to_gp_8240_ld329 <= 15 }
// Condition for load_to_lp_in_on_chip_2_buf32_FIFO_buf328331(((((1*i3)) == 0) && (((-4 + 1*i1)) == 0) && (((-62 + 1*i0)) >= 0) && (((77 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((15 + -1*i2)) >= 0)))

	for (int c0 = 62; c0 <= 108; c0 += 1) {
	  if (c0 >= 63 && c0 <= 78) {
	    for (int c2 = 63; c2 <= 78; c2 += 1) {
	      load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf296299(gp_in_on_chip_3_buf20_us56_to_gp_8208 /* buf name */, gp_in_on_chip_3_buf20_us56_FIFO_buf296, 0, c0 - 63, c2 - 63);
	      if ((c0 + 1) % 2 == 0 && (c2 + 1) % 2 == 0)
	        rc60(lp_in_on_chip_2_buf32_FIFO_buf328 /* buf name */, gp_in_on_chip_3_buf20_us56_FIFO_buf296 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	      if (c0 % 3 == 0 && c2 % 3 == 0)
	        load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, (c2 / 3) - 21);
	    }
	    if ((c0 + 1) % 2 == 0) {
	      for (int c2 = 79; c2 <= 93; c2 += 1) {
	        if ((c2 + 1) % 2 == 0)
	          rc60(lp_in_on_chip_2_buf32_FIFO_buf328 /* buf name */, gp_in_on_chip_3_buf20_us56_FIFO_buf296 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	        if (c0 % 3 == 0 && c2 % 3 == 0)
	          load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, (c2 / 3) - 21);
	      }
	      if (c0 % 3 == 0)
	        for (int c2 = 32; c2 <= 36; c2 += 1)
	          load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, c2 - 21);
	    } else if (c0 % 3 == 0) {
	      for (int c2 = 27; c2 <= 36; c2 += 1)
	        load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, c2 - 21);
	    }
	  }
	  if (c0 <= 77) {
	    for (int c2 = 0; c2 <= 15; c2 += 1)
	      load_to_lp_in_on_chip_2_buf32_FIFO_buf328331(lp_in_on_chip_2_buf32_to_gp_8240 /* buf name */, lp_in_on_chip_2_buf32_FIFO_buf328, 0, c0 - 62, c2);
	  } else if (c0 >= 99 && (c0 + 3) % 6 == 0) {
	    for (int c2 = 21; c2 <= 36; c2 += 1)
	      load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, c2 - 21);
	  } else if (c0 >= 84 && c0 % 6 == 0) {
	    for (int c2 = 21; c2 <= 36; c2 += 1)
	      load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, c2 - 21);
	  } else if (c0 <= 93 && (c0 + 1) % 2 == 0) {
	    for (int c2 = 63; c2 <= 93; c2 += 1) {
	      if ((c2 + 1) % 2 == 0)
	        rc60(lp_in_on_chip_2_buf32_FIFO_buf328 /* buf name */, gp_in_on_chip_3_buf20_us56_FIFO_buf296 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, 0, (c0 - 63) / 2, (c2 - 63) / 2);
	      if (c0 % 3 == 0 && c2 % 3 == 0)
	        load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, (c2 / 3) - 21);
	    }
	    if (c0 % 3 == 0)
	      for (int c2 = 32; c2 <= 36; c2 += 1)
	        load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244247(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, 0, (c0 / 3) - 21, c2 - 21);
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_pw_math_in02__p___m_7_rp__p_7_c______lp_pw_math_in01__p___m_7_rp__p_7_value = in.read();
	auto compute_result = id(in__lp_pw_math_in02__p___m_7_rp__p_7_c______lp_pw_math_in01__p___m_7_rp__p_7_value);
	// Produce: in_on_chip
	in_on_chip_pw_math_in03_write_bundle_write(/* arg names */compute_result, in_on_chip, root, pw_math_in01, pw_math_in02, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_to_gp_3216219(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_3216, int root, int in_on_chip_ld218, int in_on_chip_ld217) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld217_c__in_on_chip_ld218_value = in_on_chip_load_to_in_on_chip_to_gp_3216219_read_bundle_read(in_on_chip/* source_delay */, root, in_on_chip_ld218, in_on_chip_ld217, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_3216
	in_on_chip_to_gp_3216.write(in_on_chip_in_on_chip_ld217_c__in_on_chip_ld218_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_to_gp_0212215(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_0212, int root, int in_on_chip_ld214, int in_on_chip_ld213) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld213_c__in_on_chip_ld214_value = in_on_chip_load_to_in_on_chip_to_gp_0212215_read_bundle_read(in_on_chip/* source_delay */, root, in_on_chip_ld214, in_on_chip_ld213, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_0212
	in_on_chip_to_gp_0212.write(in_on_chip_in_on_chip_ld213_c__in_on_chip_ld214_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_on_chip_ld214_in_on_chip_ld218_pw_math_in01_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_0212, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_3216) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_on_chip_ld214_in_on_chip_ld218_pw_math_in01__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_on_chip_cache in_on_chip;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, 0, pw_math_in02, 0] : 0 <= pw_math_in01 <= 70 and 0 <= pw_math_in02 <= 70; load_to_in_on_chip_to_gp_3216219[root = 0, in_on_chip_ld218, in_on_chip_ld217] -> [in_on_chip_ld218, 0, in_on_chip_ld217, 25] : 7 <= in_on_chip_ld218 <= 70 and 7 <= in_on_chip_ld217 <= 70; load_to_in_on_chip_to_gp_0212215[root = 0, in_on_chip_ld214, in_on_chip_ld213] -> [in_on_chip_ld214, 0, in_on_chip_ld213, 1] : 0 <= in_on_chip_ld214 <= 70 and 0 <= in_on_chip_ld213 <= 70 }
//   { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> [pw_math_in01, 0, pw_math_in02, 0] : 0 <= pw_math_in01 <= 70 and 0 <= pw_math_in02 <= 70 }
// Condition for pw_math_in03(((((1*i3)) == 0) && (((1*i1)) == 0) && (((1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_to_gp_3216219[root = 0, in_on_chip_ld218, in_on_chip_ld217] -> [in_on_chip_ld218, 0, in_on_chip_ld217, 25] : 7 <= in_on_chip_ld218 <= 70 and 7 <= in_on_chip_ld217 <= 70 }
// Condition for load_to_in_on_chip_to_gp_3216219(((((-25 + 1*i3)) == 0) && (((1*i1)) == 0) && (((-7 + 1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((-7 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_to_gp_0212215[root = 0, in_on_chip_ld214, in_on_chip_ld213] -> [in_on_chip_ld214, 0, in_on_chip_ld213, 1] : 0 <= in_on_chip_ld214 <= 70 and 0 <= in_on_chip_ld213 <= 70 }
// Condition for load_to_in_on_chip_to_gp_0212215(((((-1 + 1*i3)) == 0) && (((1*i1)) == 0) && (((1*i0)) >= 0) && (((70 + -1*i0)) >= 0) && (((1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	for (int c0 = 0; c0 <= 70; c0 += 1)
	  for (int c2 = 0; c2 <= 70; c2 += 1) {
	    pw_math_in03(in /* buf name */, in_on_chip, 0, c0, c2);
	    load_to_in_on_chip_to_gp_0212215(in_on_chip /* buf name */, in_on_chip_to_gp_0212, 0, c0, c2);
	    if (c0 >= 7 && c2 >= 7)
	      load_to_in_on_chip_to_gp_3216219(in_on_chip /* buf name */, in_on_chip_to_gp_3216, 0, c0, c2);
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

  HWStream< hw_uint<32> > in_on_chip_to_gp_0212("in_on_chip_to_gp_0212");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_0212.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_11168("gp_in_on_chip_1_buf4_to_gp_11168");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_11168.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_1164("gp_in_on_chip_1_buf4_to_gp_1164");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_1164.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_5172("gp_in_on_chip_1_buf4_to_gp_5172");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_5172.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_12180("gp_in_on_chip_2_buf12_to_gp_12180");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_12180.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_2184("gp_in_on_chip_2_buf12_to_gp_2184");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_2184.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_7188("gp_in_on_chip_2_buf12_to_gp_7188");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_7188.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224("lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_us44_to_gp_3176("gp_in_on_chip_1_buf4_us44_to_gp_3176");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_us44_to_gp_3176.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_us36_to_gp_5192("gp_in_on_chip_2_buf12_us36_to_gp_5192");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_us36_to_gp_5192.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_3_buf20_to_gp_13196("gp_in_on_chip_3_buf20_to_gp_13196");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_3_buf20_to_gp_13196.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_3_buf20_us28_to_gp_7204("gp_in_on_chip_3_buf20_us28_to_gp_7204");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_3_buf20_us28_to_gp_7204.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_3_buf20_to_gp_14200("gp_in_on_chip_3_buf20_to_gp_14200");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_3_buf20_to_gp_14200.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_3_buf20_us56_to_gp_8208("gp_in_on_chip_3_buf20_us56_to_gp_8208");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_3_buf20_us56_to_gp_8208.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232("lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236("lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244("lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248("lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > in_on_chip_to_gp_3216("in_on_chip_to_gp_3216");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_3216.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf48_to_gp_4220("lp_in_on_chip_0_buf48_to_gp_4220");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf48_to_gp_4220.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf40_to_gp_6228("lp_in_on_chip_1_buf40_to_gp_6228");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf40_to_gp_6228.values depth=2048
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_2_buf32_to_gp_8240("lp_in_on_chip_2_buf32_to_gp_8240");
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_2_buf32_to_gp_8240.values depth=2048
#endif //__VIVADO_SYNTH__


  Extracted_in_on_chip_ld214_in_on_chip_ld218_pw_math_in01_(in, in_on_chip_to_gp_0212, in_on_chip_to_gp_3216);
  Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld166_gp_in_on_chip_1_buf4_ld170_gp_in_on_chip_1_buf4_ld174_in_on_chip_to_gp_0212_ld302_(in_on_chip_to_gp_0212, gp_in_on_chip_1_buf4_to_gp_11168, gp_in_on_chip_1_buf4_to_gp_1164, gp_in_on_chip_1_buf4_to_gp_5172);
  Extracted_gp_in_on_chip_1_buf4_to_gp_1164_ld254_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld182_gp_in_on_chip_2_buf12_ld186_gp_in_on_chip_2_buf12_ld190_(gp_in_on_chip_1_buf4_to_gp_1164, gp_in_on_chip_2_buf12_to_gp_12180, gp_in_on_chip_2_buf12_to_gp_2184, gp_in_on_chip_2_buf12_to_gp_7188);
  Extracted_gp_in_on_chip_1_buf4_to_gp_11168_ld258_gp_in_on_chip_1_buf4_us44_ld178_us_gp_in_on_chip_1_buf445_(gp_in_on_chip_1_buf4_to_gp_11168, gp_in_on_chip_1_buf4_us44_to_gp_3176);
  Extracted_gp_in_on_chip_2_buf12_to_gp_12180_ld270_gp_in_on_chip_2_buf12_us36_ld194_us_gp_in_on_chip_2_buf1237_(gp_in_on_chip_2_buf12_to_gp_12180, gp_in_on_chip_2_buf12_us36_to_gp_5192);
  Extracted_gp_in_on_chip_2_buf12_to_gp_2184_ld274_gp_in_on_chip_321_gp_in_on_chip_3_buf20_ld198_gp_in_on_chip_3_buf20_ld202_(gp_in_on_chip_2_buf12_to_gp_2184, gp_in_on_chip_3_buf20_to_gp_13196, gp_in_on_chip_3_buf20_to_gp_14200);
  Extracted_gp_in_on_chip_1_buf4_us44_to_gp_3176_ld266_in_on_chip_to_gp_3216_ld306_lp_in_on_chip_049_lp_in_on_chip_0_buf48_ld222_(gp_in_on_chip_1_buf4_us44_to_gp_3176, in_on_chip_to_gp_3216, lp_in_on_chip_0_buf48_to_gp_4220);
  Extracted_gp_in_on_chip_1_buf4_to_gp_5172_ld262_gp_in_on_chip_2_buf12_us36_to_gp_5192_ld282_lp_in_on_chip_141_lp_in_on_chip_1_buf40_ld230_(gp_in_on_chip_1_buf4_to_gp_5172, gp_in_on_chip_2_buf12_us36_to_gp_5192, lp_in_on_chip_1_buf40_to_gp_6228);
  Extracted_gp_in_on_chip_3_buf20_to_gp_13196_ld286_gp_in_on_chip_3_buf20_us28_ld206_us_gp_in_on_chip_3_buf2029_(gp_in_on_chip_3_buf20_to_gp_13196, gp_in_on_chip_3_buf20_us28_to_gp_7204);
  Extracted_gp_in_on_chip_3_buf20_to_gp_14200_ld290_gp_in_on_chip_3_buf20_us56_ld210_us_gp_in_on_chip_3_buf2057_(gp_in_on_chip_3_buf20_to_gp_14200, gp_in_on_chip_3_buf20_us56_to_gp_8208);
  Extracted_gp_in_on_chip_2_buf12_to_gp_7188_ld278_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld294_lp_in_on_chip_233_lp_in_on_chip_2_buf32_ld242_(gp_in_on_chip_2_buf12_to_gp_7188, gp_in_on_chip_3_buf20_us28_to_gp_7204, lp_in_on_chip_2_buf32_to_gp_8240);
  Extracted_gp_in_on_chip_3_buf20_us56_to_gp_8208_ld298_lp_in_on_chip_2_buf32_reconstruct_lp5253_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_ld246_lp_in_on_chip_2_buf32_to_gp_8240_ld330_(gp_in_on_chip_3_buf20_us56_to_gp_8208, lp_in_on_chip_2_buf32_to_gp_8240, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244);
  Extracted_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244_ld334_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld250_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566_(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_to_gp_16244, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248);
  Extracted_lp_in_on_chip_1_buf40_reconstruct_lp6162_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_ld234_lp_in_on_chip_1_buf40_to_gp_6228_ld318_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248_ld338_(lp_in_on_chip_1_buf40_to_gp_6228, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6248, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232);
  Extracted_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232_ld322_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld238_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475_(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_to_gp_15232, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236);
  Extracted_lp_in_on_chip_0_buf48_reconstruct_lp7071_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_ld226_lp_in_on_chip_0_buf48_to_gp_4220_ld310_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236_ld326_(lp_in_on_chip_0_buf48_to_gp_4220, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4236, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224);
  Extracted_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224_ld314_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_to_gp_10224, out);

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
  // { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 70 and 0 <= pw_math_in02 <= 70 }
const int pw_math_in03_read_pipe0_num_transfers = 5041;
  // { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> out[pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
const int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_num_transfers = 4096;


extern "C" {

void pyr_blndd2048_ii1_accel(hw_uint<32>* pw_math_in03_read_pipe0, hw_uint<32>* pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_channel;

  burst_read<32>(pw_math_in03_read_pipe0, pw_math_in03_read_pipe0_channel, pw_math_in03_read_pipe0_num_transfers*size);

  pyr_blndd2048_ii1_wrapper(pw_math_in03_read_pipe0_channel, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_channel, size);

  burst_write<32>(pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_channel, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pyr_blndd2048_ii1_rdai(HWStream<hw_uint<32> >& pw_math_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pyr_blndd2048_ii1(pw_math_in03_read_pipe0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

