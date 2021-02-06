#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cp_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "cp_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_303_sm88_0123_21_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_647_sm89_0121_19_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_cache {
  // Reader addrs...
    // { load_to_demosaic_to_gp_303_sm88_0123[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1081 }
    // { load_to_demosaic_to_gp_647_sm89_0121[root = 0, demosaic_ld6, demosaic_ld5] -> demosaic[demosaic_ld5, demosaic_ld6] : 0 <= demosaic_ld6 <= 1079 and 0 <= demosaic_ld5 <= 1079 }
  // # of banks: 2
  demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_303_sm88_0123_21_cache demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_303_sm88_0123_21;
  demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_647_sm89_0121_19_cache demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_647_sm89_0121_19;
};



inline void demosaic_demosaic_update_0_sm103_0151_84_write(hw_uint<16>& demosaic_demosaic_update_0_sm103_0151_84, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_303_sm88_0123_21.push(demosaic_demosaic_update_0_sm103_0151_84);
  demosaic.demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_647_sm89_0121_19.push(demosaic_demosaic_update_0_sm103_0151_84);
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm88_0123_21_select(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_303_sm88_0123_21 read pattern: { load_to_demosaic_to_gp_303_sm88_0123[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1081 }
  // Read schedule : { load_to_demosaic_to_gp_303_sm88_0123[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { demosaic_update_0_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_demosaic_update_0_sm103_0151_84 = demosaic.demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_303_sm88_0123_21.peek(/* one reader or all rams */ 0);
  return value_demosaic_demosaic_update_0_sm103_0151_84;
  return 0;
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_647_sm89_0121_19_select(demosaic_cache& demosaic, int root, int demosaic_ld6, int demosaic_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_647_sm89_0121_19 read pattern: { load_to_demosaic_to_gp_647_sm89_0121[root = 0, demosaic_ld6, demosaic_ld5] -> demosaic[demosaic_ld5, demosaic_ld6] : 0 <= demosaic_ld6 <= 1079 and 0 <= demosaic_ld5 <= 1079 }
  // Read schedule : { load_to_demosaic_to_gp_647_sm89_0121[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_update_0_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_demosaic_update_0_sm103_0151_84 = demosaic.demosaic_demosaic_update_0_sm103_0151_84_to_demosaic_load_to_demosaic_to_gp_647_sm89_0121_19.peek(/* one reader or all rams */ 0);
  return value_demosaic_demosaic_update_0_sm103_0151_84;
  return 0;
}

// # of bundles = 3
// demosaic_update_0_sm103_0151_write
//	demosaic_demosaic_update_0_sm103_0151_84
inline void demosaic_demosaic_update_0_sm103_0151_write_bundle_write(hw_uint<16>& demosaic_update_0_sm103_0151_write, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_sm103_0151_84_res = demosaic_update_0_sm103_0151_write.extract<0, 15>();
	demosaic_demosaic_update_0_sm103_0151_84_write(demosaic_demosaic_update_0_sm103_0151_84_res, demosaic, root, demosaic_0, demosaic_1, dynamic_address);
}

// load_to_demosaic_to_gp_303_sm88_0123_read
//	demosaic_load_to_demosaic_to_gp_303_sm88_0123_21
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm88_0123_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_303_sm88_0123_21

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm88_0123_21_res = demosaic_load_to_demosaic_to_gp_303_sm88_0123_21_select(demosaic, root, demosaic_ld2, demosaic_ld1, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_303_sm88_0123_21_res);
	return result;
}

// load_to_demosaic_to_gp_647_sm89_0121_read
//	demosaic_load_to_demosaic_to_gp_647_sm89_0121_19
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_647_sm89_0121_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld6, int demosaic_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_647_sm89_0121_19

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_647_sm89_0121_19_res = demosaic_load_to_demosaic_to_gp_647_sm89_0121_19_select(demosaic, root, demosaic_ld6, demosaic_ld5, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_647_sm89_0121_19_res);
	return result;
}

struct demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
	// Capacity: 2165
	// # of read delays: 3
  // 0, 1082, 2164
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1081> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1081> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1081() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1082() {
		return f2;
	}

	inline hw_uint<16> peek_2163() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_2164() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1081
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_FIFO_buf44_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0_sm104_0153[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1079 and 0 <= demosaic_bxb_1 <= 1081 }
    // { demosaic_bxb_update_0_sm104_0153[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, 1 + demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1079 and 0 <= demosaic_bxb_1 <= 1081 }
    // { demosaic_bxb_update_0_sm104_0153[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, 2 + demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1079 and 0 <= demosaic_bxb_1 <= 1081 }
  // # of banks: 1
  demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3_cache demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3;
};



inline void demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_write(hw_uint<16>& demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44, demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_to_gp_30_ld46, int demosaic_to_gp_30_ld45, int dynamic_address) {
  demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3.push(demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44);
}

