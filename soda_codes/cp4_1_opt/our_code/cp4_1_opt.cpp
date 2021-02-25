#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: cp4_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "cp4_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct demosaic_demosaic_update_0_sm4_015_40_merged_banks_4_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 3847
	// # of read delays: 4
  // 0, 1, 2, 3846
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 3843> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_3845() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_3846() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3843
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3843 reading from capacity: 1
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

struct demosaic_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0_sm5_017[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_bxb_update_0_sm5_017[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_bxb_update_0_sm5_017[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
    // { demosaic_diff_update_0_sm9_025[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // # of banks: 1
  demosaic_demosaic_update_0_sm4_015_40_merged_banks_4_cache demosaic_demosaic_update_0_sm4_015_40_merged_banks_4;
};



inline void demosaic_demosaic_update_0_sm4_015_40_write(hw_uint<16>& demosaic_demosaic_update_0_sm4_015_40, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_sm4_015_40_merged_banks_4.push(demosaic_demosaic_update_0_sm4_015_40);
}

inline hw_uint<16> demosaic_demosaic_bxb_update_0_sm5_017_52_select(demosaic_cache& demosaic, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_demosaic_bxb_update_0_sm5_017_52 read pattern: { demosaic_bxb_update_0_sm5_017[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic[demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm5_017[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm4_015_40 = demosaic.demosaic_demosaic_update_0_sm4_015_40_merged_banks_4.peek_2();
  return value_demosaic_demosaic_update_0_sm4_015_40;
  return 0;
}

inline hw_uint<16> demosaic_demosaic_bxb_update_0_sm5_017_53_select(demosaic_cache& demosaic, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_demosaic_bxb_update_0_sm5_017_53 read pattern: { demosaic_bxb_update_0_sm5_017[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic[1 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm5_017[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm4_015_40 = demosaic.demosaic_demosaic_update_0_sm4_015_40_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_sm4_015_40;
  return 0;
}

inline hw_uint<16> demosaic_demosaic_bxb_update_0_sm5_017_54_select(demosaic_cache& demosaic, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_demosaic_bxb_update_0_sm5_017_54 read pattern: { demosaic_bxb_update_0_sm5_017[root = 0, demosaic_bxb_0, demosaic_bxb_1] -> demosaic[2 + demosaic_bxb_1, demosaic_bxb_0] : 0 <= demosaic_bxb_0 <= 1081 and 0 <= demosaic_bxb_1 <= 1919 }
  // Read schedule : { demosaic_bxb_update_0_sm5_017[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm4_015_40 = demosaic.demosaic_demosaic_update_0_sm4_015_40_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_sm4_015_40;
  return 0;
}

inline hw_uint<16> demosaic_demosaic_diff_update_0_sm9_025_43_select(demosaic_cache& demosaic, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_demosaic_diff_update_0_sm9_025_43 read pattern: { demosaic_diff_update_0_sm9_025[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // Read schedule : { demosaic_diff_update_0_sm9_025[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaic_demosaic_update_0_sm4_015_40 = demosaic.demosaic_demosaic_update_0_sm4_015_40_merged_banks_4.peek_3846();
  return value_demosaic_demosaic_update_0_sm4_015_40;
  return 0;
}

// # of bundles = 3
// demosaic_bxb_update_0_sm5_017_read
//	demosaic_demosaic_bxb_update_0_sm5_017_52
//	demosaic_demosaic_bxb_update_0_sm5_017_53
//	demosaic_demosaic_bxb_update_0_sm5_017_54
inline hw_uint<48> demosaic_demosaic_bxb_update_0_sm5_017_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_demosaic_bxb_update_0_sm5_017_52
    // demosaic_demosaic_bxb_update_0_sm5_017_53
    // demosaic_demosaic_bxb_update_0_sm5_017_54

	hw_uint<48> result;
	hw_uint<16> demosaic_demosaic_bxb_update_0_sm5_017_52_res = demosaic_demosaic_bxb_update_0_sm5_017_52_select(demosaic, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_demosaic_bxb_update_0_sm5_017_52_res);
	hw_uint<16> demosaic_demosaic_bxb_update_0_sm5_017_53_res = demosaic_demosaic_bxb_update_0_sm5_017_53_select(demosaic, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_demosaic_bxb_update_0_sm5_017_53_res);
	hw_uint<16> demosaic_demosaic_bxb_update_0_sm5_017_54_res = demosaic_demosaic_bxb_update_0_sm5_017_54_select(demosaic, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_demosaic_bxb_update_0_sm5_017_54_res);
	return result;
}

// demosaic_diff_update_0_sm9_025_read
//	demosaic_demosaic_diff_update_0_sm9_025_43
inline hw_uint<16> demosaic_demosaic_diff_update_0_sm9_025_read_bundle_read(demosaic_cache& demosaic, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_demosaic_diff_update_0_sm9_025_43

	hw_uint<16> result;
	hw_uint<16> demosaic_demosaic_diff_update_0_sm9_025_43_res = demosaic_demosaic_diff_update_0_sm9_025_43_select(demosaic, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_demosaic_diff_update_0_sm9_025_43_res);
	return result;
}

// demosaic_update_0_sm4_015_write
//	demosaic_demosaic_update_0_sm4_015_40
inline void demosaic_demosaic_update_0_sm4_015_write_bundle_write(hw_uint<16>& demosaic_update_0_sm4_015_write, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_sm4_015_40_res = demosaic_update_0_sm4_015_write.extract<0, 15>();
	demosaic_demosaic_update_0_sm4_015_40_write(demosaic_demosaic_update_0_sm4_015_40_res, demosaic, root, demosaic_0, demosaic_1, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3_cache {
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

struct demosaic_bx_cache {
  // Reader addrs...
    // { demosaic_byb_update_0_sm7_031[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
    // { demosaic_byb_update_0_sm7_031[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
    // { demosaic_byb_update_0_sm7_031[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // # of banks: 1
  demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3;
};



inline void demosaic_bx_demosaic_bx_update_0_sm6_019_55_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_sm6_019_55, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_sm6_019_55);
}

inline hw_uint<16> demosaic_bx_demosaic_byb_update_0_sm7_031_46_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_demosaic_byb_update_0_sm7_031_46 read pattern: { demosaic_byb_update_0_sm7_031[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx[demosaic_byb_1, demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm7_031[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bx_update_0_sm6_019[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm6_019_55 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3.peek_3840();
  return value_demosaic_bx_demosaic_bx_update_0_sm6_019_55;
  return 0;
}

inline hw_uint<16> demosaic_bx_demosaic_byb_update_0_sm7_031_47_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_demosaic_byb_update_0_sm7_031_47 read pattern: { demosaic_byb_update_0_sm7_031[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx[demosaic_byb_1, 1 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm7_031[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bx_update_0_sm6_019[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm6_019_55 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3.peek_1920();
  return value_demosaic_bx_demosaic_bx_update_0_sm6_019_55;
  return 0;
}

inline hw_uint<16> demosaic_bx_demosaic_byb_update_0_sm7_031_48_select(demosaic_bx_cache& demosaic_bx, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bx_demosaic_byb_update_0_sm7_031_48 read pattern: { demosaic_byb_update_0_sm7_031[root = 0, demosaic_byb_0, demosaic_byb_1] -> demosaic_bx[demosaic_byb_1, 2 + demosaic_byb_0] : 0 <= demosaic_byb_0 <= 1079 and 0 <= demosaic_byb_1 <= 1919 }
  // Read schedule : { demosaic_byb_update_0_sm7_031[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bx_update_0_sm6_019[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bx_demosaic_bx_update_0_sm6_019_55 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_sm6_019_55_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_sm6_019_55;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm6_019_write
//	demosaic_bx_demosaic_bx_update_0_sm6_019_55
inline void demosaic_bx_demosaic_bx_update_0_sm6_019_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_sm6_019_write, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_sm6_019_55_res = demosaic_bx_update_0_sm6_019_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_sm6_019_55_write(demosaic_bx_demosaic_bx_update_0_sm6_019_55_res, demosaic_bx, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
}

// demosaic_byb_update_0_sm7_031_read
//	demosaic_bx_demosaic_byb_update_0_sm7_031_46
//	demosaic_bx_demosaic_byb_update_0_sm7_031_47
//	demosaic_bx_demosaic_byb_update_0_sm7_031_48
inline hw_uint<48> demosaic_bx_demosaic_byb_update_0_sm7_031_read_bundle_read(demosaic_bx_cache& demosaic_bx, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_bx_demosaic_byb_update_0_sm7_031_46
    // demosaic_bx_demosaic_byb_update_0_sm7_031_47
    // demosaic_bx_demosaic_byb_update_0_sm7_031_48

	hw_uint<48> result;
	hw_uint<16> demosaic_bx_demosaic_byb_update_0_sm7_031_46_res = demosaic_bx_demosaic_byb_update_0_sm7_031_46_select(demosaic_bx, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<0, 48>(result, demosaic_bx_demosaic_byb_update_0_sm7_031_46_res);
	hw_uint<16> demosaic_bx_demosaic_byb_update_0_sm7_031_47_res = demosaic_bx_demosaic_byb_update_0_sm7_031_47_select(demosaic_bx, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<16, 48>(result, demosaic_bx_demosaic_byb_update_0_sm7_031_47_res);
	hw_uint<16> demosaic_bx_demosaic_byb_update_0_sm7_031_48_res = demosaic_bx_demosaic_byb_update_0_sm7_031_48_select(demosaic_bx, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
	set_at<32, 48>(result, demosaic_bx_demosaic_byb_update_0_sm7_031_48_res);
	return result;
}

struct demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_to_demosaic_bxb_demosaic_bx_update_0_sm6_019_56_cache {
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
    // { demosaic_bx_update_0_sm6_019[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1919 }
  // # of banks: 1
  demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_to_demosaic_bxb_demosaic_bx_update_0_sm6_019_56_cache demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_to_demosaic_bxb_demosaic_bx_update_0_sm6_019_56;
};



inline void demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_sm5_017_51, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_to_demosaic_bxb_demosaic_bx_update_0_sm6_019_56.push(demosaic_bxb_demosaic_bxb_update_0_sm5_017_51);
}

inline hw_uint<16> demosaic_bxb_demosaic_bx_update_0_sm6_019_56_select(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_bxb_demosaic_bx_update_0_sm6_019_56 read pattern: { demosaic_bx_update_0_sm6_019[root = 0, demosaic_bx_0, demosaic_bx_1] -> demosaic_bxb[demosaic_bx_1, demosaic_bx_0] : 0 <= demosaic_bx_0 <= 1081 and 0 <= demosaic_bx_1 <= 1919 }
  // Read schedule : { demosaic_bx_update_0_sm6_019[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_bxb_update_0_sm5_017[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_sm5_017_51 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_to_demosaic_bxb_demosaic_bx_update_0_sm6_019_56.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_sm5_017_51;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_sm6_019_read
//	demosaic_bxb_demosaic_bx_update_0_sm6_019_56
inline hw_uint<16> demosaic_bxb_demosaic_bx_update_0_sm6_019_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bx_0, int demosaic_bx_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bxb_demosaic_bx_update_0_sm6_019_56

	hw_uint<16> result;
	hw_uint<16> demosaic_bxb_demosaic_bx_update_0_sm6_019_56_res = demosaic_bxb_demosaic_bx_update_0_sm6_019_56_select(demosaic_bxb, root, demosaic_bx_0, demosaic_bx_1, dynamic_address);
	set_at<0, 16>(result, demosaic_bxb_demosaic_bx_update_0_sm6_019_56_res);
	return result;
}

// demosaic_bxb_update_0_sm5_017_write
//	demosaic_bxb_demosaic_bxb_update_0_sm5_017_51
inline void demosaic_bxb_demosaic_bxb_update_0_sm5_017_write_bundle_write(hw_uint<16>& demosaic_bxb_update_0_sm5_017_write, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_res = demosaic_bxb_update_0_sm5_017_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_write(demosaic_bxb_demosaic_bxb_update_0_sm5_017_51_res, demosaic_bxb, root, demosaic_bxb_0, demosaic_bxb_1, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_sm8_029_49_to_demosaic_by_demosaic_diff_update_0_sm9_025_44_cache {
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
    // { demosaic_diff_update_0_sm9_025[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // # of banks: 1
  demosaic_by_demosaic_by_update_0_sm8_029_49_to_demosaic_by_demosaic_diff_update_0_sm9_025_44_cache demosaic_by_demosaic_by_update_0_sm8_029_49_to_demosaic_by_demosaic_diff_update_0_sm9_025_44;
};



inline void demosaic_by_demosaic_by_update_0_sm8_029_49_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_sm8_029_49, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_sm8_029_49_to_demosaic_by_demosaic_diff_update_0_sm9_025_44.push(demosaic_by_demosaic_by_update_0_sm8_029_49);
}

inline hw_uint<16> demosaic_by_demosaic_diff_update_0_sm9_025_44_select(demosaic_by_cache& demosaic_by, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_by_demosaic_diff_update_0_sm9_025_44 read pattern: { demosaic_diff_update_0_sm9_025[root = 0, demosaic_diff_0, demosaic_diff_1] -> demosaic_by[demosaic_diff_1, demosaic_diff_0] : 0 <= demosaic_diff_0 <= 1079 and 0 <= demosaic_diff_1 <= 1919 }
  // Read schedule : { demosaic_diff_update_0_sm9_025[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_by_update_0_sm8_029[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_by_demosaic_by_update_0_sm8_029_49 = demosaic_by.demosaic_by_demosaic_by_update_0_sm8_029_49_to_demosaic_by_demosaic_diff_update_0_sm9_025_44.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_sm8_029_49;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm8_029_write
//	demosaic_by_demosaic_by_update_0_sm8_029_49
inline void demosaic_by_demosaic_by_update_0_sm8_029_write_bundle_write(hw_uint<16>& demosaic_by_update_0_sm8_029_write, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_sm8_029_49_res = demosaic_by_update_0_sm8_029_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_sm8_029_49_write(demosaic_by_demosaic_by_update_0_sm8_029_49_res, demosaic_by, root, demosaic_by_0, demosaic_by_1, dynamic_address);
}

// demosaic_diff_update_0_sm9_025_read
//	demosaic_by_demosaic_diff_update_0_sm9_025_44
inline hw_uint<16> demosaic_by_demosaic_diff_update_0_sm9_025_read_bundle_read(demosaic_by_cache& demosaic_by, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_demosaic_diff_update_0_sm9_025_44

	hw_uint<16> result;
	hw_uint<16> demosaic_by_demosaic_diff_update_0_sm9_025_44_res = demosaic_by_demosaic_diff_update_0_sm9_025_44_select(demosaic_by, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
	set_at<0, 16>(result, demosaic_by_demosaic_diff_update_0_sm9_025_44_res);
	return result;
}

struct demosaic_byb_demosaic_byb_update_0_sm7_031_45_to_demosaic_byb_demosaic_by_update_0_sm8_029_50_cache {
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
    // { demosaic_by_update_0_sm8_029[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1919 }
  // # of banks: 1
  demosaic_byb_demosaic_byb_update_0_sm7_031_45_to_demosaic_byb_demosaic_by_update_0_sm8_029_50_cache demosaic_byb_demosaic_byb_update_0_sm7_031_45_to_demosaic_byb_demosaic_by_update_0_sm8_029_50;
};



inline void demosaic_byb_demosaic_byb_update_0_sm7_031_45_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_sm7_031_45, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm7_031_45_to_demosaic_byb_demosaic_by_update_0_sm8_029_50.push(demosaic_byb_demosaic_byb_update_0_sm7_031_45);
}

inline hw_uint<16> demosaic_byb_demosaic_by_update_0_sm8_029_50_select(demosaic_byb_cache& demosaic_byb, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_byb_demosaic_by_update_0_sm8_029_50 read pattern: { demosaic_by_update_0_sm8_029[root = 0, demosaic_by_0, demosaic_by_1] -> demosaic_byb[demosaic_by_1, demosaic_by_0] : 0 <= demosaic_by_0 <= 1079 and 0 <= demosaic_by_1 <= 1919 }
  // Read schedule : { demosaic_by_update_0_sm8_029[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_byb_update_0_sm7_031[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_byb_demosaic_byb_update_0_sm7_031_45 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_sm7_031_45_to_demosaic_byb_demosaic_by_update_0_sm8_029_50.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_sm7_031_45;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_sm8_029_read
//	demosaic_byb_demosaic_by_update_0_sm8_029_50
inline hw_uint<16> demosaic_byb_demosaic_by_update_0_sm8_029_read_bundle_read(demosaic_byb_cache& demosaic_byb, int root, int demosaic_by_0, int demosaic_by_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_byb_demosaic_by_update_0_sm8_029_50

	hw_uint<16> result;
	hw_uint<16> demosaic_byb_demosaic_by_update_0_sm8_029_50_res = demosaic_byb_demosaic_by_update_0_sm8_029_50_select(demosaic_byb, root, demosaic_by_0, demosaic_by_1, dynamic_address);
	set_at<0, 16>(result, demosaic_byb_demosaic_by_update_0_sm8_029_50_res);
	return result;
}

// demosaic_byb_update_0_sm7_031_write
//	demosaic_byb_demosaic_byb_update_0_sm7_031_45
inline void demosaic_byb_demosaic_byb_update_0_sm7_031_write_bundle_write(hw_uint<16>& demosaic_byb_update_0_sm7_031_write, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_sm7_031_45_res = demosaic_byb_update_0_sm7_031_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_sm7_031_45_write(demosaic_byb_demosaic_byb_update_0_sm7_031_45_res, demosaic_byb, root, demosaic_byb_0, demosaic_byb_1, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_sm9_025_42_to_demosaic_diff_cp4_1_update_0_sm10_027_58_cache {
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
    // { cp4_1_update_0_sm10_027[root = 0, cp4_1_0, cp4_1_1] -> demosaic_diff[cp4_1_1, cp4_1_0] : 0 <= cp4_1_0 <= 1079 and 0 <= cp4_1_1 <= 1919 }
  // # of banks: 1
  demosaic_diff_demosaic_diff_update_0_sm9_025_42_to_demosaic_diff_cp4_1_update_0_sm10_027_58_cache demosaic_diff_demosaic_diff_update_0_sm9_025_42_to_demosaic_diff_cp4_1_update_0_sm10_027_58;
};



inline void demosaic_diff_demosaic_diff_update_0_sm9_025_42_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_sm9_025_42, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm9_025_42_to_demosaic_diff_cp4_1_update_0_sm10_027_58.push(demosaic_diff_demosaic_diff_update_0_sm9_025_42);
}

inline hw_uint<16> demosaic_diff_cp4_1_update_0_sm10_027_58_select(demosaic_diff_cache& demosaic_diff, int root, int cp4_1_0, int cp4_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaic_diff_cp4_1_update_0_sm10_027_58 read pattern: { cp4_1_update_0_sm10_027[root = 0, cp4_1_0, cp4_1_1] -> demosaic_diff[cp4_1_1, cp4_1_0] : 0 <= cp4_1_0 <= 1079 and 0 <= cp4_1_1 <= 1919 }
  // Read schedule : { cp4_1_update_0_sm10_027[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { demosaic_diff_update_0_sm9_025[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_demosaic_diff_demosaic_diff_update_0_sm9_025_42 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_sm9_025_42_to_demosaic_diff_cp4_1_update_0_sm10_027_58.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_sm9_025_42;
  return 0;
}

// # of bundles = 2
// cp4_1_update_0_sm10_027_read
//	demosaic_diff_cp4_1_update_0_sm10_027_58
inline hw_uint<16> demosaic_diff_cp4_1_update_0_sm10_027_read_bundle_read(demosaic_diff_cache& demosaic_diff, int root, int cp4_1_0, int cp4_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_cp4_1_update_0_sm10_027_58

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_cp4_1_update_0_sm10_027_58_res = demosaic_diff_cp4_1_update_0_sm10_027_58_select(demosaic_diff, root, cp4_1_0, cp4_1_1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_cp4_1_update_0_sm10_027_58_res);
	return result;
}

// demosaic_diff_update_0_sm9_025_write
//	demosaic_diff_demosaic_diff_update_0_sm9_025_42
inline void demosaic_diff_demosaic_diff_update_0_sm9_025_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_sm9_025_write, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_sm9_025_42_res = demosaic_diff_update_0_sm9_025_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_sm9_025_42_write(demosaic_diff_demosaic_diff_update_0_sm9_025_42_res, demosaic_diff, root, demosaic_diff_0, demosaic_diff_1, dynamic_address);
}

struct demosaicb_demosaicb_update_0_sm3_013_30_to_demosaicb_demosaic_update_0_sm4_015_41_cache {
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
    // { demosaic_update_0_sm4_015[root = 0, demosaic_0, demosaic_1] -> demosaicb[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1921 }
  // # of banks: 1
  demosaicb_demosaicb_update_0_sm3_013_30_to_demosaicb_demosaic_update_0_sm4_015_41_cache demosaicb_demosaicb_update_0_sm3_013_30_to_demosaicb_demosaic_update_0_sm4_015_41;
};



inline void demosaicb_demosaicb_update_0_sm3_013_30_write(hw_uint<16>& demosaicb_demosaicb_update_0_sm3_013_30, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_sm3_013_30_to_demosaicb_demosaic_update_0_sm4_015_41.push(demosaicb_demosaicb_update_0_sm3_013_30);
}

inline hw_uint<16> demosaicb_demosaic_update_0_sm4_015_41_select(demosaicb_cache& demosaicb, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // demosaicb_demosaic_update_0_sm4_015_41 read pattern: { demosaic_update_0_sm4_015[root = 0, demosaic_0, demosaic_1] -> demosaicb[demosaic_1, demosaic_0] : 0 <= demosaic_0 <= 1081 and 0 <= demosaic_1 <= 1921 }
  // Read schedule : { demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  auto value_demosaicb_demosaicb_update_0_sm3_013_30 = demosaicb.demosaicb_demosaicb_update_0_sm3_013_30_to_demosaicb_demosaic_update_0_sm4_015_41.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_sm3_013_30;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_sm4_015_read
//	demosaicb_demosaic_update_0_sm4_015_41
inline hw_uint<16> demosaicb_demosaic_update_0_sm4_015_read_bundle_read(demosaicb_cache& demosaicb, int root, int demosaic_0, int demosaic_1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaicb_demosaic_update_0_sm4_015_41

	hw_uint<16> result;
	hw_uint<16> demosaicb_demosaic_update_0_sm4_015_41_res = demosaicb_demosaic_update_0_sm4_015_41_select(demosaicb, root, demosaic_0, demosaic_1, dynamic_address);
	set_at<0, 16>(result, demosaicb_demosaic_update_0_sm4_015_41_res);
	return result;
}

// demosaicb_update_0_sm3_013_write
//	demosaicb_demosaicb_update_0_sm3_013_30
inline void demosaicb_demosaicb_update_0_sm3_013_write_bundle_write(hw_uint<16>& demosaicb_update_0_sm3_013_write, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_sm3_013_30_res = demosaicb_update_0_sm3_013_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_sm3_013_30_write(demosaicb_demosaicb_update_0_sm3_013_30_res, demosaicb, root, demosaicb_0, demosaicb_1, dynamic_address);
}

struct denoise_denoise_update_0_sm2_011_28_merged_banks_9_cache {
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

struct denoise_cache {
  // Reader addrs...
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
    // { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // # of banks: 1
  denoise_denoise_update_0_sm2_011_28_merged_banks_9_cache denoise_denoise_update_0_sm2_011_28_merged_banks_9;
};



inline void denoise_denoise_update_0_sm2_011_28_write(hw_uint<16>& denoise_denoise_update_0_sm2_011_28, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
  denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.push(denoise_denoise_update_0_sm2_011_28);
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_31_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_31 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_3850();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_32_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_32 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_1926();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_33_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_33 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_2();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_34_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_34 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[1 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_3849();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_35_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_35 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[1 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_1925();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_36_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_36 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[1 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_37_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_37 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[2 + demosaicb_1, demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_3848();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_38_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_38 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[2 + demosaicb_1, 1 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_1924();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

inline hw_uint<16> denoise_demosaicb_update_0_sm3_013_39_select(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoise_demosaicb_update_0_sm3_013_39 read pattern: { demosaicb_update_0_sm3_013[root = 0, demosaicb_0, demosaicb_1] -> denoise[2 + demosaicb_1, 2 + demosaicb_0] : 0 <= demosaicb_0 <= 1081 and 0 <= demosaicb_1 <= 1921 }
  // Read schedule : { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
  // Write schedule: { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoise_denoise_update_0_sm2_011_28 = denoise.denoise_denoise_update_0_sm2_011_28_merged_banks_9.peek_0();
  return value_denoise_denoise_update_0_sm2_011_28;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_sm3_013_read
//	denoise_demosaicb_update_0_sm3_013_31
//	denoise_demosaicb_update_0_sm3_013_32
//	denoise_demosaicb_update_0_sm3_013_33
//	denoise_demosaicb_update_0_sm3_013_34
//	denoise_demosaicb_update_0_sm3_013_35
//	denoise_demosaicb_update_0_sm3_013_36
//	denoise_demosaicb_update_0_sm3_013_37
//	denoise_demosaicb_update_0_sm3_013_38
//	denoise_demosaicb_update_0_sm3_013_39
inline hw_uint<144> denoise_demosaicb_update_0_sm3_013_read_bundle_read(denoise_cache& denoise, int root, int demosaicb_0, int demosaicb_1, int dynamic_address) {
  // # of ports in bundle: 9
    // denoise_demosaicb_update_0_sm3_013_31
    // denoise_demosaicb_update_0_sm3_013_32
    // denoise_demosaicb_update_0_sm3_013_33
    // denoise_demosaicb_update_0_sm3_013_34
    // denoise_demosaicb_update_0_sm3_013_35
    // denoise_demosaicb_update_0_sm3_013_36
    // denoise_demosaicb_update_0_sm3_013_37
    // denoise_demosaicb_update_0_sm3_013_38
    // denoise_demosaicb_update_0_sm3_013_39

	hw_uint<144> result;
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_31_res = denoise_demosaicb_update_0_sm3_013_31_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<0, 144>(result, denoise_demosaicb_update_0_sm3_013_31_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_32_res = denoise_demosaicb_update_0_sm3_013_32_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<16, 144>(result, denoise_demosaicb_update_0_sm3_013_32_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_33_res = denoise_demosaicb_update_0_sm3_013_33_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<32, 144>(result, denoise_demosaicb_update_0_sm3_013_33_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_34_res = denoise_demosaicb_update_0_sm3_013_34_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<48, 144>(result, denoise_demosaicb_update_0_sm3_013_34_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_35_res = denoise_demosaicb_update_0_sm3_013_35_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<64, 144>(result, denoise_demosaicb_update_0_sm3_013_35_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_36_res = denoise_demosaicb_update_0_sm3_013_36_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<80, 144>(result, denoise_demosaicb_update_0_sm3_013_36_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_37_res = denoise_demosaicb_update_0_sm3_013_37_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<96, 144>(result, denoise_demosaicb_update_0_sm3_013_37_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_38_res = denoise_demosaicb_update_0_sm3_013_38_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<112, 144>(result, denoise_demosaicb_update_0_sm3_013_38_res);
	hw_uint<16> denoise_demosaicb_update_0_sm3_013_39_res = denoise_demosaicb_update_0_sm3_013_39_select(denoise, root, demosaicb_0, demosaicb_1, dynamic_address);
	set_at<128, 144>(result, denoise_demosaicb_update_0_sm3_013_39_res);
	return result;
}

// denoise_update_0_sm2_011_write
//	denoise_denoise_update_0_sm2_011_28
inline void denoise_denoise_update_0_sm2_011_write_bundle_write(hw_uint<16>& denoise_update_0_sm2_011_write, denoise_cache& denoise, int root, int denoise_0, int denoise_1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_sm2_011_28_res = denoise_update_0_sm2_011_write.extract<0, 15>();
	denoise_denoise_update_0_sm2_011_28_write(denoise_denoise_update_0_sm2_011_28_res, denoise, root, denoise_0, denoise_1, dynamic_address);
}

struct denoiseb_denoiseb_update_0_sm1_023_2_to_denoiseb_denoise_update_0_sm2_011_29_cache {
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
    // { denoise_update_0_sm2_011[root = 0, denoise_0, denoise_1] -> denoiseb[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1923 }
  // # of banks: 1
  denoiseb_denoiseb_update_0_sm1_023_2_to_denoiseb_denoise_update_0_sm2_011_29_cache denoiseb_denoiseb_update_0_sm1_023_2_to_denoiseb_denoise_update_0_sm2_011_29;
};



inline void denoiseb_denoiseb_update_0_sm1_023_2_write(hw_uint<16>& denoiseb_denoiseb_update_0_sm1_023_2, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_sm1_023_2_to_denoiseb_denoise_update_0_sm2_011_29.push(denoiseb_denoiseb_update_0_sm1_023_2);
}

inline hw_uint<16> denoiseb_denoise_update_0_sm2_011_29_select(denoiseb_cache& denoiseb, int root, int denoise_0, int denoise_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // denoiseb_denoise_update_0_sm2_011_29 read pattern: { denoise_update_0_sm2_011[root = 0, denoise_0, denoise_1] -> denoiseb[denoise_1, denoise_0] : 0 <= denoise_0 <= 1083 and 0 <= denoise_1 <= 1923 }
  // Read schedule : { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  auto value_denoiseb_denoiseb_update_0_sm1_023_2 = denoiseb.denoiseb_denoiseb_update_0_sm1_023_2_to_denoiseb_denoise_update_0_sm2_011_29.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_sm1_023_2;
  return 0;
}

// # of bundles = 2
// denoise_update_0_sm2_011_read
//	denoiseb_denoise_update_0_sm2_011_29
inline hw_uint<16> denoiseb_denoise_update_0_sm2_011_read_bundle_read(denoiseb_cache& denoiseb, int root, int denoise_0, int denoise_1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoiseb_denoise_update_0_sm2_011_29

	hw_uint<16> result;
	hw_uint<16> denoiseb_denoise_update_0_sm2_011_29_res = denoiseb_denoise_update_0_sm2_011_29_select(denoiseb, root, denoise_0, denoise_1, dynamic_address);
	set_at<0, 16>(result, denoiseb_denoise_update_0_sm2_011_29_res);
	return result;
}

// denoiseb_update_0_sm1_023_write
//	denoiseb_denoiseb_update_0_sm1_023_2
inline void denoiseb_denoiseb_update_0_sm1_023_write_bundle_write(hw_uint<16>& denoiseb_update_0_sm1_023_write, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_sm1_023_2_res = denoiseb_update_0_sm1_023_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_sm1_023_2_write(denoiseb_denoiseb_update_0_sm1_023_2_res, denoiseb, root, denoiseb_0, denoiseb_1, dynamic_address);
}

struct raw_raw_update_0_sm0_021_0_merged_banks_25_cache {
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

struct raw_cache {
  // Reader addrs...
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
    // { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // # of banks: 1
  raw_raw_update_0_sm0_021_0_merged_banks_25_cache raw_raw_update_0_sm0_021_0_merged_banks_25;
};



inline void raw_raw_update_0_sm0_021_0_write(hw_uint<16>& raw_raw_update_0_sm0_021_0, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
  raw.raw_raw_update_0_sm0_021_0_merged_banks_25.push(raw_raw_update_0_sm0_021_0);
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_10_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_10 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_3859();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_11_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_11 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_1931();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_12_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_12 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_3();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_13_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_13 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_7714();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_14_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_14 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_5786();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_15_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_15 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_3858();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_16_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_16 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_1930();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_17_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_17 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[2 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_2();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_18_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_18 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_7713();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_19_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_19 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_5785();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_20_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_20 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_3857();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_21_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_21 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_1929();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_22_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_22 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[3 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_23_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_23 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_7712();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_24_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_24 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_5784();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_25_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_25 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_3856();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_26_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_26 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_1928();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_27_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_27 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[4 + denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_3_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_3 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_7716();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_4_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_4 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_5788();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_5_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_5 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 2 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_3860();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_6_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_6 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 3 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_1932();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_7_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_7 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[denoiseb_1, 4 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_4();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_8_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_8 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_7715();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

inline hw_uint<16> raw_denoiseb_update_0_sm1_023_9_select(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // raw_denoiseb_update_0_sm1_023_9 read pattern: { denoiseb_update_0_sm1_023[root = 0, denoiseb_0, denoiseb_1] -> raw[1 + denoiseb_1, 1 + denoiseb_0] : 0 <= denoiseb_0 <= 1083 and 0 <= denoiseb_1 <= 1923 }
  // Read schedule : { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
  // Write schedule: { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
  auto value_raw_raw_update_0_sm0_021_0 = raw.raw_raw_update_0_sm0_021_0_merged_banks_25.peek_5787();
  return value_raw_raw_update_0_sm0_021_0;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_sm1_023_read
//	raw_denoiseb_update_0_sm1_023_3
//	raw_denoiseb_update_0_sm1_023_4
//	raw_denoiseb_update_0_sm1_023_5
//	raw_denoiseb_update_0_sm1_023_6
//	raw_denoiseb_update_0_sm1_023_7
//	raw_denoiseb_update_0_sm1_023_8
//	raw_denoiseb_update_0_sm1_023_9
//	raw_denoiseb_update_0_sm1_023_10
//	raw_denoiseb_update_0_sm1_023_11
//	raw_denoiseb_update_0_sm1_023_12
//	raw_denoiseb_update_0_sm1_023_13
//	raw_denoiseb_update_0_sm1_023_14
//	raw_denoiseb_update_0_sm1_023_15
//	raw_denoiseb_update_0_sm1_023_16
//	raw_denoiseb_update_0_sm1_023_17
//	raw_denoiseb_update_0_sm1_023_18
//	raw_denoiseb_update_0_sm1_023_19
//	raw_denoiseb_update_0_sm1_023_20
//	raw_denoiseb_update_0_sm1_023_21
//	raw_denoiseb_update_0_sm1_023_22
//	raw_denoiseb_update_0_sm1_023_23
//	raw_denoiseb_update_0_sm1_023_24
//	raw_denoiseb_update_0_sm1_023_25
//	raw_denoiseb_update_0_sm1_023_26
//	raw_denoiseb_update_0_sm1_023_27
inline hw_uint<400> raw_denoiseb_update_0_sm1_023_read_bundle_read(raw_cache& raw, int root, int denoiseb_0, int denoiseb_1, int dynamic_address) {
  // # of ports in bundle: 25
    // raw_denoiseb_update_0_sm1_023_3
    // raw_denoiseb_update_0_sm1_023_4
    // raw_denoiseb_update_0_sm1_023_5
    // raw_denoiseb_update_0_sm1_023_6
    // raw_denoiseb_update_0_sm1_023_7
    // raw_denoiseb_update_0_sm1_023_8
    // raw_denoiseb_update_0_sm1_023_9
    // raw_denoiseb_update_0_sm1_023_10
    // raw_denoiseb_update_0_sm1_023_11
    // raw_denoiseb_update_0_sm1_023_12
    // raw_denoiseb_update_0_sm1_023_13
    // raw_denoiseb_update_0_sm1_023_14
    // raw_denoiseb_update_0_sm1_023_15
    // raw_denoiseb_update_0_sm1_023_16
    // raw_denoiseb_update_0_sm1_023_17
    // raw_denoiseb_update_0_sm1_023_18
    // raw_denoiseb_update_0_sm1_023_19
    // raw_denoiseb_update_0_sm1_023_20
    // raw_denoiseb_update_0_sm1_023_21
    // raw_denoiseb_update_0_sm1_023_22
    // raw_denoiseb_update_0_sm1_023_23
    // raw_denoiseb_update_0_sm1_023_24
    // raw_denoiseb_update_0_sm1_023_25
    // raw_denoiseb_update_0_sm1_023_26
    // raw_denoiseb_update_0_sm1_023_27

	hw_uint<400> result;
	hw_uint<16> raw_denoiseb_update_0_sm1_023_3_res = raw_denoiseb_update_0_sm1_023_3_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<0, 400>(result, raw_denoiseb_update_0_sm1_023_3_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_4_res = raw_denoiseb_update_0_sm1_023_4_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<16, 400>(result, raw_denoiseb_update_0_sm1_023_4_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_5_res = raw_denoiseb_update_0_sm1_023_5_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<32, 400>(result, raw_denoiseb_update_0_sm1_023_5_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_6_res = raw_denoiseb_update_0_sm1_023_6_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<48, 400>(result, raw_denoiseb_update_0_sm1_023_6_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_7_res = raw_denoiseb_update_0_sm1_023_7_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<64, 400>(result, raw_denoiseb_update_0_sm1_023_7_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_8_res = raw_denoiseb_update_0_sm1_023_8_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<80, 400>(result, raw_denoiseb_update_0_sm1_023_8_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_9_res = raw_denoiseb_update_0_sm1_023_9_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<96, 400>(result, raw_denoiseb_update_0_sm1_023_9_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_10_res = raw_denoiseb_update_0_sm1_023_10_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<112, 400>(result, raw_denoiseb_update_0_sm1_023_10_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_11_res = raw_denoiseb_update_0_sm1_023_11_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<128, 400>(result, raw_denoiseb_update_0_sm1_023_11_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_12_res = raw_denoiseb_update_0_sm1_023_12_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<144, 400>(result, raw_denoiseb_update_0_sm1_023_12_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_13_res = raw_denoiseb_update_0_sm1_023_13_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<160, 400>(result, raw_denoiseb_update_0_sm1_023_13_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_14_res = raw_denoiseb_update_0_sm1_023_14_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<176, 400>(result, raw_denoiseb_update_0_sm1_023_14_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_15_res = raw_denoiseb_update_0_sm1_023_15_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<192, 400>(result, raw_denoiseb_update_0_sm1_023_15_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_16_res = raw_denoiseb_update_0_sm1_023_16_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<208, 400>(result, raw_denoiseb_update_0_sm1_023_16_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_17_res = raw_denoiseb_update_0_sm1_023_17_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<224, 400>(result, raw_denoiseb_update_0_sm1_023_17_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_18_res = raw_denoiseb_update_0_sm1_023_18_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<240, 400>(result, raw_denoiseb_update_0_sm1_023_18_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_19_res = raw_denoiseb_update_0_sm1_023_19_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<256, 400>(result, raw_denoiseb_update_0_sm1_023_19_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_20_res = raw_denoiseb_update_0_sm1_023_20_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<272, 400>(result, raw_denoiseb_update_0_sm1_023_20_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_21_res = raw_denoiseb_update_0_sm1_023_21_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<288, 400>(result, raw_denoiseb_update_0_sm1_023_21_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_22_res = raw_denoiseb_update_0_sm1_023_22_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<304, 400>(result, raw_denoiseb_update_0_sm1_023_22_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_23_res = raw_denoiseb_update_0_sm1_023_23_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<320, 400>(result, raw_denoiseb_update_0_sm1_023_23_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_24_res = raw_denoiseb_update_0_sm1_023_24_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<336, 400>(result, raw_denoiseb_update_0_sm1_023_24_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_25_res = raw_denoiseb_update_0_sm1_023_25_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<352, 400>(result, raw_denoiseb_update_0_sm1_023_25_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_26_res = raw_denoiseb_update_0_sm1_023_26_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<368, 400>(result, raw_denoiseb_update_0_sm1_023_26_res);
	hw_uint<16> raw_denoiseb_update_0_sm1_023_27_res = raw_denoiseb_update_0_sm1_023_27_select(raw, root, denoiseb_0, denoiseb_1, dynamic_address);
	set_at<384, 400>(result, raw_denoiseb_update_0_sm1_023_27_res);
	return result;
}

// raw_update_0_sm0_021_write
//	raw_raw_update_0_sm0_021_0
inline void raw_raw_update_0_sm0_021_write_bundle_write(hw_uint<16>& raw_update_0_sm0_021_write, raw_cache& raw, int root, int raw_0, int raw_1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_sm0_021_0_res = raw_update_0_sm0_021_write.extract<0, 15>();
	raw_raw_update_0_sm0_021_0_write(raw_raw_update_0_sm0_021_0_res, raw, root, raw_0, raw_1, dynamic_address);
}

// Total re-use buffer capacity: 308032 bits


// Operation logic
inline void demosaic_bx_update_0_sm6_019(demosaic_bxb_cache& demosaic_bxb, demosaic_bx_cache& demosaic_bx, int root, int demosaic_bx_0, int demosaic_bx_1) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value = demosaic_bxb_demosaic_bx_update_0_sm6_019_read_bundle_read(demosaic_bxb/* source_delay */, root, demosaic_bx_0, demosaic_bx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_1_m__lp_1_m_demosaic_bx_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bx_0__p__0_p_0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_sm6_019_write_bundle_write(/* arg names */compute_result, demosaic_bx, root, demosaic_bx_0, demosaic_bx_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void raw_update_0_sm0_021(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int root, int raw_0, int raw_1) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_1_m__lp__lp_1_m_raw_1__p__0_rp___p___m_3_rp___p__0_p_3_c_______1_m__lp_raw_0__p___m_3_rp___p__0_p_3_value);
	// Produce: raw
	raw_raw_update_0_sm0_021_write_bundle_write(/* arg names */compute_result, raw, root, raw_0, raw_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoiseb_update_0_sm1_023(raw_cache& raw, denoiseb_cache& denoiseb, int root, int denoiseb_0, int denoiseb_1) {
  // Dynamic address computation

	// Consume: raw
	auto raw_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value = raw_denoiseb_update_0_sm1_023_read_bundle_read(raw/* source_delay */, root, denoiseb_0, denoiseb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoiseb_generated_compute_unrolled_1(raw_1_m__lp__lp_1_m_denoiseb_1__p__0_rp___p___m_1_rp___p___m_2_p_3_c_______1_m__lp_denoiseb_0__p___m_1_rp___p___m_2_p_3_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_sm1_023_write_bundle_write(/* arg names */compute_result, denoiseb, root, denoiseb_0, denoiseb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void cp4_1_update_0_sm10_027(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */cp4_1, int root, int cp4_1_0, int cp4_1_1) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff_1_m__lp_1_m_cp4_1_1__p__0_rp___p__0_p_0_c_____1_m_cp4_1_0__p__0_p_0_value = demosaic_diff_cp4_1_update_0_sm10_027_read_bundle_read(demosaic_diff/* source_delay */, root, cp4_1_0, cp4_1_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = cp4_1_generated_compute_unrolled_1(demosaic_diff_1_m__lp_1_m_cp4_1_1__p__0_rp___p__0_p_0_c_____1_m_cp4_1_0__p__0_p_0_value);
	// Produce: cp4_1
	cp4_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_diff_update_0_sm9_025(demosaic_cache& demosaic, demosaic_by_cache& demosaic_by, demosaic_diff_cache& demosaic_diff, int root, int demosaic_diff_0, int demosaic_diff_1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_demosaic_diff_update_0_sm9_025_read_bundle_read(demosaic/* source_delay */, root, demosaic_diff_0, demosaic_diff_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: demosaic_by
	auto demosaic_by_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value = demosaic_by_demosaic_diff_update_0_sm9_025_read_bundle_read(demosaic_by/* source_delay */, root, demosaic_diff_0, demosaic_diff_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value, demosaic_by_1_m__lp_1_m_demosaic_diff_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_diff_0__p__0_p_0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_sm9_025_write_bundle_write(/* arg names */compute_result, demosaic_diff, root, demosaic_diff_0, demosaic_diff_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_by_update_0_sm8_029(demosaic_byb_cache& demosaic_byb, demosaic_by_cache& demosaic_by, int root, int demosaic_by_0, int demosaic_by_1) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value = demosaic_byb_demosaic_by_update_0_sm8_029_read_bundle_read(demosaic_byb/* source_delay */, root, demosaic_by_0, demosaic_by_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_byb_1_m__lp_1_m_demosaic_by_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_by_0__p__0_p_0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_sm8_029_write_bundle_write(/* arg names */compute_result, demosaic_by, root, demosaic_by_0, demosaic_by_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_byb_update_0_sm7_031(demosaic_bx_cache& demosaic_bx, demosaic_byb_cache& demosaic_byb, int root, int demosaic_byb_0, int demosaic_byb_1) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value = demosaic_bx_demosaic_byb_update_0_sm7_031_read_bundle_read(demosaic_bx/* source_delay */, root, demosaic_byb_0, demosaic_byb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_1_m__lp_1_m_demosaic_byb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_byb_0__p__0_p_0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_sm7_031_write_bundle_write(/* arg names */compute_result, demosaic_byb, root, demosaic_byb_0, demosaic_byb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaicb_update_0_sm3_013(denoise_cache& denoise, demosaicb_cache& demosaicb, int root, int demosaicb_0, int demosaicb_1) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value = denoise_demosaicb_update_0_sm3_013_read_bundle_read(denoise/* source_delay */, root, demosaicb_0, demosaicb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaicb_generated_compute_unrolled_1(denoise_1_m__lp_1_m_demosaicb_1__p__0_rp___p___m_1_p_1_c_____1_m_demosaicb_0__p___m_1_p_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_sm3_013_write_bundle_write(/* arg names */compute_result, demosaicb, root, demosaicb_0, demosaicb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_bxb_update_0_sm5_017(demosaic_cache& demosaic, demosaic_bxb_cache& demosaic_bxb, int root, int demosaic_bxb_0, int demosaic_bxb_1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value = demosaic_demosaic_bxb_update_0_sm5_017_read_bundle_read(demosaic/* source_delay */, root, demosaic_bxb_0, demosaic_bxb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_1(demosaic_1_m__lp_1_m_demosaic_bxb_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_bxb_0__p__0_p_0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_sm5_017_write_bundle_write(/* arg names */compute_result, demosaic_bxb, root, demosaic_bxb_0, demosaic_bxb_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void denoise_update_0_sm2_011(denoiseb_cache& denoiseb, denoise_cache& denoise, int root, int denoise_0, int denoise_1) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value = denoiseb_denoise_update_0_sm2_011_read_bundle_read(denoiseb/* source_delay */, root, denoise_0, denoise_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = denoise_generated_compute_unrolled_1(denoiseb_1_m__lp__lp_1_m_denoise_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_denoise_0__p___m_1_rp___p__0_p_1_value);
	// Produce: denoise
	denoise_denoise_update_0_sm2_011_write_bundle_write(/* arg names */compute_result, denoise, root, denoise_0, denoise_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void demosaic_update_0_sm4_015(demosaicb_cache& demosaicb, demosaic_cache& demosaic, int root, int demosaic_0, int demosaic_1) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value = demosaicb_demosaic_update_0_sm4_015_read_bundle_read(demosaicb/* source_delay */, root, demosaic_0, demosaic_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = demosaic_generated_compute_unrolled_1(demosaicb_1_m__lp_1_m_demosaic_1__p__0_rp___p__0_p_0_c_____1_m_demosaic_0__p__0_p_0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_sm4_015_write_bundle_write(/* arg names */compute_result, demosaic, root, demosaic_0, demosaic_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void cp4_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp4_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("cp4_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  demosaic_cache demosaic;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bx_cache demosaic_bx;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_by_cache demosaic_by;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_byb_cache demosaic_byb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaic_diff_cache demosaic_diff;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  demosaicb_cache demosaicb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoise_cache denoise;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  denoiseb_cache denoiseb;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  raw_cache raw;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { demosaic_byb_update_0_sm7_031[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927; demosaic_bx_update_0_sm6_019[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; demosaic_by_update_0_sm8_029[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; demosaic_bxb_update_0_sm5_017[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919; denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; cp4_1_update_0_sm10_027[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923; demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921; demosaic_diff_update_0_sm9_025[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { demosaic_byb_update_0_sm7_031[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 7] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_byb_update_0_sm7_031(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_update_0_sm4_015[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 4] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for demosaic_update_0_sm4_015(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { raw_update_0_sm0_021[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1087 and 0 <= d2 <= 1927 }
// Condition for raw_update_0_sm0_021(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_bx_update_0_sm6_019[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 6] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for demosaic_bx_update_0_sm6_019(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_by_update_0_sm8_029[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 8] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_by_update_0_sm8_029(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_bxb_update_0_sm5_017[d0 = 0, d1, d2] -> [0, 6 + d1, 8 + d2, 5] : 0 <= d1 <= 1081 and 0 <= d2 <= 1919 }
// Condition for demosaic_bxb_update_0_sm5_017(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { denoise_update_0_sm2_011[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 2] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for denoise_update_0_sm2_011(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { cp4_1_update_0_sm10_027[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for cp4_1_update_0_sm10_027(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { denoiseb_update_0_sm1_023[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 1] : 0 <= d1 <= 1083 and 0 <= d2 <= 1923 }
// Condition for denoiseb_update_0_sm1_023(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaicb_update_0_sm3_013[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 3] : 0 <= d1 <= 1081 and 0 <= d2 <= 1921 }
// Condition for demosaicb_update_0_sm3_013(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))
//   { demosaic_diff_update_0_sm9_025[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 9] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for demosaic_diff_update_0_sm9_025(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1087 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1927 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1087 and 4 <= i2 <= 1927 and 0 < i3 <= 10 and ((i1 >= 8 and i2 >= 8 and i3 >= 7) or (i1 >= 6 and i2 >= 8 and 5 <= i3 <= 6) or (i1 >= 6 and i2 >= 6 and 3 <= i3 <= 4) or i3 <= 2); [0, i1, i2, 0] : 0 <= i1 <= 1087 and 0 <= i2 <= 1927 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1087; i1++) {
	    for (int i2 = 0; i2 <= 1927; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          raw_update_0_sm0_021(raw_oc /* buf name */, raw, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          denoiseb_update_0_sm1_023(raw /* buf name */, denoiseb, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 4 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          denoise_update_0_sm2_011(denoiseb /* buf name */, denoise, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          demosaicb_update_0_sm3_013(denoise /* buf name */, demosaicb, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          demosaic_update_0_sm4_015(demosaicb /* buf name */, demosaic, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 8 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          demosaic_bxb_update_0_sm5_017(demosaic /* buf name */, demosaic_bxb, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 8 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          demosaic_bx_update_0_sm6_019(demosaic_bxb /* buf name */, demosaic_bx, 0, ((-6 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          demosaic_byb_update_0_sm7_031(demosaic_bx /* buf name */, demosaic_byb, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          demosaic_by_update_0_sm8_029(demosaic_byb /* buf name */, demosaic_by, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          demosaic_diff_update_0_sm9_025(demosaic /* buf name */, demosaic_by /* buf name */, demosaic_diff, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 8 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          cp4_1_update_0_sm10_027(demosaic_diff /* buf name */, cp4_1, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void cp4_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp4_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp4_1_opt(raw_oc, cp4_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { cp4_1_update_0_sm10_027[root = 0, cp4_1_0, cp4_1_1] -> cp4_1[cp4_1_1, cp4_1_0] : 0 <= cp4_1_0 <= 1079 and 0 <= cp4_1_1 <= 1919 }
const int cp4_1_update_0_sm10_027_write_pipe0_num_transfers = 2073600;
  // { raw_update_0_sm0_021[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : 0 <= raw_0 <= 1087 and 0 <= raw_1 <= 1927 }
const int raw_update_0_sm0_021_read_pipe0_num_transfers = 2097664;


extern "C" {

void cp4_1_opt_accel(hw_uint<16>* raw_update_0_sm0_021_read_pipe0, hw_uint<16>* cp4_1_update_0_sm10_027_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_sm0_021_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp4_1_update_0_sm10_027_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_sm0_021_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp4_1_update_0_sm10_027_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > raw_update_0_sm0_021_read_pipe0_channel;
  static HWStream<hw_uint<16> > cp4_1_update_0_sm10_027_write_pipe0_channel;

  burst_read<16>(raw_update_0_sm0_021_read_pipe0, raw_update_0_sm0_021_read_pipe0_channel, raw_update_0_sm0_021_read_pipe0_num_transfers*size);

  cp4_1_opt_wrapper(raw_update_0_sm0_021_read_pipe0_channel, cp4_1_update_0_sm10_027_write_pipe0_channel, size);

  burst_write<16>(cp4_1_update_0_sm10_027_write_pipe0, cp4_1_update_0_sm10_027_write_pipe0_channel, cp4_1_update_0_sm10_027_write_pipe0_num_transfers*size);
}

}
extern "C" {

void cp4_1_opt_rdai(HWStream<hw_uint<16> >& raw_update_0_sm0_021_read_pipe0, HWStream<hw_uint<16> >&  cp4_1_update_0_sm10_027_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_sm0_021_read_pipe0
#pragma HLS INTERFACE axis register port = cp4_1_update_0_sm10_027_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp4_1_opt(raw_update_0_sm0_021_read_pipe0, cp4_1_update_0_sm10_027_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

