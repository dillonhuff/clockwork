#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jac9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "jac9_1_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct in_in_update_0_sm131_0267_141_to_in_load_to_in_to_gp_203_sm135_0203_136_cache {
	// RAM Box: {[0, 1949], [0, 1094]}
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

struct in_cache {
  // Reader addrs...
    // { load_to_in_to_gp_203_sm135_0203[root = 0, in_ld2, in_ld1] -> in[in_ld1, in_ld2] : 0 <= in_ld2 <= 1094 and 0 <= in_ld1 <= 1949 }
  // # of banks: 1
  in_in_update_0_sm131_0267_141_to_in_load_to_in_to_gp_203_sm135_0203_136_cache in_in_update_0_sm131_0267_141_to_in_load_to_in_to_gp_203_sm135_0203_136;
};



inline void in_in_update_0_sm131_0267_141_write(hw_uint<16>& in_in_update_0_sm131_0267_141, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_update_0_sm131_0267_141_to_in_load_to_in_to_gp_203_sm135_0203_136.push(in_in_update_0_sm131_0267_141);
}

inline hw_uint<16> in_load_to_in_to_gp_203_sm135_0203_136_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_load_to_in_to_gp_203_sm135_0203_136 read pattern: { load_to_in_to_gp_203_sm135_0203[root = 0, in_ld2, in_ld1] -> in[in_ld1, in_ld2] : 0 <= in_ld2 <= 1094 and 0 <= in_ld1 <= 1949 }
  // Read schedule : { load_to_in_to_gp_203_sm135_0203[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  // Write schedule: { in_update_0_sm131_0267[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_in_update_0_sm131_0267_141 = in.in_in_update_0_sm131_0267_141_to_in_load_to_in_to_gp_203_sm135_0203_136.peek(/* one reader or all rams */ 0);
  return value_in_in_update_0_sm131_0267_141;
  return 0;
}

// # of bundles = 2
// in_update_0_sm131_0267_write
//	in_in_update_0_sm131_0267_141
inline void in_in_update_0_sm131_0267_write_bundle_write(hw_uint<16>& in_update_0_sm131_0267_write, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
	hw_uint<16> in_in_update_0_sm131_0267_141_res = in_update_0_sm131_0267_write.extract<0, 15>();
	in_in_update_0_sm131_0267_141_write(in_in_update_0_sm131_0267_141_res, in, root, in_0, in_1, dynamic_address);
}

// load_to_in_to_gp_203_sm135_0203_read
//	in_load_to_in_to_gp_203_sm135_0203_136
inline hw_uint<16> in_load_to_in_to_gp_203_sm135_0203_read_bundle_read(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_load_to_in_to_gp_203_sm135_0203_136

	hw_uint<16> result;
	hw_uint<16> in_load_to_in_to_gp_203_sm135_0203_136_res = in_load_to_in_to_gp_203_sm135_0203_136_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<0, 16>(result, in_load_to_in_to_gp_203_sm135_0203_136_res);
	return result;
}

struct in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4_cache {
	// RAM Box: {[0, 1949], [0, 1093]}
	// Capacity: 1953
	// # of read delays: 5
  // 0, 1, 1950, 1951, 1952
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1948> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1949() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1950() {
		return f4;
	}

	inline hw_uint<16> peek_1951() {
		return f6;
	}

