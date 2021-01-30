#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jacdyn_1_opt_compute_units.h_merged_compute_units.h
#include "jacdyn_1_opt_compute_units.h_merged_compute_units.h"

struct in_in_update_0_141_to_in_load_to_in_to_gp_203_136_cache {
	// RAM Box: {[0, 24], [-15, 33]}
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
    // { load_to_in_to_gp_203[root = 0, in_ld2, in_ld1] -> in[in_ld1, in_ld2] : -15 <= in_ld2 <= 33 and 0 <= in_ld1 <= 24 }
  // # of banks: 1
  in_in_update_0_141_to_in_load_to_in_to_gp_203_136_cache in_in_update_0_141_to_in_load_to_in_to_gp_203_136;
};



inline void in_in_update_0_141_write(hw_uint<16>& in_in_update_0_141, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_update_0_141_to_in_load_to_in_to_gp_203_136.push(in_in_update_0_141);
}

inline hw_uint<16> in_load_to_in_to_gp_203_136_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_load_to_in_to_gp_203_136 read pattern: { load_to_in_to_gp_203[root = 0, in_ld2, in_ld1] -> in[in_ld1, in_ld2] : -15 <= in_ld2 <= 33 and 0 <= in_ld1 <= 24 }
  // Read schedule : { load_to_in_to_gp_203[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
  // Write schedule: { in_update_0[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
  auto value_in_in_update_0_141 = in.in_in_update_0_141_to_in_load_to_in_to_gp_203_136.peek(/* one reader or all rams */ 0);
  return value_in_in_update_0_141;
  return 0;
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_141
inline void in_in_update_0_write_bundle_write(hw_uint<16>& in_update_0_write, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
	hw_uint<16> in_in_update_0_141_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_141_write(in_in_update_0_141_res, in, root, in_0, in_1, dynamic_address);
}

// load_to_in_to_gp_203_read
//	in_load_to_in_to_gp_203_136
inline hw_uint<16> in_load_to_in_to_gp_203_read_bundle_read(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_load_to_in_to_gp_203_136

	hw_uint<16> result;
	hw_uint<16> in_load_to_in_to_gp_203_136_res = in_load_to_in_to_gp_203_136_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<0, 16>(result, in_load_to_in_to_gp_203_136_res);
	return result;
}

struct in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4_cache {
	// RAM Box: {[0, 24], [-15, 32]}
	// Capacity: 52
	// # of read delays: 5
  // 0, 1, 25, 26, 51
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 23> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 24> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_25() {
		return f4;
	}

	inline hw_uint<16> peek_26() {
		return f6;
	}

