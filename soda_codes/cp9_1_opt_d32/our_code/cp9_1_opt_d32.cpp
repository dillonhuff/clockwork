#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cp9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "cp9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct demosaic_demosaic_update_0_sm96_0137_84_merged_banks_2_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 3845
	// # of read delays: 2
  // 0, 3844
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3843> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3843() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_3844() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3843
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3843 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_cache {
  // Reader addrs...
    // { load_to_demosaic_to_gp_303_sm103_0151[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1921 }
    // { load_to_demosaic_to_gp_6811_sm110_0165[root = 0, demosaic_ld10, demosaic_ld9] -> demosaic[demosaic_ld9, demosaic_ld10] : 0 <= demosaic_ld10 <= 1079 and 0 <= demosaic_ld9 <= 1919 }
  // # of banks: 1
  demosaic_demosaic_update_0_sm96_0137_84_merged_banks_2_cache demosaic_demosaic_update_0_sm96_0137_84_merged_banks_2;
};



inline void demosaic_demosaic_update_0_sm96_0137_84_write(hw_uint<16>& demosaic_demosaic_update_0_sm96_0137_84, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_sm96_0137_84_merged_banks_2.push(demosaic_demosaic_update_0_sm96_0137_84);
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm103_0151_21_select(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_303_sm103_0151_21 read pattern: { load_to_demosaic_to_gp_303_sm103_0151[root = 0, demosaic_ld2, demosaic_ld1] -> demosaic[demosaic_ld1, demosaic_ld2] : 0 <= demosaic_ld2 <= 1081 and 0 <= demosaic_ld1 <= 1921 }
  // Read schedule : { load_to_demosaic_to_gp_303_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { demosaic_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm96_0137_84 = demosaic.demosaic_demosaic_update_0_sm96_0137_84_merged_banks_2.peek_0();
  return value_demosaic_demosaic_update_0_sm96_0137_84;
  return 0;
}

inline hw_uint<16> demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_select(demosaic_cache& demosaic, int root, int demosaic_ld10, int demosaic_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19 read pattern: { load_to_demosaic_to_gp_6811_sm110_0165[root = 0, demosaic_ld10, demosaic_ld9] -> demosaic[demosaic_ld9, demosaic_ld10] : 0 <= demosaic_ld10 <= 1079 and 0 <= demosaic_ld9 <= 1919 }
  // Read schedule : { load_to_demosaic_to_gp_6811_sm110_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm96_0137_84 = demosaic.demosaic_demosaic_update_0_sm96_0137_84_merged_banks_2.peek_3844();
  return value_demosaic_demosaic_update_0_sm96_0137_84;
  return 0;
}

// # of bundles = 3
// demosaic_update_0_sm96_0137_write
//	demosaic_demosaic_update_0_sm96_0137_84
inline void demosaic_demosaic_update_0_sm96_0137_write_bundle_write(hw_uint<16>& demosaic_update_0_sm96_0137_write, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_sm96_0137_84_res = demosaic_update_0_sm96_0137_write.extract<0, 15>();
	demosaic_demosaic_update_0_sm96_0137_84_write(demosaic_demosaic_update_0_sm96_0137_84_res, demosaic, root, demosaic_0, demosaic_1, dynamic_address);
}

// load_to_demosaic_to_gp_303_sm103_0151_read
//	demosaic_load_to_demosaic_to_gp_303_sm103_0151_21
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm103_0151_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld2, int demosaic_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_303_sm103_0151_21

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_303_sm103_0151_21_res = demosaic_load_to_demosaic_to_gp_303_sm103_0151_21_select(demosaic, root, demosaic_ld2, demosaic_ld1, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_303_sm103_0151_21_res);
	return result;
}

// load_to_demosaic_to_gp_6811_sm110_0165_read
//	demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19
inline hw_uint<16> demosaic_load_to_demosaic_to_gp_6811_sm110_0165_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_ld10, int demosaic_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19

	hw_uint<16> result;
	hw_uint<16> demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_res = demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_select(demosaic, root, demosaic_ld10, demosaic_ld9, dynamic_address);
	set_at<0, 16>(result, demosaic_load_to_demosaic_to_gp_6811_sm110_0165_19_res);
	return result;
}

struct demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 3
	// # of read delays: 3
  // 0, 1, 2
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

