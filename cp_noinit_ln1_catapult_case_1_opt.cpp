#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: cp_noinit_ln1_catapult_case_1_opt_compute_units.h
#include "cp_noinit_ln1_catapult_case_1_opt_compute_units.h"

struct demosaic_demosaic_update_0_write0_merged_banks_4_cache {
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_3846() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 3843
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 3843 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct demosaic_cache {
  // Reader addrs...
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
    // { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
    // { demosaic_diff_update_0[d0, d1] -> demosaic[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // # of banks: 1
  demosaic_demosaic_update_0_write0_merged_banks_4_cache demosaic_demosaic_update_0_write0_merged_banks_4;
};



inline void demosaic_demosaic_update_0_write0_write(hw_uint<16>& demosaic_demosaic_update_0_write0, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.push(demosaic_demosaic_update_0_write0);
}

inline hw_uint<16> demosaic_bxb_rd0_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd0 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_2();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd1_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd1 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[1 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_1();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_bxb_rd2_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bxb_rd2 read pattern: { demosaic_bxb_update_0[d0, d1] -> demosaic[2 + d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_0();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 10] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_demosaic_demosaic_update_0_write0 = demosaic.demosaic_demosaic_update_0_write0_merged_banks_4.peek_3846();
  return value_demosaic_demosaic_update_0_write0;
  return 0;
}

// # of bundles = 3
// demosaic_bxb_update_0_read
//	demosaic_bxb_rd0
//	demosaic_bxb_rd1
//	demosaic_bxb_rd2
inline hw_uint<48> demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_bxb_rd0
    // demosaic_bxb_rd1
    // demosaic_bxb_rd2

	hw_uint<48> result;
	hw_uint<16> demosaic_bxb_rd0_res = demosaic_bxb_rd0_select(demosaic, d0, d1, dynamic_address);
	set_at<0, 48>(result, demosaic_bxb_rd0_res);
	hw_uint<16> demosaic_bxb_rd1_res = demosaic_bxb_rd1_select(demosaic, d0, d1, dynamic_address);
	set_at<16, 48>(result, demosaic_bxb_rd1_res);
	hw_uint<16> demosaic_bxb_rd2_res = demosaic_bxb_rd2_select(demosaic, d0, d1, dynamic_address);
	set_at<32, 48>(result, demosaic_bxb_rd2_res);
	return result;
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
inline hw_uint<16> demosaic_demosaic_diff_update_0_read_bundle_read(demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic, d0, d1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_rd0_res);
	return result;
}

// demosaic_update_0_write
//	demosaic_demosaic_update_0_write0
inline void demosaic_demosaic_update_0_write_bundle_write(hw_uint<16>& demosaic_update_0_write, demosaic_cache& demosaic, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_demosaic_update_0_write0_res = demosaic_update_0_write.extract<0, 15>();
	demosaic_demosaic_update_0_write0_write(demosaic_demosaic_update_0_write0_res, demosaic, d0, d1, dynamic_address);
}

struct demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache {
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f1.back();
	}

	inline hw_uint<16> peek_1920() {
		return f2;
	}

