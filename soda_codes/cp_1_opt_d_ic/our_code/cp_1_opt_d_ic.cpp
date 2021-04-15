#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cp_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "cp_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_303_sm112_0129_21_cache {
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

struct demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_647_sm113_0131_19_cache {
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

struct demosaic_cache {
  // Reader addrs...
    // { load_to_demosaic_to_gp_303_sm112_0129[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1081 }
    // { load_to_demosaic_to_gp_647_sm113_0131[root = 0, demosaic_ld6, demosaic_ld5] -> demosaic[demosaic_ld5, demosaic_ld6] : 0 <= demosaic_ld6 <= 1079 and 0 <= demosaic_ld5 <= 1079 }
  // # of banks: 2
  demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_303_sm112_0129_21_cache demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_303_sm112_0129_21;
  demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_647_sm113_0131_19_cache demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_647_sm113_0131_19;
};



inline void demosaic_demosaic_update_0_sm92_0155_84_write(hw_uint<16>& demosaic_demosaic_update_0_sm92_0155_84, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_303_sm112_0129_21.push(demosaic_demosaic_update_0_sm92_0155_84);
  demosaic.demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_647_sm113_0131_19.push(demosaic_demosaic_update_0_sm92_0155_84);
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm112_0129_21_select(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_303_sm112_0129_21 read pattern: { load_to_demosaic_to_gp_303_sm112_0129[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1081 }
  // Read schedule : { load_to_demosaic_to_gp_303_sm112_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { demosaic_update_0_sm92_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_demosaic_update_0_sm92_0155_84 = demosaic.demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_303_sm112_0129_21.peek(/* one reader or all rams */ 0);
  return value_demosaic_demosaic_update_0_sm92_0155_84;
  return 0;
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_647_sm113_0131_19_select(demosaic_cache& demosaic, int root, int demosaic_ld6, int demosaic_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_647_sm113_0131_19 read pattern: { load_to_demosaic_to_gp_647_sm113_0131[root = 0, demosaic_ld6, demosaic_ld5] -> demosaic[demosaic_ld5, demosaic_ld6] : 0 <= demosaic_ld6 <= 1079 and 0 <= demosaic_ld5 <= 1079 }
  // Read schedule : { load_to_demosaic_to_gp_647_sm113_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_update_0_sm92_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_demosaic_update_0_sm92_0155_84 = demosaic.demosaic_demosaic_update_0_sm92_0155_84_to_demosaic_load_to_demosaic_to_gp_647_sm113_0131_19.peek(/* one reader or all rams */ 2);
  return value_demosaic_demosaic_update_0_sm92_0155_84;
  return 0;
}

// # of bundles = 3
// demosaic_update_0_sm92_0155_write
//	demosaic_demosaic_update_0_sm92_0155_84
inline void demosaic_demosaic_update_0_sm92_0155_write_bundle_write(hw_uint<16>& demosaic_update_0_sm92_0155_write, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_sm92_0155_84_res = demosaic_update_0_sm92_0155_write.extract<0, 15>();
	demosaic_demosaic_update_0_sm92_0155_84_write(demosaic_demosaic_update_0_sm92_0155_84_res, demosaic, root, demosaic_0, demosaic_1, dynamic_address);
}

// load_to_demosaic_to_gp_303_sm112_0129_read
//	demosaic_load_to_demosaic_to_gp_303_sm112_0129_21
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm112_0129_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_303_sm112_0129_21

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm112_0129_21_res = demosaic_load_to_demosaic_to_gp_303_sm112_0129_21_select(demosaic, root, demosaic_ld2, demosaic_ld1, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_303_sm112_0129_21_res);
	return result;
}

// load_to_demosaic_to_gp_647_sm113_0131_read
//	demosaic_load_to_demosaic_to_gp_647_sm113_0131_19
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_647_sm113_0131_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld6, int demosaic_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_647_sm113_0131_19

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_647_sm113_0131_19_res = demosaic_load_to_demosaic_to_gp_647_sm113_0131_19_select(demosaic, root, demosaic_ld6, demosaic_ld5, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_647_sm113_0131_19_res);
	return result;
}

struct demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96_cache {
	// RAM Box: {[0, 1079], [0, 1081]}
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

struct demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97_cache {
	// RAM Box: {[1, 1080], [0, 1081]}
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

struct demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98_cache {
	// RAM Box: {[2, 1081], [0, 1081]}
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

struct demosaic_FIFO_buf44_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0_sm93_0157[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1079 }
    // { demosaic_bxb_update_0_sm93_0157[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1079 }
    // { demosaic_bxb_update_0_sm93_0157[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1079 }
  // # of banks: 3
  demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96_cache demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96;
  demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97_cache demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97;
  demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98_cache demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98;
};



inline void demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_write(hw_uint<16>& demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44, demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_to_gp_30_ld46, int demosaic_to_gp_30_ld45, int dynamic_address) {
  demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96.push(demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44);
  demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97.push(demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44);
  demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98.push(demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44);
}

inline hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96_select(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96 read pattern: { demosaic_bxb_update_0_sm93_0157[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1079 }
  // Read schedule : { demosaic_bxb_update_0_sm93_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_FIFO_buf4447_sm103_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44 = demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96.peek(/* one reader or all rams */ 2);
  return value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97_select(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97 read pattern: { demosaic_bxb_update_0_sm93_0157[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1079 }
  // Read schedule : { demosaic_bxb_update_0_sm93_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_FIFO_buf4447_sm103_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44 = demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97.peek(/* one reader or all rams */ 1);
  return value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98_select(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98 read pattern: { demosaic_bxb_update_0_sm93_0157[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf44[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1079 }
  // Read schedule : { demosaic_bxb_update_0_sm93_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_FIFO_buf4447_sm103_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44 = demosaic_FIFO_buf44.demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_to_demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98.peek(/* one reader or all rams */ 0);
  return value_demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm93_0157_read
//	demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96
//	demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97
//	demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98
inline hw_uint<48> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_read_bundle_read(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96
    // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97
    // demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98

	hw_uint<48> result;
	hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96_res = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96_select(demosaic_FIFO_buf44, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_96_res);
	hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97_res = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97_select(demosaic_FIFO_buf44, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_97_res);
	hw_uint<16> demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98_res = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98_select(demosaic_FIFO_buf44, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_98_res);
	return result;
}

// load_to_demosaic_FIFO_buf4447_sm103_0177_write
//	demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44
inline void demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf4447_sm103_0177_write, demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int root, int demosaic_to_gp_30_ld46, int demosaic_to_gp_30_ld45, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_res = load_to_demosaic_FIFO_buf4447_sm103_0177_write.extract<0, 15>();
	demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_write(demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_44_res, demosaic_FIFO_buf44, root, demosaic_to_gp_30_ld46, demosaic_to_gp_30_ld45, dynamic_address);
}

struct demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87_cache {
	// RAM Box: {[0, 1079], [0, 1079]}
	// Capacity: 2161
	// # of read delays: 2161
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 881, 882, 883, 884, 885, 886, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1135, 1136, 1137, 1138, 1139, 1140, 1141, 1142, 1143, 1144, 1145, 1146, 1147, 1148, 1149, 1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1163, 1164, 1165, 1166, 1167, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193, 1194, 1195, 1196, 1197, 1198, 1199, 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214, 1215, 1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1228, 1229, 1230, 1231, 1232, 1233, 1234, 1235, 1236, 1237, 1238, 1239, 1240, 1241, 1242, 1243, 1244, 1245, 1246, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1421, 1422, 1423, 1424, 1425, 1426, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435, 1436, 1437, 1438, 1439, 1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449, 1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1470, 1471, 1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481, 1482, 1483, 1484, 1485, 1486, 1487, 1488, 1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513, 1514, 1515, 1516, 1517, 1518, 1519, 1520, 1521, 1522, 1523, 1524, 1525, 1526, 1527, 1528, 1529, 1530, 1531, 1532, 1533, 1534, 1535, 1536, 1537, 1538, 1539, 1540, 1541, 1542, 1543, 1544, 1545, 1546, 1547, 1548, 1549, 1550, 1551, 1552, 1553, 1554, 1555, 1556, 1557, 1558, 1559, 1560, 1561, 1562, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1579, 1580, 1581, 1582, 1583, 1584, 1585, 1586, 1587, 1588, 1589, 1590, 1591, 1592, 1593, 1594, 1595, 1596, 1597, 1598, 1599, 1600, 1601, 1602, 1603, 1604, 1605, 1606, 1607, 1608, 1609, 1610, 1611, 1612, 1613, 1614, 1615, 1616, 1617, 1618, 1619, 1620, 1621, 1622, 1623, 1624, 1625, 1626, 1627, 1628, 1629, 1630, 1631, 1632, 1633, 1634, 1635, 1636, 1637, 1638, 1639, 1640, 1641, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1658, 1659, 1660, 1661, 1662, 1663, 1664, 1665, 1666, 1667, 1668, 1669, 1670, 1671, 1672, 1673, 1674, 1675, 1676, 1677, 1678, 1679, 1680, 1681, 1682, 1683, 1684, 1685, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694, 1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1716, 1717, 1718, 1719, 1720, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1737, 1738, 1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750, 1751, 1752, 1753, 1754, 1755, 1756, 1757, 1758, 1759, 1760, 1761, 1762, 1763, 1764, 1765, 1766, 1767, 1768, 1769, 1770, 1771, 1772, 1773, 1774, 1775, 1776, 1777, 1778, 1779, 1780, 1781, 1782, 1783, 1784, 1785, 1786, 1787, 1788, 1789, 1790, 1791, 1792, 1793, 1794, 1795, 1796, 1797, 1798, 1799, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1816, 1817, 1818, 1819, 1820, 1821, 1822, 1823, 1824, 1825, 1826, 1827, 1828, 1829, 1830, 1831, 1832, 1833, 1834, 1835, 1836, 1837, 1838, 1839, 1840, 1841, 1842, 1843, 1844, 1845, 1846, 1847, 1848, 1849, 1850, 1851, 1852, 1853, 1854, 1855, 1856, 1857, 1858, 1859, 1860, 1861, 1862, 1863, 1864, 1865, 1866, 1867, 1868, 1869, 1870, 1871, 1872, 1873, 1874, 1875, 1876, 1877, 1878, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1895, 1896, 1897, 1898, 1899, 1900, 1901, 1902, 1903, 1904, 1905, 1906, 1907, 1908, 1909, 1910, 1911, 1912, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920, 1921, 1922, 1923, 1924, 1925, 1926, 1927, 1928, 1929, 1930, 1931, 1932, 1933, 1934, 1935, 1936, 1937, 1938, 1939, 1940, 1941, 1942, 1943, 1944, 1945, 1946, 1947, 1948, 1949, 1950, 1951, 1952, 1953, 1954, 1955, 1956, 1957, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 1974, 1975, 1976, 1977, 1978, 1979, 1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028, 2029, 2030, 2031, 2032, 2033, 2034, 2035, 2036, 2037, 2038, 2039, 2040, 2041, 2042, 2043, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2053, 2054, 2055, 2056, 2057, 2058, 2059, 2060, 2061, 2062, 2063, 2064, 2065, 2066, 2067, 2068, 2069, 2070, 2071, 2072, 2073, 2074, 2075, 2076, 2077, 2078, 2079, 2080, 2081, 2082, 2083, 2084, 2085, 2086, 2087, 2088, 2089, 2090, 2091, 2092, 2093, 2094, 2095, 2096, 2097, 2098, 2099, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109, 2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138, 2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148, 2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2158, 2159, 2160
	fifo<hw_uint<16>, 2161> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(2160 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct demosaic_FIFO_buf48_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm97_0165[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf48[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // # of banks: 1
  demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87_cache demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87;
};



inline void demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_write(hw_uint<16>& demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42, demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_to_gp_64_ld50, int demosaic_to_gp_64_ld49, int dynamic_address) {
  demosaic_FIFO_buf48.demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87.push(demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42);
}

inline hw_uint<16> demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87_select(demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87 read pattern: { demosaic_diff_update_0_sm97_0165[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf48[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0_sm97_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_FIFO_buf4851_sm107_0185[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42 = demosaic_FIFO_buf48.demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_to_demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87.peek(/* one reader or all rams */ (-1079 + demosaic_diff_1 == 0 && -1078 + demosaic_diff_0 == 0) ? (1080) : (1078 - demosaic_diff_1 >= 0 && 1077 - demosaic_diff_0 >= 0) ? (2160) : (-1079 + demosaic_diff_0 == 0 && 1078 - demosaic_diff_1 >= 0) ? ((1079 - demosaic_diff_1)) : (-1079 + demosaic_diff_1 == 0 && 1077 - demosaic_diff_0 >= 0) ? (2160) : (-1078 + demosaic_diff_0 == 0 && 1078 - demosaic_diff_1 >= 0) ? ((2159 - demosaic_diff_1)) : 0);
  return value_demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm97_0165_read
//	demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87
inline hw_uint<16> demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_read_bundle_read(demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87

	hw_uint<16> result;
	hw_uint<16> demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87_res = demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87_select(demosaic_FIFO_buf48, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_87_res);
	return result;
}

// load_to_demosaic_FIFO_buf4851_sm107_0185_write
//	demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42
inline void demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf4851_sm107_0185_write, demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int root, int demosaic_to_gp_64_ld50, int demosaic_to_gp_64_ld49, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_res = load_to_demosaic_FIFO_buf4851_sm107_0185_write.extract<0, 15>();
	demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_write(demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_42_res, demosaic_FIFO_buf48, root, demosaic_to_gp_64_ld50, demosaic_to_gp_64_ld49, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_sm94_0159_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39_cache {
	// RAM Box: {[0, 1079], [0, 1081]}
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
    // { load_to_demosaic_bx_to_gp_5811_sm114_0133[root = 0, demosaic_bx_ld10, demosaic_bx_ld9] -> demosaic_bx[demosaic_bx_ld9, demosaic_bx_ld10] : 0 <= demosaic_bx_ld10 <= 1081 and 0 <= demosaic_bx_ld9 <= 1079 }
  // # of banks: 1
  demosaic_bx_demosaic_bx_update_0_sm94_0159_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39_cache demosaic_bx_demosaic_bx_update_0_sm94_0159_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39;
};



inline void demosaic_bx_demosaic_bx_update_0_sm94_0159_99_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_sm94_0159_99, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm94_0159_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39.push(demosaic_bx_demosaic_bx_update_0_sm94_0159_99);
}

inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld10, int demosaic_bx_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39 read pattern: { load_to_demosaic_bx_to_gp_5811_sm114_0133[root = 0, demosaic_bx_ld10, demosaic_bx_ld9] -> demosaic_bx[demosaic_bx_ld9, demosaic_bx_ld10] : 0 <= demosaic_bx_ld10 <= 1081 and 0 <= demosaic_bx_ld9 <= 1079 }
  // Read schedule : { load_to_demosaic_bx_to_gp_5811_sm114_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_bx_update_0_sm94_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm94_0159_99 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm94_0159_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39.peek(/* one reader or all rams */ 0);
  return value_demosaic_bx_demosaic_bx_update_0_sm94_0159_99;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm94_0159_write
//	demosaic_bx_demosaic_bx_update_0_sm94_0159_99
inline void demosaic_bx_demosaic_bx_update_0_sm94_0159_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_sm94_0159_write, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_sm94_0159_99_res = demosaic_bx_update_0_sm94_0159_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_sm94_0159_99_write(demosaic_bx_demosaic_bx_update_0_sm94_0159_99_res, demosaic_bx, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
}

// load_to_demosaic_bx_to_gp_5811_sm114_0133_read
//	demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39
inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_read_bundle_read(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld10, int demosaic_bx_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39

	hw_uint<16> result;
	hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39_res = demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39_select(demosaic_bx, root, demosaic_bx_ld10, demosaic_bx_ld9, dynamic_address);
	set_at<0, 16>(result, demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_39_res);
	return result;
}

struct demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3_cache {
	// RAM Box: {[0, 1079], [0, 1081]}
	// Capacity: 2161
	// # of read delays: 3
  // 0, 1080, 2160
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1079> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1079> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1079() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1080() {
		return f2;
	}

	inline hw_uint<16> peek_2159() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_2160() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1079
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1079 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1079
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1079 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_FIFO_buf52_cache {
  // Reader addrs...
    // { demosaic_byb_update_0_sm95_0161[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
    // { demosaic_byb_update_0_sm95_0161[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
    // { demosaic_byb_update_0_sm95_0161[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // # of banks: 1
  demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3_cache demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3;
};



inline void demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_write(hw_uint<16>& demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40, demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_bx_to_gp_58_ld54, int demosaic_bx_to_gp_58_ld53, int dynamic_address) {
  demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3.push(demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40);
}

inline hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90_select(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90 read pattern: { demosaic_byb_update_0_sm95_0161[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0_sm95_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf5255_sm116_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  auto value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40 = demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3.peek_2160();
  return value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91_select(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91 read pattern: { demosaic_byb_update_0_sm95_0161[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0_sm95_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf5255_sm116_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  auto value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40 = demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3.peek_1080();
  return value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92_select(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92 read pattern: { demosaic_byb_update_0_sm95_0161[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf52[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0_sm95_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf5255_sm116_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  auto value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40 = demosaic_bx_FIFO_buf52.demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_merged_banks_3.peek_0();
  return value_demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm95_0161_read
//	demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90
//	demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91
//	demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92
inline hw_uint<48> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_read_bundle_read(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90
    // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91
    // demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92

	hw_uint<48> result;
	hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90_res = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90_select(demosaic_bx_FIFO_buf52, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_90_res);
	hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91_res = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91_select(demosaic_bx_FIFO_buf52, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_91_res);
	hw_uint<16> demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92_res = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92_select(demosaic_bx_FIFO_buf52, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_92_res);
	return result;
}

// load_to_demosaic_bx_FIFO_buf5255_sm116_0137_write
//	demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40
inline void demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_write_bundle_write(hw_uint<16>& load_to_demosaic_bx_FIFO_buf5255_sm116_0137_write, demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int root, int demosaic_bx_to_gp_58_ld54, int demosaic_bx_to_gp_58_ld53, int dynamic_address) {
	hw_uint<16> demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_res = load_to_demosaic_bx_FIFO_buf5255_sm116_0137_write.extract<0, 15>();
	demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_write(demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_40_res, demosaic_bx_FIFO_buf52, root, demosaic_bx_to_gp_58_ld54, demosaic_bx_to_gp_58_ld53, dynamic_address);
}

struct demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35_cache {
	// RAM Box: {[0, 1079], [0, 1081]}
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
    // { load_to_demosaic_bxb_to_gp_21215_sm110_0125[root = 0, demosaic_bxb_ld14, demosaic_bxb_ld13] -> demosaic_bxb[demosaic_bxb_ld13, demosaic_bxb_ld14] : 0 <= demosaic_bxb_ld14 <= 1081 and 0 <= demosaic_bxb_ld13 <= 1079 }
  // # of banks: 1
  demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35_cache demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35;
};



inline void demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35.push(demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95);
}

inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35_select(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld14, int demosaic_bxb_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35 read pattern: { load_to_demosaic_bxb_to_gp_21215_sm110_0125[root = 0, demosaic_bxb_ld14, demosaic_bxb_ld13] -> demosaic_bxb[demosaic_bxb_ld13, demosaic_bxb_ld14] : 0 <= demosaic_bxb_ld14 <= 1081 and 0 <= demosaic_bxb_ld13 <= 1079 }
  // Read schedule : { load_to_demosaic_bxb_to_gp_21215_sm110_0125[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 18] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_bxb_update_0_sm93_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm93_0157_write
//	demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95
inline void demosaic_bxb_demosaic_bxb_update_0_sm93_0157_write_bundle_write(hw_uint<16>& demosaic_bxb_update_0_sm93_0157_write, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_res = demosaic_bxb_update_0_sm93_0157_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_write(demosaic_bxb_demosaic_bxb_update_0_sm93_0157_95_res, demosaic_bxb, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
}

// load_to_demosaic_bxb_to_gp_21215_sm110_0125_read
//	demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35
inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld14, int demosaic_bxb_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35_res = demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35_select(demosaic_bxb, root, demosaic_bxb_ld14, demosaic_bxb_ld13, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_35_res);
	return result;
}

struct demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100_cache {
	// RAM Box: {[0, 1079], [0, 1081]}
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
    // { demosaic_bx_update_0_sm94_0159[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf56[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1079 }
  // # of banks: 1
  demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100_cache demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100;
};



inline void demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_write(hw_uint<16>& demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36, demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bxb_to_gp_212_ld58, int demosaic_bxb_to_gp_212_ld57, int dynamic_address) {
  demosaic_bxb_FIFO_buf56.demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100.push(demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36);
}

inline hw_uint<16> demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100_select(demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100 read pattern: { demosaic_bx_update_0_sm94_0159[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf56[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1079 }
  // Read schedule : { demosaic_bx_update_0_sm94_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_bxb_FIFO_buf5659_sm117_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
  auto value_demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36 = demosaic_bxb_FIFO_buf56.demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_to_demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm94_0159_read
//	demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100
inline hw_uint<16> demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_read_bundle_read(demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100_res = demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100_select(demosaic_bxb_FIFO_buf56, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_100_res);
	return result;
}

// load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_write
//	demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36
inline void demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_write_bundle_write(hw_uint<16>& load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_write, demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int root, int demosaic_bxb_to_gp_212_ld58, int demosaic_bxb_to_gp_212_ld57, int dynamic_address) {
	hw_uint<16> demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_res = load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_write.extract<0, 15>();
	demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_write(demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_36_res, demosaic_bxb_FIFO_buf56, root, demosaic_bxb_to_gp_212_ld58, demosaic_bxb_to_gp_212_ld57, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_sm96_0163_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31_cache {
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
    // { load_to_demosaic_by_to_gp_61619_sm106_0183[root = 0, demosaic_by_ld18, demosaic_by_ld17] -> demosaic_by[demosaic_by_ld17, demosaic_by_ld18] : 0 <= demosaic_by_ld18 <= 1079 and 0 <= demosaic_by_ld17 <= 1079 }
  // # of banks: 1
  demosaic_by_demosaic_by_update_0_sm96_0163_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31_cache demosaic_by_demosaic_by_update_0_sm96_0163_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31;
};



inline void demosaic_by_demosaic_by_update_0_sm96_0163_93_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_sm96_0163_93, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_sm96_0163_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31.push(demosaic_by_demosaic_by_update_0_sm96_0163_93);
}

inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31_select(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld18, int demosaic_by_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31 read pattern: { load_to_demosaic_by_to_gp_61619_sm106_0183[root = 0, demosaic_by_ld18, demosaic_by_ld17] -> demosaic_by[demosaic_by_ld17, demosaic_by_ld18] : 0 <= demosaic_by_ld18 <= 1079 and 0 <= demosaic_by_ld17 <= 1079 }
  // Read schedule : { load_to_demosaic_by_to_gp_61619_sm106_0183[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_by_update_0_sm96_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_sm96_0163_93 = demosaic_by.demosaic_by_demosaic_by_update_0_sm96_0163_93_to_demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_sm96_0163_93;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm96_0163_write
//	demosaic_by_demosaic_by_update_0_sm96_0163_93
inline void demosaic_by_demosaic_by_update_0_sm96_0163_write_bundle_write(hw_uint<16>& demosaic_by_update_0_sm96_0163_write, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_sm96_0163_93_res = demosaic_by_update_0_sm96_0163_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_sm96_0163_93_write(demosaic_by_demosaic_by_update_0_sm96_0163_93_res, demosaic_by, root, demosaic_by_0, demosaic_by_1, dynamic_address);
}

// load_to_demosaic_by_to_gp_61619_sm106_0183_read
//	demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31
inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_read_bundle_read(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld18, int demosaic_by_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31

	hw_uint<16> result;
	hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31_res = demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31_select(demosaic_by, root, demosaic_by_ld18, demosaic_by_ld17, dynamic_address);
	set_at<0, 16>(result, demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_31_res);
	return result;
}

struct demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88_cache {
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
    // { demosaic_diff_update_0_sm97_0165[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf60[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // # of banks: 1
  demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88_cache demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88;
};



inline void demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_write(hw_uint<16>& demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_by_to_gp_616_ld62, int demosaic_by_to_gp_616_ld61, int dynamic_address) {
  demosaic_by_FIFO_buf60.demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88.push(demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32);
}

inline hw_uint<16> demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88_select(demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88 read pattern: { demosaic_diff_update_0_sm97_0165[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf60[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0_sm97_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_by_FIFO_buf6063_sm118_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32 = demosaic_by_FIFO_buf60.demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_to_demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm97_0165_read
//	demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88
inline hw_uint<16> demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_read_bundle_read(demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88

	hw_uint<16> result;
	hw_uint<16> demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88_res = demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88_select(demosaic_by_FIFO_buf60, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_88_res);
	return result;
}

// load_to_demosaic_by_FIFO_buf6063_sm118_0141_write
//	demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32
inline void demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_write_bundle_write(hw_uint<16>& load_to_demosaic_by_FIFO_buf6063_sm118_0141_write, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int root, int demosaic_by_to_gp_616_ld62, int demosaic_by_to_gp_616_ld61, int dynamic_address) {
	hw_uint<16> demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_res = load_to_demosaic_by_FIFO_buf6063_sm118_0141_write.extract<0, 15>();
	demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_write(demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_32_res, demosaic_by_FIFO_buf60, root, demosaic_by_to_gp_616_ld62, demosaic_by_to_gp_616_ld61, dynamic_address);
}

struct demosaic_byb_demosaic_byb_update_0_sm95_0161_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27_cache {
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
    // { load_to_demosaic_byb_to_gp_42023_sm99_0169[root = 0, demosaic_byb_ld22, demosaic_byb_ld21] -> demosaic_byb[demosaic_byb_ld21, demosaic_byb_ld22] : 0 <= demosaic_byb_ld22 <= 1079 and 0 <= demosaic_byb_ld21 <= 1079 }
  // # of banks: 1
  demosaic_byb_demosaic_byb_update_0_sm95_0161_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27_cache demosaic_byb_demosaic_byb_update_0_sm95_0161_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27;
};



inline void demosaic_byb_demosaic_byb_update_0_sm95_0161_89_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_sm95_0161_89, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm95_0161_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27.push(demosaic_byb_demosaic_byb_update_0_sm95_0161_89);
}

inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27_select(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld22, int demosaic_byb_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27 read pattern: { load_to_demosaic_byb_to_gp_42023_sm99_0169[root = 0, demosaic_byb_ld22, demosaic_byb_ld21] -> demosaic_byb[demosaic_byb_ld21, demosaic_byb_ld22] : 0 <= demosaic_byb_ld22 <= 1079 and 0 <= demosaic_byb_ld21 <= 1079 }
  // Read schedule : { load_to_demosaic_byb_to_gp_42023_sm99_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_byb_update_0_sm95_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_sm95_0161_89 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm95_0161_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_sm95_0161_89;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm95_0161_write
//	demosaic_byb_demosaic_byb_update_0_sm95_0161_89
inline void demosaic_byb_demosaic_byb_update_0_sm95_0161_write_bundle_write(hw_uint<16>& demosaic_byb_update_0_sm95_0161_write, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_sm95_0161_89_res = demosaic_byb_update_0_sm95_0161_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_sm95_0161_89_write(demosaic_byb_demosaic_byb_update_0_sm95_0161_89_res, demosaic_byb, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
}

// load_to_demosaic_byb_to_gp_42023_sm99_0169_read
//	demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27
inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_read_bundle_read(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld22, int demosaic_byb_ld21, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27_res = demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27_select(demosaic_byb, root, demosaic_byb_ld22, demosaic_byb_ld21, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_27_res);
	return result;
}

struct demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94_cache {
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
    // { demosaic_by_update_0_sm96_0163[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf64[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1079 }
  // # of banks: 1
  demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94_cache demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94;
};



inline void demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_write(hw_uint<16>& demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28, demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_byb_to_gp_420_ld66, int demosaic_byb_to_gp_420_ld65, int dynamic_address) {
  demosaic_byb_FIFO_buf64.demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94.push(demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28);
}

inline hw_uint<16> demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94_select(demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94 read pattern: { demosaic_by_update_0_sm96_0163[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf64[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1079 }
  // Read schedule : { demosaic_by_update_0_sm96_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_byb_FIFO_buf6467_sm104_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28 = demosaic_byb_FIFO_buf64.demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_to_demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm96_0163_read
//	demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94
inline hw_uint<16> demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_read_bundle_read(demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94_res = demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94_select(demosaic_byb_FIFO_buf64, root, demosaic_by_0, demosaic_by_1, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_94_res);
	return result;
}

// load_to_demosaic_byb_FIFO_buf6467_sm104_0179_write
//	demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28
inline void demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_write_bundle_write(hw_uint<16>& load_to_demosaic_byb_FIFO_buf6467_sm104_0179_write, demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int root, int demosaic_byb_to_gp_420_ld66, int demosaic_byb_to_gp_420_ld65, int dynamic_address) {
	hw_uint<16> demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_res = load_to_demosaic_byb_FIFO_buf6467_sm104_0179_write.extract<0, 15>();
	demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_write(demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_28_res, demosaic_byb_FIFO_buf64, root, demosaic_byb_to_gp_420_ld66, demosaic_byb_to_gp_420_ld65, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_sm97_0165_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23_cache {
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
    // { load_to_demosaic_diff_to_gp_02427_sm111_0127[root = 0, demosaic_diff_ld26, demosaic_diff_ld25] -> demosaic_diff[demosaic_diff_ld25, demosaic_diff_ld26] : 0 <= demosaic_diff_ld26 <= 1079 and 0 <= demosaic_diff_ld25 <= 1079 }
  // # of banks: 1
  demosaic_diff_demosaic_diff_update_0_sm97_0165_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23_cache demosaic_diff_demosaic_diff_update_0_sm97_0165_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23;
};



inline void demosaic_diff_demosaic_diff_update_0_sm97_0165_86_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_sm97_0165_86, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm97_0165_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23.push(demosaic_diff_demosaic_diff_update_0_sm97_0165_86);
}

inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23_select(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld26, int demosaic_diff_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23 read pattern: { load_to_demosaic_diff_to_gp_02427_sm111_0127[root = 0, demosaic_diff_ld26, demosaic_diff_ld25] -> demosaic_diff[demosaic_diff_ld25, demosaic_diff_ld26] : 0 <= demosaic_diff_ld26 <= 1079 and 0 <= demosaic_diff_ld25 <= 1079 }
  // Read schedule : { load_to_demosaic_diff_to_gp_02427_sm111_0127[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { demosaic_diff_update_0_sm97_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_sm97_0165_86 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm97_0165_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_sm97_0165_86;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm97_0165_write
//	demosaic_diff_demosaic_diff_update_0_sm97_0165_86
inline void demosaic_diff_demosaic_diff_update_0_sm97_0165_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_sm97_0165_write, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_sm97_0165_86_res = demosaic_diff_update_0_sm97_0165_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_sm97_0165_86_write(demosaic_diff_demosaic_diff_update_0_sm97_0165_86_res, demosaic_diff, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
}

// load_to_demosaic_diff_to_gp_02427_sm111_0127_read
//	demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23
inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_read_bundle_read(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld26, int demosaic_diff_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23_res = demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23_select(demosaic_diff, root, demosaic_diff_ld26, demosaic_diff_ld25, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_23_res);
	return result;
}

struct demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102_cache {
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
    // { cp_1_update_0_sm98_0167[root = 0, cp_1_0, cp_1_1] -> demosaic_diff_FIFO_buf68[cp_1_1, cp_1_0] : 0 <= cp_1_0 <= 1079 and 0 <= cp_1_1 <= 1079 }
  // # of banks: 1
  demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102_cache demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102;
};



inline void demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_write(hw_uint<16>& demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24, demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int demosaic_diff_to_gp_024_ld70, int demosaic_diff_to_gp_024_ld69, int dynamic_address) {
  demosaic_diff_FIFO_buf68.demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102.push(demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24);
}

inline hw_uint<16> demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102_select(demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int cp_1_0, int cp_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102 read pattern: { cp_1_update_0_sm98_0167[root = 0, cp_1_0, cp_1_1] -> demosaic_diff_FIFO_buf68[cp_1_1, cp_1_0] : 0 <= cp_1_0 <= 1079 and 0 <= cp_1_1 <= 1079 }
  // Read schedule : { cp_1_update_0_sm98_0167[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  // Write schedule: { load_to_demosaic_diff_FIFO_buf6871_sm119_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
  auto value_demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24 = demosaic_diff_FIFO_buf68.demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_to_demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24;
  return 0;
}

// # of bundles = 2
// cp_1_update_0_sm98_0167_read
//	demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102
inline hw_uint<16> demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_read_bundle_read(demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int cp_1_0, int cp_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102_res = demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102_select(demosaic_diff_FIFO_buf68, root, cp_1_0, cp_1_1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_102_res);
	return result;
}

// load_to_demosaic_diff_FIFO_buf6871_sm119_0143_write
//	demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24
inline void demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_write_bundle_write(hw_uint<16>& load_to_demosaic_diff_FIFO_buf6871_sm119_0143_write, demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int root, int demosaic_diff_to_gp_024_ld70, int demosaic_diff_to_gp_024_ld69, int dynamic_address) {
	hw_uint<16> demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_res = load_to_demosaic_diff_FIFO_buf6871_sm119_0143_write.extract<0, 15>();
	demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_write(demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_24_res, demosaic_diff_FIFO_buf68, root, demosaic_diff_to_gp_024_ld70, demosaic_diff_to_gp_024_ld69, dynamic_address);
}

struct demosaicb_demosaicb_update_0_sm91_0153_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15_cache {
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
    // { load_to_demosaicb_to_gp_12831_sm115_0135[root = 0, demosaicb_ld30, demosaicb_ld29] -> demosaicb[demosaicb_ld29, demosaicb_ld30] : 0 <= demosaicb_ld30 <= 1081 and 0 <= demosaicb_ld29 <= 1081 }
  // # of banks: 1
  demosaicb_demosaicb_update_0_sm91_0153_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15_cache demosaicb_demosaicb_update_0_sm91_0153_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15;
};



inline void demosaicb_demosaicb_update_0_sm91_0153_74_write(hw_uint<16>& demosaicb_demosaicb_update_0_sm91_0153_74, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_sm91_0153_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15.push(demosaicb_demosaicb_update_0_sm91_0153_74);
}

inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15_select(demosaicb_cache& demosaicb, int root, int demosaicb_ld30, int demosaicb_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15 read pattern: { load_to_demosaicb_to_gp_12831_sm115_0135[root = 0, demosaicb_ld30, demosaicb_ld29] -> demosaicb[demosaicb_ld29, demosaicb_ld30] : 0 <= demosaicb_ld30 <= 1081 and 0 <= demosaicb_ld29 <= 1081 }
  // Read schedule : { load_to_demosaicb_to_gp_12831_sm115_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_sm91_0153_74 = demosaicb.demosaicb_demosaicb_update_0_sm91_0153_74_to_demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_sm91_0153_74;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm91_0153_write
//	demosaicb_demosaicb_update_0_sm91_0153_74
inline void demosaicb_demosaicb_update_0_sm91_0153_write_bundle_write(hw_uint<16>& demosaicb_update_0_sm91_0153_write, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_sm91_0153_74_res = demosaicb_update_0_sm91_0153_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_sm91_0153_74_write(demosaicb_demosaicb_update_0_sm91_0153_74_res, demosaicb, root, demosaicb_0, demosaicb_1, dynamic_address);
}

// load_to_demosaicb_to_gp_12831_sm115_0135_read
//	demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15
inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_read_bundle_read(demosaicb_cache& demosaicb, int root, int demosaicb_ld30, int demosaicb_ld29, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15

	hw_uint<16> result;
	hw_uint<16> demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15_res = demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15_select(demosaicb, root, demosaicb_ld30, demosaicb_ld29, dynamic_address);
	set_at<0, 16>(result, demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_15_res);
	return result;
}

struct demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85_cache {
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
    // { demosaic_update_0_sm92_0155[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf72[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1081 }
  // # of banks: 1
  demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85_cache demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85;
};



inline void demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_write(hw_uint<16>& demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16, demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaicb_to_gp_128_ld74, int demosaicb_to_gp_128_ld73, int dynamic_address) {
  demosaicb_FIFO_buf72.demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85.push(demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16);
}

inline hw_uint<16> demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85_select(demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85 read pattern: { demosaic_update_0_sm92_0155[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf72[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1081 }
  // Read schedule : { demosaic_update_0_sm92_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_demosaicb_FIFO_buf7275_sm120_0145[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  auto value_demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16 = demosaicb_FIFO_buf72.demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_to_demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85.peek(/* one reader or all rams */ 0);
  return value_demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_sm92_0155_read
//	demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85
inline hw_uint<16> demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_read_bundle_read(demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85

	hw_uint<16> result;
	hw_uint<16> demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85_res = demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85_select(demosaicb_FIFO_buf72, root, demosaic_0, demosaic_1, dynamic_address);
	set_at<0, 16>(result, demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_85_res);
	return result;
}

// load_to_demosaicb_FIFO_buf7275_sm120_0145_write
//	demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16
inline void demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_write_bundle_write(hw_uint<16>& load_to_demosaicb_FIFO_buf7275_sm120_0145_write, demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int root, int demosaicb_to_gp_128_ld74, int demosaicb_to_gp_128_ld73, int dynamic_address) {
	hw_uint<16> demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_res = load_to_demosaicb_FIFO_buf7275_sm120_0145_write.extract<0, 15>();
	demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_write(demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_16_res, demosaicb_FIFO_buf72, root, demosaicb_to_gp_128_ld74, demosaicb_to_gp_128_ld73, dynamic_address);
}

struct denoise_denoise_update_0_sm90_0151_72_to_denoise_load_to_denoise_to_gp_73235_sm100_0171_11_cache {
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
    // { load_to_denoise_to_gp_73235_sm100_0171[root = 0, denoise_ld34, denoise_ld33] -> denoise[denoise_ld33, denoise_ld34] : 0 <= denoise_ld34 <= 1083 and 0 <= denoise_ld33 <= 1083 }
  // # of banks: 1
  denoise_denoise_update_0_sm90_0151_72_to_denoise_load_to_denoise_to_gp_73235_sm100_0171_11_cache denoise_denoise_update_0_sm90_0151_72_to_denoise_load_to_denoise_to_gp_73235_sm100_0171_11;
};



inline void denoise_denoise_update_0_sm90_0151_72_write(hw_uint<16>& denoise_denoise_update_0_sm90_0151_72, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
  denoise.denoise_denoise_update_0_sm90_0151_72_to_denoise_load_to_denoise_to_gp_73235_sm100_0171_11.push(denoise_denoise_update_0_sm90_0151_72);
}

inline hw_uint<16> denoise_load_to_denoise_to_gp_73235_sm100_0171_11_select(denoise_cache& denoise, int root, int denoise_ld34, int denoise_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_load_to_denoise_to_gp_73235_sm100_0171_11 read pattern: { load_to_denoise_to_gp_73235_sm100_0171[root = 0, denoise_ld34, denoise_ld33] -> denoise[denoise_ld33, denoise_ld34] : 0 <= denoise_ld34 <= 1083 and 0 <= denoise_ld33 <= 1083 }
  // Read schedule : { load_to_denoise_to_gp_73235_sm100_0171[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { denoise_update_0_sm90_0151[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_denoise_update_0_sm90_0151_72 = denoise.denoise_denoise_update_0_sm90_0151_72_to_denoise_load_to_denoise_to_gp_73235_sm100_0171_11.peek(/* one reader or all rams */ 0);
  return value_denoise_denoise_update_0_sm90_0151_72;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm90_0151_write
//	denoise_denoise_update_0_sm90_0151_72
inline void denoise_denoise_update_0_sm90_0151_write_bundle_write(hw_uint<16>& denoise_update_0_sm90_0151_write, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_sm90_0151_72_res = denoise_update_0_sm90_0151_write.extract<0, 15>();
	denoise_denoise_update_0_sm90_0151_72_write(denoise_denoise_update_0_sm90_0151_72_res, denoise, root, denoise_0, denoise_1, dynamic_address);
}

// load_to_denoise_to_gp_73235_sm100_0171_read
//	denoise_load_to_denoise_to_gp_73235_sm100_0171_11
inline hw_uint<16> denoise_load_to_denoise_to_gp_73235_sm100_0171_read_bundle_read(denoise_cache& denoise, int root, int denoise_ld34, int denoise_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise_load_to_denoise_to_gp_73235_sm100_0171_11

	hw_uint<16> result;
	hw_uint<16> denoise_load_to_denoise_to_gp_73235_sm100_0171_11_res = denoise_load_to_denoise_to_gp_73235_sm100_0171_11_select(denoise, root, denoise_ld34, denoise_ld33, dynamic_address);
	set_at<0, 16>(result, denoise_load_to_denoise_to_gp_73235_sm100_0171_11_res);
	return result;
}

struct denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9_cache {
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
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
    // { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // # of banks: 1
  denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9_cache denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9;
};



inline void denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_write(hw_uint<16>& denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12, denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int denoise_to_gp_732_ld78, int denoise_to_gp_732_ld77, int dynamic_address) {
  denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.push(denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12);
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_2170();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_1086();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_2();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_2169();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_1085();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_1();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_2168();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_1084();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83_select(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83 read pattern: { demosaicb_update_0_sm91_0153[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf76[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1081 }
  // Read schedule : { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
  // Write schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12 = denoise_FIFO_buf76.denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_merged_banks_9.peek_0();
  return value_denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm91_0153_read
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82
//	denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83
inline hw_uint<144> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_read_bundle_read(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  // # of ports in bundle: 9
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82
    // denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83

	hw_uint<144> result;
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<0, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_75_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<16, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_76_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<32, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_77_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<48, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_78_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<64, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_79_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<80, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_80_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<96, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_81_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<112, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_82_res);
	hw_uint<16> denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83_res = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83_select(denoise_FIFO_buf76, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<128, 144>(result, denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_83_res);
	return result;
}

// load_to_denoise_FIFO_buf7679_sm105_0181_write
//	denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12
inline void denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_write_bundle_write(hw_uint<16>& load_to_denoise_FIFO_buf7679_sm105_0181_write, denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int root, int denoise_to_gp_732_ld78, int denoise_to_gp_732_ld77, int dynamic_address) {
	hw_uint<16> denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_res = load_to_denoise_FIFO_buf7679_sm105_0181_write.extract<0, 15>();
	denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_write(denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_12_res, denoise_FIFO_buf76, root, denoise_to_gp_732_ld78, denoise_to_gp_732_ld77, dynamic_address);
}

struct denoiseb_denoiseb_update_0_sm89_0149_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7_cache {
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
    // { load_to_denoiseb_to_gp_83639_sm101_0173[root = 0, denoiseb_ld38, denoiseb_ld37] -> denoiseb[denoiseb_ld37, denoiseb_ld38] : 0 <= denoiseb_ld38 <= 1083 and 0 <= denoiseb_ld37 <= 1083 }
  // # of banks: 1
  denoiseb_denoiseb_update_0_sm89_0149_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7_cache denoiseb_denoiseb_update_0_sm89_0149_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7;
};



inline void denoiseb_denoiseb_update_0_sm89_0149_46_write(hw_uint<16>& denoiseb_denoiseb_update_0_sm89_0149_46, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_sm89_0149_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7.push(denoiseb_denoiseb_update_0_sm89_0149_46);
}

inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7_select(denoiseb_cache& denoiseb, int root, int denoiseb_ld38, int denoiseb_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7 read pattern: { load_to_denoiseb_to_gp_83639_sm101_0173[root = 0, denoiseb_ld38, denoiseb_ld37] -> denoiseb[denoiseb_ld37, denoiseb_ld38] : 0 <= denoiseb_ld38 <= 1083 and 0 <= denoiseb_ld37 <= 1083 }
  // Read schedule : { load_to_denoiseb_to_gp_83639_sm101_0173[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoiseb_denoiseb_update_0_sm89_0149_46 = denoiseb.denoiseb_denoiseb_update_0_sm89_0149_46_to_denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_sm89_0149_46;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm89_0149_write
//	denoiseb_denoiseb_update_0_sm89_0149_46
inline void denoiseb_denoiseb_update_0_sm89_0149_write_bundle_write(hw_uint<16>& denoiseb_update_0_sm89_0149_write, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_sm89_0149_46_res = denoiseb_update_0_sm89_0149_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_sm89_0149_46_write(denoiseb_denoiseb_update_0_sm89_0149_46_res, denoiseb, root, denoiseb_0, denoiseb_1, dynamic_address);
}

// load_to_denoiseb_to_gp_83639_sm101_0173_read
//	denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7
inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_read_bundle_read(denoiseb_cache& denoiseb, int root, int denoiseb_ld38, int denoiseb_ld37, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7

	hw_uint<16> result;
	hw_uint<16> denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7_res = denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7_select(denoiseb, root, denoiseb_ld38, denoiseb_ld37, dynamic_address);
	set_at<0, 16>(result, denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_7_res);
	return result;
}

struct denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73_cache {
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
    // { denoise_update_0_sm90_0151[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf80[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1083 }
  // # of banks: 1
  denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73_cache denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73;
};



inline void denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_write(hw_uint<16>& denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8, denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoiseb_to_gp_836_ld82, int denoiseb_to_gp_836_ld81, int dynamic_address) {
  denoiseb_FIFO_buf80.denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73.push(denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8);
}

inline hw_uint<16> denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73_select(denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoise_0, int denoise_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73 read pattern: { denoise_update_0_sm90_0151[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf80[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1083 }
  // Read schedule : { denoise_update_0_sm90_0151[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_denoiseb_FIFO_buf8083_sm109_0123[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  auto value_denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8 = denoiseb_FIFO_buf80.denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_to_denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73.peek(/* one reader or all rams */ 0);
  return value_denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm90_0151_read
//	denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73
inline hw_uint<16> denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_read_bundle_read(denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoise_0, int denoise_1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73

	hw_uint<16> result;
	hw_uint<16> denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73_res = denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73_select(denoiseb_FIFO_buf80, root, denoise_0, denoise_1, dynamic_address);
	set_at<0, 16>(result, denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_73_res);
	return result;
}

// load_to_denoiseb_FIFO_buf8083_sm109_0123_write
//	denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8
inline void denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_write_bundle_write(hw_uint<16>& load_to_denoiseb_FIFO_buf8083_sm109_0123_write, denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int root, int denoiseb_to_gp_836_ld82, int denoiseb_to_gp_836_ld81, int dynamic_address) {
	hw_uint<16> denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_res = load_to_denoiseb_FIFO_buf8083_sm109_0123_write.extract<0, 15>();
	denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_write(denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_8_res, denoiseb_FIFO_buf80, root, denoiseb_to_gp_836_ld82, denoiseb_to_gp_836_ld81, dynamic_address);
}

struct raw_raw_update_0_sm88_0147_0_to_raw_load_to_raw_to_gp_94043_sm102_0175_3_cache {
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
    // { load_to_raw_to_gp_94043_sm102_0175[root = 0, raw_ld42, raw_ld41] -> raw[raw_ld41, raw_ld42] : 0 <= raw_ld42 <= 1087 and 0 <= raw_ld41 <= 1087 }
  // # of banks: 1
  raw_raw_update_0_sm88_0147_0_to_raw_load_to_raw_to_gp_94043_sm102_0175_3_cache raw_raw_update_0_sm88_0147_0_to_raw_load_to_raw_to_gp_94043_sm102_0175_3;
};



inline void raw_raw_update_0_sm88_0147_0_write(hw_uint<16>& raw_raw_update_0_sm88_0147_0, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
  raw.raw_raw_update_0_sm88_0147_0_to_raw_load_to_raw_to_gp_94043_sm102_0175_3.push(raw_raw_update_0_sm88_0147_0);
}

inline hw_uint<16> raw_load_to_raw_to_gp_94043_sm102_0175_3_select(raw_cache& raw, int root, int raw_ld42, int raw_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_load_to_raw_to_gp_94043_sm102_0175_3 read pattern: { load_to_raw_to_gp_94043_sm102_0175[root = 0, raw_ld42, raw_ld41] -> raw[raw_ld41, raw_ld42] : 0 <= raw_ld42 <= 1087 and 0 <= raw_ld41 <= 1087 }
  // Read schedule : { load_to_raw_to_gp_94043_sm102_0175[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  // Write schedule: { raw_update_0_sm88_0147[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_raw_update_0_sm88_0147_0 = raw.raw_raw_update_0_sm88_0147_0_to_raw_load_to_raw_to_gp_94043_sm102_0175_3.peek(/* one reader or all rams */ 0);
  return value_raw_raw_update_0_sm88_0147_0;
  return 0;
}

// # of bundles = 2
// load_to_raw_to_gp_94043_sm102_0175_read
//	raw_load_to_raw_to_gp_94043_sm102_0175_3
inline hw_uint<16> raw_load_to_raw_to_gp_94043_sm102_0175_read_bundle_read(raw_cache& raw, int root, int raw_ld42, int raw_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // raw_load_to_raw_to_gp_94043_sm102_0175_3

	hw_uint<16> result;
	hw_uint<16> raw_load_to_raw_to_gp_94043_sm102_0175_3_res = raw_load_to_raw_to_gp_94043_sm102_0175_3_select(raw, root, raw_ld42, raw_ld41, dynamic_address);
	set_at<0, 16>(result, raw_load_to_raw_to_gp_94043_sm102_0175_3_res);
	return result;
}

// raw_update_0_sm88_0147_write
//	raw_raw_update_0_sm88_0147_0
inline void raw_raw_update_0_sm88_0147_write_bundle_write(hw_uint<16>& raw_update_0_sm88_0147_write, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_sm88_0147_0_res = raw_update_0_sm88_0147_write.extract<0, 15>();
	raw_raw_update_0_sm88_0147_0_write(raw_raw_update_0_sm88_0147_0_res, raw, root, raw_0, raw_1, dynamic_address);
}

struct raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25_cache {
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
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
    // { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // # of banks: 1
  raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25_cache raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25;
};



inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_write(hw_uint<16>& raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_940_ld86, int raw_to_gp_940_ld85, int dynamic_address) {
  raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.push(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4);
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_4356();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_3268();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_2180();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_1092();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_4();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_4355();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_3267();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_2179();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_1091();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_3();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_4354();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_3266();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_2178();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_1090();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_2();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_4353();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_3265();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_2177();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_1089();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_1();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_4352();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_3264();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_2176();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_1088();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71 read pattern: { denoiseb_update_0_sm89_0149[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1083 }
  // Read schedule : { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_merged_banks_25.peek_0();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm89_0149_read
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70
//	raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71
inline hw_uint<400> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_read_bundle_read(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  // # of ports in bundle: 25
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70
    // raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71

	hw_uint<400> result;
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<0, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_47_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<16, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_48_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<32, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_49_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<48, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_50_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<64, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_51_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<80, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_52_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<96, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_53_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<112, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_54_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<128, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_55_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<144, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_56_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<160, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_57_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<176, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_58_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<192, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_59_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<208, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_60_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<224, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_61_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<240, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_62_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<256, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_63_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<272, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_64_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<288, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_65_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<304, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_66_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<320, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_67_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<336, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_68_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<352, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_69_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<368, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_70_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71_res = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<384, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm89_0149_71_res);
	return result;
}

// load_to_raw_FIFO_buf8487_sm108_0121_write
//	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4
inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_write_bundle_write(hw_uint<16>& load_to_raw_FIFO_buf8487_sm108_0121_write, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_940_ld86, int raw_to_gp_940_ld85, int dynamic_address) {
	hw_uint<16> raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_res = load_to_raw_FIFO_buf8487_sm108_0121_write.extract<0, 15>();
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_write(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_4_res, raw_FIFO_buf84, root, raw_to_gp_940_ld86, raw_to_gp_940_ld85, dynamic_address);
}

// Operation logic
inline void cp_1_update_0_sm98_0167(demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */cp_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_FIFO_buf68
	auto demosaic_diff_FIFO_buf68_1_m__lp_1_m_cp_1_1__p__0_rp___p__0_p_0_c_____1_m_cp_1_0__p__0_p_0_value = demosaic_diff_FIFO_buf68_cp_1_update_0_sm98_0167_read_bundle_read(demosaic_diff_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp_1_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_1_m__lp_1_m_cp_1_1__p__0_rp___p__0_p_0_c_____1_m_cp_1_0__p__0_p_0_value);
	// Produce: cp_1
	cp_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_diff_FIFO_buf6871_sm119_0143(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_024, demosaic_diff_FIFO_buf68_cache& demosaic_diff_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_to_gp_024
	auto demosaic_diff_to_gp_024__lp_1_m_demosaic_diff_to_gp_024_ld69__p__0_rp__c____demosaic_diff_to_gp_024_ld70_value = demosaic_diff_to_gp_024.read();
	// Produce: demosaic_diff_FIFO_buf68
	demosaic_diff_FIFO_buf68_load_to_demosaic_diff_FIFO_buf6871_sm119_0143_write_bundle_write(/* arg names */demosaic_diff_to_gp_024__lp_1_m_demosaic_diff_to_gp_024_ld69__p__0_rp__c____demosaic_diff_to_gp_024_ld70_value, demosaic_diff_FIFO_buf68, d0, d1, d2, 0);

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

// schedule: { cp_1_update_0_sm98_0167[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_diff_FIFO_buf6871_sm119_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { cp_1_update_0_sm98_0167[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for cp_1_update_0_sm98_0167(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_FIFO_buf6871_sm119_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_diff_FIFO_buf6871_sm119_0143(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 31 <= i3 <= 32 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_diff_FIFO_buf6871_sm119_0143(demosaic_diff_to_gp_024 /* buf name */, demosaic_diff_FIFO_buf68, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          cp_1_update_0_sm98_0167(demosaic_diff_FIFO_buf68 /* buf name */, cp_1, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void demosaic_update_0_sm92_0155(demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, demosaic_cache& demosaic, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_FIFO_buf72
	auto demosaicb_FIFO_buf72_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value = demosaicb_FIFO_buf72_demosaic_update_0_sm92_0155_read_bundle_read(demosaicb_FIFO_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_sm92_0155_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_647_sm113_0131(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld5__p__0_rp__c____demosaic_ld6_value = demosaic_load_to_demosaic_to_gp_647_sm113_0131_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_64
	demosaic_to_gp_64.write(demosaic__lp_1_m_demosaic_ld5__p__0_rp__c____demosaic_ld6_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_303_sm112_0129(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value = demosaic_load_to_demosaic_to_gp_303_sm112_0129_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_30
	demosaic_to_gp_30.write(demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaicb_FIFO_buf7275_sm120_0145(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_128, demosaicb_FIFO_buf72_cache& demosaicb_FIFO_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_to_gp_128
	auto demosaicb_to_gp_128__lp_1_m_demosaicb_to_gp_128_ld73__p__0_rp__c____demosaicb_to_gp_128_ld74_value = demosaicb_to_gp_128.read();
	// Produce: demosaicb_FIFO_buf72
	demosaicb_FIFO_buf72_load_to_demosaicb_FIFO_buf7275_sm120_0145_write_bundle_write(/* arg names */demosaicb_to_gp_128__lp_1_m_demosaicb_to_gp_128_ld73__p__0_rp__c____demosaicb_to_gp_128_ld74_value, demosaicb_FIFO_buf72, d0, d1, d2, 0);

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

// schedule: { load_to_demosaic_to_gp_303_sm112_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_demosaic_to_gp_647_sm113_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaicb_FIFO_buf7275_sm120_0145[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; demosaic_update_0_sm92_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_demosaic_to_gp_303_sm112_0129[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_to_gp_303_sm112_0129(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_to_gp_647_sm113_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_to_gp_647_sm113_0131(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1085 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaicb_FIFO_buf7275_sm120_0145[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaicb_FIFO_buf7275_sm120_0145(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_update_0_sm92_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for demosaic_update_0_sm92_0155(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087 and 11 <= i3 <= 13; [0, i1, i2, 15] : 6 <= i1 <= 1085 and 8 <= i2 <= 1087 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaicb_FIFO_buf7275_sm120_0145(demosaicb_to_gp_128 /* buf name */, demosaicb_FIFO_buf72, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_update_0_sm92_0155(demosaicb_FIFO_buf72 /* buf name */, demosaic, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_to_gp_303_sm112_0129(demosaic /* buf name */, demosaic_to_gp_30, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 <= 1085 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 <= 1085 and i2 >= 8 }
	          // { [i0, i1, i2] : 1085 - i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((1085 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_to_gp_647_sm113_0131(demosaic /* buf name */, demosaic_to_gp_64, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void raw_update_0_sm88_0147(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value);
	// Produce: raw
	raw_raw_update_0_sm88_0147_write_bundle_write(/* arg names */compute_result, raw, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_raw_to_gp_94043_sm102_0175(raw_cache& raw, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_940, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw
	auto raw__lp_1_m_raw_ld41__p__0_rp__c____raw_ld42_value = raw_load_to_raw_to_gp_94043_sm102_0175_read_bundle_read(raw/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: raw_to_gp_940
	raw_to_gp_940.write(raw__lp_1_m_raw_ld41__p__0_rp__c____raw_ld42_value);

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

// schedule: { load_to_raw_to_gp_94043_sm102_0175[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087; raw_update_0_sm88_0147[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
//   { load_to_raw_to_gp_94043_sm102_0175[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
// Condition for load_to_raw_to_gp_94043_sm102_0175(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { raw_update_0_sm88_0147[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
// Condition for raw_update_0_sm88_0147(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1087 and 0 <= i2 <= 1087 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          raw_update_0_sm88_0147(raw_oc /* buf name */, raw, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_to_gp_94043_sm102_0175(raw /* buf name */, raw_to_gp_940, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bxb_FIFO_buf5659_sm117_0139(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_212, demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_to_gp_212
	auto demosaic_bxb_to_gp_212__lp_1_m_demosaic_bxb_to_gp_212_ld57__p__0_rp__c____demosaic_bxb_to_gp_212_ld58_value = demosaic_bxb_to_gp_212.read();
	// Produce: demosaic_bxb_FIFO_buf56
	demosaic_bxb_FIFO_buf56_load_to_demosaic_bxb_FIFO_buf5659_sm117_0139_write_bundle_write(/* arg names */demosaic_bxb_to_gp_212__lp_1_m_demosaic_bxb_to_gp_212_ld57__p__0_rp__c____demosaic_bxb_to_gp_212_ld58_value, demosaic_bxb_FIFO_buf56, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0_sm94_0159(demosaic_bxb_FIFO_buf56_cache& demosaic_bxb_FIFO_buf56, demosaic_bx_cache& demosaic_bx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_FIFO_buf56
	auto demosaic_bxb_FIFO_buf56_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value = demosaic_bxb_FIFO_buf56_demosaic_bx_update_0_sm94_0159_read_bundle_read(demosaic_bxb_FIFO_buf56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_sm94_0159_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bx_to_gp_5811_sm114_0133(demosaic_bx_cache& demosaic_bx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_58, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx__lp_1_m_demosaic_bx_ld9__p__0_rp__c____demosaic_bx_ld10_value = demosaic_bx_load_to_demosaic_bx_to_gp_5811_sm114_0133_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bx_to_gp_58
	demosaic_bx_to_gp_58.write(demosaic_bx__lp_1_m_demosaic_bx_ld9__p__0_rp__c____demosaic_bx_ld10_value);

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

// schedule: { load_to_demosaic_bxb_FIFO_buf5659_sm117_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079; demosaic_bx_update_0_sm94_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079; load_to_demosaic_bx_to_gp_5811_sm114_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
//   { load_to_demosaic_bxb_FIFO_buf5659_sm117_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_bxb_FIFO_buf5659_sm117_0139(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_bx_update_0_sm94_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
// Condition for demosaic_bx_update_0_sm94_0159(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_bx_to_gp_5811_sm114_0133[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_bx_to_gp_5811_sm114_0133(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 8 <= i2 <= 1087 and 19 <= i3 <= 21 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bxb_FIFO_buf5659_sm117_0139(demosaic_bxb_to_gp_212 /* buf name */, demosaic_bxb_FIFO_buf56, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_bx_update_0_sm94_0159(demosaic_bxb_FIFO_buf56 /* buf name */, demosaic_bx, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_to_gp_5811_sm114_0133(demosaic_bx /* buf name */, demosaic_bx_to_gp_58, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf4447_sm103_0177(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_30
	auto demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld45__p__0_rp__c____demosaic_to_gp_30_ld46_value = demosaic_to_gp_30.read();
	// Produce: demosaic_FIFO_buf44
	demosaic_FIFO_buf44_load_to_demosaic_FIFO_buf4447_sm103_0177_write_bundle_write(/* arg names */demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld45__p__0_rp__c____demosaic_to_gp_30_ld46_value, demosaic_FIFO_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bxb_update_0_sm93_0157(demosaic_FIFO_buf44_cache& demosaic_FIFO_buf44, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf44
	auto demosaic_FIFO_buf44_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value = demosaic_FIFO_buf44_demosaic_bxb_update_0_sm93_0157_read_bundle_read(demosaic_FIFO_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_sm93_0157_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bxb_to_gp_21215_sm110_0125(demosaic_bxb_cache& demosaic_bxb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_212, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb__lp_1_m_demosaic_bxb_ld13__p__0_rp__c____demosaic_bxb_ld14_value = demosaic_bxb_load_to_demosaic_bxb_to_gp_21215_sm110_0125_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, d2, 0);

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

// schedule: { load_to_demosaic_bxb_to_gp_21215_sm110_0125[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 18] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079; load_to_demosaic_FIFO_buf4447_sm103_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; demosaic_bxb_update_0_sm93_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
//   { load_to_demosaic_bxb_to_gp_21215_sm110_0125[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 18] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_bxb_to_gp_21215_sm110_0125(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_FIFO_buf4447_sm103_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaic_FIFO_buf4447_sm103_0177(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_bxb_update_0_sm93_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
// Condition for demosaic_bxb_update_0_sm93_0157(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 18] : 6 <= i1 <= 1087 and 8 <= i2 <= 1087; [0, i1, i2, 16] : 6 <= i1 <= 1087 and 8 <= i2 <= 1087; [0, i1, i2, 14] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_FIFO_buf4447_sm103_0177(demosaic_to_gp_30 /* buf name */, demosaic_FIFO_buf44, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          demosaic_bxb_update_0_sm93_0157(demosaic_FIFO_buf44 /* buf name */, demosaic_bxb, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_bxb_to_gp_21215_sm110_0125(demosaic_bxb /* buf name */, demosaic_bxb_to_gp_212, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_byb_FIFO_buf6467_sm104_0179(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_420, demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_to_gp_420
	auto demosaic_byb_to_gp_420__lp_1_m_demosaic_byb_to_gp_420_ld65__p__0_rp__c____demosaic_byb_to_gp_420_ld66_value = demosaic_byb_to_gp_420.read();
	// Produce: demosaic_byb_FIFO_buf64
	demosaic_byb_FIFO_buf64_load_to_demosaic_byb_FIFO_buf6467_sm104_0179_write_bundle_write(/* arg names */demosaic_byb_to_gp_420__lp_1_m_demosaic_byb_to_gp_420_ld65__p__0_rp__c____demosaic_byb_to_gp_420_ld66_value, demosaic_byb_FIFO_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0_sm96_0163(demosaic_byb_FIFO_buf64_cache& demosaic_byb_FIFO_buf64, demosaic_by_cache& demosaic_by, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_FIFO_buf64
	auto demosaic_byb_FIFO_buf64_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value = demosaic_byb_FIFO_buf64_demosaic_by_update_0_sm96_0163_read_bundle_read(demosaic_byb_FIFO_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_sm96_0163_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_to_gp_61619_sm106_0183(demosaic_by_cache& demosaic_by, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_616, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by
	auto demosaic_by__lp_1_m_demosaic_by_ld17__p__0_rp__c____demosaic_by_ld18_value = demosaic_by_load_to_demosaic_by_to_gp_61619_sm106_0183_read_bundle_read(demosaic_by/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_by_to_gp_616
	demosaic_by_to_gp_616.write(demosaic_by__lp_1_m_demosaic_by_ld17__p__0_rp__c____demosaic_by_ld18_value);

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

// schedule: { load_to_demosaic_byb_FIFO_buf6467_sm104_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_by_to_gp_61619_sm106_0183[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; demosaic_by_update_0_sm96_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { load_to_demosaic_byb_FIFO_buf6467_sm104_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_byb_FIFO_buf6467_sm104_0179(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_to_gp_61619_sm106_0183[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_by_to_gp_61619_sm106_0183(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_by_update_0_sm96_0163[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for demosaic_by_update_0_sm96_0163(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 25 <= i3 <= 27 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_byb_FIFO_buf6467_sm104_0179(demosaic_byb_to_gp_420 /* buf name */, demosaic_byb_FIFO_buf64, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_by_update_0_sm96_0163(demosaic_byb_FIFO_buf64 /* buf name */, demosaic_by, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_by_to_gp_61619_sm106_0183(demosaic_by /* buf name */, demosaic_by_to_gp_616, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bx_FIFO_buf5255_sm116_0137(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_58, demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_to_gp_58
	auto demosaic_bx_to_gp_58__lp_1_m_demosaic_bx_to_gp_58_ld53__p__0_rp__c____demosaic_bx_to_gp_58_ld54_value = demosaic_bx_to_gp_58.read();
	// Produce: demosaic_bx_FIFO_buf52
	demosaic_bx_FIFO_buf52_load_to_demosaic_bx_FIFO_buf5255_sm116_0137_write_bundle_write(/* arg names */demosaic_bx_to_gp_58__lp_1_m_demosaic_bx_to_gp_58_ld53__p__0_rp__c____demosaic_bx_to_gp_58_ld54_value, demosaic_bx_FIFO_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0_sm95_0161(demosaic_bx_FIFO_buf52_cache& demosaic_bx_FIFO_buf52, demosaic_byb_cache& demosaic_byb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_FIFO_buf52
	auto demosaic_bx_FIFO_buf52_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value = demosaic_bx_FIFO_buf52_demosaic_byb_update_0_sm95_0161_read_bundle_read(demosaic_bx_FIFO_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_sm95_0161_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_byb_to_gp_42023_sm99_0169(demosaic_byb_cache& demosaic_byb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_420, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb__lp_1_m_demosaic_byb_ld21__p__0_rp__c____demosaic_byb_ld22_value = demosaic_byb_load_to_demosaic_byb_to_gp_42023_sm99_0169_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, d2, 0);

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

// schedule: { load_to_demosaic_bx_FIFO_buf5255_sm116_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079; load_to_demosaic_byb_to_gp_42023_sm99_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; demosaic_byb_update_0_sm95_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { load_to_demosaic_bx_FIFO_buf5255_sm116_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_bx_FIFO_buf5255_sm116_0137(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_byb_to_gp_42023_sm99_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_byb_to_gp_42023_sm99_0169(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaic_byb_update_0_sm95_0161[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for demosaic_byb_update_0_sm95_0161(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 23 <= i3 <= 24; [0, i1, i2, 22] : 6 <= i1 <= 1087 and 8 <= i2 <= 1087 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_FIFO_buf5255_sm116_0137(demosaic_bx_to_gp_58 /* buf name */, demosaic_bx_FIFO_buf52, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          demosaic_byb_update_0_sm95_0161(demosaic_bx_FIFO_buf52 /* buf name */, demosaic_byb, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_byb_to_gp_42023_sm99_0169(demosaic_byb /* buf name */, demosaic_byb_to_gp_420, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf4851_sm107_0185(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_64, demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_64
	auto demosaic_to_gp_64__lp_1_m_demosaic_to_gp_64_ld49__p__0_rp__c____demosaic_to_gp_64_ld50_value = demosaic_to_gp_64.read();
	// Produce: demosaic_FIFO_buf48
	demosaic_FIFO_buf48_load_to_demosaic_FIFO_buf4851_sm107_0185_write_bundle_write(/* arg names */demosaic_to_gp_64__lp_1_m_demosaic_to_gp_64_ld49__p__0_rp__c____demosaic_to_gp_64_ld50_value, demosaic_FIFO_buf48, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_FIFO_buf6063_sm118_0141(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_616, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by_to_gp_616
	auto demosaic_by_to_gp_616__lp_1_m_demosaic_by_to_gp_616_ld61__p__0_rp__c____demosaic_by_to_gp_616_ld62_value = demosaic_by_to_gp_616.read();
	// Produce: demosaic_by_FIFO_buf60
	demosaic_by_FIFO_buf60_load_to_demosaic_by_FIFO_buf6063_sm118_0141_write_bundle_write(/* arg names */demosaic_by_to_gp_616__lp_1_m_demosaic_by_to_gp_616_ld61__p__0_rp__c____demosaic_by_to_gp_616_ld62_value, demosaic_by_FIFO_buf60, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0_sm97_0165(demosaic_FIFO_buf48_cache& demosaic_FIFO_buf48, demosaic_by_FIFO_buf60_cache& demosaic_by_FIFO_buf60, demosaic_diff_cache& demosaic_diff, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf48
	auto demosaic_FIFO_buf48_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_FIFO_buf48_demosaic_diff_update_0_sm97_0165_read_bundle_read(demosaic_FIFO_buf48/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by_FIFO_buf60
	auto demosaic_by_FIFO_buf60_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_by_FIFO_buf60_demosaic_diff_update_0_sm97_0165_read_bundle_read(demosaic_by_FIFO_buf60/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value, demosaic_by_FIFO_buf60_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_sm97_0165_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_diff_to_gp_02427_sm111_0127(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_024, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff__lp_1_m_demosaic_diff_ld25__p__0_rp__c____demosaic_diff_ld26_value = demosaic_diff_load_to_demosaic_diff_to_gp_02427_sm111_0127_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, d2, 0);

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

// schedule: { demosaic_diff_update_0_sm97_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_diff_to_gp_02427_sm111_0127[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_by_FIFO_buf6063_sm118_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079; load_to_demosaic_FIFO_buf4851_sm107_0185[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
//   { demosaic_diff_update_0_sm97_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for demosaic_diff_update_0_sm97_0165(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_to_gp_02427_sm111_0127[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_diff_to_gp_02427_sm111_0127(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_FIFO_buf6063_sm118_0141[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_by_FIFO_buf6063_sm118_0141(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaic_FIFO_buf4851_sm107_0185[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1079 and 0 <= d2 <= 1079 }
// Condition for load_to_demosaic_FIFO_buf4851_sm107_0185(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1085 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1087 and 28 <= i3 <= 30; [0, i1, i2, 17] : 6 <= i1 <= 1085 and 8 <= i2 <= 1087 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 1085 }
	        // { [i0, i1, i2] : i1 <= 1085 }
	          // { [i0, i1, i2] : 1085 - i1 >= 0 }
	        if ((((((1085 + -1*i1)) >= 0)))) {
	          load_to_demosaic_FIFO_buf4851_sm107_0185(demosaic_to_gp_64 /* buf name */, demosaic_FIFO_buf48, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_by_FIFO_buf6063_sm118_0141(demosaic_by_to_gp_616 /* buf name */, demosaic_by_FIFO_buf60, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          demosaic_diff_update_0_sm97_0165(demosaic_FIFO_buf48 /* buf name */, demosaic_by_FIFO_buf60 /* buf name */, demosaic_diff, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_diff_to_gp_02427_sm111_0127(demosaic_diff /* buf name */, demosaic_diff_to_gp_024, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoise_FIFO_buf7679_sm105_0181(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_732, denoise_FIFO_buf76_cache& denoise_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_to_gp_732
	auto denoise_to_gp_732__lp_1_m_denoise_to_gp_732_ld77__p__0_rp__c____denoise_to_gp_732_ld78_value = denoise_to_gp_732.read();
	// Produce: denoise_FIFO_buf76
	denoise_FIFO_buf76_load_to_denoise_FIFO_buf7679_sm105_0181_write_bundle_write(/* arg names */denoise_to_gp_732__lp_1_m_denoise_to_gp_732_ld77__p__0_rp__c____denoise_to_gp_732_ld78_value, denoise_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0_sm91_0153(denoise_FIFO_buf76_cache& denoise_FIFO_buf76, demosaicb_cache& demosaicb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_FIFO_buf76
	auto denoise_FIFO_buf76_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value = denoise_FIFO_buf76_demosaicb_update_0_sm91_0153_read_bundle_read(denoise_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_sm91_0153_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaicb_to_gp_12831_sm115_0135(demosaicb_cache& demosaicb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb__lp_1_m_demosaicb_ld29__p__0_rp__c____demosaicb_ld30_value = demosaicb_load_to_demosaicb_to_gp_12831_sm115_0135_read_bundle_read(demosaicb/* source_delay */, d0, d1, d2, 0);

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

// schedule: { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081; load_to_demosaicb_to_gp_12831_sm115_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
//   { load_to_denoise_FIFO_buf7679_sm105_0181[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoise_FIFO_buf7679_sm105_0181(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { demosaicb_update_0_sm91_0153[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for demosaicb_update_0_sm91_0153(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_demosaicb_to_gp_12831_sm115_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1081 }
// Condition for load_to_demosaicb_to_gp_12831_sm115_0135(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1087 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1087 and 4 <= i2 <= 1087 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_FIFO_buf7679_sm105_0181(denoise_to_gp_732 /* buf name */, denoise_FIFO_buf76, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          demosaicb_update_0_sm91_0153(denoise_FIFO_buf76 /* buf name */, demosaicb, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_demosaicb_to_gp_12831_sm115_0135(demosaicb /* buf name */, demosaicb_to_gp_128, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoiseb_FIFO_buf8083_sm109_0123(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_836, denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_to_gp_836
	auto denoiseb_to_gp_836__lp_1_m_denoiseb_to_gp_836_ld81__p__0_rp__c____denoiseb_to_gp_836_ld82_value = denoiseb_to_gp_836.read();
	// Produce: denoiseb_FIFO_buf80
	denoiseb_FIFO_buf80_load_to_denoiseb_FIFO_buf8083_sm109_0123_write_bundle_write(/* arg names */denoiseb_to_gp_836__lp_1_m_denoiseb_to_gp_836_ld81__p__0_rp__c____denoiseb_to_gp_836_ld82_value, denoiseb_FIFO_buf80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0_sm90_0151(denoiseb_FIFO_buf80_cache& denoiseb_FIFO_buf80, denoise_cache& denoise, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_FIFO_buf80
	auto denoiseb_FIFO_buf80_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value = denoiseb_FIFO_buf80_denoise_update_0_sm90_0151_read_bundle_read(denoiseb_FIFO_buf80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value);
	// Produce: denoise
	denoise_denoise_update_0_sm90_0151_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoise_to_gp_73235_sm100_0171(denoise_cache& denoise, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_732, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise__lp_1_m_denoise_ld33__p__0_rp__c____denoise_ld34_value = denoise_load_to_denoise_to_gp_73235_sm100_0171_read_bundle_read(denoise/* source_delay */, d0, d1, d2, 0);

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

// schedule: { denoise_update_0_sm90_0151[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; load_to_denoiseb_FIFO_buf8083_sm109_0123[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; load_to_denoise_to_gp_73235_sm100_0171[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
//   { denoise_update_0_sm90_0151[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for denoise_update_0_sm90_0151(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_denoiseb_FIFO_buf8083_sm109_0123[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoiseb_FIFO_buf8083_sm109_0123(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_denoise_to_gp_73235_sm100_0171[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoise_to_gp_73235_sm100_0171(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1087 and 5 <= i3 <= 7 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoiseb_FIFO_buf8083_sm109_0123(denoiseb_to_gp_836 /* buf name */, denoiseb_FIFO_buf80, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          denoise_update_0_sm90_0151(denoiseb_FIFO_buf80 /* buf name */, denoise, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_to_gp_73235_sm100_0171(denoise /* buf name */, denoise_to_gp_732, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_raw_FIFO_buf8487_sm108_0121(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_940, raw_FIFO_buf84_cache& raw_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_to_gp_940
	auto raw_to_gp_940__lp_1_m_raw_to_gp_940_ld85__p__0_rp__c____raw_to_gp_940_ld86_value = raw_to_gp_940.read();
	// Produce: raw_FIFO_buf84
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm108_0121_write_bundle_write(/* arg names */raw_to_gp_940__lp_1_m_raw_to_gp_940_ld85__p__0_rp__c____raw_to_gp_940_ld86_value, raw_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoiseb_update_0_sm89_0149(raw_FIFO_buf84_cache& raw_FIFO_buf84, denoiseb_cache& denoiseb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_FIFO_buf84
	auto raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value = raw_FIFO_buf84_denoiseb_update_0_sm89_0149_read_bundle_read(raw_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_sm89_0149_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoiseb_to_gp_83639_sm101_0173(denoiseb_cache& denoiseb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_836, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb__lp_1_m_denoiseb_ld37__p__0_rp__c____denoiseb_ld38_value = denoiseb_load_to_denoiseb_to_gp_83639_sm101_0173_read_bundle_read(denoiseb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoiseb_to_gp_836
	denoiseb_to_gp_836.write(denoiseb__lp_1_m_denoiseb_ld37__p__0_rp__c____denoiseb_ld38_value);

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

// schedule: { load_to_denoiseb_to_gp_83639_sm101_0173[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083; load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
//   { load_to_denoiseb_to_gp_83639_sm101_0173[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for load_to_denoiseb_to_gp_83639_sm101_0173(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { denoiseb_update_0_sm89_0149[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1083 }
// Condition for denoiseb_update_0_sm89_0149(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))
//   { load_to_raw_FIFO_buf8487_sm108_0121[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1087 }
// Condition for load_to_raw_FIFO_buf8487_sm108_0121(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1087 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1087 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1087 and 0 <= i2 <= 1087 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1087; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_FIFO_buf8487_sm108_0121(raw_to_gp_940 /* buf name */, raw_FIFO_buf84, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          denoiseb_update_0_sm89_0149(raw_FIFO_buf84 /* buf name */, denoiseb, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_denoiseb_to_gp_83639_sm101_0173(denoiseb /* buf name */, denoiseb_to_gp_836, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void cp_1_opt_d_ic(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp_1_opt_d_ic_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > demosaic_diff_to_gp_024;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_diff_to_gp_024.values depth=10
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaicb_to_gp_128;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaicb_to_gp_128.values depth=24
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_30;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_30.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_64;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_64.values depth=50
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > raw_to_gp_940;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=raw_to_gp_940.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bxb_to_gp_212;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bxb_to_gp_212.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bx_to_gp_58;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bx_to_gp_58.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_byb_to_gp_420;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_byb_to_gp_420.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_by_to_gp_616;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_by_to_gp_616.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoise_to_gp_732;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoise_to_gp_732.values depth=2
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoiseb_to_gp_836;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoiseb_to_gp_836.values depth=2
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

void cp_1_opt_d_ic_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp_1_opt_d_ic(raw_oc, cp_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { cp_1_update_0_sm98_0167[root = 0, cp_1_0, cp_1_1] -> cp_1[cp_1_1, cp_1_0] : 0 <= cp_1_0 <= 1079 and 0 <= cp_1_1 <= 1079 }
const int cp_1_update_0_sm98_0167_write_pipe0_num_transfers = 1166400;
  // { raw_update_0_sm88_0147[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1087 }
const int raw_update_0_sm88_0147_read_pipe0_num_transfers = 1183744;


extern "C" {

void cp_1_opt_d_ic_accel(hw_uint<16>* raw_update_0_sm88_0147_read_pipe0, hw_uint<16>* cp_1_update_0_sm98_0167_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_sm88_0147_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_1_update_0_sm98_0167_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_sm88_0147_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp_1_update_0_sm98_0167_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > raw_update_0_sm88_0147_read_pipe0_channel;
  static HWStream<hw_uint<16> > cp_1_update_0_sm98_0167_write_pipe0_channel;

  burst_read<16>(raw_update_0_sm88_0147_read_pipe0, raw_update_0_sm88_0147_read_pipe0_channel, raw_update_0_sm88_0147_read_pipe0_num_transfers*size);

  cp_1_opt_d_ic_wrapper(raw_update_0_sm88_0147_read_pipe0_channel, cp_1_update_0_sm98_0167_write_pipe0_channel, size);

  burst_write<16>(cp_1_update_0_sm98_0167_write_pipe0, cp_1_update_0_sm98_0167_write_pipe0_channel, cp_1_update_0_sm98_0167_write_pipe0_num_transfers*size);
}

}
extern "C" {

void cp_1_opt_d_ic_rdai(HWStream<hw_uint<16> >& raw_update_0_sm88_0147_read_pipe0, HWStream<hw_uint<16> >&  cp_1_update_0_sm98_0167_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_sm88_0147_read_pipe0
#pragma HLS INTERFACE axis register port = cp_1_update_0_sm98_0167_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp_1_opt_d_ic(raw_update_0_sm88_0147_read_pipe0, cp_1_update_0_sm98_0167_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