struct demosaic_FIFO_buf12_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm101_0147[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf12[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // # of banks: 1
  demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87_cache demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87;
};



inline void demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_write(hw_uint<16>& demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44, demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_to_gp_68_ld14, int demosaic_to_gp_68_ld13, int dynamic_address) {
  demosaic_FIFO_buf12.demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87.push(demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44);
}

inline hw_uint<16> demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87_select(demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87 read pattern: { demosaic_diff_update_0_sm101_0147[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_FIFO_buf12[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // Read schedule : { demosaic_diff_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf1215_sm90_0123[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44 = demosaic_FIFO_buf12.demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_to_demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87.peek(/* one reader or all rams */ (-1918 + demosaic_diff_1 == 0) ? (1) : (1917 - demosaic_diff_1 >= 0) ? (2) : 0);
  return value_demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm101_0147_read
//	demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87
inline hw_uint<16> demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_read_bundle_read(demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87

	hw_uint<16> result;
	hw_uint<16> demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87_res = demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87_select(demosaic_FIFO_buf12, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_87_res);
	return result;
}

// load_to_demosaic_FIFO_buf1215_sm90_0123_write
//	demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44
inline void demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf1215_sm90_0123_write, demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int root, int demosaic_to_gp_68_ld14, int demosaic_to_gp_68_ld13, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_res = load_to_demosaic_FIFO_buf1215_sm90_0123_write.extract<0, 15>();
	demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_write(demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_44_res, demosaic_FIFO_buf12, root, demosaic_to_gp_68_ld14, demosaic_to_gp_68_ld13, dynamic_address);
}

struct demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
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

struct demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97_cache {
	// RAM Box: {[1, 1920], [0, 1081]}
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

struct demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98_cache {
	// RAM Box: {[2, 1921], [0, 1081]}
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

struct demosaic_FIFO_buf4_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0_sm97_0139[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_bxb_update_0_sm97_0139[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_bxb_update_0_sm97_0139[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // # of banks: 3
  demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96_cache demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96;
  demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97_cache demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97;
  demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98_cache demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98;
};



inline void demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_write(hw_uint<16>& demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42, demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_to_gp_30_ld6, int demosaic_to_gp_30_ld5, int dynamic_address) {
  demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96.push(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42);
  demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97.push(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42);
  demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98.push(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42);
}

inline hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96_select(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96 read pattern: { demosaic_bxb_update_0_sm97_0139[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf47_sm105_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42 = demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96.peek(/* one reader or all rams */ 2);
  return value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97_select(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97 read pattern: { demosaic_bxb_update_0_sm97_0139[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf47_sm105_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42 = demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97.peek(/* one reader or all rams */ 1);
  return value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42;
  return 0;
}

inline hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98_select(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98 read pattern: { demosaic_bxb_update_0_sm97_0139[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic_FIFO_buf4[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_FIFO_buf47_sm105_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42 = demosaic_FIFO_buf4.demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_to_demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98.peek(/* one reader or all rams */ 0);
  return value_demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm97_0139_read
//	demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96
//	demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97
//	demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98
inline hw_uint<48> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_read_bundle_read(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96
    // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97
    // demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98

	hw_uint<48> result;
	hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96_res = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96_select(demosaic_FIFO_buf4, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_96_res);
	hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97_res = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97_select(demosaic_FIFO_buf4, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_97_res);
	hw_uint<16> demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98_res = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98_select(demosaic_FIFO_buf4, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_98_res);
	return result;
}

// load_to_demosaic_FIFO_buf47_sm105_0155_write
//	demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42
inline void demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_write_bundle_write(hw_uint<16>& load_to_demosaic_FIFO_buf47_sm105_0155_write, demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int root, int demosaic_to_gp_30_ld6, int demosaic_to_gp_30_ld5, int dynamic_address) {
	hw_uint<16> demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_res = load_to_demosaic_FIFO_buf47_sm105_0155_write.extract<0, 15>();
	demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_write(demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_42_res, demosaic_FIFO_buf4, root, demosaic_to_gp_30_ld6, demosaic_to_gp_30_ld5, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_sm98_0141_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
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
    // { load_to_demosaic_bx_to_gp_51619_sm106_0157[root = 0, demosaic_bx_ld18, demosaic_bx_ld17] -> demosaic_bx[demosaic_bx_ld17, demosaic_bx_ld18] : 0 <= demosaic_bx_ld18 <= 1081 and 0 <= demosaic_bx_ld17 <= 1919 }
  // # of banks: 1
  demosaic_bx_demosaic_bx_update_0_sm98_0141_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39_cache demosaic_bx_demosaic_bx_update_0_sm98_0141_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39;
};



inline void demosaic_bx_demosaic_bx_update_0_sm98_0141_99_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_sm98_0141_99, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm98_0141_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39.push(demosaic_bx_demosaic_bx_update_0_sm98_0141_99);
}

inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld18, int demosaic_bx_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39 read pattern: { load_to_demosaic_bx_to_gp_51619_sm106_0157[root = 0, demosaic_bx_ld18, demosaic_bx_ld17] -> demosaic_bx[demosaic_bx_ld17, demosaic_bx_ld18] : 0 <= demosaic_bx_ld18 <= 1081 and 0 <= demosaic_bx_ld17 <= 1919 }
  // Read schedule : { load_to_demosaic_bx_to_gp_51619_sm106_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bx_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm98_0141_99 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm98_0141_99_to_demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39.peek(/* one reader or all rams */ 0);
  return value_demosaic_bx_demosaic_bx_update_0_sm98_0141_99;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm98_0141_write
//	demosaic_bx_demosaic_bx_update_0_sm98_0141_99
inline void demosaic_bx_demosaic_bx_update_0_sm98_0141_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_sm98_0141_write, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_sm98_0141_99_res = demosaic_bx_update_0_sm98_0141_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_sm98_0141_99_write(demosaic_bx_demosaic_bx_update_0_sm98_0141_99_res, demosaic_bx, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
}

// load_to_demosaic_bx_to_gp_51619_sm106_0157_read
//	demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39
inline hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_read_bundle_read(demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_ld18, int demosaic_bx_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39

	hw_uint<16> result;
	hw_uint<16> demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39_res = demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39_select(demosaic_bx, root, demosaic_bx_ld18, demosaic_bx_ld17, dynamic_address);
	set_at<0, 16>(result, demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_39_res);
	return result;
}

struct demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 3841
	// # of read delays: 3
  // 0, 1920, 3840
	hw_uint<16> f0;
	fifo<hw_uint<16>, 1919> f1;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1919> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1919() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_1920() {
		return f2;
	}

	inline hw_uint<16> peek_3839() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_3840() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1919
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1919 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_FIFO_buf20_cache {
  // Reader addrs...
    // { demosaic_byb_update_0_sm99_0143[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
    // { demosaic_byb_update_0_sm99_0143[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
    // { demosaic_byb_update_0_sm99_0143[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // # of banks: 1
  demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3_cache demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3;
};



inline void demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_write(hw_uint<16>& demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40, demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_bx_to_gp_516_ld22, int demosaic_bx_to_gp_516_ld21, int dynamic_address) {
  demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3.push(demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40);
}

inline hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90_select(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90 read pattern: { demosaic_byb_update_0_sm99_0143[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf2023_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40 = demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3.peek_3840();
  return value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91_select(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91 read pattern: { demosaic_byb_update_0_sm99_0143[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf2023_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40 = demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3.peek_1920();
  return value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40;
  return 0;
}

inline hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92_select(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92 read pattern: { demosaic_byb_update_0_sm99_0143[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx_FIFO_buf20[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bx_FIFO_buf2023_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40 = demosaic_bx_FIFO_buf20.demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_merged_banks_3.peek_0();
  return value_demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm99_0143_read
//	demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90
//	demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91
//	demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92
inline hw_uint<48> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_read_bundle_read(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90
    // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91
    // demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92

	hw_uint<48> result;
	hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90_res = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90_select(demosaic_bx_FIFO_buf20, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_90_res);
	hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91_res = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91_select(demosaic_bx_FIFO_buf20, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_91_res);
	hw_uint<16> demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92_res = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92_select(demosaic_bx_FIFO_buf20, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_92_res);
	return result;
}

// load_to_demosaic_bx_FIFO_buf2023_sm111_0167_write
//	demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40
inline void demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_write_bundle_write(hw_uint<16>& load_to_demosaic_bx_FIFO_buf2023_sm111_0167_write, demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int root, int demosaic_bx_to_gp_516_ld22, int demosaic_bx_to_gp_516_ld21, int dynamic_address) {
	hw_uint<16> demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_res = load_to_demosaic_bx_FIFO_buf2023_sm111_0167_write.extract<0, 15>();
	demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_write(demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_40_res, demosaic_bx_FIFO_buf20, root, demosaic_bx_to_gp_516_ld22, demosaic_bx_to_gp_516_ld21, dynamic_address);
}

struct demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
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
    // { load_to_demosaic_bxb_to_gp_22427_sm88_0131[root = 0, demosaic_bxb_ld26, demosaic_bxb_ld25] -> demosaic_bxb[demosaic_bxb_ld25, demosaic_bxb_ld26] : 0 <= demosaic_bxb_ld26 <= 1081 and 0 <= demosaic_bxb_ld25 <= 1919 }
  // # of banks: 1
  demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35_cache demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35;
};



inline void demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35.push(demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95);
}

inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35_select(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld26, int demosaic_bxb_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35 read pattern: { load_to_demosaic_bxb_to_gp_22427_sm88_0131[root = 0, demosaic_bxb_ld26, demosaic_bxb_ld25] -> demosaic_bxb[demosaic_bxb_ld25, demosaic_bxb_ld26] : 0 <= demosaic_bxb_ld26 <= 1081 and 0 <= demosaic_bxb_ld25 <= 1919 }
  // Read schedule : { load_to_demosaic_bxb_to_gp_22427_sm88_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bxb_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_to_demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95;
  return 0;
}

// # of bundles = 2
// demosaic_bxb_update_0_sm97_0139_write
//	demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95
inline void demosaic_bxb_demosaic_bxb_update_0_sm97_0139_write_bundle_write(hw_uint<16>& demosaic_bxb_update_0_sm97_0139_write, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_res = demosaic_bxb_update_0_sm97_0139_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_write(demosaic_bxb_demosaic_bxb_update_0_sm97_0139_95_res, demosaic_bxb, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
}

// load_to_demosaic_bxb_to_gp_22427_sm88_0131_read
//	demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35
inline hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_ld26, int demosaic_bxb_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35_res = demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35_select(demosaic_bxb, root, demosaic_bxb_ld26, demosaic_bxb_ld25, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_35_res);
	return result;
}

struct demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
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

struct demosaic_bxb_FIFO_buf28_cache {
  // Reader addrs...
    // { demosaic_bx_update_0_sm98_0141[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf28[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1919 }
  // # of banks: 1
  demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100_cache demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100;
};



inline void demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_write(hw_uint<16>& demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36, demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bxb_to_gp_224_ld30, int demosaic_bxb_to_gp_224_ld29, int dynamic_address) {
  demosaic_bxb_FIFO_buf28.demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100.push(demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36);
}

inline hw_uint<16> demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100_select(demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100 read pattern: { demosaic_bx_update_0_sm98_0141[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb_FIFO_buf28[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1919 }
  // Read schedule : { demosaic_bx_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_bxb_FIFO_buf2831_sm116_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36 = demosaic_bxb_FIFO_buf28.demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_to_demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm98_0141_read
//	demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100
inline hw_uint<16> demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_read_bundle_read(demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100_res = demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100_select(demosaic_bxb_FIFO_buf28, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_100_res);
	return result;
}

// load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_write
//	demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36
inline void demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_write_bundle_write(hw_uint<16>& load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_write, demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int root, int demosaic_bxb_to_gp_224_ld30, int demosaic_bxb_to_gp_224_ld29, int dynamic_address) {
	hw_uint<16> demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_res = load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_write.extract<0, 15>();
	demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_write(demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_36_res, demosaic_bxb_FIFO_buf28, root, demosaic_bxb_to_gp_224_ld30, demosaic_bxb_to_gp_224_ld29, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_sm100_0145_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
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
    // { load_to_demosaic_by_to_gp_63235_sm113_0171[root = 0, demosaic_by_ld34, demosaic_by_ld33] -> demosaic_by[demosaic_by_ld33, demosaic_by_ld34] : 0 <= demosaic_by_ld34 <= 1079 and 0 <= demosaic_by_ld33 <= 1919 }
  // # of banks: 1
  demosaic_by_demosaic_by_update_0_sm100_0145_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31_cache demosaic_by_demosaic_by_update_0_sm100_0145_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31;
};



inline void demosaic_by_demosaic_by_update_0_sm100_0145_93_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_sm100_0145_93, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_sm100_0145_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31.push(demosaic_by_demosaic_by_update_0_sm100_0145_93);
}

inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31_select(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld34, int demosaic_by_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31 read pattern: { load_to_demosaic_by_to_gp_63235_sm113_0171[root = 0, demosaic_by_ld34, demosaic_by_ld33] -> demosaic_by[demosaic_by_ld33, demosaic_by_ld34] : 0 <= demosaic_by_ld34 <= 1079 and 0 <= demosaic_by_ld33 <= 1919 }
  // Read schedule : { load_to_demosaic_by_to_gp_63235_sm113_0171[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_by_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_by_demosaic_by_update_0_sm100_0145_93 = demosaic_by.demosaic_by_demosaic_by_update_0_sm100_0145_93_to_demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_sm100_0145_93;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm100_0145_write
//	demosaic_by_demosaic_by_update_0_sm100_0145_93
inline void demosaic_by_demosaic_by_update_0_sm100_0145_write_bundle_write(hw_uint<16>& demosaic_by_update_0_sm100_0145_write, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_sm100_0145_93_res = demosaic_by_update_0_sm100_0145_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_sm100_0145_93_write(demosaic_by_demosaic_by_update_0_sm100_0145_93_res, demosaic_by, root, demosaic_by_0, demosaic_by_1, dynamic_address);
}

// load_to_demosaic_by_to_gp_63235_sm113_0171_read
//	demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31
inline hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_read_bundle_read(demosaic_by_cache& demosaic_by, int root, int demosaic_by_ld34, int demosaic_by_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31

	hw_uint<16> result;
	hw_uint<16> demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31_res = demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31_select(demosaic_by, root, demosaic_by_ld34, demosaic_by_ld33, dynamic_address);
	set_at<0, 16>(result, demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_31_res);
	return result;
}

struct demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
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

struct demosaic_by_FIFO_buf36_cache {
  // Reader addrs...
    // { demosaic_diff_update_0_sm101_0147[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf36[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // # of banks: 1
  demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88_cache demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88;
};



inline void demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_write(hw_uint<16>& demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_by_to_gp_632_ld38, int demosaic_by_to_gp_632_ld37, int dynamic_address) {
  demosaic_by_FIFO_buf36.demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88.push(demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32);
}

inline hw_uint<16> demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88_select(demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88 read pattern: { demosaic_diff_update_0_sm101_0147[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by_FIFO_buf36[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // Read schedule : { demosaic_diff_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_by_FIFO_buf3639_sm114_0173[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32 = demosaic_by_FIFO_buf36.demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_to_demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm101_0147_read
//	demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88
inline hw_uint<16> demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_read_bundle_read(demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88

	hw_uint<16> result;
	hw_uint<16> demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88_res = demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88_select(demosaic_by_FIFO_buf36, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_88_res);
	return result;
}

// load_to_demosaic_by_FIFO_buf3639_sm114_0173_write
//	demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32
inline void demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_write_bundle_write(hw_uint<16>& load_to_demosaic_by_FIFO_buf3639_sm114_0173_write, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int root, int demosaic_by_to_gp_632_ld38, int demosaic_by_to_gp_632_ld37, int dynamic_address) {
	hw_uint<16> demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_res = load_to_demosaic_by_FIFO_buf3639_sm114_0173_write.extract<0, 15>();
	demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_write(demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_32_res, demosaic_by_FIFO_buf36, root, demosaic_by_to_gp_632_ld38, demosaic_by_to_gp_632_ld37, dynamic_address);
}

struct demosaic_byb_demosaic_byb_update_0_sm99_0143_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
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
    // { load_to_demosaic_byb_to_gp_44043_sm112_0169[root = 0, demosaic_byb_ld42, demosaic_byb_ld41] -> demosaic_byb[demosaic_byb_ld41, demosaic_byb_ld42] : 0 <= demosaic_byb_ld42 <= 1079 and 0 <= demosaic_byb_ld41 <= 1919 }
  // # of banks: 1
  demosaic_byb_demosaic_byb_update_0_sm99_0143_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27_cache demosaic_byb_demosaic_byb_update_0_sm99_0143_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27;
};



inline void demosaic_byb_demosaic_byb_update_0_sm99_0143_89_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_sm99_0143_89, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm99_0143_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27.push(demosaic_byb_demosaic_byb_update_0_sm99_0143_89);
}

inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27_select(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld42, int demosaic_byb_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27 read pattern: { load_to_demosaic_byb_to_gp_44043_sm112_0169[root = 0, demosaic_byb_ld42, demosaic_byb_ld41] -> demosaic_byb[demosaic_byb_ld41, demosaic_byb_ld42] : 0 <= demosaic_byb_ld42 <= 1079 and 0 <= demosaic_byb_ld41 <= 1919 }
  // Read schedule : { load_to_demosaic_byb_to_gp_44043_sm112_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_byb_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_byb_demosaic_byb_update_0_sm99_0143_89 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm99_0143_89_to_demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_sm99_0143_89;
  return 0;
}

// # of bundles = 2
// demosaic_byb_update_0_sm99_0143_write
//	demosaic_byb_demosaic_byb_update_0_sm99_0143_89
inline void demosaic_byb_demosaic_byb_update_0_sm99_0143_write_bundle_write(hw_uint<16>& demosaic_byb_update_0_sm99_0143_write, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_sm99_0143_89_res = demosaic_byb_update_0_sm99_0143_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_sm99_0143_89_write(demosaic_byb_demosaic_byb_update_0_sm99_0143_89_res, demosaic_byb, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
}

// load_to_demosaic_byb_to_gp_44043_sm112_0169_read
//	demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27
inline hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_read_bundle_read(demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_ld42, int demosaic_byb_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27_res = demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27_select(demosaic_byb, root, demosaic_byb_ld42, demosaic_byb_ld41, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_27_res);
	return result;
}

struct demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
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

struct demosaic_byb_FIFO_buf44_cache {
  // Reader addrs...
    // { demosaic_by_update_0_sm100_0145[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf44[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1919 }
  // # of banks: 1
  demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94_cache demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94;
};



inline void demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_write(hw_uint<16>& demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28, demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_byb_to_gp_440_ld46, int demosaic_byb_to_gp_440_ld45, int dynamic_address) {
  demosaic_byb_FIFO_buf44.demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94.push(demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28);
}

inline hw_uint<16> demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94_select(demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94 read pattern: { demosaic_by_update_0_sm100_0145[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb_FIFO_buf44[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1919 }
  // Read schedule : { demosaic_by_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_byb_FIFO_buf4447_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28 = demosaic_byb_FIFO_buf44.demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_to_demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm100_0145_read
//	demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94
inline hw_uint<16> demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_read_bundle_read(demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94_res = demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94_select(demosaic_byb_FIFO_buf44, root, demosaic_by_0, demosaic_by_1, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_94_res);
	return result;
}

// load_to_demosaic_byb_FIFO_buf4447_sm115_0175_write
//	demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28
inline void demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_write_bundle_write(hw_uint<16>& load_to_demosaic_byb_FIFO_buf4447_sm115_0175_write, demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int root, int demosaic_byb_to_gp_440_ld46, int demosaic_byb_to_gp_440_ld45, int dynamic_address) {
	hw_uint<16> demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_res = load_to_demosaic_byb_FIFO_buf4447_sm115_0175_write.extract<0, 15>();
	demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_write(demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_28_res, demosaic_byb_FIFO_buf44, root, demosaic_byb_to_gp_440_ld46, demosaic_byb_to_gp_440_ld45, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_sm101_0147_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
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
    // { load_to_demosaic_diff_to_gp_04851_sm117_0179[root = 0, demosaic_diff_ld50, demosaic_diff_ld49] -> demosaic_diff[demosaic_diff_ld49, demosaic_diff_ld50] : 0 <= demosaic_diff_ld50 <= 1079 and 0 <= demosaic_diff_ld49 <= 1919 }
  // # of banks: 1
  demosaic_diff_demosaic_diff_update_0_sm101_0147_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23_cache demosaic_diff_demosaic_diff_update_0_sm101_0147_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23;
};



inline void demosaic_diff_demosaic_diff_update_0_sm101_0147_86_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_sm101_0147_86, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm101_0147_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23.push(demosaic_diff_demosaic_diff_update_0_sm101_0147_86);
}

inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23_select(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld50, int demosaic_diff_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23 read pattern: { load_to_demosaic_diff_to_gp_04851_sm117_0179[root = 0, demosaic_diff_ld50, demosaic_diff_ld49] -> demosaic_diff[demosaic_diff_ld49, demosaic_diff_ld50] : 0 <= demosaic_diff_ld50 <= 1079 and 0 <= demosaic_diff_ld49 <= 1919 }
  // Read schedule : { load_to_demosaic_diff_to_gp_04851_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_diff_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_diff_demosaic_diff_update_0_sm101_0147_86 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm101_0147_86_to_demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_sm101_0147_86;
  return 0;
}

// # of bundles = 2
// demosaic_diff_update_0_sm101_0147_write
//	demosaic_diff_demosaic_diff_update_0_sm101_0147_86
inline void demosaic_diff_demosaic_diff_update_0_sm101_0147_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_sm101_0147_write, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_sm101_0147_86_res = demosaic_diff_update_0_sm101_0147_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_sm101_0147_86_write(demosaic_diff_demosaic_diff_update_0_sm101_0147_86_res, demosaic_diff, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
}

// load_to_demosaic_diff_to_gp_04851_sm117_0179_read
//	demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23
inline hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_read_bundle_read(demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_ld50, int demosaic_diff_ld49, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23_res = demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23_select(demosaic_diff, root, demosaic_diff_ld50, demosaic_diff_ld49, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_23_res);
	return result;
}

struct demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
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

struct demosaic_diff_FIFO_buf52_cache {
  // Reader addrs...
    // { cp9_1_update_0_sm102_0149[root = 0, cp9_1_0, cp9_1_1] -> demosaic_diff_FIFO_buf52[cp9_1_1, cp9_1_0] : 0 <= cp9_1_0 <= 1079 and 0 <= cp9_1_1 <= 1919 }
  // # of banks: 1
  demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102_cache demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102;
};



inline void demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_write(hw_uint<16>& demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24, demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int demosaic_diff_to_gp_048_ld54, int demosaic_diff_to_gp_048_ld53, int dynamic_address) {
  demosaic_diff_FIFO_buf52.demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102.push(demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24);
}

inline hw_uint<16> demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102_select(demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int cp9_1_0, int cp9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102 read pattern: { cp9_1_update_0_sm102_0149[root = 0, cp9_1_0, cp9_1_1] -> demosaic_diff_FIFO_buf52[cp9_1_1, cp9_1_0] : 0 <= cp9_1_0 <= 1079 and 0 <= cp9_1_1 <= 1919 }
  // Read schedule : { cp9_1_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_demosaic_diff_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24 = demosaic_diff_FIFO_buf52.demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_to_demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24;
  return 0;
}

// # of bundles = 2
// cp9_1_update_0_sm102_0149_read
//	demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102
inline hw_uint<16> demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_read_bundle_read(demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int cp9_1_0, int cp9_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102_res = demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102_select(demosaic_diff_FIFO_buf52, root, cp9_1_0, cp9_1_1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_102_res);
	return result;
}

// load_to_demosaic_diff_FIFO_buf5255_sm118_0181_write
//	demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24
inline void demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_write_bundle_write(hw_uint<16>& load_to_demosaic_diff_FIFO_buf5255_sm118_0181_write, demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int root, int demosaic_diff_to_gp_048_ld54, int demosaic_diff_to_gp_048_ld53, int dynamic_address) {
	hw_uint<16> demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_res = load_to_demosaic_diff_FIFO_buf5255_sm118_0181_write.extract<0, 15>();
	demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_write(demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_24_res, demosaic_diff_FIFO_buf52, root, demosaic_diff_to_gp_048_ld54, demosaic_diff_to_gp_048_ld53, dynamic_address);
}

struct demosaicb_demosaicb_update_0_sm95_0135_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
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
    // { load_to_demosaicb_to_gp_15659_sm108_0161[root = 0, demosaicb_ld58, demosaicb_ld57] -> demosaicb[demosaicb_ld57, demosaicb_ld58] : 0 <= demosaicb_ld58 <= 1081 and 0 <= demosaicb_ld57 <= 1921 }
  // # of banks: 1
  demosaicb_demosaicb_update_0_sm95_0135_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15_cache demosaicb_demosaicb_update_0_sm95_0135_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15;
};



inline void demosaicb_demosaicb_update_0_sm95_0135_74_write(hw_uint<16>& demosaicb_demosaicb_update_0_sm95_0135_74, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_sm95_0135_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15.push(demosaicb_demosaicb_update_0_sm95_0135_74);
}

inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15_select(demosaicb_cache& demosaicb, int root, int demosaicb_ld58, int demosaicb_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15 read pattern: { load_to_demosaicb_to_gp_15659_sm108_0161[root = 0, demosaicb_ld58, demosaicb_ld57] -> demosaicb[demosaicb_ld57, demosaicb_ld58] : 0 <= demosaicb_ld58 <= 1081 and 0 <= demosaicb_ld57 <= 1921 }
  // Read schedule : { load_to_demosaicb_to_gp_15659_sm108_0161[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaicb_demosaicb_update_0_sm95_0135_74 = demosaicb.demosaicb_demosaicb_update_0_sm95_0135_74_to_demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_sm95_0135_74;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm95_0135_write
//	demosaicb_demosaicb_update_0_sm95_0135_74
inline void demosaicb_demosaicb_update_0_sm95_0135_write_bundle_write(hw_uint<16>& demosaicb_update_0_sm95_0135_write, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_sm95_0135_74_res = demosaicb_update_0_sm95_0135_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_sm95_0135_74_write(demosaicb_demosaicb_update_0_sm95_0135_74_res, demosaicb, root, demosaicb_0, demosaicb_1, dynamic_address);
}

// load_to_demosaicb_to_gp_15659_sm108_0161_read
//	demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15
inline hw_uint<16> demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_read_bundle_read(demosaicb_cache& demosaicb, int root, int demosaicb_ld58, int demosaicb_ld57, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15

	hw_uint<16> result;
	hw_uint<16> demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15_res = demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15_select(demosaicb, root, demosaicb_ld58, demosaicb_ld57, dynamic_address);
	set_at<0, 16>(result, demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_15_res);
	return result;
}

struct demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
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

struct demosaicb_FIFO_buf60_cache {
  // Reader addrs...
    // { demosaic_update_0_sm96_0137[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf60[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1921 }
  // # of banks: 1
  demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85_cache demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85;
};



inline void demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_write(hw_uint<16>& demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16, demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaicb_to_gp_156_ld62, int demosaicb_to_gp_156_ld61, int dynamic_address) {
  demosaicb_FIFO_buf60.demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85.push(demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16);
}

inline hw_uint<16> demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85_select(demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85 read pattern: { demosaic_update_0_sm96_0137[root = 0, demosaic_0, demosaic_1] -> demosaicb_FIFO_buf60[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1921 }
  // Read schedule : { demosaic_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_demosaicb_FIFO_buf6063_sm107_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16 = demosaicb_FIFO_buf60.demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_to_demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85.peek(/* one reader or all rams */ 0);
  return value_demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_sm96_0137_read
//	demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85
inline hw_uint<16> demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_read_bundle_read(demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85

	hw_uint<16> result;
	hw_uint<16> demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85_res = demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85_select(demosaicb_FIFO_buf60, root, demosaic_0, demosaic_1, dynamic_address);
	set_at<0, 16>(result, demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_85_res);
	return result;
}

// load_to_demosaicb_FIFO_buf6063_sm107_0159_write
//	demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16
inline void demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_write_bundle_write(hw_uint<16>& load_to_demosaicb_FIFO_buf6063_sm107_0159_write, demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int root, int demosaicb_to_gp_156_ld62, int demosaicb_to_gp_156_ld61, int dynamic_address) {
	hw_uint<16> demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_res = load_to_demosaicb_FIFO_buf6063_sm107_0159_write.extract<0, 15>();
	demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_write(demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_16_res, demosaicb_FIFO_buf60, root, demosaicb_to_gp_156_ld62, demosaicb_to_gp_156_ld61, dynamic_address);
}

struct denoise_denoise_update_0_sm94_0133_72_to_denoise_load_to_denoise_to_gp_76467_sm89_0121_11_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
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
    // { load_to_denoise_to_gp_76467_sm89_0121[root = 0, denoise_ld66, denoise_ld65] -> denoise[denoise_ld65, denoise_ld66] : 0 <= denoise_ld66 <= 1083 and 0 <= denoise_ld65 <= 1923 }
  // # of banks: 1
  denoise_denoise_update_0_sm94_0133_72_to_denoise_load_to_denoise_to_gp_76467_sm89_0121_11_cache denoise_denoise_update_0_sm94_0133_72_to_denoise_load_to_denoise_to_gp_76467_sm89_0121_11;
};



inline void denoise_denoise_update_0_sm94_0133_72_write(hw_uint<16>& denoise_denoise_update_0_sm94_0133_72, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
  denoise.denoise_denoise_update_0_sm94_0133_72_to_denoise_load_to_denoise_to_gp_76467_sm89_0121_11.push(denoise_denoise_update_0_sm94_0133_72);
}

inline hw_uint<16> denoise_load_to_denoise_to_gp_76467_sm89_0121_11_select(denoise_cache& denoise, int root, int denoise_ld66, int denoise_ld65, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_load_to_denoise_to_gp_76467_sm89_0121_11 read pattern: { load_to_denoise_to_gp_76467_sm89_0121[root = 0, denoise_ld66, denoise_ld65] -> denoise[denoise_ld65, denoise_ld66] : 0 <= denoise_ld66 <= 1083 and 0 <= denoise_ld65 <= 1923 }
  // Read schedule : { load_to_denoise_to_gp_76467_sm89_0121[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { denoise_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm94_0133_72 = denoise.denoise_denoise_update_0_sm94_0133_72_to_denoise_load_to_denoise_to_gp_76467_sm89_0121_11.peek(/* one reader or all rams */ 0);
  return value_denoise_denoise_update_0_sm94_0133_72;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm94_0133_write
//	denoise_denoise_update_0_sm94_0133_72
inline void denoise_denoise_update_0_sm94_0133_write_bundle_write(hw_uint<16>& denoise_update_0_sm94_0133_write, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_sm94_0133_72_res = denoise_update_0_sm94_0133_write.extract<0, 15>();
	denoise_denoise_update_0_sm94_0133_72_write(denoise_denoise_update_0_sm94_0133_72_res, denoise, root, denoise_0, denoise_1, dynamic_address);
}

// load_to_denoise_to_gp_76467_sm89_0121_read
//	denoise_load_to_denoise_to_gp_76467_sm89_0121_11
inline hw_uint<16> denoise_load_to_denoise_to_gp_76467_sm89_0121_read_bundle_read(denoise_cache& denoise, int root, int denoise_ld66, int denoise_ld65, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise_load_to_denoise_to_gp_76467_sm89_0121_11

	hw_uint<16> result;
	hw_uint<16> denoise_load_to_denoise_to_gp_76467_sm89_0121_11_res = denoise_load_to_denoise_to_gp_76467_sm89_0121_11_select(denoise, root, denoise_ld66, denoise_ld65, dynamic_address);
	set_at<0, 16>(result, denoise_load_to_denoise_to_gp_76467_sm89_0121_11_res);
	return result;
}

struct denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
	// Capacity: 3851
	// # of read delays: 9
  // 0, 1, 2, 1924, 1925, 1926, 3848, 3849, 3850
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 1921> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 1921> f11;
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

	inline hw_uint<16> peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1924() {
		return f6;
	}

	inline hw_uint<16> peek_1925() {
		return f8;
	}

	inline hw_uint<16> peek_1926() {
		return f10;
	}

	inline hw_uint<16> peek_3847() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_3848() {
		return f12;
	}

	inline hw_uint<16> peek_3849() {
		return f14;
	}

	inline hw_uint<16> peek_3850() {
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
    // cap: 1 reading from capacity: 1921
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1921
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1921 reading from capacity: 1
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

struct denoise_FIFO_buf68_cache {
  // Reader addrs...
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // # of banks: 1
  denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9_cache denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9;
};



inline void denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_write(hw_uint<16>& denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12, denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int denoise_to_gp_764_ld70, int denoise_to_gp_764_ld69, int dynamic_address) {
  denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.push(denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12);
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_3850();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_1926();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_2();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_3849();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_1925();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_1();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_3848();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_1924();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

inline hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83_select(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83 read pattern: { demosaicb_update_0_sm95_0135[root = 0, demosaicb_0, demosaicb_1] -> denoise_FIFO_buf68[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12 = denoise_FIFO_buf68.denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_merged_banks_9.peek_0();
  return value_denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm95_0135_read
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82
//	denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83
inline hw_uint<144> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_read_bundle_read(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  // # of ports in bundle: 9
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82
    // denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83

	hw_uint<144> result;
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<0, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_75_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<16, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_76_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<32, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_77_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<48, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_78_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<64, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_79_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<80, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_80_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<96, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_81_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<112, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_82_res);
	hw_uint<16> denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83_res = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83_select(denoise_FIFO_buf68, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<128, 144>(result, denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_83_res);
	return result;
}

// load_to_denoise_FIFO_buf6871_sm104_0153_write
//	denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12
inline void denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_write_bundle_write(hw_uint<16>& load_to_denoise_FIFO_buf6871_sm104_0153_write, denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int root, int denoise_to_gp_764_ld70, int denoise_to_gp_764_ld69, int dynamic_address) {
	hw_uint<16> denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_res = load_to_denoise_FIFO_buf6871_sm104_0153_write.extract<0, 15>();
	denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_write(denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_12_res, denoise_FIFO_buf68, root, denoise_to_gp_764_ld70, denoise_to_gp_764_ld69, dynamic_address);
}

struct denoiseb_denoiseb_update_0_sm93_0129_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
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
    // { load_to_denoiseb_to_gp_87275_sm91_0125[root = 0, denoiseb_ld74, denoiseb_ld73] -> denoiseb[denoiseb_ld73, denoiseb_ld74] : 0 <= denoiseb_ld74 <= 1083 and 0 <= denoiseb_ld73 <= 1923 }
  // # of banks: 1
  denoiseb_denoiseb_update_0_sm93_0129_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7_cache denoiseb_denoiseb_update_0_sm93_0129_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7;
};



inline void denoiseb_denoiseb_update_0_sm93_0129_46_write(hw_uint<16>& denoiseb_denoiseb_update_0_sm93_0129_46, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_sm93_0129_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7.push(denoiseb_denoiseb_update_0_sm93_0129_46);
}

inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7_select(denoiseb_cache& denoiseb, int root, int denoiseb_ld74, int denoiseb_ld73, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7 read pattern: { load_to_denoiseb_to_gp_87275_sm91_0125[root = 0, denoiseb_ld74, denoiseb_ld73] -> denoiseb[denoiseb_ld73, denoiseb_ld74] : 0 <= denoiseb_ld74 <= 1083 and 0 <= denoiseb_ld73 <= 1923 }
  // Read schedule : { load_to_denoiseb_to_gp_87275_sm91_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoiseb_denoiseb_update_0_sm93_0129_46 = denoiseb.denoiseb_denoiseb_update_0_sm93_0129_46_to_denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_sm93_0129_46;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm93_0129_write
//	denoiseb_denoiseb_update_0_sm93_0129_46
inline void denoiseb_denoiseb_update_0_sm93_0129_write_bundle_write(hw_uint<16>& denoiseb_update_0_sm93_0129_write, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_sm93_0129_46_res = denoiseb_update_0_sm93_0129_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_sm93_0129_46_write(denoiseb_denoiseb_update_0_sm93_0129_46_res, denoiseb, root, denoiseb_0, denoiseb_1, dynamic_address);
}

// load_to_denoiseb_to_gp_87275_sm91_0125_read
//	denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7
inline hw_uint<16> denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_read_bundle_read(denoiseb_cache& denoiseb, int root, int denoiseb_ld74, int denoiseb_ld73, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7

	hw_uint<16> result;
	hw_uint<16> denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7_res = denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7_select(denoiseb, root, denoiseb_ld74, denoiseb_ld73, dynamic_address);
	set_at<0, 16>(result, denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_7_res);
	return result;
}

struct denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73_cache {
	// RAM Box: {[0, 1923], [0, 1083]}
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

struct denoiseb_FIFO_buf76_cache {
  // Reader addrs...
    // { denoise_update_0_sm94_0133[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf76[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1923 }
  // # of banks: 1
  denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73_cache denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73;
};



inline void denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_write(hw_uint<16>& denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8, denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoiseb_to_gp_872_ld78, int denoiseb_to_gp_872_ld77, int dynamic_address) {
  denoiseb_FIFO_buf76.denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73.push(denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8);
}

inline hw_uint<16> denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73_select(denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoise_0, int denoise_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73 read pattern: { denoise_update_0_sm94_0133[root = 0, denoise_0, denoise_1] -> denoiseb_FIFO_buf76[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1923 }
  // Read schedule : { denoise_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_denoiseb_FIFO_buf7679_sm109_0163[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8 = denoiseb_FIFO_buf76.denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_to_denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73.peek(/* one reader or all rams */ 0);
  return value_denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm94_0133_read
//	denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73
inline hw_uint<16> denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_read_bundle_read(denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoise_0, int denoise_1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73

	hw_uint<16> result;
	hw_uint<16> denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73_res = denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73_select(denoiseb_FIFO_buf76, root, denoise_0, denoise_1, dynamic_address);
	set_at<0, 16>(result, denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_73_res);
	return result;
}

// load_to_denoiseb_FIFO_buf7679_sm109_0163_write
//	denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8
inline void denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_write_bundle_write(hw_uint<16>& load_to_denoiseb_FIFO_buf7679_sm109_0163_write, denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int root, int denoiseb_to_gp_872_ld78, int denoiseb_to_gp_872_ld77, int dynamic_address) {
	hw_uint<16> denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_res = load_to_denoiseb_FIFO_buf7679_sm109_0163_write.extract<0, 15>();
	denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_write(denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_8_res, denoiseb_FIFO_buf76, root, denoiseb_to_gp_872_ld78, denoiseb_to_gp_872_ld77, dynamic_address);
}

struct raw_raw_update_0_sm92_0127_0_to_raw_load_to_raw_to_gp_98083_sm119_0183_3_cache {
	// RAM Box: {[0, 1927], [0, 1087]}
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
    // { load_to_raw_to_gp_98083_sm119_0183[root = 0, raw_ld82, raw_ld81] -> raw[raw_ld81, raw_ld82] : 0 <= raw_ld82 <= 1087 and 0 <= raw_ld81 <= 1927 }
  // # of banks: 1
  raw_raw_update_0_sm92_0127_0_to_raw_load_to_raw_to_gp_98083_sm119_0183_3_cache raw_raw_update_0_sm92_0127_0_to_raw_load_to_raw_to_gp_98083_sm119_0183_3;
};



inline void raw_raw_update_0_sm92_0127_0_write(hw_uint<16>& raw_raw_update_0_sm92_0127_0, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
  raw.raw_raw_update_0_sm92_0127_0_to_raw_load_to_raw_to_gp_98083_sm119_0183_3.push(raw_raw_update_0_sm92_0127_0);
}

inline hw_uint<16> raw_load_to_raw_to_gp_98083_sm119_0183_3_select(raw_cache& raw, int root, int raw_ld82, int raw_ld81, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_load_to_raw_to_gp_98083_sm119_0183_3 read pattern: { load_to_raw_to_gp_98083_sm119_0183[root = 0, raw_ld82, raw_ld81] -> raw[raw_ld81, raw_ld82] : 0 <= raw_ld82 <= 1087 and 0 <= raw_ld81 <= 1927 }
  // Read schedule : { load_to_raw_to_gp_98083_sm119_0183[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  // Write schedule: { raw_update_0_sm92_0127[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm92_0127_0 = raw.raw_raw_update_0_sm92_0127_0_to_raw_load_to_raw_to_gp_98083_sm119_0183_3.peek(/* one reader or all rams */ 0);
  return value_raw_raw_update_0_sm92_0127_0;
  return 0;
}

// # of bundles = 2
// load_to_raw_to_gp_98083_sm119_0183_read
//	raw_load_to_raw_to_gp_98083_sm119_0183_3
inline hw_uint<16> raw_load_to_raw_to_gp_98083_sm119_0183_read_bundle_read(raw_cache& raw, int root, int raw_ld82, int raw_ld81, int dynamic_address) {
  // # of ports in bundle: 1
    // raw_load_to_raw_to_gp_98083_sm119_0183_3

	hw_uint<16> result;
	hw_uint<16> raw_load_to_raw_to_gp_98083_sm119_0183_3_res = raw_load_to_raw_to_gp_98083_sm119_0183_3_select(raw, root, raw_ld82, raw_ld81, dynamic_address);
	set_at<0, 16>(result, raw_load_to_raw_to_gp_98083_sm119_0183_3_res);
	return result;
}

// raw_update_0_sm92_0127_write
//	raw_raw_update_0_sm92_0127_0
inline void raw_raw_update_0_sm92_0127_write_bundle_write(hw_uint<16>& raw_update_0_sm92_0127_write, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_sm92_0127_0_res = raw_update_0_sm92_0127_write.extract<0, 15>();
	raw_raw_update_0_sm92_0127_0_write(raw_raw_update_0_sm92_0127_0_res, raw, root, raw_0, raw_1, dynamic_address);
}

struct raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25_cache {
	// RAM Box: {[0, 1927], [0, 1087]}
	// Capacity: 7717
	// # of read delays: 25
  // 0, 1, 2, 3, 4, 1928, 1929, 1930, 1931, 1932, 3856, 3857, 3858, 3859, 3860, 5784, 5785, 5786, 5787, 5788, 7712, 7713, 7714, 7715, 7716
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 1923> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;
	hw_uint<16> f16;
	hw_uint<16> f18;
	fifo<hw_uint<16>, 1923> f19;
	hw_uint<16> f20;
	hw_uint<16> f22;
	hw_uint<16> f24;
	hw_uint<16> f26;
	hw_uint<16> f28;
	fifo<hw_uint<16>, 1923> f29;
	hw_uint<16> f30;
	hw_uint<16> f32;
	hw_uint<16> f34;
	hw_uint<16> f36;
	hw_uint<16> f38;
	fifo<hw_uint<16>, 1923> f39;
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

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_1928() {
		return f10;
	}

	inline hw_uint<16> peek_1929() {
		return f12;
	}

	inline hw_uint<16> peek_1930() {
		return f14;
	}

	inline hw_uint<16> peek_1931() {
		return f16;
	}

	inline hw_uint<16> peek_1932() {
		return f18;
	}

	inline hw_uint<16> peek_3855() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f19.back();
	}

	inline hw_uint<16> peek_3856() {
		return f20;
	}

	inline hw_uint<16> peek_3857() {
		return f22;
	}

	inline hw_uint<16> peek_3858() {
		return f24;
	}

	inline hw_uint<16> peek_3859() {
		return f26;
	}

	inline hw_uint<16> peek_3860() {
		return f28;
	}

	inline hw_uint<16> peek_5783() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f29.back();
	}

	inline hw_uint<16> peek_5784() {
		return f30;
	}

	inline hw_uint<16> peek_5785() {
		return f32;
	}

	inline hw_uint<16> peek_5786() {
		return f34;
	}

	inline hw_uint<16> peek_5787() {
		return f36;
	}

	inline hw_uint<16> peek_5788() {
		return f38;
	}

	inline hw_uint<16> peek_7711() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f39.back();
	}

	inline hw_uint<16> peek_7712() {
		return f40;
	}

	inline hw_uint<16> peek_7713() {
		return f42;
	}

	inline hw_uint<16> peek_7714() {
		return f44;
	}

	inline hw_uint<16> peek_7715() {
		return f46;
	}

	inline hw_uint<16> peek_7716() {
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
    // cap: 1 reading from capacity: 1923
    f40 = f39.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1923
    f30 = f29.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1923
    f20 = f19.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
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
    // cap: 1 reading from capacity: 1923
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1923 reading from capacity: 1
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
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // # of banks: 1
  raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25_cache raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25;
};



inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_write(hw_uint<16>& raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_980_ld86, int raw_to_gp_980_ld85, int dynamic_address) {
  raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.push(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4);
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_7716();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_5788();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_3860();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_1932();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_4();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_7715();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_5787();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_3859();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_1931();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_3();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_7714();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_5786();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_3858();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_1930();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_2();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_7713();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_5785();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_3857();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_1929();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_1();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_7712();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_5784();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_3856();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_1928();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

inline hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71_select(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71 read pattern: { denoiseb_update_0_sm93_0129[root = 0, denoiseb_0, denoiseb_1] -> raw_FIFO_buf84[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4 = raw_FIFO_buf84.raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_merged_banks_25.peek_0();
  return value_raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm93_0129_read
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70
//	raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71
inline hw_uint<400> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_read_bundle_read(raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  // # of ports in bundle: 25
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70
    // raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71

	hw_uint<400> result;
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<0, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_47_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<16, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_48_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<32, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_49_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<48, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_50_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<64, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_51_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<80, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_52_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<96, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_53_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<112, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_54_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<128, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_55_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<144, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_56_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<160, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_57_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<176, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_58_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<192, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_59_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<208, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_60_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<224, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_61_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<240, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_62_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<256, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_63_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<272, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_64_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<288, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_65_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<304, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_66_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<320, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_67_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<336, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_68_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<352, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_69_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<368, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_70_res);
	hw_uint<16> raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71_res = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71_select(raw_FIFO_buf84, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<384, 400>(result, raw_FIFO_buf84_denoiseb_update_0_sm93_0129_71_res);
	return result;
}

// load_to_raw_FIFO_buf8487_sm120_0185_write
//	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4
inline void raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_write_bundle_write(hw_uint<16>& load_to_raw_FIFO_buf8487_sm120_0185_write, raw_FIFO_buf84_cache& raw_FIFO_buf84, int root, int raw_to_gp_980_ld86, int raw_to_gp_980_ld85, int dynamic_address) {
	hw_uint<16> raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_res = load_to_raw_FIFO_buf8487_sm120_0185_write.extract<0, 15>();
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_write(raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_4_res, raw_FIFO_buf84, root, raw_to_gp_980_ld86, raw_to_gp_980_ld85, dynamic_address);
}

// Total re-use buffer capacity: 308080 bits
// Operation logic
inline void cp9_1_update_0_sm102_0149(demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */cp9_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_FIFO_buf52
	auto demosaic_diff_FIFO_buf52_1_m__lp_1_m_cp9_1_1__p__0_rp___p__0_p_0_c_____1_m_cp9_1_0__p__0_p_0_value = demosaic_diff_FIFO_buf52_cp9_1_update_0_sm102_0149_read_bundle_read(demosaic_diff_FIFO_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp9_1_generated_compute_unrolled_1(demosaic_diff_FIFO_buf52_1_m__lp_1_m_cp9_1_1__p__0_rp___p__0_p_0_c_____1_m_cp9_1_0__p__0_p_0_value);
	// Produce: cp9_1
	cp9_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_diff_FIFO_buf5255_sm118_0181(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_048, demosaic_diff_FIFO_buf52_cache& demosaic_diff_FIFO_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff_to_gp_048
	auto demosaic_diff_to_gp_048__lp_1_m_demosaic_diff_to_gp_048_ld53__p__0_rp__c____demosaic_diff_to_gp_048_ld54_value = demosaic_diff_to_gp_048.read();
	// Produce: demosaic_diff_FIFO_buf52
	demosaic_diff_FIFO_buf52_load_to_demosaic_diff_FIFO_buf5255_sm118_0181_write_bundle_write(/* arg names */demosaic_diff_to_gp_048__lp_1_m_demosaic_diff_to_gp_048_ld53__p__0_rp__c____demosaic_diff_to_gp_048_ld54_value, demosaic_diff_FIFO_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_cp9_1_0_demosaic_diff_to_gp_048_ld54_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_diff_to_gp_048, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_cp9_1_0_demosaic_diff_to_gp_048_ld54__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_diff_FIFO_buf52_cache demosaic_diff_FIFO_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_diff_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; cp9_1_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_diff_FIFO_buf5255_sm118_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 31] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_diff_FIFO_buf5255_sm118_0181(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { cp9_1_update_0_sm102_0149[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 32] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for cp9_1_update_0_sm102_0149(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 31 <= i3 <= 32 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_diff_FIFO_buf5255_sm118_0181(demosaic_diff_to_gp_048 /* buf name */, demosaic_diff_FIFO_buf52, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          cp9_1_update_0_sm102_0149(demosaic_diff_FIFO_buf52 /* buf name */, cp9_1, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void demosaic_update_0_sm96_0137(demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, demosaic_cache& demosaic, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_FIFO_buf60
	auto demosaicb_FIFO_buf60_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value = demosaicb_FIFO_buf60_demosaic_update_0_sm96_0137_read_bundle_read(demosaicb_FIFO_buf60/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf60_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_sm96_0137_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_303_sm103_0151(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value = demosaic_load_to_demosaic_to_gp_303_sm103_0151_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_30
	demosaic_to_gp_30.write(demosaic__lp_1_m_demosaic_ld1__p__0_rp__c____demosaic_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaicb_FIFO_buf6063_sm107_0159(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_156, demosaicb_FIFO_buf60_cache& demosaicb_FIFO_buf60, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb_to_gp_156
	auto demosaicb_to_gp_156__lp_1_m_demosaicb_to_gp_156_ld61__p__0_rp__c____demosaicb_to_gp_156_ld62_value = demosaicb_to_gp_156.read();
	// Produce: demosaicb_FIFO_buf60
	demosaicb_FIFO_buf60_load_to_demosaicb_FIFO_buf6063_sm107_0159_write_bundle_write(/* arg names */demosaicb_to_gp_156__lp_1_m_demosaicb_to_gp_156_ld61__p__0_rp__c____demosaicb_to_gp_156_ld62_value, demosaicb_FIFO_buf60, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_to_gp_6811_sm110_0165(demosaic_cache& demosaic, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic__lp_1_m_demosaic_ld9__p__0_rp__c____demosaic_ld10_value = demosaic_load_to_demosaic_to_gp_6811_sm110_0165_read_bundle_read(demosaic/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_to_gp_68
	demosaic_to_gp_68.write(demosaic__lp_1_m_demosaic_ld9__p__0_rp__c____demosaic_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_0_demosaic_ld10_demosaic_ld2_demosaicb_to_gp_156_ld62_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaicb_to_gp_156, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_30, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_68) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_0_demosaic_ld10_demosaic_ld2_demosaicb_to_gp_156_ld62__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicb_FIFO_buf60_cache demosaicb_FIFO_buf60;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaicb_FIFO_buf6063_sm107_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_demosaic_to_gp_6811_sm110_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_to_gp_303_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; demosaic_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
//   { load_to_demosaicb_FIFO_buf6063_sm107_0159[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 11] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaicb_FIFO_buf6063_sm107_0159(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_to_gp_6811_sm110_0165[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 15] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_to_gp_6811_sm110_0165(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1925 + -1*i2)) >= 0)))
//   { load_to_demosaic_to_gp_303_sm103_0151[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 13] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaic_to_gp_303_sm103_0151(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_update_0_sm96_0137[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 12] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for demosaic_update_0_sm96_0137(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927 and 11 <= i3 <= 13; [0, i1, i2, 15] : 8 <= i1 <= 1087 and 6 <= i2 <= 1925 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaicb_FIFO_buf6063_sm107_0159(demosaicb_to_gp_156 /* buf name */, demosaicb_FIFO_buf60, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_update_0_sm96_0137(demosaicb_FIFO_buf60 /* buf name */, demosaic, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_to_gp_303_sm103_0151(demosaic /* buf name */, demosaic_to_gp_30, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 <= 1925 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 <= 1925 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 1925 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((1925 + -1*i2)) >= 0)))) {
	          load_to_demosaic_to_gp_6811_sm110_0165(demosaic /* buf name */, demosaic_to_gp_68, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void raw_update_0_sm92_0127(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value);
	// Produce: raw
	raw_raw_update_0_sm92_0127_write_bundle_write(/* arg names */compute_result, raw, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_raw_to_gp_98083_sm119_0183(raw_cache& raw, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_980, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw
	auto raw__lp_1_m_raw_ld81__p__0_rp__c____raw_ld82_value = raw_load_to_raw_to_gp_98083_sm119_0183_read_bundle_read(raw/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: raw_to_gp_980
	raw_to_gp_980.write(raw__lp_1_m_raw_ld81__p__0_rp__c____raw_ld82_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_raw_0_raw_ld82_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_to_gp_980) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_raw_0_raw_ld82__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { raw_update_0_sm92_0127[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927; load_to_raw_to_gp_98083_sm119_0183[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
//   { raw_update_0_sm92_0127[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for raw_update_0_sm92_0127(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_raw_to_gp_98083_sm119_0183[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for load_to_raw_to_gp_98083_sm119_0183(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1087 and 0 <= i2 <= 1927 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          raw_update_0_sm92_0127(raw_oc /* buf name */, raw, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_to_gp_98083_sm119_0183(raw /* buf name */, raw_to_gp_980, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bxb_FIFO_buf2831_sm116_0177(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_224, demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_to_gp_224
	auto demosaic_bxb_to_gp_224__lp_1_m_demosaic_bxb_to_gp_224_ld29__p__0_rp__c____demosaic_bxb_to_gp_224_ld30_value = demosaic_bxb_to_gp_224.read();
	// Produce: demosaic_bxb_FIFO_buf28
	demosaic_bxb_FIFO_buf28_load_to_demosaic_bxb_FIFO_buf2831_sm116_0177_write_bundle_write(/* arg names */demosaic_bxb_to_gp_224__lp_1_m_demosaic_bxb_to_gp_224_ld29__p__0_rp__c____demosaic_bxb_to_gp_224_ld30_value, demosaic_bxb_FIFO_buf28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bx_update_0_sm98_0141(demosaic_bxb_FIFO_buf28_cache& demosaic_bxb_FIFO_buf28, demosaic_bx_cache& demosaic_bx, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb_FIFO_buf28
	auto demosaic_bxb_FIFO_buf28_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value = demosaic_bxb_FIFO_buf28_demosaic_bx_update_0_sm98_0141_read_bundle_read(demosaic_bxb_FIFO_buf28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf28_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_sm98_0141_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bx_to_gp_51619_sm106_0157(demosaic_bx_cache& demosaic_bx, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_516, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx__lp_1_m_demosaic_bx_ld17__p__0_rp__c____demosaic_bx_ld18_value = demosaic_bx_load_to_demosaic_bx_to_gp_51619_sm106_0157_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bx_to_gp_516
	demosaic_bx_to_gp_516.write(demosaic_bx__lp_1_m_demosaic_bx_ld17__p__0_rp__c____demosaic_bx_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bx_0_demosaic_bx_ld18_demosaic_bxb_to_gp_224_ld30_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bxb_to_gp_224, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bx_to_gp_516) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bx_0_demosaic_bx_ld18_demosaic_bxb_to_gp_224_ld30__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_FIFO_buf28_cache demosaic_bxb_FIFO_buf28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_bxb_FIFO_buf2831_sm116_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; load_to_demosaic_bx_to_gp_51619_sm106_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; demosaic_bx_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_bxb_FIFO_buf2831_sm116_0177[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 19] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bxb_FIFO_buf2831_sm116_0177(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_bx_to_gp_51619_sm106_0157[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 21] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bx_to_gp_51619_sm106_0157(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_bx_update_0_sm98_0141[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 20] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for demosaic_bx_update_0_sm98_0141(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 8 <= i2 <= 1927 and 19 <= i3 <= 21 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bxb_FIFO_buf2831_sm116_0177(demosaic_bxb_to_gp_224 /* buf name */, demosaic_bxb_FIFO_buf28, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_bx_update_0_sm98_0141(demosaic_bxb_FIFO_buf28 /* buf name */, demosaic_bx, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_to_gp_51619_sm106_0157(demosaic_bx /* buf name */, demosaic_bx_to_gp_516, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf47_sm105_0155(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_30, demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_30
	auto demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld5__p__0_rp__c____demosaic_to_gp_30_ld6_value = demosaic_to_gp_30.read();
	// Produce: demosaic_FIFO_buf4
	demosaic_FIFO_buf4_load_to_demosaic_FIFO_buf47_sm105_0155_write_bundle_write(/* arg names */demosaic_to_gp_30__lp_1_m_demosaic_to_gp_30_ld5__p__0_rp__c____demosaic_to_gp_30_ld6_value, demosaic_FIFO_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bxb_update_0_sm97_0139(demosaic_FIFO_buf4_cache& demosaic_FIFO_buf4, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf4
	auto demosaic_FIFO_buf4_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value = demosaic_FIFO_buf4_demosaic_bxb_update_0_sm97_0139_read_bundle_read(demosaic_FIFO_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf4_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_sm97_0139_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_bxb_to_gp_22427_sm88_0131(demosaic_bxb_cache& demosaic_bxb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bxb_to_gp_224, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb__lp_1_m_demosaic_bxb_ld25__p__0_rp__c____demosaic_bxb_ld26_value = demosaic_bxb_load_to_demosaic_bxb_to_gp_22427_sm88_0131_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_bxb_to_gp_224
	demosaic_bxb_to_gp_224.write(demosaic_bxb__lp_1_m_demosaic_bxb_ld25__p__0_rp__c____demosaic_bxb_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bxb_0_demosaic_bxb_ld26_demosaic_to_gp_30_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_30, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bxb_to_gp_224) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bxb_0_demosaic_bxb_ld26_demosaic_to_gp_30_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_FIFO_buf4_cache demosaic_FIFO_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaic_bxb_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; load_to_demosaic_FIFO_buf47_sm105_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_demosaic_bxb_to_gp_22427_sm88_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
//   { demosaic_bxb_update_0_sm97_0139[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 16] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for demosaic_bxb_update_0_sm97_0139(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_FIFO_buf47_sm105_0155[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 14] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaic_FIFO_buf47_sm105_0155(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_bxb_to_gp_22427_sm88_0131[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 17] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bxb_to_gp_22427_sm88_0131(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 8 <= i2 <= 1927 and 16 <= i3 <= 17; [0, i1, i2, 14] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_FIFO_buf47_sm105_0155(demosaic_to_gp_30 /* buf name */, demosaic_FIFO_buf4, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          demosaic_bxb_update_0_sm97_0139(demosaic_FIFO_buf4 /* buf name */, demosaic_bxb, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_bxb_to_gp_22427_sm88_0131(demosaic_bxb /* buf name */, demosaic_bxb_to_gp_224, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_byb_FIFO_buf4447_sm115_0175(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_440, demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_to_gp_440
	auto demosaic_byb_to_gp_440__lp_1_m_demosaic_byb_to_gp_440_ld45__p__0_rp__c____demosaic_byb_to_gp_440_ld46_value = demosaic_byb_to_gp_440.read();
	// Produce: demosaic_byb_FIFO_buf44
	demosaic_byb_FIFO_buf44_load_to_demosaic_byb_FIFO_buf4447_sm115_0175_write_bundle_write(/* arg names */demosaic_byb_to_gp_440__lp_1_m_demosaic_byb_to_gp_440_ld45__p__0_rp__c____demosaic_byb_to_gp_440_ld46_value, demosaic_byb_FIFO_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0_sm100_0145(demosaic_byb_FIFO_buf44_cache& demosaic_byb_FIFO_buf44, demosaic_by_cache& demosaic_by, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb_FIFO_buf44
	auto demosaic_byb_FIFO_buf44_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value = demosaic_byb_FIFO_buf44_demosaic_by_update_0_sm100_0145_read_bundle_read(demosaic_byb_FIFO_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf44_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_sm100_0145_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_to_gp_63235_sm113_0171(demosaic_by_cache& demosaic_by, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_632, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by
	auto demosaic_by__lp_1_m_demosaic_by_ld33__p__0_rp__c____demosaic_by_ld34_value = demosaic_by_load_to_demosaic_by_to_gp_63235_sm113_0171_read_bundle_read(demosaic_by/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_by_to_gp_632
	demosaic_by_to_gp_632.write(demosaic_by__lp_1_m_demosaic_by_ld33__p__0_rp__c____demosaic_by_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_by_0_demosaic_by_ld34_demosaic_byb_to_gp_440_ld46_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_byb_to_gp_440, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_by_to_gp_632) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_by_0_demosaic_by_ld34_demosaic_byb_to_gp_440_ld46__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_FIFO_buf44_cache demosaic_byb_FIFO_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaic_by_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_byb_FIFO_buf4447_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_by_to_gp_63235_sm113_0171[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { demosaic_by_update_0_sm100_0145[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_by_update_0_sm100_0145(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_byb_FIFO_buf4447_sm115_0175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_byb_FIFO_buf4447_sm115_0175(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_to_gp_63235_sm113_0171[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 27] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_by_to_gp_63235_sm113_0171(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 25 <= i3 <= 27 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_byb_FIFO_buf4447_sm115_0175(demosaic_byb_to_gp_440 /* buf name */, demosaic_byb_FIFO_buf44, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          demosaic_by_update_0_sm100_0145(demosaic_byb_FIFO_buf44 /* buf name */, demosaic_by, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_by_to_gp_63235_sm113_0171(demosaic_by /* buf name */, demosaic_by_to_gp_632, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_bx_FIFO_buf2023_sm111_0167(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_bx_to_gp_516, demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_to_gp_516
	auto demosaic_bx_to_gp_516__lp_1_m_demosaic_bx_to_gp_516_ld21__p__0_rp__c____demosaic_bx_to_gp_516_ld22_value = demosaic_bx_to_gp_516.read();
	// Produce: demosaic_bx_FIFO_buf20
	demosaic_bx_FIFO_buf20_load_to_demosaic_bx_FIFO_buf2023_sm111_0167_write_bundle_write(/* arg names */demosaic_bx_to_gp_516__lp_1_m_demosaic_bx_to_gp_516_ld21__p__0_rp__c____demosaic_bx_to_gp_516_ld22_value, demosaic_bx_FIFO_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0_sm99_0143(demosaic_bx_FIFO_buf20_cache& demosaic_bx_FIFO_buf20, demosaic_byb_cache& demosaic_byb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_bx_FIFO_buf20
	auto demosaic_bx_FIFO_buf20_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value = demosaic_bx_FIFO_buf20_demosaic_byb_update_0_sm99_0143_read_bundle_read(demosaic_bx_FIFO_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf20_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_sm99_0143_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_byb_to_gp_44043_sm112_0169(demosaic_byb_cache& demosaic_byb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_byb_to_gp_440, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb__lp_1_m_demosaic_byb_ld41__p__0_rp__c____demosaic_byb_ld42_value = demosaic_byb_load_to_demosaic_byb_to_gp_44043_sm112_0169_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_byb_to_gp_440
	demosaic_byb_to_gp_440.write(demosaic_byb__lp_1_m_demosaic_byb_ld41__p__0_rp__c____demosaic_byb_ld42_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_bx_to_gp_516_ld22_demosaic_byb_0_demosaic_byb_ld42_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_bx_to_gp_516, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_byb_to_gp_440) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_bx_to_gp_516_ld22_demosaic_byb_0_demosaic_byb_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_bx_FIFO_buf20_cache demosaic_bx_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_cache demosaic_byb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_bx_FIFO_buf2023_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; load_to_demosaic_byb_to_gp_44043_sm112_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_byb_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_bx_FIFO_buf2023_sm111_0167[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 22] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_bx_FIFO_buf2023_sm111_0167(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_byb_to_gp_44043_sm112_0169[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_byb_to_gp_44043_sm112_0169(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_byb_update_0_sm99_0143[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 23] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_byb_update_0_sm99_0143(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 23 <= i3 <= 24; [0, i1, i2, 22] : 6 <= i1 <= 1087 and 8 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1087; i1++) {
	    for (int i2 = 8; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_demosaic_bx_FIFO_buf2023_sm111_0167(demosaic_bx_to_gp_516 /* buf name */, demosaic_bx_FIFO_buf20, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          demosaic_byb_update_0_sm99_0143(demosaic_bx_FIFO_buf20 /* buf name */, demosaic_byb, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0)))) {
	          load_to_demosaic_byb_to_gp_44043_sm112_0169(demosaic_byb /* buf name */, demosaic_byb_to_gp_440, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_demosaic_FIFO_buf1215_sm90_0123(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_to_gp_68, demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_to_gp_68
	auto demosaic_to_gp_68__lp_1_m_demosaic_to_gp_68_ld13__p__0_rp__c____demosaic_to_gp_68_ld14_value = demosaic_to_gp_68.read();
	// Produce: demosaic_FIFO_buf12
	demosaic_FIFO_buf12_load_to_demosaic_FIFO_buf1215_sm90_0123_write_bundle_write(/* arg names */demosaic_to_gp_68__lp_1_m_demosaic_to_gp_68_ld13__p__0_rp__c____demosaic_to_gp_68_ld14_value, demosaic_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_by_FIFO_buf3639_sm114_0173(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_by_to_gp_632, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_by_to_gp_632
	auto demosaic_by_to_gp_632__lp_1_m_demosaic_by_to_gp_632_ld37__p__0_rp__c____demosaic_by_to_gp_632_ld38_value = demosaic_by_to_gp_632.read();
	// Produce: demosaic_by_FIFO_buf36
	demosaic_by_FIFO_buf36_load_to_demosaic_by_FIFO_buf3639_sm114_0173_write_bundle_write(/* arg names */demosaic_by_to_gp_632__lp_1_m_demosaic_by_to_gp_632_ld37__p__0_rp__c____demosaic_by_to_gp_632_ld38_value, demosaic_by_FIFO_buf36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0_sm101_0147(demosaic_FIFO_buf12_cache& demosaic_FIFO_buf12, demosaic_by_FIFO_buf36_cache& demosaic_by_FIFO_buf36, demosaic_diff_cache& demosaic_diff, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_FIFO_buf12
	auto demosaic_FIFO_buf12_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_FIFO_buf12_demosaic_diff_update_0_sm101_0147_read_bundle_read(demosaic_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by_FIFO_buf36
	auto demosaic_by_FIFO_buf36_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_by_FIFO_buf36_demosaic_diff_update_0_sm101_0147_read_bundle_read(demosaic_by_FIFO_buf36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf12_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value, demosaic_by_FIFO_buf36_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_sm101_0147_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaic_diff_to_gp_04851_sm117_0179(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaic_diff_to_gp_048, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff__lp_1_m_demosaic_diff_ld49__p__0_rp__c____demosaic_diff_ld50_value = demosaic_diff_load_to_demosaic_diff_to_gp_04851_sm117_0179_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaic_diff_to_gp_048
	demosaic_diff_to_gp_048.write(demosaic_diff__lp_1_m_demosaic_diff_ld49__p__0_rp__c____demosaic_diff_ld50_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaic_by_to_gp_632_ld38_demosaic_diff_0_demosaic_diff_ld50_demosaic_to_gp_68_ld14_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_by_to_gp_632, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_to_gp_68, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaic_diff_to_gp_048) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaic_by_to_gp_632_ld38_demosaic_diff_0_demosaic_diff_ld50_demosaic_to_gp_68_ld14__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_FIFO_buf12_cache demosaic_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_FIFO_buf36_cache demosaic_by_FIFO_buf36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaic_FIFO_buf1215_sm90_0123[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_diff_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_diff_to_gp_04851_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_demosaic_by_FIFO_buf3639_sm114_0173[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_demosaic_FIFO_buf1215_sm90_0123[d0 = 0, d1, d2] -> [0, 8 + d1, 6 + d2, 18] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_FIFO_buf1215_sm90_0123(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1925 + -1*i2)) >= 0)))
//   { demosaic_diff_update_0_sm101_0147[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 29] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_diff_update_0_sm101_0147(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_diff_to_gp_04851_sm117_0179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 30] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_diff_to_gp_04851_sm117_0179(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_demosaic_by_FIFO_buf3639_sm114_0173[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 28] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_demosaic_by_FIFO_buf3639_sm114_0173(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1087 and 8 <= i2 <= 1927 and 28 <= i3 <= 30; [0, i1, i2, 18] : 8 <= i1 <= 1087 and 6 <= i2 <= 1925 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1087; i1++) {
	    for (int i2 = 6; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i2 <= 1925 }
	        // { [i0, i1, i2] : i2 <= 1925 }
	          // { [i0, i1, i2] : 1925 - i2 >= 0 }
	        if ((((((1925 + -1*i2)) >= 0)))) {
	          load_to_demosaic_FIFO_buf1215_sm90_0123(demosaic_to_gp_68 /* buf name */, demosaic_FIFO_buf12, 0, ((-8 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_by_FIFO_buf3639_sm114_0173(demosaic_by_to_gp_632 /* buf name */, demosaic_by_FIFO_buf36, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          demosaic_diff_update_0_sm101_0147(demosaic_FIFO_buf12 /* buf name */, demosaic_by_FIFO_buf36 /* buf name */, demosaic_diff, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i2 >= 8 }
	        // { [i0, i1, i2] : i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i2)) >= 0)))) {
	          load_to_demosaic_diff_to_gp_04851_sm117_0179(demosaic_diff /* buf name */, demosaic_diff_to_gp_048, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoise_FIFO_buf6871_sm104_0153(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_764, denoise_FIFO_buf68_cache& denoise_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_to_gp_764
	auto denoise_to_gp_764__lp_1_m_denoise_to_gp_764_ld69__p__0_rp__c____denoise_to_gp_764_ld70_value = denoise_to_gp_764.read();
	// Produce: denoise_FIFO_buf68
	denoise_FIFO_buf68_load_to_denoise_FIFO_buf6871_sm104_0153_write_bundle_write(/* arg names */denoise_to_gp_764__lp_1_m_denoise_to_gp_764_ld69__p__0_rp__c____denoise_to_gp_764_ld70_value, denoise_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0_sm95_0135(denoise_FIFO_buf68_cache& denoise_FIFO_buf68, demosaicb_cache& demosaicb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise_FIFO_buf68
	auto denoise_FIFO_buf68_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value = denoise_FIFO_buf68_demosaicb_update_0_sm95_0135_read_bundle_read(denoise_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf68_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_sm95_0135_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_demosaicb_to_gp_15659_sm108_0161(demosaicb_cache& demosaicb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */demosaicb_to_gp_156, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb__lp_1_m_demosaicb_ld57__p__0_rp__c____demosaicb_ld58_value = demosaicb_load_to_demosaicb_to_gp_15659_sm108_0161_read_bundle_read(demosaicb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: demosaicb_to_gp_156
	demosaicb_to_gp_156.write(demosaicb__lp_1_m_demosaicb_ld57__p__0_rp__c____demosaicb_ld58_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_demosaicb_0_demosaicb_ld58_denoise_to_gp_764_ld70_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoise_to_gp_764, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */demosaicb_to_gp_156) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_demosaicb_0_demosaicb_ld58_denoise_to_gp_764_ld70__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaicb_cache demosaicb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoise_FIFO_buf68_cache denoise_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_demosaicb_to_gp_15659_sm108_0161[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
//   { load_to_demosaicb_to_gp_15659_sm108_0161[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 10] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for load_to_demosaicb_to_gp_15659_sm108_0161(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaicb_update_0_sm95_0135[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 9] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for demosaicb_update_0_sm95_0135(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_denoise_FIFO_buf6871_sm104_0153[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 8] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoise_FIFO_buf6871_sm104_0153(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1087 and 6 <= i2 <= 1927 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_FIFO_buf6871_sm104_0153(denoise_to_gp_764 /* buf name */, denoise_FIFO_buf68, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          demosaicb_update_0_sm95_0135(denoise_FIFO_buf68 /* buf name */, demosaicb, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_demosaicb_to_gp_15659_sm108_0161(demosaicb /* buf name */, demosaicb_to_gp_156, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_denoiseb_FIFO_buf7679_sm109_0163(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_872, denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_to_gp_872
	auto denoiseb_to_gp_872__lp_1_m_denoiseb_to_gp_872_ld77__p__0_rp__c____denoiseb_to_gp_872_ld78_value = denoiseb_to_gp_872.read();
	// Produce: denoiseb_FIFO_buf76
	denoiseb_FIFO_buf76_load_to_denoiseb_FIFO_buf7679_sm109_0163_write_bundle_write(/* arg names */denoiseb_to_gp_872__lp_1_m_denoiseb_to_gp_872_ld77__p__0_rp__c____denoiseb_to_gp_872_ld78_value, denoiseb_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0_sm94_0133(denoiseb_FIFO_buf76_cache& denoiseb_FIFO_buf76, denoise_cache& denoise, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb_FIFO_buf76
	auto denoiseb_FIFO_buf76_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value = denoiseb_FIFO_buf76_denoise_update_0_sm94_0133_read_bundle_read(denoiseb_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf76_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value);
	// Produce: denoise
	denoise_denoise_update_0_sm94_0133_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoise_to_gp_76467_sm89_0121(denoise_cache& denoise, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoise_to_gp_764, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise__lp_1_m_denoise_ld65__p__0_rp__c____denoise_ld66_value = denoise_load_to_denoise_to_gp_76467_sm89_0121_read_bundle_read(denoise/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoise_to_gp_764
	denoise_to_gp_764.write(denoise__lp_1_m_denoise_ld65__p__0_rp__c____denoise_ld66_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_denoise_0_denoise_ld66_denoiseb_to_gp_872_ld78_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoiseb_to_gp_872, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoise_to_gp_764) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_denoise_0_denoise_ld66_denoiseb_to_gp_872_ld78__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  denoise_cache denoise;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoiseb_FIFO_buf76_cache denoiseb_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { denoise_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; load_to_denoiseb_FIFO_buf7679_sm109_0163[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; load_to_denoise_to_gp_76467_sm89_0121[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
//   { denoise_update_0_sm94_0133[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 6] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for denoise_update_0_sm94_0133(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_denoiseb_FIFO_buf7679_sm109_0163[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 5] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoiseb_FIFO_buf7679_sm109_0163(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_denoise_to_gp_76467_sm89_0121[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 7] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoise_to_gp_76467_sm89_0121(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 and 5 <= i3 <= 7 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1087; i1++) {
	    for (int i2 = 4; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoiseb_FIFO_buf7679_sm109_0163(denoiseb_to_gp_872 /* buf name */, denoiseb_FIFO_buf76, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          denoise_update_0_sm94_0133(denoiseb_FIFO_buf76 /* buf name */, denoise, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_denoise_to_gp_76467_sm89_0121(denoise /* buf name */, denoise_to_gp_764, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_raw_FIFO_buf8487_sm120_0185(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_to_gp_980, raw_FIFO_buf84_cache& raw_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_to_gp_980
	auto raw_to_gp_980__lp_1_m_raw_to_gp_980_ld85__p__0_rp__c____raw_to_gp_980_ld86_value = raw_to_gp_980.read();
	// Produce: raw_FIFO_buf84
	raw_FIFO_buf84_load_to_raw_FIFO_buf8487_sm120_0185_write_bundle_write(/* arg names */raw_to_gp_980__lp_1_m_raw_to_gp_980_ld85__p__0_rp__c____raw_to_gp_980_ld86_value, raw_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoiseb_update_0_sm93_0129(raw_FIFO_buf84_cache& raw_FIFO_buf84, denoiseb_cache& denoiseb, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: raw_FIFO_buf84
	auto raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value = raw_FIFO_buf84_denoiseb_update_0_sm93_0129_read_bundle_read(raw_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_sm93_0129_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_denoiseb_to_gp_87275_sm91_0125(denoiseb_cache& denoiseb, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */denoiseb_to_gp_872, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb__lp_1_m_denoiseb_ld73__p__0_rp__c____denoiseb_ld74_value = denoiseb_load_to_denoiseb_to_gp_87275_sm91_0125_read_bundle_read(denoiseb/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: denoiseb_to_gp_872
	denoiseb_to_gp_872.write(denoiseb__lp_1_m_denoiseb_ld73__p__0_rp__c____denoiseb_ld74_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_denoiseb_0_denoiseb_ld74_raw_to_gp_980_ld86_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_to_gp_980, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */denoiseb_to_gp_872) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_denoiseb_0_denoiseb_ld74_raw_to_gp_980_ld86__debug.csv");
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

// schedule: { load_to_denoiseb_to_gp_87275_sm91_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927; denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
//   { load_to_denoiseb_to_gp_87275_sm91_0125[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 4] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for load_to_denoiseb_to_gp_87275_sm91_0125(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { load_to_raw_FIFO_buf8487_sm120_0185[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for load_to_raw_FIFO_buf8487_sm120_0185(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { denoiseb_update_0_sm93_0129[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 3] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for denoiseb_update_0_sm93_0129(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1087 and 0 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_raw_FIFO_buf8487_sm120_0185(raw_to_gp_980 /* buf name */, raw_FIFO_buf84, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          denoiseb_update_0_sm93_0129(raw_FIFO_buf84 /* buf name */, denoiseb, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_denoiseb_to_gp_87275_sm91_0125(denoiseb /* buf name */, denoiseb_to_gp_872, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void cp9_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp9_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_bx_to_gp_516 = 512
// Bits to slack match demosaic_bx_to_gp_516 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_bxb_to_gp_224 = 512
// Bits to slack match demosaic_bxb_to_gp_224 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_by_to_gp_632 = 512
// Bits to slack match demosaic_by_to_gp_632 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_byb_to_gp_440 = 512
// Bits to slack match demosaic_byb_to_gp_440 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_diff_to_gp_048 = 512
// Bits to slack match demosaic_diff_to_gp_048 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_to_gp_30 = 512
// Bits to slack match demosaic_to_gp_30 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaic_to_gp_68 = 512
// Bits to slack match demosaic_to_gp_68 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match demosaicb_to_gp_156 = 512
// Bits to slack match demosaicb_to_gp_156 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match denoise_to_gp_764 = 512
// Bits to slack match denoise_to_gp_764 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match denoiseb_to_gp_872 = 512
// Bits to slack match denoiseb_to_gp_872 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match raw_to_gp_980 = 512
// Bits to slack match raw_to_gp_980 = 512
// Bits in internal re-use buffers               : 308080 bits
// Bits in channels needed to guarantee causality: 0
// Bits in channels needed to match slack        : 5632
  HWStream< hw_uint<16> > demosaic_diff_to_gp_048;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_diff_to_gp_048.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaicb_to_gp_156;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaicb_to_gp_156.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_30;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_30.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_to_gp_68;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_to_gp_68.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > raw_to_gp_980;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=raw_to_gp_980.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bxb_to_gp_224;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bxb_to_gp_224.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_bx_to_gp_516;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_bx_to_gp_516.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_byb_to_gp_440;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_byb_to_gp_440.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > demosaic_by_to_gp_632;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=demosaic_by_to_gp_632.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoise_to_gp_764;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoise_to_gp_764.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > denoiseb_to_gp_872;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=denoiseb_to_gp_872.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_raw_0_raw_ld82_(raw_oc, raw_to_gp_980);
  Extracted_denoiseb_0_denoiseb_ld74_raw_to_gp_980_ld86_(raw_to_gp_980, denoiseb_to_gp_872);
  Extracted_denoise_0_denoise_ld66_denoiseb_to_gp_872_ld78_(denoiseb_to_gp_872, denoise_to_gp_764);
  Extracted_demosaicb_0_demosaicb_ld58_denoise_to_gp_764_ld70_(denoise_to_gp_764, demosaicb_to_gp_156);
  Extracted_demosaic_0_demosaic_ld10_demosaic_ld2_demosaicb_to_gp_156_ld62_(demosaicb_to_gp_156, demosaic_to_gp_30, demosaic_to_gp_68);
  Extracted_demosaic_bxb_0_demosaic_bxb_ld26_demosaic_to_gp_30_ld6_(demosaic_to_gp_30, demosaic_bxb_to_gp_224);
  Extracted_demosaic_bx_0_demosaic_bx_ld18_demosaic_bxb_to_gp_224_ld30_(demosaic_bxb_to_gp_224, demosaic_bx_to_gp_516);
  Extracted_demosaic_bx_to_gp_516_ld22_demosaic_byb_0_demosaic_byb_ld42_(demosaic_bx_to_gp_516, demosaic_byb_to_gp_440);
  Extracted_demosaic_by_0_demosaic_by_ld34_demosaic_byb_to_gp_440_ld46_(demosaic_byb_to_gp_440, demosaic_by_to_gp_632);
  Extracted_demosaic_by_to_gp_632_ld38_demosaic_diff_0_demosaic_diff_ld50_demosaic_to_gp_68_ld14_(demosaic_by_to_gp_632, demosaic_to_gp_68, demosaic_diff_to_gp_048);
  Extracted_cp9_1_0_demosaic_diff_to_gp_048_ld54_(demosaic_diff_to_gp_048, cp9_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp9_1_opt_d32_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp9_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp9_1_opt_d32(raw_oc, cp9_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { cp9_1_update_0_sm102_0149[root = 0, cp9_1_0, cp9_1_1] -> cp9_1[cp9_1_1, cp9_1_0] : 0 <= cp9_1_0 <= 1079 and 0 <= cp9_1_1 <= 1919 }
const int cp9_1_update_0_sm102_0149_write_pipe0_num_transfers = 2073600;
  // { raw_update_0_sm92_0127[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1927 }
const int raw_update_0_sm92_0127_read_pipe0_num_transfers = 2097664;


extern "C" {

void cp9_1_opt_d32_accel(hw_uint<16>* raw_update_0_sm92_0127_read_pipe0, hw_uint<16>* cp9_1_update_0_sm102_0149_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_sm92_0127_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp9_1_update_0_sm102_0149_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_sm92_0127_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp9_1_update_0_sm102_0149_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > raw_update_0_sm92_0127_read_pipe0_channel;
  static HWStream<hw_uint<16> > cp9_1_update_0_sm102_0149_write_pipe0_channel;

  burst_read<16>(raw_update_0_sm92_0127_read_pipe0, raw_update_0_sm92_0127_read_pipe0_channel, raw_update_0_sm92_0127_read_pipe0_num_transfers*size);

  cp9_1_opt_d32_wrapper(raw_update_0_sm92_0127_read_pipe0_channel, cp9_1_update_0_sm102_0149_write_pipe0_channel, size);

  burst_write<16>(cp9_1_update_0_sm102_0149_write_pipe0, cp9_1_update_0_sm102_0149_write_pipe0_channel, cp9_1_update_0_sm102_0149_write_pipe0_num_transfers*size);
}

}
extern "C" {

void cp9_1_opt_d32_rdai(HWStream<hw_uint<16> >& raw_update_0_sm92_0127_read_pipe0, HWStream<hw_uint<16> >&  cp9_1_update_0_sm102_0149_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_sm92_0127_read_pipe0
#pragma HLS INTERFACE axis register port = cp9_1_update_0_sm102_0149_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp9_1_opt_d32(raw_update_0_sm92_0127_read_pipe0, cp9_1_update_0_sm102_0149_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