inline hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96_select(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96 read pattern: { demosaic_bxb_update_0_sm104_0153[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1079 and 0 <= demosaic_bxb_1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0_sm104_0153[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_demosaic_FIFO_buf4447_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 15] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44 = demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3.peek_2164();
  return value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97_select(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97 read pattern: { demosaic_bxb_update_0_sm104_0153[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, 1 + demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1079 and 0 <= demosaic_bxb_1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0_sm104_0153[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_demosaic_FIFO_buf4447_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 15] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44 = demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3.peek_1082();
  return value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98_select(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98 read pattern: { demosaic_bxb_update_0_sm104_0153[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, 2 + demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1079 and 0 <= demosaic_bxb_1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0_sm104_0153[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_demosaic_FIFO_buf4447_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 15] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44 = demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_merged_banks_3.peek_0();
  return value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm104_0153_read
//	demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96
//	demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97
//	demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98
inline hw_uint<48> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_read_bundle_read(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96
    // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97
    // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98

	hw_uint<48> result;
	hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96_res = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96_select(demosaic_FIFO_buf44, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_96_res);
	hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97_res = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97_select(demosaic_FIFO_buf44, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_97_res);
	hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98_res = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98_select(demosaic_FIFO_buf44, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_98_res);
	return result;
}

// load_to_demosaic_FIFO_buf4447_sm110_0165_write
//	demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44
inline void demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf4447_sm110_0165_write, demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_to_gp_30_ld46, int demosaic_to_gp_30_ld45, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_res = load_to_demosaic_FIFO_buf4447_sm110_0165_write.extract<0, 15>();
	demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_write(demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_44_res, demosaic_FIFO_buf44, root, demosaic_to_gp_30_ld46, demosaic_to_gp_30_ld45, dynamic_address);
}

struct demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_FIFO_buf48_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm108_0161[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf48[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // # of banks: 1
  demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87_cache demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87;
};



inline void demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_write(hw_uint<16>& demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42, demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_to_gp_64_ld50, int demosaic_to_gp_64_ld49, int dynamic_address) {
  demosaic_FIFO_buf48.demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87.push(demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42);
}

inline hw_uint<16> demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87_select(demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87 read pattern: { demosaic_diff_update_0_sm108_0161[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf48[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0_sm108_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_FIFO_buf4851_sm119_0183[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42 = demosaic_FIFO_buf48.demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87.peek(/* one reader or all rams */ 0);
  return value_demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm108_0161_read
//	demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87
inline hw_uint<16> demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_read_bundle_read(demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87

	hw_uint<16> result;
	hw_uint<16> demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87_res = demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87_select(demosaic_FIFO_buf48, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_87_res);
	return result;
}

// load_to_demosaic_FIFO_buf4851_sm119_0183_write
//	demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42
inline void demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf4851_sm119_0183_write, demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_to_gp_64_ld50, int demosaic_to_gp_64_ld49, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_res = load_to_demosaic_FIFO_buf4851_sm119_0183_write.extract<0, 15>();
	demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_write(demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_42_res, demosaic_FIFO_buf48, root, demosaic_to_gp_64_ld50, demosaic_to_gp_64_ld49, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_sm105_0155_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39_cache {
	// RAM Box: {[0, 1081], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bx_cache {
  // Reader addrs...
    // { load_to_demosaic_bx_to_gp_5811_sm116_0177[root = 0, demosaic_bx_ld10, demosaic_bx_ld9] -> demosaic_bx[demosaic_bx_ld9, demosaic_bx_ld10] : 0 <= demosaic_bx_ld10 <= 1079 and 0 <= demosaic_bx_ld9 <= 1081 }
  // # of banks: 1
  demosaic_bx_demosaic_bx_update_0_sm105_0155_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39_cache demosaic_bx_demosaic_bx_update_0_sm105_0155_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39;
};



inline void demosaic_bx_demosaic_bx_update_0_sm105_0155_99_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_sm105_0155_99, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm105_0155_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39.push(demosaic_bx_demosaic_bx_update_0_sm105_0155_99);
}

inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld10, int demosaic_bx_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39 read pattern: { load_to_demosaic_bx_to_gp_5811_sm116_0177[root = 0, demosaic_bx_ld10, demosaic_bx_ld9] -> demosaic_bx[demosaic_bx_ld9, demosaic_bx_ld10] : 0 <= demosaic_bx_ld10 <= 1079 and 0 <= demosaic_bx_ld9 <= 1081 }
  // Read schedule : { load_to_demosaic_bx_to_gp_5811_sm116_0177[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 21] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { demosaic_bx_update_0_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 20] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm105_0155_99 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm105_0155_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39.peek(/* one reader or all rams */ 0);
  return value_demosaic_bx_demosaic_bx_update_0_sm105_0155_99;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm105_0155_write
//	demosaic_bx_demosaic_bx_update_0_sm105_0155_99
inline void demosaic_bx_demosaic_bx_update_0_sm105_0155_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_sm105_0155_write, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_sm105_0155_99_res = demosaic_bx_update_0_sm105_0155_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_sm105_0155_99_write(demosaic_bx_demosaic_bx_update_0_sm105_0155_99_res, demosaic_bx, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
}

// load_to_demosaic_bx_to_gp_5811_sm116_0177_read
//	demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39
inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_read_bundle_read(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld10, int demosaic_bx_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39

	hw_uint<16> result;
	hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39_res = demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39_select(demosaic_bx, root, demosaic_bx_ld10, demosaic_bx_ld9, dynamic_address);
	set_at<0, 16>(result, demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_39_res);
	return result;
}

struct demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 3
	// # of read delays: 2
  // 0, 2
	fifo<hw_uint<16>, 3> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91_cache {
	// RAM Box: {[1, 1080], [0, 1079]}
	// Capacity: 2
	// # of read delays: 2
  // 0, 1
	fifo<hw_uint<16>, 2> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(1 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92_cache {
	// RAM Box: {[2, 1081], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bx_FIFO_buf52_cache {
  // Reader addrs...
    // { demosaic_byb_update_0_sm106_0157[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
    // { demosaic_byb_update_0_sm106_0157[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[1 + demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
    // { demosaic_byb_update_0_sm106_0157[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[2 + demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // # of banks: 3
  demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90_cache demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90;
  demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91_cache demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91;
  demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92_cache demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92;
};



inline void demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_write(hw_uint<16>& demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40, demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_bx_to_gp_58_ld54, int demosaic_bx_to_gp_58_ld53, int dynamic_address) {
  demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90.push(demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40);
  demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91.push(demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40);
  demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92.push(demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40);
}

inline hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90_select(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90 read pattern: { demosaic_byb_update_0_sm106_0157[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0_sm106_0157[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 22] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40 = demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90.peek(/* one reader or all rams */ 2);
  return value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91_select(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91 read pattern: { demosaic_byb_update_0_sm106_0157[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[1 + demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0_sm106_0157[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 22] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40 = demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91.peek(/* one reader or all rams */ 1);
  return value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92_select(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92 read pattern: { demosaic_byb_update_0_sm106_0157[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[2 + demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0_sm106_0157[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 22] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40 = demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_to_demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92.peek(/* one reader or all rams */ 0);
  return value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm106_0157_read
//	demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90
//	demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91
//	demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92
inline hw_uint<48> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_read_bundle_read(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90
    // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91
    // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92

	hw_uint<48> result;
	hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90_res = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90_select(demosaic_bx_FIFO_buf52, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_90_res);
	hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91_res = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91_select(demosaic_bx_FIFO_buf52, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_91_res);
	hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92_res = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92_select(demosaic_bx_FIFO_buf52, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_92_res);
	return result;
}

// load_to_demosaic_bx_FIFO_buf5255_sm118_0181_write
//	demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40
inline void demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_write_bundle_write(hw_uint<16>& load_to_demosaic_bx_FIFO_buf5255_sm118_0181_write, demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_bx_to_gp_58_ld54, int demosaic_bx_to_gp_58_ld53, int dynamic_address) {
	hw_uint<16> demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_res = load_to_demosaic_bx_FIFO_buf5255_sm118_0181_write.extract<0, 15>();
	demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_write(demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_40_res, demosaic_bx_FIFO_buf52, root, demosaic_bx_to_gp_58_ld54, demosaic_bx_to_gp_58_ld53, dynamic_address);
}

struct demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35_cache {
	// RAM Box: {[0, 1081], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bxb_cache {
  // Reader addrs...
    // { load_to_demosaic_bxb_to_gp_21215_sm112_0169[root = 0, demosaic_bxb_ld14, demosaic_bxb_ld13] -> demosaic_bxb[demosaic_bxb_ld13, demosaic_bxb_ld14] : 0 <= demosaic_bxb_ld14 <= 1079 and 0 <= demosaic_bxb_ld13 <= 1081 }
  // # of banks: 1
  demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35_cache demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35;
};



inline void demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35.push(demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95);
}

inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35_select(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld14, int demosaic_bxb_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35 read pattern: { load_to_demosaic_bxb_to_gp_21215_sm112_0169[root = 0, demosaic_bxb_ld14, demosaic_bxb_ld13] -> demosaic_bxb[demosaic_bxb_ld13, demosaic_bxb_ld14] : 0 <= demosaic_bxb_ld14 <= 1079 and 0 <= demosaic_bxb_ld13 <= 1081 }
  // Read schedule : { load_to_demosaic_bxb_to_gp_21215_sm112_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0_sm104_0153[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm104_0153_write
//	demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95
inline void demosaic_bxb_demosaic_bxb_update_0_sm104_0153_write_bundle_write(hw_uint<16>& demosaic_bxb_update_0_sm104_0153_write, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_res = demosaic_bxb_update_0_sm104_0153_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_write(demosaic_bxb_demosaic_bxb_update_0_sm104_0153_95_res, demosaic_bxb, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
}

// load_to_demosaic_bxb_to_gp_21215_sm112_0169_read
//	demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35
inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld14, int demosaic_bxb_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35_res = demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35_select(demosaic_bxb, root, demosaic_bxb_ld14, demosaic_bxb_ld13, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_35_res);
	return result;
}

struct demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100_cache {
	// RAM Box: {[0, 1081], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_bxb_FIFO_buf56_cache {
  // Reader addrs...
    // { demosaic_bx_update_0_sm105_0155[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf56[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1079 and 0 <= demosaic_bx_1 <= 1081 }
  // # of banks: 1
  demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100_cache demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100;
};



inline void demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_write(hw_uint<16>& demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36, demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bxb_to_gp_212_ld58, int demosaic_bxb_to_gp_212_ld57, int dynamic_address) {
  demosaic_bxb_FIFO_buf56.demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100.push(demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36);
}

inline hw_uint<16> demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100_select(demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100 read pattern: { demosaic_bx_update_0_sm105_0155[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf56[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1079 and 0 <= demosaic_bx_1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 20] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_demosaic_bxb_FIFO_buf5659_sm114_0173[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 19] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
  auto value_demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36 = demosaic_bxb_FIFO_buf56.demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm105_0155_read
//	demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100
inline hw_uint<16> demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_read_bundle_read(demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100_res = demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100_select(demosaic_bxb_FIFO_buf56, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_100_res);
	return result;
}

// load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_write
//	demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36
inline void demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_write_bundle_write(hw_uint<16>& load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_write, demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bxb_to_gp_212_ld58, int demosaic_bxb_to_gp_212_ld57, int dynamic_address) {
	hw_uint<16> demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_res = load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_write.extract<0, 15>();
	demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_write(demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_36_res, demosaic_bxb_FIFO_buf56, root, demosaic_bxb_to_gp_212_ld58, demosaic_bxb_to_gp_212_ld57, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_sm107_0159_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_by_cache {
  // Reader addrs...
    // { load_to_demosaic_by_to_gp_61619_sm90_0125[root = 0, demosaic_by_ld18, demosaic_by_ld17] -> demosaic_by[demosaic_by_ld17, demosaic_by_ld18] : 0 <= demosaic_by_ld18 <= 1079 and 0 <= demosaic_by_ld17 <= 1079 }
  // # of banks: 1
  demosaic_by_demosaic_by_update_0_sm107_0159_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31_cache demosaic_by_demosaic_by_update_0_sm107_0159_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31;
};



inline void demosaic_by_demosaic_by_update_0_sm107_0159_93_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_sm107_0159_93, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_sm107_0159_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31.push(demosaic_by_demosaic_by_update_0_sm107_0159_93);
}

inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31_select(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld18, int demosaic_by_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31 read pattern: { load_to_demosaic_by_to_gp_61619_sm90_0125[root = 0, demosaic_by_ld18, demosaic_by_ld17] -> demosaic_by[demosaic_by_ld17, demosaic_by_ld18] : 0 <= demosaic_by_ld18 <= 1079 and 0 <= demosaic_by_ld17 <= 1079 }
  // Read schedule : { load_to_demosaic_by_to_gp_61619_sm90_0125[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_by_update_0_sm107_0159[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_sm107_0159_93 = demosaic_by.demosaic_by_demosaic_by_update_0_sm107_0159_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_sm107_0159_93;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm107_0159_write
//	demosaic_by_demosaic_by_update_0_sm107_0159_93
inline void demosaic_by_demosaic_by_update_0_sm107_0159_write_bundle_write(hw_uint<16>& demosaic_by_update_0_sm107_0159_write, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_sm107_0159_93_res = demosaic_by_update_0_sm107_0159_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_sm107_0159_93_write(demosaic_by_demosaic_by_update_0_sm107_0159_93_res, demosaic_by, root, demosaic_by_0, demosaic_by_1, dynamic_address);
}

// load_to_demosaic_by_to_gp_61619_sm90_0125_read
//	demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31
inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_read_bundle_read(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld18, int demosaic_by_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31

	hw_uint<16> result;
	hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31_res = demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31_select(demosaic_by, root, demosaic_by_ld18, demosaic_by_ld17, dynamic_address);
	set_at<0, 16>(result, demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_31_res);
	return result;
}

struct demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_by_FIFO_buf60_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm108_0161[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf60[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // # of banks: 1
  demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88_cache demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88;
};



inline void demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_write(hw_uint<16>& demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_by_to_gp_616_ld62, int demosaic_by_to_gp_616_ld61, int dynamic_address) {
  demosaic_by_FIFO_buf60.demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88.push(demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32);
}

inline hw_uint<16> demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88_select(demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88 read pattern: { demosaic_diff_update_0_sm108_0161[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf60[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0_sm108_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_by_FIFO_buf6063_sm111_0167[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32 = demosaic_by_FIFO_buf60.demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm108_0161_read
//	demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88
inline hw_uint<16> demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_read_bundle_read(demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88

	hw_uint<16> result;
	hw_uint<16> demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88_res = demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88_select(demosaic_by_FIFO_buf60, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_88_res);
	return result;
}

// load_to_demosaic_by_FIFO_buf6063_sm111_0167_write
//	demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32
inline void demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_write_bundle_write(hw_uint<16>& load_to_demosaic_by_FIFO_buf6063_sm111_0167_write, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_by_to_gp_616_ld62, int demosaic_by_to_gp_616_ld61, int dynamic_address) {
	hw_uint<16> demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_res = load_to_demosaic_by_FIFO_buf6063_sm111_0167_write.extract<0, 15>();
	demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_write(demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_32_res, demosaic_by_FIFO_buf60, root, demosaic_by_to_gp_616_ld62, demosaic_by_to_gp_616_ld61, dynamic_address);
}

struct demosaic_byb_demosaic_byb_update_0_sm106_0157_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_byb_cache {
  // Reader addrs...
    // { load_to_demosaic_byb_to_gp_42023_sm113_0171[root = 0, demosaic_byb_ld22, demosaic_byb_ld21] -> demosaic_byb[demosaic_byb_ld21, demosaic_byb_ld22] : 0 <= demosaic_byb_ld22 <= 1079 and 0 <= demosaic_byb_ld21 <= 1079 }
  // # of banks: 1
  demosaic_byb_demosaic_byb_update_0_sm106_0157_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27_cache demosaic_byb_demosaic_byb_update_0_sm106_0157_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27;
};



inline void demosaic_byb_demosaic_byb_update_0_sm106_0157_89_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_sm106_0157_89, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm106_0157_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27.push(demosaic_byb_demosaic_byb_update_0_sm106_0157_89);
}

inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27_select(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld22, int demosaic_byb_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27 read pattern: { load_to_demosaic_byb_to_gp_42023_sm113_0171[root = 0, demosaic_byb_ld22, demosaic_byb_ld21] -> demosaic_byb[demosaic_byb_ld21, demosaic_byb_ld22] : 0 <= demosaic_byb_ld22 <= 1079 and 0 <= demosaic_byb_ld21 <= 1079 }
  // Read schedule : { load_to_demosaic_byb_to_gp_42023_sm113_0171[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_byb_update_0_sm106_0157[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_sm106_0157_89 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm106_0157_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_sm106_0157_89;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm106_0157_write
//	demosaic_byb_demosaic_byb_update_0_sm106_0157_89
inline void demosaic_byb_demosaic_byb_update_0_sm106_0157_write_bundle_write(hw_uint<16>& demosaic_byb_update_0_sm106_0157_write, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_sm106_0157_89_res = demosaic_byb_update_0_sm106_0157_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_sm106_0157_89_write(demosaic_byb_demosaic_byb_update_0_sm106_0157_89_res, demosaic_byb, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
}

// load_to_demosaic_byb_to_gp_42023_sm113_0171_read
//	demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27
inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_read_bundle_read(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld22, int demosaic_byb_ld21, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27_res = demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27_select(demosaic_byb, root, demosaic_byb_ld22, demosaic_byb_ld21, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_27_res);
	return result;
}

struct demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_byb_FIFO_buf64_cache {
  // Reader addrs...
    // { demosaic_by_update_0_sm107_0159[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf64[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1079 }
  // # of banks: 1
  demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94_cache demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94;
};



inline void demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_write(hw_uint<16>& demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28, demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_byb_to_gp_420_ld66, int demosaic_byb_to_gp_420_ld65, int dynamic_address) {
  demosaic_byb_FIFO_buf64.demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94.push(demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28);
}

inline hw_uint<16> demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94_select(demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94 read pattern: { demosaic_by_update_0_sm107_0159[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf64[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1079 }
  // Read schedule : { demosaic_by_update_0_sm107_0159[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_byb_FIFO_buf6467_sm95_0135[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28 = demosaic_byb_FIFO_buf64.demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm107_0159_read
//	demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94
inline hw_uint<16> demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_read_bundle_read(demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94_res = demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94_select(demosaic_byb_FIFO_buf64, root, demosaic_by_0, demosaic_by_1, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_94_res);
	return result;
}

// load_to_demosaic_byb_FIFO_buf6467_sm95_0135_write
//	demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28
inline void demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_write_bundle_write(hw_uint<16>& load_to_demosaic_byb_FIFO_buf6467_sm95_0135_write, demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_byb_to_gp_420_ld66, int demosaic_byb_to_gp_420_ld65, int dynamic_address) {
	hw_uint<16> demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_res = load_to_demosaic_byb_FIFO_buf6467_sm95_0135_write.extract<0, 15>();
	demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_write(demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_28_res, demosaic_byb_FIFO_buf64, root, demosaic_byb_to_gp_420_ld66, demosaic_byb_to_gp_420_ld65, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_sm108_0161_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_diff_cache {
  // Reader addrs...
    // { load_to_demosaic_diff_to_gp_02427_sm117_0179[root = 0, demosaic_diff_ld26, demosaic_diff_ld25] -> demosaic_diff[demosaic_diff_ld25, demosaic_diff_ld26] : 0 <= demosaic_diff_ld26 <= 1079 and 0 <= demosaic_diff_ld25 <= 1079 }
  // # of banks: 1
  demosaic_diff_demosaic_diff_update_0_sm108_0161_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23_cache demosaic_diff_demosaic_diff_update_0_sm108_0161_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23;
};



inline void demosaic_diff_demosaic_diff_update_0_sm108_0161_86_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_sm108_0161_86, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm108_0161_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23.push(demosaic_diff_demosaic_diff_update_0_sm108_0161_86);
}

inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23_select(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld26, int demosaic_diff_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23 read pattern: { load_to_demosaic_diff_to_gp_02427_sm117_0179[root = 0, demosaic_diff_ld26, demosaic_diff_ld25] -> demosaic_diff[demosaic_diff_ld25, demosaic_diff_ld26] : 0 <= demosaic_diff_ld26 <= 1079 and 0 <= demosaic_diff_ld25 <= 1079 }
  // Read schedule : { load_to_demosaic_diff_to_gp_02427_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_diff_update_0_sm108_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_sm108_0161_86 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm108_0161_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_sm108_0161_86;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm108_0161_write
//	demosaic_diff_demosaic_diff_update_0_sm108_0161_86
inline void demosaic_diff_demosaic_diff_update_0_sm108_0161_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_sm108_0161_write, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_sm108_0161_86_res = demosaic_diff_update_0_sm108_0161_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_sm108_0161_86_write(demosaic_diff_demosaic_diff_update_0_sm108_0161_86_res, demosaic_diff, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
}

// load_to_demosaic_diff_to_gp_02427_sm117_0179_read
//	demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23
inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_read_bundle_read(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld26, int demosaic_diff_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23_res = demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23_select(demosaic_diff, root, demosaic_diff_ld26, demosaic_diff_ld25, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_23_res);
	return result;
}

struct demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_diff_FIFO_buf68_cache {
  // Reader addrs...
    // { cp_1_update_0_sm109_0163[root = 0, cp_1_0, cp_1_1] -> demosaic_diff_FIFO_buf68[cp_1_1, cp_1_0] : 0 <= cp_1_0 <= 1079 and 0 <= cp_1_1 <= 1079 }
  // # of banks: 1
  demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102_cache demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102;
};



inline void demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_write(hw_uint<16>& demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24, demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int demosaic_diff_to_gp_024_ld70, int demosaic_diff_to_gp_024_ld69, int dynamic_address) {
  demosaic_diff_FIFO_buf68.demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102.push(demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24);
}

inline hw_uint<16> demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102_select(demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int cp_1_0, int cp_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102 read pattern: { cp_1_update_0_sm109_0163[root = 0, cp_1_0, cp_1_1] -> demosaic_diff_FIFO_buf68[cp_1_1, cp_1_0] : 0 <= cp_1_0 <= 1079 and 0 <= cp_1_1 <= 1079 }
  // Read schedule : { cp_1_update_0_sm109_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_diff_FIFO_buf6871_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24 = demosaic_diff_FIFO_buf68.demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24;
  return 0;
}

// # of bundles = 2
// cp_1_update_0_sm109_0163_read
//	demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102
inline hw_uint<16> demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_read_bundle_read(demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int cp_1_0, int cp_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102_res = demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102_select(demosaic_diff_FIFO_buf68, root, cp_1_0, cp_1_1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_102_res);
	return result;
}

// load_to_demosaic_diff_FIFO_buf6871_sm115_0175_write
//	demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24
inline void demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_write_bundle_write(hw_uint<16>& load_to_demosaic_diff_FIFO_buf6871_sm115_0175_write, demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int demosaic_diff_to_gp_024_ld70, int demosaic_diff_to_gp_024_ld69, int dynamic_address) {
	hw_uint<16> demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_res = load_to_demosaic_diff_FIFO_buf6871_sm115_0175_write.extract<0, 15>();
	demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_write(demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_24_res, demosaic_diff_FIFO_buf68, root, demosaic_diff_to_gp_024_ld70, demosaic_diff_to_gp_024_ld69, dynamic_address);
}

struct demosaicb_demosaicb_update_0_sm102_0149_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaicb_cache {
  // Reader addrs...
    // { load_to_demosaicb_to_gp_12831_sm91_0127[root = 0, demosaicb_ld30, demosaicb_ld29] -> demosaicb[demosaicb_ld29, demosaicb_ld30] : 0 <= demosaicb_ld30 <= 1081 and 0 <= demosaicb_ld29 <= 1081 }
  // # of banks: 1
  demosaicb_demosaicb_update_0_sm102_0149_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15_cache demosaicb_demosaicb_update_0_sm102_0149_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15;
};



inline void demosaicb_demosaicb_update_0_sm102_0149_74_write(hw_uint<16>& demosaicb_demosaicb_update_0_sm102_0149_74, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_sm102_0149_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15.push(demosaicb_demosaicb_update_0_sm102_0149_74);
}

inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15_select(demosaicb_cache& demosaicb, int root, int demosaicb_ld30, int demosaicb_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15 read pattern: { load_to_demosaicb_to_gp_12831_sm91_0127[root = 0, demosaicb_ld30, demosaicb_ld29] -> demosaicb[demosaicb_ld29, demosaicb_ld30] : 0 <= demosaicb_ld30 <= 1081 and 0 <= demosaicb_ld29 <= 1081 }
  // Read schedule : { load_to_demosaicb_to_gp_12831_sm91_0127[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_sm102_0149_74 = demosaicb.demosaicb_demosaicb_update_0_sm102_0149_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_sm102_0149_74;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm102_0149_write
//	demosaicb_demosaicb_update_0_sm102_0149_74
inline void demosaicb_demosaicb_update_0_sm102_0149_write_bundle_write(hw_uint<16>& demosaicb_update_0_sm102_0149_write, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_sm102_0149_74_res = demosaicb_update_0_sm102_0149_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_sm102_0149_74_write(demosaicb_demosaicb_update_0_sm102_0149_74_res, demosaicb, root, demosaicb_0, demosaicb_1, dynamic_address);
}

// load_to_demosaicb_to_gp_12831_sm91_0127_read
//	demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15
inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_read_bundle_read(demosaicb_cache& demosaicb, int root, int demosaicb_ld30, int demosaicb_ld29, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15

	hw_uint<16> result;
	hw_uint<16> demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15_res = demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15_select(demosaicb, root, demosaicb_ld30, demosaicb_ld29, dynamic_address);
	set_at<0, 16>(result, demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_15_res);
	return result;
}

struct demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85_cache {
	// RAM Box: {[0, 1081], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaicb_FIFO_buf72_cache {
  // Reader addrs...
    // { demosaic_update_0_sm103_0151[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf72[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1081 }
  // # of banks: 1
  demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85_cache demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85;
};



inline void demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_write(hw_uint<16>& demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16, demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaicb_to_gp_128_ld74, int demosaicb_to_gp_128_ld73, int dynamic_address) {
  demosaicb_FIFO_buf72.demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85.push(demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16);
}

inline hw_uint<16> demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85_select(demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85 read pattern: { demosaic_update_0_sm103_0151[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf72[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1081 }
  // Read schedule : { demosaic_update_0_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_demosaicb_FIFO_buf7275_sm120_0185[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16 = demosaicb_FIFO_buf72.demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85.peek(/* one reader or all rams */ 0);
  return value_demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_sm103_0151_read
//	demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85
inline hw_uint<16> demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_read_bundle_read(demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85

	hw_uint<16> result;
	hw_uint<16> demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85_res = demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85_select(demosaicb_FIFO_buf72, root, demosaic_0, demosaic_1, dynamic_address);
	set_at<0, 16>(result, demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_85_res);
	return result;
}

// load_to_demosaicb_FIFO_buf7275_sm120_0185_write
//	demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16
inline void demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_write_bundle_write(hw_uint<16>& load_to_demosaicb_FIFO_buf7275_sm120_0185_write, demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaicb_to_gp_128_ld74, int demosaicb_to_gp_128_ld73, int dynamic_address) {
	hw_uint<16> demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_res = load_to_demosaicb_FIFO_buf7275_sm120_0185_write.extract<0, 15>();
	demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_write(demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_16_res, demosaicb_FIFO_buf72, root, demosaicb_to_gp_128_ld74, demosaicb_to_gp_128_ld73, dynamic_address);
}

struct denoise_denoise_update_0_sm101_0147_72_to_denoise_load_to_denoise_to_gp_73235_sm92_0129_11_cache {
	// RAM Box: {[0, 1083], [0, 1083]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct denoise_cache {
  // Reader addrs...
    // { load_to_denoise_to_gp_73235_sm92_0129[root = 0, denoise_ld34, denoise_ld33] -> denoise[denoise_ld33, denoise_ld34] : 0 <= denoise_ld34 <= 1083 and 0 <= denoise_ld33 <= 1083 }
  // # of banks: 1
  denoise_denoise_update_0_sm101_0147_72_to_denoise_load_to_denoise_to_gp_73235_sm92_0129_11_cache denoise_denoise_update_0_sm101_0147_72_to_denoise_load_to_denoise_to_gp_73235_sm92_0129_11;
};



inline void denoise_denoise_update_0_sm101_0147_72_write(hw_uint<16>& denoise_denoise_update_0_sm101_0147_72, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
  denoise.denoise_denoise_update_0_sm101_0147_72_to_denoise_load_to_denoise_to_gp_73235_sm92_0129_11.push(denoise_denoise_update_0_sm101_0147_72);
}

inline hw_uint<16> denoise_load_to_denoise_to_gp_73235_sm92_0129_11_select(denoise_cache& denoise, int root, int denoise_ld34, int denoise_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_load_to_denoise_to_gp_73235_sm92_0129_11 read pattern: { load_to_denoise_to_gp_73235_sm92_0129[root = 0, denoise_ld34, denoise_ld33] -> denoise[denoise_ld33, denoise_ld34] : 0 <= denoise_ld34 <= 1083 and 0 <= denoise_ld33 <= 1083 }
  // Read schedule : { load_to_denoise_to_gp_73235_sm92_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { denoise_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_denoise_update_0_sm101_0147_72 = denoise.denoise_denoise_update_0_sm101_0147_72_to_denoise_load_to_denoise_to_gp_73235_sm92_0129_11.peek(/* one reader or all rams */ 0);
  return value_denoise_denoise_update_0_sm101_0147_72;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm101_0147_write
//	denoise_denoise_update_0_sm101_0147_72
inline void denoise_denoise_update_0_sm101_0147_write_bundle_write(hw_uint<16>& denoise_update_0_sm101_0147_write, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_sm101_0147_72_res = denoise_update_0_sm101_0147_write.extract<0, 15>();
	denoise_denoise_update_0_sm101_0147_72_write(denoise_denoise_update_0_sm101_0147_72_res, denoise, root, denoise_0, denoise_1, dynamic_address);
}

// load_to_denoise_to_gp_73235_sm92_0129_read
//	denoise_load_to_denoise_to_gp_73235_sm92_0129_11
inline hw_uint<16> denoise_load_to_denoise_to_gp_73235_sm92_0129_read_bundle_read(denoise_cache& denoise, int root, int denoise_ld34, int denoise_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise_load_to_denoise_to_gp_73235_sm92_0129_11

	hw_uint<16> result;
	hw_uint<16> denoise_load_to_denoise_to_gp_73235_sm92_0129_11_res = denoise_load_to_denoise_to_gp_73235_sm92_0129_11_select(denoise, root, denoise_ld34, denoise_ld33, dynamic_address);
	set_at<0, 16>(result, denoise_load_to_denoise_to_gp_73235_sm92_0129_11_res);
	return result;
}

struct denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9_cache {
	// RAM Box: {[0, 1083], [0, 1083]}
	// Capacity: 2171
	// # of read delays: 9
  // 0, 1, 2, 1084, 1085, 1086, 2168, 2169, 2170
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1081> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1081> f11;
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

	inline hw_uint<16> peek_1083() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1084() {
		return f6;
	}

	inline hw_uint<16> peek_1085() {
		return f8;
	}

	inline hw_uint<16> peek_1086() {
		return f10;
	}

	inline hw_uint<16> peek_2167() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_2168() {
		return f12;
	}

	inline hw_uint<16> peek_2169() {
		return f14;
	}

	inline hw_uint<16> peek_2170() {
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
    // cap: 1 reading from capacity: 1081
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1081
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1081 reading from capacity: 1
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

struct denoise_FIFO_buf76_cache {
  // Reader addrs...
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // # of banks: 1
  denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9_cache denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9;
};



inline void denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_write(hw_uint<16>& denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12, denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int denoise_to_gp_732_ld78, int denoise_to_gp_732_ld77, int dynamic_address) {
  denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.push(denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12);
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_2170();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_2169();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_2168();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_1086();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_1085();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_1084();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_2();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_1();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83 read pattern: { demosaicb_update_0_sm102_0149[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_merged_banks_9.peek_0();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm102_0149_read
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82
//	denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83
inline hw_uint<144> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_read_bundle_read(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  // # of ports in bundle: 9
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82
    // denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83

	hw_uint<144> result;
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<0, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_75_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<16, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_76_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<32, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_77_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<48, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_78_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<64, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_79_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<80, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_80_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<96, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_81_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<112, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_82_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83_res = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<128, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_83_res);
	return result;
}

// load_to_denoise_FIFO_buf7679_sm96_0137_write
//	denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12
inline void denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_write_bundle_write(hw_uint<16>& load_to_denoise_FIFO_buf7679_sm96_0137_write, denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int denoise_to_gp_732_ld78, int denoise_to_gp_732_ld77, int dynamic_address) {
	hw_uint<16> denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_res = load_to_denoise_FIFO_buf7679_sm96_0137_write.extract<0, 15>();
	denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_write(denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_12_res, denoise_FIFO_buf76, root, denoise_to_gp_732_ld78, denoise_to_gp_732_ld77, dynamic_address);
}

struct denoiseb_denoiseb_update_0_sm100_0145_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7_cache {
	// RAM Box: {[0, 1083], [0, 1083]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct denoiseb_cache {
  // Reader addrs...
    // { load_to_denoiseb_to_gp_83639_sm93_0131[root = 0, denoiseb_ld38, denoiseb_ld37] -> denoiseb[denoiseb_ld37, denoiseb_ld38] : 0 <= denoiseb_ld38 <= 1083 and 0 <= denoiseb_ld37 <= 1083 }
  // # of banks: 1
  denoiseb_denoiseb_update_0_sm100_0145_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7_cache denoiseb_denoiseb_update_0_sm100_0145_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7;
};



inline void denoiseb_denoiseb_update_0_sm100_0145_46_write(hw_uint<16>& denoiseb_denoiseb_update_0_sm100_0145_46, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_sm100_0145_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7.push(denoiseb_denoiseb_update_0_sm100_0145_46);
}

inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7_select(denoiseb_cache& denoiseb, int root, int denoiseb_ld38, int denoiseb_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7 read pattern: { load_to_denoiseb_to_gp_83639_sm93_0131[root = 0, denoiseb_ld38, denoiseb_ld37] -> denoiseb[denoiseb_ld37, denoiseb_ld38] : 0 <= denoiseb_ld38 <= 1083 and 0 <= denoiseb_ld37 <= 1083 }
  // Read schedule : { load_to_denoiseb_to_gp_83639_sm93_0131[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoiseb_denoiseb_update_0_sm100_0145_46 = denoiseb.denoiseb_denoiseb_update_0_sm100_0145_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_sm100_0145_46;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm100_0145_write
//	denoiseb_denoiseb_update_0_sm100_0145_46
inline void denoiseb_denoiseb_update_0_sm100_0145_write_bundle_write(hw_uint<16>& denoiseb_update_0_sm100_0145_write, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_sm100_0145_46_res = denoiseb_update_0_sm100_0145_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_sm100_0145_46_write(denoiseb_denoiseb_update_0_sm100_0145_46_res, denoiseb, root, denoiseb_0, denoiseb_1, dynamic_address);
}

// load_to_denoiseb_to_gp_83639_sm93_0131_read
//	denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7
inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_read_bundle_read(denoiseb_cache& denoiseb, int root, int denoiseb_ld38, int denoiseb_ld37, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7

	hw_uint<16> result;
	hw_uint<16> denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7_res = denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7_select(denoiseb, root, denoiseb_ld38, denoiseb_ld37, dynamic_address);
	set_at<0, 16>(result, denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_7_res);
	return result;
}

struct denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73_cache {
	// RAM Box: {[0, 1083], [0, 1083]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct denoiseb_FIFO_buf80_cache {
  // Reader addrs...
    // { denoise_update_0_sm101_0147[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf80[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1083 }
  // # of banks: 1
  denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73_cache denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73;
};



inline void denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_write(hw_uint<16>& denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8, denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoiseb_to_gp_836_ld82, int denoiseb_to_gp_836_ld81, int dynamic_address) {
  denoiseb_FIFO_buf80.denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73.push(denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8);
}

inline hw_uint<16> denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73_select(denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoise_0, int denoise_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73 read pattern: { denoise_update_0_sm101_0147[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf80[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1083 }
  // Read schedule : { denoise_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_denoiseb_FIFO_buf8083_sm98_0141[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8 = denoiseb_FIFO_buf80.denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73.peek(/* one reader or all rams */ 0);
  return value_denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm101_0147_read
//	denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73
inline hw_uint<16> denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_read_bundle_read(denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoise_0, int denoise_1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73

	hw_uint<16> result;
	hw_uint<16> denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73_res = denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73_select(denoiseb_FIFO_buf80, root, denoise_0, denoise_1, dynamic_address);
	set_at<0, 16>(result, denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_73_res);
	return result;
}

// load_to_denoiseb_FIFO_buf8083_sm98_0141_write
//	denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8
inline void denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_write_bundle_write(hw_uint<16>& load_to_denoiseb_FIFO_buf8083_sm98_0141_write, denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoiseb_to_gp_836_ld82, int denoiseb_to_gp_836_ld81, int dynamic_address) {
	hw_uint<16> denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_res = load_to_denoiseb_FIFO_buf8083_sm98_0141_write.extract<0, 15>();
	denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_write(denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_8_res, denoiseb_FIFO_buf80, root, denoiseb_to_gp_836_ld82, denoiseb_to_gp_836_ld81, dynamic_address);
}

struct raw_raw_update_0_sm99_0143_0_to_raw_load_to_raw_to_gp_94043_sm94_0133_3_cache {
	// RAM Box: {[0, 1087], [0, 1087]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct raw_cache {
  // Reader addrs...
    // { load_to_raw_to_gp_94043_sm94_0133[root = 0, raw_ld42, raw_ld41] -> raw[raw_ld41, raw_ld42] : 0 <= raw_ld42 <= 1087 and 0 <= raw_ld41 <= 1087 }
  // # of banks: 1
  raw_raw_update_0_sm99_0143_0_to_raw_load_to_raw_to_gp_94043_sm94_0133_3_cache raw_raw_update_0_sm99_0143_0_to_raw_load_to_raw_to_gp_94043_sm94_0133_3;
};



inline void raw_raw_update_0_sm99_0143_0_write(hw_uint<16>& raw_raw_update_0_sm99_0143_0, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
  raw.raw_raw_update_0_sm99_0143_0_to_raw_load_to_raw_to_gp_94043_sm94_0133_3.push(raw_raw_update_0_sm99_0143_0);
}

inline hw_uint<16> raw_load_to_raw_to_gp_94043_sm94_0133_3_select(raw_cache& raw, int root, int raw_ld42, int raw_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_load_to_raw_to_gp_94043_sm94_0133_3 read pattern: { load_to_raw_to_gp_94043_sm94_0133[root = 0, raw_ld42, raw_ld41] -> raw[raw_ld41, raw_ld42] : 0 <= raw_ld42 <= 1087 and 0 <= raw_ld41 <= 1087 }
  // Read schedule : { load_to_raw_to_gp_94043_sm94_0133[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  // Write schedule: { raw_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_raw_update_0_sm99_0143_0 = raw.raw_raw_update_0_sm99_0143_0_to_raw_load_to_raw_to_gp_94043_sm94_0133_3.peek(/* one reader or all rams */ 0);
  return value_raw_raw_update_0_sm99_0143_0;
  return 0;
}

// # of bundles = 2
// load_to_raw_to_gp_94043_sm94_0133_read
//	raw_load_to_raw_to_gp_94043_sm94_0133_3
inline hw_uint<16> raw_load_to_raw_to_gp_94043_sm94_0133_read_bundle_read(raw_cache& raw, int root, int raw_ld42, int raw_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // raw_load_to_raw_to_gp_94043_sm94_0133_3

	hw_uint<16> result;
	hw_uint<16> raw_load_to_raw_to_gp_94043_sm94_0133_3_res = raw_load_to_raw_to_gp_94043_sm94_0133_3_select(raw, root, raw_ld42, raw_ld41, dynamic_address);
	set_at<0, 16>(result, raw_load_to_raw_to_gp_94043_sm94_0133_3_res);
	return result;
}

// raw_update_0_sm99_0143_write
//	raw_raw_update_0_sm99_0143_0
inline void raw_raw_update_0_sm99_0143_write_bundle_write(hw_uint<16>& raw_update_0_sm99_0143_write, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_sm99_0143_0_res = raw_update_0_sm99_0143_write.extract<0, 15>();
	raw_raw_update_0_sm99_0143_0_write(raw_raw_update_0_sm99_0143_0_res, raw, root, raw_0, raw_1, dynamic_address);
}

struct raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25_cache {
	// RAM Box: {[0, 1087], [0, 1087]}
	// Capacity: 4357
	// # of read delays: 25
  // 0, 1, 2, 3, 4, 1088, 1089, 1090, 1091, 1092, 2176, 2177, 2178, 2179, 2180, 3264, 3265, 3266, 3267, 3268, 4352, 4353, 4354, 4355, 4356
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1083> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	fifo<hw_uint<16>, 1083> f19;
	hw_uint<16> f20;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 1083> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	hw_uint<16> f36;
	hw_uint<16> f38;
	fifo<hw_uint<16>, 1083> f39;
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

	inline hw_uint<16> peek_1087() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1088() {
		return f10;
	}

	inline hw_uint<16> peek_1089() {
		return f12;
	}

	inline hw_uint<16> peek_1090() {
		return f14;
	}

	inline hw_uint<16> peek_1091() {
		return f16;
	}

	inline hw_uint<16> peek_1092() {
		return f18;
	}

	inline hw_uint<16> peek_2175() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f19.back();
	}

	inline hw_uint<16> peek_2176() {
		return f20;
	}

	inline hw_uint<16> peek_2177() {
		return f22;
	}

	inline hw_uint<16> peek_2178() {
		return f24;
	}

	inline hw_uint<16> peek_2179() {
		return f26;
	}

	inline hw_uint<16> peek_2180() {
		return f28;
	}

	inline hw_uint<16> peek_3263() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_3264() {
		return f30;
	}

	inline hw_uint<16> peek_3265() {
		return f32;
	}

	inline hw_uint<16> peek_3266() {
		return f34;
	}

	inline hw_uint<16> peek_3267() {
		return f36;
	}

	inline hw_uint<16> peek_3268() {
		return f38;
	}

	inline hw_uint<16> peek_4351() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f39.back();
	}

	inline hw_uint<16> peek_4352() {
		return f40;
	}

	inline hw_uint<16> peek_4353() {
		return f42;
	}

	inline hw_uint<16> peek_4354() {
		return f44;
	}

	inline hw_uint<16> peek_4355() {
		return f46;
	}

	inline hw_uint<16> peek_4356() {
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
    // cap: 1 reading from capacity: 1083
    f40 = f39.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1083 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1083
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1083 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1083
    f20 = f19.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1083 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1083
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1083 reading from capacity: 1
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

struct raw_FIFO_buf84_cache {
  // Reader addrs...
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // # of banks: 1
  raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25_cache raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25;
};



inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_write(hw_uint<16>& raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_940_ld86, int raw_to_gp_940_ld85, int dynamic_address) {
  raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.push(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4);
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_4356();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_4355();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_4354();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_4353();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_4352();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_3268();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_3267();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_3266();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_3265();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_3264();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_2180();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_2179();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_2178();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_2177();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_2176();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_1092();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_1091();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_1090();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_1089();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_1088();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_4();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_3();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_2();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_1();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71 read pattern: { denoiseb_update_0_sm100_0145[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_merged_banks_25.peek_0();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm100_0145_read
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70
//	raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71
inline hw_uint<400> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_read_bundle_read(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  // # of ports in bundle: 25
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70
    // raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71

	hw_uint<400> result;
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<0, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_47_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<16, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_48_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<32, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_49_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<48, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_50_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<64, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_51_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<80, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_52_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<96, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_53_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<112, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_54_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<128, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_55_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<144, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_56_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<160, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_57_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<176, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_58_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<192, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_59_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<208, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_60_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<224, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_61_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<240, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_62_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<256, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_63_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<272, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_64_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<288, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_65_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<304, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_66_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<320, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_67_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<336, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_68_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<352, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_69_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<368, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_70_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71_res = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<384, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm100_0145_71_res);
	return result;
}

// load_to_raw_FIFO_buf8487_sm97_0139_write
//	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4
inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_write_bundle_write(hw_uint<16>& load_to_raw_FIFO_buf8487_sm97_0139_write, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_940_ld86, int raw_to_gp_940_ld85, int dynamic_address) {
	hw_uint<16> raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_res = load_to_raw_FIFO_buf8487_sm97_0139_write.extract<0, 15>();
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_write(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_4_res, raw_FIFO_buf84, root, raw_to_gp_940_ld86, raw_to_gp_940_ld85, dynamic_address);
}

// Operation logic
inline void load_to_demosaic_diff_FIFO_buf6871_sm115_0175(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_024, demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_to_gp_024
	auto demosaic_diff_to_gp_024__lp_1_m_demosaic_diff_to_gp_024_ld69__p__0_rp__c____demosaic_diff_to_gp_024_ld70_value = demosaic_diff_to_gp_024.read();
	// Produce: demosaic_diff_FIFO_buf68
	demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm115_0175_write_bundle_write(/* arg names */demosaic_diff_to_gp_024__lp_1_m_demosaic_diff_to_gp_024_ld69__p__0_rp__c____demosaic_diff_to_gp_024_ld70_value, demosaic_diff_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void cp_1_update_0_sm109_0163(demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */cp_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_FIFO_buf68
	auto demosaic_diff_FIFO_buf68_1_m__lp_1_m_cp_1_1__p__0_rp___p__0_p_0_c_____1_m_cp_1_0__p__0_p_0_value = demosaic_diff_FIFO_buf68_cp_1_update_0_sm109_0163_read_bundle_read(demosaic_diff_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp_1_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_1_m__lp_1_m_cp_1_1__p__0_rp___p__0_p_0_c_____1_m_cp_1_0__p__0_p_0_value);
	// Produce: cp_1
	cp_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_cp_1_0_demosaic_diff_to_gp_024_ld70_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_diff_to_gp_024, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_cp_1_0_demosaic_diff_to_gp_024_ld70__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_diff_FIFO_buf68_cache demosaic_diff_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { cp_1_update_0_sm109_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_diff_FIFO_buf6871_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { cp_1_update_0_sm109_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for cp_1_update_0_sm109_0163(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_FIFO_buf6871_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_diff_FIFO_buf6871_sm115_0175(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 31 <= i3 <= 32 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_diff_FIFO_buf6871_sm115_0175(demosaic_diff_to_gp_024 /* buf name */, demosaic_diff_FIFO_buf68, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          cp_1_update_0_sm109_0163(demosaic_diff_FIFO_buf68 /* buf name */, cp_1, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaicb_FIFO_buf7275_sm120_0185(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_128, demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_to_gp_128
	auto demosaicb_to_gp_128__lp_1_m_demosaicb_to_gp_128_ld73__p__0_rp__c____demosaicb_to_gp_128_ld74_value = demosaicb_to_gp_128.read();
	// Produce: demosaicb_FIFO_buf72
	demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0185_write_bundle_write(/* arg names */demosaicb_to_gp_128__lp_1_m_demosaicb_to_gp_128_ld73__p__0_rp__c____demosaicb_to_gp_128_ld74_value, demosaicb_FIFO_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_647_sm89_0121(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld5__p__0_rp__c____demosaic_ld6_value = demosaic_load_to_demosaic_to_gp_647_sm89_0121_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_64
	demosaic_to_gp_64.write(demosaic__lp_1_m_demosaic_ld5__p__0_rp__c____demosaic_ld6_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_update_0_sm103_0151(demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, demosaic_cache& demosaic, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_FIFO_buf72
	auto demosaicb_FIFO_buf72_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value = demosaicb_FIFO_buf72_demosaic_update_0_sm103_0151_read_bundle_read(demosaicb_FIFO_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_sm103_0151_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_303_sm88_0123(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value = demosaic_load_to_demosaic_to_gp_303_sm88_0123_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_30
	demosaic_to_gp_30.write(demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_0_demosaic_ld2_demosaic_ld6_demosaicb_to_gp_128_ld74_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaicb_to_gp_128, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_30, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_64) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_0_demosaic_ld2_demosaic_ld6_demosaicb_to_gp_128_ld74__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicb_FIFO_buf72_cache demosaicb_FIFO_buf72;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_to_gp_303_sm88_0123[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_demosaic_to_gp_647_sm89_0121[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; demosaic_update_0_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_demosaicb_FIFO_buf7275_sm120_0185[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_demosaic_to_gp_303_sm88_0123[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_to_gp_303_sm88_0123(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_to_gp_647_sm89_0121[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_to_gp_647_sm89_0121(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1085 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1085 + -1*i2)) >= 0)))
//   { demosaic_update_0_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for demosaic_update_0_sm103_0151(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaicb_FIFO_buf7275_sm120_0185[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaicb_FIFO_buf7275_sm120_0185(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087 and 11 <= i3 <= 12; [0, i1, i2, 14] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087; [0, i1, i2, 13] : 6 <= i1 <= 1085 and 6 <= i2 <= 1085 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaicb_FIFO_buf7275_sm120_0185(demosaicb_to_gp_128 /* buf name */, demosaicb_FIFO_buf72, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_update_0_sm103_0151(demosaicb_FIFO_buf72 /* buf name */, demosaic, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 <= 1085 and i2 <= 1085 }
	        // { [i0, i1, i2] : i1 <= 1085 and i2 <= 1085 }
	          // { [i0, i1, i2] : 1085 - i1 >= 0 }
	          // { [i0, i1, i2] : 1085 - i2 >= 0 }
	        if ((((((1085 + -1*i1)) >= 0) && (((1085 + -1*i2)) >= 0)))) {
	          load_to_demosaic_to_gp_647_sm89_0121(demosaic /* buf name */, demosaic_to_gp_64, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_to_gp_303_sm88_0123(demosaic /* buf name */, demosaic_to_gp_30, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_raw_to_gp_94043_sm94_0133(raw_cache& raw, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_940, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw
	auto raw__lp_1_m_raw_ld41__p__0_rp__c____raw_ld42_value = raw_load_to_raw_to_gp_94043_sm94_0133_read_bundle_read(raw/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: raw_to_gp_940
	raw_to_gp_940.write(raw__lp_1_m_raw_ld41__p__0_rp__c____raw_ld42_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void raw_update_0_sm99_0143(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value);
	// Produce: raw
	raw_raw_update_0_sm99_0143_write_bundle_write(/* arg names */compute_result, raw, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_raw_0_raw_ld42_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_to_gp_940) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_raw_0_raw_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_raw_to_gp_94043_sm94_0133[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087; raw_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
//   { load_to_raw_to_gp_94043_sm94_0133[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
// Condition for load_to_raw_to_gp_94043_sm94_0133(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { raw_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
// Condition for raw_update_0_sm99_0143(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1087 and 0 <= i2 <= 1087 and 0 <= i3 <= 1 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          raw_update_0_sm99_0143(raw_oc /* buf name */, raw, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_to_gp_94043_sm94_0133(raw /* buf name */, raw_to_gp_940, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bx_to_gp_5811_sm116_0177(demosaic_bx_cache& demosaic_bx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_58, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx__lp_1_m_demosaic_bx_ld9__p__0_rp__c____demosaic_bx_ld10_value = demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm116_0177_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bx_to_gp_58
	demosaic_bx_to_gp_58.write(demosaic_bx__lp_1_m_demosaic_bx_ld9__p__0_rp__c____demosaic_bx_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0_sm105_0155(demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, demosaic_bx_cache& demosaic_bx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_FIFO_buf56
	auto demosaic_bxb_FIFO_buf56_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value = demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm105_0155_read_bundle_read(demosaic_bxb_FIFO_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_sm105_0155_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bxb_FIFO_buf5659_sm114_0173(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_212, demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_to_gp_212
	auto demosaic_bxb_to_gp_212__lp_1_m_demosaic_bxb_to_gp_212_ld57__p__0_rp__c____demosaic_bxb_to_gp_212_ld58_value = demosaic_bxb_to_gp_212.read();
	// Produce: demosaic_bxb_FIFO_buf56
	demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm114_0173_write_bundle_write(/* arg names */demosaic_bxb_to_gp_212__lp_1_m_demosaic_bxb_to_gp_212_ld57__p__0_rp__c____demosaic_bxb_to_gp_212_ld58_value, demosaic_bxb_FIFO_buf56, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bx_0_demosaic_bx_ld10_demosaic_bxb_to_gp_212_ld58_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bxb_to_gp_212, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bx_to_gp_58) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bx_0_demosaic_bx_ld10_demosaic_bxb_to_gp_212_ld58__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_FIFO_buf56_cache demosaic_bxb_FIFO_buf56;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaic_bx_update_0_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 20] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_demosaic_bxb_FIFO_buf5659_sm114_0173[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 19] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_demosaic_bx_to_gp_5811_sm116_0177[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 21] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
//   { demosaic_bx_update_0_sm105_0155[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 20] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for demosaic_bx_update_0_sm105_0155(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_bxb_FIFO_buf5659_sm114_0173[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 19] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_bxb_FIFO_buf5659_sm114_0173(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_bx_to_gp_5811_sm116_0177[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 21] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_bx_to_gp_5811_sm116_0177(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 6 <= i2 <= 1087 and 19 <= i3 <= 21 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bxb_FIFO_buf5659_sm114_0173(demosaic_bxb_to_gp_212 /* buf name */, demosaic_bxb_FIFO_buf56, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_bx_update_0_sm105_0155(demosaic_bxb_FIFO_buf56 /* buf name */, demosaic_bx, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_to_gp_5811_sm116_0177(demosaic_bx /* buf name */, demosaic_bx_to_gp_58, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void demosaic_bxb_update_0_sm104_0153(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf44
	auto demosaic_FIFO_buf44_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm104_0153_read_bundle_read(demosaic_FIFO_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_sm104_0153_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_FIFO_buf4447_sm110_0165(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_30
	auto demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld45__p__0_rp__c____demosaic_to_gp_30_ld46_value = demosaic_to_gp_30.read();
	// Produce: demosaic_FIFO_buf44
	demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm110_0165_write_bundle_write(/* arg names */demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld45__p__0_rp__c____demosaic_to_gp_30_ld46_value, demosaic_FIFO_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bxb_to_gp_21215_sm112_0169(demosaic_bxb_cache& demosaic_bxb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_212, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb__lp_1_m_demosaic_bxb_ld13__p__0_rp__c____demosaic_bxb_ld14_value = demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm112_0169_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bxb_to_gp_212
	demosaic_bxb_to_gp_212.write(demosaic_bxb__lp_1_m_demosaic_bxb_ld13__p__0_rp__c____demosaic_bxb_ld14_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bxb_0_demosaic_bxb_ld14_demosaic_to_gp_30_ld46_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_30, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bxb_to_gp_212) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bxb_0_demosaic_bxb_ld14_demosaic_to_gp_30_ld46__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_FIFO_buf44_cache demosaic_FIFO_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_FIFO_buf4447_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 15] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_demosaic_bxb_to_gp_21215_sm112_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; demosaic_bxb_update_0_sm104_0153[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
//   { load_to_demosaic_FIFO_buf4447_sm110_0165[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 15] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_FIFO_buf4447_sm110_0165(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_bxb_to_gp_21215_sm112_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_bxb_to_gp_21215_sm112_0169(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_bxb_update_0_sm104_0153[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for demosaic_bxb_update_0_sm104_0153(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 6 <= i2 <= 1087 and 17 <= i3 <= 18; [0, i1, i2, 15] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_FIFO_buf4447_sm110_0165(demosaic_to_gp_30 /* buf name */, demosaic_FIFO_buf44, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          demosaic_bxb_update_0_sm104_0153(demosaic_FIFO_buf44 /* buf name */, demosaic_bxb, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_bxb_to_gp_21215_sm112_0169(demosaic_bxb /* buf name */, demosaic_bxb_to_gp_212, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_by_to_gp_61619_sm90_0125(demosaic_by_cache& demosaic_by, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_616, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by
	auto demosaic_by__lp_1_m_demosaic_by_ld17__p__0_rp__c____demosaic_by_ld18_value = demosaic_by_load_to_demosaic_by_to_gp_61619_sm90_0125_read_bundle_read(demosaic_by/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_by_to_gp_616
	demosaic_by_to_gp_616.write(demosaic_by__lp_1_m_demosaic_by_ld17__p__0_rp__c____demosaic_by_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_byb_FIFO_buf6467_sm95_0135(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_420, demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_to_gp_420
	auto demosaic_byb_to_gp_420__lp_1_m_demosaic_byb_to_gp_420_ld65__p__0_rp__c____demosaic_byb_to_gp_420_ld66_value = demosaic_byb_to_gp_420.read();
	// Produce: demosaic_byb_FIFO_buf64
	demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm95_0135_write_bundle_write(/* arg names */demosaic_byb_to_gp_420__lp_1_m_demosaic_byb_to_gp_420_ld65__p__0_rp__c____demosaic_byb_to_gp_420_ld66_value, demosaic_byb_FIFO_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0_sm107_0159(demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, demosaic_by_cache& demosaic_by, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_FIFO_buf64
	auto demosaic_byb_FIFO_buf64_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value = demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm107_0159_read_bundle_read(demosaic_byb_FIFO_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_sm107_0159_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_by_0_demosaic_by_ld18_demosaic_byb_to_gp_420_ld66_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_byb_to_gp_420, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_by_to_gp_616) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_by_0_demosaic_by_ld18_demosaic_byb_to_gp_420_ld66__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_FIFO_buf64_cache demosaic_byb_FIFO_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_byb_FIFO_buf6467_sm95_0135[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_by_to_gp_61619_sm90_0125[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; demosaic_by_update_0_sm107_0159[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { load_to_demosaic_byb_FIFO_buf6467_sm95_0135[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_byb_FIFO_buf6467_sm95_0135(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_to_gp_61619_sm90_0125[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_by_to_gp_61619_sm90_0125(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_by_update_0_sm107_0159[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for demosaic_by_update_0_sm107_0159(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 25 <= i3 <= 27 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_byb_FIFO_buf6467_sm95_0135(demosaic_byb_to_gp_420 /* buf name */, demosaic_byb_FIFO_buf64, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_by_update_0_sm107_0159(demosaic_byb_FIFO_buf64 /* buf name */, demosaic_by, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_by_to_gp_61619_sm90_0125(demosaic_by /* buf name */, demosaic_by_to_gp_616, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bx_FIFO_buf5255_sm118_0181(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_58, demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_to_gp_58
	auto demosaic_bx_to_gp_58__lp_1_m_demosaic_bx_to_gp_58_ld53__p__0_rp__c____demosaic_bx_to_gp_58_ld54_value = demosaic_bx_to_gp_58.read();
	// Produce: demosaic_bx_FIFO_buf52
	demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm118_0181_write_bundle_write(/* arg names */demosaic_bx_to_gp_58__lp_1_m_demosaic_bx_to_gp_58_ld53__p__0_rp__c____demosaic_bx_to_gp_58_ld54_value, demosaic_bx_FIFO_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0_sm106_0157(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, demosaic_byb_cache& demosaic_byb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_FIFO_buf52
	auto demosaic_bx_FIFO_buf52_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm106_0157_read_bundle_read(demosaic_bx_FIFO_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_sm106_0157_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_byb_to_gp_42023_sm113_0171(demosaic_byb_cache& demosaic_byb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_420, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb__lp_1_m_demosaic_byb_ld21__p__0_rp__c____demosaic_byb_ld22_value = demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm113_0171_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_byb_to_gp_420
	demosaic_byb_to_gp_420.write(demosaic_byb__lp_1_m_demosaic_byb_ld21__p__0_rp__c____demosaic_byb_ld22_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bx_to_gp_58_ld54_demosaic_byb_0_demosaic_byb_ld22_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bx_to_gp_58, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_byb_to_gp_420) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bx_to_gp_58_ld54_demosaic_byb_0_demosaic_byb_ld22__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_bx_FIFO_buf52_cache demosaic_bx_FIFO_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_cache demosaic_byb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaic_byb_update_0_sm106_0157[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_bx_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 22] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081; load_to_demosaic_byb_to_gp_42023_sm113_0171[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { demosaic_byb_update_0_sm106_0157[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for demosaic_byb_update_0_sm106_0157(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_bx_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 22] : 0 <= d1 <= 1079 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_bx_FIFO_buf5255_sm118_0181(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_byb_to_gp_42023_sm113_0171[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_byb_to_gp_42023_sm113_0171(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 23 <= i3 <= 24; [0, i1, i2, 22] : 8 <= i1 <= 1087 and 6 <= i2 <= 1087 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_FIFO_buf5255_sm118_0181(demosaic_bx_to_gp_58 /* buf name */, demosaic_bx_FIFO_buf52, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          demosaic_byb_update_0_sm106_0157(demosaic_bx_FIFO_buf52 /* buf name */, demosaic_byb, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_byb_to_gp_42023_sm113_0171(demosaic_byb /* buf name */, demosaic_byb_to_gp_420, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf4851_sm119_0183(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_64, demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_64
	auto demosaic_to_gp_64__lp_1_m_demosaic_to_gp_64_ld49__p__0_rp__c____demosaic_to_gp_64_ld50_value = demosaic_to_gp_64.read();
	// Produce: demosaic_FIFO_buf48
	demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm119_0183_write_bundle_write(/* arg names */demosaic_to_gp_64__lp_1_m_demosaic_to_gp_64_ld49__p__0_rp__c____demosaic_to_gp_64_ld50_value, demosaic_FIFO_buf48, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_FIFO_buf6063_sm111_0167(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_616, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by_to_gp_616
	auto demosaic_by_to_gp_616__lp_1_m_demosaic_by_to_gp_616_ld61__p__0_rp__c____demosaic_by_to_gp_616_ld62_value = demosaic_by_to_gp_616.read();
	// Produce: demosaic_by_FIFO_buf60
	demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm111_0167_write_bundle_write(/* arg names */demosaic_by_to_gp_616__lp_1_m_demosaic_by_to_gp_616_ld61__p__0_rp__c____demosaic_by_to_gp_616_ld62_value, demosaic_by_FIFO_buf60, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0_sm108_0161(demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, demosaic_diff_cache& demosaic_diff, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf48
	auto demosaic_FIFO_buf48_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_FIFO_buf48_demosaic_diff_update_0_sm108_0161_read_bundle_read(demosaic_FIFO_buf48/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by_FIFO_buf60
	auto demosaic_by_FIFO_buf60_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm108_0161_read_bundle_read(demosaic_by_FIFO_buf60/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value, demosaic_by_FIFO_buf60_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_sm108_0161_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_diff_to_gp_02427_sm117_0179(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_024, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff__lp_1_m_demosaic_diff_ld25__p__0_rp__c____demosaic_diff_ld26_value = demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm117_0179_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_diff_to_gp_024
	demosaic_diff_to_gp_024.write(demosaic_diff__lp_1_m_demosaic_diff_ld25__p__0_rp__c____demosaic_diff_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_by_to_gp_616_ld62_demosaic_diff_0_demosaic_diff_ld26_demosaic_to_gp_64_ld50_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_by_to_gp_616, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_64, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_diff_to_gp_024) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_by_to_gp_616_ld62_demosaic_diff_0_demosaic_diff_ld26_demosaic_to_gp_64_ld50__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_FIFO_buf48_cache demosaic_FIFO_buf48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_FIFO_buf60_cache demosaic_by_FIFO_buf60;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_FIFO_buf4851_sm119_0183[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; demosaic_diff_update_0_sm108_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_diff_to_gp_02427_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_by_FIFO_buf6063_sm111_0167[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { load_to_demosaic_FIFO_buf4851_sm119_0183[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 16] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_FIFO_buf4851_sm119_0183(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_diff_update_0_sm108_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for demosaic_diff_update_0_sm108_0161(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_to_gp_02427_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_diff_to_gp_02427_sm117_0179(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_FIFO_buf6063_sm111_0167[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_by_FIFO_buf6063_sm111_0167(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 28 <= i3 <= 30; [0, i1, i2, 16] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_FIFO_buf4851_sm119_0183(demosaic_to_gp_64 /* buf name */, demosaic_FIFO_buf48, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_by_FIFO_buf6063_sm111_0167(demosaic_by_to_gp_616 /* buf name */, demosaic_by_FIFO_buf60, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_diff_update_0_sm108_0161(demosaic_FIFO_buf48 /* buf name */, demosaic_by_FIFO_buf60 /* buf name */, demosaic_diff, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_diff_to_gp_02427_sm117_0179(demosaic_diff /* buf name */, demosaic_diff_to_gp_024, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoise_FIFO_buf7679_sm96_0137(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_732, denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_to_gp_732
	auto denoise_to_gp_732__lp_1_m_denoise_to_gp_732_ld77__p__0_rp__c____denoise_to_gp_732_ld78_value = denoise_to_gp_732.read();
	// Produce: denoise_FIFO_buf76
	denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm96_0137_write_bundle_write(/* arg names */denoise_to_gp_732__lp_1_m_denoise_to_gp_732_ld77__p__0_rp__c____denoise_to_gp_732_ld78_value, denoise_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0_sm102_0149(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, demosaicb_cache& demosaicb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_FIFO_buf76
	auto denoise_FIFO_buf76_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value = denoise_FIFO_buf76_demosaicb_update_0_sm102_0149_read_bundle_read(denoise_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_sm102_0149_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaicb_to_gp_12831_sm91_0127(demosaicb_cache& demosaicb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb__lp_1_m_demosaicb_ld29__p__0_rp__c____demosaicb_ld30_value = demosaicb_load_to_demosaicb_to_gp_12831_sm91_0127_read_bundle_read(demosaicb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaicb_to_gp_128
	demosaicb_to_gp_128.write(demosaicb__lp_1_m_demosaicb_ld29__p__0_rp__c____demosaicb_ld30_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaicb_0_demosaicb_ld30_denoise_to_gp_732_ld78_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoise_to_gp_732, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaicb_to_gp_128) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaicb_0_demosaicb_ld30_denoise_to_gp_732_ld78__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaicb_cache demosaicb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoise_FIFO_buf76_cache denoise_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_demosaicb_to_gp_12831_sm91_0127[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
//   { demosaicb_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for demosaicb_update_0_sm102_0149(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaicb_to_gp_12831_sm91_0127[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaicb_to_gp_12831_sm91_0127(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_denoise_FIFO_buf7679_sm96_0137[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoise_FIFO_buf7679_sm96_0137(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1087 and 4 <= i2 <= 1087 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_FIFO_buf7679_sm96_0137(denoise_to_gp_732 /* buf name */, denoise_FIFO_buf76, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          demosaicb_update_0_sm102_0149(denoise_FIFO_buf76 /* buf name */, demosaicb, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_demosaicb_to_gp_12831_sm91_0127(demosaicb /* buf name */, demosaicb_to_gp_128, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoiseb_FIFO_buf8083_sm98_0141(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_836, denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_to_gp_836
	auto denoiseb_to_gp_836__lp_1_m_denoiseb_to_gp_836_ld81__p__0_rp__c____denoiseb_to_gp_836_ld82_value = denoiseb_to_gp_836.read();
	// Produce: denoiseb_FIFO_buf80
	denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm98_0141_write_bundle_write(/* arg names */denoiseb_to_gp_836__lp_1_m_denoiseb_to_gp_836_ld81__p__0_rp__c____denoiseb_to_gp_836_ld82_value, denoiseb_FIFO_buf80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0_sm101_0147(denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, denoise_cache& denoise, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_FIFO_buf80
	auto denoiseb_FIFO_buf80_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value = denoiseb_FIFO_buf80_denoise_update_0_sm101_0147_read_bundle_read(denoiseb_FIFO_buf80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value);
	// Produce: denoise
	denoise_denoise_update_0_sm101_0147_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoise_to_gp_73235_sm92_0129(denoise_cache& denoise, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_732, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise__lp_1_m_denoise_ld33__p__0_rp__c____denoise_ld34_value = denoise_load_to_denoise_to_gp_73235_sm92_0129_read_bundle_read(denoise/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoise_to_gp_732
	denoise_to_gp_732.write(denoise__lp_1_m_denoise_ld33__p__0_rp__c____denoise_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_denoise_0_denoise_ld34_denoiseb_to_gp_836_ld82_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoiseb_to_gp_836, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoise_to_gp_732) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_denoise_0_denoise_ld34_denoiseb_to_gp_836_ld82__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  denoise_cache denoise;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoiseb_FIFO_buf80_cache denoiseb_FIFO_buf80;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_denoise_to_gp_73235_sm92_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; denoise_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; load_to_denoiseb_FIFO_buf8083_sm98_0141[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
//   { load_to_denoise_to_gp_73235_sm92_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoise_to_gp_73235_sm92_0129(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { denoise_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for denoise_update_0_sm101_0147(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_denoiseb_FIFO_buf8083_sm98_0141[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoiseb_FIFO_buf8083_sm98_0141(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1087 and 5 <= i3 <= 7 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoiseb_FIFO_buf8083_sm98_0141(denoiseb_to_gp_836 /* buf name */, denoiseb_FIFO_buf80, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          denoise_update_0_sm101_0147(denoiseb_FIFO_buf80 /* buf name */, denoise, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_to_gp_73235_sm92_0129(denoise /* buf name */, denoise_to_gp_732, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoiseb_to_gp_83639_sm93_0131(denoiseb_cache& denoiseb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_836, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb__lp_1_m_denoiseb_ld37__p__0_rp__c____denoiseb_ld38_value = denoiseb_load_to_denoiseb_to_gp_83639_sm93_0131_read_bundle_read(denoiseb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoiseb_to_gp_836
	denoiseb_to_gp_836.write(denoiseb__lp_1_m_denoiseb_ld37__p__0_rp__c____denoiseb_ld38_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_raw_FIFO_buf8487_sm97_0139(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_940, raw_FIFO_buf84_cache& raw_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_to_gp_940
	auto raw_to_gp_940__lp_1_m_raw_to_gp_940_ld85__p__0_rp__c____raw_to_gp_940_ld86_value = raw_to_gp_940.read();
	// Produce: raw_FIFO_buf84
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm97_0139_write_bundle_write(/* arg names */raw_to_gp_940__lp_1_m_raw_to_gp_940_ld85__p__0_rp__c____raw_to_gp_940_ld86_value, raw_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoiseb_update_0_sm100_0145(raw_FIFO_buf84_cache& raw_FIFO_buf84, denoiseb_cache& denoiseb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_FIFO_buf84
	auto raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value = raw_FIFO_buf84_denoiseb_update_0_sm100_0145_read_bundle_read(raw_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_sm100_0145_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_denoiseb_0_denoiseb_ld38_raw_to_gp_940_ld86_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_to_gp_940, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoiseb_to_gp_836) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_denoiseb_0_denoiseb_ld38_raw_to_gp_940_ld86__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  denoiseb_cache denoiseb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_FIFO_buf84_cache raw_FIFO_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; load_to_denoiseb_to_gp_83639_sm93_0131[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
//   { denoiseb_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for denoiseb_update_0_sm100_0145(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_denoiseb_to_gp_83639_sm93_0131[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoiseb_to_gp_83639_sm93_0131(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_raw_FIFO_buf8487_sm97_0139[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
// Condition for load_to_raw_FIFO_buf8487_sm97_0139(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1087 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1087 and 0 <= i2 <= 1087 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_FIFO_buf8487_sm97_0139(raw_to_gp_940 /* buf name */, raw_FIFO_buf84, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          denoiseb_update_0_sm100_0145(raw_FIFO_buf84 /* buf name */, denoiseb, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_denoiseb_to_gp_83639_sm93_0131(denoiseb /* buf name */, denoiseb_to_gp_836, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void cp_1_opt_d(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp_1_opt_d_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > demosaic_diff_to_gp_024;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_diff_to_gp_024.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaicb_to_gp_128;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaicb_to_gp_128.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_30;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_30.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_64;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_64.values depth=2194
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > raw_to_gp_940;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=raw_to_gp_940.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bxb_to_gp_212;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bxb_to_gp_212.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bx_to_gp_58;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bx_to_gp_58.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_byb_to_gp_420;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_byb_to_gp_420.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_by_to_gp_616;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_by_to_gp_616.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoise_to_gp_732;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoise_to_gp_732.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoiseb_to_gp_836;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoiseb_to_gp_836.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_raw_0_raw_ld42_(raw_oc, raw_to_gp_940);
  Extracted_denoiseb_0_denoiseb_ld38_raw_to_gp_940_ld86_(raw_to_gp_940, denoiseb_to_gp_836);
  Extracted_denoise_0_denoise_ld34_denoiseb_to_gp_836_ld82_(denoiseb_to_gp_836, denoise_to_gp_732);
  Extracted_demosaicb_0_demosaicb_ld30_denoise_to_gp_732_ld78_(denoise_to_gp_732, demosaicb_to_gp_128);
  Extracted_demosaic_0_demosaic_ld2_demosaic_ld6_demosaicb_to_gp_128_ld74_(demosaicb_to_gp_128, demosaic_to_gp_30, demosaic_to_gp_64);
  Extracted_demosaic_bxb_0_demosaic_bxb_ld14_demosaic_to_gp_30_ld46_(demosaic_to_gp_30, demosaic_bxb_to_gp_212);
  Extracted_demosaic_bx_0_demosaic_bx_ld10_demosaic_bxb_to_gp_212_ld58_(demosaic_bxb_to_gp_212, demosaic_bx_to_gp_58);
  Extracted_demosaic_bx_to_gp_58_ld54_demosaic_byb_0_demosaic_byb_ld22_(demosaic_bx_to_gp_58, demosaic_byb_to_gp_420);
  Extracted_demosaic_by_0_demosaic_by_ld18_demosaic_byb_to_gp_420_ld66_(demosaic_byb_to_gp_420, demosaic_by_to_gp_616);
  Extracted_demosaic_by_to_gp_616_ld62_demosaic_diff_0_demosaic_diff_ld26_demosaic_to_gp_64_ld50_(demosaic_by_to_gp_616, demosaic_to_gp_64, demosaic_diff_to_gp_024);
  Extracted_cp_1_0_demosaic_diff_to_gp_024_ld70_(demosaic_diff_to_gp_024, cp_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp_1_opt_d_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp_1_opt_d(raw_oc, cp_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { cp_1_update_0_sm109_0163[root = 0, cp_1_0, cp_1_1] -> cp_1[cp_1_1, cp_1_0] : 0 <= cp_1_0 <= 1079 and 0 <= cp_1_1 <= 1079 }
const int cp_1_update_0_sm109_0163_write_pipe0_num_transfers = 1166400;
  // { raw_update_0_sm99_0143[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1087 }
const int raw_update_0_sm99_0143_read_pipe0_num_transfers = 1183744;


extern "C" {

void cp_1_opt_d_accel(hw_uint<16>* raw_update_0_sm99_0143_read_pipe0, hw_uint<16>* cp_1_update_0_sm109_0163_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_sm99_0143_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_1_update_0_sm109_0163_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_sm99_0143_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp_1_update_0_sm109_0163_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > raw_update_0_sm99_0143_read_pipe0_channel;
  static HWStream<hw_uint<16> > cp_1_update_0_sm109_0163_write_pipe0_channel;

  burst_read<16>(raw_update_0_sm99_0143_read_pipe0, raw_update_0_sm99_0143_read_pipe0_channel, raw_update_0_sm99_0143_read_pipe0_num_transfers*size);

  cp_1_opt_d_wrapper(raw_update_0_sm99_0143_read_pipe0_channel, cp_1_update_0_sm109_0163_write_pipe0_channel, size);

  burst_write<16>(cp_1_update_0_sm109_0163_write_pipe0, cp_1_update_0_sm109_0163_write_pipe0_channel, cp_1_update_0_sm109_0163_write_pipe0_num_transfers*size);
}

}
extern "C" {

void cp_1_opt_d_rdai(HWStream<hw_uint<16> >& raw_update_0_sm99_0143_read_pipe0, HWStream<hw_uint<16> >&  cp_1_update_0_sm109_0163_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_sm99_0143_read_pipe0
#pragma HLS INTERFACE axis register port = cp_1_update_0_sm109_0163_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp_1_opt_d(raw_update_0_sm99_0143_read_pipe0, cp_1_update_0_sm109_0163_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