	inline hw_uint<16> peek_1952() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1948
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1948 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf4_cache {
  // Reader addrs...
    // { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
    // { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[1 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
    // { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[1 + stg0_1, 1 + stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
    // { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[2 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // # of banks: 1
  in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4_cache in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4;
};



inline void in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_write(hw_uint<16>& in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137, in_FIFO_buf4_cache& in_FIFO_buf4, int root, int in_to_gp_20_ld6, int in_to_gp_20_ld5, int dynamic_address) {
  in_FIFO_buf4.in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4.push(in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137);
}

inline hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_71_select(in_FIFO_buf4_cache& in_FIFO_buf4, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf4_stg0_update_0_sm134_0263_71 read pattern: { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { load_to_in_FIFO_buf47_sm163_0239[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137 = in_FIFO_buf4.in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4.peek_1952();
  return value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_72_select(in_FIFO_buf4_cache& in_FIFO_buf4, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf4_stg0_update_0_sm134_0263_72 read pattern: { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[1 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { load_to_in_FIFO_buf47_sm163_0239[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137 = in_FIFO_buf4.in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4.peek_1951();
  return value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_73_select(in_FIFO_buf4_cache& in_FIFO_buf4, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf4_stg0_update_0_sm134_0263_73 read pattern: { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[1 + stg0_1, 1 + stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { load_to_in_FIFO_buf47_sm163_0239[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137 = in_FIFO_buf4.in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4.peek_1();
  return value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_74_select(in_FIFO_buf4_cache& in_FIFO_buf4, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf4_stg0_update_0_sm134_0263_74 read pattern: { stg0_update_0_sm134_0263[root = 0, stg0_0, stg0_1] -> in_FIFO_buf4[2 + stg0_1, stg0_0] : 0 <= stg0_0 <= 1093 and 0 <= stg0_1 <= 1947 }
  // Read schedule : { stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { load_to_in_FIFO_buf47_sm163_0239[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
  auto value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137 = in_FIFO_buf4.in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_merged_banks_4.peek_1950();
  return value_in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137;
  return 0;
}

// # of bundles = 2
// load_to_in_FIFO_buf47_sm163_0239_write
//	in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137
inline void in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_write_bundle_write(hw_uint<16>& load_to_in_FIFO_buf47_sm163_0239_write, in_FIFO_buf4_cache& in_FIFO_buf4, int root, int in_to_gp_20_ld6, int in_to_gp_20_ld5, int dynamic_address) {
	hw_uint<16> in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_res = load_to_in_FIFO_buf47_sm163_0239_write.extract<0, 15>();
	in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_write(in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_137_res, in_FIFO_buf4, root, in_to_gp_20_ld6, in_to_gp_20_ld5, dynamic_address);
}

// stg0_update_0_sm134_0263_read
//	in_FIFO_buf4_stg0_update_0_sm134_0263_71
//	in_FIFO_buf4_stg0_update_0_sm134_0263_72
//	in_FIFO_buf4_stg0_update_0_sm134_0263_73
//	in_FIFO_buf4_stg0_update_0_sm134_0263_74
inline hw_uint<64> in_FIFO_buf4_stg0_update_0_sm134_0263_read_bundle_read(in_FIFO_buf4_cache& in_FIFO_buf4, int root, int stg0_0, int stg0_1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_FIFO_buf4_stg0_update_0_sm134_0263_71
    // in_FIFO_buf4_stg0_update_0_sm134_0263_72
    // in_FIFO_buf4_stg0_update_0_sm134_0263_73
    // in_FIFO_buf4_stg0_update_0_sm134_0263_74

	hw_uint<64> result;
	hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_71_res = in_FIFO_buf4_stg0_update_0_sm134_0263_71_select(in_FIFO_buf4, root, stg0_0, stg0_1, dynamic_address);
	set_at<0, 64>(result, in_FIFO_buf4_stg0_update_0_sm134_0263_71_res);
	hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_72_res = in_FIFO_buf4_stg0_update_0_sm134_0263_72_select(in_FIFO_buf4, root, stg0_0, stg0_1, dynamic_address);
	set_at<16, 64>(result, in_FIFO_buf4_stg0_update_0_sm134_0263_72_res);
	hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_73_res = in_FIFO_buf4_stg0_update_0_sm134_0263_73_select(in_FIFO_buf4, root, stg0_0, stg0_1, dynamic_address);
	set_at<32, 64>(result, in_FIFO_buf4_stg0_update_0_sm134_0263_73_res);
	hw_uint<16> in_FIFO_buf4_stg0_update_0_sm134_0263_74_res = in_FIFO_buf4_stg0_update_0_sm134_0263_74_select(in_FIFO_buf4, root, stg0_0, stg0_1, dynamic_address);
	set_at<48, 64>(result, in_FIFO_buf4_stg0_update_0_sm134_0263_74_res);
	return result;
}

struct stg0_stg0_update_0_sm134_0263_70_to_stg0_load_to_stg0_to_gp_8811_sm164_0241_132_cache {
	// RAM Box: {[0, 1947], [0, 1093]}
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

struct stg0_cache {
  // Reader addrs...
    // { load_to_stg0_to_gp_8811_sm164_0241[root = 0, stg0_ld10, stg0_ld9] -> stg0[stg0_ld9, stg0_ld10] : 0 <= stg0_ld10 <= 1093 and 0 <= stg0_ld9 <= 1947 }
  // # of banks: 1
  stg0_stg0_update_0_sm134_0263_70_to_stg0_load_to_stg0_to_gp_8811_sm164_0241_132_cache stg0_stg0_update_0_sm134_0263_70_to_stg0_load_to_stg0_to_gp_8811_sm164_0241_132;
};



inline void stg0_stg0_update_0_sm134_0263_70_write(hw_uint<16>& stg0_stg0_update_0_sm134_0263_70, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_update_0_sm134_0263_70_to_stg0_load_to_stg0_to_gp_8811_sm164_0241_132.push(stg0_stg0_update_0_sm134_0263_70);
}

inline hw_uint<16> stg0_load_to_stg0_to_gp_8811_sm164_0241_132_select(stg0_cache& stg0, int root, int stg0_ld10, int stg0_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_load_to_stg0_to_gp_8811_sm164_0241_132 read pattern: { load_to_stg0_to_gp_8811_sm164_0241[root = 0, stg0_ld10, stg0_ld9] -> stg0[stg0_ld9, stg0_ld10] : 0 <= stg0_ld10 <= 1093 and 0 <= stg0_ld9 <= 1947 }
  // Read schedule : { load_to_stg0_to_gp_8811_sm164_0241[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 4] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  // Write schedule: { stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_stg0_update_0_sm134_0263_70 = stg0.stg0_stg0_update_0_sm134_0263_70_to_stg0_load_to_stg0_to_gp_8811_sm164_0241_132.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_update_0_sm134_0263_70;
  return 0;
}

// # of bundles = 2
// load_to_stg0_to_gp_8811_sm164_0241_read
//	stg0_load_to_stg0_to_gp_8811_sm164_0241_132
inline hw_uint<16> stg0_load_to_stg0_to_gp_8811_sm164_0241_read_bundle_read(stg0_cache& stg0, int root, int stg0_ld10, int stg0_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // stg0_load_to_stg0_to_gp_8811_sm164_0241_132

	hw_uint<16> result;
	hw_uint<16> stg0_load_to_stg0_to_gp_8811_sm164_0241_132_res = stg0_load_to_stg0_to_gp_8811_sm164_0241_132_select(stg0, root, stg0_ld10, stg0_ld9, dynamic_address);
	set_at<0, 16>(result, stg0_load_to_stg0_to_gp_8811_sm164_0241_132_res);
	return result;
}

// stg0_update_0_sm134_0263_write
//	stg0_stg0_update_0_sm134_0263_70
inline void stg0_stg0_update_0_sm134_0263_write_bundle_write(hw_uint<16>& stg0_update_0_sm134_0263_write, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_sm134_0263_70_res = stg0_update_0_sm134_0263_write.extract<0, 15>();
	stg0_stg0_update_0_sm134_0263_70_write(stg0_stg0_update_0_sm134_0263_70_res, stg0, root, stg0_0, stg0_1, dynamic_address);
}

struct stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4_cache {
	// RAM Box: {[0, 1947], [0, 1092]}
	// Capacity: 1951
	// # of read delays: 5
  // 0, 1, 1948, 1949, 1950
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1946> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1947() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1948() {
		return f4;
	}

	inline hw_uint<16> peek_1949() {
		return f6;
	}

	inline hw_uint<16> peek_1950() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1946
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1946 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf12_cache {
  // Reader addrs...
    // { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
    // { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[1 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
    // { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[1 + stg1_1, 1 + stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
    // { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[2 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // # of banks: 1
  stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4_cache stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4;
};



inline void stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_write(hw_uint<16>& stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133, stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg0_to_gp_88_ld14, int stg0_to_gp_88_ld13, int dynamic_address) {
  stg0_FIFO_buf12.stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4.push(stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133);
}

inline hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_41_select(stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf12_stg1_update_0_sm129_0271_41 read pattern: { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { load_to_stg0_FIFO_buf1215_sm173_0259[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 5] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133 = stg0_FIFO_buf12.stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4.peek_1950();
  return value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_42_select(stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf12_stg1_update_0_sm129_0271_42 read pattern: { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[1 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { load_to_stg0_FIFO_buf1215_sm173_0259[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 5] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133 = stg0_FIFO_buf12.stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4.peek_1949();
  return value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_43_select(stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf12_stg1_update_0_sm129_0271_43 read pattern: { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[1 + stg1_1, 1 + stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { load_to_stg0_FIFO_buf1215_sm173_0259[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 5] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133 = stg0_FIFO_buf12.stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_44_select(stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf12_stg1_update_0_sm129_0271_44 read pattern: { stg1_update_0_sm129_0271[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf12[2 + stg1_1, stg1_0] : 0 <= stg1_0 <= 1092 and 0 <= stg1_1 <= 1945 }
  // Read schedule : { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { load_to_stg0_FIFO_buf1215_sm173_0259[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 5] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
  auto value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133 = stg0_FIFO_buf12.stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_merged_banks_4.peek_1948();
  return value_stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133;
  return 0;
}

// # of bundles = 2
// load_to_stg0_FIFO_buf1215_sm173_0259_write
//	stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133
inline void stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_write_bundle_write(hw_uint<16>& load_to_stg0_FIFO_buf1215_sm173_0259_write, stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg0_to_gp_88_ld14, int stg0_to_gp_88_ld13, int dynamic_address) {
	hw_uint<16> stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_res = load_to_stg0_FIFO_buf1215_sm173_0259_write.extract<0, 15>();
	stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_write(stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_133_res, stg0_FIFO_buf12, root, stg0_to_gp_88_ld14, stg0_to_gp_88_ld13, dynamic_address);
}

// stg1_update_0_sm129_0271_read
//	stg0_FIFO_buf12_stg1_update_0_sm129_0271_41
//	stg0_FIFO_buf12_stg1_update_0_sm129_0271_42
//	stg0_FIFO_buf12_stg1_update_0_sm129_0271_43
//	stg0_FIFO_buf12_stg1_update_0_sm129_0271_44
inline hw_uint<64> stg0_FIFO_buf12_stg1_update_0_sm129_0271_read_bundle_read(stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int root, int stg1_0, int stg1_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg0_FIFO_buf12_stg1_update_0_sm129_0271_41
    // stg0_FIFO_buf12_stg1_update_0_sm129_0271_42
    // stg0_FIFO_buf12_stg1_update_0_sm129_0271_43
    // stg0_FIFO_buf12_stg1_update_0_sm129_0271_44

	hw_uint<64> result;
	hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_41_res = stg0_FIFO_buf12_stg1_update_0_sm129_0271_41_select(stg0_FIFO_buf12, root, stg1_0, stg1_1, dynamic_address);
	set_at<0, 64>(result, stg0_FIFO_buf12_stg1_update_0_sm129_0271_41_res);
	hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_42_res = stg0_FIFO_buf12_stg1_update_0_sm129_0271_42_select(stg0_FIFO_buf12, root, stg1_0, stg1_1, dynamic_address);
	set_at<16, 64>(result, stg0_FIFO_buf12_stg1_update_0_sm129_0271_42_res);
	hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_43_res = stg0_FIFO_buf12_stg1_update_0_sm129_0271_43_select(stg0_FIFO_buf12, root, stg1_0, stg1_1, dynamic_address);
	set_at<32, 64>(result, stg0_FIFO_buf12_stg1_update_0_sm129_0271_43_res);
	hw_uint<16> stg0_FIFO_buf12_stg1_update_0_sm129_0271_44_res = stg0_FIFO_buf12_stg1_update_0_sm129_0271_44_select(stg0_FIFO_buf12, root, stg1_0, stg1_1, dynamic_address);
	set_at<48, 64>(result, stg0_FIFO_buf12_stg1_update_0_sm129_0271_44_res);
	return result;
}

struct stg1_stg1_update_0_sm129_0271_40_to_stg1_load_to_stg1_to_gp_91619_sm156_0225_108_cache {
	// RAM Box: {[0, 1945], [0, 1092]}
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

struct stg1_cache {
  // Reader addrs...
    // { load_to_stg1_to_gp_91619_sm156_0225[root = 0, stg1_ld18, stg1_ld17] -> stg1[stg1_ld17, stg1_ld18] : 0 <= stg1_ld18 <= 1092 and 0 <= stg1_ld17 <= 1945 }
  // # of banks: 1
  stg1_stg1_update_0_sm129_0271_40_to_stg1_load_to_stg1_to_gp_91619_sm156_0225_108_cache stg1_stg1_update_0_sm129_0271_40_to_stg1_load_to_stg1_to_gp_91619_sm156_0225_108;
};



inline void stg1_stg1_update_0_sm129_0271_40_write(hw_uint<16>& stg1_stg1_update_0_sm129_0271_40, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_update_0_sm129_0271_40_to_stg1_load_to_stg1_to_gp_91619_sm156_0225_108.push(stg1_stg1_update_0_sm129_0271_40);
}

inline hw_uint<16> stg1_load_to_stg1_to_gp_91619_sm156_0225_108_select(stg1_cache& stg1, int root, int stg1_ld18, int stg1_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_load_to_stg1_to_gp_91619_sm156_0225_108 read pattern: { load_to_stg1_to_gp_91619_sm156_0225[root = 0, stg1_ld18, stg1_ld17] -> stg1[stg1_ld17, stg1_ld18] : 0 <= stg1_ld18 <= 1092 and 0 <= stg1_ld17 <= 1945 }
  // Read schedule : { load_to_stg1_to_gp_91619_sm156_0225[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 7] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  // Write schedule: { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_stg1_update_0_sm129_0271_40 = stg1.stg1_stg1_update_0_sm129_0271_40_to_stg1_load_to_stg1_to_gp_91619_sm156_0225_108.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_update_0_sm129_0271_40;
  return 0;
}

// # of bundles = 2
// load_to_stg1_to_gp_91619_sm156_0225_read
//	stg1_load_to_stg1_to_gp_91619_sm156_0225_108
inline hw_uint<16> stg1_load_to_stg1_to_gp_91619_sm156_0225_read_bundle_read(stg1_cache& stg1, int root, int stg1_ld18, int stg1_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // stg1_load_to_stg1_to_gp_91619_sm156_0225_108

	hw_uint<16> result;
	hw_uint<16> stg1_load_to_stg1_to_gp_91619_sm156_0225_108_res = stg1_load_to_stg1_to_gp_91619_sm156_0225_108_select(stg1, root, stg1_ld18, stg1_ld17, dynamic_address);
	set_at<0, 16>(result, stg1_load_to_stg1_to_gp_91619_sm156_0225_108_res);
	return result;
}

// stg1_update_0_sm129_0271_write
//	stg1_stg1_update_0_sm129_0271_40
inline void stg1_stg1_update_0_sm129_0271_write_bundle_write(hw_uint<16>& stg1_update_0_sm129_0271_write, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
	hw_uint<16> stg1_stg1_update_0_sm129_0271_40_res = stg1_update_0_sm129_0271_write.extract<0, 15>();
	stg1_stg1_update_0_sm129_0271_40_write(stg1_stg1_update_0_sm129_0271_40_res, stg1, root, stg1_0, stg1_1, dynamic_address);
}

struct stg10_stg10_update_0_sm142_0187_65_to_stg10_load_to_stg10_to_gp_42427_sm137_0195_128_cache {
	// RAM Box: {[0, 1927], [0, 1083]}
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

struct stg10_cache {
  // Reader addrs...
    // { load_to_stg10_to_gp_42427_sm137_0195[root = 0, stg10_ld26, stg10_ld25] -> stg10[stg10_ld25, stg10_ld26] : 0 <= stg10_ld26 <= 1083 and 0 <= stg10_ld25 <= 1927 }
  // # of banks: 1
  stg10_stg10_update_0_sm142_0187_65_to_stg10_load_to_stg10_to_gp_42427_sm137_0195_128_cache stg10_stg10_update_0_sm142_0187_65_to_stg10_load_to_stg10_to_gp_42427_sm137_0195_128;
};



inline void stg10_stg10_update_0_sm142_0187_65_write(hw_uint<16>& stg10_stg10_update_0_sm142_0187_65, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_update_0_sm142_0187_65_to_stg10_load_to_stg10_to_gp_42427_sm137_0195_128.push(stg10_stg10_update_0_sm142_0187_65);
}

inline hw_uint<16> stg10_load_to_stg10_to_gp_42427_sm137_0195_128_select(stg10_cache& stg10, int root, int stg10_ld26, int stg10_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_load_to_stg10_to_gp_42427_sm137_0195_128 read pattern: { load_to_stg10_to_gp_42427_sm137_0195[root = 0, stg10_ld26, stg10_ld25] -> stg10[stg10_ld25, stg10_ld26] : 0 <= stg10_ld26 <= 1083 and 0 <= stg10_ld25 <= 1927 }
  // Read schedule : { load_to_stg10_to_gp_42427_sm137_0195[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 34] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_stg10_update_0_sm142_0187_65 = stg10.stg10_stg10_update_0_sm142_0187_65_to_stg10_load_to_stg10_to_gp_42427_sm137_0195_128.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_update_0_sm142_0187_65;
  return 0;
}

// # of bundles = 2
// load_to_stg10_to_gp_42427_sm137_0195_read
//	stg10_load_to_stg10_to_gp_42427_sm137_0195_128
inline hw_uint<16> stg10_load_to_stg10_to_gp_42427_sm137_0195_read_bundle_read(stg10_cache& stg10, int root, int stg10_ld26, int stg10_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // stg10_load_to_stg10_to_gp_42427_sm137_0195_128

	hw_uint<16> result;
	hw_uint<16> stg10_load_to_stg10_to_gp_42427_sm137_0195_128_res = stg10_load_to_stg10_to_gp_42427_sm137_0195_128_select(stg10, root, stg10_ld26, stg10_ld25, dynamic_address);
	set_at<0, 16>(result, stg10_load_to_stg10_to_gp_42427_sm137_0195_128_res);
	return result;
}

// stg10_update_0_sm142_0187_write
//	stg10_stg10_update_0_sm142_0187_65
inline void stg10_stg10_update_0_sm142_0187_write_bundle_write(hw_uint<16>& stg10_update_0_sm142_0187_write, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
	hw_uint<16> stg10_stg10_update_0_sm142_0187_65_res = stg10_update_0_sm142_0187_write.extract<0, 15>();
	stg10_stg10_update_0_sm142_0187_65_write(stg10_stg10_update_0_sm142_0187_65_res, stg10, root, stg10_0, stg10_1, dynamic_address);
}

struct stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4_cache {
	// RAM Box: {[0, 1927], [0, 1082]}
	// Capacity: 1931
	// # of read delays: 5
  // 0, 1, 1928, 1929, 1930
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1926> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1928() {
		return f4;
	}

	inline hw_uint<16> peek_1929() {
		return f6;
	}

	inline hw_uint<16> peek_1930() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1926
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1926 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf28_cache {
  // Reader addrs...
    // { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
    // { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[1 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
    // { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[1 + stg11_1, 1 + stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
    // { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[2 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // # of banks: 1
  stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4_cache stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4;
};



inline void stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_write(hw_uint<16>& stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129, stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg10_to_gp_424_ld30, int stg10_to_gp_424_ld29, int dynamic_address) {
  stg10_FIFO_buf28.stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4.push(stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129);
}

inline hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_61_select(stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf28_stg11_update_0_sm143_0189_61 read pattern: { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { load_to_stg10_FIFO_buf2831_sm152_0217[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 35] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129 = stg10_FIFO_buf28.stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4.peek_1930();
  return value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_62_select(stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf28_stg11_update_0_sm143_0189_62 read pattern: { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[1 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { load_to_stg10_FIFO_buf2831_sm152_0217[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 35] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129 = stg10_FIFO_buf28.stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4.peek_1929();
  return value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_63_select(stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf28_stg11_update_0_sm143_0189_63 read pattern: { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[1 + stg11_1, 1 + stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { load_to_stg10_FIFO_buf2831_sm152_0217[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 35] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129 = stg10_FIFO_buf28.stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_64_select(stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf28_stg11_update_0_sm143_0189_64 read pattern: { stg11_update_0_sm143_0189[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf28[2 + stg11_1, stg11_0] : 0 <= stg11_0 <= 1082 and 0 <= stg11_1 <= 1925 }
  // Read schedule : { stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { load_to_stg10_FIFO_buf2831_sm152_0217[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 35] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  auto value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129 = stg10_FIFO_buf28.stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_merged_banks_4.peek_1928();
  return value_stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129;
  return 0;
}

// # of bundles = 2
// load_to_stg10_FIFO_buf2831_sm152_0217_write
//	stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129
inline void stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_write_bundle_write(hw_uint<16>& load_to_stg10_FIFO_buf2831_sm152_0217_write, stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg10_to_gp_424_ld30, int stg10_to_gp_424_ld29, int dynamic_address) {
	hw_uint<16> stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_res = load_to_stg10_FIFO_buf2831_sm152_0217_write.extract<0, 15>();
	stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_write(stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_129_res, stg10_FIFO_buf28, root, stg10_to_gp_424_ld30, stg10_to_gp_424_ld29, dynamic_address);
}

// stg11_update_0_sm143_0189_read
//	stg10_FIFO_buf28_stg11_update_0_sm143_0189_61
//	stg10_FIFO_buf28_stg11_update_0_sm143_0189_62
//	stg10_FIFO_buf28_stg11_update_0_sm143_0189_63
//	stg10_FIFO_buf28_stg11_update_0_sm143_0189_64
inline hw_uint<64> stg10_FIFO_buf28_stg11_update_0_sm143_0189_read_bundle_read(stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int root, int stg11_0, int stg11_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg10_FIFO_buf28_stg11_update_0_sm143_0189_61
    // stg10_FIFO_buf28_stg11_update_0_sm143_0189_62
    // stg10_FIFO_buf28_stg11_update_0_sm143_0189_63
    // stg10_FIFO_buf28_stg11_update_0_sm143_0189_64

	hw_uint<64> result;
	hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_61_res = stg10_FIFO_buf28_stg11_update_0_sm143_0189_61_select(stg10_FIFO_buf28, root, stg11_0, stg11_1, dynamic_address);
	set_at<0, 64>(result, stg10_FIFO_buf28_stg11_update_0_sm143_0189_61_res);
	hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_62_res = stg10_FIFO_buf28_stg11_update_0_sm143_0189_62_select(stg10_FIFO_buf28, root, stg11_0, stg11_1, dynamic_address);
	set_at<16, 64>(result, stg10_FIFO_buf28_stg11_update_0_sm143_0189_62_res);
	hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_63_res = stg10_FIFO_buf28_stg11_update_0_sm143_0189_63_select(stg10_FIFO_buf28, root, stg11_0, stg11_1, dynamic_address);
	set_at<32, 64>(result, stg10_FIFO_buf28_stg11_update_0_sm143_0189_63_res);
	hw_uint<16> stg10_FIFO_buf28_stg11_update_0_sm143_0189_64_res = stg10_FIFO_buf28_stg11_update_0_sm143_0189_64_select(stg10_FIFO_buf28, root, stg11_0, stg11_1, dynamic_address);
	set_at<48, 64>(result, stg10_FIFO_buf28_stg11_update_0_sm143_0189_64_res);
	return result;
}

struct stg11_stg11_update_0_sm143_0189_60_to_stg11_load_to_stg11_to_gp_53235_sm148_0209_124_cache {
	// RAM Box: {[0, 1925], [0, 1082]}
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

struct stg11_cache {
  // Reader addrs...
    // { load_to_stg11_to_gp_53235_sm148_0209[root = 0, stg11_ld34, stg11_ld33] -> stg11[stg11_ld33, stg11_ld34] : 0 <= stg11_ld34 <= 1082 and 0 <= stg11_ld33 <= 1925 }
  // # of banks: 1
  stg11_stg11_update_0_sm143_0189_60_to_stg11_load_to_stg11_to_gp_53235_sm148_0209_124_cache stg11_stg11_update_0_sm143_0189_60_to_stg11_load_to_stg11_to_gp_53235_sm148_0209_124;
};



inline void stg11_stg11_update_0_sm143_0189_60_write(hw_uint<16>& stg11_stg11_update_0_sm143_0189_60, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_update_0_sm143_0189_60_to_stg11_load_to_stg11_to_gp_53235_sm148_0209_124.push(stg11_stg11_update_0_sm143_0189_60);
}

inline hw_uint<16> stg11_load_to_stg11_to_gp_53235_sm148_0209_124_select(stg11_cache& stg11, int root, int stg11_ld34, int stg11_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_load_to_stg11_to_gp_53235_sm148_0209_124 read pattern: { load_to_stg11_to_gp_53235_sm148_0209[root = 0, stg11_ld34, stg11_ld33] -> stg11[stg11_ld33, stg11_ld34] : 0 <= stg11_ld34 <= 1082 and 0 <= stg11_ld33 <= 1925 }
  // Read schedule : { load_to_stg11_to_gp_53235_sm148_0209[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 37] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  // Write schedule: { stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_stg11_update_0_sm143_0189_60 = stg11.stg11_stg11_update_0_sm143_0189_60_to_stg11_load_to_stg11_to_gp_53235_sm148_0209_124.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_update_0_sm143_0189_60;
  return 0;
}

// # of bundles = 2
// load_to_stg11_to_gp_53235_sm148_0209_read
//	stg11_load_to_stg11_to_gp_53235_sm148_0209_124
inline hw_uint<16> stg11_load_to_stg11_to_gp_53235_sm148_0209_read_bundle_read(stg11_cache& stg11, int root, int stg11_ld34, int stg11_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // stg11_load_to_stg11_to_gp_53235_sm148_0209_124

	hw_uint<16> result;
	hw_uint<16> stg11_load_to_stg11_to_gp_53235_sm148_0209_124_res = stg11_load_to_stg11_to_gp_53235_sm148_0209_124_select(stg11, root, stg11_ld34, stg11_ld33, dynamic_address);
	set_at<0, 16>(result, stg11_load_to_stg11_to_gp_53235_sm148_0209_124_res);
	return result;
}

// stg11_update_0_sm143_0189_write
//	stg11_stg11_update_0_sm143_0189_60
inline void stg11_stg11_update_0_sm143_0189_write_bundle_write(hw_uint<16>& stg11_update_0_sm143_0189_write, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
	hw_uint<16> stg11_stg11_update_0_sm143_0189_60_res = stg11_update_0_sm143_0189_write.extract<0, 15>();
	stg11_stg11_update_0_sm143_0189_60_write(stg11_stg11_update_0_sm143_0189_60_res, stg11, root, stg11_0, stg11_1, dynamic_address);
}

struct stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4_cache {
	// RAM Box: {[0, 1925], [0, 1081]}
	// Capacity: 1929
	// # of read delays: 5
  // 0, 1, 1926, 1927, 1928
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1924> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1926() {
		return f4;
	}

	inline hw_uint<16> peek_1927() {
		return f6;
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1924
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1924 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf36_cache {
  // Reader addrs...
    // { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
    // { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[1 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
    // { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[1 + stg12_1, 1 + stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
    // { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[2 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // # of banks: 1
  stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4_cache stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4;
};



inline void stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_write(hw_uint<16>& stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125, stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg11_to_gp_532_ld38, int stg11_to_gp_532_ld37, int dynamic_address) {
  stg11_FIFO_buf36.stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4.push(stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125);
}

inline hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_56_select(stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf36_stg12_update_0_sm144_0191_56 read pattern: { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_stg11_FIFO_buf3639_sm149_0211[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 38] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125 = stg11_FIFO_buf36.stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4.peek_1928();
  return value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_57_select(stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf36_stg12_update_0_sm144_0191_57 read pattern: { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[1 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_stg11_FIFO_buf3639_sm149_0211[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 38] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125 = stg11_FIFO_buf36.stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4.peek_1927();
  return value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_58_select(stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf36_stg12_update_0_sm144_0191_58 read pattern: { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[1 + stg12_1, 1 + stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_stg11_FIFO_buf3639_sm149_0211[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 38] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125 = stg11_FIFO_buf36.stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_59_select(stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf36_stg12_update_0_sm144_0191_59 read pattern: { stg12_update_0_sm144_0191[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf36[2 + stg12_1, stg12_0] : 0 <= stg12_0 <= 1081 and 0 <= stg12_1 <= 1923 }
  // Read schedule : { stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { load_to_stg11_FIFO_buf3639_sm149_0211[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 38] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
  auto value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125 = stg11_FIFO_buf36.stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_merged_banks_4.peek_1926();
  return value_stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125;
  return 0;
}

// # of bundles = 2
// load_to_stg11_FIFO_buf3639_sm149_0211_write
//	stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125
inline void stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_write_bundle_write(hw_uint<16>& load_to_stg11_FIFO_buf3639_sm149_0211_write, stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg11_to_gp_532_ld38, int stg11_to_gp_532_ld37, int dynamic_address) {
	hw_uint<16> stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_res = load_to_stg11_FIFO_buf3639_sm149_0211_write.extract<0, 15>();
	stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_write(stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_125_res, stg11_FIFO_buf36, root, stg11_to_gp_532_ld38, stg11_to_gp_532_ld37, dynamic_address);
}

// stg12_update_0_sm144_0191_read
//	stg11_FIFO_buf36_stg12_update_0_sm144_0191_56
//	stg11_FIFO_buf36_stg12_update_0_sm144_0191_57
//	stg11_FIFO_buf36_stg12_update_0_sm144_0191_58
//	stg11_FIFO_buf36_stg12_update_0_sm144_0191_59
inline hw_uint<64> stg11_FIFO_buf36_stg12_update_0_sm144_0191_read_bundle_read(stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int root, int stg12_0, int stg12_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg11_FIFO_buf36_stg12_update_0_sm144_0191_56
    // stg11_FIFO_buf36_stg12_update_0_sm144_0191_57
    // stg11_FIFO_buf36_stg12_update_0_sm144_0191_58
    // stg11_FIFO_buf36_stg12_update_0_sm144_0191_59

	hw_uint<64> result;
	hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_56_res = stg11_FIFO_buf36_stg12_update_0_sm144_0191_56_select(stg11_FIFO_buf36, root, stg12_0, stg12_1, dynamic_address);
	set_at<0, 64>(result, stg11_FIFO_buf36_stg12_update_0_sm144_0191_56_res);
	hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_57_res = stg11_FIFO_buf36_stg12_update_0_sm144_0191_57_select(stg11_FIFO_buf36, root, stg12_0, stg12_1, dynamic_address);
	set_at<16, 64>(result, stg11_FIFO_buf36_stg12_update_0_sm144_0191_57_res);
	hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_58_res = stg11_FIFO_buf36_stg12_update_0_sm144_0191_58_select(stg11_FIFO_buf36, root, stg12_0, stg12_1, dynamic_address);
	set_at<32, 64>(result, stg11_FIFO_buf36_stg12_update_0_sm144_0191_58_res);
	hw_uint<16> stg11_FIFO_buf36_stg12_update_0_sm144_0191_59_res = stg11_FIFO_buf36_stg12_update_0_sm144_0191_59_select(stg11_FIFO_buf36, root, stg12_0, stg12_1, dynamic_address);
	set_at<48, 64>(result, stg11_FIFO_buf36_stg12_update_0_sm144_0191_59_res);
	return result;
}

struct stg12_stg12_update_0_sm144_0191_55_to_stg12_load_to_stg12_to_gp_64043_sm150_0213_120_cache {
	// RAM Box: {[0, 1923], [0, 1081]}
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

struct stg12_cache {
  // Reader addrs...
    // { load_to_stg12_to_gp_64043_sm150_0213[root = 0, stg12_ld42, stg12_ld41] -> stg12[stg12_ld41, stg12_ld42] : 0 <= stg12_ld42 <= 1081 and 0 <= stg12_ld41 <= 1923 }
  // # of banks: 1
  stg12_stg12_update_0_sm144_0191_55_to_stg12_load_to_stg12_to_gp_64043_sm150_0213_120_cache stg12_stg12_update_0_sm144_0191_55_to_stg12_load_to_stg12_to_gp_64043_sm150_0213_120;
};



inline void stg12_stg12_update_0_sm144_0191_55_write(hw_uint<16>& stg12_stg12_update_0_sm144_0191_55, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_update_0_sm144_0191_55_to_stg12_load_to_stg12_to_gp_64043_sm150_0213_120.push(stg12_stg12_update_0_sm144_0191_55);
}

inline hw_uint<16> stg12_load_to_stg12_to_gp_64043_sm150_0213_120_select(stg12_cache& stg12, int root, int stg12_ld42, int stg12_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_load_to_stg12_to_gp_64043_sm150_0213_120 read pattern: { load_to_stg12_to_gp_64043_sm150_0213[root = 0, stg12_ld42, stg12_ld41] -> stg12[stg12_ld41, stg12_ld42] : 0 <= stg12_ld42 <= 1081 and 0 <= stg12_ld41 <= 1923 }
  // Read schedule : { load_to_stg12_to_gp_64043_sm150_0213[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 40] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  // Write schedule: { stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_stg12_update_0_sm144_0191_55 = stg12.stg12_stg12_update_0_sm144_0191_55_to_stg12_load_to_stg12_to_gp_64043_sm150_0213_120.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_update_0_sm144_0191_55;
  return 0;
}

// # of bundles = 2
// load_to_stg12_to_gp_64043_sm150_0213_read
//	stg12_load_to_stg12_to_gp_64043_sm150_0213_120
inline hw_uint<16> stg12_load_to_stg12_to_gp_64043_sm150_0213_read_bundle_read(stg12_cache& stg12, int root, int stg12_ld42, int stg12_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // stg12_load_to_stg12_to_gp_64043_sm150_0213_120

	hw_uint<16> result;
	hw_uint<16> stg12_load_to_stg12_to_gp_64043_sm150_0213_120_res = stg12_load_to_stg12_to_gp_64043_sm150_0213_120_select(stg12, root, stg12_ld42, stg12_ld41, dynamic_address);
	set_at<0, 16>(result, stg12_load_to_stg12_to_gp_64043_sm150_0213_120_res);
	return result;
}

// stg12_update_0_sm144_0191_write
//	stg12_stg12_update_0_sm144_0191_55
inline void stg12_stg12_update_0_sm144_0191_write_bundle_write(hw_uint<16>& stg12_update_0_sm144_0191_write, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
	hw_uint<16> stg12_stg12_update_0_sm144_0191_55_res = stg12_update_0_sm144_0191_write.extract<0, 15>();
	stg12_stg12_update_0_sm144_0191_55_write(stg12_stg12_update_0_sm144_0191_55_res, stg12, root, stg12_0, stg12_1, dynamic_address);
}

struct stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4_cache {
	// RAM Box: {[0, 1923], [0, 1080]}
	// Capacity: 1927
	// # of read delays: 5
  // 0, 1, 1924, 1925, 1926
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1922> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1923() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1924() {
		return f4;
	}

	inline hw_uint<16> peek_1925() {
		return f6;
	}

	inline hw_uint<16> peek_1926() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1922
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1922 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf44_cache {
  // Reader addrs...
    // { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
    // { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[1 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
    // { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[1 + stg13_1, 1 + stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
    // { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[2 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // # of banks: 1
  stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4_cache stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4;
};



inline void stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_write(hw_uint<16>& stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121, stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg12_to_gp_640_ld46, int stg12_to_gp_640_ld45, int dynamic_address) {
  stg12_FIFO_buf44.stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4.push(stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121);
}

inline hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_51_select(stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf44_stg13_update_0_sm145_0193_51 read pattern: { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_stg12_FIFO_buf4447_sm151_0215[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 41] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121 = stg12_FIFO_buf44.stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4.peek_1926();
  return value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_52_select(stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf44_stg13_update_0_sm145_0193_52 read pattern: { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[1 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_stg12_FIFO_buf4447_sm151_0215[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 41] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121 = stg12_FIFO_buf44.stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4.peek_1925();
  return value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_53_select(stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf44_stg13_update_0_sm145_0193_53 read pattern: { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[1 + stg13_1, 1 + stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_stg12_FIFO_buf4447_sm151_0215[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 41] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121 = stg12_FIFO_buf44.stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_54_select(stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf44_stg13_update_0_sm145_0193_54 read pattern: { stg13_update_0_sm145_0193[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf44[2 + stg13_1, stg13_0] : 0 <= stg13_0 <= 1080 and 0 <= stg13_1 <= 1921 }
  // Read schedule : { stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { load_to_stg12_FIFO_buf4447_sm151_0215[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 41] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
  auto value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121 = stg12_FIFO_buf44.stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_merged_banks_4.peek_1924();
  return value_stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121;
  return 0;
}

// # of bundles = 2
// load_to_stg12_FIFO_buf4447_sm151_0215_write
//	stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121
inline void stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_write_bundle_write(hw_uint<16>& load_to_stg12_FIFO_buf4447_sm151_0215_write, stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg12_to_gp_640_ld46, int stg12_to_gp_640_ld45, int dynamic_address) {
	hw_uint<16> stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_res = load_to_stg12_FIFO_buf4447_sm151_0215_write.extract<0, 15>();
	stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_write(stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_121_res, stg12_FIFO_buf44, root, stg12_to_gp_640_ld46, stg12_to_gp_640_ld45, dynamic_address);
}

// stg13_update_0_sm145_0193_read
//	stg12_FIFO_buf44_stg13_update_0_sm145_0193_51
//	stg12_FIFO_buf44_stg13_update_0_sm145_0193_52
//	stg12_FIFO_buf44_stg13_update_0_sm145_0193_53
//	stg12_FIFO_buf44_stg13_update_0_sm145_0193_54
inline hw_uint<64> stg12_FIFO_buf44_stg13_update_0_sm145_0193_read_bundle_read(stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int root, int stg13_0, int stg13_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg12_FIFO_buf44_stg13_update_0_sm145_0193_51
    // stg12_FIFO_buf44_stg13_update_0_sm145_0193_52
    // stg12_FIFO_buf44_stg13_update_0_sm145_0193_53
    // stg12_FIFO_buf44_stg13_update_0_sm145_0193_54

	hw_uint<64> result;
	hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_51_res = stg12_FIFO_buf44_stg13_update_0_sm145_0193_51_select(stg12_FIFO_buf44, root, stg13_0, stg13_1, dynamic_address);
	set_at<0, 64>(result, stg12_FIFO_buf44_stg13_update_0_sm145_0193_51_res);
	hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_52_res = stg12_FIFO_buf44_stg13_update_0_sm145_0193_52_select(stg12_FIFO_buf44, root, stg13_0, stg13_1, dynamic_address);
	set_at<16, 64>(result, stg12_FIFO_buf44_stg13_update_0_sm145_0193_52_res);
	hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_53_res = stg12_FIFO_buf44_stg13_update_0_sm145_0193_53_select(stg12_FIFO_buf44, root, stg13_0, stg13_1, dynamic_address);
	set_at<32, 64>(result, stg12_FIFO_buf44_stg13_update_0_sm145_0193_53_res);
	hw_uint<16> stg12_FIFO_buf44_stg13_update_0_sm145_0193_54_res = stg12_FIFO_buf44_stg13_update_0_sm145_0193_54_select(stg12_FIFO_buf44, root, stg13_0, stg13_1, dynamic_address);
	set_at<48, 64>(result, stg12_FIFO_buf44_stg13_update_0_sm145_0193_54_res);
	return result;
}

struct stg13_stg13_update_0_sm145_0193_50_to_stg13_load_to_stg13_to_gp_74851_sm165_0243_116_cache {
	// RAM Box: {[0, 1921], [0, 1080]}
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

struct stg13_cache {
  // Reader addrs...
    // { load_to_stg13_to_gp_74851_sm165_0243[root = 0, stg13_ld50, stg13_ld49] -> stg13[stg13_ld49, stg13_ld50] : 0 <= stg13_ld50 <= 1080 and 0 <= stg13_ld49 <= 1921 }
  // # of banks: 1
  stg13_stg13_update_0_sm145_0193_50_to_stg13_load_to_stg13_to_gp_74851_sm165_0243_116_cache stg13_stg13_update_0_sm145_0193_50_to_stg13_load_to_stg13_to_gp_74851_sm165_0243_116;
};



inline void stg13_stg13_update_0_sm145_0193_50_write(hw_uint<16>& stg13_stg13_update_0_sm145_0193_50, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_update_0_sm145_0193_50_to_stg13_load_to_stg13_to_gp_74851_sm165_0243_116.push(stg13_stg13_update_0_sm145_0193_50);
}

inline hw_uint<16> stg13_load_to_stg13_to_gp_74851_sm165_0243_116_select(stg13_cache& stg13, int root, int stg13_ld50, int stg13_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_load_to_stg13_to_gp_74851_sm165_0243_116 read pattern: { load_to_stg13_to_gp_74851_sm165_0243[root = 0, stg13_ld50, stg13_ld49] -> stg13[stg13_ld49, stg13_ld50] : 0 <= stg13_ld50 <= 1080 and 0 <= stg13_ld49 <= 1921 }
  // Read schedule : { load_to_stg13_to_gp_74851_sm165_0243[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 43] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  // Write schedule: { stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_stg13_update_0_sm145_0193_50 = stg13.stg13_stg13_update_0_sm145_0193_50_to_stg13_load_to_stg13_to_gp_74851_sm165_0243_116.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_update_0_sm145_0193_50;
  return 0;
}

// # of bundles = 2
// load_to_stg13_to_gp_74851_sm165_0243_read
//	stg13_load_to_stg13_to_gp_74851_sm165_0243_116
inline hw_uint<16> stg13_load_to_stg13_to_gp_74851_sm165_0243_read_bundle_read(stg13_cache& stg13, int root, int stg13_ld50, int stg13_ld49, int dynamic_address) {
  // # of ports in bundle: 1
    // stg13_load_to_stg13_to_gp_74851_sm165_0243_116

	hw_uint<16> result;
	hw_uint<16> stg13_load_to_stg13_to_gp_74851_sm165_0243_116_res = stg13_load_to_stg13_to_gp_74851_sm165_0243_116_select(stg13, root, stg13_ld50, stg13_ld49, dynamic_address);
	set_at<0, 16>(result, stg13_load_to_stg13_to_gp_74851_sm165_0243_116_res);
	return result;
}

// stg13_update_0_sm145_0193_write
//	stg13_stg13_update_0_sm145_0193_50
inline void stg13_stg13_update_0_sm145_0193_write_bundle_write(hw_uint<16>& stg13_update_0_sm145_0193_write, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
	hw_uint<16> stg13_stg13_update_0_sm145_0193_50_res = stg13_update_0_sm145_0193_write.extract<0, 15>();
	stg13_stg13_update_0_sm145_0193_50_write(stg13_stg13_update_0_sm145_0193_50_res, stg13, root, stg13_0, stg13_1, dynamic_address);
}

struct stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4_cache {
	// RAM Box: {[0, 1921], [0, 1079]}
	// Capacity: 1925
	// # of read delays: 5
  // 0, 1, 1922, 1923, 1924
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1920> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1921() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1922() {
		return f4;
	}

	inline hw_uint<16> peek_1923() {
		return f6;
	}

	inline hw_uint<16> peek_1924() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1920
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1920 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf52_cache {
  // Reader addrs...
    // { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
    // { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
    // { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[1 + stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
    // { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[2 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // # of banks: 1
  stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4_cache stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4;
};



inline void stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_write(hw_uint<16>& stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117, stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg13_to_gp_748_ld54, int stg13_to_gp_748_ld53, int dynamic_address) {
  stg13_FIFO_buf52.stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4.push(stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117);
}

inline hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_46_select(stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf52_stg14_update_0_sm146_0205_46 read pattern: { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_stg13_FIFO_buf5255_sm166_0245[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 44] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117 = stg13_FIFO_buf52.stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4.peek_1924();
  return value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_47_select(stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf52_stg14_update_0_sm146_0205_47 read pattern: { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_stg13_FIFO_buf5255_sm166_0245[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 44] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117 = stg13_FIFO_buf52.stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4.peek_1923();
  return value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_48_select(stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf52_stg14_update_0_sm146_0205_48 read pattern: { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[1 + stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_stg13_FIFO_buf5255_sm166_0245[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 44] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117 = stg13_FIFO_buf52.stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_49_select(stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf52_stg14_update_0_sm146_0205_49 read pattern: { stg14_update_0_sm146_0205[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf52[2 + stg14_1, stg14_0] : 0 <= stg14_0 <= 1079 and 0 <= stg14_1 <= 1919 }
  // Read schedule : { stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_stg13_FIFO_buf5255_sm166_0245[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 44] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
  auto value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117 = stg13_FIFO_buf52.stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_merged_banks_4.peek_1922();
  return value_stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117;
  return 0;
}

// # of bundles = 2
// load_to_stg13_FIFO_buf5255_sm166_0245_write
//	stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117
inline void stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_write_bundle_write(hw_uint<16>& load_to_stg13_FIFO_buf5255_sm166_0245_write, stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg13_to_gp_748_ld54, int stg13_to_gp_748_ld53, int dynamic_address) {
	hw_uint<16> stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_res = load_to_stg13_FIFO_buf5255_sm166_0245_write.extract<0, 15>();
	stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_write(stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_117_res, stg13_FIFO_buf52, root, stg13_to_gp_748_ld54, stg13_to_gp_748_ld53, dynamic_address);
}

// stg14_update_0_sm146_0205_read
//	stg13_FIFO_buf52_stg14_update_0_sm146_0205_46
//	stg13_FIFO_buf52_stg14_update_0_sm146_0205_47
//	stg13_FIFO_buf52_stg14_update_0_sm146_0205_48
//	stg13_FIFO_buf52_stg14_update_0_sm146_0205_49
inline hw_uint<64> stg13_FIFO_buf52_stg14_update_0_sm146_0205_read_bundle_read(stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int root, int stg14_0, int stg14_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg13_FIFO_buf52_stg14_update_0_sm146_0205_46
    // stg13_FIFO_buf52_stg14_update_0_sm146_0205_47
    // stg13_FIFO_buf52_stg14_update_0_sm146_0205_48
    // stg13_FIFO_buf52_stg14_update_0_sm146_0205_49

	hw_uint<64> result;
	hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_46_res = stg13_FIFO_buf52_stg14_update_0_sm146_0205_46_select(stg13_FIFO_buf52, root, stg14_0, stg14_1, dynamic_address);
	set_at<0, 64>(result, stg13_FIFO_buf52_stg14_update_0_sm146_0205_46_res);
	hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_47_res = stg13_FIFO_buf52_stg14_update_0_sm146_0205_47_select(stg13_FIFO_buf52, root, stg14_0, stg14_1, dynamic_address);
	set_at<16, 64>(result, stg13_FIFO_buf52_stg14_update_0_sm146_0205_47_res);
	hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_48_res = stg13_FIFO_buf52_stg14_update_0_sm146_0205_48_select(stg13_FIFO_buf52, root, stg14_0, stg14_1, dynamic_address);
	set_at<32, 64>(result, stg13_FIFO_buf52_stg14_update_0_sm146_0205_48_res);
	hw_uint<16> stg13_FIFO_buf52_stg14_update_0_sm146_0205_49_res = stg13_FIFO_buf52_stg14_update_0_sm146_0205_49_select(stg13_FIFO_buf52, root, stg14_0, stg14_1, dynamic_address);
	set_at<48, 64>(result, stg13_FIFO_buf52_stg14_update_0_sm146_0205_49_res);
	return result;
}

struct stg14_stg14_update_0_sm146_0205_45_to_stg14_load_to_stg14_to_gp_15659_sm167_0247_112_cache {
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

struct stg14_cache {
  // Reader addrs...
    // { load_to_stg14_to_gp_15659_sm167_0247[root = 0, stg14_ld58, stg14_ld57] -> stg14[stg14_ld57, stg14_ld58] : 0 <= stg14_ld58 <= 1079 and 0 <= stg14_ld57 <= 1919 }
  // # of banks: 1
  stg14_stg14_update_0_sm146_0205_45_to_stg14_load_to_stg14_to_gp_15659_sm167_0247_112_cache stg14_stg14_update_0_sm146_0205_45_to_stg14_load_to_stg14_to_gp_15659_sm167_0247_112;
};



inline void stg14_stg14_update_0_sm146_0205_45_write(hw_uint<16>& stg14_stg14_update_0_sm146_0205_45, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_update_0_sm146_0205_45_to_stg14_load_to_stg14_to_gp_15659_sm167_0247_112.push(stg14_stg14_update_0_sm146_0205_45);
}

inline hw_uint<16> stg14_load_to_stg14_to_gp_15659_sm167_0247_112_select(stg14_cache& stg14, int root, int stg14_ld58, int stg14_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_load_to_stg14_to_gp_15659_sm167_0247_112 read pattern: { load_to_stg14_to_gp_15659_sm167_0247[root = 0, stg14_ld58, stg14_ld57] -> stg14[stg14_ld57, stg14_ld58] : 0 <= stg14_ld58 <= 1079 and 0 <= stg14_ld57 <= 1919 }
  // Read schedule : { load_to_stg14_to_gp_15659_sm167_0247[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 46] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_stg14_stg14_update_0_sm146_0205_45 = stg14.stg14_stg14_update_0_sm146_0205_45_to_stg14_load_to_stg14_to_gp_15659_sm167_0247_112.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_update_0_sm146_0205_45;
  return 0;
}

// # of bundles = 2
// load_to_stg14_to_gp_15659_sm167_0247_read
//	stg14_load_to_stg14_to_gp_15659_sm167_0247_112
inline hw_uint<16> stg14_load_to_stg14_to_gp_15659_sm167_0247_read_bundle_read(stg14_cache& stg14, int root, int stg14_ld58, int stg14_ld57, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_load_to_stg14_to_gp_15659_sm167_0247_112

	hw_uint<16> result;
	hw_uint<16> stg14_load_to_stg14_to_gp_15659_sm167_0247_112_res = stg14_load_to_stg14_to_gp_15659_sm167_0247_112_select(stg14, root, stg14_ld58, stg14_ld57, dynamic_address);
	set_at<0, 16>(result, stg14_load_to_stg14_to_gp_15659_sm167_0247_112_res);
	return result;
}

// stg14_update_0_sm146_0205_write
//	stg14_stg14_update_0_sm146_0205_45
inline void stg14_stg14_update_0_sm146_0205_write_bundle_write(hw_uint<16>& stg14_update_0_sm146_0205_write, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
	hw_uint<16> stg14_stg14_update_0_sm146_0205_45_res = stg14_update_0_sm146_0205_write.extract<0, 15>();
	stg14_stg14_update_0_sm146_0205_45_write(stg14_stg14_update_0_sm146_0205_45_res, stg14, root, stg14_0, stg14_1, dynamic_address);
}

struct stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_to_stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140_cache {
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

struct stg14_FIFO_buf60_cache {
  // Reader addrs...
    // { jac9_1_update_0_sm147_0207[root = 0, jac9_1_0, jac9_1_1] -> stg14_FIFO_buf60[jac9_1_1, jac9_1_0] : 0 <= jac9_1_0 <= 1079 and 0 <= jac9_1_1 <= 1919 }
  // # of banks: 1
  stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_to_stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140_cache stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_to_stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140;
};



inline void stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_write(hw_uint<16>& stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113, stg14_FIFO_buf60_cache& stg14_FIFO_buf60, int root, int stg14_to_gp_156_ld62, int stg14_to_gp_156_ld61, int dynamic_address) {
  stg14_FIFO_buf60.stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_to_stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140.push(stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113);
}

inline hw_uint<16> stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140_select(stg14_FIFO_buf60_cache& stg14_FIFO_buf60, int root, int jac9_1_0, int jac9_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140 read pattern: { jac9_1_update_0_sm147_0207[root = 0, jac9_1_0, jac9_1_1] -> stg14_FIFO_buf60[jac9_1_1, jac9_1_0] : 0 <= jac9_1_0 <= 1079 and 0 <= jac9_1_1 <= 1919 }
  // Read schedule : { jac9_1_update_0_sm147_0207[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 48] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  // Write schedule: { load_to_stg14_FIFO_buf6063_sm168_0249[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 47] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
  auto value_stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113 = stg14_FIFO_buf60.stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_to_stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113;
  return 0;
}

// # of bundles = 2
// jac9_1_update_0_sm147_0207_read
//	stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140
inline hw_uint<16> stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_read_bundle_read(stg14_FIFO_buf60_cache& stg14_FIFO_buf60, int root, int jac9_1_0, int jac9_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140

	hw_uint<16> result;
	hw_uint<16> stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140_res = stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140_select(stg14_FIFO_buf60, root, jac9_1_0, jac9_1_1, dynamic_address);
	set_at<0, 16>(result, stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_140_res);
	return result;
}

// load_to_stg14_FIFO_buf6063_sm168_0249_write
//	stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113
inline void stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_write_bundle_write(hw_uint<16>& load_to_stg14_FIFO_buf6063_sm168_0249_write, stg14_FIFO_buf60_cache& stg14_FIFO_buf60, int root, int stg14_to_gp_156_ld62, int stg14_to_gp_156_ld61, int dynamic_address) {
	hw_uint<16> stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_res = load_to_stg14_FIFO_buf6063_sm168_0249_write.extract<0, 15>();
	stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_write(stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_113_res, stg14_FIFO_buf60, root, stg14_to_gp_156_ld62, stg14_to_gp_156_ld61, dynamic_address);
}

struct stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4_cache {
	// RAM Box: {[0, 1945], [0, 1091]}
	// Capacity: 1949
	// # of read delays: 5
  // 0, 1, 1946, 1947, 1948
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1944> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1945() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1946() {
		return f4;
	}

	inline hw_uint<16> peek_1947() {
		return f6;
	}

	inline hw_uint<16> peek_1948() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1944
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1944 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf20_cache {
  // Reader addrs...
    // { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
    // { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[1 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
    // { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[1 + stg2_1, 1 + stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
    // { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[2 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // # of banks: 1
  stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4_cache stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4;
};



inline void stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_write(hw_uint<16>& stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109, stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg1_to_gp_916_ld22, int stg1_to_gp_916_ld21, int dynamic_address) {
  stg1_FIFO_buf20.stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4.push(stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109);
}

inline hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_36_select(stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf20_stg2_update_0_sm132_0201_36 read pattern: { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { load_to_stg1_FIFO_buf2023_sm174_0261[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 8] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109 = stg1_FIFO_buf20.stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4.peek_1948();
  return value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_37_select(stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf20_stg2_update_0_sm132_0201_37 read pattern: { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[1 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { load_to_stg1_FIFO_buf2023_sm174_0261[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 8] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109 = stg1_FIFO_buf20.stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4.peek_1947();
  return value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_38_select(stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf20_stg2_update_0_sm132_0201_38 read pattern: { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[1 + stg2_1, 1 + stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { load_to_stg1_FIFO_buf2023_sm174_0261[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 8] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109 = stg1_FIFO_buf20.stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_39_select(stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf20_stg2_update_0_sm132_0201_39 read pattern: { stg2_update_0_sm132_0201[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf20[2 + stg2_1, stg2_0] : 0 <= stg2_0 <= 1091 and 0 <= stg2_1 <= 1943 }
  // Read schedule : { stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { load_to_stg1_FIFO_buf2023_sm174_0261[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 8] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
  auto value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109 = stg1_FIFO_buf20.stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_merged_banks_4.peek_1946();
  return value_stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109;
  return 0;
}

// # of bundles = 2
// load_to_stg1_FIFO_buf2023_sm174_0261_write
//	stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109
inline void stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_write_bundle_write(hw_uint<16>& load_to_stg1_FIFO_buf2023_sm174_0261_write, stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg1_to_gp_916_ld22, int stg1_to_gp_916_ld21, int dynamic_address) {
	hw_uint<16> stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_res = load_to_stg1_FIFO_buf2023_sm174_0261_write.extract<0, 15>();
	stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_write(stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_109_res, stg1_FIFO_buf20, root, stg1_to_gp_916_ld22, stg1_to_gp_916_ld21, dynamic_address);
}

// stg2_update_0_sm132_0201_read
//	stg1_FIFO_buf20_stg2_update_0_sm132_0201_36
//	stg1_FIFO_buf20_stg2_update_0_sm132_0201_37
//	stg1_FIFO_buf20_stg2_update_0_sm132_0201_38
//	stg1_FIFO_buf20_stg2_update_0_sm132_0201_39
inline hw_uint<64> stg1_FIFO_buf20_stg2_update_0_sm132_0201_read_bundle_read(stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int root, int stg2_0, int stg2_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg1_FIFO_buf20_stg2_update_0_sm132_0201_36
    // stg1_FIFO_buf20_stg2_update_0_sm132_0201_37
    // stg1_FIFO_buf20_stg2_update_0_sm132_0201_38
    // stg1_FIFO_buf20_stg2_update_0_sm132_0201_39

	hw_uint<64> result;
	hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_36_res = stg1_FIFO_buf20_stg2_update_0_sm132_0201_36_select(stg1_FIFO_buf20, root, stg2_0, stg2_1, dynamic_address);
	set_at<0, 64>(result, stg1_FIFO_buf20_stg2_update_0_sm132_0201_36_res);
	hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_37_res = stg1_FIFO_buf20_stg2_update_0_sm132_0201_37_select(stg1_FIFO_buf20, root, stg2_0, stg2_1, dynamic_address);
	set_at<16, 64>(result, stg1_FIFO_buf20_stg2_update_0_sm132_0201_37_res);
	hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_38_res = stg1_FIFO_buf20_stg2_update_0_sm132_0201_38_select(stg1_FIFO_buf20, root, stg2_0, stg2_1, dynamic_address);
	set_at<32, 64>(result, stg1_FIFO_buf20_stg2_update_0_sm132_0201_38_res);
	hw_uint<16> stg1_FIFO_buf20_stg2_update_0_sm132_0201_39_res = stg1_FIFO_buf20_stg2_update_0_sm132_0201_39_select(stg1_FIFO_buf20, root, stg2_0, stg2_1, dynamic_address);
	set_at<48, 64>(result, stg1_FIFO_buf20_stg2_update_0_sm132_0201_39_res);
	return result;
}

struct stg2_stg2_update_0_sm132_0201_35_to_stg2_load_to_stg2_to_gp_106467_sm155_0223_104_cache {
	// RAM Box: {[0, 1943], [0, 1091]}
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

struct stg2_cache {
  // Reader addrs...
    // { load_to_stg2_to_gp_106467_sm155_0223[root = 0, stg2_ld66, stg2_ld65] -> stg2[stg2_ld65, stg2_ld66] : 0 <= stg2_ld66 <= 1091 and 0 <= stg2_ld65 <= 1943 }
  // # of banks: 1
  stg2_stg2_update_0_sm132_0201_35_to_stg2_load_to_stg2_to_gp_106467_sm155_0223_104_cache stg2_stg2_update_0_sm132_0201_35_to_stg2_load_to_stg2_to_gp_106467_sm155_0223_104;
};



inline void stg2_stg2_update_0_sm132_0201_35_write(hw_uint<16>& stg2_stg2_update_0_sm132_0201_35, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_update_0_sm132_0201_35_to_stg2_load_to_stg2_to_gp_106467_sm155_0223_104.push(stg2_stg2_update_0_sm132_0201_35);
}

inline hw_uint<16> stg2_load_to_stg2_to_gp_106467_sm155_0223_104_select(stg2_cache& stg2, int root, int stg2_ld66, int stg2_ld65, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_load_to_stg2_to_gp_106467_sm155_0223_104 read pattern: { load_to_stg2_to_gp_106467_sm155_0223[root = 0, stg2_ld66, stg2_ld65] -> stg2[stg2_ld65, stg2_ld66] : 0 <= stg2_ld66 <= 1091 and 0 <= stg2_ld65 <= 1943 }
  // Read schedule : { load_to_stg2_to_gp_106467_sm155_0223[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 10] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  // Write schedule: { stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_stg2_update_0_sm132_0201_35 = stg2.stg2_stg2_update_0_sm132_0201_35_to_stg2_load_to_stg2_to_gp_106467_sm155_0223_104.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_update_0_sm132_0201_35;
  return 0;
}

// # of bundles = 2
// load_to_stg2_to_gp_106467_sm155_0223_read
//	stg2_load_to_stg2_to_gp_106467_sm155_0223_104
inline hw_uint<16> stg2_load_to_stg2_to_gp_106467_sm155_0223_read_bundle_read(stg2_cache& stg2, int root, int stg2_ld66, int stg2_ld65, int dynamic_address) {
  // # of ports in bundle: 1
    // stg2_load_to_stg2_to_gp_106467_sm155_0223_104

	hw_uint<16> result;
	hw_uint<16> stg2_load_to_stg2_to_gp_106467_sm155_0223_104_res = stg2_load_to_stg2_to_gp_106467_sm155_0223_104_select(stg2, root, stg2_ld66, stg2_ld65, dynamic_address);
	set_at<0, 16>(result, stg2_load_to_stg2_to_gp_106467_sm155_0223_104_res);
	return result;
}

// stg2_update_0_sm132_0201_write
//	stg2_stg2_update_0_sm132_0201_35
inline void stg2_stg2_update_0_sm132_0201_write_bundle_write(hw_uint<16>& stg2_update_0_sm132_0201_write, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
	hw_uint<16> stg2_stg2_update_0_sm132_0201_35_res = stg2_update_0_sm132_0201_write.extract<0, 15>();
	stg2_stg2_update_0_sm132_0201_35_write(stg2_stg2_update_0_sm132_0201_35_res, stg2, root, stg2_0, stg2_1, dynamic_address);
}

struct stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4_cache {
	// RAM Box: {[0, 1943], [0, 1090]}
	// Capacity: 1947
	// # of read delays: 5
  // 0, 1, 1944, 1945, 1946
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1942> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1943() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1944() {
		return f4;
	}

	inline hw_uint<16> peek_1945() {
		return f6;
	}

	inline hw_uint<16> peek_1946() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1942
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1942 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf68_cache {
  // Reader addrs...
    // { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
    // { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[1 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
    // { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[1 + stg3_1, 1 + stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
    // { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[2 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // # of banks: 1
  stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4_cache stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4;
};



inline void stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_write(hw_uint<16>& stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105, stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg2_to_gp_1064_ld70, int stg2_to_gp_1064_ld69, int dynamic_address) {
  stg2_FIFO_buf68.stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4.push(stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105);
}

inline hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_31_select(stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf68_stg3_update_0_sm133_0265_31 read pattern: { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { load_to_stg2_FIFO_buf6871_sm136_0177[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 11] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105 = stg2_FIFO_buf68.stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4.peek_1946();
  return value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_32_select(stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf68_stg3_update_0_sm133_0265_32 read pattern: { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[1 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { load_to_stg2_FIFO_buf6871_sm136_0177[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 11] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105 = stg2_FIFO_buf68.stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4.peek_1945();
  return value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_33_select(stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf68_stg3_update_0_sm133_0265_33 read pattern: { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[1 + stg3_1, 1 + stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { load_to_stg2_FIFO_buf6871_sm136_0177[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 11] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105 = stg2_FIFO_buf68.stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_34_select(stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf68_stg3_update_0_sm133_0265_34 read pattern: { stg3_update_0_sm133_0265[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf68[2 + stg3_1, stg3_0] : 0 <= stg3_0 <= 1090 and 0 <= stg3_1 <= 1941 }
  // Read schedule : { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { load_to_stg2_FIFO_buf6871_sm136_0177[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 11] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
  auto value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105 = stg2_FIFO_buf68.stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_merged_banks_4.peek_1944();
  return value_stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105;
  return 0;
}

// # of bundles = 2
// load_to_stg2_FIFO_buf6871_sm136_0177_write
//	stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105
inline void stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_write_bundle_write(hw_uint<16>& load_to_stg2_FIFO_buf6871_sm136_0177_write, stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg2_to_gp_1064_ld70, int stg2_to_gp_1064_ld69, int dynamic_address) {
	hw_uint<16> stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_res = load_to_stg2_FIFO_buf6871_sm136_0177_write.extract<0, 15>();
	stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_write(stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_105_res, stg2_FIFO_buf68, root, stg2_to_gp_1064_ld70, stg2_to_gp_1064_ld69, dynamic_address);
}

// stg3_update_0_sm133_0265_read
//	stg2_FIFO_buf68_stg3_update_0_sm133_0265_31
//	stg2_FIFO_buf68_stg3_update_0_sm133_0265_32
//	stg2_FIFO_buf68_stg3_update_0_sm133_0265_33
//	stg2_FIFO_buf68_stg3_update_0_sm133_0265_34
inline hw_uint<64> stg2_FIFO_buf68_stg3_update_0_sm133_0265_read_bundle_read(stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int root, int stg3_0, int stg3_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg2_FIFO_buf68_stg3_update_0_sm133_0265_31
    // stg2_FIFO_buf68_stg3_update_0_sm133_0265_32
    // stg2_FIFO_buf68_stg3_update_0_sm133_0265_33
    // stg2_FIFO_buf68_stg3_update_0_sm133_0265_34

	hw_uint<64> result;
	hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_31_res = stg2_FIFO_buf68_stg3_update_0_sm133_0265_31_select(stg2_FIFO_buf68, root, stg3_0, stg3_1, dynamic_address);
	set_at<0, 64>(result, stg2_FIFO_buf68_stg3_update_0_sm133_0265_31_res);
	hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_32_res = stg2_FIFO_buf68_stg3_update_0_sm133_0265_32_select(stg2_FIFO_buf68, root, stg3_0, stg3_1, dynamic_address);
	set_at<16, 64>(result, stg2_FIFO_buf68_stg3_update_0_sm133_0265_32_res);
	hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_33_res = stg2_FIFO_buf68_stg3_update_0_sm133_0265_33_select(stg2_FIFO_buf68, root, stg3_0, stg3_1, dynamic_address);
	set_at<32, 64>(result, stg2_FIFO_buf68_stg3_update_0_sm133_0265_33_res);
	hw_uint<16> stg2_FIFO_buf68_stg3_update_0_sm133_0265_34_res = stg2_FIFO_buf68_stg3_update_0_sm133_0265_34_select(stg2_FIFO_buf68, root, stg3_0, stg3_1, dynamic_address);
	set_at<48, 64>(result, stg2_FIFO_buf68_stg3_update_0_sm133_0265_34_res);
	return result;
}

struct stg3_stg3_update_0_sm133_0265_30_to_stg3_load_to_stg3_to_gp_117275_sm176_0199_100_cache {
	// RAM Box: {[0, 1941], [0, 1090]}
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

struct stg3_cache {
  // Reader addrs...
    // { load_to_stg3_to_gp_117275_sm176_0199[root = 0, stg3_ld74, stg3_ld73] -> stg3[stg3_ld73, stg3_ld74] : 0 <= stg3_ld74 <= 1090 and 0 <= stg3_ld73 <= 1941 }
  // # of banks: 1
  stg3_stg3_update_0_sm133_0265_30_to_stg3_load_to_stg3_to_gp_117275_sm176_0199_100_cache stg3_stg3_update_0_sm133_0265_30_to_stg3_load_to_stg3_to_gp_117275_sm176_0199_100;
};



inline void stg3_stg3_update_0_sm133_0265_30_write(hw_uint<16>& stg3_stg3_update_0_sm133_0265_30, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_update_0_sm133_0265_30_to_stg3_load_to_stg3_to_gp_117275_sm176_0199_100.push(stg3_stg3_update_0_sm133_0265_30);
}

inline hw_uint<16> stg3_load_to_stg3_to_gp_117275_sm176_0199_100_select(stg3_cache& stg3, int root, int stg3_ld74, int stg3_ld73, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_load_to_stg3_to_gp_117275_sm176_0199_100 read pattern: { load_to_stg3_to_gp_117275_sm176_0199[root = 0, stg3_ld74, stg3_ld73] -> stg3[stg3_ld73, stg3_ld74] : 0 <= stg3_ld74 <= 1090 and 0 <= stg3_ld73 <= 1941 }
  // Read schedule : { load_to_stg3_to_gp_117275_sm176_0199[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 13] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  // Write schedule: { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_stg3_update_0_sm133_0265_30 = stg3.stg3_stg3_update_0_sm133_0265_30_to_stg3_load_to_stg3_to_gp_117275_sm176_0199_100.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_update_0_sm133_0265_30;
  return 0;
}

// # of bundles = 2
// load_to_stg3_to_gp_117275_sm176_0199_read
//	stg3_load_to_stg3_to_gp_117275_sm176_0199_100
inline hw_uint<16> stg3_load_to_stg3_to_gp_117275_sm176_0199_read_bundle_read(stg3_cache& stg3, int root, int stg3_ld74, int stg3_ld73, int dynamic_address) {
  // # of ports in bundle: 1
    // stg3_load_to_stg3_to_gp_117275_sm176_0199_100

	hw_uint<16> result;
	hw_uint<16> stg3_load_to_stg3_to_gp_117275_sm176_0199_100_res = stg3_load_to_stg3_to_gp_117275_sm176_0199_100_select(stg3, root, stg3_ld74, stg3_ld73, dynamic_address);
	set_at<0, 16>(result, stg3_load_to_stg3_to_gp_117275_sm176_0199_100_res);
	return result;
}

// stg3_update_0_sm133_0265_write
//	stg3_stg3_update_0_sm133_0265_30
inline void stg3_stg3_update_0_sm133_0265_write_bundle_write(hw_uint<16>& stg3_update_0_sm133_0265_write, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
	hw_uint<16> stg3_stg3_update_0_sm133_0265_30_res = stg3_update_0_sm133_0265_write.extract<0, 15>();
	stg3_stg3_update_0_sm133_0265_30_write(stg3_stg3_update_0_sm133_0265_30_res, stg3, root, stg3_0, stg3_1, dynamic_address);
}

struct stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4_cache {
	// RAM Box: {[0, 1941], [0, 1089]}
	// Capacity: 1945
	// # of read delays: 5
  // 0, 1, 1942, 1943, 1944
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1940> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1941() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1942() {
		return f4;
	}

	inline hw_uint<16> peek_1943() {
		return f6;
	}

	inline hw_uint<16> peek_1944() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1940
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1940 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf76_cache {
  // Reader addrs...
    // { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
    // { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[1 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
    // { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[1 + stg4_1, 1 + stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
    // { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[2 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // # of banks: 1
  stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4_cache stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4;
};



inline void stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_write(hw_uint<16>& stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101, stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg3_to_gp_1172_ld78, int stg3_to_gp_1172_ld77, int dynamic_address) {
  stg3_FIFO_buf76.stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4.push(stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101);
}

inline hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_26_select(stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf76_stg4_update_0_sm128_0269_26 read pattern: { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { load_to_stg3_FIFO_buf7679_sm175_0197[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 14] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101 = stg3_FIFO_buf76.stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4.peek_1944();
  return value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_27_select(stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf76_stg4_update_0_sm128_0269_27 read pattern: { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[1 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { load_to_stg3_FIFO_buf7679_sm175_0197[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 14] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101 = stg3_FIFO_buf76.stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4.peek_1943();
  return value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_28_select(stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf76_stg4_update_0_sm128_0269_28 read pattern: { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[1 + stg4_1, 1 + stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { load_to_stg3_FIFO_buf7679_sm175_0197[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 14] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101 = stg3_FIFO_buf76.stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_29_select(stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf76_stg4_update_0_sm128_0269_29 read pattern: { stg4_update_0_sm128_0269[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf76[2 + stg4_1, stg4_0] : 0 <= stg4_0 <= 1089 and 0 <= stg4_1 <= 1939 }
  // Read schedule : { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { load_to_stg3_FIFO_buf7679_sm175_0197[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 14] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
  auto value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101 = stg3_FIFO_buf76.stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_merged_banks_4.peek_1942();
  return value_stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101;
  return 0;
}

// # of bundles = 2
// load_to_stg3_FIFO_buf7679_sm175_0197_write
//	stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101
inline void stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_write_bundle_write(hw_uint<16>& load_to_stg3_FIFO_buf7679_sm175_0197_write, stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg3_to_gp_1172_ld78, int stg3_to_gp_1172_ld77, int dynamic_address) {
	hw_uint<16> stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_res = load_to_stg3_FIFO_buf7679_sm175_0197_write.extract<0, 15>();
	stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_write(stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_101_res, stg3_FIFO_buf76, root, stg3_to_gp_1172_ld78, stg3_to_gp_1172_ld77, dynamic_address);
}

// stg4_update_0_sm128_0269_read
//	stg3_FIFO_buf76_stg4_update_0_sm128_0269_26
//	stg3_FIFO_buf76_stg4_update_0_sm128_0269_27
//	stg3_FIFO_buf76_stg4_update_0_sm128_0269_28
//	stg3_FIFO_buf76_stg4_update_0_sm128_0269_29
inline hw_uint<64> stg3_FIFO_buf76_stg4_update_0_sm128_0269_read_bundle_read(stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int root, int stg4_0, int stg4_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg3_FIFO_buf76_stg4_update_0_sm128_0269_26
    // stg3_FIFO_buf76_stg4_update_0_sm128_0269_27
    // stg3_FIFO_buf76_stg4_update_0_sm128_0269_28
    // stg3_FIFO_buf76_stg4_update_0_sm128_0269_29

	hw_uint<64> result;
	hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_26_res = stg3_FIFO_buf76_stg4_update_0_sm128_0269_26_select(stg3_FIFO_buf76, root, stg4_0, stg4_1, dynamic_address);
	set_at<0, 64>(result, stg3_FIFO_buf76_stg4_update_0_sm128_0269_26_res);
	hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_27_res = stg3_FIFO_buf76_stg4_update_0_sm128_0269_27_select(stg3_FIFO_buf76, root, stg4_0, stg4_1, dynamic_address);
	set_at<16, 64>(result, stg3_FIFO_buf76_stg4_update_0_sm128_0269_27_res);
	hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_28_res = stg3_FIFO_buf76_stg4_update_0_sm128_0269_28_select(stg3_FIFO_buf76, root, stg4_0, stg4_1, dynamic_address);
	set_at<32, 64>(result, stg3_FIFO_buf76_stg4_update_0_sm128_0269_28_res);
	hw_uint<16> stg3_FIFO_buf76_stg4_update_0_sm128_0269_29_res = stg3_FIFO_buf76_stg4_update_0_sm128_0269_29_select(stg3_FIFO_buf76, root, stg4_0, stg4_1, dynamic_address);
	set_at<48, 64>(result, stg3_FIFO_buf76_stg4_update_0_sm128_0269_29_res);
	return result;
}

struct stg4_stg4_update_0_sm128_0269_25_to_stg4_load_to_stg4_to_gp_128083_sm170_0253_96_cache {
	// RAM Box: {[0, 1939], [0, 1089]}
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

struct stg4_cache {
  // Reader addrs...
    // { load_to_stg4_to_gp_128083_sm170_0253[root = 0, stg4_ld82, stg4_ld81] -> stg4[stg4_ld81, stg4_ld82] : 0 <= stg4_ld82 <= 1089 and 0 <= stg4_ld81 <= 1939 }
  // # of banks: 1
  stg4_stg4_update_0_sm128_0269_25_to_stg4_load_to_stg4_to_gp_128083_sm170_0253_96_cache stg4_stg4_update_0_sm128_0269_25_to_stg4_load_to_stg4_to_gp_128083_sm170_0253_96;
};



inline void stg4_stg4_update_0_sm128_0269_25_write(hw_uint<16>& stg4_stg4_update_0_sm128_0269_25, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_update_0_sm128_0269_25_to_stg4_load_to_stg4_to_gp_128083_sm170_0253_96.push(stg4_stg4_update_0_sm128_0269_25);
}

inline hw_uint<16> stg4_load_to_stg4_to_gp_128083_sm170_0253_96_select(stg4_cache& stg4, int root, int stg4_ld82, int stg4_ld81, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_load_to_stg4_to_gp_128083_sm170_0253_96 read pattern: { load_to_stg4_to_gp_128083_sm170_0253[root = 0, stg4_ld82, stg4_ld81] -> stg4[stg4_ld81, stg4_ld82] : 0 <= stg4_ld82 <= 1089 and 0 <= stg4_ld81 <= 1939 }
  // Read schedule : { load_to_stg4_to_gp_128083_sm170_0253[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 16] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  // Write schedule: { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_stg4_update_0_sm128_0269_25 = stg4.stg4_stg4_update_0_sm128_0269_25_to_stg4_load_to_stg4_to_gp_128083_sm170_0253_96.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_sm128_0269_25;
  return 0;
}

// # of bundles = 2
// load_to_stg4_to_gp_128083_sm170_0253_read
//	stg4_load_to_stg4_to_gp_128083_sm170_0253_96
inline hw_uint<16> stg4_load_to_stg4_to_gp_128083_sm170_0253_read_bundle_read(stg4_cache& stg4, int root, int stg4_ld82, int stg4_ld81, int dynamic_address) {
  // # of ports in bundle: 1
    // stg4_load_to_stg4_to_gp_128083_sm170_0253_96

	hw_uint<16> result;
	hw_uint<16> stg4_load_to_stg4_to_gp_128083_sm170_0253_96_res = stg4_load_to_stg4_to_gp_128083_sm170_0253_96_select(stg4, root, stg4_ld82, stg4_ld81, dynamic_address);
	set_at<0, 16>(result, stg4_load_to_stg4_to_gp_128083_sm170_0253_96_res);
	return result;
}

// stg4_update_0_sm128_0269_write
//	stg4_stg4_update_0_sm128_0269_25
inline void stg4_stg4_update_0_sm128_0269_write_bundle_write(hw_uint<16>& stg4_update_0_sm128_0269_write, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_sm128_0269_25_res = stg4_update_0_sm128_0269_write.extract<0, 15>();
	stg4_stg4_update_0_sm128_0269_25_write(stg4_stg4_update_0_sm128_0269_25_res, stg4, root, stg4_0, stg4_1, dynamic_address);
}

struct stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4_cache {
	// RAM Box: {[0, 1939], [0, 1088]}
	// Capacity: 1943
	// # of read delays: 5
  // 0, 1, 1940, 1941, 1942
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1938> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1939() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1940() {
		return f4;
	}

	inline hw_uint<16> peek_1941() {
		return f6;
	}

	inline hw_uint<16> peek_1942() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1938
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1938 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf84_cache {
  // Reader addrs...
    // { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
    // { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[1 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
    // { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[1 + stg5_1, 1 + stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
    // { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[2 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // # of banks: 1
  stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4_cache stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4;
};



inline void stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_write(hw_uint<16>& stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97, stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg4_to_gp_1280_ld86, int stg4_to_gp_1280_ld85, int dynamic_address) {
  stg4_FIFO_buf84.stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4.push(stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97);
}

inline hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_21_select(stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf84_stg5_update_0_sm130_0273_21 read pattern: { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { load_to_stg4_FIFO_buf8487_sm153_0219[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 17] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97 = stg4_FIFO_buf84.stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4.peek_1942();
  return value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_22_select(stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf84_stg5_update_0_sm130_0273_22 read pattern: { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[1 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { load_to_stg4_FIFO_buf8487_sm153_0219[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 17] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97 = stg4_FIFO_buf84.stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4.peek_1941();
  return value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_23_select(stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf84_stg5_update_0_sm130_0273_23 read pattern: { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[1 + stg5_1, 1 + stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { load_to_stg4_FIFO_buf8487_sm153_0219[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 17] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97 = stg4_FIFO_buf84.stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_24_select(stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf84_stg5_update_0_sm130_0273_24 read pattern: { stg5_update_0_sm130_0273[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf84[2 + stg5_1, stg5_0] : 0 <= stg5_0 <= 1088 and 0 <= stg5_1 <= 1937 }
  // Read schedule : { stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { load_to_stg4_FIFO_buf8487_sm153_0219[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 17] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
  auto value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97 = stg4_FIFO_buf84.stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_merged_banks_4.peek_1940();
  return value_stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97;
  return 0;
}

// # of bundles = 2
// load_to_stg4_FIFO_buf8487_sm153_0219_write
//	stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97
inline void stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_write_bundle_write(hw_uint<16>& load_to_stg4_FIFO_buf8487_sm153_0219_write, stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg4_to_gp_1280_ld86, int stg4_to_gp_1280_ld85, int dynamic_address) {
	hw_uint<16> stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_res = load_to_stg4_FIFO_buf8487_sm153_0219_write.extract<0, 15>();
	stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_write(stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_97_res, stg4_FIFO_buf84, root, stg4_to_gp_1280_ld86, stg4_to_gp_1280_ld85, dynamic_address);
}

// stg5_update_0_sm130_0273_read
//	stg4_FIFO_buf84_stg5_update_0_sm130_0273_21
//	stg4_FIFO_buf84_stg5_update_0_sm130_0273_22
//	stg4_FIFO_buf84_stg5_update_0_sm130_0273_23
//	stg4_FIFO_buf84_stg5_update_0_sm130_0273_24
inline hw_uint<64> stg4_FIFO_buf84_stg5_update_0_sm130_0273_read_bundle_read(stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int root, int stg5_0, int stg5_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg4_FIFO_buf84_stg5_update_0_sm130_0273_21
    // stg4_FIFO_buf84_stg5_update_0_sm130_0273_22
    // stg4_FIFO_buf84_stg5_update_0_sm130_0273_23
    // stg4_FIFO_buf84_stg5_update_0_sm130_0273_24

	hw_uint<64> result;
	hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_21_res = stg4_FIFO_buf84_stg5_update_0_sm130_0273_21_select(stg4_FIFO_buf84, root, stg5_0, stg5_1, dynamic_address);
	set_at<0, 64>(result, stg4_FIFO_buf84_stg5_update_0_sm130_0273_21_res);
	hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_22_res = stg4_FIFO_buf84_stg5_update_0_sm130_0273_22_select(stg4_FIFO_buf84, root, stg5_0, stg5_1, dynamic_address);
	set_at<16, 64>(result, stg4_FIFO_buf84_stg5_update_0_sm130_0273_22_res);
	hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_23_res = stg4_FIFO_buf84_stg5_update_0_sm130_0273_23_select(stg4_FIFO_buf84, root, stg5_0, stg5_1, dynamic_address);
	set_at<32, 64>(result, stg4_FIFO_buf84_stg5_update_0_sm130_0273_23_res);
	hw_uint<16> stg4_FIFO_buf84_stg5_update_0_sm130_0273_24_res = stg4_FIFO_buf84_stg5_update_0_sm130_0273_24_select(stg4_FIFO_buf84, root, stg5_0, stg5_1, dynamic_address);
	set_at<48, 64>(result, stg4_FIFO_buf84_stg5_update_0_sm130_0273_24_res);
	return result;
}

struct stg5_stg5_update_0_sm130_0273_20_to_stg5_load_to_stg5_to_gp_138891_sm154_0221_92_cache {
	// RAM Box: {[0, 1937], [0, 1088]}
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

struct stg5_cache {
  // Reader addrs...
    // { load_to_stg5_to_gp_138891_sm154_0221[root = 0, stg5_ld90, stg5_ld89] -> stg5[stg5_ld89, stg5_ld90] : 0 <= stg5_ld90 <= 1088 and 0 <= stg5_ld89 <= 1937 }
  // # of banks: 1
  stg5_stg5_update_0_sm130_0273_20_to_stg5_load_to_stg5_to_gp_138891_sm154_0221_92_cache stg5_stg5_update_0_sm130_0273_20_to_stg5_load_to_stg5_to_gp_138891_sm154_0221_92;
};



inline void stg5_stg5_update_0_sm130_0273_20_write(hw_uint<16>& stg5_stg5_update_0_sm130_0273_20, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_update_0_sm130_0273_20_to_stg5_load_to_stg5_to_gp_138891_sm154_0221_92.push(stg5_stg5_update_0_sm130_0273_20);
}

inline hw_uint<16> stg5_load_to_stg5_to_gp_138891_sm154_0221_92_select(stg5_cache& stg5, int root, int stg5_ld90, int stg5_ld89, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_load_to_stg5_to_gp_138891_sm154_0221_92 read pattern: { load_to_stg5_to_gp_138891_sm154_0221[root = 0, stg5_ld90, stg5_ld89] -> stg5[stg5_ld89, stg5_ld90] : 0 <= stg5_ld90 <= 1088 and 0 <= stg5_ld89 <= 1937 }
  // Read schedule : { load_to_stg5_to_gp_138891_sm154_0221[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 19] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  // Write schedule: { stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_stg5_update_0_sm130_0273_20 = stg5.stg5_stg5_update_0_sm130_0273_20_to_stg5_load_to_stg5_to_gp_138891_sm154_0221_92.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_update_0_sm130_0273_20;
  return 0;
}

// # of bundles = 2
// load_to_stg5_to_gp_138891_sm154_0221_read
//	stg5_load_to_stg5_to_gp_138891_sm154_0221_92
inline hw_uint<16> stg5_load_to_stg5_to_gp_138891_sm154_0221_read_bundle_read(stg5_cache& stg5, int root, int stg5_ld90, int stg5_ld89, int dynamic_address) {
  // # of ports in bundle: 1
    // stg5_load_to_stg5_to_gp_138891_sm154_0221_92

	hw_uint<16> result;
	hw_uint<16> stg5_load_to_stg5_to_gp_138891_sm154_0221_92_res = stg5_load_to_stg5_to_gp_138891_sm154_0221_92_select(stg5, root, stg5_ld90, stg5_ld89, dynamic_address);
	set_at<0, 16>(result, stg5_load_to_stg5_to_gp_138891_sm154_0221_92_res);
	return result;
}

// stg5_update_0_sm130_0273_write
//	stg5_stg5_update_0_sm130_0273_20
inline void stg5_stg5_update_0_sm130_0273_write_bundle_write(hw_uint<16>& stg5_update_0_sm130_0273_write, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
	hw_uint<16> stg5_stg5_update_0_sm130_0273_20_res = stg5_update_0_sm130_0273_write.extract<0, 15>();
	stg5_stg5_update_0_sm130_0273_20_write(stg5_stg5_update_0_sm130_0273_20_res, stg5, root, stg5_0, stg5_1, dynamic_address);
}

struct stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4_cache {
	// RAM Box: {[0, 1937], [0, 1087]}
	// Capacity: 1941
	// # of read delays: 5
  // 0, 1, 1938, 1939, 1940
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1936> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1937() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1938() {
		return f4;
	}

	inline hw_uint<16> peek_1939() {
		return f6;
	}

	inline hw_uint<16> peek_1940() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1936
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1936 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf92_cache {
  // Reader addrs...
    // { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
    // { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[1 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
    // { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[1 + stg6_1, 1 + stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
    // { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[2 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // # of banks: 1
  stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4_cache stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4;
};



inline void stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_write(hw_uint<16>& stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93, stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg5_to_gp_1388_ld94, int stg5_to_gp_1388_ld93, int dynamic_address) {
  stg5_FIFO_buf92.stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4.push(stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93);
}

inline hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_16_select(stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf92_stg6_update_0_sm138_0179_16 read pattern: { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { load_to_stg5_FIFO_buf9295_sm171_0255[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 20] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93 = stg5_FIFO_buf92.stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4.peek_1940();
  return value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_17_select(stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf92_stg6_update_0_sm138_0179_17 read pattern: { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[1 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { load_to_stg5_FIFO_buf9295_sm171_0255[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 20] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93 = stg5_FIFO_buf92.stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4.peek_1939();
  return value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_18_select(stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf92_stg6_update_0_sm138_0179_18 read pattern: { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[1 + stg6_1, 1 + stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { load_to_stg5_FIFO_buf9295_sm171_0255[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 20] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93 = stg5_FIFO_buf92.stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_19_select(stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf92_stg6_update_0_sm138_0179_19 read pattern: { stg6_update_0_sm138_0179[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf92[2 + stg6_1, stg6_0] : 0 <= stg6_0 <= 1087 and 0 <= stg6_1 <= 1935 }
  // Read schedule : { stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { load_to_stg5_FIFO_buf9295_sm171_0255[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 20] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
  auto value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93 = stg5_FIFO_buf92.stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_merged_banks_4.peek_1938();
  return value_stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93;
  return 0;
}

// # of bundles = 2
// load_to_stg5_FIFO_buf9295_sm171_0255_write
//	stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93
inline void stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_write_bundle_write(hw_uint<16>& load_to_stg5_FIFO_buf9295_sm171_0255_write, stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg5_to_gp_1388_ld94, int stg5_to_gp_1388_ld93, int dynamic_address) {
	hw_uint<16> stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_res = load_to_stg5_FIFO_buf9295_sm171_0255_write.extract<0, 15>();
	stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_write(stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_93_res, stg5_FIFO_buf92, root, stg5_to_gp_1388_ld94, stg5_to_gp_1388_ld93, dynamic_address);
}

// stg6_update_0_sm138_0179_read
//	stg5_FIFO_buf92_stg6_update_0_sm138_0179_16
//	stg5_FIFO_buf92_stg6_update_0_sm138_0179_17
//	stg5_FIFO_buf92_stg6_update_0_sm138_0179_18
//	stg5_FIFO_buf92_stg6_update_0_sm138_0179_19
inline hw_uint<64> stg5_FIFO_buf92_stg6_update_0_sm138_0179_read_bundle_read(stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int root, int stg6_0, int stg6_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg5_FIFO_buf92_stg6_update_0_sm138_0179_16
    // stg5_FIFO_buf92_stg6_update_0_sm138_0179_17
    // stg5_FIFO_buf92_stg6_update_0_sm138_0179_18
    // stg5_FIFO_buf92_stg6_update_0_sm138_0179_19

	hw_uint<64> result;
	hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_16_res = stg5_FIFO_buf92_stg6_update_0_sm138_0179_16_select(stg5_FIFO_buf92, root, stg6_0, stg6_1, dynamic_address);
	set_at<0, 64>(result, stg5_FIFO_buf92_stg6_update_0_sm138_0179_16_res);
	hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_17_res = stg5_FIFO_buf92_stg6_update_0_sm138_0179_17_select(stg5_FIFO_buf92, root, stg6_0, stg6_1, dynamic_address);
	set_at<16, 64>(result, stg5_FIFO_buf92_stg6_update_0_sm138_0179_17_res);
	hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_18_res = stg5_FIFO_buf92_stg6_update_0_sm138_0179_18_select(stg5_FIFO_buf92, root, stg6_0, stg6_1, dynamic_address);
	set_at<32, 64>(result, stg5_FIFO_buf92_stg6_update_0_sm138_0179_18_res);
	hw_uint<16> stg5_FIFO_buf92_stg6_update_0_sm138_0179_19_res = stg5_FIFO_buf92_stg6_update_0_sm138_0179_19_select(stg5_FIFO_buf92, root, stg6_0, stg6_1, dynamic_address);
	set_at<48, 64>(result, stg5_FIFO_buf92_stg6_update_0_sm138_0179_19_res);
	return result;
}

struct stg6_stg6_update_0_sm138_0179_15_to_stg6_load_to_stg6_to_gp_149699_sm172_0257_88_cache {
	// RAM Box: {[0, 1935], [0, 1087]}
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

struct stg6_cache {
  // Reader addrs...
    // { load_to_stg6_to_gp_149699_sm172_0257[root = 0, stg6_ld98, stg6_ld97] -> stg6[stg6_ld97, stg6_ld98] : 0 <= stg6_ld98 <= 1087 and 0 <= stg6_ld97 <= 1935 }
  // # of banks: 1
  stg6_stg6_update_0_sm138_0179_15_to_stg6_load_to_stg6_to_gp_149699_sm172_0257_88_cache stg6_stg6_update_0_sm138_0179_15_to_stg6_load_to_stg6_to_gp_149699_sm172_0257_88;
};



inline void stg6_stg6_update_0_sm138_0179_15_write(hw_uint<16>& stg6_stg6_update_0_sm138_0179_15, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_update_0_sm138_0179_15_to_stg6_load_to_stg6_to_gp_149699_sm172_0257_88.push(stg6_stg6_update_0_sm138_0179_15);
}

inline hw_uint<16> stg6_load_to_stg6_to_gp_149699_sm172_0257_88_select(stg6_cache& stg6, int root, int stg6_ld98, int stg6_ld97, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_load_to_stg6_to_gp_149699_sm172_0257_88 read pattern: { load_to_stg6_to_gp_149699_sm172_0257[root = 0, stg6_ld98, stg6_ld97] -> stg6[stg6_ld97, stg6_ld98] : 0 <= stg6_ld98 <= 1087 and 0 <= stg6_ld97 <= 1935 }
  // Read schedule : { load_to_stg6_to_gp_149699_sm172_0257[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 22] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  // Write schedule: { stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_stg6_update_0_sm138_0179_15 = stg6.stg6_stg6_update_0_sm138_0179_15_to_stg6_load_to_stg6_to_gp_149699_sm172_0257_88.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_update_0_sm138_0179_15;
  return 0;
}

// # of bundles = 2
// load_to_stg6_to_gp_149699_sm172_0257_read
//	stg6_load_to_stg6_to_gp_149699_sm172_0257_88
inline hw_uint<16> stg6_load_to_stg6_to_gp_149699_sm172_0257_read_bundle_read(stg6_cache& stg6, int root, int stg6_ld98, int stg6_ld97, int dynamic_address) {
  // # of ports in bundle: 1
    // stg6_load_to_stg6_to_gp_149699_sm172_0257_88

	hw_uint<16> result;
	hw_uint<16> stg6_load_to_stg6_to_gp_149699_sm172_0257_88_res = stg6_load_to_stg6_to_gp_149699_sm172_0257_88_select(stg6, root, stg6_ld98, stg6_ld97, dynamic_address);
	set_at<0, 16>(result, stg6_load_to_stg6_to_gp_149699_sm172_0257_88_res);
	return result;
}

// stg6_update_0_sm138_0179_write
//	stg6_stg6_update_0_sm138_0179_15
inline void stg6_stg6_update_0_sm138_0179_write_bundle_write(hw_uint<16>& stg6_update_0_sm138_0179_write, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
	hw_uint<16> stg6_stg6_update_0_sm138_0179_15_res = stg6_update_0_sm138_0179_write.extract<0, 15>();
	stg6_stg6_update_0_sm138_0179_15_write(stg6_stg6_update_0_sm138_0179_15_res, stg6, root, stg6_0, stg6_1, dynamic_address);
}

struct stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4_cache {
	// RAM Box: {[0, 1935], [0, 1086]}
	// Capacity: 1939
	// # of read delays: 5
  // 0, 1, 1936, 1937, 1938
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1934> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1935() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1936() {
		return f4;
	}

	inline hw_uint<16> peek_1937() {
		return f6;
	}

	inline hw_uint<16> peek_1938() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1934
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1934 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf100_cache {
  // Reader addrs...
    // { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
    // { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[1 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
    // { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[1 + stg7_1, 1 + stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
    // { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[2 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // # of banks: 1
  stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4_cache stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4;
};



inline void stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_write(hw_uint<16>& stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89, stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg6_to_gp_1496_ld102, int stg6_to_gp_1496_ld101, int dynamic_address) {
  stg6_FIFO_buf100.stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4.push(stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89);
}

inline hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_11_select(stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf100_stg7_update_0_sm139_0181_11 read pattern: { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { load_to_stg6_FIFO_buf100103_sm157_0227[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 23] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89 = stg6_FIFO_buf100.stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4.peek_1938();
  return value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_12_select(stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf100_stg7_update_0_sm139_0181_12 read pattern: { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[1 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { load_to_stg6_FIFO_buf100103_sm157_0227[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 23] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89 = stg6_FIFO_buf100.stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4.peek_1937();
  return value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_13_select(stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf100_stg7_update_0_sm139_0181_13 read pattern: { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[1 + stg7_1, 1 + stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { load_to_stg6_FIFO_buf100103_sm157_0227[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 23] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89 = stg6_FIFO_buf100.stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_14_select(stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf100_stg7_update_0_sm139_0181_14 read pattern: { stg7_update_0_sm139_0181[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf100[2 + stg7_1, stg7_0] : 0 <= stg7_0 <= 1086 and 0 <= stg7_1 <= 1933 }
  // Read schedule : { stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { load_to_stg6_FIFO_buf100103_sm157_0227[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 23] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
  auto value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89 = stg6_FIFO_buf100.stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_merged_banks_4.peek_1936();
  return value_stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89;
  return 0;
}

// # of bundles = 2
// load_to_stg6_FIFO_buf100103_sm157_0227_write
//	stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89
inline void stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_write_bundle_write(hw_uint<16>& load_to_stg6_FIFO_buf100103_sm157_0227_write, stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg6_to_gp_1496_ld102, int stg6_to_gp_1496_ld101, int dynamic_address) {
	hw_uint<16> stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_res = load_to_stg6_FIFO_buf100103_sm157_0227_write.extract<0, 15>();
	stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_write(stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_89_res, stg6_FIFO_buf100, root, stg6_to_gp_1496_ld102, stg6_to_gp_1496_ld101, dynamic_address);
}

// stg7_update_0_sm139_0181_read
//	stg6_FIFO_buf100_stg7_update_0_sm139_0181_11
//	stg6_FIFO_buf100_stg7_update_0_sm139_0181_12
//	stg6_FIFO_buf100_stg7_update_0_sm139_0181_13
//	stg6_FIFO_buf100_stg7_update_0_sm139_0181_14
inline hw_uint<64> stg6_FIFO_buf100_stg7_update_0_sm139_0181_read_bundle_read(stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int root, int stg7_0, int stg7_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg6_FIFO_buf100_stg7_update_0_sm139_0181_11
    // stg6_FIFO_buf100_stg7_update_0_sm139_0181_12
    // stg6_FIFO_buf100_stg7_update_0_sm139_0181_13
    // stg6_FIFO_buf100_stg7_update_0_sm139_0181_14

	hw_uint<64> result;
	hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_11_res = stg6_FIFO_buf100_stg7_update_0_sm139_0181_11_select(stg6_FIFO_buf100, root, stg7_0, stg7_1, dynamic_address);
	set_at<0, 64>(result, stg6_FIFO_buf100_stg7_update_0_sm139_0181_11_res);
	hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_12_res = stg6_FIFO_buf100_stg7_update_0_sm139_0181_12_select(stg6_FIFO_buf100, root, stg7_0, stg7_1, dynamic_address);
	set_at<16, 64>(result, stg6_FIFO_buf100_stg7_update_0_sm139_0181_12_res);
	hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_13_res = stg6_FIFO_buf100_stg7_update_0_sm139_0181_13_select(stg6_FIFO_buf100, root, stg7_0, stg7_1, dynamic_address);
	set_at<32, 64>(result, stg6_FIFO_buf100_stg7_update_0_sm139_0181_13_res);
	hw_uint<16> stg6_FIFO_buf100_stg7_update_0_sm139_0181_14_res = stg6_FIFO_buf100_stg7_update_0_sm139_0181_14_select(stg6_FIFO_buf100, root, stg7_0, stg7_1, dynamic_address);
	set_at<48, 64>(result, stg6_FIFO_buf100_stg7_update_0_sm139_0181_14_res);
	return result;
}

struct stg7_stg7_update_0_sm139_0181_10_to_stg7_load_to_stg7_to_gp_15104107_sm159_0231_84_cache {
	// RAM Box: {[0, 1933], [0, 1086]}
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

struct stg7_cache {
  // Reader addrs...
    // { load_to_stg7_to_gp_15104107_sm159_0231[root = 0, stg7_ld106, stg7_ld105] -> stg7[stg7_ld105, stg7_ld106] : 0 <= stg7_ld106 <= 1086 and 0 <= stg7_ld105 <= 1933 }
  // # of banks: 1
  stg7_stg7_update_0_sm139_0181_10_to_stg7_load_to_stg7_to_gp_15104107_sm159_0231_84_cache stg7_stg7_update_0_sm139_0181_10_to_stg7_load_to_stg7_to_gp_15104107_sm159_0231_84;
};



inline void stg7_stg7_update_0_sm139_0181_10_write(hw_uint<16>& stg7_stg7_update_0_sm139_0181_10, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_update_0_sm139_0181_10_to_stg7_load_to_stg7_to_gp_15104107_sm159_0231_84.push(stg7_stg7_update_0_sm139_0181_10);
}

inline hw_uint<16> stg7_load_to_stg7_to_gp_15104107_sm159_0231_84_select(stg7_cache& stg7, int root, int stg7_ld106, int stg7_ld105, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_load_to_stg7_to_gp_15104107_sm159_0231_84 read pattern: { load_to_stg7_to_gp_15104107_sm159_0231[root = 0, stg7_ld106, stg7_ld105] -> stg7[stg7_ld105, stg7_ld106] : 0 <= stg7_ld106 <= 1086 and 0 <= stg7_ld105 <= 1933 }
  // Read schedule : { load_to_stg7_to_gp_15104107_sm159_0231[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 25] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  // Write schedule: { stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_stg7_update_0_sm139_0181_10 = stg7.stg7_stg7_update_0_sm139_0181_10_to_stg7_load_to_stg7_to_gp_15104107_sm159_0231_84.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_update_0_sm139_0181_10;
  return 0;
}

// # of bundles = 2
// load_to_stg7_to_gp_15104107_sm159_0231_read
//	stg7_load_to_stg7_to_gp_15104107_sm159_0231_84
inline hw_uint<16> stg7_load_to_stg7_to_gp_15104107_sm159_0231_read_bundle_read(stg7_cache& stg7, int root, int stg7_ld106, int stg7_ld105, int dynamic_address) {
  // # of ports in bundle: 1
    // stg7_load_to_stg7_to_gp_15104107_sm159_0231_84

	hw_uint<16> result;
	hw_uint<16> stg7_load_to_stg7_to_gp_15104107_sm159_0231_84_res = stg7_load_to_stg7_to_gp_15104107_sm159_0231_84_select(stg7, root, stg7_ld106, stg7_ld105, dynamic_address);
	set_at<0, 16>(result, stg7_load_to_stg7_to_gp_15104107_sm159_0231_84_res);
	return result;
}

// stg7_update_0_sm139_0181_write
//	stg7_stg7_update_0_sm139_0181_10
inline void stg7_stg7_update_0_sm139_0181_write_bundle_write(hw_uint<16>& stg7_update_0_sm139_0181_write, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
	hw_uint<16> stg7_stg7_update_0_sm139_0181_10_res = stg7_update_0_sm139_0181_write.extract<0, 15>();
	stg7_stg7_update_0_sm139_0181_10_write(stg7_stg7_update_0_sm139_0181_10_res, stg7, root, stg7_0, stg7_1, dynamic_address);
}

struct stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4_cache {
	// RAM Box: {[0, 1933], [0, 1085]}
	// Capacity: 1937
	// # of read delays: 5
  // 0, 1, 1934, 1935, 1936
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1932> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1933() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1934() {
		return f4;
	}

	inline hw_uint<16> peek_1935() {
		return f6;
	}

	inline hw_uint<16> peek_1936() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1932
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1932 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf108_cache {
  // Reader addrs...
    // { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
    // { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[1 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
    // { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[1 + stg8_1, 1 + stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
    // { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[2 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // # of banks: 1
  stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4_cache stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4;
};



inline void stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_write(hw_uint<16>& stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85, stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg7_to_gp_15104_ld110, int stg7_to_gp_15104_ld109, int dynamic_address) {
  stg7_FIFO_buf108.stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4.push(stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85);
}

inline hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_6_select(stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf108_stg8_update_0_sm140_0183_6 read pattern: { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { load_to_stg7_FIFO_buf108111_sm158_0229[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 26] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85 = stg7_FIFO_buf108.stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4.peek_1936();
  return value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_7_select(stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf108_stg8_update_0_sm140_0183_7 read pattern: { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[1 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { load_to_stg7_FIFO_buf108111_sm158_0229[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 26] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85 = stg7_FIFO_buf108.stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4.peek_1935();
  return value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_8_select(stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf108_stg8_update_0_sm140_0183_8 read pattern: { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[1 + stg8_1, 1 + stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { load_to_stg7_FIFO_buf108111_sm158_0229[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 26] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85 = stg7_FIFO_buf108.stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_9_select(stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf108_stg8_update_0_sm140_0183_9 read pattern: { stg8_update_0_sm140_0183[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf108[2 + stg8_1, stg8_0] : 0 <= stg8_0 <= 1085 and 0 <= stg8_1 <= 1931 }
  // Read schedule : { stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { load_to_stg7_FIFO_buf108111_sm158_0229[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 26] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
  auto value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85 = stg7_FIFO_buf108.stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_merged_banks_4.peek_1934();
  return value_stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85;
  return 0;
}

// # of bundles = 2
// load_to_stg7_FIFO_buf108111_sm158_0229_write
//	stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85
inline void stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_write_bundle_write(hw_uint<16>& load_to_stg7_FIFO_buf108111_sm158_0229_write, stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg7_to_gp_15104_ld110, int stg7_to_gp_15104_ld109, int dynamic_address) {
	hw_uint<16> stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_res = load_to_stg7_FIFO_buf108111_sm158_0229_write.extract<0, 15>();
	stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_write(stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_85_res, stg7_FIFO_buf108, root, stg7_to_gp_15104_ld110, stg7_to_gp_15104_ld109, dynamic_address);
}

// stg8_update_0_sm140_0183_read
//	stg7_FIFO_buf108_stg8_update_0_sm140_0183_6
//	stg7_FIFO_buf108_stg8_update_0_sm140_0183_7
//	stg7_FIFO_buf108_stg8_update_0_sm140_0183_8
//	stg7_FIFO_buf108_stg8_update_0_sm140_0183_9
inline hw_uint<64> stg7_FIFO_buf108_stg8_update_0_sm140_0183_read_bundle_read(stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int root, int stg8_0, int stg8_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg7_FIFO_buf108_stg8_update_0_sm140_0183_6
    // stg7_FIFO_buf108_stg8_update_0_sm140_0183_7
    // stg7_FIFO_buf108_stg8_update_0_sm140_0183_8
    // stg7_FIFO_buf108_stg8_update_0_sm140_0183_9

	hw_uint<64> result;
	hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_6_res = stg7_FIFO_buf108_stg8_update_0_sm140_0183_6_select(stg7_FIFO_buf108, root, stg8_0, stg8_1, dynamic_address);
	set_at<0, 64>(result, stg7_FIFO_buf108_stg8_update_0_sm140_0183_6_res);
	hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_7_res = stg7_FIFO_buf108_stg8_update_0_sm140_0183_7_select(stg7_FIFO_buf108, root, stg8_0, stg8_1, dynamic_address);
	set_at<16, 64>(result, stg7_FIFO_buf108_stg8_update_0_sm140_0183_7_res);
	hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_8_res = stg7_FIFO_buf108_stg8_update_0_sm140_0183_8_select(stg7_FIFO_buf108, root, stg8_0, stg8_1, dynamic_address);
	set_at<32, 64>(result, stg7_FIFO_buf108_stg8_update_0_sm140_0183_8_res);
	hw_uint<16> stg7_FIFO_buf108_stg8_update_0_sm140_0183_9_res = stg7_FIFO_buf108_stg8_update_0_sm140_0183_9_select(stg7_FIFO_buf108, root, stg8_0, stg8_1, dynamic_address);
	set_at<48, 64>(result, stg7_FIFO_buf108_stg8_update_0_sm140_0183_9_res);
	return result;
}

struct stg8_stg8_update_0_sm140_0183_5_to_stg8_load_to_stg8_to_gp_16112115_sm161_0235_80_cache {
	// RAM Box: {[0, 1931], [0, 1085]}
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

struct stg8_cache {
  // Reader addrs...
    // { load_to_stg8_to_gp_16112115_sm161_0235[root = 0, stg8_ld114, stg8_ld113] -> stg8[stg8_ld113, stg8_ld114] : 0 <= stg8_ld114 <= 1085 and 0 <= stg8_ld113 <= 1931 }
  // # of banks: 1
  stg8_stg8_update_0_sm140_0183_5_to_stg8_load_to_stg8_to_gp_16112115_sm161_0235_80_cache stg8_stg8_update_0_sm140_0183_5_to_stg8_load_to_stg8_to_gp_16112115_sm161_0235_80;
};



inline void stg8_stg8_update_0_sm140_0183_5_write(hw_uint<16>& stg8_stg8_update_0_sm140_0183_5, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_update_0_sm140_0183_5_to_stg8_load_to_stg8_to_gp_16112115_sm161_0235_80.push(stg8_stg8_update_0_sm140_0183_5);
}

inline hw_uint<16> stg8_load_to_stg8_to_gp_16112115_sm161_0235_80_select(stg8_cache& stg8, int root, int stg8_ld114, int stg8_ld113, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_load_to_stg8_to_gp_16112115_sm161_0235_80 read pattern: { load_to_stg8_to_gp_16112115_sm161_0235[root = 0, stg8_ld114, stg8_ld113] -> stg8[stg8_ld113, stg8_ld114] : 0 <= stg8_ld114 <= 1085 and 0 <= stg8_ld113 <= 1931 }
  // Read schedule : { load_to_stg8_to_gp_16112115_sm161_0235[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 28] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  // Write schedule: { stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_stg8_update_0_sm140_0183_5 = stg8.stg8_stg8_update_0_sm140_0183_5_to_stg8_load_to_stg8_to_gp_16112115_sm161_0235_80.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_update_0_sm140_0183_5;
  return 0;
}

// # of bundles = 2
// load_to_stg8_to_gp_16112115_sm161_0235_read
//	stg8_load_to_stg8_to_gp_16112115_sm161_0235_80
inline hw_uint<16> stg8_load_to_stg8_to_gp_16112115_sm161_0235_read_bundle_read(stg8_cache& stg8, int root, int stg8_ld114, int stg8_ld113, int dynamic_address) {
  // # of ports in bundle: 1
    // stg8_load_to_stg8_to_gp_16112115_sm161_0235_80

	hw_uint<16> result;
	hw_uint<16> stg8_load_to_stg8_to_gp_16112115_sm161_0235_80_res = stg8_load_to_stg8_to_gp_16112115_sm161_0235_80_select(stg8, root, stg8_ld114, stg8_ld113, dynamic_address);
	set_at<0, 16>(result, stg8_load_to_stg8_to_gp_16112115_sm161_0235_80_res);
	return result;
}

// stg8_update_0_sm140_0183_write
//	stg8_stg8_update_0_sm140_0183_5
inline void stg8_stg8_update_0_sm140_0183_write_bundle_write(hw_uint<16>& stg8_update_0_sm140_0183_write, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
	hw_uint<16> stg8_stg8_update_0_sm140_0183_5_res = stg8_update_0_sm140_0183_write.extract<0, 15>();
	stg8_stg8_update_0_sm140_0183_5_write(stg8_stg8_update_0_sm140_0183_5_res, stg8, root, stg8_0, stg8_1, dynamic_address);
}

struct stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4_cache {
	// RAM Box: {[0, 1931], [0, 1084]}
	// Capacity: 1935
	// # of read delays: 5
  // 0, 1, 1932, 1933, 1934
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1930> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1931() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1932() {
		return f4;
	}

	inline hw_uint<16> peek_1933() {
		return f6;
	}

	inline hw_uint<16> peek_1934() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1930
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1930 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf116_cache {
  // Reader addrs...
    // { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
    // { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[1 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
    // { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[1 + stg9_1, 1 + stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
    // { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[2 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // # of banks: 1
  stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4_cache stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4;
};



inline void stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_write(hw_uint<16>& stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81, stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg8_to_gp_16112_ld118, int stg8_to_gp_16112_ld117, int dynamic_address) {
  stg8_FIFO_buf116.stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4.push(stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81);
}

inline hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_1_select(stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf116_stg9_update_0_sm141_0185_1 read pattern: { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { load_to_stg8_FIFO_buf116119_sm160_0233[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 29] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81 = stg8_FIFO_buf116.stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4.peek_1934();
  return value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_2_select(stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf116_stg9_update_0_sm141_0185_2 read pattern: { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[1 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { load_to_stg8_FIFO_buf116119_sm160_0233[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 29] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81 = stg8_FIFO_buf116.stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4.peek_1933();
  return value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_3_select(stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf116_stg9_update_0_sm141_0185_3 read pattern: { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[1 + stg9_1, 1 + stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { load_to_stg8_FIFO_buf116119_sm160_0233[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 29] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81 = stg8_FIFO_buf116.stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_4_select(stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf116_stg9_update_0_sm141_0185_4 read pattern: { stg9_update_0_sm141_0185[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf116[2 + stg9_1, stg9_0] : 0 <= stg9_0 <= 1084 and 0 <= stg9_1 <= 1929 }
  // Read schedule : { stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { load_to_stg8_FIFO_buf116119_sm160_0233[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 29] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
  auto value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81 = stg8_FIFO_buf116.stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_merged_banks_4.peek_1932();
  return value_stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81;
  return 0;
}

// # of bundles = 2
// load_to_stg8_FIFO_buf116119_sm160_0233_write
//	stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81
inline void stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_write_bundle_write(hw_uint<16>& load_to_stg8_FIFO_buf116119_sm160_0233_write, stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg8_to_gp_16112_ld118, int stg8_to_gp_16112_ld117, int dynamic_address) {
	hw_uint<16> stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_res = load_to_stg8_FIFO_buf116119_sm160_0233_write.extract<0, 15>();
	stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_write(stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_81_res, stg8_FIFO_buf116, root, stg8_to_gp_16112_ld118, stg8_to_gp_16112_ld117, dynamic_address);
}

// stg9_update_0_sm141_0185_read
//	stg8_FIFO_buf116_stg9_update_0_sm141_0185_1
//	stg8_FIFO_buf116_stg9_update_0_sm141_0185_2
//	stg8_FIFO_buf116_stg9_update_0_sm141_0185_3
//	stg8_FIFO_buf116_stg9_update_0_sm141_0185_4
inline hw_uint<64> stg8_FIFO_buf116_stg9_update_0_sm141_0185_read_bundle_read(stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int root, int stg9_0, int stg9_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg8_FIFO_buf116_stg9_update_0_sm141_0185_1
    // stg8_FIFO_buf116_stg9_update_0_sm141_0185_2
    // stg8_FIFO_buf116_stg9_update_0_sm141_0185_3
    // stg8_FIFO_buf116_stg9_update_0_sm141_0185_4

	hw_uint<64> result;
	hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_1_res = stg8_FIFO_buf116_stg9_update_0_sm141_0185_1_select(stg8_FIFO_buf116, root, stg9_0, stg9_1, dynamic_address);
	set_at<0, 64>(result, stg8_FIFO_buf116_stg9_update_0_sm141_0185_1_res);
	hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_2_res = stg8_FIFO_buf116_stg9_update_0_sm141_0185_2_select(stg8_FIFO_buf116, root, stg9_0, stg9_1, dynamic_address);
	set_at<16, 64>(result, stg8_FIFO_buf116_stg9_update_0_sm141_0185_2_res);
	hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_3_res = stg8_FIFO_buf116_stg9_update_0_sm141_0185_3_select(stg8_FIFO_buf116, root, stg9_0, stg9_1, dynamic_address);
	set_at<32, 64>(result, stg8_FIFO_buf116_stg9_update_0_sm141_0185_3_res);
	hw_uint<16> stg8_FIFO_buf116_stg9_update_0_sm141_0185_4_res = stg8_FIFO_buf116_stg9_update_0_sm141_0185_4_select(stg8_FIFO_buf116, root, stg9_0, stg9_1, dynamic_address);
	set_at<48, 64>(result, stg8_FIFO_buf116_stg9_update_0_sm141_0185_4_res);
	return result;
}

struct stg9_stg9_update_0_sm141_0185_0_to_stg9_load_to_stg9_to_gp_3120123_sm162_0237_76_cache {
	// RAM Box: {[0, 1929], [0, 1084]}
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

struct stg9_cache {
  // Reader addrs...
    // { load_to_stg9_to_gp_3120123_sm162_0237[root = 0, stg9_ld122, stg9_ld121] -> stg9[stg9_ld121, stg9_ld122] : 0 <= stg9_ld122 <= 1084 and 0 <= stg9_ld121 <= 1929 }
  // # of banks: 1
  stg9_stg9_update_0_sm141_0185_0_to_stg9_load_to_stg9_to_gp_3120123_sm162_0237_76_cache stg9_stg9_update_0_sm141_0185_0_to_stg9_load_to_stg9_to_gp_3120123_sm162_0237_76;
};



inline void stg9_stg9_update_0_sm141_0185_0_write(hw_uint<16>& stg9_stg9_update_0_sm141_0185_0, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_update_0_sm141_0185_0_to_stg9_load_to_stg9_to_gp_3120123_sm162_0237_76.push(stg9_stg9_update_0_sm141_0185_0);
}

inline hw_uint<16> stg9_load_to_stg9_to_gp_3120123_sm162_0237_76_select(stg9_cache& stg9, int root, int stg9_ld122, int stg9_ld121, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_load_to_stg9_to_gp_3120123_sm162_0237_76 read pattern: { load_to_stg9_to_gp_3120123_sm162_0237[root = 0, stg9_ld122, stg9_ld121] -> stg9[stg9_ld121, stg9_ld122] : 0 <= stg9_ld122 <= 1084 and 0 <= stg9_ld121 <= 1929 }
  // Read schedule : { load_to_stg9_to_gp_3120123_sm162_0237[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 31] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  // Write schedule: { stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_stg9_update_0_sm141_0185_0 = stg9.stg9_stg9_update_0_sm141_0185_0_to_stg9_load_to_stg9_to_gp_3120123_sm162_0237_76.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_sm141_0185_0;
  return 0;
}

// # of bundles = 2
// load_to_stg9_to_gp_3120123_sm162_0237_read
//	stg9_load_to_stg9_to_gp_3120123_sm162_0237_76
inline hw_uint<16> stg9_load_to_stg9_to_gp_3120123_sm162_0237_read_bundle_read(stg9_cache& stg9, int root, int stg9_ld122, int stg9_ld121, int dynamic_address) {
  // # of ports in bundle: 1
    // stg9_load_to_stg9_to_gp_3120123_sm162_0237_76

	hw_uint<16> result;
	hw_uint<16> stg9_load_to_stg9_to_gp_3120123_sm162_0237_76_res = stg9_load_to_stg9_to_gp_3120123_sm162_0237_76_select(stg9, root, stg9_ld122, stg9_ld121, dynamic_address);
	set_at<0, 16>(result, stg9_load_to_stg9_to_gp_3120123_sm162_0237_76_res);
	return result;
}

// stg9_update_0_sm141_0185_write
//	stg9_stg9_update_0_sm141_0185_0
inline void stg9_stg9_update_0_sm141_0185_write_bundle_write(hw_uint<16>& stg9_update_0_sm141_0185_write, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_sm141_0185_0_res = stg9_update_0_sm141_0185_write.extract<0, 15>();
	stg9_stg9_update_0_sm141_0185_0_write(stg9_stg9_update_0_sm141_0185_0_res, stg9, root, stg9_0, stg9_1, dynamic_address);
}

struct stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4_cache {
	// RAM Box: {[0, 1929], [0, 1083]}
	// Capacity: 1933
	// # of read delays: 5
  // 0, 1, 1930, 1931, 1932
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 1928> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_1929() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_1930() {
		return f4;
	}

	inline hw_uint<16> peek_1931() {
		return f6;
	}

	inline hw_uint<16> peek_1932() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 1928
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1928 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_cache {
  // Reader addrs...
    // { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
    // { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
    // { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, 1 + stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
    // { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // # of banks: 1
  stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4_cache stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4;
};



inline void stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_write(hw_uint<16>& stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_3120_ld126, int stg9_to_gp_3120_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4.push(stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77);
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_66_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm142_0187_66 read pattern: { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm169_0251[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 32] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4.peek_1932();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_67_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm142_0187_67 read pattern: { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm169_0251[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 32] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4.peek_1931();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_68_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm142_0187_68 read pattern: { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, 1 + stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm169_0251[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 32] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_69_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_sm142_0187_69 read pattern: { stg10_update_0_sm142_0187[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + stg10_1, stg10_0] : 0 <= stg10_0 <= 1083 and 0 <= stg10_1 <= 1927 }
  // Read schedule : { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
  // Write schedule: { load_to_stg9_FIFO_buf124127_sm169_0251[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 32] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_merged_banks_4.peek_1930();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77;
  return 0;
}

// # of bundles = 2
// load_to_stg9_FIFO_buf124127_sm169_0251_write
//	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77
inline void stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_write_bundle_write(hw_uint<16>& load_to_stg9_FIFO_buf124127_sm169_0251_write, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_3120_ld126, int stg9_to_gp_3120_ld125, int dynamic_address) {
	hw_uint<16> stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_res = load_to_stg9_FIFO_buf124127_sm169_0251_write.extract<0, 15>();
	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_write(stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_77_res, stg9_FIFO_buf124, root, stg9_to_gp_3120_ld126, stg9_to_gp_3120_ld125, dynamic_address);
}

// stg10_update_0_sm142_0187_read
//	stg9_FIFO_buf124_stg10_update_0_sm142_0187_66
//	stg9_FIFO_buf124_stg10_update_0_sm142_0187_67
//	stg9_FIFO_buf124_stg10_update_0_sm142_0187_68
//	stg9_FIFO_buf124_stg10_update_0_sm142_0187_69
inline hw_uint<64> stg9_FIFO_buf124_stg10_update_0_sm142_0187_read_bundle_read(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg9_FIFO_buf124_stg10_update_0_sm142_0187_66
    // stg9_FIFO_buf124_stg10_update_0_sm142_0187_67
    // stg9_FIFO_buf124_stg10_update_0_sm142_0187_68
    // stg9_FIFO_buf124_stg10_update_0_sm142_0187_69

	hw_uint<64> result;
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_66_res = stg9_FIFO_buf124_stg10_update_0_sm142_0187_66_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<0, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm142_0187_66_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_67_res = stg9_FIFO_buf124_stg10_update_0_sm142_0187_67_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<16, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm142_0187_67_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_68_res = stg9_FIFO_buf124_stg10_update_0_sm142_0187_68_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<32, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm142_0187_68_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_sm142_0187_69_res = stg9_FIFO_buf124_stg10_update_0_sm142_0187_69_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<48, 64>(result, stg9_FIFO_buf124_stg10_update_0_sm142_0187_69_res);
	return result;
}

// Total re-use buffer capacity: 465120 bits
// Operation logic
inline void in_update_0_sm131_0267(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m__lp__lp_1_m_in_1__p__0_rp___p___m_15_rp___p__0_p_15_c______1_m_in_0__p__0_p_0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_1_m__lp__lp_1_m_in_1__p__0_rp___p___m_15_rp___p__0_p_15_c______1_m_in_0__p__0_p_0_value);
	// Produce: in
	in_in_update_0_sm131_0267_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_to_gp_203_sm135_0203(in_cache& in, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_to_gp_20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_1_m_in_ld1__p__0_rp__c____in_ld2_value = in_load_to_in_to_gp_203_sm135_0203_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_to_gp_20
	in_to_gp_20.write(in__lp_1_m_in_ld1__p__0_rp__c____in_ld2_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_0_in_ld2_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_to_gp_20) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_0_in_ld2__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_in_to_gp_203_sm135_0203[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949; in_update_0_sm131_0267[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
//   { load_to_in_to_gp_203_sm135_0203[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
// Condition for load_to_in_to_gp_203_sm135_0203(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { in_update_0_sm131_0267[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
// Condition for in_update_0_sm131_0267(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1094 and 0 <= i2 <= 1949 and 0 <= i3 <= 1 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1094; i1++) {
	    for (int i2 = 0; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_update_0_sm131_0267(in_off_chip /* buf name */, in, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_to_gp_203_sm135_0203(in /* buf name */, in_to_gp_20, 0, ((1*i1)), ((1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void jac9_1_update_0_sm147_0207(stg14_FIFO_buf60_cache& stg14_FIFO_buf60, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */jac9_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_FIFO_buf60
	auto stg14_FIFO_buf60_1_m__lp_1_m_jac9_1_1__p__0_rp___p__0_p_0_c_____1_m_jac9_1_0__p__0_p_0_value = stg14_FIFO_buf60_jac9_1_update_0_sm147_0207_read_bundle_read(stg14_FIFO_buf60/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jac9_1_generated_compute_unrolled_1(stg14_FIFO_buf60_1_m__lp_1_m_jac9_1_1__p__0_rp___p__0_p_0_c_____1_m_jac9_1_0__p__0_p_0_value);
	// Produce: jac9_1
	jac9_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg14_FIFO_buf6063_sm168_0249(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg14_to_gp_156, stg14_FIFO_buf60_cache& stg14_FIFO_buf60, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_to_gp_156
	auto stg14_to_gp_156__lp_1_m_stg14_to_gp_156_ld61__p__0_rp__c____stg14_to_gp_156_ld62_value = stg14_to_gp_156.read();
	// Produce: stg14_FIFO_buf60
	stg14_FIFO_buf60_load_to_stg14_FIFO_buf6063_sm168_0249_write_bundle_write(/* arg names */stg14_to_gp_156__lp_1_m_stg14_to_gp_156_ld61__p__0_rp__c____stg14_to_gp_156_ld62_value, stg14_FIFO_buf60, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_jac9_1_0_stg14_to_gp_156_ld62_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg14_to_gp_156, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jac9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_jac9_1_0_stg14_to_gp_156_ld62__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg14_FIFO_buf60_cache stg14_FIFO_buf60;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { jac9_1_update_0_sm147_0207[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 48] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_stg14_FIFO_buf6063_sm168_0249[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 47] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { jac9_1_update_0_sm147_0207[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 48] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for jac9_1_update_0_sm147_0207(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-30 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg14_FIFO_buf6063_sm168_0249[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 47] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_stg14_FIFO_buf6063_sm168_0249(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-30 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 15 <= i1 <= 1094 and 30 <= i2 <= 1949 and 47 <= i3 <= 48 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 15; i1 <= 1094; i1++) {
	    for (int i2 = 30; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg14_FIFO_buf6063_sm168_0249(stg14_to_gp_156 /* buf name */, stg14_FIFO_buf60, 0, ((-15 + 1*i1)), ((-30 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          jac9_1_update_0_sm147_0207(stg14_FIFO_buf60 /* buf name */, jac9_1, 0, ((-15 + 1*i1)), ((-30 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg3_update_0_sm133_0265(stg2_FIFO_buf68_cache& stg2_FIFO_buf68, stg3_cache& stg3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_FIFO_buf68
	auto stg2_FIFO_buf68_1_m__lp__lp_1_m_stg3_1__p__0_rp___p___m_11_rp___p___m_1_p_12_c______1_m_stg3_0__p__0_p_0_value = stg2_FIFO_buf68_stg3_update_0_sm133_0265_read_bundle_read(stg2_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_1_m__lp__lp_1_m_stg3_1__p__0_rp___p___m_11_rp___p___m_1_p_12_c______1_m_stg3_0__p__0_p_0_value);
	// Produce: stg3
	stg3_stg3_update_0_sm133_0265_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg3_to_gp_117275_sm176_0199(stg3_cache& stg3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg3_to_gp_1172, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3__lp_1_m_stg3_ld73__p__0_rp__c____stg3_ld74_value = stg3_load_to_stg3_to_gp_117275_sm176_0199_read_bundle_read(stg3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg3_to_gp_1172
	stg3_to_gp_1172.write(stg3__lp_1_m_stg3_ld73__p__0_rp__c____stg3_ld74_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg2_FIFO_buf6871_sm136_0177(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg2_to_gp_1064, stg2_FIFO_buf68_cache& stg2_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_to_gp_1064
	auto stg2_to_gp_1064__lp_1_m_stg2_to_gp_1064_ld69__p__0_rp__c____stg2_to_gp_1064_ld70_value = stg2_to_gp_1064.read();
	// Produce: stg2_FIFO_buf68
	stg2_FIFO_buf68_load_to_stg2_FIFO_buf6871_sm136_0177_write_bundle_write(/* arg names */stg2_to_gp_1064__lp_1_m_stg2_to_gp_1064_ld69__p__0_rp__c____stg2_to_gp_1064_ld70_value, stg2_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg2_to_gp_1064_ld70_stg3_0_stg3_ld74_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg2_to_gp_1064, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg3_to_gp_1172) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg2_to_gp_1064_ld70_stg3_0_stg3_ld74__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg2_FIFO_buf68_cache stg2_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg3_cache stg3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941; load_to_stg3_to_gp_117275_sm176_0199[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 13] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941; load_to_stg2_FIFO_buf6871_sm136_0177[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 11] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
//   { stg3_update_0_sm133_0265[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 12] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
// Condition for stg3_update_0_sm133_0265(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg3_to_gp_117275_sm176_0199[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 13] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
// Condition for load_to_stg3_to_gp_117275_sm176_0199(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg2_FIFO_buf6871_sm136_0177[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 11] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
// Condition for load_to_stg2_FIFO_buf6871_sm136_0177(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1094 and 8 <= i2 <= 1949 and 12 <= i3 <= 13; [0, i1, i2, 11] : 3 <= i1 <= 1094 and 6 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 3; i1 <= 1094; i1++) {
	    for (int i2 = 6; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg2_FIFO_buf6871_sm136_0177(stg2_to_gp_1064 /* buf name */, stg2_FIFO_buf68, 0, ((-3 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 8 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg3_update_0_sm133_0265(stg2_FIFO_buf68 /* buf name */, stg3, 0, ((-4 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 8 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_stg3_to_gp_117275_sm176_0199(stg3 /* buf name */, stg3_to_gp_1172, 0, ((-4 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg4_update_0_sm128_0269(stg3_FIFO_buf76_cache& stg3_FIFO_buf76, stg4_cache& stg4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_FIFO_buf76
	auto stg3_FIFO_buf76_1_m__lp__lp_1_m_stg4_1__p__0_rp___p___m_10_rp___p___m_1_p_11_c______1_m_stg4_0__p__0_p_0_value = stg3_FIFO_buf76_stg4_update_0_sm128_0269_read_bundle_read(stg3_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_1_m__lp__lp_1_m_stg4_1__p__0_rp___p___m_10_rp___p___m_1_p_11_c______1_m_stg4_0__p__0_p_0_value);
	// Produce: stg4
	stg4_stg4_update_0_sm128_0269_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg3_FIFO_buf7679_sm175_0197(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg3_to_gp_1172, stg3_FIFO_buf76_cache& stg3_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_to_gp_1172
	auto stg3_to_gp_1172__lp_1_m_stg3_to_gp_1172_ld77__p__0_rp__c____stg3_to_gp_1172_ld78_value = stg3_to_gp_1172.read();
	// Produce: stg3_FIFO_buf76
	stg3_FIFO_buf76_load_to_stg3_FIFO_buf7679_sm175_0197_write_bundle_write(/* arg names */stg3_to_gp_1172__lp_1_m_stg3_to_gp_1172_ld77__p__0_rp__c____stg3_to_gp_1172_ld78_value, stg3_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg4_to_gp_128083_sm170_0253(stg4_cache& stg4, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg4_to_gp_1280, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4__lp_1_m_stg4_ld81__p__0_rp__c____stg4_ld82_value = stg4_load_to_stg4_to_gp_128083_sm170_0253_read_bundle_read(stg4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg4_to_gp_1280
	stg4_to_gp_1280.write(stg4__lp_1_m_stg4_ld81__p__0_rp__c____stg4_ld82_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg3_to_gp_1172_ld78_stg4_0_stg4_ld82_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg3_to_gp_1172, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg4_to_gp_1280) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg3_to_gp_1172_ld78_stg4_0_stg4_ld82__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg3_FIFO_buf76_cache stg3_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg4_cache stg4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939; load_to_stg3_FIFO_buf7679_sm175_0197[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 14] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941; load_to_stg4_to_gp_128083_sm170_0253[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 16] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
//   { stg4_update_0_sm128_0269[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 15] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
// Condition for stg4_update_0_sm128_0269(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg3_FIFO_buf7679_sm175_0197[d0 = 0, d1, d2] -> [0, 4 + d1, 8 + d2, 14] : 0 <= d1 <= 1090 and 0 <= d2 <= 1941 }
// Condition for load_to_stg3_FIFO_buf7679_sm175_0197(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg4_to_gp_128083_sm170_0253[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 16] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
// Condition for load_to_stg4_to_gp_128083_sm170_0253(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 5 <= i1 <= 1094 and 10 <= i2 <= 1949 and 15 <= i3 <= 16; [0, i1, i2, 14] : 4 <= i1 <= 1094 and 8 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 4; i1 <= 1094; i1++) {
	    for (int i2 = 8; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg3_FIFO_buf7679_sm175_0197(stg3_to_gp_1172 /* buf name */, stg3_FIFO_buf76, 0, ((-4 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	          // { [i0, i1, i2] : -5 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-5 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg4_update_0_sm128_0269(stg3_FIFO_buf76 /* buf name */, stg4, 0, ((-5 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	          // { [i0, i1, i2] : -5 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-5 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_stg4_to_gp_128083_sm170_0253(stg4 /* buf name */, stg4_to_gp_1280, 0, ((-5 + 1*i1)), ((-10 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg4_FIFO_buf8487_sm153_0219(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg4_to_gp_1280, stg4_FIFO_buf84_cache& stg4_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_to_gp_1280
	auto stg4_to_gp_1280__lp_1_m_stg4_to_gp_1280_ld85__p__0_rp__c____stg4_to_gp_1280_ld86_value = stg4_to_gp_1280.read();
	// Produce: stg4_FIFO_buf84
	stg4_FIFO_buf84_load_to_stg4_FIFO_buf8487_sm153_0219_write_bundle_write(/* arg names */stg4_to_gp_1280__lp_1_m_stg4_to_gp_1280_ld85__p__0_rp__c____stg4_to_gp_1280_ld86_value, stg4_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0_sm130_0273(stg4_FIFO_buf84_cache& stg4_FIFO_buf84, stg5_cache& stg5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_FIFO_buf84
	auto stg4_FIFO_buf84_1_m__lp__lp_1_m_stg5_1__p__0_rp___p___m_9_rp___p___m_1_p_10_c______1_m_stg5_0__p__0_p_0_value = stg4_FIFO_buf84_stg5_update_0_sm130_0273_read_bundle_read(stg4_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_1_m__lp__lp_1_m_stg5_1__p__0_rp___p___m_9_rp___p___m_1_p_10_c______1_m_stg5_0__p__0_p_0_value);
	// Produce: stg5
	stg5_stg5_update_0_sm130_0273_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg5_to_gp_138891_sm154_0221(stg5_cache& stg5, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg5_to_gp_1388, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5__lp_1_m_stg5_ld89__p__0_rp__c____stg5_ld90_value = stg5_load_to_stg5_to_gp_138891_sm154_0221_read_bundle_read(stg5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg5_to_gp_1388
	stg5_to_gp_1388.write(stg5__lp_1_m_stg5_ld89__p__0_rp__c____stg5_ld90_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg4_to_gp_1280_ld86_stg5_0_stg5_ld90_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg4_to_gp_1280, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg5_to_gp_1388) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg4_to_gp_1280_ld86_stg5_0_stg5_ld90__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg4_FIFO_buf84_cache stg4_FIFO_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg5_cache stg5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg5_to_gp_138891_sm154_0221[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 19] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937; load_to_stg4_FIFO_buf8487_sm153_0219[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 17] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939; stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
//   { load_to_stg5_to_gp_138891_sm154_0221[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 19] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
// Condition for load_to_stg5_to_gp_138891_sm154_0221(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg4_FIFO_buf8487_sm153_0219[d0 = 0, d1, d2] -> [0, 5 + d1, 10 + d2, 17] : 0 <= d1 <= 1089 and 0 <= d2 <= 1939 }
// Condition for load_to_stg4_FIFO_buf8487_sm153_0219(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg5_update_0_sm130_0273[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 18] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
// Condition for stg5_update_0_sm130_0273(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1094 and 12 <= i2 <= 1949 and 18 <= i3 <= 19; [0, i1, i2, 17] : 5 <= i1 <= 1094 and 10 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 5; i1 <= 1094; i1++) {
	    for (int i2 = 10; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg4_FIFO_buf8487_sm153_0219(stg4_to_gp_1280 /* buf name */, stg4_FIFO_buf84, 0, ((-5 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 12 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg5_update_0_sm130_0273(stg4_FIFO_buf84 /* buf name */, stg5, 0, ((-6 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 12 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          load_to_stg5_to_gp_138891_sm154_0221(stg5 /* buf name */, stg5_to_gp_1388, 0, ((-6 + 1*i1)), ((-12 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg5_FIFO_buf9295_sm171_0255(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg5_to_gp_1388, stg5_FIFO_buf92_cache& stg5_FIFO_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_to_gp_1388
	auto stg5_to_gp_1388__lp_1_m_stg5_to_gp_1388_ld93__p__0_rp__c____stg5_to_gp_1388_ld94_value = stg5_to_gp_1388.read();
	// Produce: stg5_FIFO_buf92
	stg5_FIFO_buf92_load_to_stg5_FIFO_buf9295_sm171_0255_write_bundle_write(/* arg names */stg5_to_gp_1388__lp_1_m_stg5_to_gp_1388_ld93__p__0_rp__c____stg5_to_gp_1388_ld94_value, stg5_FIFO_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg6_to_gp_149699_sm172_0257(stg6_cache& stg6, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg6_to_gp_1496, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6__lp_1_m_stg6_ld97__p__0_rp__c____stg6_ld98_value = stg6_load_to_stg6_to_gp_149699_sm172_0257_read_bundle_read(stg6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg6_to_gp_1496
	stg6_to_gp_1496.write(stg6__lp_1_m_stg6_ld97__p__0_rp__c____stg6_ld98_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0_sm138_0179(stg5_FIFO_buf92_cache& stg5_FIFO_buf92, stg6_cache& stg6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_FIFO_buf92
	auto stg5_FIFO_buf92_1_m__lp__lp_1_m_stg6_1__p__0_rp___p___m_8_rp___p___m_1_p_9_c______1_m_stg6_0__p__0_p_0_value = stg5_FIFO_buf92_stg6_update_0_sm138_0179_read_bundle_read(stg5_FIFO_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_1_m__lp__lp_1_m_stg6_1__p__0_rp___p___m_8_rp___p___m_1_p_9_c______1_m_stg6_0__p__0_p_0_value);
	// Produce: stg6
	stg6_stg6_update_0_sm138_0179_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg5_to_gp_1388_ld94_stg6_0_stg6_ld98_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg5_to_gp_1388, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg6_to_gp_1496) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg5_to_gp_1388_ld94_stg6_0_stg6_ld98__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg5_FIFO_buf92_cache stg5_FIFO_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg6_cache stg6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg5_FIFO_buf9295_sm171_0255[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 20] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937; load_to_stg6_to_gp_149699_sm172_0257[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 22] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935; stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
//   { load_to_stg5_FIFO_buf9295_sm171_0255[d0 = 0, d1, d2] -> [0, 6 + d1, 12 + d2, 20] : 0 <= d1 <= 1088 and 0 <= d2 <= 1937 }
// Condition for load_to_stg5_FIFO_buf9295_sm171_0255(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg6_to_gp_149699_sm172_0257[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 22] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
// Condition for load_to_stg6_to_gp_149699_sm172_0257(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg6_update_0_sm138_0179[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 21] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
// Condition for stg6_update_0_sm138_0179(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 7 <= i1 <= 1094 and 14 <= i2 <= 1949 and 21 <= i3 <= 22; [0, i1, i2, 20] : 6 <= i1 <= 1094 and 12 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 1094; i1++) {
	    for (int i2 = 12; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg5_FIFO_buf9295_sm171_0255(stg5_to_gp_1388 /* buf name */, stg5_FIFO_buf92, 0, ((-6 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 14 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg6_update_0_sm138_0179(stg5_FIFO_buf92 /* buf name */, stg6, 0, ((-7 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 14 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_stg6_to_gp_149699_sm172_0257(stg6 /* buf name */, stg6_to_gp_1496, 0, ((-7 + 1*i1)), ((-14 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg6_FIFO_buf100103_sm157_0227(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg6_to_gp_1496, stg6_FIFO_buf100_cache& stg6_FIFO_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_to_gp_1496
	auto stg6_to_gp_1496__lp_1_m_stg6_to_gp_1496_ld101__p__0_rp__c____stg6_to_gp_1496_ld102_value = stg6_to_gp_1496.read();
	// Produce: stg6_FIFO_buf100
	stg6_FIFO_buf100_load_to_stg6_FIFO_buf100103_sm157_0227_write_bundle_write(/* arg names */stg6_to_gp_1496__lp_1_m_stg6_to_gp_1496_ld101__p__0_rp__c____stg6_to_gp_1496_ld102_value, stg6_FIFO_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0_sm139_0181(stg6_FIFO_buf100_cache& stg6_FIFO_buf100, stg7_cache& stg7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_FIFO_buf100
	auto stg6_FIFO_buf100_1_m__lp__lp_1_m_stg7_1__p__0_rp___p___m_7_rp___p___m_1_p_8_c______1_m_stg7_0__p__0_p_0_value = stg6_FIFO_buf100_stg7_update_0_sm139_0181_read_bundle_read(stg6_FIFO_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_1_m__lp__lp_1_m_stg7_1__p__0_rp___p___m_7_rp___p___m_1_p_8_c______1_m_stg7_0__p__0_p_0_value);
	// Produce: stg7
	stg7_stg7_update_0_sm139_0181_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg7_to_gp_15104107_sm159_0231(stg7_cache& stg7, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg7_to_gp_15104, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7__lp_1_m_stg7_ld105__p__0_rp__c____stg7_ld106_value = stg7_load_to_stg7_to_gp_15104107_sm159_0231_read_bundle_read(stg7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg7_to_gp_15104
	stg7_to_gp_15104.write(stg7__lp_1_m_stg7_ld105__p__0_rp__c____stg7_ld106_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg6_to_gp_1496_ld102_stg7_0_stg7_ld106_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg6_to_gp_1496, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg7_to_gp_15104) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg6_to_gp_1496_ld102_stg7_0_stg7_ld106__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg6_FIFO_buf100_cache stg6_FIFO_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg7_cache stg7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg6_FIFO_buf100103_sm157_0227[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 23] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935; load_to_stg7_to_gp_15104107_sm159_0231[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 25] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933; stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
//   { load_to_stg6_FIFO_buf100103_sm157_0227[d0 = 0, d1, d2] -> [0, 7 + d1, 14 + d2, 23] : 0 <= d1 <= 1087 and 0 <= d2 <= 1935 }
// Condition for load_to_stg6_FIFO_buf100103_sm157_0227(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg7_to_gp_15104107_sm159_0231[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 25] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
// Condition for load_to_stg7_to_gp_15104107_sm159_0231(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-16 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg7_update_0_sm139_0181[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 24] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
// Condition for stg7_update_0_sm139_0181(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-16 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1094 and 16 <= i2 <= 1949 and 24 <= i3 <= 25; [0, i1, i2, 23] : 7 <= i1 <= 1094 and 14 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 7; i1 <= 1094; i1++) {
	    for (int i2 = 14; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg6_FIFO_buf100103_sm157_0227(stg6_to_gp_1496 /* buf name */, stg6_FIFO_buf100, 0, ((-7 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 16 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 16 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -16 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-16 + 1*i2)) >= 0)))) {
	          stg7_update_0_sm139_0181(stg6_FIFO_buf100 /* buf name */, stg7, 0, ((-8 + 1*i1)), ((-16 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 16 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 16 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -16 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-16 + 1*i2)) >= 0)))) {
	          load_to_stg7_to_gp_15104107_sm159_0231(stg7 /* buf name */, stg7_to_gp_15104, 0, ((-8 + 1*i1)), ((-16 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg7_FIFO_buf108111_sm158_0229(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg7_to_gp_15104, stg7_FIFO_buf108_cache& stg7_FIFO_buf108, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_to_gp_15104
	auto stg7_to_gp_15104__lp_1_m_stg7_to_gp_15104_ld109__p__0_rp__c____stg7_to_gp_15104_ld110_value = stg7_to_gp_15104.read();
	// Produce: stg7_FIFO_buf108
	stg7_FIFO_buf108_load_to_stg7_FIFO_buf108111_sm158_0229_write_bundle_write(/* arg names */stg7_to_gp_15104__lp_1_m_stg7_to_gp_15104_ld109__p__0_rp__c____stg7_to_gp_15104_ld110_value, stg7_FIFO_buf108, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0_sm140_0183(stg7_FIFO_buf108_cache& stg7_FIFO_buf108, stg8_cache& stg8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_FIFO_buf108
	auto stg7_FIFO_buf108_1_m__lp__lp_1_m_stg8_1__p__0_rp___p___m_6_rp___p___m_1_p_7_c______1_m_stg8_0__p__0_p_0_value = stg7_FIFO_buf108_stg8_update_0_sm140_0183_read_bundle_read(stg7_FIFO_buf108/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_1_m__lp__lp_1_m_stg8_1__p__0_rp___p___m_6_rp___p___m_1_p_7_c______1_m_stg8_0__p__0_p_0_value);
	// Produce: stg8
	stg8_stg8_update_0_sm140_0183_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg8_to_gp_16112115_sm161_0235(stg8_cache& stg8, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg8_to_gp_16112, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8__lp_1_m_stg8_ld113__p__0_rp__c____stg8_ld114_value = stg8_load_to_stg8_to_gp_16112115_sm161_0235_read_bundle_read(stg8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg8_to_gp_16112
	stg8_to_gp_16112.write(stg8__lp_1_m_stg8_ld113__p__0_rp__c____stg8_ld114_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg7_to_gp_15104_ld110_stg8_0_stg8_ld114_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg7_to_gp_15104, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg8_to_gp_16112) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg7_to_gp_15104_ld110_stg8_0_stg8_ld114__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg7_FIFO_buf108_cache stg7_FIFO_buf108;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg8_cache stg8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg7_FIFO_buf108111_sm158_0229[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 26] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933; load_to_stg8_to_gp_16112115_sm161_0235[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 28] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931; stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
//   { load_to_stg7_FIFO_buf108111_sm158_0229[d0 = 0, d1, d2] -> [0, 8 + d1, 16 + d2, 26] : 0 <= d1 <= 1086 and 0 <= d2 <= 1933 }
// Condition for load_to_stg7_FIFO_buf108111_sm158_0229(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-16 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg8_to_gp_16112115_sm161_0235[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 28] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
// Condition for load_to_stg8_to_gp_16112115_sm161_0235(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-18 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg8_update_0_sm140_0183[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 27] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
// Condition for stg8_update_0_sm140_0183(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-18 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 9 <= i1 <= 1094 and 18 <= i2 <= 1949 and 27 <= i3 <= 28; [0, i1, i2, 26] : 8 <= i1 <= 1094 and 16 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 1094; i1++) {
	    for (int i2 = 16; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg7_FIFO_buf108111_sm158_0229(stg7_to_gp_15104 /* buf name */, stg7_FIFO_buf108, 0, ((-8 + 1*i1)), ((-16 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 18 }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 18 }
	          // { [i0, i1, i2] : -9 + i1 >= 0 }
	          // { [i0, i1, i2] : -18 + i2 >= 0 }
	        if ((((((-9 + 1*i1)) >= 0) && (((-18 + 1*i2)) >= 0)))) {
	          stg8_update_0_sm140_0183(stg7_FIFO_buf108 /* buf name */, stg8, 0, ((-9 + 1*i1)), ((-18 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 18 }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 18 }
	          // { [i0, i1, i2] : -9 + i1 >= 0 }
	          // { [i0, i1, i2] : -18 + i2 >= 0 }
	        if ((((((-9 + 1*i1)) >= 0) && (((-18 + 1*i2)) >= 0)))) {
	          load_to_stg8_to_gp_16112115_sm161_0235(stg8 /* buf name */, stg8_to_gp_16112, 0, ((-9 + 1*i1)), ((-18 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg8_FIFO_buf116119_sm160_0233(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg8_to_gp_16112, stg8_FIFO_buf116_cache& stg8_FIFO_buf116, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_to_gp_16112
	auto stg8_to_gp_16112__lp_1_m_stg8_to_gp_16112_ld117__p__0_rp__c____stg8_to_gp_16112_ld118_value = stg8_to_gp_16112.read();
	// Produce: stg8_FIFO_buf116
	stg8_FIFO_buf116_load_to_stg8_FIFO_buf116119_sm160_0233_write_bundle_write(/* arg names */stg8_to_gp_16112__lp_1_m_stg8_to_gp_16112_ld117__p__0_rp__c____stg8_to_gp_16112_ld118_value, stg8_FIFO_buf116, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0_sm141_0185(stg8_FIFO_buf116_cache& stg8_FIFO_buf116, stg9_cache& stg9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_FIFO_buf116
	auto stg8_FIFO_buf116_1_m__lp__lp_1_m_stg9_1__p__0_rp___p___m_5_rp___p___m_1_p_6_c______1_m_stg9_0__p__0_p_0_value = stg8_FIFO_buf116_stg9_update_0_sm141_0185_read_bundle_read(stg8_FIFO_buf116/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_1_m__lp__lp_1_m_stg9_1__p__0_rp___p___m_5_rp___p___m_1_p_6_c______1_m_stg9_0__p__0_p_0_value);
	// Produce: stg9
	stg9_stg9_update_0_sm141_0185_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg9_to_gp_3120123_sm162_0237(stg9_cache& stg9, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg9_to_gp_3120, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9__lp_1_m_stg9_ld121__p__0_rp__c____stg9_ld122_value = stg9_load_to_stg9_to_gp_3120123_sm162_0237_read_bundle_read(stg9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg9_to_gp_3120
	stg9_to_gp_3120.write(stg9__lp_1_m_stg9_ld121__p__0_rp__c____stg9_ld122_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg8_to_gp_16112_ld118_stg9_0_stg9_ld122_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg8_to_gp_16112, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg9_to_gp_3120) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg8_to_gp_16112_ld118_stg9_0_stg9_ld122__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg8_FIFO_buf116_cache stg8_FIFO_buf116;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_cache stg9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg9_to_gp_3120123_sm162_0237[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 31] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929; load_to_stg8_FIFO_buf116119_sm160_0233[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 29] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931; stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
//   { load_to_stg9_to_gp_3120123_sm162_0237[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 31] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
// Condition for load_to_stg9_to_gp_3120123_sm162_0237(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-20 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg8_FIFO_buf116119_sm160_0233[d0 = 0, d1, d2] -> [0, 9 + d1, 18 + d2, 29] : 0 <= d1 <= 1085 and 0 <= d2 <= 1931 }
// Condition for load_to_stg8_FIFO_buf116119_sm160_0233(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-18 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg9_update_0_sm141_0185[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 30] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
// Condition for stg9_update_0_sm141_0185(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-20 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 10 <= i1 <= 1094 and 20 <= i2 <= 1949 and 30 <= i3 <= 31; [0, i1, i2, 29] : 9 <= i1 <= 1094 and 18 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 9; i1 <= 1094; i1++) {
	    for (int i2 = 18; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg8_FIFO_buf116119_sm160_0233(stg8_to_gp_16112 /* buf name */, stg8_FIFO_buf116, 0, ((-9 + 1*i1)), ((-18 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 20 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 20 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -20 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-20 + 1*i2)) >= 0)))) {
	          stg9_update_0_sm141_0185(stg8_FIFO_buf116 /* buf name */, stg9, 0, ((-10 + 1*i1)), ((-20 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 20 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 20 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -20 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-20 + 1*i2)) >= 0)))) {
	          load_to_stg9_to_gp_3120123_sm162_0237(stg9 /* buf name */, stg9_to_gp_3120, 0, ((-10 + 1*i1)), ((-20 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in_FIFO_buf47_sm163_0239(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_to_gp_20, in_FIFO_buf4_cache& in_FIFO_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_to_gp_20
	auto in_to_gp_20__lp_1_m_in_to_gp_20_ld5__p__0_rp__c____in_to_gp_20_ld6_value = in_to_gp_20.read();
	// Produce: in_FIFO_buf4
	in_FIFO_buf4_load_to_in_FIFO_buf47_sm163_0239_write_bundle_write(/* arg names */in_to_gp_20__lp_1_m_in_to_gp_20_ld5__p__0_rp__c____in_to_gp_20_ld6_value, in_FIFO_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0_sm134_0263(in_FIFO_buf4_cache& in_FIFO_buf4, stg0_cache& stg0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_FIFO_buf4
	auto in_FIFO_buf4_1_m__lp__lp_1_m_stg0_1__p__0_rp___p___m_14_rp___p___m_1_p_15_c______1_m_stg0_0__p__0_p_0_value = in_FIFO_buf4_stg0_update_0_sm134_0263_read_bundle_read(in_FIFO_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_FIFO_buf4_1_m__lp__lp_1_m_stg0_1__p__0_rp___p___m_14_rp___p___m_1_p_15_c______1_m_stg0_0__p__0_p_0_value);
	// Produce: stg0
	stg0_stg0_update_0_sm134_0263_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg0_to_gp_8811_sm164_0241(stg0_cache& stg0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg0_to_gp_88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0__lp_1_m_stg0_ld9__p__0_rp__c____stg0_ld10_value = stg0_load_to_stg0_to_gp_8811_sm164_0241_read_bundle_read(stg0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg0_to_gp_88
	stg0_to_gp_88.write(stg0__lp_1_m_stg0_ld9__p__0_rp__c____stg0_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_20_ld6_stg0_0_stg0_ld10_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_to_gp_20, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg0_to_gp_88) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_to_gp_20_ld6_stg0_0_stg0_ld10__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf4_cache in_FIFO_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg0_to_gp_8811_sm164_0241[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 4] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947; load_to_in_FIFO_buf47_sm163_0239[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949; stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
//   { load_to_stg0_to_gp_8811_sm164_0241[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 4] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
// Condition for load_to_stg0_to_gp_8811_sm164_0241(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_in_FIFO_buf47_sm163_0239[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1094 and 0 <= d2 <= 1949 }
// Condition for load_to_in_FIFO_buf47_sm163_0239(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg0_update_0_sm134_0263[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 3] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
// Condition for stg0_update_0_sm134_0263(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 < i1 <= 1094 and 2 <= i2 <= 1949 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1094 and 0 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1094; i1++) {
	    for (int i2 = 0; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_FIFO_buf47_sm163_0239(in_to_gp_20 /* buf name */, in_FIFO_buf4, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 2 }
	          // { [i0, i1, i2] : -1 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg0_update_0_sm134_0263(in_FIFO_buf4 /* buf name */, stg0, 0, ((-1 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 2 }
	          // { [i0, i1, i2] : -1 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-1 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_stg0_to_gp_8811_sm164_0241(stg0 /* buf name */, stg0_to_gp_88, 0, ((-1 + 1*i1)), ((-2 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg9_FIFO_buf124127_sm169_0251(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg9_to_gp_3120, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_to_gp_3120
	auto stg9_to_gp_3120__lp_1_m_stg9_to_gp_3120_ld125__p__0_rp__c____stg9_to_gp_3120_ld126_value = stg9_to_gp_3120.read();
	// Produce: stg9_FIFO_buf124
	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_sm169_0251_write_bundle_write(/* arg names */stg9_to_gp_3120__lp_1_m_stg9_to_gp_3120_ld125__p__0_rp__c____stg9_to_gp_3120_ld126_value, stg9_FIFO_buf124, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_update_0_sm142_0187(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, stg10_cache& stg10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_FIFO_buf124
	auto stg9_FIFO_buf124_1_m__lp__lp_1_m_stg10_1__p__0_rp___p___m_4_rp___p___m_1_p_5_c______1_m_stg10_0__p__0_p_0_value = stg9_FIFO_buf124_stg10_update_0_sm142_0187_read_bundle_read(stg9_FIFO_buf124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_1_m__lp__lp_1_m_stg10_1__p__0_rp___p___m_4_rp___p___m_1_p_5_c______1_m_stg10_0__p__0_p_0_value);
	// Produce: stg10
	stg10_stg10_update_0_sm142_0187_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg10_to_gp_42427_sm137_0195(stg10_cache& stg10, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg10_to_gp_424, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10__lp_1_m_stg10_ld25__p__0_rp__c____stg10_ld26_value = stg10_load_to_stg10_to_gp_42427_sm137_0195_read_bundle_read(stg10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg10_to_gp_424
	stg10_to_gp_424.write(stg10__lp_1_m_stg10_ld25__p__0_rp__c____stg10_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_0_stg10_ld26_stg9_to_gp_3120_ld126_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg9_to_gp_3120, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg10_to_gp_424) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_0_stg10_ld26_stg9_to_gp_3120_ld126__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_cache stg10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_FIFO_buf124_cache stg9_FIFO_buf124;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927; load_to_stg9_FIFO_buf124127_sm169_0251[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 32] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929; load_to_stg10_to_gp_42427_sm137_0195[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 34] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
//   { stg10_update_0_sm142_0187[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 33] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
// Condition for stg10_update_0_sm142_0187(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-22 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg9_FIFO_buf124127_sm169_0251[d0 = 0, d1, d2] -> [0, 10 + d1, 20 + d2, 32] : 0 <= d1 <= 1084 and 0 <= d2 <= 1929 }
// Condition for load_to_stg9_FIFO_buf124127_sm169_0251(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-20 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg10_to_gp_42427_sm137_0195[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 34] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
// Condition for load_to_stg10_to_gp_42427_sm137_0195(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-22 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 11 <= i1 <= 1094 and 22 <= i2 <= 1949 and 33 <= i3 <= 34; [0, i1, i2, 32] : 10 <= i1 <= 1094 and 20 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 1094; i1++) {
	    for (int i2 = 20; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg9_FIFO_buf124127_sm169_0251(stg9_to_gp_3120 /* buf name */, stg9_FIFO_buf124, 0, ((-10 + 1*i1)), ((-20 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 22 }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 22 }
	          // { [i0, i1, i2] : -11 + i1 >= 0 }
	          // { [i0, i1, i2] : -22 + i2 >= 0 }
	        if ((((((-11 + 1*i1)) >= 0) && (((-22 + 1*i2)) >= 0)))) {
	          stg10_update_0_sm142_0187(stg9_FIFO_buf124 /* buf name */, stg10, 0, ((-11 + 1*i1)), ((-22 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 22 }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 22 }
	          // { [i0, i1, i2] : -11 + i1 >= 0 }
	          // { [i0, i1, i2] : -22 + i2 >= 0 }
	        if ((((((-11 + 1*i1)) >= 0) && (((-22 + 1*i2)) >= 0)))) {
	          load_to_stg10_to_gp_42427_sm137_0195(stg10 /* buf name */, stg10_to_gp_424, 0, ((-11 + 1*i1)), ((-22 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg11_update_0_sm143_0189(stg10_FIFO_buf28_cache& stg10_FIFO_buf28, stg11_cache& stg11, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_FIFO_buf28
	auto stg10_FIFO_buf28_1_m__lp__lp_1_m_stg11_1__p__0_rp___p___m_3_rp___p___m_1_p_4_c______1_m_stg11_0__p__0_p_0_value = stg10_FIFO_buf28_stg11_update_0_sm143_0189_read_bundle_read(stg10_FIFO_buf28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_1_m__lp__lp_1_m_stg11_1__p__0_rp___p___m_3_rp___p___m_1_p_4_c______1_m_stg11_0__p__0_p_0_value);
	// Produce: stg11
	stg11_stg11_update_0_sm143_0189_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg10_FIFO_buf2831_sm152_0217(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg10_to_gp_424, stg10_FIFO_buf28_cache& stg10_FIFO_buf28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_to_gp_424
	auto stg10_to_gp_424__lp_1_m_stg10_to_gp_424_ld29__p__0_rp__c____stg10_to_gp_424_ld30_value = stg10_to_gp_424.read();
	// Produce: stg10_FIFO_buf28
	stg10_FIFO_buf28_load_to_stg10_FIFO_buf2831_sm152_0217_write_bundle_write(/* arg names */stg10_to_gp_424__lp_1_m_stg10_to_gp_424_ld29__p__0_rp__c____stg10_to_gp_424_ld30_value, stg10_FIFO_buf28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg11_to_gp_53235_sm148_0209(stg11_cache& stg11, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg11_to_gp_532, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11__lp_1_m_stg11_ld33__p__0_rp__c____stg11_ld34_value = stg11_load_to_stg11_to_gp_53235_sm148_0209_read_bundle_read(stg11/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg11_to_gp_532
	stg11_to_gp_532.write(stg11__lp_1_m_stg11_ld33__p__0_rp__c____stg11_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_to_gp_424_ld30_stg11_0_stg11_ld34_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg10_to_gp_424, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg11_to_gp_532) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_to_gp_424_ld30_stg11_0_stg11_ld34__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_FIFO_buf28_cache stg10_FIFO_buf28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg11_cache stg11;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg11_to_gp_53235_sm148_0209[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 37] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925; stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925; load_to_stg10_FIFO_buf2831_sm152_0217[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 35] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
//   { load_to_stg11_to_gp_53235_sm148_0209[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 37] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
// Condition for load_to_stg11_to_gp_53235_sm148_0209(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-24 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg11_update_0_sm143_0189[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 36] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
// Condition for stg11_update_0_sm143_0189(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-24 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg10_FIFO_buf2831_sm152_0217[d0 = 0, d1, d2] -> [0, 11 + d1, 22 + d2, 35] : 0 <= d1 <= 1083 and 0 <= d2 <= 1927 }
// Condition for load_to_stg10_FIFO_buf2831_sm152_0217(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-22 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 12 <= i1 <= 1094 and 24 <= i2 <= 1949 and 36 <= i3 <= 37; [0, i1, i2, 35] : 11 <= i1 <= 1094 and 22 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 11; i1 <= 1094; i1++) {
	    for (int i2 = 22; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg10_FIFO_buf2831_sm152_0217(stg10_to_gp_424 /* buf name */, stg10_FIFO_buf28, 0, ((-11 + 1*i1)), ((-22 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 24 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 24 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -24 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-24 + 1*i2)) >= 0)))) {
	          stg11_update_0_sm143_0189(stg10_FIFO_buf28 /* buf name */, stg11, 0, ((-12 + 1*i1)), ((-24 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 24 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 24 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -24 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-24 + 1*i2)) >= 0)))) {
	          load_to_stg11_to_gp_53235_sm148_0209(stg11 /* buf name */, stg11_to_gp_532, 0, ((-12 + 1*i1)), ((-24 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg11_FIFO_buf3639_sm149_0211(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg11_to_gp_532, stg11_FIFO_buf36_cache& stg11_FIFO_buf36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_to_gp_532
	auto stg11_to_gp_532__lp_1_m_stg11_to_gp_532_ld37__p__0_rp__c____stg11_to_gp_532_ld38_value = stg11_to_gp_532.read();
	// Produce: stg11_FIFO_buf36
	stg11_FIFO_buf36_load_to_stg11_FIFO_buf3639_sm149_0211_write_bundle_write(/* arg names */stg11_to_gp_532__lp_1_m_stg11_to_gp_532_ld37__p__0_rp__c____stg11_to_gp_532_ld38_value, stg11_FIFO_buf36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_update_0_sm144_0191(stg11_FIFO_buf36_cache& stg11_FIFO_buf36, stg12_cache& stg12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_FIFO_buf36
	auto stg11_FIFO_buf36_1_m__lp__lp_1_m_stg12_1__p__0_rp___p___m_2_rp___p___m_1_p_3_c______1_m_stg12_0__p__0_p_0_value = stg11_FIFO_buf36_stg12_update_0_sm144_0191_read_bundle_read(stg11_FIFO_buf36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_1_m__lp__lp_1_m_stg12_1__p__0_rp___p___m_2_rp___p___m_1_p_3_c______1_m_stg12_0__p__0_p_0_value);
	// Produce: stg12
	stg12_stg12_update_0_sm144_0191_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg12_to_gp_64043_sm150_0213(stg12_cache& stg12, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg12_to_gp_640, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12__lp_1_m_stg12_ld41__p__0_rp__c____stg12_ld42_value = stg12_load_to_stg12_to_gp_64043_sm150_0213_read_bundle_read(stg12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg12_to_gp_640
	stg12_to_gp_640.write(stg12__lp_1_m_stg12_ld41__p__0_rp__c____stg12_ld42_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg11_to_gp_532_ld38_stg12_0_stg12_ld42_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg11_to_gp_532, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg12_to_gp_640) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg11_to_gp_532_ld38_stg12_0_stg12_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg11_FIFO_buf36_cache stg11_FIFO_buf36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg12_cache stg12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg11_FIFO_buf3639_sm149_0211[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 38] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925; stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923; load_to_stg12_to_gp_64043_sm150_0213[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 40] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
//   { load_to_stg11_FIFO_buf3639_sm149_0211[d0 = 0, d1, d2] -> [0, 12 + d1, 24 + d2, 38] : 0 <= d1 <= 1082 and 0 <= d2 <= 1925 }
// Condition for load_to_stg11_FIFO_buf3639_sm149_0211(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-24 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg12_update_0_sm144_0191[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 39] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
// Condition for stg12_update_0_sm144_0191(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-26 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg12_to_gp_64043_sm150_0213[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 40] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
// Condition for load_to_stg12_to_gp_64043_sm150_0213(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-26 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 13 <= i1 <= 1094 and 26 <= i2 <= 1949 and 39 <= i3 <= 40; [0, i1, i2, 38] : 12 <= i1 <= 1094 and 24 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 12; i1 <= 1094; i1++) {
	    for (int i2 = 24; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg11_FIFO_buf3639_sm149_0211(stg11_to_gp_532 /* buf name */, stg11_FIFO_buf36, 0, ((-12 + 1*i1)), ((-24 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 26 }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 26 }
	          // { [i0, i1, i2] : -13 + i1 >= 0 }
	          // { [i0, i1, i2] : -26 + i2 >= 0 }
	        if ((((((-13 + 1*i1)) >= 0) && (((-26 + 1*i2)) >= 0)))) {
	          stg12_update_0_sm144_0191(stg11_FIFO_buf36 /* buf name */, stg12, 0, ((-13 + 1*i1)), ((-26 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 26 }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 26 }
	          // { [i0, i1, i2] : -13 + i1 >= 0 }
	          // { [i0, i1, i2] : -26 + i2 >= 0 }
	        if ((((((-13 + 1*i1)) >= 0) && (((-26 + 1*i2)) >= 0)))) {
	          load_to_stg12_to_gp_64043_sm150_0213(stg12 /* buf name */, stg12_to_gp_640, 0, ((-13 + 1*i1)), ((-26 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg12_FIFO_buf4447_sm151_0215(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg12_to_gp_640, stg12_FIFO_buf44_cache& stg12_FIFO_buf44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_to_gp_640
	auto stg12_to_gp_640__lp_1_m_stg12_to_gp_640_ld45__p__0_rp__c____stg12_to_gp_640_ld46_value = stg12_to_gp_640.read();
	// Produce: stg12_FIFO_buf44
	stg12_FIFO_buf44_load_to_stg12_FIFO_buf4447_sm151_0215_write_bundle_write(/* arg names */stg12_to_gp_640__lp_1_m_stg12_to_gp_640_ld45__p__0_rp__c____stg12_to_gp_640_ld46_value, stg12_FIFO_buf44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_update_0_sm145_0193(stg12_FIFO_buf44_cache& stg12_FIFO_buf44, stg13_cache& stg13, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_FIFO_buf44
	auto stg12_FIFO_buf44_1_m__lp__lp_1_m_stg13_1__p__0_rp___p___m_1_rp___p___m_1_p_2_c______1_m_stg13_0__p__0_p_0_value = stg12_FIFO_buf44_stg13_update_0_sm145_0193_read_bundle_read(stg12_FIFO_buf44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_1_m__lp__lp_1_m_stg13_1__p__0_rp___p___m_1_rp___p___m_1_p_2_c______1_m_stg13_0__p__0_p_0_value);
	// Produce: stg13
	stg13_stg13_update_0_sm145_0193_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg13_to_gp_74851_sm165_0243(stg13_cache& stg13, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg13_to_gp_748, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13__lp_1_m_stg13_ld49__p__0_rp__c____stg13_ld50_value = stg13_load_to_stg13_to_gp_74851_sm165_0243_read_bundle_read(stg13/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg13_to_gp_748
	stg13_to_gp_748.write(stg13__lp_1_m_stg13_ld49__p__0_rp__c____stg13_ld50_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg12_to_gp_640_ld46_stg13_0_stg13_ld50_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg12_to_gp_640, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg13_to_gp_748) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg12_to_gp_640_ld46_stg13_0_stg13_ld50__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg12_FIFO_buf44_cache stg12_FIFO_buf44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg13_cache stg13;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg13_to_gp_74851_sm165_0243[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 43] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921; load_to_stg12_FIFO_buf4447_sm151_0215[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 41] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923; stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
//   { load_to_stg13_to_gp_74851_sm165_0243[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 43] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
// Condition for load_to_stg13_to_gp_74851_sm165_0243(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-28 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg12_FIFO_buf4447_sm151_0215[d0 = 0, d1, d2] -> [0, 13 + d1, 26 + d2, 41] : 0 <= d1 <= 1081 and 0 <= d2 <= 1923 }
// Condition for load_to_stg12_FIFO_buf4447_sm151_0215(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-26 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg13_update_0_sm145_0193[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 42] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
// Condition for stg13_update_0_sm145_0193(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-28 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 1094 and 28 <= i2 <= 1949 and 42 <= i3 <= 43; [0, i1, i2, 41] : 13 <= i1 <= 1094 and 26 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 13; i1 <= 1094; i1++) {
	    for (int i2 = 26; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg12_FIFO_buf4447_sm151_0215(stg12_to_gp_640 /* buf name */, stg12_FIFO_buf44, 0, ((-13 + 1*i1)), ((-26 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 28 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 28 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -28 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-28 + 1*i2)) >= 0)))) {
	          stg13_update_0_sm145_0193(stg12_FIFO_buf44 /* buf name */, stg13, 0, ((-14 + 1*i1)), ((-28 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 28 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 28 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -28 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-28 + 1*i2)) >= 0)))) {
	          load_to_stg13_to_gp_74851_sm165_0243(stg13 /* buf name */, stg13_to_gp_748, 0, ((-14 + 1*i1)), ((-28 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg13_FIFO_buf5255_sm166_0245(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg13_to_gp_748, stg13_FIFO_buf52_cache& stg13_FIFO_buf52, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_to_gp_748
	auto stg13_to_gp_748__lp_1_m_stg13_to_gp_748_ld53__p__0_rp__c____stg13_to_gp_748_ld54_value = stg13_to_gp_748.read();
	// Produce: stg13_FIFO_buf52
	stg13_FIFO_buf52_load_to_stg13_FIFO_buf5255_sm166_0245_write_bundle_write(/* arg names */stg13_to_gp_748__lp_1_m_stg13_to_gp_748_ld53__p__0_rp__c____stg13_to_gp_748_ld54_value, stg13_FIFO_buf52, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_update_0_sm146_0205(stg13_FIFO_buf52_cache& stg13_FIFO_buf52, stg14_cache& stg14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_FIFO_buf52
	auto stg13_FIFO_buf52_1_m__lp_1_m_stg14_1__p__0_rp___p___m_1_p_1_c_____1_m_stg14_0__p__0_p_0_value = stg13_FIFO_buf52_stg14_update_0_sm146_0205_read_bundle_read(stg13_FIFO_buf52/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_1_m__lp_1_m_stg14_1__p__0_rp___p___m_1_p_1_c_____1_m_stg14_0__p__0_p_0_value);
	// Produce: stg14
	stg14_stg14_update_0_sm146_0205_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg14_to_gp_15659_sm167_0247(stg14_cache& stg14, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg14_to_gp_156, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14__lp_1_m_stg14_ld57__p__0_rp__c____stg14_ld58_value = stg14_load_to_stg14_to_gp_15659_sm167_0247_read_bundle_read(stg14/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg14_to_gp_156
	stg14_to_gp_156.write(stg14__lp_1_m_stg14_ld57__p__0_rp__c____stg14_ld58_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg13_to_gp_748_ld54_stg14_0_stg14_ld58_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg13_to_gp_748, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg14_to_gp_156) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg13_to_gp_748_ld54_stg14_0_stg14_ld58__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg13_FIFO_buf52_cache stg13_FIFO_buf52;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg14_cache stg14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg13_FIFO_buf5255_sm166_0245[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 44] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921; stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919; load_to_stg14_to_gp_15659_sm167_0247[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 46] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
//   { load_to_stg13_FIFO_buf5255_sm166_0245[d0 = 0, d1, d2] -> [0, 14 + d1, 28 + d2, 44] : 0 <= d1 <= 1080 and 0 <= d2 <= 1921 }
// Condition for load_to_stg13_FIFO_buf5255_sm166_0245(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-28 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg14_update_0_sm146_0205[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 45] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for stg14_update_0_sm146_0205(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-30 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg14_to_gp_15659_sm167_0247[d0 = 0, d1, d2] -> [0, 15 + d1, 30 + d2, 46] : 0 <= d1 <= 1079 and 0 <= d2 <= 1919 }
// Condition for load_to_stg14_to_gp_15659_sm167_0247(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-30 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 15 <= i1 <= 1094 and 30 <= i2 <= 1949 and 45 <= i3 <= 46; [0, i1, i2, 44] : 14 <= i1 <= 1094 and 28 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 1094; i1++) {
	    for (int i2 = 28; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg13_FIFO_buf5255_sm166_0245(stg13_to_gp_748 /* buf name */, stg13_FIFO_buf52, 0, ((-14 + 1*i1)), ((-28 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	          // { [i0, i1, i2] : -15 + i1 >= 0 }
	          // { [i0, i1, i2] : -30 + i2 >= 0 }
	        if ((((((-15 + 1*i1)) >= 0) && (((-30 + 1*i2)) >= 0)))) {
	          stg14_update_0_sm146_0205(stg13_FIFO_buf52 /* buf name */, stg14, 0, ((-15 + 1*i1)), ((-30 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 30 }
	          // { [i0, i1, i2] : -15 + i1 >= 0 }
	          // { [i0, i1, i2] : -30 + i2 >= 0 }
	        if ((((((-15 + 1*i1)) >= 0) && (((-30 + 1*i2)) >= 0)))) {
	          load_to_stg14_to_gp_15659_sm167_0247(stg14 /* buf name */, stg14_to_gp_156, 0, ((-15 + 1*i1)), ((-30 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg0_FIFO_buf1215_sm173_0259(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg0_to_gp_88, stg0_FIFO_buf12_cache& stg0_FIFO_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_to_gp_88
	auto stg0_to_gp_88__lp_1_m_stg0_to_gp_88_ld13__p__0_rp__c____stg0_to_gp_88_ld14_value = stg0_to_gp_88.read();
	// Produce: stg0_FIFO_buf12
	stg0_FIFO_buf12_load_to_stg0_FIFO_buf1215_sm173_0259_write_bundle_write(/* arg names */stg0_to_gp_88__lp_1_m_stg0_to_gp_88_ld13__p__0_rp__c____stg0_to_gp_88_ld14_value, stg0_FIFO_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0_sm129_0271(stg0_FIFO_buf12_cache& stg0_FIFO_buf12, stg1_cache& stg1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_FIFO_buf12
	auto stg0_FIFO_buf12_1_m__lp__lp_1_m_stg1_1__p__0_rp___p___m_13_rp___p___m_1_p_14_c______1_m_stg1_0__p__0_p_0_value = stg0_FIFO_buf12_stg1_update_0_sm129_0271_read_bundle_read(stg0_FIFO_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_1_m__lp__lp_1_m_stg1_1__p__0_rp___p___m_13_rp___p___m_1_p_14_c______1_m_stg1_0__p__0_p_0_value);
	// Produce: stg1
	stg1_stg1_update_0_sm129_0271_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg1_to_gp_91619_sm156_0225(stg1_cache& stg1, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg1_to_gp_916, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1__lp_1_m_stg1_ld17__p__0_rp__c____stg1_ld18_value = stg1_load_to_stg1_to_gp_91619_sm156_0225_read_bundle_read(stg1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg1_to_gp_916
	stg1_to_gp_916.write(stg1__lp_1_m_stg1_ld17__p__0_rp__c____stg1_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg0_to_gp_88_ld14_stg1_0_stg1_ld18_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg0_to_gp_88, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg1_to_gp_916) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg0_to_gp_88_ld14_stg1_0_stg1_ld18__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg0_FIFO_buf12_cache stg0_FIFO_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg1_cache stg1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945; load_to_stg1_to_gp_91619_sm156_0225[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 7] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945; load_to_stg0_FIFO_buf1215_sm173_0259[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 5] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
//   { stg1_update_0_sm129_0271[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 6] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
// Condition for stg1_update_0_sm129_0271(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg1_to_gp_91619_sm156_0225[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 7] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
// Condition for load_to_stg1_to_gp_91619_sm156_0225(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg0_FIFO_buf1215_sm173_0259[d0 = 0, d1, d2] -> [0, 1 + d1, 2 + d2, 5] : 0 <= d1 <= 1093 and 0 <= d2 <= 1947 }
// Condition for load_to_stg0_FIFO_buf1215_sm173_0259(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1094 and 4 <= i2 <= 1949 and 6 <= i3 <= 7; [0, i1, i2, 5] : 0 < i1 <= 1094 and 2 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 1; i1 <= 1094; i1++) {
	    for (int i2 = 2; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg0_FIFO_buf1215_sm173_0259(stg0_to_gp_88 /* buf name */, stg0_FIFO_buf12, 0, ((-1 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 4 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg1_update_0_sm129_0271(stg0_FIFO_buf12 /* buf name */, stg1, 0, ((-2 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 >= 4 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_stg1_to_gp_91619_sm156_0225(stg1 /* buf name */, stg1_to_gp_916, 0, ((-2 + 1*i1)), ((-4 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg1_FIFO_buf2023_sm174_0261(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg1_to_gp_916, stg1_FIFO_buf20_cache& stg1_FIFO_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_to_gp_916
	auto stg1_to_gp_916__lp_1_m_stg1_to_gp_916_ld21__p__0_rp__c____stg1_to_gp_916_ld22_value = stg1_to_gp_916.read();
	// Produce: stg1_FIFO_buf20
	stg1_FIFO_buf20_load_to_stg1_FIFO_buf2023_sm174_0261_write_bundle_write(/* arg names */stg1_to_gp_916__lp_1_m_stg1_to_gp_916_ld21__p__0_rp__c____stg1_to_gp_916_ld22_value, stg1_FIFO_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0_sm132_0201(stg1_FIFO_buf20_cache& stg1_FIFO_buf20, stg2_cache& stg2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_FIFO_buf20
	auto stg1_FIFO_buf20_1_m__lp__lp_1_m_stg2_1__p__0_rp___p___m_12_rp___p___m_1_p_13_c______1_m_stg2_0__p__0_p_0_value = stg1_FIFO_buf20_stg2_update_0_sm132_0201_read_bundle_read(stg1_FIFO_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_1_m__lp__lp_1_m_stg2_1__p__0_rp___p___m_12_rp___p___m_1_p_13_c______1_m_stg2_0__p__0_p_0_value);
	// Produce: stg2
	stg2_stg2_update_0_sm132_0201_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg2_to_gp_106467_sm155_0223(stg2_cache& stg2, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg2_to_gp_1064, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2__lp_1_m_stg2_ld65__p__0_rp__c____stg2_ld66_value = stg2_load_to_stg2_to_gp_106467_sm155_0223_read_bundle_read(stg2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg2_to_gp_1064
	stg2_to_gp_1064.write(stg2__lp_1_m_stg2_ld65__p__0_rp__c____stg2_ld66_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg1_to_gp_916_ld22_stg2_0_stg2_ld66_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg1_to_gp_916, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg2_to_gp_1064) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg1_to_gp_916_ld22_stg2_0_stg2_ld66__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg1_FIFO_buf20_cache stg1_FIFO_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg2_cache stg2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg1_FIFO_buf2023_sm174_0261[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 8] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945; load_to_stg2_to_gp_106467_sm155_0223[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 10] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943; stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
//   { load_to_stg1_FIFO_buf2023_sm174_0261[d0 = 0, d1, d2] -> [0, 2 + d1, 4 + d2, 8] : 0 <= d1 <= 1092 and 0 <= d2 <= 1945 }
// Condition for load_to_stg1_FIFO_buf2023_sm174_0261(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { load_to_stg2_to_gp_106467_sm155_0223[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 10] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
// Condition for load_to_stg2_to_gp_106467_sm155_0223(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))
//   { stg2_update_0_sm132_0201[d0 = 0, d1, d2] -> [0, 3 + d1, 6 + d2, 9] : 0 <= d1 <= 1091 and 0 <= d2 <= 1943 }
// Condition for stg2_update_0_sm132_0201(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((1094 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((1949 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 3 <= i1 <= 1094 and 6 <= i2 <= 1949 and 9 <= i3 <= 10; [0, i1, i2, 8] : 2 <= i1 <= 1094 and 4 <= i2 <= 1949 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 2; i1 <= 1094; i1++) {
	    for (int i2 = 4; i2 <= 1949; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg1_FIFO_buf2023_sm174_0261(stg1_to_gp_916 /* buf name */, stg1_FIFO_buf20, 0, ((-2 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 6 }
	          // { [i0, i1, i2] : -3 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-3 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg2_update_0_sm132_0201(stg1_FIFO_buf20 /* buf name */, stg2, 0, ((-3 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 6 }
	          // { [i0, i1, i2] : -3 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-3 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_stg2_to_gp_106467_sm155_0223(stg2 /* buf name */, stg2_to_gp_1064, 0, ((-3 + 1*i1)), ((-6 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void jac9_1_opt_d32(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jac9_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jac9_1_opt_d32_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match in_to_gp_20 = 512
// Bits to slack match in_to_gp_20 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg0_to_gp_88 = 512
// Bits to slack match stg0_to_gp_88 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg10_to_gp_424 = 512
// Bits to slack match stg10_to_gp_424 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg11_to_gp_532 = 512
// Bits to slack match stg11_to_gp_532 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg12_to_gp_640 = 512
// Bits to slack match stg12_to_gp_640 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg13_to_gp_748 = 512
// Bits to slack match stg13_to_gp_748 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg14_to_gp_156 = 512
// Bits to slack match stg14_to_gp_156 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg1_to_gp_916 = 512
// Bits to slack match stg1_to_gp_916 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg2_to_gp_1064 = 512
// Bits to slack match stg2_to_gp_1064 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg3_to_gp_1172 = 512
// Bits to slack match stg3_to_gp_1172 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg4_to_gp_1280 = 512
// Bits to slack match stg4_to_gp_1280 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg5_to_gp_1388 = 512
// Bits to slack match stg5_to_gp_1388 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg6_to_gp_1496 = 512
// Bits to slack match stg6_to_gp_1496 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg7_to_gp_15104 = 512
// Bits to slack match stg7_to_gp_15104 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg8_to_gp_16112 = 512
// Bits to slack match stg8_to_gp_16112 = 512
  // channel width: 1
  // port width   : 16
  // dag size     : 32
// Bits to slack match stg9_to_gp_3120 = 512
// Bits to slack match stg9_to_gp_3120 = 512
// Bits in internal re-use buffers               : 465120 bits
// Bits in channels needed to guarantee causality: 0
// Bits in channels needed to match slack        : 8192
  HWStream< hw_uint<16> > in_to_gp_20;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_20.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg14_to_gp_156;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg14_to_gp_156.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg2_to_gp_1064;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg2_to_gp_1064.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg3_to_gp_1172;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg3_to_gp_1172.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg4_to_gp_1280;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg4_to_gp_1280.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg5_to_gp_1388;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg5_to_gp_1388.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg6_to_gp_1496;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg6_to_gp_1496.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg7_to_gp_15104;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg7_to_gp_15104.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg8_to_gp_16112;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg8_to_gp_16112.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg9_to_gp_3120;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg9_to_gp_3120.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg0_to_gp_88;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg0_to_gp_88.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg10_to_gp_424;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg10_to_gp_424.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg11_to_gp_532;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg11_to_gp_532.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg12_to_gp_640;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg12_to_gp_640.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg13_to_gp_748;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg13_to_gp_748.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg1_to_gp_916;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg1_to_gp_916.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_in_0_in_ld2_(in_off_chip, in_to_gp_20);
  Extracted_in_to_gp_20_ld6_stg0_0_stg0_ld10_(in_to_gp_20, stg0_to_gp_88);
  Extracted_stg0_to_gp_88_ld14_stg1_0_stg1_ld18_(stg0_to_gp_88, stg1_to_gp_916);
  Extracted_stg1_to_gp_916_ld22_stg2_0_stg2_ld66_(stg1_to_gp_916, stg2_to_gp_1064);
  Extracted_stg2_to_gp_1064_ld70_stg3_0_stg3_ld74_(stg2_to_gp_1064, stg3_to_gp_1172);
  Extracted_stg3_to_gp_1172_ld78_stg4_0_stg4_ld82_(stg3_to_gp_1172, stg4_to_gp_1280);
  Extracted_stg4_to_gp_1280_ld86_stg5_0_stg5_ld90_(stg4_to_gp_1280, stg5_to_gp_1388);
  Extracted_stg5_to_gp_1388_ld94_stg6_0_stg6_ld98_(stg5_to_gp_1388, stg6_to_gp_1496);
  Extracted_stg6_to_gp_1496_ld102_stg7_0_stg7_ld106_(stg6_to_gp_1496, stg7_to_gp_15104);
  Extracted_stg7_to_gp_15104_ld110_stg8_0_stg8_ld114_(stg7_to_gp_15104, stg8_to_gp_16112);
  Extracted_stg8_to_gp_16112_ld118_stg9_0_stg9_ld122_(stg8_to_gp_16112, stg9_to_gp_3120);
  Extracted_stg10_0_stg10_ld26_stg9_to_gp_3120_ld126_(stg9_to_gp_3120, stg10_to_gp_424);
  Extracted_stg10_to_gp_424_ld30_stg11_0_stg11_ld34_(stg10_to_gp_424, stg11_to_gp_532);
  Extracted_stg11_to_gp_532_ld38_stg12_0_stg12_ld42_(stg11_to_gp_532, stg12_to_gp_640);
  Extracted_stg12_to_gp_640_ld46_stg13_0_stg13_ld50_(stg12_to_gp_640, stg13_to_gp_748);
  Extracted_stg13_to_gp_748_ld54_stg14_0_stg14_ld58_(stg13_to_gp_748, stg14_to_gp_156);
  Extracted_jac9_1_0_stg14_to_gp_156_ld62_(stg14_to_gp_156, jac9_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jac9_1_opt_d32_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jac9_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jac9_1_opt_d32(in_off_chip, jac9_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0_sm131_0267[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : 0 <= in_0 <= 1094 and 0 <= in_1 <= 1949 }
const int in_update_0_sm131_0267_read_pipe0_num_transfers = 2135250;
  // { jac9_1_update_0_sm147_0207[root = 0, jac9_1_0, jac9_1_1] -> jac9_1[jac9_1_1, jac9_1_0] : 0 <= jac9_1_0 <= 1079 and 0 <= jac9_1_1 <= 1919 }
const int jac9_1_update_0_sm147_0207_write_pipe0_num_transfers = 2073600;


extern "C" {

void jac9_1_opt_d32_accel(hw_uint<16>* in_update_0_sm131_0267_read_pipe0, hw_uint<16>* jac9_1_update_0_sm147_0207_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_sm131_0267_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jac9_1_update_0_sm147_0207_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_sm131_0267_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jac9_1_update_0_sm147_0207_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_sm131_0267_read_pipe0_channel;
  static HWStream<hw_uint<16> > jac9_1_update_0_sm147_0207_write_pipe0_channel;

  burst_read<16>(in_update_0_sm131_0267_read_pipe0, in_update_0_sm131_0267_read_pipe0_channel, in_update_0_sm131_0267_read_pipe0_num_transfers*size);

  jac9_1_opt_d32_wrapper(in_update_0_sm131_0267_read_pipe0_channel, jac9_1_update_0_sm147_0207_write_pipe0_channel, size);

  burst_write<16>(jac9_1_update_0_sm147_0207_write_pipe0, jac9_1_update_0_sm147_0207_write_pipe0_channel, jac9_1_update_0_sm147_0207_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jac9_1_opt_d32_rdai(HWStream<hw_uint<16> >& in_update_0_sm131_0267_read_pipe0, HWStream<hw_uint<16> >&  jac9_1_update_0_sm147_0207_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_sm131_0267_read_pipe0
#pragma HLS INTERFACE axis register port = jac9_1_update_0_sm147_0207_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jac9_1_opt_d32(in_update_0_sm131_0267_read_pipe0, jac9_1_update_0_sm147_0207_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