	inline hw_uint<16> peek_50() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_51() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 24
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 24 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_cache {
  // Reader addrs...
    // { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -1 + stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
    // { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
    // { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + stg0_1, stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
    // { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, 1 + stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
  // # of banks: 1
  in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4_cache in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4;
};



inline void in_FIFO_buf64_load_to_in_FIFO_buf6467_137_write(hw_uint<16>& in_FIFO_buf64_load_to_in_FIFO_buf6467_137, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4.push(in_FIFO_buf64_load_to_in_FIFO_buf6467_137);
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_71_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_71 read pattern: { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, -1 + stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
  // Read schedule : { stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  // Write schedule: { load_to_in_FIFO_buf6467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4.peek_51();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_72_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_72 read pattern: { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
  // Read schedule : { stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  // Write schedule: { load_to_in_FIFO_buf6467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4.peek_26();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_73_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_73 read pattern: { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + stg0_1, stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
  // Read schedule : { stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  // Write schedule: { load_to_in_FIFO_buf6467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4.peek_25();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_update_0_74_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_update_0_74 read pattern: { stg0_update_0[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[stg0_1, 1 + stg0_0] : -14 <= stg0_0 <= 32 and 0 <= stg0_1 <= 23 }
  // Read schedule : { stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  // Write schedule: { load_to_in_FIFO_buf6467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
  auto value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137 = in_FIFO_buf64.in_FIFO_buf64_load_to_in_FIFO_buf6467_137_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_load_to_in_FIFO_buf6467_137;
  return 0;
}

// # of bundles = 2
// load_to_in_FIFO_buf6467_write
//	in_FIFO_buf64_load_to_in_FIFO_buf6467_137
inline void in_FIFO_buf64_load_to_in_FIFO_buf6467_write_bundle_write(hw_uint<16>& load_to_in_FIFO_buf6467_write, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
	hw_uint<16> in_FIFO_buf64_load_to_in_FIFO_buf6467_137_res = load_to_in_FIFO_buf6467_write.extract<0, 15>();
	in_FIFO_buf64_load_to_in_FIFO_buf6467_137_write(in_FIFO_buf64_load_to_in_FIFO_buf6467_137_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
}

// stg0_update_0_read
//	in_FIFO_buf64_stg0_update_0_71
//	in_FIFO_buf64_stg0_update_0_72
//	in_FIFO_buf64_stg0_update_0_73
//	in_FIFO_buf64_stg0_update_0_74
inline hw_uint<64> in_FIFO_buf64_stg0_update_0_read_bundle_read(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_FIFO_buf64_stg0_update_0_71
    // in_FIFO_buf64_stg0_update_0_72
    // in_FIFO_buf64_stg0_update_0_73
    // in_FIFO_buf64_stg0_update_0_74

	hw_uint<64> result;
	hw_uint<16> in_FIFO_buf64_stg0_update_0_71_res = in_FIFO_buf64_stg0_update_0_71_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<0, 64>(result, in_FIFO_buf64_stg0_update_0_71_res);
	hw_uint<16> in_FIFO_buf64_stg0_update_0_72_res = in_FIFO_buf64_stg0_update_0_72_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<16, 64>(result, in_FIFO_buf64_stg0_update_0_72_res);
	hw_uint<16> in_FIFO_buf64_stg0_update_0_73_res = in_FIFO_buf64_stg0_update_0_73_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<32, 64>(result, in_FIFO_buf64_stg0_update_0_73_res);
	hw_uint<16> in_FIFO_buf64_stg0_update_0_74_res = in_FIFO_buf64_stg0_update_0_74_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<48, 64>(result, in_FIFO_buf64_stg0_update_0_74_res);
	return result;
}

struct stg0_stg0_update_0_70_to_stg0_load_to_stg0_to_gp_847_132_cache {
	// RAM Box: {[0, 23], [-14, 32]}
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
    // { load_to_stg0_to_gp_847[root = 0, stg0_ld6, stg0_ld5] -> stg0[stg0_ld5, stg0_ld6] : -14 <= stg0_ld6 <= 32 and 0 <= stg0_ld5 <= 23 }
  // # of banks: 1
  stg0_stg0_update_0_70_to_stg0_load_to_stg0_to_gp_847_132_cache stg0_stg0_update_0_70_to_stg0_load_to_stg0_to_gp_847_132;
};



inline void stg0_stg0_update_0_70_write(hw_uint<16>& stg0_stg0_update_0_70, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_update_0_70_to_stg0_load_to_stg0_to_gp_847_132.push(stg0_stg0_update_0_70);
}

inline hw_uint<16> stg0_load_to_stg0_to_gp_847_132_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_load_to_stg0_to_gp_847_132 read pattern: { load_to_stg0_to_gp_847[root = 0, stg0_ld6, stg0_ld5] -> stg0[stg0_ld5, stg0_ld6] : -14 <= stg0_ld6 <= 32 and 0 <= stg0_ld5 <= 23 }
  // Read schedule : { load_to_stg0_to_gp_847[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  // Write schedule: { stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  auto value_stg0_stg0_update_0_70 = stg0.stg0_stg0_update_0_70_to_stg0_load_to_stg0_to_gp_847_132.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_update_0_70;
  return 0;
}

// # of bundles = 2
// load_to_stg0_to_gp_847_read
//	stg0_load_to_stg0_to_gp_847_132
inline hw_uint<16> stg0_load_to_stg0_to_gp_847_read_bundle_read(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
  // # of ports in bundle: 1
    // stg0_load_to_stg0_to_gp_847_132

	hw_uint<16> result;
	hw_uint<16> stg0_load_to_stg0_to_gp_847_132_res = stg0_load_to_stg0_to_gp_847_132_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<0, 16>(result, stg0_load_to_stg0_to_gp_847_132_res);
	return result;
}

// stg0_update_0_write
//	stg0_stg0_update_0_70
inline void stg0_stg0_update_0_write_bundle_write(hw_uint<16>& stg0_update_0_write, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_70_res = stg0_update_0_write.extract<0, 15>();
	stg0_stg0_update_0_70_write(stg0_stg0_update_0_70_res, stg0, root, stg0_0, stg0_1, dynamic_address);
}

struct stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4_cache {
	// RAM Box: {[0, 23], [-14, 31]}
	// Capacity: 50
	// # of read delays: 5
  // 0, 1, 24, 25, 49
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 22> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 23> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_23() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_24() {
		return f4;
	}

	inline hw_uint<16> peek_25() {
		return f6;
	}

	inline hw_uint<16> peek_48() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_49() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 23
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 23 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_cache {
  // Reader addrs...
    // { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -1 + stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
    // { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
    // { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + stg1_1, stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
    // { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, 1 + stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
  // # of banks: 1
  stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4_cache stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4;
};



inline void stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_write(hw_uint<16>& stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4.push(stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133);
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_41_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_41 read pattern: { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, -1 + stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
  // Read schedule : { stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  // Write schedule: { load_to_stg0_FIFO_buf6871[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4.peek_49();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_42_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_42 read pattern: { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
  // Read schedule : { stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  // Write schedule: { load_to_stg0_FIFO_buf6871[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4.peek_25();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_43_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_43 read pattern: { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + stg1_1, stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
  // Read schedule : { stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  // Write schedule: { load_to_stg0_FIFO_buf6871[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4.peek_24();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_update_0_44_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_update_0_44 read pattern: { stg1_update_0[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[stg1_1, 1 + stg1_0] : -13 <= stg1_0 <= 31 and 0 <= stg1_1 <= 22 }
  // Read schedule : { stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  // Write schedule: { load_to_stg0_FIFO_buf6871[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
  auto value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133 = stg0_FIFO_buf68.stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133;
  return 0;
}

// # of bundles = 2
// load_to_stg0_FIFO_buf6871_write
//	stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133
inline void stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_write_bundle_write(hw_uint<16>& load_to_stg0_FIFO_buf6871_write, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
	hw_uint<16> stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_res = load_to_stg0_FIFO_buf6871_write.extract<0, 15>();
	stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_write(stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_133_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
}

// stg1_update_0_read
//	stg0_FIFO_buf68_stg1_update_0_41
//	stg0_FIFO_buf68_stg1_update_0_42
//	stg0_FIFO_buf68_stg1_update_0_43
//	stg0_FIFO_buf68_stg1_update_0_44
inline hw_uint<64> stg0_FIFO_buf68_stg1_update_0_read_bundle_read(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg0_FIFO_buf68_stg1_update_0_41
    // stg0_FIFO_buf68_stg1_update_0_42
    // stg0_FIFO_buf68_stg1_update_0_43
    // stg0_FIFO_buf68_stg1_update_0_44

	hw_uint<64> result;
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_41_res = stg0_FIFO_buf68_stg1_update_0_41_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<0, 64>(result, stg0_FIFO_buf68_stg1_update_0_41_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_42_res = stg0_FIFO_buf68_stg1_update_0_42_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<16, 64>(result, stg0_FIFO_buf68_stg1_update_0_42_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_43_res = stg0_FIFO_buf68_stg1_update_0_43_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<32, 64>(result, stg0_FIFO_buf68_stg1_update_0_43_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_update_0_44_res = stg0_FIFO_buf68_stg1_update_0_44_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<48, 64>(result, stg0_FIFO_buf68_stg1_update_0_44_res);
	return result;
}

struct stg1_stg1_update_0_40_to_stg1_load_to_stg1_to_gp_9811_108_cache {
	// RAM Box: {[0, 22], [-13, 31]}
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
    // { load_to_stg1_to_gp_9811[root = 0, stg1_ld10, stg1_ld9] -> stg1[stg1_ld9, stg1_ld10] : -13 <= stg1_ld10 <= 31 and 0 <= stg1_ld9 <= 22 }
  // # of banks: 1
  stg1_stg1_update_0_40_to_stg1_load_to_stg1_to_gp_9811_108_cache stg1_stg1_update_0_40_to_stg1_load_to_stg1_to_gp_9811_108;
};



inline void stg1_stg1_update_0_40_write(hw_uint<16>& stg1_stg1_update_0_40, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_update_0_40_to_stg1_load_to_stg1_to_gp_9811_108.push(stg1_stg1_update_0_40);
}

inline hw_uint<16> stg1_load_to_stg1_to_gp_9811_108_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_load_to_stg1_to_gp_9811_108 read pattern: { load_to_stg1_to_gp_9811[root = 0, stg1_ld10, stg1_ld9] -> stg1[stg1_ld9, stg1_ld10] : -13 <= stg1_ld10 <= 31 and 0 <= stg1_ld9 <= 22 }
  // Read schedule : { load_to_stg1_to_gp_9811[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  // Write schedule: { stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  auto value_stg1_stg1_update_0_40 = stg1.stg1_stg1_update_0_40_to_stg1_load_to_stg1_to_gp_9811_108.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_update_0_40;
  return 0;
}

// # of bundles = 2
// load_to_stg1_to_gp_9811_read
//	stg1_load_to_stg1_to_gp_9811_108
inline hw_uint<16> stg1_load_to_stg1_to_gp_9811_read_bundle_read(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
  // # of ports in bundle: 1
    // stg1_load_to_stg1_to_gp_9811_108

	hw_uint<16> result;
	hw_uint<16> stg1_load_to_stg1_to_gp_9811_108_res = stg1_load_to_stg1_to_gp_9811_108_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<0, 16>(result, stg1_load_to_stg1_to_gp_9811_108_res);
	return result;
}

// stg1_update_0_write
//	stg1_stg1_update_0_40
inline void stg1_stg1_update_0_write_bundle_write(hw_uint<16>& stg1_update_0_write, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
	hw_uint<16> stg1_stg1_update_0_40_res = stg1_update_0_write.extract<0, 15>();
	stg1_stg1_update_0_40_write(stg1_stg1_update_0_40_res, stg1, root, stg1_0, stg1_1, dynamic_address);
}

struct stg10_stg10_update_0_65_to_stg10_load_to_stg10_to_gp_41215_128_cache {
	// RAM Box: {[0, 13], [-4, 22]}
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
    // { load_to_stg10_to_gp_41215[root = 0, stg10_ld14, stg10_ld13] -> stg10[stg10_ld13, stg10_ld14] : -4 <= stg10_ld14 <= 22 and 0 <= stg10_ld13 <= 13 }
  // # of banks: 1
  stg10_stg10_update_0_65_to_stg10_load_to_stg10_to_gp_41215_128_cache stg10_stg10_update_0_65_to_stg10_load_to_stg10_to_gp_41215_128;
};



inline void stg10_stg10_update_0_65_write(hw_uint<16>& stg10_stg10_update_0_65, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_update_0_65_to_stg10_load_to_stg10_to_gp_41215_128.push(stg10_stg10_update_0_65);
}

inline hw_uint<16> stg10_load_to_stg10_to_gp_41215_128_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_load_to_stg10_to_gp_41215_128 read pattern: { load_to_stg10_to_gp_41215[root = 0, stg10_ld14, stg10_ld13] -> stg10[stg10_ld13, stg10_ld14] : -4 <= stg10_ld14 <= 22 and 0 <= stg10_ld13 <= 13 }
  // Read schedule : { load_to_stg10_to_gp_41215[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 34] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  // Write schedule: { stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  auto value_stg10_stg10_update_0_65 = stg10.stg10_stg10_update_0_65_to_stg10_load_to_stg10_to_gp_41215_128.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_update_0_65;
  return 0;
}

// # of bundles = 2
// load_to_stg10_to_gp_41215_read
//	stg10_load_to_stg10_to_gp_41215_128
inline hw_uint<16> stg10_load_to_stg10_to_gp_41215_read_bundle_read(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
  // # of ports in bundle: 1
    // stg10_load_to_stg10_to_gp_41215_128

	hw_uint<16> result;
	hw_uint<16> stg10_load_to_stg10_to_gp_41215_128_res = stg10_load_to_stg10_to_gp_41215_128_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<0, 16>(result, stg10_load_to_stg10_to_gp_41215_128_res);
	return result;
}

// stg10_update_0_write
//	stg10_stg10_update_0_65
inline void stg10_stg10_update_0_write_bundle_write(hw_uint<16>& stg10_update_0_write, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
	hw_uint<16> stg10_stg10_update_0_65_res = stg10_update_0_write.extract<0, 15>();
	stg10_stg10_update_0_65_write(stg10_stg10_update_0_65_res, stg10, root, stg10_0, stg10_1, dynamic_address);
}

struct stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4_cache {
	// RAM Box: {[0, 13], [-4, 21]}
	// Capacity: 30
	// # of read delays: 5
  // 0, 1, 14, 15, 29
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 12> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 13> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_13() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_14() {
		return f4;
	}

	inline hw_uint<16> peek_15() {
		return f6;
	}

	inline hw_uint<16> peek_28() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_29() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 13
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 13 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 12
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 12 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_cache {
  // Reader addrs...
    // { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -1 + stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
    // { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
    // { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + stg11_1, stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
    // { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, 1 + stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
  // # of banks: 1
  stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4_cache stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4;
};



inline void stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_write(hw_uint<16>& stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4.push(stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129);
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_61_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_61 read pattern: { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, -1 + stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
  // Read schedule : { stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  // Write schedule: { load_to_stg10_FIFO_buf7679[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 35] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4.peek_29();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_62_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_62 read pattern: { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
  // Read schedule : { stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  // Write schedule: { load_to_stg10_FIFO_buf7679[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 35] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4.peek_15();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_63_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_63 read pattern: { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + stg11_1, stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
  // Read schedule : { stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  // Write schedule: { load_to_stg10_FIFO_buf7679[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 35] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4.peek_14();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_update_0_64_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_update_0_64 read pattern: { stg11_update_0[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[stg11_1, 1 + stg11_0] : -3 <= stg11_0 <= 21 and 0 <= stg11_1 <= 12 }
  // Read schedule : { stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  // Write schedule: { load_to_stg10_FIFO_buf7679[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 35] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  auto value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129 = stg10_FIFO_buf76.stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129;
  return 0;
}

// # of bundles = 2
// load_to_stg10_FIFO_buf7679_write
//	stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129
inline void stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_write_bundle_write(hw_uint<16>& load_to_stg10_FIFO_buf7679_write, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
	hw_uint<16> stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_res = load_to_stg10_FIFO_buf7679_write.extract<0, 15>();
	stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_write(stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_129_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
}

// stg11_update_0_read
//	stg10_FIFO_buf76_stg11_update_0_61
//	stg10_FIFO_buf76_stg11_update_0_62
//	stg10_FIFO_buf76_stg11_update_0_63
//	stg10_FIFO_buf76_stg11_update_0_64
inline hw_uint<64> stg10_FIFO_buf76_stg11_update_0_read_bundle_read(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg10_FIFO_buf76_stg11_update_0_61
    // stg10_FIFO_buf76_stg11_update_0_62
    // stg10_FIFO_buf76_stg11_update_0_63
    // stg10_FIFO_buf76_stg11_update_0_64

	hw_uint<64> result;
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_61_res = stg10_FIFO_buf76_stg11_update_0_61_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<0, 64>(result, stg10_FIFO_buf76_stg11_update_0_61_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_62_res = stg10_FIFO_buf76_stg11_update_0_62_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<16, 64>(result, stg10_FIFO_buf76_stg11_update_0_62_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_63_res = stg10_FIFO_buf76_stg11_update_0_63_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<32, 64>(result, stg10_FIFO_buf76_stg11_update_0_63_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_update_0_64_res = stg10_FIFO_buf76_stg11_update_0_64_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<48, 64>(result, stg10_FIFO_buf76_stg11_update_0_64_res);
	return result;
}

struct stg11_stg11_update_0_60_to_stg11_load_to_stg11_to_gp_51619_124_cache {
	// RAM Box: {[0, 12], [-3, 21]}
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
    // { load_to_stg11_to_gp_51619[root = 0, stg11_ld18, stg11_ld17] -> stg11[stg11_ld17, stg11_ld18] : -3 <= stg11_ld18 <= 21 and 0 <= stg11_ld17 <= 12 }
  // # of banks: 1
  stg11_stg11_update_0_60_to_stg11_load_to_stg11_to_gp_51619_124_cache stg11_stg11_update_0_60_to_stg11_load_to_stg11_to_gp_51619_124;
};



inline void stg11_stg11_update_0_60_write(hw_uint<16>& stg11_stg11_update_0_60, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_update_0_60_to_stg11_load_to_stg11_to_gp_51619_124.push(stg11_stg11_update_0_60);
}

inline hw_uint<16> stg11_load_to_stg11_to_gp_51619_124_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_load_to_stg11_to_gp_51619_124 read pattern: { load_to_stg11_to_gp_51619[root = 0, stg11_ld18, stg11_ld17] -> stg11[stg11_ld17, stg11_ld18] : -3 <= stg11_ld18 <= 21 and 0 <= stg11_ld17 <= 12 }
  // Read schedule : { load_to_stg11_to_gp_51619[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 37] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  // Write schedule: { stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  auto value_stg11_stg11_update_0_60 = stg11.stg11_stg11_update_0_60_to_stg11_load_to_stg11_to_gp_51619_124.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_update_0_60;
  return 0;
}

// # of bundles = 2
// load_to_stg11_to_gp_51619_read
//	stg11_load_to_stg11_to_gp_51619_124
inline hw_uint<16> stg11_load_to_stg11_to_gp_51619_read_bundle_read(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
  // # of ports in bundle: 1
    // stg11_load_to_stg11_to_gp_51619_124

	hw_uint<16> result;
	hw_uint<16> stg11_load_to_stg11_to_gp_51619_124_res = stg11_load_to_stg11_to_gp_51619_124_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<0, 16>(result, stg11_load_to_stg11_to_gp_51619_124_res);
	return result;
}

// stg11_update_0_write
//	stg11_stg11_update_0_60
inline void stg11_stg11_update_0_write_bundle_write(hw_uint<16>& stg11_update_0_write, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
	hw_uint<16> stg11_stg11_update_0_60_res = stg11_update_0_write.extract<0, 15>();
	stg11_stg11_update_0_60_write(stg11_stg11_update_0_60_res, stg11, root, stg11_0, stg11_1, dynamic_address);
}

struct stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4_cache {
	// RAM Box: {[0, 12], [-3, 20]}
	// Capacity: 28
	// # of read delays: 5
  // 0, 1, 13, 14, 27
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 11> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 12> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_12() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_13() {
		return f4;
	}

	inline hw_uint<16> peek_14() {
		return f6;
	}

	inline hw_uint<16> peek_26() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_27() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 12
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 12 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 11
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 11 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_cache {
  // Reader addrs...
    // { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -1 + stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
    // { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
    // { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + stg12_1, stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
    // { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, 1 + stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
  // # of banks: 1
  stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4_cache stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4;
};



inline void stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_write(hw_uint<16>& stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4.push(stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125);
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_56_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_56 read pattern: { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, -1 + stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
  // Read schedule : { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  // Write schedule: { load_to_stg11_FIFO_buf8083[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 38] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4.peek_27();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_57_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_57 read pattern: { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
  // Read schedule : { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  // Write schedule: { load_to_stg11_FIFO_buf8083[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 38] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4.peek_14();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_58_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_58 read pattern: { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + stg12_1, stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
  // Read schedule : { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  // Write schedule: { load_to_stg11_FIFO_buf8083[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 38] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4.peek_13();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_update_0_59_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_update_0_59 read pattern: { stg12_update_0[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[stg12_1, 1 + stg12_0] : -2 <= stg12_0 <= 20 and 0 <= stg12_1 <= 11 }
  // Read schedule : { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  // Write schedule: { load_to_stg11_FIFO_buf8083[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 38] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
  auto value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125 = stg11_FIFO_buf80.stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125;
  return 0;
}

// # of bundles = 2
// load_to_stg11_FIFO_buf8083_write
//	stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125
inline void stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_write_bundle_write(hw_uint<16>& load_to_stg11_FIFO_buf8083_write, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
	hw_uint<16> stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_res = load_to_stg11_FIFO_buf8083_write.extract<0, 15>();
	stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_write(stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_125_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
}

// stg12_update_0_read
//	stg11_FIFO_buf80_stg12_update_0_56
//	stg11_FIFO_buf80_stg12_update_0_57
//	stg11_FIFO_buf80_stg12_update_0_58
//	stg11_FIFO_buf80_stg12_update_0_59
inline hw_uint<64> stg11_FIFO_buf80_stg12_update_0_read_bundle_read(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg11_FIFO_buf80_stg12_update_0_56
    // stg11_FIFO_buf80_stg12_update_0_57
    // stg11_FIFO_buf80_stg12_update_0_58
    // stg11_FIFO_buf80_stg12_update_0_59

	hw_uint<64> result;
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_56_res = stg11_FIFO_buf80_stg12_update_0_56_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<0, 64>(result, stg11_FIFO_buf80_stg12_update_0_56_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_57_res = stg11_FIFO_buf80_stg12_update_0_57_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<16, 64>(result, stg11_FIFO_buf80_stg12_update_0_57_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_58_res = stg11_FIFO_buf80_stg12_update_0_58_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<32, 64>(result, stg11_FIFO_buf80_stg12_update_0_58_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_update_0_59_res = stg11_FIFO_buf80_stg12_update_0_59_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<48, 64>(result, stg11_FIFO_buf80_stg12_update_0_59_res);
	return result;
}

struct stg12_stg12_update_0_55_to_stg12_load_to_stg12_to_gp_62023_120_cache {
	// RAM Box: {[0, 11], [-2, 20]}
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
    // { load_to_stg12_to_gp_62023[root = 0, stg12_ld22, stg12_ld21] -> stg12[stg12_ld21, stg12_ld22] : -2 <= stg12_ld22 <= 20 and 0 <= stg12_ld21 <= 11 }
  // # of banks: 1
  stg12_stg12_update_0_55_to_stg12_load_to_stg12_to_gp_62023_120_cache stg12_stg12_update_0_55_to_stg12_load_to_stg12_to_gp_62023_120;
};



inline void stg12_stg12_update_0_55_write(hw_uint<16>& stg12_stg12_update_0_55, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_update_0_55_to_stg12_load_to_stg12_to_gp_62023_120.push(stg12_stg12_update_0_55);
}

inline hw_uint<16> stg12_load_to_stg12_to_gp_62023_120_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_load_to_stg12_to_gp_62023_120 read pattern: { load_to_stg12_to_gp_62023[root = 0, stg12_ld22, stg12_ld21] -> stg12[stg12_ld21, stg12_ld22] : -2 <= stg12_ld22 <= 20 and 0 <= stg12_ld21 <= 11 }
  // Read schedule : { load_to_stg12_to_gp_62023[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 40] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  // Write schedule: { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  auto value_stg12_stg12_update_0_55 = stg12.stg12_stg12_update_0_55_to_stg12_load_to_stg12_to_gp_62023_120.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_update_0_55;
  return 0;
}

// # of bundles = 2
// load_to_stg12_to_gp_62023_read
//	stg12_load_to_stg12_to_gp_62023_120
inline hw_uint<16> stg12_load_to_stg12_to_gp_62023_read_bundle_read(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
  // # of ports in bundle: 1
    // stg12_load_to_stg12_to_gp_62023_120

	hw_uint<16> result;
	hw_uint<16> stg12_load_to_stg12_to_gp_62023_120_res = stg12_load_to_stg12_to_gp_62023_120_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<0, 16>(result, stg12_load_to_stg12_to_gp_62023_120_res);
	return result;
}

// stg12_update_0_write
//	stg12_stg12_update_0_55
inline void stg12_stg12_update_0_write_bundle_write(hw_uint<16>& stg12_update_0_write, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
	hw_uint<16> stg12_stg12_update_0_55_res = stg12_update_0_write.extract<0, 15>();
	stg12_stg12_update_0_55_write(stg12_stg12_update_0_55_res, stg12, root, stg12_0, stg12_1, dynamic_address);
}

struct stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4_cache {
	// RAM Box: {[0, 11], [-2, 19]}
	// Capacity: 26
	// # of read delays: 5
  // 0, 1, 12, 13, 25
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 10> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 11> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_11() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_12() {
		return f4;
	}

	inline hw_uint<16> peek_13() {
		return f6;
	}

	inline hw_uint<16> peek_24() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_25() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 11
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 11 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 10
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 10 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_cache {
  // Reader addrs...
    // { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, -1 + stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
    // { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
    // { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + stg13_1, stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
    // { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, 1 + stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
  // # of banks: 1
  stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4_cache stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4;
};



inline void stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_write(hw_uint<16>& stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4.push(stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121);
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_51_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_51 read pattern: { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, -1 + stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
  // Read schedule : { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  // Write schedule: { load_to_stg12_FIFO_buf8487[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 41] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4.peek_25();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_52_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_52 read pattern: { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
  // Read schedule : { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  // Write schedule: { load_to_stg12_FIFO_buf8487[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 41] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4.peek_13();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_53_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_53 read pattern: { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + stg13_1, stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
  // Read schedule : { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  // Write schedule: { load_to_stg12_FIFO_buf8487[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 41] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4.peek_12();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_update_0_54_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_update_0_54 read pattern: { stg13_update_0[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[stg13_1, 1 + stg13_0] : -1 <= stg13_0 <= 19 and 0 <= stg13_1 <= 10 }
  // Read schedule : { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  // Write schedule: { load_to_stg12_FIFO_buf8487[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 41] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
  auto value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121 = stg12_FIFO_buf84.stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121;
  return 0;
}

// # of bundles = 2
// load_to_stg12_FIFO_buf8487_write
//	stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121
inline void stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_write_bundle_write(hw_uint<16>& load_to_stg12_FIFO_buf8487_write, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
	hw_uint<16> stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_res = load_to_stg12_FIFO_buf8487_write.extract<0, 15>();
	stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_write(stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_121_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
}

// stg13_update_0_read
//	stg12_FIFO_buf84_stg13_update_0_51
//	stg12_FIFO_buf84_stg13_update_0_52
//	stg12_FIFO_buf84_stg13_update_0_53
//	stg12_FIFO_buf84_stg13_update_0_54
inline hw_uint<64> stg12_FIFO_buf84_stg13_update_0_read_bundle_read(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg12_FIFO_buf84_stg13_update_0_51
    // stg12_FIFO_buf84_stg13_update_0_52
    // stg12_FIFO_buf84_stg13_update_0_53
    // stg12_FIFO_buf84_stg13_update_0_54

	hw_uint<64> result;
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_51_res = stg12_FIFO_buf84_stg13_update_0_51_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<0, 64>(result, stg12_FIFO_buf84_stg13_update_0_51_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_52_res = stg12_FIFO_buf84_stg13_update_0_52_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<16, 64>(result, stg12_FIFO_buf84_stg13_update_0_52_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_53_res = stg12_FIFO_buf84_stg13_update_0_53_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<32, 64>(result, stg12_FIFO_buf84_stg13_update_0_53_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_update_0_54_res = stg12_FIFO_buf84_stg13_update_0_54_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<48, 64>(result, stg12_FIFO_buf84_stg13_update_0_54_res);
	return result;
}

struct stg13_stg13_update_0_50_to_stg13_load_to_stg13_to_gp_72427_116_cache {
	// RAM Box: {[0, 10], [-1, 19]}
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
    // { load_to_stg13_to_gp_72427[root = 0, stg13_ld26, stg13_ld25] -> stg13[stg13_ld25, stg13_ld26] : -1 <= stg13_ld26 <= 19 and 0 <= stg13_ld25 <= 10 }
  // # of banks: 1
  stg13_stg13_update_0_50_to_stg13_load_to_stg13_to_gp_72427_116_cache stg13_stg13_update_0_50_to_stg13_load_to_stg13_to_gp_72427_116;
};



inline void stg13_stg13_update_0_50_write(hw_uint<16>& stg13_stg13_update_0_50, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_update_0_50_to_stg13_load_to_stg13_to_gp_72427_116.push(stg13_stg13_update_0_50);
}

inline hw_uint<16> stg13_load_to_stg13_to_gp_72427_116_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_load_to_stg13_to_gp_72427_116 read pattern: { load_to_stg13_to_gp_72427[root = 0, stg13_ld26, stg13_ld25] -> stg13[stg13_ld25, stg13_ld26] : -1 <= stg13_ld26 <= 19 and 0 <= stg13_ld25 <= 10 }
  // Read schedule : { load_to_stg13_to_gp_72427[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 43] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  // Write schedule: { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  auto value_stg13_stg13_update_0_50 = stg13.stg13_stg13_update_0_50_to_stg13_load_to_stg13_to_gp_72427_116.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_update_0_50;
  return 0;
}

// # of bundles = 2
// load_to_stg13_to_gp_72427_read
//	stg13_load_to_stg13_to_gp_72427_116
inline hw_uint<16> stg13_load_to_stg13_to_gp_72427_read_bundle_read(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
  // # of ports in bundle: 1
    // stg13_load_to_stg13_to_gp_72427_116

	hw_uint<16> result;
	hw_uint<16> stg13_load_to_stg13_to_gp_72427_116_res = stg13_load_to_stg13_to_gp_72427_116_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<0, 16>(result, stg13_load_to_stg13_to_gp_72427_116_res);
	return result;
}

// stg13_update_0_write
//	stg13_stg13_update_0_50
inline void stg13_stg13_update_0_write_bundle_write(hw_uint<16>& stg13_update_0_write, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
	hw_uint<16> stg13_stg13_update_0_50_res = stg13_update_0_write.extract<0, 15>();
	stg13_stg13_update_0_50_write(stg13_stg13_update_0_50_res, stg13, root, stg13_0, stg13_1, dynamic_address);
}

struct stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4_cache {
	// RAM Box: {[0, 10], [-1, 18]}
	// Capacity: 24
	// # of read delays: 5
  // 0, 1, 11, 12, 23
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 9> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 10> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_10() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_11() {
		return f4;
	}

	inline hw_uint<16> peek_12() {
		return f6;
	}

	inline hw_uint<16> peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_23() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 10
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 10 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 9
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 9 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_cache {
  // Reader addrs...
    // { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
    // { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
    // { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
    // { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
  // # of banks: 1
  stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4_cache stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4;
};



inline void stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_write(hw_uint<16>& stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4.push(stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117);
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_46_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_46 read pattern: { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
  // Read schedule : { stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  // Write schedule: { load_to_stg13_FIFO_buf8891[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 44] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4.peek_23();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_47_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_47 read pattern: { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
  // Read schedule : { stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  // Write schedule: { load_to_stg13_FIFO_buf8891[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 44] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4.peek_12();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_48_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_48 read pattern: { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + stg14_1, stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
  // Read schedule : { stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  // Write schedule: { load_to_stg13_FIFO_buf8891[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 44] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4.peek_11();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_update_0_49_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_update_0_49 read pattern: { stg14_update_0[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 18 and 0 <= stg14_1 <= 9 }
  // Read schedule : { stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  // Write schedule: { load_to_stg13_FIFO_buf8891[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 44] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
  auto value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117 = stg13_FIFO_buf88.stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117;
  return 0;
}

// # of bundles = 2
// load_to_stg13_FIFO_buf8891_write
//	stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117
inline void stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_write_bundle_write(hw_uint<16>& load_to_stg13_FIFO_buf8891_write, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
	hw_uint<16> stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_res = load_to_stg13_FIFO_buf8891_write.extract<0, 15>();
	stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_write(stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_117_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
}

// stg14_update_0_read
//	stg13_FIFO_buf88_stg14_update_0_46
//	stg13_FIFO_buf88_stg14_update_0_47
//	stg13_FIFO_buf88_stg14_update_0_48
//	stg13_FIFO_buf88_stg14_update_0_49
inline hw_uint<64> stg13_FIFO_buf88_stg14_update_0_read_bundle_read(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg13_FIFO_buf88_stg14_update_0_46
    // stg13_FIFO_buf88_stg14_update_0_47
    // stg13_FIFO_buf88_stg14_update_0_48
    // stg13_FIFO_buf88_stg14_update_0_49

	hw_uint<64> result;
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_46_res = stg13_FIFO_buf88_stg14_update_0_46_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<0, 64>(result, stg13_FIFO_buf88_stg14_update_0_46_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_47_res = stg13_FIFO_buf88_stg14_update_0_47_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<16, 64>(result, stg13_FIFO_buf88_stg14_update_0_47_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_48_res = stg13_FIFO_buf88_stg14_update_0_48_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<32, 64>(result, stg13_FIFO_buf88_stg14_update_0_48_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_update_0_49_res = stg13_FIFO_buf88_stg14_update_0_49_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<48, 64>(result, stg13_FIFO_buf88_stg14_update_0_49_res);
	return result;
}

struct stg14_stg14_update_0_45_to_stg14_load_to_stg14_to_gp_12831_112_cache {
	// RAM Box: {[0, 9], [0, 18]}
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
    // { load_to_stg14_to_gp_12831[root = 0, stg14_ld30, stg14_ld29] -> stg14[stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 18 and 0 <= stg14_ld29 <= 9 }
  // # of banks: 1
  stg14_stg14_update_0_45_to_stg14_load_to_stg14_to_gp_12831_112_cache stg14_stg14_update_0_45_to_stg14_load_to_stg14_to_gp_12831_112;
};



inline void stg14_stg14_update_0_45_write(hw_uint<16>& stg14_stg14_update_0_45, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_update_0_45_to_stg14_load_to_stg14_to_gp_12831_112.push(stg14_stg14_update_0_45);
}

inline hw_uint<16> stg14_load_to_stg14_to_gp_12831_112_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_load_to_stg14_to_gp_12831_112 read pattern: { load_to_stg14_to_gp_12831[root = 0, stg14_ld30, stg14_ld29] -> stg14[stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 18 and 0 <= stg14_ld29 <= 9 }
  // Read schedule : { load_to_stg14_to_gp_12831[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 46] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  // Write schedule: { stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  auto value_stg14_stg14_update_0_45 = stg14.stg14_stg14_update_0_45_to_stg14_load_to_stg14_to_gp_12831_112.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_update_0_45;
  return 0;
}

// # of bundles = 2
// load_to_stg14_to_gp_12831_read
//	stg14_load_to_stg14_to_gp_12831_112
inline hw_uint<16> stg14_load_to_stg14_to_gp_12831_read_bundle_read(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_load_to_stg14_to_gp_12831_112

	hw_uint<16> result;
	hw_uint<16> stg14_load_to_stg14_to_gp_12831_112_res = stg14_load_to_stg14_to_gp_12831_112_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<0, 16>(result, stg14_load_to_stg14_to_gp_12831_112_res);
	return result;
}

// stg14_update_0_write
//	stg14_stg14_update_0_45
inline void stg14_stg14_update_0_write_bundle_write(hw_uint<16>& stg14_update_0_write, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
	hw_uint<16> stg14_stg14_update_0_45_res = stg14_update_0_write.extract<0, 15>();
	stg14_stg14_update_0_45_write(stg14_stg14_update_0_45_res, stg14, root, stg14_0, stg14_1, dynamic_address);
}

struct stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_to_stg14_FIFO_buf92_jacdyn_1_update_0_140_cache {
	// RAM Box: {[0, 9], [0, 18]}
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

struct stg14_FIFO_buf92_cache {
  // Reader addrs...
    // { jacdyn_1_update_0[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 18 and 0 <= jacdyn_1_1 <= 9 }
  // # of banks: 1
  stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_to_stg14_FIFO_buf92_jacdyn_1_update_0_140_cache stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_to_stg14_FIFO_buf92_jacdyn_1_update_0_140;
};



inline void stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_write(hw_uint<16>& stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_to_stg14_FIFO_buf92_jacdyn_1_update_0_140.push(stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113);
}

inline hw_uint<16> stg14_FIFO_buf92_jacdyn_1_update_0_140_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdyn_1_update_0_140 read pattern: { jacdyn_1_update_0[root = 0, jacdyn_1_0, jacdyn_1_1] -> stg14_FIFO_buf92[jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 18 and 0 <= jacdyn_1_1 <= 9 }
  // Read schedule : { jacdyn_1_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 48] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  // Write schedule: { load_to_stg14_FIFO_buf9295[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 47] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
  auto value_stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113 = stg14_FIFO_buf92.stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_to_stg14_FIFO_buf92_jacdyn_1_update_0_140.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113;
  return 0;
}

// # of bundles = 2
// jacdyn_1_update_0_read
//	stg14_FIFO_buf92_jacdyn_1_update_0_140
inline hw_uint<16> stg14_FIFO_buf92_jacdyn_1_update_0_read_bundle_read(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdyn_1_0, int jacdyn_1_1, int dynamic_address) {
  // # of ports in bundle: 1
    // stg14_FIFO_buf92_jacdyn_1_update_0_140

	hw_uint<16> result;
	hw_uint<16> stg14_FIFO_buf92_jacdyn_1_update_0_140_res = stg14_FIFO_buf92_jacdyn_1_update_0_140_select(stg14_FIFO_buf92, root, jacdyn_1_0, jacdyn_1_1, dynamic_address);
	set_at<0, 16>(result, stg14_FIFO_buf92_jacdyn_1_update_0_140_res);
	return result;
}

// load_to_stg14_FIFO_buf9295_write
//	stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113
inline void stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_write_bundle_write(hw_uint<16>& load_to_stg14_FIFO_buf9295_write, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
	hw_uint<16> stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_res = load_to_stg14_FIFO_buf9295_write.extract<0, 15>();
	stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_write(stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_113_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
}

struct stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4_cache {
	// RAM Box: {[0, 22], [-13, 30]}
	// Capacity: 48
	// # of read delays: 5
  // 0, 1, 23, 24, 47
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 21> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 22> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_22() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_23() {
		return f4;
	}

	inline hw_uint<16> peek_24() {
		return f6;
	}

	inline hw_uint<16> peek_46() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_47() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 22
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 22 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_cache {
  // Reader addrs...
    // { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -1 + stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
    // { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
    // { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + stg2_1, stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
    // { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, 1 + stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
  // # of banks: 1
  stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4_cache stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4;
};



inline void stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_write(hw_uint<16>& stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4.push(stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109);
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_36_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_36 read pattern: { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, -1 + stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
  // Read schedule : { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  // Write schedule: { load_to_stg1_FIFO_buf7275[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4.peek_47();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_37_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_37 read pattern: { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
  // Read schedule : { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  // Write schedule: { load_to_stg1_FIFO_buf7275[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4.peek_24();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_38_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_38 read pattern: { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + stg2_1, stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
  // Read schedule : { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  // Write schedule: { load_to_stg1_FIFO_buf7275[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4.peek_23();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_update_0_39_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_update_0_39 read pattern: { stg2_update_0[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[stg2_1, 1 + stg2_0] : -12 <= stg2_0 <= 30 and 0 <= stg2_1 <= 21 }
  // Read schedule : { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  // Write schedule: { load_to_stg1_FIFO_buf7275[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
  auto value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109 = stg1_FIFO_buf72.stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109;
  return 0;
}

// # of bundles = 2
// load_to_stg1_FIFO_buf7275_write
//	stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109
inline void stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_write_bundle_write(hw_uint<16>& load_to_stg1_FIFO_buf7275_write, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
	hw_uint<16> stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_res = load_to_stg1_FIFO_buf7275_write.extract<0, 15>();
	stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_write(stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_109_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
}

// stg2_update_0_read
//	stg1_FIFO_buf72_stg2_update_0_36
//	stg1_FIFO_buf72_stg2_update_0_37
//	stg1_FIFO_buf72_stg2_update_0_38
//	stg1_FIFO_buf72_stg2_update_0_39
inline hw_uint<64> stg1_FIFO_buf72_stg2_update_0_read_bundle_read(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg1_FIFO_buf72_stg2_update_0_36
    // stg1_FIFO_buf72_stg2_update_0_37
    // stg1_FIFO_buf72_stg2_update_0_38
    // stg1_FIFO_buf72_stg2_update_0_39

	hw_uint<64> result;
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_36_res = stg1_FIFO_buf72_stg2_update_0_36_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<0, 64>(result, stg1_FIFO_buf72_stg2_update_0_36_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_37_res = stg1_FIFO_buf72_stg2_update_0_37_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<16, 64>(result, stg1_FIFO_buf72_stg2_update_0_37_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_38_res = stg1_FIFO_buf72_stg2_update_0_38_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<32, 64>(result, stg1_FIFO_buf72_stg2_update_0_38_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_update_0_39_res = stg1_FIFO_buf72_stg2_update_0_39_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<48, 64>(result, stg1_FIFO_buf72_stg2_update_0_39_res);
	return result;
}

struct stg2_stg2_update_0_35_to_stg2_load_to_stg2_to_gp_103235_104_cache {
	// RAM Box: {[0, 21], [-12, 30]}
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
    // { load_to_stg2_to_gp_103235[root = 0, stg2_ld34, stg2_ld33] -> stg2[stg2_ld33, stg2_ld34] : -12 <= stg2_ld34 <= 30 and 0 <= stg2_ld33 <= 21 }
  // # of banks: 1
  stg2_stg2_update_0_35_to_stg2_load_to_stg2_to_gp_103235_104_cache stg2_stg2_update_0_35_to_stg2_load_to_stg2_to_gp_103235_104;
};



inline void stg2_stg2_update_0_35_write(hw_uint<16>& stg2_stg2_update_0_35, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_update_0_35_to_stg2_load_to_stg2_to_gp_103235_104.push(stg2_stg2_update_0_35);
}

inline hw_uint<16> stg2_load_to_stg2_to_gp_103235_104_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_load_to_stg2_to_gp_103235_104 read pattern: { load_to_stg2_to_gp_103235[root = 0, stg2_ld34, stg2_ld33] -> stg2[stg2_ld33, stg2_ld34] : -12 <= stg2_ld34 <= 30 and 0 <= stg2_ld33 <= 21 }
  // Read schedule : { load_to_stg2_to_gp_103235[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  // Write schedule: { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  auto value_stg2_stg2_update_0_35 = stg2.stg2_stg2_update_0_35_to_stg2_load_to_stg2_to_gp_103235_104.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_update_0_35;
  return 0;
}

// # of bundles = 2
// load_to_stg2_to_gp_103235_read
//	stg2_load_to_stg2_to_gp_103235_104
inline hw_uint<16> stg2_load_to_stg2_to_gp_103235_read_bundle_read(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
  // # of ports in bundle: 1
    // stg2_load_to_stg2_to_gp_103235_104

	hw_uint<16> result;
	hw_uint<16> stg2_load_to_stg2_to_gp_103235_104_res = stg2_load_to_stg2_to_gp_103235_104_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<0, 16>(result, stg2_load_to_stg2_to_gp_103235_104_res);
	return result;
}

// stg2_update_0_write
//	stg2_stg2_update_0_35
inline void stg2_stg2_update_0_write_bundle_write(hw_uint<16>& stg2_update_0_write, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
	hw_uint<16> stg2_stg2_update_0_35_res = stg2_update_0_write.extract<0, 15>();
	stg2_stg2_update_0_35_write(stg2_stg2_update_0_35_res, stg2, root, stg2_0, stg2_1, dynamic_address);
}

struct stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4_cache {
	// RAM Box: {[0, 21], [-12, 29]}
	// Capacity: 46
	// # of read delays: 5
  // 0, 1, 22, 23, 45
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 20> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 21> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_21() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_22() {
		return f4;
	}

	inline hw_uint<16> peek_23() {
		return f6;
	}

	inline hw_uint<16> peek_44() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_45() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 21
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 21 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_cache {
  // Reader addrs...
    // { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -1 + stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
    // { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
    // { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + stg3_1, stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
    // { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, 1 + stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
  // # of banks: 1
  stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4_cache stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4;
};



inline void stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_write(hw_uint<16>& stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4.push(stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105);
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_31_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_31 read pattern: { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, -1 + stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
  // Read schedule : { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  // Write schedule: { load_to_stg2_FIFO_buf9699[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4.peek_45();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_32_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_32 read pattern: { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
  // Read schedule : { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  // Write schedule: { load_to_stg2_FIFO_buf9699[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4.peek_23();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_33_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_33 read pattern: { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + stg3_1, stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
  // Read schedule : { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  // Write schedule: { load_to_stg2_FIFO_buf9699[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4.peek_22();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_update_0_34_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_update_0_34 read pattern: { stg3_update_0[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[stg3_1, 1 + stg3_0] : -11 <= stg3_0 <= 29 and 0 <= stg3_1 <= 20 }
  // Read schedule : { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  // Write schedule: { load_to_stg2_FIFO_buf9699[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
  auto value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105 = stg2_FIFO_buf96.stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105;
  return 0;
}

// # of bundles = 2
// load_to_stg2_FIFO_buf9699_write
//	stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105
inline void stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_write_bundle_write(hw_uint<16>& load_to_stg2_FIFO_buf9699_write, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
	hw_uint<16> stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_res = load_to_stg2_FIFO_buf9699_write.extract<0, 15>();
	stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_write(stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_105_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
}

// stg3_update_0_read
//	stg2_FIFO_buf96_stg3_update_0_31
//	stg2_FIFO_buf96_stg3_update_0_32
//	stg2_FIFO_buf96_stg3_update_0_33
//	stg2_FIFO_buf96_stg3_update_0_34
inline hw_uint<64> stg2_FIFO_buf96_stg3_update_0_read_bundle_read(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg2_FIFO_buf96_stg3_update_0_31
    // stg2_FIFO_buf96_stg3_update_0_32
    // stg2_FIFO_buf96_stg3_update_0_33
    // stg2_FIFO_buf96_stg3_update_0_34

	hw_uint<64> result;
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_31_res = stg2_FIFO_buf96_stg3_update_0_31_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<0, 64>(result, stg2_FIFO_buf96_stg3_update_0_31_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_32_res = stg2_FIFO_buf96_stg3_update_0_32_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<16, 64>(result, stg2_FIFO_buf96_stg3_update_0_32_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_33_res = stg2_FIFO_buf96_stg3_update_0_33_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<32, 64>(result, stg2_FIFO_buf96_stg3_update_0_33_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_update_0_34_res = stg2_FIFO_buf96_stg3_update_0_34_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<48, 64>(result, stg2_FIFO_buf96_stg3_update_0_34_res);
	return result;
}

struct stg3_stg3_update_0_30_to_stg3_load_to_stg3_to_gp_113639_100_cache {
	// RAM Box: {[0, 20], [-11, 29]}
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
    // { load_to_stg3_to_gp_113639[root = 0, stg3_ld38, stg3_ld37] -> stg3[stg3_ld37, stg3_ld38] : -11 <= stg3_ld38 <= 29 and 0 <= stg3_ld37 <= 20 }
  // # of banks: 1
  stg3_stg3_update_0_30_to_stg3_load_to_stg3_to_gp_113639_100_cache stg3_stg3_update_0_30_to_stg3_load_to_stg3_to_gp_113639_100;
};



inline void stg3_stg3_update_0_30_write(hw_uint<16>& stg3_stg3_update_0_30, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_update_0_30_to_stg3_load_to_stg3_to_gp_113639_100.push(stg3_stg3_update_0_30);
}

inline hw_uint<16> stg3_load_to_stg3_to_gp_113639_100_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_load_to_stg3_to_gp_113639_100 read pattern: { load_to_stg3_to_gp_113639[root = 0, stg3_ld38, stg3_ld37] -> stg3[stg3_ld37, stg3_ld38] : -11 <= stg3_ld38 <= 29 and 0 <= stg3_ld37 <= 20 }
  // Read schedule : { load_to_stg3_to_gp_113639[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 13] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  // Write schedule: { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  auto value_stg3_stg3_update_0_30 = stg3.stg3_stg3_update_0_30_to_stg3_load_to_stg3_to_gp_113639_100.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_update_0_30;
  return 0;
}

// # of bundles = 2
// load_to_stg3_to_gp_113639_read
//	stg3_load_to_stg3_to_gp_113639_100
inline hw_uint<16> stg3_load_to_stg3_to_gp_113639_read_bundle_read(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
  // # of ports in bundle: 1
    // stg3_load_to_stg3_to_gp_113639_100

	hw_uint<16> result;
	hw_uint<16> stg3_load_to_stg3_to_gp_113639_100_res = stg3_load_to_stg3_to_gp_113639_100_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<0, 16>(result, stg3_load_to_stg3_to_gp_113639_100_res);
	return result;
}

// stg3_update_0_write
//	stg3_stg3_update_0_30
inline void stg3_stg3_update_0_write_bundle_write(hw_uint<16>& stg3_update_0_write, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
	hw_uint<16> stg3_stg3_update_0_30_res = stg3_update_0_write.extract<0, 15>();
	stg3_stg3_update_0_30_write(stg3_stg3_update_0_30_res, stg3, root, stg3_0, stg3_1, dynamic_address);
}

struct stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4_cache {
	// RAM Box: {[0, 20], [-11, 28]}
	// Capacity: 44
	// # of read delays: 5
  // 0, 1, 21, 22, 43
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 19> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 20> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_21() {
		return f4;
	}

	inline hw_uint<16> peek_22() {
		return f6;
	}

	inline hw_uint<16> peek_42() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_43() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_cache {
  // Reader addrs...
    // { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -1 + stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
    // { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
    // { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + stg4_1, stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
    // { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, 1 + stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
  // # of banks: 1
  stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4_cache stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4;
};



inline void stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_write(hw_uint<16>& stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4.push(stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101);
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_26_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_26 read pattern: { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, -1 + stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
  // Read schedule : { stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  // Write schedule: { load_to_stg3_FIFO_buf100103[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 14] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4.peek_43();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_27_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_27 read pattern: { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
  // Read schedule : { stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  // Write schedule: { load_to_stg3_FIFO_buf100103[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 14] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4.peek_22();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_28_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_28 read pattern: { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + stg4_1, stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
  // Read schedule : { stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  // Write schedule: { load_to_stg3_FIFO_buf100103[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 14] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4.peek_21();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_update_0_29_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_update_0_29 read pattern: { stg4_update_0[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[stg4_1, 1 + stg4_0] : -10 <= stg4_0 <= 28 and 0 <= stg4_1 <= 19 }
  // Read schedule : { stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  // Write schedule: { load_to_stg3_FIFO_buf100103[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 14] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
  auto value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101 = stg3_FIFO_buf100.stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101;
  return 0;
}

// # of bundles = 2
// load_to_stg3_FIFO_buf100103_write
//	stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101
inline void stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_write_bundle_write(hw_uint<16>& load_to_stg3_FIFO_buf100103_write, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
	hw_uint<16> stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_res = load_to_stg3_FIFO_buf100103_write.extract<0, 15>();
	stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_write(stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_101_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
}

// stg4_update_0_read
//	stg3_FIFO_buf100_stg4_update_0_26
//	stg3_FIFO_buf100_stg4_update_0_27
//	stg3_FIFO_buf100_stg4_update_0_28
//	stg3_FIFO_buf100_stg4_update_0_29
inline hw_uint<64> stg3_FIFO_buf100_stg4_update_0_read_bundle_read(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg3_FIFO_buf100_stg4_update_0_26
    // stg3_FIFO_buf100_stg4_update_0_27
    // stg3_FIFO_buf100_stg4_update_0_28
    // stg3_FIFO_buf100_stg4_update_0_29

	hw_uint<64> result;
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_26_res = stg3_FIFO_buf100_stg4_update_0_26_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<0, 64>(result, stg3_FIFO_buf100_stg4_update_0_26_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_27_res = stg3_FIFO_buf100_stg4_update_0_27_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<16, 64>(result, stg3_FIFO_buf100_stg4_update_0_27_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_28_res = stg3_FIFO_buf100_stg4_update_0_28_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<32, 64>(result, stg3_FIFO_buf100_stg4_update_0_28_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_update_0_29_res = stg3_FIFO_buf100_stg4_update_0_29_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<48, 64>(result, stg3_FIFO_buf100_stg4_update_0_29_res);
	return result;
}

struct stg4_stg4_update_0_25_to_stg4_load_to_stg4_to_gp_124043_96_cache {
	// RAM Box: {[0, 19], [-10, 28]}
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
    // { load_to_stg4_to_gp_124043[root = 0, stg4_ld42, stg4_ld41] -> stg4[stg4_ld41, stg4_ld42] : -10 <= stg4_ld42 <= 28 and 0 <= stg4_ld41 <= 19 }
  // # of banks: 1
  stg4_stg4_update_0_25_to_stg4_load_to_stg4_to_gp_124043_96_cache stg4_stg4_update_0_25_to_stg4_load_to_stg4_to_gp_124043_96;
};



inline void stg4_stg4_update_0_25_write(hw_uint<16>& stg4_stg4_update_0_25, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_update_0_25_to_stg4_load_to_stg4_to_gp_124043_96.push(stg4_stg4_update_0_25);
}

inline hw_uint<16> stg4_load_to_stg4_to_gp_124043_96_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_load_to_stg4_to_gp_124043_96 read pattern: { load_to_stg4_to_gp_124043[root = 0, stg4_ld42, stg4_ld41] -> stg4[stg4_ld41, stg4_ld42] : -10 <= stg4_ld42 <= 28 and 0 <= stg4_ld41 <= 19 }
  // Read schedule : { load_to_stg4_to_gp_124043[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  // Write schedule: { stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  auto value_stg4_stg4_update_0_25 = stg4.stg4_stg4_update_0_25_to_stg4_load_to_stg4_to_gp_124043_96.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_25;
  return 0;
}

// # of bundles = 2
// load_to_stg4_to_gp_124043_read
//	stg4_load_to_stg4_to_gp_124043_96
inline hw_uint<16> stg4_load_to_stg4_to_gp_124043_read_bundle_read(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
  // # of ports in bundle: 1
    // stg4_load_to_stg4_to_gp_124043_96

	hw_uint<16> result;
	hw_uint<16> stg4_load_to_stg4_to_gp_124043_96_res = stg4_load_to_stg4_to_gp_124043_96_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<0, 16>(result, stg4_load_to_stg4_to_gp_124043_96_res);
	return result;
}

// stg4_update_0_write
//	stg4_stg4_update_0_25
inline void stg4_stg4_update_0_write_bundle_write(hw_uint<16>& stg4_update_0_write, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_25_res = stg4_update_0_write.extract<0, 15>();
	stg4_stg4_update_0_25_write(stg4_stg4_update_0_25_res, stg4, root, stg4_0, stg4_1, dynamic_address);
}

struct stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4_cache {
	// RAM Box: {[0, 19], [-10, 27]}
	// Capacity: 42
	// # of read delays: 5
  // 0, 1, 20, 21, 41
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 18> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 19> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_19() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_20() {
		return f4;
	}

	inline hw_uint<16> peek_21() {
		return f6;
	}

	inline hw_uint<16> peek_40() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_41() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_cache {
  // Reader addrs...
    // { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -1 + stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
    // { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
    // { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + stg5_1, stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
    // { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, 1 + stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
  // # of banks: 1
  stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4_cache stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4;
};



inline void stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_write(hw_uint<16>& stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4.push(stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97);
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_21_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_21 read pattern: { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, -1 + stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
  // Read schedule : { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  // Write schedule: { load_to_stg4_FIFO_buf104107[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 17] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4.peek_41();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_22_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_22 read pattern: { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
  // Read schedule : { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  // Write schedule: { load_to_stg4_FIFO_buf104107[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 17] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4.peek_21();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_23_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_23 read pattern: { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + stg5_1, stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
  // Read schedule : { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  // Write schedule: { load_to_stg4_FIFO_buf104107[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 17] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4.peek_20();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_update_0_24_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_update_0_24 read pattern: { stg5_update_0[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[stg5_1, 1 + stg5_0] : -9 <= stg5_0 <= 27 and 0 <= stg5_1 <= 18 }
  // Read schedule : { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  // Write schedule: { load_to_stg4_FIFO_buf104107[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 17] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
  auto value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97 = stg4_FIFO_buf104.stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97;
  return 0;
}

// # of bundles = 2
// load_to_stg4_FIFO_buf104107_write
//	stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97
inline void stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_write_bundle_write(hw_uint<16>& load_to_stg4_FIFO_buf104107_write, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
	hw_uint<16> stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_res = load_to_stg4_FIFO_buf104107_write.extract<0, 15>();
	stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_write(stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_97_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
}

// stg5_update_0_read
//	stg4_FIFO_buf104_stg5_update_0_21
//	stg4_FIFO_buf104_stg5_update_0_22
//	stg4_FIFO_buf104_stg5_update_0_23
//	stg4_FIFO_buf104_stg5_update_0_24
inline hw_uint<64> stg4_FIFO_buf104_stg5_update_0_read_bundle_read(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg4_FIFO_buf104_stg5_update_0_21
    // stg4_FIFO_buf104_stg5_update_0_22
    // stg4_FIFO_buf104_stg5_update_0_23
    // stg4_FIFO_buf104_stg5_update_0_24

	hw_uint<64> result;
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_21_res = stg4_FIFO_buf104_stg5_update_0_21_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<0, 64>(result, stg4_FIFO_buf104_stg5_update_0_21_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_22_res = stg4_FIFO_buf104_stg5_update_0_22_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<16, 64>(result, stg4_FIFO_buf104_stg5_update_0_22_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_23_res = stg4_FIFO_buf104_stg5_update_0_23_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<32, 64>(result, stg4_FIFO_buf104_stg5_update_0_23_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_update_0_24_res = stg4_FIFO_buf104_stg5_update_0_24_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<48, 64>(result, stg4_FIFO_buf104_stg5_update_0_24_res);
	return result;
}

struct stg5_stg5_update_0_20_to_stg5_load_to_stg5_to_gp_134447_92_cache {
	// RAM Box: {[0, 18], [-9, 27]}
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
    // { load_to_stg5_to_gp_134447[root = 0, stg5_ld46, stg5_ld45] -> stg5[stg5_ld45, stg5_ld46] : -9 <= stg5_ld46 <= 27 and 0 <= stg5_ld45 <= 18 }
  // # of banks: 1
  stg5_stg5_update_0_20_to_stg5_load_to_stg5_to_gp_134447_92_cache stg5_stg5_update_0_20_to_stg5_load_to_stg5_to_gp_134447_92;
};



inline void stg5_stg5_update_0_20_write(hw_uint<16>& stg5_stg5_update_0_20, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_update_0_20_to_stg5_load_to_stg5_to_gp_134447_92.push(stg5_stg5_update_0_20);
}

inline hw_uint<16> stg5_load_to_stg5_to_gp_134447_92_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_load_to_stg5_to_gp_134447_92 read pattern: { load_to_stg5_to_gp_134447[root = 0, stg5_ld46, stg5_ld45] -> stg5[stg5_ld45, stg5_ld46] : -9 <= stg5_ld46 <= 27 and 0 <= stg5_ld45 <= 18 }
  // Read schedule : { load_to_stg5_to_gp_134447[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  // Write schedule: { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  auto value_stg5_stg5_update_0_20 = stg5.stg5_stg5_update_0_20_to_stg5_load_to_stg5_to_gp_134447_92.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_update_0_20;
  return 0;
}

// # of bundles = 2
// load_to_stg5_to_gp_134447_read
//	stg5_load_to_stg5_to_gp_134447_92
inline hw_uint<16> stg5_load_to_stg5_to_gp_134447_read_bundle_read(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
  // # of ports in bundle: 1
    // stg5_load_to_stg5_to_gp_134447_92

	hw_uint<16> result;
	hw_uint<16> stg5_load_to_stg5_to_gp_134447_92_res = stg5_load_to_stg5_to_gp_134447_92_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<0, 16>(result, stg5_load_to_stg5_to_gp_134447_92_res);
	return result;
}

// stg5_update_0_write
//	stg5_stg5_update_0_20
inline void stg5_stg5_update_0_write_bundle_write(hw_uint<16>& stg5_update_0_write, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
	hw_uint<16> stg5_stg5_update_0_20_res = stg5_update_0_write.extract<0, 15>();
	stg5_stg5_update_0_20_write(stg5_stg5_update_0_20_res, stg5, root, stg5_0, stg5_1, dynamic_address);
}

struct stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4_cache {
	// RAM Box: {[0, 18], [-9, 26]}
	// Capacity: 40
	// # of read delays: 5
  // 0, 1, 19, 20, 39
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 17> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 18> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_19() {
		return f4;
	}

	inline hw_uint<16> peek_20() {
		return f6;
	}

	inline hw_uint<16> peek_38() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_39() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_cache {
  // Reader addrs...
    // { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -1 + stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
    // { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
    // { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + stg6_1, stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
    // { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, 1 + stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
  // # of banks: 1
  stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4_cache stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4;
};



inline void stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_write(hw_uint<16>& stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4.push(stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93);
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_16_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_16 read pattern: { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, -1 + stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
  // Read schedule : { stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  // Write schedule: { load_to_stg5_FIFO_buf108111[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4.peek_39();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_17_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_17 read pattern: { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
  // Read schedule : { stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  // Write schedule: { load_to_stg5_FIFO_buf108111[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4.peek_20();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_18_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_18 read pattern: { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + stg6_1, stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
  // Read schedule : { stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  // Write schedule: { load_to_stg5_FIFO_buf108111[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4.peek_19();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_update_0_19_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_update_0_19 read pattern: { stg6_update_0[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[stg6_1, 1 + stg6_0] : -8 <= stg6_0 <= 26 and 0 <= stg6_1 <= 17 }
  // Read schedule : { stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  // Write schedule: { load_to_stg5_FIFO_buf108111[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
  auto value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93 = stg5_FIFO_buf108.stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93;
  return 0;
}

// # of bundles = 2
// load_to_stg5_FIFO_buf108111_write
//	stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93
inline void stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_write_bundle_write(hw_uint<16>& load_to_stg5_FIFO_buf108111_write, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
	hw_uint<16> stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_res = load_to_stg5_FIFO_buf108111_write.extract<0, 15>();
	stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_write(stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_93_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
}

// stg6_update_0_read
//	stg5_FIFO_buf108_stg6_update_0_16
//	stg5_FIFO_buf108_stg6_update_0_17
//	stg5_FIFO_buf108_stg6_update_0_18
//	stg5_FIFO_buf108_stg6_update_0_19
inline hw_uint<64> stg5_FIFO_buf108_stg6_update_0_read_bundle_read(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg5_FIFO_buf108_stg6_update_0_16
    // stg5_FIFO_buf108_stg6_update_0_17
    // stg5_FIFO_buf108_stg6_update_0_18
    // stg5_FIFO_buf108_stg6_update_0_19

	hw_uint<64> result;
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_16_res = stg5_FIFO_buf108_stg6_update_0_16_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<0, 64>(result, stg5_FIFO_buf108_stg6_update_0_16_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_17_res = stg5_FIFO_buf108_stg6_update_0_17_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<16, 64>(result, stg5_FIFO_buf108_stg6_update_0_17_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_18_res = stg5_FIFO_buf108_stg6_update_0_18_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<32, 64>(result, stg5_FIFO_buf108_stg6_update_0_18_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_update_0_19_res = stg5_FIFO_buf108_stg6_update_0_19_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<48, 64>(result, stg5_FIFO_buf108_stg6_update_0_19_res);
	return result;
}

struct stg6_stg6_update_0_15_to_stg6_load_to_stg6_to_gp_144851_88_cache {
	// RAM Box: {[0, 17], [-8, 26]}
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
    // { load_to_stg6_to_gp_144851[root = 0, stg6_ld50, stg6_ld49] -> stg6[stg6_ld49, stg6_ld50] : -8 <= stg6_ld50 <= 26 and 0 <= stg6_ld49 <= 17 }
  // # of banks: 1
  stg6_stg6_update_0_15_to_stg6_load_to_stg6_to_gp_144851_88_cache stg6_stg6_update_0_15_to_stg6_load_to_stg6_to_gp_144851_88;
};



inline void stg6_stg6_update_0_15_write(hw_uint<16>& stg6_stg6_update_0_15, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_update_0_15_to_stg6_load_to_stg6_to_gp_144851_88.push(stg6_stg6_update_0_15);
}

inline hw_uint<16> stg6_load_to_stg6_to_gp_144851_88_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_load_to_stg6_to_gp_144851_88 read pattern: { load_to_stg6_to_gp_144851[root = 0, stg6_ld50, stg6_ld49] -> stg6[stg6_ld49, stg6_ld50] : -8 <= stg6_ld50 <= 26 and 0 <= stg6_ld49 <= 17 }
  // Read schedule : { load_to_stg6_to_gp_144851[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 22] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  // Write schedule: { stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  auto value_stg6_stg6_update_0_15 = stg6.stg6_stg6_update_0_15_to_stg6_load_to_stg6_to_gp_144851_88.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_update_0_15;
  return 0;
}

// # of bundles = 2
// load_to_stg6_to_gp_144851_read
//	stg6_load_to_stg6_to_gp_144851_88
inline hw_uint<16> stg6_load_to_stg6_to_gp_144851_read_bundle_read(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
  // # of ports in bundle: 1
    // stg6_load_to_stg6_to_gp_144851_88

	hw_uint<16> result;
	hw_uint<16> stg6_load_to_stg6_to_gp_144851_88_res = stg6_load_to_stg6_to_gp_144851_88_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<0, 16>(result, stg6_load_to_stg6_to_gp_144851_88_res);
	return result;
}

// stg6_update_0_write
//	stg6_stg6_update_0_15
inline void stg6_stg6_update_0_write_bundle_write(hw_uint<16>& stg6_update_0_write, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
	hw_uint<16> stg6_stg6_update_0_15_res = stg6_update_0_write.extract<0, 15>();
	stg6_stg6_update_0_15_write(stg6_stg6_update_0_15_res, stg6, root, stg6_0, stg6_1, dynamic_address);
}

struct stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4_cache {
	// RAM Box: {[0, 17], [-8, 25]}
	// Capacity: 38
	// # of read delays: 5
  // 0, 1, 18, 19, 37
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 16> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 17> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_17() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_18() {
		return f4;
	}

	inline hw_uint<16> peek_19() {
		return f6;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_37() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 17
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 17 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_cache {
  // Reader addrs...
    // { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -1 + stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
    // { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
    // { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + stg7_1, stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
    // { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, 1 + stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
  // # of banks: 1
  stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4_cache stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4;
};



inline void stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_write(hw_uint<16>& stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4.push(stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89);
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_11_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_11 read pattern: { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, -1 + stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
  // Read schedule : { stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  // Write schedule: { load_to_stg6_FIFO_buf112115[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 23] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4.peek_37();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_12_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_12 read pattern: { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
  // Read schedule : { stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  // Write schedule: { load_to_stg6_FIFO_buf112115[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 23] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4.peek_19();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_13_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_13 read pattern: { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + stg7_1, stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
  // Read schedule : { stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  // Write schedule: { load_to_stg6_FIFO_buf112115[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 23] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4.peek_18();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_update_0_14_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_update_0_14 read pattern: { stg7_update_0[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[stg7_1, 1 + stg7_0] : -7 <= stg7_0 <= 25 and 0 <= stg7_1 <= 16 }
  // Read schedule : { stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  // Write schedule: { load_to_stg6_FIFO_buf112115[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 23] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
  auto value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89 = stg6_FIFO_buf112.stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89;
  return 0;
}

// # of bundles = 2
// load_to_stg6_FIFO_buf112115_write
//	stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89
inline void stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_write_bundle_write(hw_uint<16>& load_to_stg6_FIFO_buf112115_write, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
	hw_uint<16> stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_res = load_to_stg6_FIFO_buf112115_write.extract<0, 15>();
	stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_write(stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_89_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
}

// stg7_update_0_read
//	stg6_FIFO_buf112_stg7_update_0_11
//	stg6_FIFO_buf112_stg7_update_0_12
//	stg6_FIFO_buf112_stg7_update_0_13
//	stg6_FIFO_buf112_stg7_update_0_14
inline hw_uint<64> stg6_FIFO_buf112_stg7_update_0_read_bundle_read(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg6_FIFO_buf112_stg7_update_0_11
    // stg6_FIFO_buf112_stg7_update_0_12
    // stg6_FIFO_buf112_stg7_update_0_13
    // stg6_FIFO_buf112_stg7_update_0_14

	hw_uint<64> result;
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_11_res = stg6_FIFO_buf112_stg7_update_0_11_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<0, 64>(result, stg6_FIFO_buf112_stg7_update_0_11_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_12_res = stg6_FIFO_buf112_stg7_update_0_12_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<16, 64>(result, stg6_FIFO_buf112_stg7_update_0_12_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_13_res = stg6_FIFO_buf112_stg7_update_0_13_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<32, 64>(result, stg6_FIFO_buf112_stg7_update_0_13_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_update_0_14_res = stg6_FIFO_buf112_stg7_update_0_14_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<48, 64>(result, stg6_FIFO_buf112_stg7_update_0_14_res);
	return result;
}

struct stg7_stg7_update_0_10_to_stg7_load_to_stg7_to_gp_155255_84_cache {
	// RAM Box: {[0, 16], [-7, 25]}
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
    // { load_to_stg7_to_gp_155255[root = 0, stg7_ld54, stg7_ld53] -> stg7[stg7_ld53, stg7_ld54] : -7 <= stg7_ld54 <= 25 and 0 <= stg7_ld53 <= 16 }
  // # of banks: 1
  stg7_stg7_update_0_10_to_stg7_load_to_stg7_to_gp_155255_84_cache stg7_stg7_update_0_10_to_stg7_load_to_stg7_to_gp_155255_84;
};



inline void stg7_stg7_update_0_10_write(hw_uint<16>& stg7_stg7_update_0_10, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_update_0_10_to_stg7_load_to_stg7_to_gp_155255_84.push(stg7_stg7_update_0_10);
}

inline hw_uint<16> stg7_load_to_stg7_to_gp_155255_84_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_load_to_stg7_to_gp_155255_84 read pattern: { load_to_stg7_to_gp_155255[root = 0, stg7_ld54, stg7_ld53] -> stg7[stg7_ld53, stg7_ld54] : -7 <= stg7_ld54 <= 25 and 0 <= stg7_ld53 <= 16 }
  // Read schedule : { load_to_stg7_to_gp_155255[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  // Write schedule: { stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  auto value_stg7_stg7_update_0_10 = stg7.stg7_stg7_update_0_10_to_stg7_load_to_stg7_to_gp_155255_84.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_update_0_10;
  return 0;
}

// # of bundles = 2
// load_to_stg7_to_gp_155255_read
//	stg7_load_to_stg7_to_gp_155255_84
inline hw_uint<16> stg7_load_to_stg7_to_gp_155255_read_bundle_read(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
  // # of ports in bundle: 1
    // stg7_load_to_stg7_to_gp_155255_84

	hw_uint<16> result;
	hw_uint<16> stg7_load_to_stg7_to_gp_155255_84_res = stg7_load_to_stg7_to_gp_155255_84_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<0, 16>(result, stg7_load_to_stg7_to_gp_155255_84_res);
	return result;
}

// stg7_update_0_write
//	stg7_stg7_update_0_10
inline void stg7_stg7_update_0_write_bundle_write(hw_uint<16>& stg7_update_0_write, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
	hw_uint<16> stg7_stg7_update_0_10_res = stg7_update_0_write.extract<0, 15>();
	stg7_stg7_update_0_10_write(stg7_stg7_update_0_10_res, stg7, root, stg7_0, stg7_1, dynamic_address);
}

struct stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4_cache {
	// RAM Box: {[0, 16], [-7, 24]}
	// Capacity: 36
	// # of read delays: 5
  // 0, 1, 17, 18, 35
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 15> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 16> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_16() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_17() {
		return f4;
	}

	inline hw_uint<16> peek_18() {
		return f6;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_35() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 16
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_cache {
  // Reader addrs...
    // { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -1 + stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
    // { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
    // { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + stg8_1, stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
    // { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, 1 + stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
  // # of banks: 1
  stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4_cache stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4;
};



inline void stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_write(hw_uint<16>& stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4.push(stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85);
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_6_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_6 read pattern: { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, -1 + stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
  // Read schedule : { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_stg7_FIFO_buf116119[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4.peek_35();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_7_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_7 read pattern: { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
  // Read schedule : { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_stg7_FIFO_buf116119[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4.peek_18();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_8_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_8 read pattern: { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + stg8_1, stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
  // Read schedule : { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_stg7_FIFO_buf116119[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4.peek_17();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_update_0_9_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_update_0_9 read pattern: { stg8_update_0[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[stg8_1, 1 + stg8_0] : -6 <= stg8_0 <= 24 and 0 <= stg8_1 <= 15 }
  // Read schedule : { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_stg7_FIFO_buf116119[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
  auto value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85 = stg7_FIFO_buf116.stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85;
  return 0;
}

// # of bundles = 2
// load_to_stg7_FIFO_buf116119_write
//	stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85
inline void stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_write_bundle_write(hw_uint<16>& load_to_stg7_FIFO_buf116119_write, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
	hw_uint<16> stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_res = load_to_stg7_FIFO_buf116119_write.extract<0, 15>();
	stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_write(stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_85_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
}

// stg8_update_0_read
//	stg7_FIFO_buf116_stg8_update_0_6
//	stg7_FIFO_buf116_stg8_update_0_7
//	stg7_FIFO_buf116_stg8_update_0_8
//	stg7_FIFO_buf116_stg8_update_0_9
inline hw_uint<64> stg7_FIFO_buf116_stg8_update_0_read_bundle_read(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg7_FIFO_buf116_stg8_update_0_6
    // stg7_FIFO_buf116_stg8_update_0_7
    // stg7_FIFO_buf116_stg8_update_0_8
    // stg7_FIFO_buf116_stg8_update_0_9

	hw_uint<64> result;
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_6_res = stg7_FIFO_buf116_stg8_update_0_6_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<0, 64>(result, stg7_FIFO_buf116_stg8_update_0_6_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_7_res = stg7_FIFO_buf116_stg8_update_0_7_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<16, 64>(result, stg7_FIFO_buf116_stg8_update_0_7_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_8_res = stg7_FIFO_buf116_stg8_update_0_8_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<32, 64>(result, stg7_FIFO_buf116_stg8_update_0_8_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_update_0_9_res = stg7_FIFO_buf116_stg8_update_0_9_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<48, 64>(result, stg7_FIFO_buf116_stg8_update_0_9_res);
	return result;
}

struct stg8_stg8_update_0_5_to_stg8_load_to_stg8_to_gp_165659_80_cache {
	// RAM Box: {[0, 15], [-6, 24]}
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
    // { load_to_stg8_to_gp_165659[root = 0, stg8_ld58, stg8_ld57] -> stg8[stg8_ld57, stg8_ld58] : -6 <= stg8_ld58 <= 24 and 0 <= stg8_ld57 <= 15 }
  // # of banks: 1
  stg8_stg8_update_0_5_to_stg8_load_to_stg8_to_gp_165659_80_cache stg8_stg8_update_0_5_to_stg8_load_to_stg8_to_gp_165659_80;
};



inline void stg8_stg8_update_0_5_write(hw_uint<16>& stg8_stg8_update_0_5, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_update_0_5_to_stg8_load_to_stg8_to_gp_165659_80.push(stg8_stg8_update_0_5);
}

inline hw_uint<16> stg8_load_to_stg8_to_gp_165659_80_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_load_to_stg8_to_gp_165659_80 read pattern: { load_to_stg8_to_gp_165659[root = 0, stg8_ld58, stg8_ld57] -> stg8[stg8_ld57, stg8_ld58] : -6 <= stg8_ld58 <= 24 and 0 <= stg8_ld57 <= 15 }
  // Read schedule : { load_to_stg8_to_gp_165659[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 28] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  // Write schedule: { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  auto value_stg8_stg8_update_0_5 = stg8.stg8_stg8_update_0_5_to_stg8_load_to_stg8_to_gp_165659_80.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_update_0_5;
  return 0;
}

// # of bundles = 2
// load_to_stg8_to_gp_165659_read
//	stg8_load_to_stg8_to_gp_165659_80
inline hw_uint<16> stg8_load_to_stg8_to_gp_165659_read_bundle_read(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
  // # of ports in bundle: 1
    // stg8_load_to_stg8_to_gp_165659_80

	hw_uint<16> result;
	hw_uint<16> stg8_load_to_stg8_to_gp_165659_80_res = stg8_load_to_stg8_to_gp_165659_80_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<0, 16>(result, stg8_load_to_stg8_to_gp_165659_80_res);
	return result;
}

// stg8_update_0_write
//	stg8_stg8_update_0_5
inline void stg8_stg8_update_0_write_bundle_write(hw_uint<16>& stg8_update_0_write, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
	hw_uint<16> stg8_stg8_update_0_5_res = stg8_update_0_write.extract<0, 15>();
	stg8_stg8_update_0_5_write(stg8_stg8_update_0_5_res, stg8, root, stg8_0, stg8_1, dynamic_address);
}

struct stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4_cache {
	// RAM Box: {[0, 15], [-6, 23]}
	// Capacity: 34
	// # of read delays: 5
  // 0, 1, 16, 17, 33
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 14> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 15> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_16() {
		return f4;
	}

	inline hw_uint<16> peek_17() {
		return f6;
	}

	inline hw_uint<16> peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_33() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 14
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 14 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_cache {
  // Reader addrs...
    // { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -1 + stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
    // { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
    // { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + stg9_1, stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
    // { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, 1 + stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
  // # of banks: 1
  stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4_cache stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4;
};



inline void stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_write(hw_uint<16>& stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4.push(stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81);
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_1_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_1 read pattern: { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, -1 + stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
  // Read schedule : { stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  // Write schedule: { load_to_stg8_FIFO_buf120123[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 29] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4.peek_33();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_2_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_2 read pattern: { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
  // Read schedule : { stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  // Write schedule: { load_to_stg8_FIFO_buf120123[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 29] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4.peek_17();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_3_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_3 read pattern: { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + stg9_1, stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
  // Read schedule : { stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  // Write schedule: { load_to_stg8_FIFO_buf120123[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 29] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4.peek_16();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_update_0_4_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_update_0_4 read pattern: { stg9_update_0[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[stg9_1, 1 + stg9_0] : -5 <= stg9_0 <= 23 and 0 <= stg9_1 <= 14 }
  // Read schedule : { stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  // Write schedule: { load_to_stg8_FIFO_buf120123[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 29] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
  auto value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81 = stg8_FIFO_buf120.stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81;
  return 0;
}

// # of bundles = 2
// load_to_stg8_FIFO_buf120123_write
//	stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81
inline void stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_write_bundle_write(hw_uint<16>& load_to_stg8_FIFO_buf120123_write, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
	hw_uint<16> stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_res = load_to_stg8_FIFO_buf120123_write.extract<0, 15>();
	stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_write(stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_81_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
}

// stg9_update_0_read
//	stg8_FIFO_buf120_stg9_update_0_1
//	stg8_FIFO_buf120_stg9_update_0_2
//	stg8_FIFO_buf120_stg9_update_0_3
//	stg8_FIFO_buf120_stg9_update_0_4
inline hw_uint<64> stg8_FIFO_buf120_stg9_update_0_read_bundle_read(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg8_FIFO_buf120_stg9_update_0_1
    // stg8_FIFO_buf120_stg9_update_0_2
    // stg8_FIFO_buf120_stg9_update_0_3
    // stg8_FIFO_buf120_stg9_update_0_4

	hw_uint<64> result;
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_1_res = stg8_FIFO_buf120_stg9_update_0_1_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<0, 64>(result, stg8_FIFO_buf120_stg9_update_0_1_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_2_res = stg8_FIFO_buf120_stg9_update_0_2_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<16, 64>(result, stg8_FIFO_buf120_stg9_update_0_2_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_3_res = stg8_FIFO_buf120_stg9_update_0_3_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<32, 64>(result, stg8_FIFO_buf120_stg9_update_0_3_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_update_0_4_res = stg8_FIFO_buf120_stg9_update_0_4_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<48, 64>(result, stg8_FIFO_buf120_stg9_update_0_4_res);
	return result;
}

struct stg9_stg9_update_0_0_to_stg9_load_to_stg9_to_gp_36063_76_cache {
	// RAM Box: {[0, 14], [-5, 23]}
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
    // { load_to_stg9_to_gp_36063[root = 0, stg9_ld62, stg9_ld61] -> stg9[stg9_ld61, stg9_ld62] : -5 <= stg9_ld62 <= 23 and 0 <= stg9_ld61 <= 14 }
  // # of banks: 1
  stg9_stg9_update_0_0_to_stg9_load_to_stg9_to_gp_36063_76_cache stg9_stg9_update_0_0_to_stg9_load_to_stg9_to_gp_36063_76;
};



inline void stg9_stg9_update_0_0_write(hw_uint<16>& stg9_stg9_update_0_0, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_update_0_0_to_stg9_load_to_stg9_to_gp_36063_76.push(stg9_stg9_update_0_0);
}

inline hw_uint<16> stg9_load_to_stg9_to_gp_36063_76_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_load_to_stg9_to_gp_36063_76 read pattern: { load_to_stg9_to_gp_36063[root = 0, stg9_ld62, stg9_ld61] -> stg9[stg9_ld61, stg9_ld62] : -5 <= stg9_ld62 <= 23 and 0 <= stg9_ld61 <= 14 }
  // Read schedule : { load_to_stg9_to_gp_36063[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 31] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  // Write schedule: { stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  auto value_stg9_stg9_update_0_0 = stg9.stg9_stg9_update_0_0_to_stg9_load_to_stg9_to_gp_36063_76.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_0;
  return 0;
}

// # of bundles = 2
// load_to_stg9_to_gp_36063_read
//	stg9_load_to_stg9_to_gp_36063_76
inline hw_uint<16> stg9_load_to_stg9_to_gp_36063_read_bundle_read(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
  // # of ports in bundle: 1
    // stg9_load_to_stg9_to_gp_36063_76

	hw_uint<16> result;
	hw_uint<16> stg9_load_to_stg9_to_gp_36063_76_res = stg9_load_to_stg9_to_gp_36063_76_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<0, 16>(result, stg9_load_to_stg9_to_gp_36063_76_res);
	return result;
}

// stg9_update_0_write
//	stg9_stg9_update_0_0
inline void stg9_stg9_update_0_write_bundle_write(hw_uint<16>& stg9_update_0_write, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_0_res = stg9_update_0_write.extract<0, 15>();
	stg9_stg9_update_0_0_write(stg9_stg9_update_0_0_res, stg9, root, stg9_0, stg9_1, dynamic_address);
}

struct stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4_cache {
	// RAM Box: {[0, 14], [-5, 22]}
	// Capacity: 32
	// # of read delays: 5
  // 0, 1, 15, 16, 31
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 13> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 14> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_14() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_15() {
		return f4;
	}

	inline hw_uint<16> peek_16() {
		return f6;
	}

	inline hw_uint<16> peek_30() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_31() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 14
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 14 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 13
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 13 reading from capacity: 1
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
    // { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -1 + stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
    // { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
    // { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
    // { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, 1 + stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
  // # of banks: 1
  stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4_cache stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4;
};



inline void stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_write(hw_uint<16>& stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4.push(stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77);
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_66_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_66 read pattern: { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, -1 + stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
  // Read schedule : { stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  // Write schedule: { load_to_stg9_FIFO_buf124127[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 32] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4.peek_31();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_67_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_67 read pattern: { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
  // Read schedule : { stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  // Write schedule: { load_to_stg9_FIFO_buf124127[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 32] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4.peek_16();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_68_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_68 read pattern: { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + stg10_1, stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
  // Read schedule : { stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  // Write schedule: { load_to_stg9_FIFO_buf124127[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 32] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4.peek_15();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_update_0_69_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_update_0_69 read pattern: { stg10_update_0[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[stg10_1, 1 + stg10_0] : -4 <= stg10_0 <= 22 and 0 <= stg10_1 <= 13 }
  // Read schedule : { stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
  // Write schedule: { load_to_stg9_FIFO_buf124127[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 32] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
  auto value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77 = stg9_FIFO_buf124.stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77;
  return 0;
}

// # of bundles = 2
// load_to_stg9_FIFO_buf124127_write
//	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77
inline void stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_write_bundle_write(hw_uint<16>& load_to_stg9_FIFO_buf124127_write, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
	hw_uint<16> stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_res = load_to_stg9_FIFO_buf124127_write.extract<0, 15>();
	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_write(stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_77_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
}

// stg10_update_0_read
//	stg9_FIFO_buf124_stg10_update_0_66
//	stg9_FIFO_buf124_stg10_update_0_67
//	stg9_FIFO_buf124_stg10_update_0_68
//	stg9_FIFO_buf124_stg10_update_0_69
inline hw_uint<64> stg9_FIFO_buf124_stg10_update_0_read_bundle_read(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
  // # of ports in bundle: 4
    // stg9_FIFO_buf124_stg10_update_0_66
    // stg9_FIFO_buf124_stg10_update_0_67
    // stg9_FIFO_buf124_stg10_update_0_68
    // stg9_FIFO_buf124_stg10_update_0_69

	hw_uint<64> result;
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_66_res = stg9_FIFO_buf124_stg10_update_0_66_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<0, 64>(result, stg9_FIFO_buf124_stg10_update_0_66_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_67_res = stg9_FIFO_buf124_stg10_update_0_67_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<16, 64>(result, stg9_FIFO_buf124_stg10_update_0_67_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_68_res = stg9_FIFO_buf124_stg10_update_0_68_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<32, 64>(result, stg9_FIFO_buf124_stg10_update_0_68_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_update_0_69_res = stg9_FIFO_buf124_stg10_update_0_69_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<48, 64>(result, stg9_FIFO_buf124_stg10_update_0_69_res);
	return result;
}

// Operation logic
inline void in_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_1(in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_to_gp_203(in_cache& in, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_to_gp_20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_in_ld1_c__in_ld2_value = in_load_to_in_to_gp_203_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_to_gp_20
	in_to_gp_20.write(in_in_ld1_c__in_ld2_value);

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

// schedule: { in_update_0[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -15 <= d1 <= 33 and 0 <= d2 <= 24; load_to_in_to_gp_203[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
//   { in_update_0[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
// Condition for in_update_0(((((1*i3)) == 0) && (((1*i0)) == 0) && (((15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_in_to_gp_203[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
// Condition for load_to_in_to_gp_203(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -15 <= i1 <= 33 and 0 <= i2 <= 24 and 0 <= i3 <= 1 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -15; i1 <= 33; i1++) {
	    for (int i2 = 0; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_update_0(in_off_chip /* buf name */, in, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_to_gp_203(in /* buf name */, in_to_gp_20, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg14_FIFO_buf9295(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg14_to_gp_128, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_to_gp_128
	auto stg14_to_gp_128_stg14_to_gp_128_ld93_c__stg14_to_gp_128_ld94_value = stg14_to_gp_128.read();
	// Produce: stg14_FIFO_buf92
	stg14_FIFO_buf92_load_to_stg14_FIFO_buf9295_write_bundle_write(/* arg names */stg14_to_gp_128_stg14_to_gp_128_ld93_c__stg14_to_gp_128_ld94_value, stg14_FIFO_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacdyn_1_update_0(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */jacdyn_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_FIFO_buf92
	auto stg14_FIFO_buf92_1_m_jacdyn_1_1__p__0_c__1_m_jacdyn_1_0__p__0_value = stg14_FIFO_buf92_jacdyn_1_update_0_read_bundle_read(stg14_FIFO_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacdyn_1_generated_compute_unrolled_1(stg14_FIFO_buf92_1_m_jacdyn_1_1__p__0_c__1_m_jacdyn_1_0__p__0_value);
	// Produce: jacdyn_1
	jacdyn_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_jacdyn_1_0_stg14_to_gp_128_ld94_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg14_to_gp_128, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdyn_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_jacdyn_1_0_stg14_to_gp_128_ld94__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg14_FIFO_buf92_cache stg14_FIFO_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { jacdyn_1_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 48] : 0 <= d1 <= 18 and 0 <= d2 <= 9; load_to_stg14_FIFO_buf9295[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 47] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
//   { jacdyn_1_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 48] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
// Condition for jacdyn_1_update_0(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg14_FIFO_buf9295[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 47] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
// Condition for load_to_stg14_FIFO_buf9295(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 15 <= i1 <= 33 and 15 <= i2 <= 24 and 47 <= i3 <= 48 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 15; i1 <= 33; i1++) {
	    for (int i2 = 15; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg14_FIFO_buf9295(stg14_to_gp_128 /* buf name */, stg14_FIFO_buf92, 0, ((-15 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          jacdyn_1_update_0(stg14_FIFO_buf92 /* buf name */, jacdyn_1, 0, ((-15 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg2_FIFO_buf9699(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg2_to_gp_1032, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_to_gp_1032
	auto stg2_to_gp_1032_stg2_to_gp_1032_ld97_c__stg2_to_gp_1032_ld98_value = stg2_to_gp_1032.read();
	// Produce: stg2_FIFO_buf96
	stg2_FIFO_buf96_load_to_stg2_FIFO_buf9699_write_bundle_write(/* arg names */stg2_to_gp_1032_stg2_to_gp_1032_ld97_c__stg2_to_gp_1032_ld98_value, stg2_FIFO_buf96, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, stg3_cache& stg3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_FIFO_buf96
	auto stg2_FIFO_buf96_1_m_stg3_1__p__0_c__1_m_stg3_0__p___m_1_value = stg2_FIFO_buf96_stg3_update_0_read_bundle_read(stg2_FIFO_buf96/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_1_m_stg3_1__p__0_c__1_m_stg3_0__p___m_1_value);
	// Produce: stg3
	stg3_stg3_update_0_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg3_to_gp_113639(stg3_cache& stg3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg3_to_gp_1136, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3_stg3_ld37_c__stg3_ld38_value = stg3_load_to_stg3_to_gp_113639_read_bundle_read(stg3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg3_to_gp_1136
	stg3_to_gp_1136.write(stg3_stg3_ld37_c__stg3_ld38_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg2_to_gp_1032, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg3_to_gp_1136) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg2_FIFO_buf96_cache stg2_FIFO_buf96;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg3_cache stg3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20; load_to_stg3_to_gp_113639[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 13] : -11 <= d1 <= 29 and 0 <= d2 <= 20; load_to_stg2_FIFO_buf9699[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
//   { stg3_update_0[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 12] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
// Condition for stg3_update_0(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((7 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg3_to_gp_113639[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 13] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
// Condition for load_to_stg3_to_gp_113639(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((7 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg2_FIFO_buf9699[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 11] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
// Condition for load_to_stg2_FIFO_buf9699(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((9 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -7 <= i1 <= 33 and 4 <= i2 <= 24 and 12 <= i3 <= 13; [0, i1, i2, 11] : -9 <= i1 <= 33 and 3 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -9; i1 <= 33; i1++) {
	    for (int i2 = 3; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg2_FIFO_buf9699(stg2_to_gp_1032 /* buf name */, stg2_FIFO_buf96, 0, ((-3 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -7 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= -7 and i2 >= 4 }
	          // { [i0, i1, i2] : 7 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((7 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg3_update_0(stg2_FIFO_buf96 /* buf name */, stg3, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -7 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= -7 and i2 >= 4 }
	          // { [i0, i1, i2] : 7 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((7 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          load_to_stg3_to_gp_113639(stg3 /* buf name */, stg3_to_gp_1136, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg3_FIFO_buf100103(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg3_to_gp_1136, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_to_gp_1136
	auto stg3_to_gp_1136_stg3_to_gp_1136_ld101_c__stg3_to_gp_1136_ld102_value = stg3_to_gp_1136.read();
	// Produce: stg3_FIFO_buf100
	stg3_FIFO_buf100_load_to_stg3_FIFO_buf100103_write_bundle_write(/* arg names */stg3_to_gp_1136_stg3_to_gp_1136_ld101_c__stg3_to_gp_1136_ld102_value, stg3_FIFO_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, stg4_cache& stg4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_FIFO_buf100
	auto stg3_FIFO_buf100_1_m_stg4_1__p__0_c__1_m_stg4_0__p___m_1_value = stg3_FIFO_buf100_stg4_update_0_read_bundle_read(stg3_FIFO_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_1_m_stg4_1__p__0_c__1_m_stg4_0__p___m_1_value);
	// Produce: stg4
	stg4_stg4_update_0_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg4_to_gp_124043(stg4_cache& stg4, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg4_to_gp_1240, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_stg4_ld41_c__stg4_ld42_value = stg4_load_to_stg4_to_gp_124043_read_bundle_read(stg4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg4_to_gp_1240
	stg4_to_gp_1240.write(stg4_stg4_ld41_c__stg4_ld42_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg3_to_gp_1136, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg4_to_gp_1240) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg3_FIFO_buf100_cache stg3_FIFO_buf100;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg4_cache stg4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg3_FIFO_buf100103[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 14] : -11 <= d1 <= 29 and 0 <= d2 <= 20; stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19; load_to_stg4_to_gp_124043[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
//   { load_to_stg3_FIFO_buf100103[d0 = 0, d1, d2] -> [0, 4 + d1, 4 + d2, 14] : -11 <= d1 <= 29 and 0 <= d2 <= 20 }
// Condition for load_to_stg3_FIFO_buf100103(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((7 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg4_update_0[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 15] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
// Condition for stg4_update_0(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg4_to_gp_124043[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 16] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
// Condition for load_to_stg4_to_gp_124043(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -5 <= i1 <= 33 and 5 <= i2 <= 24 and 15 <= i3 <= 16; [0, i1, i2, 14] : -7 <= i1 <= 33 and 4 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -7; i1 <= 33; i1++) {
	    for (int i2 = 4; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg3_FIFO_buf100103(stg3_to_gp_1136 /* buf name */, stg3_FIFO_buf100, 0, ((-4 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -5 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= -5 and i2 >= 5 }
	          // { [i0, i1, i2] : 5 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((5 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          stg4_update_0(stg3_FIFO_buf100 /* buf name */, stg4, 0, ((-5 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -5 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= -5 and i2 >= 5 }
	          // { [i0, i1, i2] : 5 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((5 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          load_to_stg4_to_gp_124043(stg4 /* buf name */, stg4_to_gp_1240, 0, ((-5 + 1*i1)), ((-5 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg4_FIFO_buf104107(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg4_to_gp_1240, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_to_gp_1240
	auto stg4_to_gp_1240_stg4_to_gp_1240_ld105_c__stg4_to_gp_1240_ld106_value = stg4_to_gp_1240.read();
	// Produce: stg4_FIFO_buf104
	stg4_FIFO_buf104_load_to_stg4_FIFO_buf104107_write_bundle_write(/* arg names */stg4_to_gp_1240_stg4_to_gp_1240_ld105_c__stg4_to_gp_1240_ld106_value, stg4_FIFO_buf104, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, stg5_cache& stg5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_FIFO_buf104
	auto stg4_FIFO_buf104_1_m_stg5_1__p__0_c__1_m_stg5_0__p___m_1_value = stg4_FIFO_buf104_stg5_update_0_read_bundle_read(stg4_FIFO_buf104/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_1_m_stg5_1__p__0_c__1_m_stg5_0__p___m_1_value);
	// Produce: stg5
	stg5_stg5_update_0_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg5_to_gp_134447(stg5_cache& stg5, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg5_to_gp_1344, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5_stg5_ld45_c__stg5_ld46_value = stg5_load_to_stg5_to_gp_134447_read_bundle_read(stg5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg5_to_gp_1344
	stg5_to_gp_1344.write(stg5_stg5_ld45_c__stg5_ld46_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg4_to_gp_1240, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg5_to_gp_1344) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg4_FIFO_buf104_cache stg4_FIFO_buf104;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg5_cache stg5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18; load_to_stg4_FIFO_buf104107[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 17] : -10 <= d1 <= 28 and 0 <= d2 <= 19; load_to_stg5_to_gp_134447[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
//   { stg5_update_0[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 18] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
// Condition for stg5_update_0(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg4_FIFO_buf104107[d0 = 0, d1, d2] -> [0, 5 + d1, 5 + d2, 17] : -10 <= d1 <= 28 and 0 <= d2 <= 19 }
// Condition for load_to_stg4_FIFO_buf104107(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((5 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg5_to_gp_134447[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 19] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
// Condition for load_to_stg5_to_gp_134447(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -3 <= i1 <= 33 and 6 <= i2 <= 24 and 18 <= i3 <= 19; [0, i1, i2, 17] : -5 <= i1 <= 33 and 5 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -5; i1 <= 33; i1++) {
	    for (int i2 = 5; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg4_FIFO_buf104107(stg4_to_gp_1240 /* buf name */, stg4_FIFO_buf104, 0, ((-5 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -3 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= -3 and i2 >= 6 }
	          // { [i0, i1, i2] : 3 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((3 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg5_update_0(stg4_FIFO_buf104 /* buf name */, stg5, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -3 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= -3 and i2 >= 6 }
	          // { [i0, i1, i2] : 3 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((3 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_stg5_to_gp_134447(stg5 /* buf name */, stg5_to_gp_1344, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg5_FIFO_buf108111(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg5_to_gp_1344, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_to_gp_1344
	auto stg5_to_gp_1344_stg5_to_gp_1344_ld109_c__stg5_to_gp_1344_ld110_value = stg5_to_gp_1344.read();
	// Produce: stg5_FIFO_buf108
	stg5_FIFO_buf108_load_to_stg5_FIFO_buf108111_write_bundle_write(/* arg names */stg5_to_gp_1344_stg5_to_gp_1344_ld109_c__stg5_to_gp_1344_ld110_value, stg5_FIFO_buf108, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, stg6_cache& stg6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_FIFO_buf108
	auto stg5_FIFO_buf108_1_m_stg6_1__p__0_c__1_m_stg6_0__p___m_1_value = stg5_FIFO_buf108_stg6_update_0_read_bundle_read(stg5_FIFO_buf108/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_1_m_stg6_1__p__0_c__1_m_stg6_0__p___m_1_value);
	// Produce: stg6
	stg6_stg6_update_0_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg6_to_gp_144851(stg6_cache& stg6, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg6_to_gp_1448, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6_stg6_ld49_c__stg6_ld50_value = stg6_load_to_stg6_to_gp_144851_read_bundle_read(stg6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg6_to_gp_1448
	stg6_to_gp_1448.write(stg6_stg6_ld49_c__stg6_ld50_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg5_to_gp_1344, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg6_to_gp_1448) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg5_FIFO_buf108_cache stg5_FIFO_buf108;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg6_cache stg6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg5_FIFO_buf108111[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : -9 <= d1 <= 27 and 0 <= d2 <= 18; stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17; load_to_stg6_to_gp_144851[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 22] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
//   { load_to_stg5_FIFO_buf108111[d0 = 0, d1, d2] -> [0, 6 + d1, 6 + d2, 20] : -9 <= d1 <= 27 and 0 <= d2 <= 18 }
// Condition for load_to_stg5_FIFO_buf108111(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg6_update_0[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 21] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
// Condition for stg6_update_0(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg6_to_gp_144851[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 22] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
// Condition for load_to_stg6_to_gp_144851(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -1 <= i1 <= 33 and 7 <= i2 <= 24 and 21 <= i3 <= 22; [0, i1, i2, 20] : -3 <= i1 <= 33 and 6 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -3; i1 <= 33; i1++) {
	    for (int i2 = 6; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg5_FIFO_buf108111(stg5_to_gp_1344 /* buf name */, stg5_FIFO_buf108, 0, ((-6 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -1 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= -1 and i2 >= 7 }
	          // { [i0, i1, i2] : 1 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((1 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          stg6_update_0(stg5_FIFO_buf108 /* buf name */, stg6, 0, ((-7 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -1 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= -1 and i2 >= 7 }
	          // { [i0, i1, i2] : 1 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((1 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          load_to_stg6_to_gp_144851(stg6 /* buf name */, stg6_to_gp_1448, 0, ((-7 + 1*i1)), ((-7 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg6_FIFO_buf112115(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg6_to_gp_1448, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_to_gp_1448
	auto stg6_to_gp_1448_stg6_to_gp_1448_ld113_c__stg6_to_gp_1448_ld114_value = stg6_to_gp_1448.read();
	// Produce: stg6_FIFO_buf112
	stg6_FIFO_buf112_load_to_stg6_FIFO_buf112115_write_bundle_write(/* arg names */stg6_to_gp_1448_stg6_to_gp_1448_ld113_c__stg6_to_gp_1448_ld114_value, stg6_FIFO_buf112, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, stg7_cache& stg7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_FIFO_buf112
	auto stg6_FIFO_buf112_1_m_stg7_1__p__0_c__1_m_stg7_0__p___m_1_value = stg6_FIFO_buf112_stg7_update_0_read_bundle_read(stg6_FIFO_buf112/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_1_m_stg7_1__p__0_c__1_m_stg7_0__p___m_1_value);
	// Produce: stg7
	stg7_stg7_update_0_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg7_to_gp_155255(stg7_cache& stg7, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg7_to_gp_1552, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7_stg7_ld53_c__stg7_ld54_value = stg7_load_to_stg7_to_gp_155255_read_bundle_read(stg7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg7_to_gp_1552
	stg7_to_gp_1552.write(stg7_stg7_ld53_c__stg7_ld54_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg6_to_gp_1448, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg7_to_gp_1552) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg6_FIFO_buf112_cache stg6_FIFO_buf112;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg7_cache stg7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg7_to_gp_155255[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : -7 <= d1 <= 25 and 0 <= d2 <= 16; load_to_stg6_FIFO_buf112115[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 23] : -8 <= d1 <= 26 and 0 <= d2 <= 17; stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
//   { load_to_stg7_to_gp_155255[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 25] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
// Condition for load_to_stg7_to_gp_155255(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg6_FIFO_buf112115[d0 = 0, d1, d2] -> [0, 7 + d1, 7 + d2, 23] : -8 <= d1 <= 26 and 0 <= d2 <= 17 }
// Condition for load_to_stg6_FIFO_buf112115(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg7_update_0[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 24] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
// Condition for stg7_update_0(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 < i1 <= 33 and 8 <= i2 <= 24 and 24 <= i3 <= 25; [0, i1, i2, 23] : -1 <= i1 <= 33 and 7 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -1; i1 <= 33; i1++) {
	    for (int i2 = 7; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg6_FIFO_buf112115(stg6_to_gp_1448 /* buf name */, stg6_FIFO_buf112, 0, ((-7 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 8 }
	          // { [i0, i1, i2] : -1 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-1 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg7_update_0(stg6_FIFO_buf112 /* buf name */, stg7, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 > 0 and i2 >= 8 }
	          // { [i0, i1, i2] : -1 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-1 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          load_to_stg7_to_gp_155255(stg7 /* buf name */, stg7_to_gp_1552, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg7_FIFO_buf116119(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg7_to_gp_1552, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_to_gp_1552
	auto stg7_to_gp_1552_stg7_to_gp_1552_ld117_c__stg7_to_gp_1552_ld118_value = stg7_to_gp_1552.read();
	// Produce: stg7_FIFO_buf116
	stg7_FIFO_buf116_load_to_stg7_FIFO_buf116119_write_bundle_write(/* arg names */stg7_to_gp_1552_stg7_to_gp_1552_ld117_c__stg7_to_gp_1552_ld118_value, stg7_FIFO_buf116, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, stg8_cache& stg8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_FIFO_buf116
	auto stg7_FIFO_buf116_1_m_stg8_1__p__0_c__1_m_stg8_0__p___m_1_value = stg7_FIFO_buf116_stg8_update_0_read_bundle_read(stg7_FIFO_buf116/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_1_m_stg8_1__p__0_c__1_m_stg8_0__p___m_1_value);
	// Produce: stg8
	stg8_stg8_update_0_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg8_to_gp_165659(stg8_cache& stg8, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg8_to_gp_1656, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8_stg8_ld57_c__stg8_ld58_value = stg8_load_to_stg8_to_gp_165659_read_bundle_read(stg8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg8_to_gp_1656
	stg8_to_gp_1656.write(stg8_stg8_ld57_c__stg8_ld58_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg7_to_gp_1552, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg8_to_gp_1656) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg7_FIFO_buf116_cache stg7_FIFO_buf116;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg8_cache stg8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15; load_to_stg7_FIFO_buf116119[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : -7 <= d1 <= 25 and 0 <= d2 <= 16; load_to_stg8_to_gp_165659[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 28] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
//   { stg8_update_0[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 27] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
// Condition for stg8_update_0(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg7_FIFO_buf116119[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : -7 <= d1 <= 25 and 0 <= d2 <= 16 }
// Condition for load_to_stg7_FIFO_buf116119(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg8_to_gp_165659[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 28] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
// Condition for load_to_stg8_to_gp_165659(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 3 <= i1 <= 33 and 9 <= i2 <= 24 and 27 <= i3 <= 28; [0, i1, i2, 26] : 0 < i1 <= 33 and 8 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 1; i1 <= 33; i1++) {
	    for (int i2 = 8; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg7_FIFO_buf116119(stg7_to_gp_1552 /* buf name */, stg7_FIFO_buf116, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 9 }
	          // { [i0, i1, i2] : -3 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-3 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          stg8_update_0(stg7_FIFO_buf116 /* buf name */, stg8, 0, ((-9 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 3 and i2 >= 9 }
	          // { [i0, i1, i2] : -3 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-3 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          load_to_stg8_to_gp_165659(stg8 /* buf name */, stg8_to_gp_1656, 0, ((-9 + 1*i1)), ((-9 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg8_FIFO_buf120123(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg8_to_gp_1656, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_to_gp_1656
	auto stg8_to_gp_1656_stg8_to_gp_1656_ld121_c__stg8_to_gp_1656_ld122_value = stg8_to_gp_1656.read();
	// Produce: stg8_FIFO_buf120
	stg8_FIFO_buf120_load_to_stg8_FIFO_buf120123_write_bundle_write(/* arg names */stg8_to_gp_1656_stg8_to_gp_1656_ld121_c__stg8_to_gp_1656_ld122_value, stg8_FIFO_buf120, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, stg9_cache& stg9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_FIFO_buf120
	auto stg8_FIFO_buf120_1_m_stg9_1__p__0_c__1_m_stg9_0__p___m_1_value = stg8_FIFO_buf120_stg9_update_0_read_bundle_read(stg8_FIFO_buf120/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_1_m_stg9_1__p__0_c__1_m_stg9_0__p___m_1_value);
	// Produce: stg9
	stg9_stg9_update_0_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg9_to_gp_36063(stg9_cache& stg9, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg9_to_gp_360, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9_stg9_ld61_c__stg9_ld62_value = stg9_load_to_stg9_to_gp_36063_read_bundle_read(stg9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg9_to_gp_360
	stg9_to_gp_360.write(stg9_stg9_ld61_c__stg9_ld62_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg8_to_gp_1656, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg9_to_gp_360) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg8_FIFO_buf120_cache stg8_FIFO_buf120;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_cache stg9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg8_FIFO_buf120123[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 29] : -6 <= d1 <= 24 and 0 <= d2 <= 15; load_to_stg9_to_gp_36063[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 31] : -5 <= d1 <= 23 and 0 <= d2 <= 14; stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
//   { load_to_stg8_FIFO_buf120123[d0 = 0, d1, d2] -> [0, 9 + d1, 9 + d2, 29] : -6 <= d1 <= 24 and 0 <= d2 <= 15 }
// Condition for load_to_stg8_FIFO_buf120123(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg9_to_gp_36063[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 31] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
// Condition for load_to_stg9_to_gp_36063(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg9_update_0[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 30] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
// Condition for stg9_update_0(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 5 <= i1 <= 33 and 10 <= i2 <= 24 and 30 <= i3 <= 31; [0, i1, i2, 29] : 3 <= i1 <= 33 and 9 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 3; i1 <= 33; i1++) {
	    for (int i2 = 9; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg8_FIFO_buf120123(stg8_to_gp_1656 /* buf name */, stg8_FIFO_buf120, 0, ((-9 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	          // { [i0, i1, i2] : -5 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-5 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg9_update_0(stg8_FIFO_buf120 /* buf name */, stg9, 0, ((-10 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 5 and i2 >= 10 }
	          // { [i0, i1, i2] : -5 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-5 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_stg9_to_gp_36063(stg9 /* buf name */, stg9_to_gp_360, 0, ((-10 + 1*i1)), ((-10 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_in_FIFO_buf6467(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_to_gp_20, in_FIFO_buf64_cache& in_FIFO_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_to_gp_20
	auto in_to_gp_20_in_to_gp_20_ld65_c__in_to_gp_20_ld66_value = in_to_gp_20.read();
	// Produce: in_FIFO_buf64
	in_FIFO_buf64_load_to_in_FIFO_buf6467_write_bundle_write(/* arg names */in_to_gp_20_in_to_gp_20_ld65_c__in_to_gp_20_ld66_value, in_FIFO_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0(in_FIFO_buf64_cache& in_FIFO_buf64, stg0_cache& stg0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_FIFO_buf64
	auto in_FIFO_buf64_1_m_stg0_1__p__0_c__1_m_stg0_0__p___m_1_value = in_FIFO_buf64_stg0_update_0_read_bundle_read(in_FIFO_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_1(in_FIFO_buf64_1_m_stg0_1__p__0_c__1_m_stg0_0__p___m_1_value);
	// Produce: stg0
	stg0_stg0_update_0_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg0_to_gp_847(stg0_cache& stg0, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg0_to_gp_84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_stg0_ld5_c__stg0_ld6_value = stg0_load_to_stg0_to_gp_847_read_bundle_read(stg0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg0_to_gp_84
	stg0_to_gp_84.write(stg0_stg0_ld5_c__stg0_ld6_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_to_gp_20, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg0_to_gp_84) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_FIFO_buf64_cache in_FIFO_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg0_to_gp_847[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : -14 <= d1 <= 32 and 0 <= d2 <= 23; stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23; load_to_in_FIFO_buf6467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
//   { load_to_stg0_to_gp_847[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 4] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
// Condition for load_to_stg0_to_gp_847(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((13 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg0_update_0[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 3] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
// Condition for stg0_update_0(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((13 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_in_FIFO_buf6467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -15 <= d1 <= 33 and 0 <= d2 <= 24 }
// Condition for load_to_in_FIFO_buf6467(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -13 <= i1 <= 33 and 0 < i2 <= 24 and 3 <= i3 <= 4; [0, i1, i2, 2] : -15 <= i1 <= 33 and 0 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -15; i1 <= 33; i1++) {
	    for (int i2 = 0; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_FIFO_buf6467(in_to_gp_20 /* buf name */, in_FIFO_buf64, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -13 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= -13 and i2 > 0 }
	          // { [i0, i1, i2] : 13 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((13 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          stg0_update_0(in_FIFO_buf64 /* buf name */, stg0, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -13 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= -13 and i2 > 0 }
	          // { [i0, i1, i2] : 13 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((13 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          load_to_stg0_to_gp_847(stg0 /* buf name */, stg0_to_gp_84, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg9_FIFO_buf124127(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg9_to_gp_360, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_to_gp_360
	auto stg9_to_gp_360_stg9_to_gp_360_ld125_c__stg9_to_gp_360_ld126_value = stg9_to_gp_360.read();
	// Produce: stg9_FIFO_buf124
	stg9_FIFO_buf124_load_to_stg9_FIFO_buf124127_write_bundle_write(/* arg names */stg9_to_gp_360_stg9_to_gp_360_ld125_c__stg9_to_gp_360_ld126_value, stg9_FIFO_buf124, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_update_0(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, stg10_cache& stg10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_FIFO_buf124
	auto stg9_FIFO_buf124_1_m_stg10_1__p__0_c__1_m_stg10_0__p___m_1_value = stg9_FIFO_buf124_stg10_update_0_read_bundle_read(stg9_FIFO_buf124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_1_m_stg10_1__p__0_c__1_m_stg10_0__p___m_1_value);
	// Produce: stg10
	stg10_stg10_update_0_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg10_to_gp_41215(stg10_cache& stg10, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg10_to_gp_412, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10_stg10_ld13_c__stg10_ld14_value = stg10_load_to_stg10_to_gp_41215_read_bundle_read(stg10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg10_to_gp_412
	stg10_to_gp_412.write(stg10_stg10_ld13_c__stg10_ld14_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg9_to_gp_360, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg10_to_gp_412) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126__debug.csv");
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

// schedule: { load_to_stg9_FIFO_buf124127[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 32] : -5 <= d1 <= 23 and 0 <= d2 <= 14; stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13; load_to_stg10_to_gp_41215[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 34] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
//   { load_to_stg9_FIFO_buf124127[d0 = 0, d1, d2] -> [0, 10 + d1, 10 + d2, 32] : -5 <= d1 <= 23 and 0 <= d2 <= 14 }
// Condition for load_to_stg9_FIFO_buf124127(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-5 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg10_update_0[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 33] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
// Condition for stg10_update_0(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg10_to_gp_41215[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 34] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
// Condition for load_to_stg10_to_gp_41215(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 7 <= i1 <= 33 and 11 <= i2 <= 24 and 33 <= i3 <= 34; [0, i1, i2, 32] : 5 <= i1 <= 33 and 10 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 5; i1 <= 33; i1++) {
	    for (int i2 = 10; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg9_FIFO_buf124127(stg9_to_gp_360 /* buf name */, stg9_FIFO_buf124, 0, ((-10 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 11 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          stg10_update_0(stg9_FIFO_buf124 /* buf name */, stg10, 0, ((-11 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 7 and i2 >= 11 }
	          // { [i0, i1, i2] : -7 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-7 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          load_to_stg10_to_gp_41215(stg10 /* buf name */, stg10_to_gp_412, 0, ((-11 + 1*i1)), ((-11 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg10_FIFO_buf7679(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg10_to_gp_412, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_to_gp_412
	auto stg10_to_gp_412_stg10_to_gp_412_ld77_c__stg10_to_gp_412_ld78_value = stg10_to_gp_412.read();
	// Produce: stg10_FIFO_buf76
	stg10_FIFO_buf76_load_to_stg10_FIFO_buf7679_write_bundle_write(/* arg names */stg10_to_gp_412_stg10_to_gp_412_ld77_c__stg10_to_gp_412_ld78_value, stg10_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_update_0(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, stg11_cache& stg11, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_FIFO_buf76
	auto stg10_FIFO_buf76_1_m_stg11_1__p__0_c__1_m_stg11_0__p___m_1_value = stg10_FIFO_buf76_stg11_update_0_read_bundle_read(stg10_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_1_m_stg11_1__p__0_c__1_m_stg11_0__p___m_1_value);
	// Produce: stg11
	stg11_stg11_update_0_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg11_to_gp_51619(stg11_cache& stg11, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg11_to_gp_516, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11_stg11_ld17_c__stg11_ld18_value = stg11_load_to_stg11_to_gp_51619_read_bundle_read(stg11/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg11_to_gp_516
	stg11_to_gp_516.write(stg11_stg11_ld17_c__stg11_ld18_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg10_to_gp_412, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg11_to_gp_516) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg10_FIFO_buf76_cache stg10_FIFO_buf76;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg11_cache stg11;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg11_to_gp_51619[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 37] : -3 <= d1 <= 21 and 0 <= d2 <= 12; load_to_stg10_FIFO_buf7679[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 35] : -4 <= d1 <= 22 and 0 <= d2 <= 13; stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
//   { load_to_stg11_to_gp_51619[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 37] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
// Condition for load_to_stg11_to_gp_51619(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg10_FIFO_buf7679[d0 = 0, d1, d2] -> [0, 11 + d1, 11 + d2, 35] : -4 <= d1 <= 22 and 0 <= d2 <= 13 }
// Condition for load_to_stg10_FIFO_buf7679(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-7 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg11_update_0[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 36] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
// Condition for stg11_update_0(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 9 <= i1 <= 33 and 12 <= i2 <= 24 and 36 <= i3 <= 37; [0, i1, i2, 35] : 7 <= i1 <= 33 and 11 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 7; i1 <= 33; i1++) {
	    for (int i2 = 11; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg10_FIFO_buf7679(stg10_to_gp_412 /* buf name */, stg10_FIFO_buf76, 0, ((-11 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 12 }
	          // { [i0, i1, i2] : -9 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-9 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg11_update_0(stg10_FIFO_buf76 /* buf name */, stg11, 0, ((-12 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 9 and i2 >= 12 }
	          // { [i0, i1, i2] : -9 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-9 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          load_to_stg11_to_gp_51619(stg11 /* buf name */, stg11_to_gp_516, 0, ((-12 + 1*i1)), ((-12 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg11_FIFO_buf8083(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg11_to_gp_516, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_to_gp_516
	auto stg11_to_gp_516_stg11_to_gp_516_ld81_c__stg11_to_gp_516_ld82_value = stg11_to_gp_516.read();
	// Produce: stg11_FIFO_buf80
	stg11_FIFO_buf80_load_to_stg11_FIFO_buf8083_write_bundle_write(/* arg names */stg11_to_gp_516_stg11_to_gp_516_ld81_c__stg11_to_gp_516_ld82_value, stg11_FIFO_buf80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_update_0(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, stg12_cache& stg12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_FIFO_buf80
	auto stg11_FIFO_buf80_1_m_stg12_1__p__0_c__1_m_stg12_0__p___m_1_value = stg11_FIFO_buf80_stg12_update_0_read_bundle_read(stg11_FIFO_buf80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_1_m_stg12_1__p__0_c__1_m_stg12_0__p___m_1_value);
	// Produce: stg12
	stg12_stg12_update_0_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg12_to_gp_62023(stg12_cache& stg12, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg12_to_gp_620, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12_stg12_ld21_c__stg12_ld22_value = stg12_load_to_stg12_to_gp_62023_read_bundle_read(stg12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg12_to_gp_620
	stg12_to_gp_620.write(stg12_stg12_ld21_c__stg12_ld22_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg11_to_gp_516, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg12_to_gp_620) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg11_FIFO_buf80_cache stg11_FIFO_buf80;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg12_cache stg12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11; load_to_stg11_FIFO_buf8083[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 38] : -3 <= d1 <= 21 and 0 <= d2 <= 12; load_to_stg12_to_gp_62023[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 40] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
//   { stg12_update_0[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 39] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
// Condition for stg12_update_0(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg11_FIFO_buf8083[d0 = 0, d1, d2] -> [0, 12 + d1, 12 + d2, 38] : -3 <= d1 <= 21 and 0 <= d2 <= 12 }
// Condition for load_to_stg11_FIFO_buf8083(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-9 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg12_to_gp_62023[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 40] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
// Condition for load_to_stg12_to_gp_62023(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 11 <= i1 <= 33 and 13 <= i2 <= 24 and 39 <= i3 <= 40; [0, i1, i2, 38] : 9 <= i1 <= 33 and 12 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 9; i1 <= 33; i1++) {
	    for (int i2 = 12; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg11_FIFO_buf8083(stg11_to_gp_516 /* buf name */, stg11_FIFO_buf80, 0, ((-12 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 13 }
	          // { [i0, i1, i2] : -11 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-11 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          stg12_update_0(stg11_FIFO_buf80 /* buf name */, stg12, 0, ((-13 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 11 and i2 >= 13 }
	          // { [i0, i1, i2] : -11 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-11 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          load_to_stg12_to_gp_62023(stg12 /* buf name */, stg12_to_gp_620, 0, ((-13 + 1*i1)), ((-13 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg12_FIFO_buf8487(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg12_to_gp_620, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_to_gp_620
	auto stg12_to_gp_620_stg12_to_gp_620_ld85_c__stg12_to_gp_620_ld86_value = stg12_to_gp_620.read();
	// Produce: stg12_FIFO_buf84
	stg12_FIFO_buf84_load_to_stg12_FIFO_buf8487_write_bundle_write(/* arg names */stg12_to_gp_620_stg12_to_gp_620_ld85_c__stg12_to_gp_620_ld86_value, stg12_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_update_0(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, stg13_cache& stg13, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_FIFO_buf84
	auto stg12_FIFO_buf84_1_m_stg13_1__p__0_c__1_m_stg13_0__p___m_1_value = stg12_FIFO_buf84_stg13_update_0_read_bundle_read(stg12_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_1_m_stg13_1__p__0_c__1_m_stg13_0__p___m_1_value);
	// Produce: stg13
	stg13_stg13_update_0_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg13_to_gp_72427(stg13_cache& stg13, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg13_to_gp_724, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13_stg13_ld25_c__stg13_ld26_value = stg13_load_to_stg13_to_gp_72427_read_bundle_read(stg13/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg13_to_gp_724
	stg13_to_gp_724.write(stg13_stg13_ld25_c__stg13_ld26_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg12_to_gp_620, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg13_to_gp_724) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg12_FIFO_buf84_cache stg12_FIFO_buf84;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg13_cache stg13;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10; load_to_stg12_FIFO_buf8487[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 41] : -2 <= d1 <= 20 and 0 <= d2 <= 11; load_to_stg13_to_gp_72427[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 43] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
//   { stg13_update_0[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
// Condition for stg13_update_0(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg12_FIFO_buf8487[d0 = 0, d1, d2] -> [0, 13 + d1, 13 + d2, 41] : -2 <= d1 <= 20 and 0 <= d2 <= 11 }
// Condition for load_to_stg12_FIFO_buf8487(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-11 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg13_to_gp_72427[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 43] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
// Condition for load_to_stg13_to_gp_72427(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 13 <= i1 <= 33 and 14 <= i2 <= 24 and 42 <= i3 <= 43; [0, i1, i2, 41] : 11 <= i1 <= 33 and 13 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 11; i1 <= 33; i1++) {
	    for (int i2 = 13; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg12_FIFO_buf8487(stg12_to_gp_620 /* buf name */, stg12_FIFO_buf84, 0, ((-13 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 14 }
	          // { [i0, i1, i2] : -13 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-13 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg13_update_0(stg12_FIFO_buf84 /* buf name */, stg13, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 13 and i2 >= 14 }
	          // { [i0, i1, i2] : -13 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-13 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_stg13_to_gp_72427(stg13 /* buf name */, stg13_to_gp_724, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg13_FIFO_buf8891(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg13_to_gp_724, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_to_gp_724
	auto stg13_to_gp_724_stg13_to_gp_724_ld89_c__stg13_to_gp_724_ld90_value = stg13_to_gp_724.read();
	// Produce: stg13_FIFO_buf88
	stg13_FIFO_buf88_load_to_stg13_FIFO_buf8891_write_bundle_write(/* arg names */stg13_to_gp_724_stg13_to_gp_724_ld89_c__stg13_to_gp_724_ld90_value, stg13_FIFO_buf88, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_update_0(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, stg14_cache& stg14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_FIFO_buf88
	auto stg13_FIFO_buf88_1_m_stg14_1__p__0_c__1_m_stg14_0__p___m_1_value = stg13_FIFO_buf88_stg14_update_0_read_bundle_read(stg13_FIFO_buf88/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_1_m_stg14_1__p__0_c__1_m_stg14_0__p___m_1_value);
	// Produce: stg14
	stg14_stg14_update_0_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg14_to_gp_12831(stg14_cache& stg14, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg14_to_gp_128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14_stg14_ld29_c__stg14_ld30_value = stg14_load_to_stg14_to_gp_12831_read_bundle_read(stg14/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg14_to_gp_128
	stg14_to_gp_128.write(stg14_stg14_ld29_c__stg14_ld30_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg13_to_gp_724, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg14_to_gp_128) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg13_FIFO_buf88_cache stg13_FIFO_buf88;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg14_cache stg14;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg14_to_gp_12831[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 46] : 0 <= d1 <= 18 and 0 <= d2 <= 9; load_to_stg13_FIFO_buf8891[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 44] : -1 <= d1 <= 19 and 0 <= d2 <= 10; stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
//   { load_to_stg14_to_gp_12831[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 46] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
// Condition for load_to_stg14_to_gp_12831(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg13_FIFO_buf8891[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 44] : -1 <= d1 <= 19 and 0 <= d2 <= 10 }
// Condition for load_to_stg13_FIFO_buf8891(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-13 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg14_update_0[d0 = 0, d1, d2] -> [0, 15 + d1, 15 + d2, 45] : 0 <= d1 <= 18 and 0 <= d2 <= 9 }
// Condition for stg14_update_0(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-15 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 15 <= i1 <= 33 and 15 <= i2 <= 24 and 45 <= i3 <= 46; [0, i1, i2, 44] : 13 <= i1 <= 33 and 14 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 13; i1 <= 33; i1++) {
	    for (int i2 = 14; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg13_FIFO_buf8891(stg13_to_gp_724 /* buf name */, stg13_FIFO_buf88, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 15 }
	          // { [i0, i1, i2] : -15 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-15 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          stg14_update_0(stg13_FIFO_buf88 /* buf name */, stg14, 0, ((-15 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 15 and i2 >= 15 }
	          // { [i0, i1, i2] : -15 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-15 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          load_to_stg14_to_gp_12831(stg14 /* buf name */, stg14_to_gp_128, 0, ((-15 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg0_FIFO_buf6871(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg0_to_gp_84, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_to_gp_84
	auto stg0_to_gp_84_stg0_to_gp_84_ld69_c__stg0_to_gp_84_ld70_value = stg0_to_gp_84.read();
	// Produce: stg0_FIFO_buf68
	stg0_FIFO_buf68_load_to_stg0_FIFO_buf6871_write_bundle_write(/* arg names */stg0_to_gp_84_stg0_to_gp_84_ld69_c__stg0_to_gp_84_ld70_value, stg0_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, stg1_cache& stg1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_FIFO_buf68
	auto stg0_FIFO_buf68_1_m_stg1_1__p__0_c__1_m_stg1_0__p___m_1_value = stg0_FIFO_buf68_stg1_update_0_read_bundle_read(stg0_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_1_m_stg1_1__p__0_c__1_m_stg1_0__p___m_1_value);
	// Produce: stg1
	stg1_stg1_update_0_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg1_to_gp_9811(stg1_cache& stg1, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg1_to_gp_98, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1_stg1_ld9_c__stg1_ld10_value = stg1_load_to_stg1_to_gp_9811_read_bundle_read(stg1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg1_to_gp_98
	stg1_to_gp_98.write(stg1_stg1_ld9_c__stg1_ld10_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg0_to_gp_84, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg1_to_gp_98) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg0_FIFO_buf68_cache stg0_FIFO_buf68;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg1_cache stg1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_stg1_to_gp_9811[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : -13 <= d1 <= 31 and 0 <= d2 <= 22; load_to_stg0_FIFO_buf6871[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -14 <= d1 <= 32 and 0 <= d2 <= 23; stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
//   { load_to_stg1_to_gp_9811[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
// Condition for load_to_stg1_to_gp_9811(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((11 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg0_FIFO_buf6871[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -14 <= d1 <= 32 and 0 <= d2 <= 23 }
// Condition for load_to_stg0_FIFO_buf6871(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((13 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { stg1_update_0[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 6] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
// Condition for stg1_update_0(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((11 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -11 <= i1 <= 33 and 2 <= i2 <= 24 and 6 <= i3 <= 7; [0, i1, i2, 5] : -13 <= i1 <= 33 and 0 < i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -13; i1 <= 33; i1++) {
	    for (int i2 = 1; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg0_FIFO_buf6871(stg0_to_gp_84 /* buf name */, stg0_FIFO_buf68, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -11 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= -11 and i2 >= 2 }
	          // { [i0, i1, i2] : 11 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((11 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg1_update_0(stg0_FIFO_buf68 /* buf name */, stg1, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -11 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= -11 and i2 >= 2 }
	          // { [i0, i1, i2] : 11 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((11 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          load_to_stg1_to_gp_9811(stg1 /* buf name */, stg1_to_gp_98, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_stg1_FIFO_buf7275(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg1_to_gp_98, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_to_gp_98
	auto stg1_to_gp_98_stg1_to_gp_98_ld73_c__stg1_to_gp_98_ld74_value = stg1_to_gp_98.read();
	// Produce: stg1_FIFO_buf72
	stg1_FIFO_buf72_load_to_stg1_FIFO_buf7275_write_bundle_write(/* arg names */stg1_to_gp_98_stg1_to_gp_98_ld73_c__stg1_to_gp_98_ld74_value, stg1_FIFO_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, stg2_cache& stg2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_FIFO_buf72
	auto stg1_FIFO_buf72_1_m_stg2_1__p__0_c__1_m_stg2_0__p___m_1_value = stg1_FIFO_buf72_stg2_update_0_read_bundle_read(stg1_FIFO_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_1_m_stg2_1__p__0_c__1_m_stg2_0__p___m_1_value);
	// Produce: stg2
	stg2_stg2_update_0_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_stg2_to_gp_103235(stg2_cache& stg2, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */stg2_to_gp_1032, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2_stg2_ld33_c__stg2_ld34_value = stg2_load_to_stg2_to_gp_103235_read_bundle_read(stg2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: stg2_to_gp_1032
	stg2_to_gp_1032.write(stg2_stg2_ld33_c__stg2_ld34_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg1_to_gp_98, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */stg2_to_gp_1032) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg1_FIFO_buf72_cache stg1_FIFO_buf72;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg2_cache stg2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21; load_to_stg1_FIFO_buf7275[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -13 <= d1 <= 31 and 0 <= d2 <= 22; load_to_stg2_to_gp_103235[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
//   { stg2_update_0[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 9] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
// Condition for stg2_update_0(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((9 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg1_FIFO_buf7275[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -13 <= d1 <= 31 and 0 <= d2 <= 22 }
// Condition for load_to_stg1_FIFO_buf7275(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((11 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))
//   { load_to_stg2_to_gp_103235[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 10] : -12 <= d1 <= 30 and 0 <= d2 <= 21 }
// Condition for load_to_stg2_to_gp_103235(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((9 + 1*i1)) >= 0) && (((33 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((24 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : -9 <= i1 <= 33 and 3 <= i2 <= 24 and 9 <= i3 <= 10; [0, i1, i2, 8] : -11 <= i1 <= 33 and 2 <= i2 <= 24 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = -11; i1 <= 33; i1++) {
	    for (int i2 = 2; i2 <= 24; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_stg1_FIFO_buf7275(stg1_to_gp_98 /* buf name */, stg1_FIFO_buf72, 0, ((-2 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -9 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= -9 and i2 >= 3 }
	          // { [i0, i1, i2] : 9 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((9 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          stg2_update_0(stg1_FIFO_buf72 /* buf name */, stg2, 0, ((-3 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= -9 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= -9 and i2 >= 3 }
	          // { [i0, i1, i2] : 9 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((9 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          load_to_stg2_to_gp_103235(stg2 /* buf name */, stg2_to_gp_1032, 0, ((-3 + 1*i1)), ((-3 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void jacdyn_1_opt(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdyn_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacdyn_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<16> > in_to_gp_20;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_20.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg14_to_gp_128;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg14_to_gp_128.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg2_to_gp_1032;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg2_to_gp_1032.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg3_to_gp_1136;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg3_to_gp_1136.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg4_to_gp_1240;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg4_to_gp_1240.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg5_to_gp_1344;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg5_to_gp_1344.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg6_to_gp_1448;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg6_to_gp_1448.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg7_to_gp_1552;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg7_to_gp_1552.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg8_to_gp_1656;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg8_to_gp_1656.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg9_to_gp_360;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg9_to_gp_360.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg0_to_gp_84;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg0_to_gp_84.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg10_to_gp_412;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg10_to_gp_412.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg11_to_gp_516;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg11_to_gp_516.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg12_to_gp_620;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg12_to_gp_620.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg13_to_gp_724;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg13_to_gp_724.values depth=32
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<16> > stg1_to_gp_98;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg1_to_gp_98.values depth=32
#endif //__VIVADO_SYNTH__


  Extracted_in_0_in_ld2_(in_off_chip, in_to_gp_20);
  Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(in_to_gp_20, stg0_to_gp_84);
  Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(stg0_to_gp_84, stg1_to_gp_98);
  Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(stg1_to_gp_98, stg2_to_gp_1032);
  Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(stg2_to_gp_1032, stg3_to_gp_1136);
  Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(stg3_to_gp_1136, stg4_to_gp_1240);
  Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(stg4_to_gp_1240, stg5_to_gp_1344);
  Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(stg5_to_gp_1344, stg6_to_gp_1448);
  Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(stg6_to_gp_1448, stg7_to_gp_1552);
  Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(stg7_to_gp_1552, stg8_to_gp_1656);
  Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(stg8_to_gp_1656, stg9_to_gp_360);
  Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(stg9_to_gp_360, stg10_to_gp_412);
  Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(stg10_to_gp_412, stg11_to_gp_516);
  Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(stg11_to_gp_516, stg12_to_gp_620);
  Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(stg12_to_gp_620, stg13_to_gp_724);
  Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(stg13_to_gp_724, stg14_to_gp_128);
  Extracted_jacdyn_1_0_stg14_to_gp_128_ld94_(stg14_to_gp_128, jacdyn_1);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacdyn_1_opt_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */jacdyn_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jacdyn_1_opt(in_off_chip, jacdyn_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -15 <= in_0 <= 33 and 0 <= in_1 <= 24 }
const int in_update_0_read_pipe0_num_transfers = 1225;
  // { jacdyn_1_update_0[root = 0, jacdyn_1_0, jacdyn_1_1] -> jacdyn_1[jacdyn_1_1, jacdyn_1_0] : 0 <= jacdyn_1_0 <= 18 and 0 <= jacdyn_1_1 <= 9 }
const int jacdyn_1_update_0_write_pipe0_num_transfers = 190;


extern "C" {

void jacdyn_1_opt_accel(hw_uint<16>* in_update_0_read_pipe0, hw_uint<16>* jacdyn_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacdyn_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jacdyn_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > jacdyn_1_update_0_write_pipe0_channel;

  burst_read<16>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  jacdyn_1_opt_wrapper(in_update_0_read_pipe0_channel, jacdyn_1_update_0_write_pipe0_channel, size);

  burst_write<16>(jacdyn_1_update_0_write_pipe0, jacdyn_1_update_0_write_pipe0_channel, jacdyn_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jacdyn_1_opt_rdai(HWStream<hw_uint<16> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  jacdyn_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = jacdyn_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jacdyn_1_opt(in_update_0_read_pipe0, jacdyn_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