	inline hw_uint<16> peek_3839() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_3840() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1919
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1919 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1919
    f2 = f1.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1919 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct demosaic_bx_cache {
  // Reader addrs...
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
    // { demosaic_byb_update_0[d0, d1] -> demosaic_bx[d0, 2 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // # of banks: 1
  demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3_cache demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3;
};



inline void demosaic_bx_demosaic_bx_update_0_write0_write(hw_uint<16>& demosaic_bx_demosaic_bx_update_0_write0, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.push(demosaic_bx_demosaic_bx_update_0_write0);
}

inline hw_uint<16> demosaic_byb_rd0_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd0 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 5 + d0, 8] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_3840();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd1_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd1 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[d0, 1 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 5 + d0, 8] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_1920();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaic_byb_rd2_select(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_byb_rd2 read pattern: { demosaic_byb_update_0[d0, d1] -> demosaic_bx[d0, 2 + d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_byb_update_0[d0, d1] -> [5 + d1, 5 + d0, 8] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  auto value_demosaic_bx_demosaic_bx_update_0_write0 = demosaic_bx.demosaic_bx_demosaic_bx_update_0_write0_merged_banks_3.peek_0();
  return value_demosaic_bx_demosaic_bx_update_0_write0;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_write
//	demosaic_bx_demosaic_bx_update_0_write0
inline void demosaic_bx_demosaic_bx_update_0_write_bundle_write(hw_uint<16>& demosaic_bx_update_0_write, demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_bx_demosaic_bx_update_0_write0_res = demosaic_bx_update_0_write.extract<0, 15>();
	demosaic_bx_demosaic_bx_update_0_write0_write(demosaic_bx_demosaic_bx_update_0_write0_res, demosaic_bx, d0, d1, dynamic_address);
}

// demosaic_byb_update_0_read
//	demosaic_byb_rd0
//	demosaic_byb_rd1
//	demosaic_byb_rd2
inline hw_uint<48> demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx_cache& demosaic_bx, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 3
    // demosaic_byb_rd0
    // demosaic_byb_rd1
    // demosaic_byb_rd2

	hw_uint<48> result;
	hw_uint<16> demosaic_byb_rd0_res = demosaic_byb_rd0_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<0, 48>(result, demosaic_byb_rd0_res);
	hw_uint<16> demosaic_byb_rd1_res = demosaic_byb_rd1_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<16, 48>(result, demosaic_byb_rd1_res);
	hw_uint<16> demosaic_byb_rd2_res = demosaic_byb_rd2_select(demosaic_bx, d0, d1, dynamic_address);
	set_at<32, 48>(result, demosaic_byb_rd2_res);
	return result;
}

struct demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0_cache {
	// RAM Box: {[0, 1919], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_bxb_cache {
  // Reader addrs...
    // { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // # of banks: 1
  demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0_cache demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0;
};



inline void demosaic_bxb_demosaic_bxb_update_0_write0_write(hw_uint<16>& demosaic_bxb_demosaic_bxb_update_0_write0, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0.push(demosaic_bxb_demosaic_bxb_update_0_write0);
}

inline hw_uint<16> demosaic_bx_rd0_select(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_bx_rd0 read pattern: { demosaic_bx_update_0[d0, d1] -> demosaic_bxb[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
  auto value_demosaic_bxb_demosaic_bxb_update_0_write0 = demosaic_bxb.demosaic_bxb_demosaic_bxb_update_0_write0_to_demosaic_bx_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_bxb_demosaic_bxb_update_0_write0;
  return 0;
}

// # of bundles = 2
// demosaic_bx_update_0_read
//	demosaic_bx_rd0
inline hw_uint<16> demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_bx_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_bx_rd0_res = demosaic_bx_rd0_select(demosaic_bxb, d0, d1, dynamic_address);
	set_at<0, 16>(result, demosaic_bx_rd0_res);
	return result;
}

// demosaic_bxb_update_0_write
//	demosaic_bxb_demosaic_bxb_update_0_write0
inline void demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(hw_uint<16>& demosaic_bxb_update_0_write, demosaic_bxb_cache& demosaic_bxb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_bxb_demosaic_bxb_update_0_write0_res = demosaic_bxb_update_0_write.extract<0, 15>();
	demosaic_bxb_demosaic_bxb_update_0_write0_write(demosaic_bxb_demosaic_bxb_update_0_write0_res, demosaic_bxb, d0, d1, dynamic_address);
}

struct demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_by_cache {
  // Reader addrs...
    // { demosaic_diff_update_0[d0, d1] -> demosaic_by[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // # of banks: 1
  demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0_cache demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0;
};



inline void demosaic_by_demosaic_by_update_0_write0_write(hw_uint<16>& demosaic_by_demosaic_by_update_0_write0, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  demosaic_by.demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0.push(demosaic_by_demosaic_by_update_0_write0);
}

inline hw_uint<16> demosaic_diff_rd0_select(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_diff_rd0 read pattern: { demosaic_diff_update_0[d0, d1] -> demosaic_by[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 10] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 9] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_demosaic_by_demosaic_by_update_0_write0 = demosaic_by.demosaic_by_demosaic_by_update_0_write0_to_demosaic_diff_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_by_demosaic_by_update_0_write0;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_write
//	demosaic_by_demosaic_by_update_0_write0
inline void demosaic_by_demosaic_by_update_0_write_bundle_write(hw_uint<16>& demosaic_by_update_0_write, demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_by_demosaic_by_update_0_write0_res = demosaic_by_update_0_write.extract<0, 15>();
	demosaic_by_demosaic_by_update_0_write0_write(demosaic_by_demosaic_by_update_0_write0_res, demosaic_by, d0, d1, dynamic_address);
}

// demosaic_diff_update_0_read
//	demosaic_diff_rd0
inline hw_uint<16> demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by_cache& demosaic_by, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_diff_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_diff_rd0_res = demosaic_diff_rd0_select(demosaic_by, d0, d1, dynamic_address);
	set_at<0, 16>(result, demosaic_diff_rd0_res);
	return result;
}

struct demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_byb_cache {
  // Reader addrs...
    // { demosaic_by_update_0[d0, d1] -> demosaic_byb[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // # of banks: 1
  demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0_cache demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0;
};



inline void demosaic_byb_demosaic_byb_update_0_write0_write(hw_uint<16>& demosaic_byb_demosaic_byb_update_0_write0, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0.push(demosaic_byb_demosaic_byb_update_0_write0);
}

inline hw_uint<16> demosaic_by_rd0_select(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_by_rd0 read pattern: { demosaic_by_update_0[d0, d1] -> demosaic_byb[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 9] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_byb_update_0[d0, d1] -> [5 + d1, 5 + d0, 8] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_demosaic_byb_demosaic_byb_update_0_write0 = demosaic_byb.demosaic_byb_demosaic_byb_update_0_write0_to_demosaic_by_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_byb_demosaic_byb_update_0_write0;
  return 0;
}

// # of bundles = 2
// demosaic_by_update_0_read
//	demosaic_by_rd0
inline hw_uint<16> demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_by_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_by_rd0_res = demosaic_by_rd0_select(demosaic_byb, d0, d1, dynamic_address);
	set_at<0, 16>(result, demosaic_by_rd0_res);
	return result;
}

// demosaic_byb_update_0_write
//	demosaic_byb_demosaic_byb_update_0_write0
inline void demosaic_byb_demosaic_byb_update_0_write_bundle_write(hw_uint<16>& demosaic_byb_update_0_write, demosaic_byb_cache& demosaic_byb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_byb_demosaic_byb_update_0_write0_res = demosaic_byb_update_0_write.extract<0, 15>();
	demosaic_byb_demosaic_byb_update_0_write0_write(demosaic_byb_demosaic_byb_update_0_write0_res, demosaic_byb, d0, d1, dynamic_address);
}

struct demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_1_rd0_cache {
	// RAM Box: {[0, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaic_diff_cache {
  // Reader addrs...
    // { cp_noinit_ln1_catapult_case_1_update_0[d0, d1] -> demosaic_diff[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // # of banks: 1
  demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_1_rd0_cache demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_1_rd0;
};



inline void demosaic_diff_demosaic_diff_update_0_write0_write(hw_uint<16>& demosaic_diff_demosaic_diff_update_0_write0, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_1_rd0.push(demosaic_diff_demosaic_diff_update_0_write0);
}

inline hw_uint<16> cp_noinit_ln1_catapult_case_1_rd0_select(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cp_noinit_ln1_catapult_case_1_rd0 read pattern: { cp_noinit_ln1_catapult_case_1_update_0[d0, d1] -> demosaic_diff[d0, d1] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Read schedule : { cp_noinit_ln1_catapult_case_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  // Write schedule: { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 10] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
  auto value_demosaic_diff_demosaic_diff_update_0_write0 = demosaic_diff.demosaic_diff_demosaic_diff_update_0_write0_to_cp_noinit_ln1_catapult_case_1_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaic_diff_demosaic_diff_update_0_write0;
  return 0;
}

// # of bundles = 2
// cp_noinit_ln1_catapult_case_1_update_0_read
//	cp_noinit_ln1_catapult_case_1_rd0
inline hw_uint<16> demosaic_diff_cp_noinit_ln1_catapult_case_1_update_0_read_bundle_read(demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // cp_noinit_ln1_catapult_case_1_rd0

	hw_uint<16> result;
	hw_uint<16> cp_noinit_ln1_catapult_case_1_rd0_res = cp_noinit_ln1_catapult_case_1_rd0_select(demosaic_diff, d0, d1, dynamic_address);
	set_at<0, 16>(result, cp_noinit_ln1_catapult_case_1_rd0_res);
	return result;
}

// demosaic_diff_update_0_write
//	demosaic_diff_demosaic_diff_update_0_write0
inline void demosaic_diff_demosaic_diff_update_0_write_bundle_write(hw_uint<16>& demosaic_diff_update_0_write, demosaic_diff_cache& demosaic_diff, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaic_diff_demosaic_diff_update_0_write0_res = demosaic_diff_update_0_write.extract<0, 15>();
	demosaic_diff_demosaic_diff_update_0_write0_write(demosaic_diff_demosaic_diff_update_0_write0_res, demosaic_diff, d0, d1, dynamic_address);
}

struct demosaicb_demosaicb_update_0_write0_to_demosaic_rd0_cache {
	// RAM Box: {[0, 1921], [0, 1081]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct demosaicb_cache {
  // Reader addrs...
    // { demosaic_update_0[d0, d1] -> demosaicb[d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // # of banks: 1
  demosaicb_demosaicb_update_0_write0_to_demosaic_rd0_cache demosaicb_demosaicb_update_0_write0_to_demosaic_rd0;
};



inline void demosaicb_demosaicb_update_0_write0_write(hw_uint<16>& demosaicb_demosaicb_update_0_write0, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  demosaicb.demosaicb_demosaicb_update_0_write0_to_demosaic_rd0.push(demosaicb_demosaicb_update_0_write0);
}

inline hw_uint<16> demosaic_rd0_select(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaic_rd0 read pattern: { demosaic_update_0[d0, d1] -> demosaicb[d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  auto value_demosaicb_demosaicb_update_0_write0 = demosaicb.demosaicb_demosaicb_update_0_write0_to_demosaic_rd0.peek(/* one reader or all rams */ 0);
  return value_demosaicb_demosaicb_update_0_write0;
  return 0;
}

// # of bundles = 2
// demosaic_update_0_read
//	demosaic_rd0
inline hw_uint<16> demosaicb_demosaic_update_0_read_bundle_read(demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // demosaic_rd0

	hw_uint<16> result;
	hw_uint<16> demosaic_rd0_res = demosaic_rd0_select(demosaicb, d0, d1, dynamic_address);
	set_at<0, 16>(result, demosaic_rd0_res);
	return result;
}

// demosaicb_update_0_write
//	demosaicb_demosaicb_update_0_write0
inline void demosaicb_demosaicb_update_0_write_bundle_write(hw_uint<16>& demosaicb_update_0_write, demosaicb_cache& demosaicb, int d0, int d1, int dynamic_address) {
	hw_uint<16> demosaicb_demosaicb_update_0_write0_res = demosaicb_update_0_write.extract<0, 15>();
	demosaicb_demosaicb_update_0_write0_write(demosaicb_demosaicb_update_0_write0_res, demosaicb, d0, d1, dynamic_address);
}

struct denoise_denoise_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 1922], [-1, 1082]}
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1921
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1921 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1921
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1921 reading from capacity: 1
    f5.push(f4);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct denoise_cache {
  // Reader addrs...
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + d0, -1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[-1 + d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[d0, -1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + d0, -1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
    // { demosaicb_update_0[d0, d1] -> denoise[1 + d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // # of banks: 1
  denoise_denoise_update_0_write0_merged_banks_9_cache denoise_denoise_update_0_write0_merged_banks_9;
};



inline void denoise_denoise_update_0_write0_write(hw_uint<16>& denoise_denoise_update_0_write0, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  denoise.denoise_denoise_update_0_write0_merged_banks_9.push(denoise_denoise_update_0_write0);
}

inline hw_uint<16> demosaicb_rd0_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd0 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + d0, -1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_3850();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd1_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd1 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1926();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd2_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd2 read pattern: { demosaicb_update_0[d0, d1] -> denoise[-1 + d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_2();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd3_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd3 read pattern: { demosaicb_update_0[d0, d1] -> denoise[d0, -1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_3849();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd4_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd4 read pattern: { demosaicb_update_0[d0, d1] -> denoise[d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1925();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd5_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd5 read pattern: { demosaicb_update_0[d0, d1] -> denoise[d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd6_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd6 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + d0, -1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_3848();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd7_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd7 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + d0, d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_1924();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

inline hw_uint<16> demosaicb_rd8_select(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // demosaicb_rd8 read pattern: { demosaicb_update_0[d0, d1] -> denoise[1 + d0, 1 + d1] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Read schedule : { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
  // Write schedule: { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoise_denoise_update_0_write0 = denoise.denoise_denoise_update_0_write0_merged_banks_9.peek_0();
  return value_denoise_denoise_update_0_write0;
  return 0;
}

// # of bundles = 2
// demosaicb_update_0_read
//	demosaicb_rd0
//	demosaicb_rd1
//	demosaicb_rd2
//	demosaicb_rd3
//	demosaicb_rd4
//	demosaicb_rd5
//	demosaicb_rd6
//	demosaicb_rd7
//	demosaicb_rd8
inline hw_uint<144> denoise_demosaicb_update_0_read_bundle_read(denoise_cache& denoise, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // demosaicb_rd0
    // demosaicb_rd1
    // demosaicb_rd2
    // demosaicb_rd3
    // demosaicb_rd4
    // demosaicb_rd5
    // demosaicb_rd6
    // demosaicb_rd7
    // demosaicb_rd8

	hw_uint<144> result;
	hw_uint<16> demosaicb_rd0_res = demosaicb_rd0_select(denoise, d0, d1, dynamic_address);
	set_at<0, 144>(result, demosaicb_rd0_res);
	hw_uint<16> demosaicb_rd1_res = demosaicb_rd1_select(denoise, d0, d1, dynamic_address);
	set_at<16, 144>(result, demosaicb_rd1_res);
	hw_uint<16> demosaicb_rd2_res = demosaicb_rd2_select(denoise, d0, d1, dynamic_address);
	set_at<32, 144>(result, demosaicb_rd2_res);
	hw_uint<16> demosaicb_rd3_res = demosaicb_rd3_select(denoise, d0, d1, dynamic_address);
	set_at<48, 144>(result, demosaicb_rd3_res);
	hw_uint<16> demosaicb_rd4_res = demosaicb_rd4_select(denoise, d0, d1, dynamic_address);
	set_at<64, 144>(result, demosaicb_rd4_res);
	hw_uint<16> demosaicb_rd5_res = demosaicb_rd5_select(denoise, d0, d1, dynamic_address);
	set_at<80, 144>(result, demosaicb_rd5_res);
	hw_uint<16> demosaicb_rd6_res = demosaicb_rd6_select(denoise, d0, d1, dynamic_address);
	set_at<96, 144>(result, demosaicb_rd6_res);
	hw_uint<16> demosaicb_rd7_res = demosaicb_rd7_select(denoise, d0, d1, dynamic_address);
	set_at<112, 144>(result, demosaicb_rd7_res);
	hw_uint<16> demosaicb_rd8_res = demosaicb_rd8_select(denoise, d0, d1, dynamic_address);
	set_at<128, 144>(result, demosaicb_rd8_res);
	return result;
}

// denoise_update_0_write
//	denoise_denoise_update_0_write0
inline void denoise_denoise_update_0_write_bundle_write(hw_uint<16>& denoise_update_0_write, denoise_cache& denoise, int d0, int d1, int dynamic_address) {
	hw_uint<16> denoise_denoise_update_0_write0_res = denoise_update_0_write.extract<0, 15>();
	denoise_denoise_update_0_write0_write(denoise_denoise_update_0_write0_res, denoise, d0, d1, dynamic_address);
}

struct denoiseb_denoiseb_update_0_write0_to_denoise_rd0_cache {
	// RAM Box: {[-1, 1922], [-1, 1082]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
	fifo<hw_uint<16>, 1> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.peek(0 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    return f.push(value);
  }

};

struct denoiseb_cache {
  // Reader addrs...
    // { denoise_update_0[d0, d1] -> denoiseb[d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // # of banks: 1
  denoiseb_denoiseb_update_0_write0_to_denoise_rd0_cache denoiseb_denoiseb_update_0_write0_to_denoise_rd0;
};



inline void denoiseb_denoiseb_update_0_write0_write(hw_uint<16>& denoiseb_denoiseb_update_0_write0, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  denoiseb.denoiseb_denoiseb_update_0_write0_to_denoise_rd0.push(denoiseb_denoiseb_update_0_write0);
}

inline hw_uint<16> denoise_rd0_select(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoise_rd0 read pattern: { denoise_update_0[d0, d1] -> denoiseb[d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  auto value_denoiseb_denoiseb_update_0_write0 = denoiseb.denoiseb_denoiseb_update_0_write0_to_denoise_rd0.peek(/* one reader or all rams */ 0);
  return value_denoiseb_denoiseb_update_0_write0;
  return 0;
}

// # of bundles = 2
// denoise_update_0_read
//	denoise_rd0
inline hw_uint<16> denoiseb_denoise_update_0_read_bundle_read(denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // denoise_rd0

	hw_uint<16> result;
	hw_uint<16> denoise_rd0_res = denoise_rd0_select(denoiseb, d0, d1, dynamic_address);
	set_at<0, 16>(result, denoise_rd0_res);
	return result;
}

// denoiseb_update_0_write
//	denoiseb_denoiseb_update_0_write0
inline void denoiseb_denoiseb_update_0_write_bundle_write(hw_uint<16>& denoiseb_update_0_write, denoiseb_cache& denoiseb, int d0, int d1, int dynamic_address) {
	hw_uint<16> denoiseb_denoiseb_update_0_write0_res = denoiseb_update_0_write.extract<0, 15>();
	denoiseb_denoiseb_update_0_write0_write(denoiseb_denoiseb_update_0_write0_res, denoiseb, d0, d1, dynamic_address);
}

struct raw_raw_update_0_write0_merged_banks_25_cache {
	// RAM Box: {[-3, 1924], [-3, 1084]}
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f48 = f46;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f46 = f44;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f44 = f42;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f42 = f40;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1923
    f40 = f39.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1923 reading from capacity: 1
    f39.push(f38);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f38 = f36;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f36 = f34;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f34 = f32;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f32 = f30;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1923
    f30 = f29.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1923 reading from capacity: 1
    f29.push(f28);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f28 = f26;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f26 = f24;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f24 = f22;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f22 = f20;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1923
    f20 = f19.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1923 reading from capacity: 1
    f19.push(f18);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f18 = f16;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1923
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1923 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f4 = f2;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct raw_cache {
  // Reader addrs...
    // { denoiseb_update_0[d0, d1] -> raw[-2 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-2 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
    // { denoiseb_update_0[d0, d1] -> raw[-1 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // # of banks: 1
  raw_raw_update_0_write0_merged_banks_25_cache raw_raw_update_0_write0_merged_banks_25;
};



inline void raw_raw_update_0_write0_write(hw_uint<16>& raw_raw_update_0_write0, raw_cache& raw, int d0, int d1, int dynamic_address) {
  raw.raw_raw_update_0_write0_merged_banks_25.push(raw_raw_update_0_write0);
}

inline hw_uint<16> denoiseb_rd0_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd0 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7716();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd1_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd1 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5788();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd10_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd10 read pattern: { denoiseb_update_0[d0, d1] -> raw[d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7714();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd11_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd11 read pattern: { denoiseb_update_0[d0, d1] -> raw[d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5786();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd12_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd12 read pattern: { denoiseb_update_0[d0, d1] -> raw[d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3858();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd13_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd13 read pattern: { denoiseb_update_0[d0, d1] -> raw[d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1930();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd14_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd14 read pattern: { denoiseb_update_0[d0, d1] -> raw[d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_2();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd15_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd15 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7713();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd16_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd16 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5785();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd17_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd17 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3857();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd18_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd18 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1929();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd19_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd19 read pattern: { denoiseb_update_0[d0, d1] -> raw[1 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd2_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd2 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3860();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd20_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd20 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7712();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd21_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd21 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5784();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd22_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd22 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3856();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd23_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd23 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1928();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd24_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd24 read pattern: { denoiseb_update_0[d0, d1] -> raw[2 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_0();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd3_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd3 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1932();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd4_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd4 read pattern: { denoiseb_update_0[d0, d1] -> raw[-2 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_4();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd5_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd5 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + d0, -2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_7715();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd6_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd6 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + d0, -1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_5787();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd7_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd7 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + d0, d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3859();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd8_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd8 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + d0, 1 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_1931();
  return value_raw_raw_update_0_write0;
  return 0;
}

inline hw_uint<16> denoiseb_rd9_select(raw_cache& raw, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // denoiseb_rd9 read pattern: { denoiseb_update_0[d0, d1] -> raw[-1 + d0, 2 + d1] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Read schedule : { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
  // Write schedule: { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
  auto value_raw_raw_update_0_write0 = raw.raw_raw_update_0_write0_merged_banks_25.peek_3();
  return value_raw_raw_update_0_write0;
  return 0;
}

// # of bundles = 2
// denoiseb_update_0_read
//	denoiseb_rd0
//	denoiseb_rd1
//	denoiseb_rd2
//	denoiseb_rd3
//	denoiseb_rd4
//	denoiseb_rd5
//	denoiseb_rd6
//	denoiseb_rd7
//	denoiseb_rd8
//	denoiseb_rd9
//	denoiseb_rd10
//	denoiseb_rd11
//	denoiseb_rd12
//	denoiseb_rd13
//	denoiseb_rd14
//	denoiseb_rd15
//	denoiseb_rd16
//	denoiseb_rd17
//	denoiseb_rd18
//	denoiseb_rd19
//	denoiseb_rd20
//	denoiseb_rd21
//	denoiseb_rd22
//	denoiseb_rd23
//	denoiseb_rd24
inline hw_uint<400> raw_denoiseb_update_0_read_bundle_read(raw_cache& raw, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 25
    // denoiseb_rd0
    // denoiseb_rd1
    // denoiseb_rd2
    // denoiseb_rd3
    // denoiseb_rd4
    // denoiseb_rd5
    // denoiseb_rd6
    // denoiseb_rd7
    // denoiseb_rd8
    // denoiseb_rd9
    // denoiseb_rd10
    // denoiseb_rd11
    // denoiseb_rd12
    // denoiseb_rd13
    // denoiseb_rd14
    // denoiseb_rd15
    // denoiseb_rd16
    // denoiseb_rd17
    // denoiseb_rd18
    // denoiseb_rd19
    // denoiseb_rd20
    // denoiseb_rd21
    // denoiseb_rd22
    // denoiseb_rd23
    // denoiseb_rd24

	hw_uint<400> result;
	hw_uint<16> denoiseb_rd0_res = denoiseb_rd0_select(raw, d0, d1, dynamic_address);
	set_at<0, 400>(result, denoiseb_rd0_res);
	hw_uint<16> denoiseb_rd1_res = denoiseb_rd1_select(raw, d0, d1, dynamic_address);
	set_at<16, 400>(result, denoiseb_rd1_res);
	hw_uint<16> denoiseb_rd2_res = denoiseb_rd2_select(raw, d0, d1, dynamic_address);
	set_at<32, 400>(result, denoiseb_rd2_res);
	hw_uint<16> denoiseb_rd3_res = denoiseb_rd3_select(raw, d0, d1, dynamic_address);
	set_at<48, 400>(result, denoiseb_rd3_res);
	hw_uint<16> denoiseb_rd4_res = denoiseb_rd4_select(raw, d0, d1, dynamic_address);
	set_at<64, 400>(result, denoiseb_rd4_res);
	hw_uint<16> denoiseb_rd5_res = denoiseb_rd5_select(raw, d0, d1, dynamic_address);
	set_at<80, 400>(result, denoiseb_rd5_res);
	hw_uint<16> denoiseb_rd6_res = denoiseb_rd6_select(raw, d0, d1, dynamic_address);
	set_at<96, 400>(result, denoiseb_rd6_res);
	hw_uint<16> denoiseb_rd7_res = denoiseb_rd7_select(raw, d0, d1, dynamic_address);
	set_at<112, 400>(result, denoiseb_rd7_res);
	hw_uint<16> denoiseb_rd8_res = denoiseb_rd8_select(raw, d0, d1, dynamic_address);
	set_at<128, 400>(result, denoiseb_rd8_res);
	hw_uint<16> denoiseb_rd9_res = denoiseb_rd9_select(raw, d0, d1, dynamic_address);
	set_at<144, 400>(result, denoiseb_rd9_res);
	hw_uint<16> denoiseb_rd10_res = denoiseb_rd10_select(raw, d0, d1, dynamic_address);
	set_at<160, 400>(result, denoiseb_rd10_res);
	hw_uint<16> denoiseb_rd11_res = denoiseb_rd11_select(raw, d0, d1, dynamic_address);
	set_at<176, 400>(result, denoiseb_rd11_res);
	hw_uint<16> denoiseb_rd12_res = denoiseb_rd12_select(raw, d0, d1, dynamic_address);
	set_at<192, 400>(result, denoiseb_rd12_res);
	hw_uint<16> denoiseb_rd13_res = denoiseb_rd13_select(raw, d0, d1, dynamic_address);
	set_at<208, 400>(result, denoiseb_rd13_res);
	hw_uint<16> denoiseb_rd14_res = denoiseb_rd14_select(raw, d0, d1, dynamic_address);
	set_at<224, 400>(result, denoiseb_rd14_res);
	hw_uint<16> denoiseb_rd15_res = denoiseb_rd15_select(raw, d0, d1, dynamic_address);
	set_at<240, 400>(result, denoiseb_rd15_res);
	hw_uint<16> denoiseb_rd16_res = denoiseb_rd16_select(raw, d0, d1, dynamic_address);
	set_at<256, 400>(result, denoiseb_rd16_res);
	hw_uint<16> denoiseb_rd17_res = denoiseb_rd17_select(raw, d0, d1, dynamic_address);
	set_at<272, 400>(result, denoiseb_rd17_res);
	hw_uint<16> denoiseb_rd18_res = denoiseb_rd18_select(raw, d0, d1, dynamic_address);
	set_at<288, 400>(result, denoiseb_rd18_res);
	hw_uint<16> denoiseb_rd19_res = denoiseb_rd19_select(raw, d0, d1, dynamic_address);
	set_at<304, 400>(result, denoiseb_rd19_res);
	hw_uint<16> denoiseb_rd20_res = denoiseb_rd20_select(raw, d0, d1, dynamic_address);
	set_at<320, 400>(result, denoiseb_rd20_res);
	hw_uint<16> denoiseb_rd21_res = denoiseb_rd21_select(raw, d0, d1, dynamic_address);
	set_at<336, 400>(result, denoiseb_rd21_res);
	hw_uint<16> denoiseb_rd22_res = denoiseb_rd22_select(raw, d0, d1, dynamic_address);
	set_at<352, 400>(result, denoiseb_rd22_res);
	hw_uint<16> denoiseb_rd23_res = denoiseb_rd23_select(raw, d0, d1, dynamic_address);
	set_at<368, 400>(result, denoiseb_rd23_res);
	hw_uint<16> denoiseb_rd24_res = denoiseb_rd24_select(raw, d0, d1, dynamic_address);
	set_at<384, 400>(result, denoiseb_rd24_res);
	return result;
}

// raw_update_0_write
//	raw_raw_update_0_write0
inline void raw_raw_update_0_write_bundle_write(hw_uint<16>& raw_update_0_write, raw_cache& raw, int d0, int d1, int dynamic_address) {
	hw_uint<16> raw_raw_update_0_write0_res = raw_update_0_write.extract<0, 15>();
	raw_raw_update_0_write0_write(raw_raw_update_0_write0_res, raw, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 308032 bits


// Operation logic
inline void raw_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */raw_oc, raw_cache& raw, int d0, int d1) {
  // Dynamic address computation

	// Consume: raw_oc
	auto raw_oc_1_m_raw_1__p__0_c__1_m_raw_0__p__0_value = raw_oc.read();
	auto compute_result = raw_generated_compute_unrolled_1(raw_oc_1_m_raw_1__p__0_c__1_m_raw_0__p__0_value);
	// Produce: raw
	raw_raw_update_0_write_bundle_write(/* arg names */compute_result, raw, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void denoiseb_update_0(raw_cache& raw, denoiseb_cache& denoiseb, int d0, int d1) {
  // Dynamic address computation

	// Consume: raw
	auto raw_1_m_denoiseb_1__p___m_2_c__1_m_denoiseb_0__p___m_2_value = raw_denoiseb_update_0_read_bundle_read(raw/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = denoiseb_generated_compute_unrolled_1(raw_1_m_denoiseb_1__p___m_2_c__1_m_denoiseb_0__p___m_2_value);
	// Produce: denoiseb
	denoiseb_denoiseb_update_0_write_bundle_write(/* arg names */compute_result, denoiseb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void denoise_update_0(denoiseb_cache& denoiseb, denoise_cache& denoise, int d0, int d1) {
  // Dynamic address computation

	// Consume: denoiseb
	auto denoiseb_1_m_denoise_1__p__0_c__1_m_denoise_0__p__0_value = denoiseb_denoise_update_0_read_bundle_read(denoiseb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = denoise_generated_compute_unrolled_1(denoiseb_1_m_denoise_1__p__0_c__1_m_denoise_0__p__0_value);
	// Produce: denoise
	denoise_denoise_update_0_write_bundle_write(/* arg names */compute_result, denoise, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaicb_update_0(denoise_cache& denoise, demosaicb_cache& demosaicb, int d0, int d1) {
  // Dynamic address computation

	// Consume: denoise
	auto denoise_1_m_demosaicb_1__p___m_1_c__1_m_demosaicb_0__p___m_1_value = denoise_demosaicb_update_0_read_bundle_read(denoise/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaicb_generated_compute_unrolled_1(denoise_1_m_demosaicb_1__p___m_1_c__1_m_demosaicb_0__p___m_1_value);
	// Produce: demosaicb
	demosaicb_demosaicb_update_0_write_bundle_write(/* arg names */compute_result, demosaicb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_update_0(demosaicb_cache& demosaicb, demosaic_cache& demosaic, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaicb
	auto demosaicb_1_m_demosaic_1__p__0_c__1_m_demosaic_0__p__0_value = demosaicb_demosaic_update_0_read_bundle_read(demosaicb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_generated_compute_unrolled_1(demosaicb_1_m_demosaic_1__p__0_c__1_m_demosaic_0__p__0_value);
	// Produce: demosaic
	demosaic_demosaic_update_0_write_bundle_write(/* arg names */compute_result, demosaic, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_bxb_update_0(demosaic_cache& demosaic, demosaic_bxb_cache& demosaic_bxb, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m_demosaic_bxb_1__p__0_c__1_m_demosaic_bxb_0__p__0_value = demosaic_demosaic_bxb_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_bxb_generated_compute_unrolled_1(demosaic_1_m_demosaic_bxb_1__p__0_c__1_m_demosaic_bxb_0__p__0_value);
	// Produce: demosaic_bxb
	demosaic_bxb_demosaic_bxb_update_0_write_bundle_write(/* arg names */compute_result, demosaic_bxb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_bx_update_0(demosaic_bxb_cache& demosaic_bxb, demosaic_bx_cache& demosaic_bx, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_bxb
	auto demosaic_bxb_1_m_demosaic_bx_1__p__0_c__1_m_demosaic_bx_0__p__0_value = demosaic_bxb_demosaic_bx_update_0_read_bundle_read(demosaic_bxb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_1_m_demosaic_bx_1__p__0_c__1_m_demosaic_bx_0__p__0_value);
	// Produce: demosaic_bx
	demosaic_bx_demosaic_bx_update_0_write_bundle_write(/* arg names */compute_result, demosaic_bx, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_byb_update_0(demosaic_bx_cache& demosaic_bx, demosaic_byb_cache& demosaic_byb, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_bx
	auto demosaic_bx_1_m_demosaic_byb_1__p__0_c__1_m_demosaic_byb_0__p__0_value = demosaic_bx_demosaic_byb_update_0_read_bundle_read(demosaic_bx/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_1_m_demosaic_byb_1__p__0_c__1_m_demosaic_byb_0__p__0_value);
	// Produce: demosaic_byb
	demosaic_byb_demosaic_byb_update_0_write_bundle_write(/* arg names */compute_result, demosaic_byb, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_by_update_0(demosaic_byb_cache& demosaic_byb, demosaic_by_cache& demosaic_by, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_byb
	auto demosaic_byb_1_m_demosaic_by_1__p__0_c__1_m_demosaic_by_0__p__0_value = demosaic_byb_demosaic_by_update_0_read_bundle_read(demosaic_byb/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_by_generated_compute_unrolled_1(demosaic_byb_1_m_demosaic_by_1__p__0_c__1_m_demosaic_by_0__p__0_value);
	// Produce: demosaic_by
	demosaic_by_demosaic_by_update_0_write_bundle_write(/* arg names */compute_result, demosaic_by, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void demosaic_diff_update_0(demosaic_cache& demosaic, demosaic_by_cache& demosaic_by, demosaic_diff_cache& demosaic_diff, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic
	auto demosaic_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value = demosaic_demosaic_diff_update_0_read_bundle_read(demosaic/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: demosaic_by
	auto demosaic_by_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value = demosaic_by_demosaic_diff_update_0_read_bundle_read(demosaic_by/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = demosaic_diff_generated_compute_unrolled_1(demosaic_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value, demosaic_by_1_m_demosaic_diff_1__p__0_c__1_m_demosaic_diff_0__p__0_value);
	// Produce: demosaic_diff
	demosaic_diff_demosaic_diff_update_0_write_bundle_write(/* arg names */compute_result, demosaic_diff, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void cp_noinit_ln1_catapult_case_1_update_0(demosaic_diff_cache& demosaic_diff, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */cp_noinit_ln1_catapult_case_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: demosaic_diff
	auto demosaic_diff_1_m_cp_noinit_ln1_catapult_case_1_1__p__0_c__1_m_cp_noinit_ln1_catapult_case_1_0__p__0_value = demosaic_diff_cp_noinit_ln1_catapult_case_1_update_0_read_bundle_read(demosaic_diff/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = cp_noinit_ln1_catapult_case_1_generated_compute_unrolled_1(demosaic_diff_1_m_cp_noinit_ln1_catapult_case_1_1__p__0_c__1_m_cp_noinit_ln1_catapult_case_1_0__p__0_value);
	// Produce: cp_noinit_ln1_catapult_case_1
	cp_noinit_ln1_catapult_case_1.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void cp_noinit_ln1_catapult_case_1_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_noinit_ln1_catapult_case_1) {

#ifndef __SYNTHESIS__
  ofstream debug_file("cp_noinit_ln1_catapult_case_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  demosaic_cache demosaic;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_bx_cache demosaic_bx;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_bxb_cache demosaic_bxb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_by_cache demosaic_by;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_byb_cache demosaic_byb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaic_diff_cache demosaic_diff;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  demosaicb_cache demosaicb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  denoise_cache denoise;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  denoiseb_cache denoiseb;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  raw_cache raw;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081; denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082; raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084; demosaic_bxb_update_0[d0, d1] -> [3 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081; demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081; demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081; demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 9] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; cp_noinit_ln1_catapult_case_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; demosaic_byb_update_0[d0, d1] -> [5 + d1, 5 + d0, 8] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 10] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079; denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
//   { demosaic_update_0[d0, d1] -> [3 + d1, 3 + d0, 5] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
// Condition for demosaic_update_0(((((-5 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { denoise_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
// Condition for denoise_update_0(((((-3 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { raw_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 1924 and -3 <= d1 <= 1084 }
// Condition for raw_update_0(((((-1 + 1*i2)) == 0) && (((3 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_bxb_update_0[d0, d1] -> [3 + d1, 5 + d0, 6] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
// Condition for demosaic_bxb_update_0(((((-6 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_bx_update_0[d0, d1] -> [3 + d1, 5 + d0, 7] : 0 <= d0 <= 1919 and 0 <= d1 <= 1081 }
// Condition for demosaic_bx_update_0(((((-7 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaicb_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : 0 <= d0 <= 1921 and 0 <= d1 <= 1081 }
// Condition for demosaicb_update_0(((((-4 + 1*i2)) == 0) && (((-3 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-3 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_by_update_0[d0, d1] -> [5 + d1, 5 + d0, 9] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for demosaic_by_update_0(((((-9 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { cp_noinit_ln1_catapult_case_1_update_0[d0, d1] -> [5 + d1, 5 + d0, 11] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for cp_noinit_ln1_catapult_case_1_update_0(((((-11 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_byb_update_0[d0, d1] -> [5 + d1, 5 + d0, 8] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for demosaic_byb_update_0(((((-8 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { demosaic_diff_update_0[d0, d1] -> [5 + d1, 5 + d0, 10] : 0 <= d0 <= 1919 and 0 <= d1 <= 1079 }
// Condition for demosaic_diff_update_0(((((-10 + 1*i2)) == 0) && (((-5 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-5 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))
//   { denoiseb_update_0[d0, d1] -> [2 + d1, 2 + d0, 2] : -1 <= d0 <= 1922 and -1 <= d1 <= 1082 }
// Condition for denoiseb_update_0(((((-2 + 1*i2)) == 0) && (((-1 + 1*i1)) >= 0) && (((1924 + -1*i1)) >= 0) && (((-1 + 1*i0)) >= 0) && (((1084 + -1*i0)) >= 0)))

	  // Schedules...
	    // cp_noinit_ln1_catapult_case_1_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*11]
	    // demosaic_bx_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*5,1*7]
	    // demosaic_bxb_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*5,1*6]
	    // demosaic_by_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*9]
	    // demosaic_byb_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*8]
	    // demosaic_diff_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*10]
	    // demosaic_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*5]
	    // demosaicb_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // denoise_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // denoiseb_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*2]
	    // raw_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // raw_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -3; c0 <= 1084; c0++) {
	  #pragma hls_pipeline_init_interval 1
	  for (int c1 = -3; c1 <= 1924; c1++) {
	
	    if ((-3 <= c1 && c1 <= 1924) && ((c1 - 0) % 1 == 0) && (-3 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	      raw_update_0(raw_oc /* buf name */, raw, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      denoiseb_update_0(raw /* buf name */, denoiseb, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 1924) && ((c1 - 2) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      denoise_update_0(denoiseb /* buf name */, denoise, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaicb_update_0(denoise /* buf name */, demosaicb, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 1924) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_update_0(demosaicb /* buf name */, demosaic, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_bxb_update_0(demosaic /* buf name */, demosaic_bxb, (c1 - 5) / 1, (c0 - 3) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      demosaic_bx_update_0(demosaic_bxb /* buf name */, demosaic_bx, (c1 - 5) / 1, (c0 - 3) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_byb_update_0(demosaic_bx /* buf name */, demosaic_byb, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_by_update_0(demosaic_byb /* buf name */, demosaic_by, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      demosaic_diff_update_0(demosaic /* buf name */, demosaic_by /* buf name */, demosaic_diff, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 1924) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      cp_noinit_ln1_catapult_case_1_update_0(demosaic_diff /* buf name */, cp_noinit_ln1_catapult_case_1, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void cp_noinit_ln1_catapult_case_1_opt_wrapper(HWStream<hw_uint<16> >& /* get_args num ports = 1 */raw_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */cp_noinit_ln1_catapult_case_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    cp_noinit_ln1_catapult_case_1_opt(raw_oc, cp_noinit_ln1_catapult_case_1);
  }
}
#ifdef __SYNTHESIS__
  // { cp_noinit_ln1_catapult_case_1_update_0[root = 0, cp_noinit_ln1_catapult_case_1_0, cp_noinit_ln1_catapult_case_1_1] -> cp_noinit_ln1_catapult_case_1[cp_noinit_ln1_catapult_case_1_1, cp_noinit_ln1_catapult_case_1_0] : 0 <= cp_noinit_ln1_catapult_case_1_0 <= 1079 and 0 <= cp_noinit_ln1_catapult_case_1_1 <= 1919 }
const int cp_noinit_ln1_catapult_case_1_update_0_write_pipe0_num_transfers = 2073600;
  // { raw_update_0[root = 0, raw_0, raw_1] -> raw_oc[raw_1, raw_0] : -3 <= raw_0 <= 1084 and -3 <= raw_1 <= 1924 }
const int raw_update_0_read_pipe0_num_transfers = 2097664;


extern "C" {

void cp_noinit_ln1_catapult_case_1_opt_accel(hw_uint<16>* raw_update_0_read_pipe0, hw_uint<16>* cp_noinit_ln1_catapult_case_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = raw_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = cp_noinit_ln1_catapult_case_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = raw_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = cp_noinit_ln1_catapult_case_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > raw_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > cp_noinit_ln1_catapult_case_1_update_0_write_pipe0_channel;

  burst_read<16>(raw_update_0_read_pipe0, raw_update_0_read_pipe0_channel, raw_update_0_read_pipe0_num_transfers*30);

  cp_noinit_ln1_catapult_case_1_opt_wrapper(raw_update_0_read_pipe0_channel, cp_noinit_ln1_catapult_case_1_update_0_write_pipe0_channel, size);

  burst_write<16>(cp_noinit_ln1_catapult_case_1_update_0_write_pipe0, cp_noinit_ln1_catapult_case_1_update_0_write_pipe0_channel, cp_noinit_ln1_catapult_case_1_update_0_write_pipe0_num_transfers*30);
}

}
extern "C" {

void cp_noinit_ln1_catapult_case_1_opt_rdai(HWStream<hw_uint<16> >& raw_update_0_read_pipe0, HWStream<hw_uint<16> >&  cp_noinit_ln1_catapult_case_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = raw_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = cp_noinit_ln1_catapult_case_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  cp_noinit_ln1_catapult_case_1_opt(raw_update_0_read_pipe0, cp_noinit_ln1_catapult_case_1_update_0_write_pipe0);

}

}
#endif //__SYNTHESIS__

