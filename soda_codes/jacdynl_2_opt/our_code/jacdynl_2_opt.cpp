#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: jacdynl_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "jacdynl_2_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct in_in_1_merged383_282_to_in_in_ld1_merged437_280_cache {
	// RAM Box: {[1, 1109], [-15, 1934]}
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

struct in_in_1_merged383_283_to_in_in_ld1_merged437_281_cache {
	// RAM Box: {[0, 1108], [-15, 1934]}
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
    // { in_ld1_merged437[root = 0, in_ld2, in_ld1] -> in[1 + 2in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 554 }
    // { in_ld1_merged437[root = 0, in_ld2, in_ld1] -> in[2in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 554 }
  // # of banks: 2
  in_in_1_merged383_282_to_in_in_ld1_merged437_280_cache in_in_1_merged383_282_to_in_in_ld1_merged437_280;
  in_in_1_merged383_283_to_in_in_ld1_merged437_281_cache in_in_1_merged383_283_to_in_in_ld1_merged437_281;
};



inline void in_in_1_merged383_282_write(hw_uint<16>& in_in_1_merged383_282, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_1_merged383_282_to_in_in_ld1_merged437_280.push(in_in_1_merged383_282);
}

inline void in_in_1_merged383_283_write(hw_uint<16>& in_in_1_merged383_283, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
  in.in_in_1_merged383_283_to_in_in_ld1_merged437_281.push(in_in_1_merged383_283);
}

inline hw_uint<16> in_in_ld1_merged437_280_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_in_ld1_merged437_280 read pattern: { in_ld1_merged437[root = 0, in_ld2, in_ld1] -> in[1 + 2in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 554 }
  // Read schedule : { in_ld1_merged437[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  // Write schedule: { in_1_merged383[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_in_1_merged383_282 = in.in_in_1_merged383_282_to_in_in_ld1_merged437_280.peek(/* one reader or all rams */ 0);
  return value_in_in_1_merged383_282;
  return 0;
}

inline hw_uint<16> in_in_ld1_merged437_281_select(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_in_ld1_merged437_281 read pattern: { in_ld1_merged437[root = 0, in_ld2, in_ld1] -> in[2in_ld1, -15 + in_ld2] : 0 <= in_ld2 <= 1949 and 0 <= in_ld1 <= 554 }
  // Read schedule : { in_ld1_merged437[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  // Write schedule: { in_1_merged383[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_in_1_merged383_283 = in.in_in_1_merged383_283_to_in_in_ld1_merged437_281.peek(/* one reader or all rams */ 0);
  return value_in_in_1_merged383_283;
  return 0;
}

// # of bundles = 2
// in_1_merged383_write
//	in_in_1_merged383_282
//	in_in_1_merged383_283
inline void in_in_1_merged383_write_bundle_write(hw_uint<32>& in_1_merged383_write, in_cache& in, int root, int in_0, int in_1, int dynamic_address) {
	hw_uint<16> in_in_1_merged383_282_res = in_1_merged383_write.extract<0, 15>();
	in_in_1_merged383_282_write(in_in_1_merged383_282_res, in, root, in_0, in_1, dynamic_address);
	hw_uint<16> in_in_1_merged383_283_res = in_1_merged383_write.extract<16, 31>();
	in_in_1_merged383_283_write(in_in_1_merged383_283_res, in, root, in_0, in_1, dynamic_address);
}

// in_ld1_merged437_read
//	in_in_ld1_merged437_280
//	in_in_ld1_merged437_281
inline hw_uint<32> in_in_ld1_merged437_read_bundle_read(in_cache& in, int root, int in_ld2, int in_ld1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_in_ld1_merged437_280
    // in_in_ld1_merged437_281

	hw_uint<32> result;
	hw_uint<16> in_in_ld1_merged437_280_res = in_in_ld1_merged437_280_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<0, 32>(result, in_in_ld1_merged437_280_res);
	hw_uint<16> in_in_ld1_merged437_281_res = in_in_ld1_merged437_281_select(in, root, in_ld2, in_ld1, dynamic_address);
	set_at<16, 32>(result, in_in_ld1_merged437_281_res);
	return result;
}

struct in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4_cache {
	// RAM Box: {[1, 1107], [-15, 1934]}
	// Capacity: 1112
	// # of read delays: 4
  // 0, 1, 556, 1111
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 554> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 554> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_555() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_556() {
		return f4;
	}

	inline hw_uint<16> peek_1110() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1111() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 554
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 554 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 554
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 554 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4_cache {
	// RAM Box: {[0, 1108], [-15, 1933]}
	// Capacity: 1112
	// # of read delays: 5
  // 0, 1, 555, 556, 1111
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 553> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 554> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_554() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_555() {
		return f4;
	}

	inline hw_uint<16> peek_556() {
		return f6;
	}

	inline hw_uint<16> peek_1110() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1111() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 554
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 554 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 553 reading from capacity: 1
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
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
    // { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // # of banks: 2
  in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4_cache in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4;
  in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4_cache in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4;
};



inline void in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_write(hw_uint<16>& in_FIFO_buf64_in_to_gp_20_ld65_merged467_274, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4.push(in_FIFO_buf64_in_to_gp_20_ld65_merged467_274);
}

inline void in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_write(hw_uint<16>& in_FIFO_buf64_in_to_gp_20_ld65_merged467_275, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
  in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4.push(in_FIFO_buf64_in_to_gp_20_ld65_merged467_275);
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_262_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_262 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4.peek_1111();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_263_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_263 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4.peek_556();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_264_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_264 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2 + 2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4.peek_555();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_265_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_265 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_266_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_266 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2stg0_1, -15 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4.peek_1111();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_267_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_267 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4.peek_556();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_268_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_268 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[1 + 2stg0_1, -14 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_merged_banks_4.peek_556();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_274;
  return 0;
}

inline hw_uint<16> in_FIFO_buf64_stg0_1_merged386_269_select(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_FIFO_buf64_stg0_1_merged386_269 read pattern: { stg0_1_merged386[root = 0, stg0_0, stg0_1] -> in_FIFO_buf64[2stg0_1, -13 + stg0_0] : 0 <= stg0_0 <= 1947 and 0 <= stg0_1 <= 553 }
  // Read schedule : { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
  auto value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275 = in_FIFO_buf64.in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_merged_banks_4.peek_1();
  return value_in_FIFO_buf64_in_to_gp_20_ld65_merged467_275;
  return 0;
}

// # of bundles = 2
// in_to_gp_20_ld65_merged467_write
//	in_FIFO_buf64_in_to_gp_20_ld65_merged467_274
//	in_FIFO_buf64_in_to_gp_20_ld65_merged467_275
inline void in_FIFO_buf64_in_to_gp_20_ld65_merged467_write_bundle_write(hw_uint<32>& in_to_gp_20_ld65_merged467_write, in_FIFO_buf64_cache& in_FIFO_buf64, int root, int in_to_gp_20_ld66, int in_to_gp_20_ld65, int dynamic_address) {
	hw_uint<16> in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_res = in_to_gp_20_ld65_merged467_write.extract<0, 15>();
	in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_write(in_FIFO_buf64_in_to_gp_20_ld65_merged467_274_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
	hw_uint<16> in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_res = in_to_gp_20_ld65_merged467_write.extract<16, 31>();
	in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_write(in_FIFO_buf64_in_to_gp_20_ld65_merged467_275_res, in_FIFO_buf64, root, in_to_gp_20_ld66, in_to_gp_20_ld65, dynamic_address);
}

// stg0_1_merged386_read
//	in_FIFO_buf64_stg0_1_merged386_262
//	in_FIFO_buf64_stg0_1_merged386_263
//	in_FIFO_buf64_stg0_1_merged386_264
//	in_FIFO_buf64_stg0_1_merged386_265
//	in_FIFO_buf64_stg0_1_merged386_266
//	in_FIFO_buf64_stg0_1_merged386_267
//	in_FIFO_buf64_stg0_1_merged386_268
//	in_FIFO_buf64_stg0_1_merged386_269
inline hw_uint<128> in_FIFO_buf64_stg0_1_merged386_read_bundle_read(in_FIFO_buf64_cache& in_FIFO_buf64, int root, int stg0_0, int stg0_1, int dynamic_address) {
  // # of ports in bundle: 8
    // in_FIFO_buf64_stg0_1_merged386_262
    // in_FIFO_buf64_stg0_1_merged386_263
    // in_FIFO_buf64_stg0_1_merged386_264
    // in_FIFO_buf64_stg0_1_merged386_265
    // in_FIFO_buf64_stg0_1_merged386_266
    // in_FIFO_buf64_stg0_1_merged386_267
    // in_FIFO_buf64_stg0_1_merged386_268
    // in_FIFO_buf64_stg0_1_merged386_269

	hw_uint<128> result;
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_262_res = in_FIFO_buf64_stg0_1_merged386_262_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<0, 128>(result, in_FIFO_buf64_stg0_1_merged386_262_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_263_res = in_FIFO_buf64_stg0_1_merged386_263_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<16, 128>(result, in_FIFO_buf64_stg0_1_merged386_263_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_264_res = in_FIFO_buf64_stg0_1_merged386_264_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<32, 128>(result, in_FIFO_buf64_stg0_1_merged386_264_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_265_res = in_FIFO_buf64_stg0_1_merged386_265_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<48, 128>(result, in_FIFO_buf64_stg0_1_merged386_265_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_266_res = in_FIFO_buf64_stg0_1_merged386_266_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<64, 128>(result, in_FIFO_buf64_stg0_1_merged386_266_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_267_res = in_FIFO_buf64_stg0_1_merged386_267_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<80, 128>(result, in_FIFO_buf64_stg0_1_merged386_267_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_268_res = in_FIFO_buf64_stg0_1_merged386_268_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<96, 128>(result, in_FIFO_buf64_stg0_1_merged386_268_res);
	hw_uint<16> in_FIFO_buf64_stg0_1_merged386_269_res = in_FIFO_buf64_stg0_1_merged386_269_select(in_FIFO_buf64, root, stg0_0, stg0_1, dynamic_address);
	set_at<112, 128>(result, in_FIFO_buf64_stg0_1_merged386_269_res);
	return result;
}

struct stg0_stg0_1_merged386_260_to_stg0_stg0_ld5_merged374_258_cache {
	// RAM Box: {[1, 1107], [-14, 1933]}
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

struct stg0_stg0_1_merged386_261_to_stg0_stg0_ld5_merged374_259_cache {
	// RAM Box: {[0, 1106], [-14, 1933]}
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
    // { stg0_ld5_merged374[root = 0, stg0_ld6, stg0_ld5] -> stg0[1 + 2stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 553 }
    // { stg0_ld5_merged374[root = 0, stg0_ld6, stg0_ld5] -> stg0[2stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 553 }
  // # of banks: 2
  stg0_stg0_1_merged386_260_to_stg0_stg0_ld5_merged374_258_cache stg0_stg0_1_merged386_260_to_stg0_stg0_ld5_merged374_258;
  stg0_stg0_1_merged386_261_to_stg0_stg0_ld5_merged374_259_cache stg0_stg0_1_merged386_261_to_stg0_stg0_ld5_merged374_259;
};



inline void stg0_stg0_1_merged386_260_write(hw_uint<16>& stg0_stg0_1_merged386_260, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_1_merged386_260_to_stg0_stg0_ld5_merged374_258.push(stg0_stg0_1_merged386_260);
}

inline void stg0_stg0_1_merged386_261_write(hw_uint<16>& stg0_stg0_1_merged386_261, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
  stg0.stg0_stg0_1_merged386_261_to_stg0_stg0_ld5_merged374_259.push(stg0_stg0_1_merged386_261);
}

inline hw_uint<16> stg0_stg0_ld5_merged374_258_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg0_ld5_merged374_258 read pattern: { stg0_ld5_merged374[root = 0, stg0_ld6, stg0_ld5] -> stg0[1 + 2stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 553 }
  // Read schedule : { stg0_ld5_merged374[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_stg0_1_merged386_260 = stg0.stg0_stg0_1_merged386_260_to_stg0_stg0_ld5_merged374_258.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_1_merged386_260;
  return 0;
}

inline hw_uint<16> stg0_stg0_ld5_merged374_259_select(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_stg0_ld5_merged374_259 read pattern: { stg0_ld5_merged374[root = 0, stg0_ld6, stg0_ld5] -> stg0[2stg0_ld5, -14 + stg0_ld6] : 0 <= stg0_ld6 <= 1947 and 0 <= stg0_ld5 <= 553 }
  // Read schedule : { stg0_ld5_merged374[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  // Write schedule: { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_stg0_1_merged386_261 = stg0.stg0_stg0_1_merged386_261_to_stg0_stg0_ld5_merged374_259.peek(/* one reader or all rams */ 0);
  return value_stg0_stg0_1_merged386_261;
  return 0;
}

// # of bundles = 2
// stg0_1_merged386_write
//	stg0_stg0_1_merged386_260
//	stg0_stg0_1_merged386_261
inline void stg0_stg0_1_merged386_write_bundle_write(hw_uint<32>& stg0_1_merged386_write, stg0_cache& stg0, int root, int stg0_0, int stg0_1, int dynamic_address) {
	hw_uint<16> stg0_stg0_1_merged386_260_res = stg0_1_merged386_write.extract<0, 15>();
	stg0_stg0_1_merged386_260_write(stg0_stg0_1_merged386_260_res, stg0, root, stg0_0, stg0_1, dynamic_address);
	hw_uint<16> stg0_stg0_1_merged386_261_res = stg0_1_merged386_write.extract<16, 31>();
	stg0_stg0_1_merged386_261_write(stg0_stg0_1_merged386_261_res, stg0, root, stg0_0, stg0_1, dynamic_address);
}

// stg0_ld5_merged374_read
//	stg0_stg0_ld5_merged374_258
//	stg0_stg0_ld5_merged374_259
inline hw_uint<32> stg0_stg0_ld5_merged374_read_bundle_read(stg0_cache& stg0, int root, int stg0_ld6, int stg0_ld5, int dynamic_address) {
  // # of ports in bundle: 2
    // stg0_stg0_ld5_merged374_258
    // stg0_stg0_ld5_merged374_259

	hw_uint<32> result;
	hw_uint<16> stg0_stg0_ld5_merged374_258_res = stg0_stg0_ld5_merged374_258_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<0, 32>(result, stg0_stg0_ld5_merged374_258_res);
	hw_uint<16> stg0_stg0_ld5_merged374_259_res = stg0_stg0_ld5_merged374_259_select(stg0, root, stg0_ld6, stg0_ld5, dynamic_address);
	set_at<16, 32>(result, stg0_stg0_ld5_merged374_259_res);
	return result;
}

struct stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4_cache {
	// RAM Box: {[1, 1105], [-14, 1933]}
	// Capacity: 1110
	// # of read delays: 4
  // 0, 1, 555, 1109
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 553> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 553> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_554() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_555() {
		return f4;
	}

	inline hw_uint<16> peek_1108() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1109() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 553
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 553 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 553
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 553 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4_cache {
	// RAM Box: {[0, 1106], [-14, 1932]}
	// Capacity: 1110
	// # of read delays: 5
  // 0, 1, 554, 555, 1109
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 552> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 553> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_553() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_554() {
		return f4;
	}

	inline hw_uint<16> peek_555() {
		return f6;
	}

	inline hw_uint<16> peek_1108() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1109() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 553
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 553 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 552
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 552 reading from capacity: 1
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
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
    // { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // # of banks: 2
  stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4_cache stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4;
  stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4_cache stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4;
};



inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_write(hw_uint<16>& stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4.push(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252);
}

inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_write(hw_uint<16>& stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
  stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4.push(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253);
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_154_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_154 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4.peek_1109();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_155_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_155 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4.peek_555();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_156_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_156 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2 + 2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4.peek_554();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_157_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_157 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_158_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_158 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2stg1_1, -14 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4.peek_1109();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_159_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_159 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4.peek_555();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_160_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_160 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[1 + 2stg1_1, -13 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_merged_banks_4.peek_555();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252;
  return 0;
}

inline hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_161_select(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_FIFO_buf68_stg1_1_merged389_161 read pattern: { stg1_1_merged389[root = 0, stg1_0, stg1_1] -> stg0_FIFO_buf68[2stg1_1, -12 + stg1_0] : 0 <= stg1_0 <= 1945 and 0 <= stg1_1 <= 552 }
  // Read schedule : { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
  auto value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253 = stg0_FIFO_buf68.stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_merged_banks_4.peek_1();
  return value_stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253;
  return 0;
}

// # of bundles = 2
// stg0_to_gp_84_ld69_merged449_write
//	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252
//	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253
inline void stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_write_bundle_write(hw_uint<32>& stg0_to_gp_84_ld69_merged449_write, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg0_to_gp_84_ld70, int stg0_to_gp_84_ld69, int dynamic_address) {
	hw_uint<16> stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_res = stg0_to_gp_84_ld69_merged449_write.extract<0, 15>();
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_write(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_252_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
	hw_uint<16> stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_res = stg0_to_gp_84_ld69_merged449_write.extract<16, 31>();
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_write(stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_253_res, stg0_FIFO_buf68, root, stg0_to_gp_84_ld70, stg0_to_gp_84_ld69, dynamic_address);
}

// stg1_1_merged389_read
//	stg0_FIFO_buf68_stg1_1_merged389_154
//	stg0_FIFO_buf68_stg1_1_merged389_155
//	stg0_FIFO_buf68_stg1_1_merged389_156
//	stg0_FIFO_buf68_stg1_1_merged389_157
//	stg0_FIFO_buf68_stg1_1_merged389_158
//	stg0_FIFO_buf68_stg1_1_merged389_159
//	stg0_FIFO_buf68_stg1_1_merged389_160
//	stg0_FIFO_buf68_stg1_1_merged389_161
inline hw_uint<128> stg0_FIFO_buf68_stg1_1_merged389_read_bundle_read(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int root, int stg1_0, int stg1_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg0_FIFO_buf68_stg1_1_merged389_154
    // stg0_FIFO_buf68_stg1_1_merged389_155
    // stg0_FIFO_buf68_stg1_1_merged389_156
    // stg0_FIFO_buf68_stg1_1_merged389_157
    // stg0_FIFO_buf68_stg1_1_merged389_158
    // stg0_FIFO_buf68_stg1_1_merged389_159
    // stg0_FIFO_buf68_stg1_1_merged389_160
    // stg0_FIFO_buf68_stg1_1_merged389_161

	hw_uint<128> result;
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_154_res = stg0_FIFO_buf68_stg1_1_merged389_154_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<0, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_154_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_155_res = stg0_FIFO_buf68_stg1_1_merged389_155_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<16, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_155_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_156_res = stg0_FIFO_buf68_stg1_1_merged389_156_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<32, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_156_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_157_res = stg0_FIFO_buf68_stg1_1_merged389_157_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<48, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_157_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_158_res = stg0_FIFO_buf68_stg1_1_merged389_158_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<64, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_158_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_159_res = stg0_FIFO_buf68_stg1_1_merged389_159_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<80, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_159_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_160_res = stg0_FIFO_buf68_stg1_1_merged389_160_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<96, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_160_res);
	hw_uint<16> stg0_FIFO_buf68_stg1_1_merged389_161_res = stg0_FIFO_buf68_stg1_1_merged389_161_select(stg0_FIFO_buf68, root, stg1_0, stg1_1, dynamic_address);
	set_at<112, 128>(result, stg0_FIFO_buf68_stg1_1_merged389_161_res);
	return result;
}

struct stg1_stg1_1_merged389_152_to_stg1_stg1_ld9_merged477_150_cache {
	// RAM Box: {[1, 1105], [-13, 1932]}
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

struct stg1_stg1_1_merged389_153_to_stg1_stg1_ld9_merged477_151_cache {
	// RAM Box: {[0, 1104], [-13, 1932]}
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
    // { stg1_ld9_merged477[root = 0, stg1_ld10, stg1_ld9] -> stg1[1 + 2stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 552 }
    // { stg1_ld9_merged477[root = 0, stg1_ld10, stg1_ld9] -> stg1[2stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 552 }
  // # of banks: 2
  stg1_stg1_1_merged389_152_to_stg1_stg1_ld9_merged477_150_cache stg1_stg1_1_merged389_152_to_stg1_stg1_ld9_merged477_150;
  stg1_stg1_1_merged389_153_to_stg1_stg1_ld9_merged477_151_cache stg1_stg1_1_merged389_153_to_stg1_stg1_ld9_merged477_151;
};



inline void stg1_stg1_1_merged389_152_write(hw_uint<16>& stg1_stg1_1_merged389_152, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_1_merged389_152_to_stg1_stg1_ld9_merged477_150.push(stg1_stg1_1_merged389_152);
}

inline void stg1_stg1_1_merged389_153_write(hw_uint<16>& stg1_stg1_1_merged389_153, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
  stg1.stg1_stg1_1_merged389_153_to_stg1_stg1_ld9_merged477_151.push(stg1_stg1_1_merged389_153);
}

inline hw_uint<16> stg1_stg1_ld9_merged477_150_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg1_ld9_merged477_150 read pattern: { stg1_ld9_merged477[root = 0, stg1_ld10, stg1_ld9] -> stg1[1 + 2stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 552 }
  // Read schedule : { stg1_ld9_merged477[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_stg1_1_merged389_152 = stg1.stg1_stg1_1_merged389_152_to_stg1_stg1_ld9_merged477_150.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_1_merged389_152;
  return 0;
}

inline hw_uint<16> stg1_stg1_ld9_merged477_151_select(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_stg1_ld9_merged477_151 read pattern: { stg1_ld9_merged477[root = 0, stg1_ld10, stg1_ld9] -> stg1[2stg1_ld9, -13 + stg1_ld10] : 0 <= stg1_ld10 <= 1945 and 0 <= stg1_ld9 <= 552 }
  // Read schedule : { stg1_ld9_merged477[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  // Write schedule: { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_stg1_1_merged389_153 = stg1.stg1_stg1_1_merged389_153_to_stg1_stg1_ld9_merged477_151.peek(/* one reader or all rams */ 0);
  return value_stg1_stg1_1_merged389_153;
  return 0;
}

// # of bundles = 2
// stg1_1_merged389_write
//	stg1_stg1_1_merged389_152
//	stg1_stg1_1_merged389_153
inline void stg1_stg1_1_merged389_write_bundle_write(hw_uint<32>& stg1_1_merged389_write, stg1_cache& stg1, int root, int stg1_0, int stg1_1, int dynamic_address) {
	hw_uint<16> stg1_stg1_1_merged389_152_res = stg1_1_merged389_write.extract<0, 15>();
	stg1_stg1_1_merged389_152_write(stg1_stg1_1_merged389_152_res, stg1, root, stg1_0, stg1_1, dynamic_address);
	hw_uint<16> stg1_stg1_1_merged389_153_res = stg1_1_merged389_write.extract<16, 31>();
	stg1_stg1_1_merged389_153_write(stg1_stg1_1_merged389_153_res, stg1, root, stg1_0, stg1_1, dynamic_address);
}

// stg1_ld9_merged477_read
//	stg1_stg1_ld9_merged477_150
//	stg1_stg1_ld9_merged477_151
inline hw_uint<32> stg1_stg1_ld9_merged477_read_bundle_read(stg1_cache& stg1, int root, int stg1_ld10, int stg1_ld9, int dynamic_address) {
  // # of ports in bundle: 2
    // stg1_stg1_ld9_merged477_150
    // stg1_stg1_ld9_merged477_151

	hw_uint<32> result;
	hw_uint<16> stg1_stg1_ld9_merged477_150_res = stg1_stg1_ld9_merged477_150_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<0, 32>(result, stg1_stg1_ld9_merged477_150_res);
	hw_uint<16> stg1_stg1_ld9_merged477_151_res = stg1_stg1_ld9_merged477_151_select(stg1, root, stg1_ld10, stg1_ld9, dynamic_address);
	set_at<16, 32>(result, stg1_stg1_ld9_merged477_151_res);
	return result;
}

struct stg10_stg10_1_merged416_242_to_stg10_stg10_ld13_merged378_240_cache {
	// RAM Box: {[1, 1087], [-4, 1923]}
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

struct stg10_stg10_1_merged416_243_to_stg10_stg10_ld13_merged378_241_cache {
	// RAM Box: {[0, 1086], [-4, 1923]}
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
    // { stg10_ld13_merged378[root = 0, stg10_ld14, stg10_ld13] -> stg10[1 + 2stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 543 }
    // { stg10_ld13_merged378[root = 0, stg10_ld14, stg10_ld13] -> stg10[2stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 543 }
  // # of banks: 2
  stg10_stg10_1_merged416_242_to_stg10_stg10_ld13_merged378_240_cache stg10_stg10_1_merged416_242_to_stg10_stg10_ld13_merged378_240;
  stg10_stg10_1_merged416_243_to_stg10_stg10_ld13_merged378_241_cache stg10_stg10_1_merged416_243_to_stg10_stg10_ld13_merged378_241;
};



inline void stg10_stg10_1_merged416_242_write(hw_uint<16>& stg10_stg10_1_merged416_242, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_1_merged416_242_to_stg10_stg10_ld13_merged378_240.push(stg10_stg10_1_merged416_242);
}

inline void stg10_stg10_1_merged416_243_write(hw_uint<16>& stg10_stg10_1_merged416_243, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
  stg10.stg10_stg10_1_merged416_243_to_stg10_stg10_ld13_merged378_241.push(stg10_stg10_1_merged416_243);
}

inline hw_uint<16> stg10_stg10_ld13_merged378_240_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg10_ld13_merged378_240 read pattern: { stg10_ld13_merged378[root = 0, stg10_ld14, stg10_ld13] -> stg10[1 + 2stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 543 }
  // Read schedule : { stg10_ld13_merged378[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_stg10_1_merged416_242 = stg10.stg10_stg10_1_merged416_242_to_stg10_stg10_ld13_merged378_240.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_1_merged416_242;
  return 0;
}

inline hw_uint<16> stg10_stg10_ld13_merged378_241_select(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_stg10_ld13_merged378_241 read pattern: { stg10_ld13_merged378[root = 0, stg10_ld14, stg10_ld13] -> stg10[2stg10_ld13, -4 + stg10_ld14] : 0 <= stg10_ld14 <= 1927 and 0 <= stg10_ld13 <= 543 }
  // Read schedule : { stg10_ld13_merged378[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_stg10_1_merged416_243 = stg10.stg10_stg10_1_merged416_243_to_stg10_stg10_ld13_merged378_241.peek(/* one reader or all rams */ 0);
  return value_stg10_stg10_1_merged416_243;
  return 0;
}

// # of bundles = 2
// stg10_1_merged416_write
//	stg10_stg10_1_merged416_242
//	stg10_stg10_1_merged416_243
inline void stg10_stg10_1_merged416_write_bundle_write(hw_uint<32>& stg10_1_merged416_write, stg10_cache& stg10, int root, int stg10_0, int stg10_1, int dynamic_address) {
	hw_uint<16> stg10_stg10_1_merged416_242_res = stg10_1_merged416_write.extract<0, 15>();
	stg10_stg10_1_merged416_242_write(stg10_stg10_1_merged416_242_res, stg10, root, stg10_0, stg10_1, dynamic_address);
	hw_uint<16> stg10_stg10_1_merged416_243_res = stg10_1_merged416_write.extract<16, 31>();
	stg10_stg10_1_merged416_243_write(stg10_stg10_1_merged416_243_res, stg10, root, stg10_0, stg10_1, dynamic_address);
}

// stg10_ld13_merged378_read
//	stg10_stg10_ld13_merged378_240
//	stg10_stg10_ld13_merged378_241
inline hw_uint<32> stg10_stg10_ld13_merged378_read_bundle_read(stg10_cache& stg10, int root, int stg10_ld14, int stg10_ld13, int dynamic_address) {
  // # of ports in bundle: 2
    // stg10_stg10_ld13_merged378_240
    // stg10_stg10_ld13_merged378_241

	hw_uint<32> result;
	hw_uint<16> stg10_stg10_ld13_merged378_240_res = stg10_stg10_ld13_merged378_240_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<0, 32>(result, stg10_stg10_ld13_merged378_240_res);
	hw_uint<16> stg10_stg10_ld13_merged378_241_res = stg10_stg10_ld13_merged378_241_select(stg10, root, stg10_ld14, stg10_ld13, dynamic_address);
	set_at<16, 32>(result, stg10_stg10_ld13_merged378_241_res);
	return result;
}

struct stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4_cache {
	// RAM Box: {[1, 1085], [-4, 1923]}
	// Capacity: 1090
	// # of read delays: 4
  // 0, 1, 545, 1089
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 543> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 543> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_545() {
		return f4;
	}

	inline hw_uint<16> peek_1088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1089() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4_cache {
	// RAM Box: {[0, 1086], [-4, 1922]}
	// Capacity: 1090
	// # of read delays: 5
  // 0, 1, 544, 545, 1089
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 542> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 543> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_543() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_544() {
		return f4;
	}

	inline hw_uint<16> peek_545() {
		return f6;
	}

	inline hw_uint<16> peek_1088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1089() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 542
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 542 reading from capacity: 1
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
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
    // { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // # of banks: 2
  stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4_cache stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4;
  stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4_cache stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4;
};



inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_write(hw_uint<16>& stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4.push(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234);
}

inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_write(hw_uint<16>& stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
  stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4.push(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235);
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_226_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_226 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4.peek_1089();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_227_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_227 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4.peek_545();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_228_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_228 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2 + 2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4.peek_544();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_229_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_229 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_230_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_230 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2stg11_1, -4 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4.peek_1089();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_231_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_231 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4.peek_545();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_232_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_232 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[1 + 2stg11_1, -3 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_merged_banks_4.peek_545();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234;
  return 0;
}

inline hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_233_select(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg10_FIFO_buf76_stg11_1_merged419_233 read pattern: { stg11_1_merged419[root = 0, stg11_0, stg11_1] -> stg10_FIFO_buf76[2stg11_1, -2 + stg11_0] : 0 <= stg11_0 <= 1925 and 0 <= stg11_1 <= 542 }
  // Read schedule : { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  auto value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235 = stg10_FIFO_buf76.stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_merged_banks_4.peek_1();
  return value_stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235;
  return 0;
}

// # of bundles = 2
// stg10_to_gp_412_ld77_merged469_write
//	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234
//	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235
inline void stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_write_bundle_write(hw_uint<32>& stg10_to_gp_412_ld77_merged469_write, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg10_to_gp_412_ld78, int stg10_to_gp_412_ld77, int dynamic_address) {
	hw_uint<16> stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_res = stg10_to_gp_412_ld77_merged469_write.extract<0, 15>();
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_write(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_234_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
	hw_uint<16> stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_res = stg10_to_gp_412_ld77_merged469_write.extract<16, 31>();
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_write(stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_235_res, stg10_FIFO_buf76, root, stg10_to_gp_412_ld78, stg10_to_gp_412_ld77, dynamic_address);
}

// stg11_1_merged419_read
//	stg10_FIFO_buf76_stg11_1_merged419_226
//	stg10_FIFO_buf76_stg11_1_merged419_227
//	stg10_FIFO_buf76_stg11_1_merged419_228
//	stg10_FIFO_buf76_stg11_1_merged419_229
//	stg10_FIFO_buf76_stg11_1_merged419_230
//	stg10_FIFO_buf76_stg11_1_merged419_231
//	stg10_FIFO_buf76_stg11_1_merged419_232
//	stg10_FIFO_buf76_stg11_1_merged419_233
inline hw_uint<128> stg10_FIFO_buf76_stg11_1_merged419_read_bundle_read(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int root, int stg11_0, int stg11_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg10_FIFO_buf76_stg11_1_merged419_226
    // stg10_FIFO_buf76_stg11_1_merged419_227
    // stg10_FIFO_buf76_stg11_1_merged419_228
    // stg10_FIFO_buf76_stg11_1_merged419_229
    // stg10_FIFO_buf76_stg11_1_merged419_230
    // stg10_FIFO_buf76_stg11_1_merged419_231
    // stg10_FIFO_buf76_stg11_1_merged419_232
    // stg10_FIFO_buf76_stg11_1_merged419_233

	hw_uint<128> result;
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_226_res = stg10_FIFO_buf76_stg11_1_merged419_226_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<0, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_226_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_227_res = stg10_FIFO_buf76_stg11_1_merged419_227_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<16, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_227_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_228_res = stg10_FIFO_buf76_stg11_1_merged419_228_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<32, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_228_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_229_res = stg10_FIFO_buf76_stg11_1_merged419_229_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<48, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_229_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_230_res = stg10_FIFO_buf76_stg11_1_merged419_230_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<64, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_230_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_231_res = stg10_FIFO_buf76_stg11_1_merged419_231_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<80, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_231_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_232_res = stg10_FIFO_buf76_stg11_1_merged419_232_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<96, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_232_res);
	hw_uint<16> stg10_FIFO_buf76_stg11_1_merged419_233_res = stg10_FIFO_buf76_stg11_1_merged419_233_select(stg10_FIFO_buf76, root, stg11_0, stg11_1, dynamic_address);
	set_at<112, 128>(result, stg10_FIFO_buf76_stg11_1_merged419_233_res);
	return result;
}

struct stg11_stg11_1_merged419_224_to_stg11_stg11_ld17_merged479_222_cache {
	// RAM Box: {[1, 1085], [-3, 1922]}
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

struct stg11_stg11_1_merged419_225_to_stg11_stg11_ld17_merged479_223_cache {
	// RAM Box: {[0, 1084], [-3, 1922]}
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
    // { stg11_ld17_merged479[root = 0, stg11_ld18, stg11_ld17] -> stg11[1 + 2stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 542 }
    // { stg11_ld17_merged479[root = 0, stg11_ld18, stg11_ld17] -> stg11[2stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 542 }
  // # of banks: 2
  stg11_stg11_1_merged419_224_to_stg11_stg11_ld17_merged479_222_cache stg11_stg11_1_merged419_224_to_stg11_stg11_ld17_merged479_222;
  stg11_stg11_1_merged419_225_to_stg11_stg11_ld17_merged479_223_cache stg11_stg11_1_merged419_225_to_stg11_stg11_ld17_merged479_223;
};



inline void stg11_stg11_1_merged419_224_write(hw_uint<16>& stg11_stg11_1_merged419_224, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_1_merged419_224_to_stg11_stg11_ld17_merged479_222.push(stg11_stg11_1_merged419_224);
}

inline void stg11_stg11_1_merged419_225_write(hw_uint<16>& stg11_stg11_1_merged419_225, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
  stg11.stg11_stg11_1_merged419_225_to_stg11_stg11_ld17_merged479_223.push(stg11_stg11_1_merged419_225);
}

inline hw_uint<16> stg11_stg11_ld17_merged479_222_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg11_ld17_merged479_222 read pattern: { stg11_ld17_merged479[root = 0, stg11_ld18, stg11_ld17] -> stg11[1 + 2stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 542 }
  // Read schedule : { stg11_ld17_merged479[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_stg11_1_merged419_224 = stg11.stg11_stg11_1_merged419_224_to_stg11_stg11_ld17_merged479_222.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_1_merged419_224;
  return 0;
}

inline hw_uint<16> stg11_stg11_ld17_merged479_223_select(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_stg11_ld17_merged479_223 read pattern: { stg11_ld17_merged479[root = 0, stg11_ld18, stg11_ld17] -> stg11[2stg11_ld17, -3 + stg11_ld18] : 0 <= stg11_ld18 <= 1925 and 0 <= stg11_ld17 <= 542 }
  // Read schedule : { stg11_ld17_merged479[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  // Write schedule: { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_stg11_1_merged419_225 = stg11.stg11_stg11_1_merged419_225_to_stg11_stg11_ld17_merged479_223.peek(/* one reader or all rams */ 0);
  return value_stg11_stg11_1_merged419_225;
  return 0;
}

// # of bundles = 2
// stg11_1_merged419_write
//	stg11_stg11_1_merged419_224
//	stg11_stg11_1_merged419_225
inline void stg11_stg11_1_merged419_write_bundle_write(hw_uint<32>& stg11_1_merged419_write, stg11_cache& stg11, int root, int stg11_0, int stg11_1, int dynamic_address) {
	hw_uint<16> stg11_stg11_1_merged419_224_res = stg11_1_merged419_write.extract<0, 15>();
	stg11_stg11_1_merged419_224_write(stg11_stg11_1_merged419_224_res, stg11, root, stg11_0, stg11_1, dynamic_address);
	hw_uint<16> stg11_stg11_1_merged419_225_res = stg11_1_merged419_write.extract<16, 31>();
	stg11_stg11_1_merged419_225_write(stg11_stg11_1_merged419_225_res, stg11, root, stg11_0, stg11_1, dynamic_address);
}

// stg11_ld17_merged479_read
//	stg11_stg11_ld17_merged479_222
//	stg11_stg11_ld17_merged479_223
inline hw_uint<32> stg11_stg11_ld17_merged479_read_bundle_read(stg11_cache& stg11, int root, int stg11_ld18, int stg11_ld17, int dynamic_address) {
  // # of ports in bundle: 2
    // stg11_stg11_ld17_merged479_222
    // stg11_stg11_ld17_merged479_223

	hw_uint<32> result;
	hw_uint<16> stg11_stg11_ld17_merged479_222_res = stg11_stg11_ld17_merged479_222_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<0, 32>(result, stg11_stg11_ld17_merged479_222_res);
	hw_uint<16> stg11_stg11_ld17_merged479_223_res = stg11_stg11_ld17_merged479_223_select(stg11, root, stg11_ld18, stg11_ld17, dynamic_address);
	set_at<16, 32>(result, stg11_stg11_ld17_merged479_223_res);
	return result;
}

struct stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4_cache {
	// RAM Box: {[1, 1083], [-3, 1922]}
	// Capacity: 1088
	// # of read delays: 4
  // 0, 1, 544, 1087
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 542> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 542> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_543() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_544() {
		return f4;
	}

	inline hw_uint<16> peek_1086() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1087() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 542
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 542 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 542
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 542 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4_cache {
	// RAM Box: {[0, 1084], [-3, 1921]}
	// Capacity: 1088
	// # of read delays: 5
  // 0, 1, 543, 544, 1087
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 541> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 542> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_543() {
		return f4;
	}

	inline hw_uint<16> peek_544() {
		return f6;
	}

	inline hw_uint<16> peek_1086() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1087() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 542
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 542 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 541
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 541 reading from capacity: 1
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
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
    // { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // # of banks: 2
  stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4_cache stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4;
  stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4_cache stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4;
};



inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_write(hw_uint<16>& stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4.push(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216);
}

inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_write(hw_uint<16>& stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
  stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4.push(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217);
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_208_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_208 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4.peek_1087();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_209_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_209 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4.peek_544();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_210_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_210 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2 + 2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4.peek_543();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_211_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_211 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_212_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_212 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2stg12_1, -3 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4.peek_1087();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_213_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_213 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4.peek_544();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_214_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_214 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[1 + 2stg12_1, -2 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_merged_banks_4.peek_544();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216;
  return 0;
}

inline hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_215_select(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg11_FIFO_buf80_stg12_1_merged422_215 read pattern: { stg12_1_merged422[root = 0, stg12_0, stg12_1] -> stg11_FIFO_buf80[2stg12_1, -1 + stg12_0] : 0 <= stg12_0 <= 1923 and 0 <= stg12_1 <= 541 }
  // Read schedule : { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
  auto value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217 = stg11_FIFO_buf80.stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_merged_banks_4.peek_1();
  return value_stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217;
  return 0;
}

// # of bundles = 2
// stg11_to_gp_516_ld81_merged471_write
//	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216
//	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217
inline void stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_write_bundle_write(hw_uint<32>& stg11_to_gp_516_ld81_merged471_write, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg11_to_gp_516_ld82, int stg11_to_gp_516_ld81, int dynamic_address) {
	hw_uint<16> stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_res = stg11_to_gp_516_ld81_merged471_write.extract<0, 15>();
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_write(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_216_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
	hw_uint<16> stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_res = stg11_to_gp_516_ld81_merged471_write.extract<16, 31>();
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_write(stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_217_res, stg11_FIFO_buf80, root, stg11_to_gp_516_ld82, stg11_to_gp_516_ld81, dynamic_address);
}

// stg12_1_merged422_read
//	stg11_FIFO_buf80_stg12_1_merged422_208
//	stg11_FIFO_buf80_stg12_1_merged422_209
//	stg11_FIFO_buf80_stg12_1_merged422_210
//	stg11_FIFO_buf80_stg12_1_merged422_211
//	stg11_FIFO_buf80_stg12_1_merged422_212
//	stg11_FIFO_buf80_stg12_1_merged422_213
//	stg11_FIFO_buf80_stg12_1_merged422_214
//	stg11_FIFO_buf80_stg12_1_merged422_215
inline hw_uint<128> stg11_FIFO_buf80_stg12_1_merged422_read_bundle_read(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int root, int stg12_0, int stg12_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg11_FIFO_buf80_stg12_1_merged422_208
    // stg11_FIFO_buf80_stg12_1_merged422_209
    // stg11_FIFO_buf80_stg12_1_merged422_210
    // stg11_FIFO_buf80_stg12_1_merged422_211
    // stg11_FIFO_buf80_stg12_1_merged422_212
    // stg11_FIFO_buf80_stg12_1_merged422_213
    // stg11_FIFO_buf80_stg12_1_merged422_214
    // stg11_FIFO_buf80_stg12_1_merged422_215

	hw_uint<128> result;
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_208_res = stg11_FIFO_buf80_stg12_1_merged422_208_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<0, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_208_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_209_res = stg11_FIFO_buf80_stg12_1_merged422_209_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<16, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_209_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_210_res = stg11_FIFO_buf80_stg12_1_merged422_210_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<32, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_210_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_211_res = stg11_FIFO_buf80_stg12_1_merged422_211_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<48, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_211_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_212_res = stg11_FIFO_buf80_stg12_1_merged422_212_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<64, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_212_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_213_res = stg11_FIFO_buf80_stg12_1_merged422_213_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<80, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_213_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_214_res = stg11_FIFO_buf80_stg12_1_merged422_214_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<96, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_214_res);
	hw_uint<16> stg11_FIFO_buf80_stg12_1_merged422_215_res = stg11_FIFO_buf80_stg12_1_merged422_215_select(stg11_FIFO_buf80, root, stg12_0, stg12_1, dynamic_address);
	set_at<112, 128>(result, stg11_FIFO_buf80_stg12_1_merged422_215_res);
	return result;
}

struct stg12_stg12_1_merged422_206_to_stg12_stg12_ld21_merged487_204_cache {
	// RAM Box: {[1, 1083], [-2, 1921]}
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

struct stg12_stg12_1_merged422_207_to_stg12_stg12_ld21_merged487_205_cache {
	// RAM Box: {[0, 1082], [-2, 1921]}
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
    // { stg12_ld21_merged487[root = 0, stg12_ld22, stg12_ld21] -> stg12[1 + 2stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 541 }
    // { stg12_ld21_merged487[root = 0, stg12_ld22, stg12_ld21] -> stg12[2stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 541 }
  // # of banks: 2
  stg12_stg12_1_merged422_206_to_stg12_stg12_ld21_merged487_204_cache stg12_stg12_1_merged422_206_to_stg12_stg12_ld21_merged487_204;
  stg12_stg12_1_merged422_207_to_stg12_stg12_ld21_merged487_205_cache stg12_stg12_1_merged422_207_to_stg12_stg12_ld21_merged487_205;
};



inline void stg12_stg12_1_merged422_206_write(hw_uint<16>& stg12_stg12_1_merged422_206, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_1_merged422_206_to_stg12_stg12_ld21_merged487_204.push(stg12_stg12_1_merged422_206);
}

inline void stg12_stg12_1_merged422_207_write(hw_uint<16>& stg12_stg12_1_merged422_207, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
  stg12.stg12_stg12_1_merged422_207_to_stg12_stg12_ld21_merged487_205.push(stg12_stg12_1_merged422_207);
}

inline hw_uint<16> stg12_stg12_ld21_merged487_204_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg12_ld21_merged487_204 read pattern: { stg12_ld21_merged487[root = 0, stg12_ld22, stg12_ld21] -> stg12[1 + 2stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 541 }
  // Read schedule : { stg12_ld21_merged487[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_stg12_1_merged422_206 = stg12.stg12_stg12_1_merged422_206_to_stg12_stg12_ld21_merged487_204.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_1_merged422_206;
  return 0;
}

inline hw_uint<16> stg12_stg12_ld21_merged487_205_select(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_stg12_ld21_merged487_205 read pattern: { stg12_ld21_merged487[root = 0, stg12_ld22, stg12_ld21] -> stg12[2stg12_ld21, -2 + stg12_ld22] : 0 <= stg12_ld22 <= 1923 and 0 <= stg12_ld21 <= 541 }
  // Read schedule : { stg12_ld21_merged487[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  // Write schedule: { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_stg12_1_merged422_207 = stg12.stg12_stg12_1_merged422_207_to_stg12_stg12_ld21_merged487_205.peek(/* one reader or all rams */ 0);
  return value_stg12_stg12_1_merged422_207;
  return 0;
}

// # of bundles = 2
// stg12_1_merged422_write
//	stg12_stg12_1_merged422_206
//	stg12_stg12_1_merged422_207
inline void stg12_stg12_1_merged422_write_bundle_write(hw_uint<32>& stg12_1_merged422_write, stg12_cache& stg12, int root, int stg12_0, int stg12_1, int dynamic_address) {
	hw_uint<16> stg12_stg12_1_merged422_206_res = stg12_1_merged422_write.extract<0, 15>();
	stg12_stg12_1_merged422_206_write(stg12_stg12_1_merged422_206_res, stg12, root, stg12_0, stg12_1, dynamic_address);
	hw_uint<16> stg12_stg12_1_merged422_207_res = stg12_1_merged422_write.extract<16, 31>();
	stg12_stg12_1_merged422_207_write(stg12_stg12_1_merged422_207_res, stg12, root, stg12_0, stg12_1, dynamic_address);
}

// stg12_ld21_merged487_read
//	stg12_stg12_ld21_merged487_204
//	stg12_stg12_ld21_merged487_205
inline hw_uint<32> stg12_stg12_ld21_merged487_read_bundle_read(stg12_cache& stg12, int root, int stg12_ld22, int stg12_ld21, int dynamic_address) {
  // # of ports in bundle: 2
    // stg12_stg12_ld21_merged487_204
    // stg12_stg12_ld21_merged487_205

	hw_uint<32> result;
	hw_uint<16> stg12_stg12_ld21_merged487_204_res = stg12_stg12_ld21_merged487_204_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<0, 32>(result, stg12_stg12_ld21_merged487_204_res);
	hw_uint<16> stg12_stg12_ld21_merged487_205_res = stg12_stg12_ld21_merged487_205_select(stg12, root, stg12_ld22, stg12_ld21, dynamic_address);
	set_at<16, 32>(result, stg12_stg12_ld21_merged487_205_res);
	return result;
}

struct stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4_cache {
	// RAM Box: {[1, 1081], [-2, 1921]}
	// Capacity: 1086
	// # of read delays: 4
  // 0, 1, 543, 1085
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 541> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 541> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_542() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_543() {
		return f4;
	}

	inline hw_uint<16> peek_1084() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1085() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 541
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 541 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 541
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 541 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4_cache {
	// RAM Box: {[0, 1082], [-2, 1920]}
	// Capacity: 1086
	// # of read delays: 5
  // 0, 1, 542, 543, 1085
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 540> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 541> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_542() {
		return f4;
	}

	inline hw_uint<16> peek_543() {
		return f6;
	}

	inline hw_uint<16> peek_1084() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1085() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 541
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 541 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 540
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
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
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
    // { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // # of banks: 2
  stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4_cache stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4;
  stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4_cache stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4;
};



inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_write(hw_uint<16>& stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4.push(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198);
}

inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_write(hw_uint<16>& stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
  stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4.push(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199);
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_190_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_190 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4.peek_1085();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_191_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_191 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4.peek_543();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_192_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_192 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2 + 2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4.peek_542();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_193_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_193 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_194_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_194 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2stg13_1, -2 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4.peek_1085();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_195_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_195 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4.peek_543();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_196_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_196 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[1 + 2stg13_1, -1 + stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_merged_banks_4.peek_543();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198;
  return 0;
}

inline hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_197_select(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg12_FIFO_buf84_stg13_1_merged425_197 read pattern: { stg13_1_merged425[root = 0, stg13_0, stg13_1] -> stg12_FIFO_buf84[2stg13_1, stg13_0] : 0 <= stg13_0 <= 1921 and 0 <= stg13_1 <= 540 }
  // Read schedule : { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
  auto value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199 = stg12_FIFO_buf84.stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_merged_banks_4.peek_1();
  return value_stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199;
  return 0;
}

// # of bundles = 2
// stg12_to_gp_620_ld85_merged481_write
//	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198
//	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199
inline void stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_write_bundle_write(hw_uint<32>& stg12_to_gp_620_ld85_merged481_write, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg12_to_gp_620_ld86, int stg12_to_gp_620_ld85, int dynamic_address) {
	hw_uint<16> stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_res = stg12_to_gp_620_ld85_merged481_write.extract<0, 15>();
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_write(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_198_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
	hw_uint<16> stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_res = stg12_to_gp_620_ld85_merged481_write.extract<16, 31>();
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_write(stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_199_res, stg12_FIFO_buf84, root, stg12_to_gp_620_ld86, stg12_to_gp_620_ld85, dynamic_address);
}

// stg13_1_merged425_read
//	stg12_FIFO_buf84_stg13_1_merged425_190
//	stg12_FIFO_buf84_stg13_1_merged425_191
//	stg12_FIFO_buf84_stg13_1_merged425_192
//	stg12_FIFO_buf84_stg13_1_merged425_193
//	stg12_FIFO_buf84_stg13_1_merged425_194
//	stg12_FIFO_buf84_stg13_1_merged425_195
//	stg12_FIFO_buf84_stg13_1_merged425_196
//	stg12_FIFO_buf84_stg13_1_merged425_197
inline hw_uint<128> stg12_FIFO_buf84_stg13_1_merged425_read_bundle_read(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int root, int stg13_0, int stg13_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg12_FIFO_buf84_stg13_1_merged425_190
    // stg12_FIFO_buf84_stg13_1_merged425_191
    // stg12_FIFO_buf84_stg13_1_merged425_192
    // stg12_FIFO_buf84_stg13_1_merged425_193
    // stg12_FIFO_buf84_stg13_1_merged425_194
    // stg12_FIFO_buf84_stg13_1_merged425_195
    // stg12_FIFO_buf84_stg13_1_merged425_196
    // stg12_FIFO_buf84_stg13_1_merged425_197

	hw_uint<128> result;
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_190_res = stg12_FIFO_buf84_stg13_1_merged425_190_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<0, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_190_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_191_res = stg12_FIFO_buf84_stg13_1_merged425_191_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<16, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_191_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_192_res = stg12_FIFO_buf84_stg13_1_merged425_192_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<32, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_192_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_193_res = stg12_FIFO_buf84_stg13_1_merged425_193_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<48, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_193_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_194_res = stg12_FIFO_buf84_stg13_1_merged425_194_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<64, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_194_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_195_res = stg12_FIFO_buf84_stg13_1_merged425_195_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<80, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_195_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_196_res = stg12_FIFO_buf84_stg13_1_merged425_196_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<96, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_196_res);
	hw_uint<16> stg12_FIFO_buf84_stg13_1_merged425_197_res = stg12_FIFO_buf84_stg13_1_merged425_197_select(stg12_FIFO_buf84, root, stg13_0, stg13_1, dynamic_address);
	set_at<112, 128>(result, stg12_FIFO_buf84_stg13_1_merged425_197_res);
	return result;
}

struct stg13_stg13_1_merged425_188_to_stg13_stg13_ld25_merged376_186_cache {
	// RAM Box: {[1, 1081], [-1, 1920]}
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

struct stg13_stg13_1_merged425_189_to_stg13_stg13_ld25_merged376_187_cache {
	// RAM Box: {[0, 1080], [-1, 1920]}
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
    // { stg13_ld25_merged376[root = 0, stg13_ld26, stg13_ld25] -> stg13[1 + 2stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 540 }
    // { stg13_ld25_merged376[root = 0, stg13_ld26, stg13_ld25] -> stg13[2stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 540 }
  // # of banks: 2
  stg13_stg13_1_merged425_188_to_stg13_stg13_ld25_merged376_186_cache stg13_stg13_1_merged425_188_to_stg13_stg13_ld25_merged376_186;
  stg13_stg13_1_merged425_189_to_stg13_stg13_ld25_merged376_187_cache stg13_stg13_1_merged425_189_to_stg13_stg13_ld25_merged376_187;
};



inline void stg13_stg13_1_merged425_188_write(hw_uint<16>& stg13_stg13_1_merged425_188, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_1_merged425_188_to_stg13_stg13_ld25_merged376_186.push(stg13_stg13_1_merged425_188);
}

inline void stg13_stg13_1_merged425_189_write(hw_uint<16>& stg13_stg13_1_merged425_189, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
  stg13.stg13_stg13_1_merged425_189_to_stg13_stg13_ld25_merged376_187.push(stg13_stg13_1_merged425_189);
}

inline hw_uint<16> stg13_stg13_ld25_merged376_186_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg13_ld25_merged376_186 read pattern: { stg13_ld25_merged376[root = 0, stg13_ld26, stg13_ld25] -> stg13[1 + 2stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 540 }
  // Read schedule : { stg13_ld25_merged376[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_stg13_1_merged425_188 = stg13.stg13_stg13_1_merged425_188_to_stg13_stg13_ld25_merged376_186.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_1_merged425_188;
  return 0;
}

inline hw_uint<16> stg13_stg13_ld25_merged376_187_select(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_stg13_ld25_merged376_187 read pattern: { stg13_ld25_merged376[root = 0, stg13_ld26, stg13_ld25] -> stg13[2stg13_ld25, -1 + stg13_ld26] : 0 <= stg13_ld26 <= 1921 and 0 <= stg13_ld25 <= 540 }
  // Read schedule : { stg13_ld25_merged376[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  // Write schedule: { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_stg13_1_merged425_189 = stg13.stg13_stg13_1_merged425_189_to_stg13_stg13_ld25_merged376_187.peek(/* one reader or all rams */ 0);
  return value_stg13_stg13_1_merged425_189;
  return 0;
}

// # of bundles = 2
// stg13_1_merged425_write
//	stg13_stg13_1_merged425_188
//	stg13_stg13_1_merged425_189
inline void stg13_stg13_1_merged425_write_bundle_write(hw_uint<32>& stg13_1_merged425_write, stg13_cache& stg13, int root, int stg13_0, int stg13_1, int dynamic_address) {
	hw_uint<16> stg13_stg13_1_merged425_188_res = stg13_1_merged425_write.extract<0, 15>();
	stg13_stg13_1_merged425_188_write(stg13_stg13_1_merged425_188_res, stg13, root, stg13_0, stg13_1, dynamic_address);
	hw_uint<16> stg13_stg13_1_merged425_189_res = stg13_1_merged425_write.extract<16, 31>();
	stg13_stg13_1_merged425_189_write(stg13_stg13_1_merged425_189_res, stg13, root, stg13_0, stg13_1, dynamic_address);
}

// stg13_ld25_merged376_read
//	stg13_stg13_ld25_merged376_186
//	stg13_stg13_ld25_merged376_187
inline hw_uint<32> stg13_stg13_ld25_merged376_read_bundle_read(stg13_cache& stg13, int root, int stg13_ld26, int stg13_ld25, int dynamic_address) {
  // # of ports in bundle: 2
    // stg13_stg13_ld25_merged376_186
    // stg13_stg13_ld25_merged376_187

	hw_uint<32> result;
	hw_uint<16> stg13_stg13_ld25_merged376_186_res = stg13_stg13_ld25_merged376_186_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<0, 32>(result, stg13_stg13_ld25_merged376_186_res);
	hw_uint<16> stg13_stg13_ld25_merged376_187_res = stg13_stg13_ld25_merged376_187_select(stg13, root, stg13_ld26, stg13_ld25, dynamic_address);
	set_at<16, 32>(result, stg13_stg13_ld25_merged376_187_res);
	return result;
}

struct stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4_cache {
	// RAM Box: {[1, 1079], [-1, 1920]}
	// Capacity: 1084
	// # of read delays: 4
  // 0, 1, 542, 1083
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 540> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 540> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_541() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_542() {
		return f4;
	}

	inline hw_uint<16> peek_1082() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1083() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 540
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 540
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4_cache {
	// RAM Box: {[0, 1080], [-1, 1919]}
	// Capacity: 1084
	// # of read delays: 5
  // 0, 1, 541, 542, 1083
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 539> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 540> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_540() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_541() {
		return f4;
	}

	inline hw_uint<16> peek_542() {
		return f6;
	}

	inline hw_uint<16> peek_1082() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1083() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 540
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 540 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 539
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 539 reading from capacity: 1
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
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
    // { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // # of banks: 2
  stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4_cache stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4;
  stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4_cache stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4;
};



inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_write(hw_uint<16>& stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4.push(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180);
}

inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_write(hw_uint<16>& stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
  stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4.push(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181);
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_172_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_172 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4.peek_1083();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_173_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_173 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4.peek_542();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_174_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_174 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2 + 2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4.peek_541();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_175_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_175 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_176_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_176 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2stg14_1, -1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4.peek_1083();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_177_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_177 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4.peek_542();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_178_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_178 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[1 + 2stg14_1, stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_merged_banks_4.peek_542();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180;
  return 0;
}

inline hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_179_select(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg13_FIFO_buf88_stg14_1_merged428_179 read pattern: { stg14_1_merged428[root = 0, stg14_0, stg14_1] -> stg13_FIFO_buf88[2stg14_1, 1 + stg14_0] : 0 <= stg14_0 <= 1919 and 0 <= stg14_1 <= 539 }
  // Read schedule : { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
  auto value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181 = stg13_FIFO_buf88.stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_merged_banks_4.peek_1();
  return value_stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181;
  return 0;
}

// # of bundles = 2
// stg13_to_gp_724_ld89_merged380_write
//	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180
//	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181
inline void stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_write_bundle_write(hw_uint<32>& stg13_to_gp_724_ld89_merged380_write, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg13_to_gp_724_ld90, int stg13_to_gp_724_ld89, int dynamic_address) {
	hw_uint<16> stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_res = stg13_to_gp_724_ld89_merged380_write.extract<0, 15>();
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_write(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_180_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
	hw_uint<16> stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_res = stg13_to_gp_724_ld89_merged380_write.extract<16, 31>();
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_write(stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_181_res, stg13_FIFO_buf88, root, stg13_to_gp_724_ld90, stg13_to_gp_724_ld89, dynamic_address);
}

// stg14_1_merged428_read
//	stg13_FIFO_buf88_stg14_1_merged428_172
//	stg13_FIFO_buf88_stg14_1_merged428_173
//	stg13_FIFO_buf88_stg14_1_merged428_174
//	stg13_FIFO_buf88_stg14_1_merged428_175
//	stg13_FIFO_buf88_stg14_1_merged428_176
//	stg13_FIFO_buf88_stg14_1_merged428_177
//	stg13_FIFO_buf88_stg14_1_merged428_178
//	stg13_FIFO_buf88_stg14_1_merged428_179
inline hw_uint<128> stg13_FIFO_buf88_stg14_1_merged428_read_bundle_read(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int root, int stg14_0, int stg14_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg13_FIFO_buf88_stg14_1_merged428_172
    // stg13_FIFO_buf88_stg14_1_merged428_173
    // stg13_FIFO_buf88_stg14_1_merged428_174
    // stg13_FIFO_buf88_stg14_1_merged428_175
    // stg13_FIFO_buf88_stg14_1_merged428_176
    // stg13_FIFO_buf88_stg14_1_merged428_177
    // stg13_FIFO_buf88_stg14_1_merged428_178
    // stg13_FIFO_buf88_stg14_1_merged428_179

	hw_uint<128> result;
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_172_res = stg13_FIFO_buf88_stg14_1_merged428_172_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<0, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_172_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_173_res = stg13_FIFO_buf88_stg14_1_merged428_173_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<16, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_173_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_174_res = stg13_FIFO_buf88_stg14_1_merged428_174_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<32, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_174_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_175_res = stg13_FIFO_buf88_stg14_1_merged428_175_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<48, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_175_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_176_res = stg13_FIFO_buf88_stg14_1_merged428_176_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<64, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_176_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_177_res = stg13_FIFO_buf88_stg14_1_merged428_177_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<80, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_177_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_178_res = stg13_FIFO_buf88_stg14_1_merged428_178_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<96, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_178_res);
	hw_uint<16> stg13_FIFO_buf88_stg14_1_merged428_179_res = stg13_FIFO_buf88_stg14_1_merged428_179_select(stg13_FIFO_buf88, root, stg14_0, stg14_1, dynamic_address);
	set_at<112, 128>(result, stg13_FIFO_buf88_stg14_1_merged428_179_res);
	return result;
}

struct stg14_stg14_1_merged428_170_to_stg14_stg14_ld29_merged433_168_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
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

struct stg14_stg14_1_merged428_171_to_stg14_stg14_ld29_merged433_169_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
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
    // { stg14_ld29_merged433[root = 0, stg14_ld30, stg14_ld29] -> stg14[1 + 2stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 539 }
    // { stg14_ld29_merged433[root = 0, stg14_ld30, stg14_ld29] -> stg14[2stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 539 }
  // # of banks: 2
  stg14_stg14_1_merged428_170_to_stg14_stg14_ld29_merged433_168_cache stg14_stg14_1_merged428_170_to_stg14_stg14_ld29_merged433_168;
  stg14_stg14_1_merged428_171_to_stg14_stg14_ld29_merged433_169_cache stg14_stg14_1_merged428_171_to_stg14_stg14_ld29_merged433_169;
};



inline void stg14_stg14_1_merged428_170_write(hw_uint<16>& stg14_stg14_1_merged428_170, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_1_merged428_170_to_stg14_stg14_ld29_merged433_168.push(stg14_stg14_1_merged428_170);
}

inline void stg14_stg14_1_merged428_171_write(hw_uint<16>& stg14_stg14_1_merged428_171, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
  stg14.stg14_stg14_1_merged428_171_to_stg14_stg14_ld29_merged433_169.push(stg14_stg14_1_merged428_171);
}

inline hw_uint<16> stg14_stg14_ld29_merged433_168_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_stg14_ld29_merged433_168 read pattern: { stg14_ld29_merged433[root = 0, stg14_ld30, stg14_ld29] -> stg14[1 + 2stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 539 }
  // Read schedule : { stg14_ld29_merged433[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  auto value_stg14_stg14_1_merged428_170 = stg14.stg14_stg14_1_merged428_170_to_stg14_stg14_ld29_merged433_168.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_1_merged428_170;
  return 0;
}

inline hw_uint<16> stg14_stg14_ld29_merged433_169_select(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_stg14_ld29_merged433_169 read pattern: { stg14_ld29_merged433[root = 0, stg14_ld30, stg14_ld29] -> stg14[2stg14_ld29, stg14_ld30] : 0 <= stg14_ld30 <= 1919 and 0 <= stg14_ld29 <= 539 }
  // Read schedule : { stg14_ld29_merged433[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  auto value_stg14_stg14_1_merged428_171 = stg14.stg14_stg14_1_merged428_171_to_stg14_stg14_ld29_merged433_169.peek(/* one reader or all rams */ 0);
  return value_stg14_stg14_1_merged428_171;
  return 0;
}

// # of bundles = 2
// stg14_1_merged428_write
//	stg14_stg14_1_merged428_170
//	stg14_stg14_1_merged428_171
inline void stg14_stg14_1_merged428_write_bundle_write(hw_uint<32>& stg14_1_merged428_write, stg14_cache& stg14, int root, int stg14_0, int stg14_1, int dynamic_address) {
	hw_uint<16> stg14_stg14_1_merged428_170_res = stg14_1_merged428_write.extract<0, 15>();
	stg14_stg14_1_merged428_170_write(stg14_stg14_1_merged428_170_res, stg14, root, stg14_0, stg14_1, dynamic_address);
	hw_uint<16> stg14_stg14_1_merged428_171_res = stg14_1_merged428_write.extract<16, 31>();
	stg14_stg14_1_merged428_171_write(stg14_stg14_1_merged428_171_res, stg14, root, stg14_0, stg14_1, dynamic_address);
}

// stg14_ld29_merged433_read
//	stg14_stg14_ld29_merged433_168
//	stg14_stg14_ld29_merged433_169
inline hw_uint<32> stg14_stg14_ld29_merged433_read_bundle_read(stg14_cache& stg14, int root, int stg14_ld30, int stg14_ld29, int dynamic_address) {
  // # of ports in bundle: 2
    // stg14_stg14_ld29_merged433_168
    // stg14_stg14_ld29_merged433_169

	hw_uint<32> result;
	hw_uint<16> stg14_stg14_ld29_merged433_168_res = stg14_stg14_ld29_merged433_168_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<0, 32>(result, stg14_stg14_ld29_merged433_168_res);
	hw_uint<16> stg14_stg14_ld29_merged433_169_res = stg14_stg14_ld29_merged433_169_select(stg14, root, stg14_ld30, stg14_ld29, dynamic_address);
	set_at<16, 32>(result, stg14_stg14_ld29_merged433_169_res);
	return result;
}

struct stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_272_cache {
	// RAM Box: {[1, 1079], [0, 1919]}
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

struct stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_273_cache {
	// RAM Box: {[0, 1078], [0, 1919]}
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
    // { jacdynl_2_1_merged431[root = 0, jacdynl_2_0, jacdynl_2_1] -> stg14_FIFO_buf92[1 + 2jacdynl_2_1, jacdynl_2_0] : 0 <= jacdynl_2_0 <= 1919 and 0 <= jacdynl_2_1 <= 539 }
    // { jacdynl_2_1_merged431[root = 0, jacdynl_2_0, jacdynl_2_1] -> stg14_FIFO_buf92[2jacdynl_2_1, jacdynl_2_0] : 0 <= jacdynl_2_0 <= 1919 and 0 <= jacdynl_2_1 <= 539 }
  // # of banks: 2
  stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_272_cache stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_272;
  stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_273_cache stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_273;
};



inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_write(hw_uint<16>& stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_272.push(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162);
}

inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_write(hw_uint<16>& stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
  stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_273.push(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163);
}

inline hw_uint<16> stg14_FIFO_buf92_jacdynl_2_1_merged431_272_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdynl_2_0, int jacdynl_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdynl_2_1_merged431_272 read pattern: { jacdynl_2_1_merged431[root = 0, jacdynl_2_0, jacdynl_2_1] -> stg14_FIFO_buf92[1 + 2jacdynl_2_1, jacdynl_2_0] : 0 <= jacdynl_2_0 <= 1919 and 0 <= jacdynl_2_1 <= 539 }
  // Read schedule : { jacdynl_2_1_merged431[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg14_to_gp_128_ld93_merged473[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  auto value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162 = stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_272.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162;
  return 0;
}

inline hw_uint<16> stg14_FIFO_buf92_jacdynl_2_1_merged431_273_select(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdynl_2_0, int jacdynl_2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg14_FIFO_buf92_jacdynl_2_1_merged431_273 read pattern: { jacdynl_2_1_merged431[root = 0, jacdynl_2_0, jacdynl_2_1] -> stg14_FIFO_buf92[2jacdynl_2_1, jacdynl_2_0] : 0 <= jacdynl_2_0 <= 1919 and 0 <= jacdynl_2_1 <= 539 }
  // Read schedule : { jacdynl_2_1_merged431[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  // Write schedule: { stg14_to_gp_128_ld93_merged473[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
  auto value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163 = stg14_FIFO_buf92.stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_to_stg14_FIFO_buf92_jacdynl_2_1_merged431_273.peek(/* one reader or all rams */ 0);
  return value_stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163;
  return 0;
}

// # of bundles = 2
// jacdynl_2_1_merged431_read
//	stg14_FIFO_buf92_jacdynl_2_1_merged431_272
//	stg14_FIFO_buf92_jacdynl_2_1_merged431_273
inline hw_uint<32> stg14_FIFO_buf92_jacdynl_2_1_merged431_read_bundle_read(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int jacdynl_2_0, int jacdynl_2_1, int dynamic_address) {
  // # of ports in bundle: 2
    // stg14_FIFO_buf92_jacdynl_2_1_merged431_272
    // stg14_FIFO_buf92_jacdynl_2_1_merged431_273

	hw_uint<32> result;
	hw_uint<16> stg14_FIFO_buf92_jacdynl_2_1_merged431_272_res = stg14_FIFO_buf92_jacdynl_2_1_merged431_272_select(stg14_FIFO_buf92, root, jacdynl_2_0, jacdynl_2_1, dynamic_address);
	set_at<0, 32>(result, stg14_FIFO_buf92_jacdynl_2_1_merged431_272_res);
	hw_uint<16> stg14_FIFO_buf92_jacdynl_2_1_merged431_273_res = stg14_FIFO_buf92_jacdynl_2_1_merged431_273_select(stg14_FIFO_buf92, root, jacdynl_2_0, jacdynl_2_1, dynamic_address);
	set_at<16, 32>(result, stg14_FIFO_buf92_jacdynl_2_1_merged431_273_res);
	return result;
}

// stg14_to_gp_128_ld93_merged473_write
//	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162
//	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163
inline void stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_write_bundle_write(hw_uint<32>& stg14_to_gp_128_ld93_merged473_write, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int root, int stg14_to_gp_128_ld94, int stg14_to_gp_128_ld93, int dynamic_address) {
	hw_uint<16> stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_res = stg14_to_gp_128_ld93_merged473_write.extract<0, 15>();
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_write(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_162_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
	hw_uint<16> stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_res = stg14_to_gp_128_ld93_merged473_write.extract<16, 31>();
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_write(stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_163_res, stg14_FIFO_buf92, root, stg14_to_gp_128_ld94, stg14_to_gp_128_ld93, dynamic_address);
}

struct stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4_cache {
	// RAM Box: {[1, 1103], [-13, 1932]}
	// Capacity: 1108
	// # of read delays: 4
  // 0, 1, 554, 1107
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 552> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 552> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_553() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_554() {
		return f4;
	}

	inline hw_uint<16> peek_1106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1107() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 552
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 552 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 552
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 552 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4_cache {
	// RAM Box: {[0, 1104], [-13, 1931]}
	// Capacity: 1108
	// # of read delays: 5
  // 0, 1, 553, 554, 1107
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 551> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 552> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_553() {
		return f4;
	}

	inline hw_uint<16> peek_554() {
		return f6;
	}

	inline hw_uint<16> peek_1106() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1107() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 552
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 552 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 551
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 551 reading from capacity: 1
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
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
    // { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // # of banks: 2
  stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4_cache stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4;
  stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4_cache stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4;
};



inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_write(hw_uint<16>& stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4.push(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144);
}

inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_write(hw_uint<16>& stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
  stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4.push(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145);
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_136_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_136 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4.peek_1107();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_137_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_137 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4.peek_554();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_138_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_138 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2 + 2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4.peek_553();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_139_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_139 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_140_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_140 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2stg2_1, -13 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4.peek_1107();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_141_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_141 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4.peek_554();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_142_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_142 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[1 + 2stg2_1, -12 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_merged_banks_4.peek_554();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144;
  return 0;
}

inline hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_143_select(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_FIFO_buf72_stg2_1_merged392_143 read pattern: { stg2_1_merged392[root = 0, stg2_0, stg2_1] -> stg1_FIFO_buf72[2stg2_1, -11 + stg2_0] : 0 <= stg2_0 <= 1943 and 0 <= stg2_1 <= 551 }
  // Read schedule : { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
  auto value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145 = stg1_FIFO_buf72.stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_merged_banks_4.peek_1();
  return value_stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145;
  return 0;
}

// # of bundles = 2
// stg1_to_gp_98_ld73_merged441_write
//	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144
//	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145
inline void stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_write_bundle_write(hw_uint<32>& stg1_to_gp_98_ld73_merged441_write, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg1_to_gp_98_ld74, int stg1_to_gp_98_ld73, int dynamic_address) {
	hw_uint<16> stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_res = stg1_to_gp_98_ld73_merged441_write.extract<0, 15>();
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_write(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_144_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
	hw_uint<16> stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_res = stg1_to_gp_98_ld73_merged441_write.extract<16, 31>();
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_write(stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_145_res, stg1_FIFO_buf72, root, stg1_to_gp_98_ld74, stg1_to_gp_98_ld73, dynamic_address);
}

// stg2_1_merged392_read
//	stg1_FIFO_buf72_stg2_1_merged392_136
//	stg1_FIFO_buf72_stg2_1_merged392_137
//	stg1_FIFO_buf72_stg2_1_merged392_138
//	stg1_FIFO_buf72_stg2_1_merged392_139
//	stg1_FIFO_buf72_stg2_1_merged392_140
//	stg1_FIFO_buf72_stg2_1_merged392_141
//	stg1_FIFO_buf72_stg2_1_merged392_142
//	stg1_FIFO_buf72_stg2_1_merged392_143
inline hw_uint<128> stg1_FIFO_buf72_stg2_1_merged392_read_bundle_read(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int root, int stg2_0, int stg2_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg1_FIFO_buf72_stg2_1_merged392_136
    // stg1_FIFO_buf72_stg2_1_merged392_137
    // stg1_FIFO_buf72_stg2_1_merged392_138
    // stg1_FIFO_buf72_stg2_1_merged392_139
    // stg1_FIFO_buf72_stg2_1_merged392_140
    // stg1_FIFO_buf72_stg2_1_merged392_141
    // stg1_FIFO_buf72_stg2_1_merged392_142
    // stg1_FIFO_buf72_stg2_1_merged392_143

	hw_uint<128> result;
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_136_res = stg1_FIFO_buf72_stg2_1_merged392_136_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<0, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_136_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_137_res = stg1_FIFO_buf72_stg2_1_merged392_137_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<16, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_137_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_138_res = stg1_FIFO_buf72_stg2_1_merged392_138_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<32, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_138_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_139_res = stg1_FIFO_buf72_stg2_1_merged392_139_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<48, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_139_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_140_res = stg1_FIFO_buf72_stg2_1_merged392_140_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<64, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_140_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_141_res = stg1_FIFO_buf72_stg2_1_merged392_141_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<80, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_141_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_142_res = stg1_FIFO_buf72_stg2_1_merged392_142_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<96, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_142_res);
	hw_uint<16> stg1_FIFO_buf72_stg2_1_merged392_143_res = stg1_FIFO_buf72_stg2_1_merged392_143_select(stg1_FIFO_buf72, root, stg2_0, stg2_1, dynamic_address);
	set_at<112, 128>(result, stg1_FIFO_buf72_stg2_1_merged392_143_res);
	return result;
}

struct stg2_stg2_1_merged392_134_to_stg2_stg2_ld33_merged455_132_cache {
	// RAM Box: {[1, 1103], [-12, 1931]}
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

struct stg2_stg2_1_merged392_135_to_stg2_stg2_ld33_merged455_133_cache {
	// RAM Box: {[0, 1102], [-12, 1931]}
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
    // { stg2_ld33_merged455[root = 0, stg2_ld34, stg2_ld33] -> stg2[1 + 2stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 551 }
    // { stg2_ld33_merged455[root = 0, stg2_ld34, stg2_ld33] -> stg2[2stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 551 }
  // # of banks: 2
  stg2_stg2_1_merged392_134_to_stg2_stg2_ld33_merged455_132_cache stg2_stg2_1_merged392_134_to_stg2_stg2_ld33_merged455_132;
  stg2_stg2_1_merged392_135_to_stg2_stg2_ld33_merged455_133_cache stg2_stg2_1_merged392_135_to_stg2_stg2_ld33_merged455_133;
};



inline void stg2_stg2_1_merged392_134_write(hw_uint<16>& stg2_stg2_1_merged392_134, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_1_merged392_134_to_stg2_stg2_ld33_merged455_132.push(stg2_stg2_1_merged392_134);
}

inline void stg2_stg2_1_merged392_135_write(hw_uint<16>& stg2_stg2_1_merged392_135, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
  stg2.stg2_stg2_1_merged392_135_to_stg2_stg2_ld33_merged455_133.push(stg2_stg2_1_merged392_135);
}

inline hw_uint<16> stg2_stg2_ld33_merged455_132_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg2_ld33_merged455_132 read pattern: { stg2_ld33_merged455[root = 0, stg2_ld34, stg2_ld33] -> stg2[1 + 2stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 551 }
  // Read schedule : { stg2_ld33_merged455[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_stg2_1_merged392_134 = stg2.stg2_stg2_1_merged392_134_to_stg2_stg2_ld33_merged455_132.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_1_merged392_134;
  return 0;
}

inline hw_uint<16> stg2_stg2_ld33_merged455_133_select(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_stg2_ld33_merged455_133 read pattern: { stg2_ld33_merged455[root = 0, stg2_ld34, stg2_ld33] -> stg2[2stg2_ld33, -12 + stg2_ld34] : 0 <= stg2_ld34 <= 1943 and 0 <= stg2_ld33 <= 551 }
  // Read schedule : { stg2_ld33_merged455[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  // Write schedule: { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_stg2_1_merged392_135 = stg2.stg2_stg2_1_merged392_135_to_stg2_stg2_ld33_merged455_133.peek(/* one reader or all rams */ 0);
  return value_stg2_stg2_1_merged392_135;
  return 0;
}

// # of bundles = 2
// stg2_1_merged392_write
//	stg2_stg2_1_merged392_134
//	stg2_stg2_1_merged392_135
inline void stg2_stg2_1_merged392_write_bundle_write(hw_uint<32>& stg2_1_merged392_write, stg2_cache& stg2, int root, int stg2_0, int stg2_1, int dynamic_address) {
	hw_uint<16> stg2_stg2_1_merged392_134_res = stg2_1_merged392_write.extract<0, 15>();
	stg2_stg2_1_merged392_134_write(stg2_stg2_1_merged392_134_res, stg2, root, stg2_0, stg2_1, dynamic_address);
	hw_uint<16> stg2_stg2_1_merged392_135_res = stg2_1_merged392_write.extract<16, 31>();
	stg2_stg2_1_merged392_135_write(stg2_stg2_1_merged392_135_res, stg2, root, stg2_0, stg2_1, dynamic_address);
}

// stg2_ld33_merged455_read
//	stg2_stg2_ld33_merged455_132
//	stg2_stg2_ld33_merged455_133
inline hw_uint<32> stg2_stg2_ld33_merged455_read_bundle_read(stg2_cache& stg2, int root, int stg2_ld34, int stg2_ld33, int dynamic_address) {
  // # of ports in bundle: 2
    // stg2_stg2_ld33_merged455_132
    // stg2_stg2_ld33_merged455_133

	hw_uint<32> result;
	hw_uint<16> stg2_stg2_ld33_merged455_132_res = stg2_stg2_ld33_merged455_132_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<0, 32>(result, stg2_stg2_ld33_merged455_132_res);
	hw_uint<16> stg2_stg2_ld33_merged455_133_res = stg2_stg2_ld33_merged455_133_select(stg2, root, stg2_ld34, stg2_ld33, dynamic_address);
	set_at<16, 32>(result, stg2_stg2_ld33_merged455_133_res);
	return result;
}

struct stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4_cache {
	// RAM Box: {[1, 1101], [-12, 1931]}
	// Capacity: 1106
	// # of read delays: 4
  // 0, 1, 553, 1105
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 551> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 551> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_552() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_553() {
		return f4;
	}

	inline hw_uint<16> peek_1104() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1105() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 551
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 551 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 551
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 551 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4_cache {
	// RAM Box: {[0, 1102], [-12, 1930]}
	// Capacity: 1106
	// # of read delays: 5
  // 0, 1, 552, 553, 1105
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 550> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 551> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_551() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_552() {
		return f4;
	}

	inline hw_uint<16> peek_553() {
		return f6;
	}

	inline hw_uint<16> peek_1104() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1105() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 551
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 551 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 550
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 550 reading from capacity: 1
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
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
    // { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // # of banks: 2
  stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4_cache stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4;
  stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4_cache stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4;
};



inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_write(hw_uint<16>& stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4.push(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126);
}

inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_write(hw_uint<16>& stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
  stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4.push(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127);
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_118_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_118 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4.peek_1105();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_119_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_119 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4.peek_553();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_120_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_120 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2 + 2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4.peek_552();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_121_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_121 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_122_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_122 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2stg3_1, -12 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4.peek_1105();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_123_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_123 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4.peek_553();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_124_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_124 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[1 + 2stg3_1, -11 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_merged_banks_4.peek_553();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126;
  return 0;
}

inline hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_125_select(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_FIFO_buf96_stg3_1_merged395_125 read pattern: { stg3_1_merged395[root = 0, stg3_0, stg3_1] -> stg2_FIFO_buf96[2stg3_1, -10 + stg3_0] : 0 <= stg3_0 <= 1941 and 0 <= stg3_1 <= 550 }
  // Read schedule : { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
  auto value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127 = stg2_FIFO_buf96.stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_merged_banks_4.peek_1();
  return value_stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127;
  return 0;
}

// # of bundles = 2
// stg2_to_gp_1032_ld97_merged475_write
//	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126
//	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127
inline void stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_write_bundle_write(hw_uint<32>& stg2_to_gp_1032_ld97_merged475_write, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg2_to_gp_1032_ld98, int stg2_to_gp_1032_ld97, int dynamic_address) {
	hw_uint<16> stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_res = stg2_to_gp_1032_ld97_merged475_write.extract<0, 15>();
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_write(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_126_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
	hw_uint<16> stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_res = stg2_to_gp_1032_ld97_merged475_write.extract<16, 31>();
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_write(stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_127_res, stg2_FIFO_buf96, root, stg2_to_gp_1032_ld98, stg2_to_gp_1032_ld97, dynamic_address);
}

// stg3_1_merged395_read
//	stg2_FIFO_buf96_stg3_1_merged395_118
//	stg2_FIFO_buf96_stg3_1_merged395_119
//	stg2_FIFO_buf96_stg3_1_merged395_120
//	stg2_FIFO_buf96_stg3_1_merged395_121
//	stg2_FIFO_buf96_stg3_1_merged395_122
//	stg2_FIFO_buf96_stg3_1_merged395_123
//	stg2_FIFO_buf96_stg3_1_merged395_124
//	stg2_FIFO_buf96_stg3_1_merged395_125
inline hw_uint<128> stg2_FIFO_buf96_stg3_1_merged395_read_bundle_read(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int root, int stg3_0, int stg3_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg2_FIFO_buf96_stg3_1_merged395_118
    // stg2_FIFO_buf96_stg3_1_merged395_119
    // stg2_FIFO_buf96_stg3_1_merged395_120
    // stg2_FIFO_buf96_stg3_1_merged395_121
    // stg2_FIFO_buf96_stg3_1_merged395_122
    // stg2_FIFO_buf96_stg3_1_merged395_123
    // stg2_FIFO_buf96_stg3_1_merged395_124
    // stg2_FIFO_buf96_stg3_1_merged395_125

	hw_uint<128> result;
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_118_res = stg2_FIFO_buf96_stg3_1_merged395_118_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<0, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_118_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_119_res = stg2_FIFO_buf96_stg3_1_merged395_119_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<16, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_119_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_120_res = stg2_FIFO_buf96_stg3_1_merged395_120_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<32, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_120_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_121_res = stg2_FIFO_buf96_stg3_1_merged395_121_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<48, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_121_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_122_res = stg2_FIFO_buf96_stg3_1_merged395_122_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<64, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_122_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_123_res = stg2_FIFO_buf96_stg3_1_merged395_123_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<80, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_123_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_124_res = stg2_FIFO_buf96_stg3_1_merged395_124_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<96, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_124_res);
	hw_uint<16> stg2_FIFO_buf96_stg3_1_merged395_125_res = stg2_FIFO_buf96_stg3_1_merged395_125_select(stg2_FIFO_buf96, root, stg3_0, stg3_1, dynamic_address);
	set_at<112, 128>(result, stg2_FIFO_buf96_stg3_1_merged395_125_res);
	return result;
}

struct stg3_stg3_1_merged395_116_to_stg3_stg3_ld37_merged457_114_cache {
	// RAM Box: {[1, 1101], [-11, 1930]}
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

struct stg3_stg3_1_merged395_117_to_stg3_stg3_ld37_merged457_115_cache {
	// RAM Box: {[0, 1100], [-11, 1930]}
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
    // { stg3_ld37_merged457[root = 0, stg3_ld38, stg3_ld37] -> stg3[1 + 2stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 550 }
    // { stg3_ld37_merged457[root = 0, stg3_ld38, stg3_ld37] -> stg3[2stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 550 }
  // # of banks: 2
  stg3_stg3_1_merged395_116_to_stg3_stg3_ld37_merged457_114_cache stg3_stg3_1_merged395_116_to_stg3_stg3_ld37_merged457_114;
  stg3_stg3_1_merged395_117_to_stg3_stg3_ld37_merged457_115_cache stg3_stg3_1_merged395_117_to_stg3_stg3_ld37_merged457_115;
};



inline void stg3_stg3_1_merged395_116_write(hw_uint<16>& stg3_stg3_1_merged395_116, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_1_merged395_116_to_stg3_stg3_ld37_merged457_114.push(stg3_stg3_1_merged395_116);
}

inline void stg3_stg3_1_merged395_117_write(hw_uint<16>& stg3_stg3_1_merged395_117, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
  stg3.stg3_stg3_1_merged395_117_to_stg3_stg3_ld37_merged457_115.push(stg3_stg3_1_merged395_117);
}

inline hw_uint<16> stg3_stg3_ld37_merged457_114_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg3_ld37_merged457_114 read pattern: { stg3_ld37_merged457[root = 0, stg3_ld38, stg3_ld37] -> stg3[1 + 2stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 550 }
  // Read schedule : { stg3_ld37_merged457[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_stg3_1_merged395_116 = stg3.stg3_stg3_1_merged395_116_to_stg3_stg3_ld37_merged457_114.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_1_merged395_116;
  return 0;
}

inline hw_uint<16> stg3_stg3_ld37_merged457_115_select(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_stg3_ld37_merged457_115 read pattern: { stg3_ld37_merged457[root = 0, stg3_ld38, stg3_ld37] -> stg3[2stg3_ld37, -11 + stg3_ld38] : 0 <= stg3_ld38 <= 1941 and 0 <= stg3_ld37 <= 550 }
  // Read schedule : { stg3_ld37_merged457[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  // Write schedule: { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_stg3_1_merged395_117 = stg3.stg3_stg3_1_merged395_117_to_stg3_stg3_ld37_merged457_115.peek(/* one reader or all rams */ 0);
  return value_stg3_stg3_1_merged395_117;
  return 0;
}

// # of bundles = 2
// stg3_1_merged395_write
//	stg3_stg3_1_merged395_116
//	stg3_stg3_1_merged395_117
inline void stg3_stg3_1_merged395_write_bundle_write(hw_uint<32>& stg3_1_merged395_write, stg3_cache& stg3, int root, int stg3_0, int stg3_1, int dynamic_address) {
	hw_uint<16> stg3_stg3_1_merged395_116_res = stg3_1_merged395_write.extract<0, 15>();
	stg3_stg3_1_merged395_116_write(stg3_stg3_1_merged395_116_res, stg3, root, stg3_0, stg3_1, dynamic_address);
	hw_uint<16> stg3_stg3_1_merged395_117_res = stg3_1_merged395_write.extract<16, 31>();
	stg3_stg3_1_merged395_117_write(stg3_stg3_1_merged395_117_res, stg3, root, stg3_0, stg3_1, dynamic_address);
}

// stg3_ld37_merged457_read
//	stg3_stg3_ld37_merged457_114
//	stg3_stg3_ld37_merged457_115
inline hw_uint<32> stg3_stg3_ld37_merged457_read_bundle_read(stg3_cache& stg3, int root, int stg3_ld38, int stg3_ld37, int dynamic_address) {
  // # of ports in bundle: 2
    // stg3_stg3_ld37_merged457_114
    // stg3_stg3_ld37_merged457_115

	hw_uint<32> result;
	hw_uint<16> stg3_stg3_ld37_merged457_114_res = stg3_stg3_ld37_merged457_114_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<0, 32>(result, stg3_stg3_ld37_merged457_114_res);
	hw_uint<16> stg3_stg3_ld37_merged457_115_res = stg3_stg3_ld37_merged457_115_select(stg3, root, stg3_ld38, stg3_ld37, dynamic_address);
	set_at<16, 32>(result, stg3_stg3_ld37_merged457_115_res);
	return result;
}

struct stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4_cache {
	// RAM Box: {[1, 1099], [-11, 1930]}
	// Capacity: 1104
	// # of read delays: 4
  // 0, 1, 552, 1103
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 550> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 550> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_551() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_552() {
		return f4;
	}

	inline hw_uint<16> peek_1102() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1103() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 550
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 550 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 550
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 550 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4_cache {
	// RAM Box: {[0, 1100], [-11, 1929]}
	// Capacity: 1104
	// # of read delays: 5
  // 0, 1, 551, 552, 1103
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 549> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 550> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_551() {
		return f4;
	}

	inline hw_uint<16> peek_552() {
		return f6;
	}

	inline hw_uint<16> peek_1102() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1103() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 550
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 550 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 549
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 549 reading from capacity: 1
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
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
    // { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // # of banks: 2
  stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4_cache stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4;
  stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4_cache stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4;
};



inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_write(hw_uint<16>& stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4.push(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108);
}

inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_write(hw_uint<16>& stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
  stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4.push(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109);
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_100_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_100 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4.peek_1103();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_101_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_101 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4.peek_552();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_102_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_102 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2 + 2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4.peek_551();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_103_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_103 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_104_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_104 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2stg4_1, -11 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4.peek_1103();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_105_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_105 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4.peek_552();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_106_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_106 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[1 + 2stg4_1, -10 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_merged_banks_4.peek_552();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108;
  return 0;
}

inline hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_107_select(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_FIFO_buf100_stg4_1_merged398_107 read pattern: { stg4_1_merged398[root = 0, stg4_0, stg4_1] -> stg3_FIFO_buf100[2stg4_1, -9 + stg4_0] : 0 <= stg4_0 <= 1939 and 0 <= stg4_1 <= 549 }
  // Read schedule : { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
  auto value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109 = stg3_FIFO_buf100.stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_merged_banks_4.peek_1();
  return value_stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109;
  return 0;
}

// # of bundles = 2
// stg3_to_gp_1136_ld101_merged483_write
//	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108
//	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109
inline void stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_write_bundle_write(hw_uint<32>& stg3_to_gp_1136_ld101_merged483_write, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg3_to_gp_1136_ld102, int stg3_to_gp_1136_ld101, int dynamic_address) {
	hw_uint<16> stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_res = stg3_to_gp_1136_ld101_merged483_write.extract<0, 15>();
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_write(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_108_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
	hw_uint<16> stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_res = stg3_to_gp_1136_ld101_merged483_write.extract<16, 31>();
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_write(stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_109_res, stg3_FIFO_buf100, root, stg3_to_gp_1136_ld102, stg3_to_gp_1136_ld101, dynamic_address);
}

// stg4_1_merged398_read
//	stg3_FIFO_buf100_stg4_1_merged398_100
//	stg3_FIFO_buf100_stg4_1_merged398_101
//	stg3_FIFO_buf100_stg4_1_merged398_102
//	stg3_FIFO_buf100_stg4_1_merged398_103
//	stg3_FIFO_buf100_stg4_1_merged398_104
//	stg3_FIFO_buf100_stg4_1_merged398_105
//	stg3_FIFO_buf100_stg4_1_merged398_106
//	stg3_FIFO_buf100_stg4_1_merged398_107
inline hw_uint<128> stg3_FIFO_buf100_stg4_1_merged398_read_bundle_read(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int root, int stg4_0, int stg4_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg3_FIFO_buf100_stg4_1_merged398_100
    // stg3_FIFO_buf100_stg4_1_merged398_101
    // stg3_FIFO_buf100_stg4_1_merged398_102
    // stg3_FIFO_buf100_stg4_1_merged398_103
    // stg3_FIFO_buf100_stg4_1_merged398_104
    // stg3_FIFO_buf100_stg4_1_merged398_105
    // stg3_FIFO_buf100_stg4_1_merged398_106
    // stg3_FIFO_buf100_stg4_1_merged398_107

	hw_uint<128> result;
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_100_res = stg3_FIFO_buf100_stg4_1_merged398_100_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<0, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_100_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_101_res = stg3_FIFO_buf100_stg4_1_merged398_101_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<16, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_101_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_102_res = stg3_FIFO_buf100_stg4_1_merged398_102_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<32, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_102_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_103_res = stg3_FIFO_buf100_stg4_1_merged398_103_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<48, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_103_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_104_res = stg3_FIFO_buf100_stg4_1_merged398_104_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<64, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_104_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_105_res = stg3_FIFO_buf100_stg4_1_merged398_105_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<80, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_105_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_106_res = stg3_FIFO_buf100_stg4_1_merged398_106_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<96, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_106_res);
	hw_uint<16> stg3_FIFO_buf100_stg4_1_merged398_107_res = stg3_FIFO_buf100_stg4_1_merged398_107_select(stg3_FIFO_buf100, root, stg4_0, stg4_1, dynamic_address);
	set_at<112, 128>(result, stg3_FIFO_buf100_stg4_1_merged398_107_res);
	return result;
}

struct stg4_stg4_1_merged398_98_to_stg4_stg4_ld41_merged459_96_cache {
	// RAM Box: {[1, 1099], [-10, 1929]}
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

struct stg4_stg4_1_merged398_99_to_stg4_stg4_ld41_merged459_97_cache {
	// RAM Box: {[0, 1098], [-10, 1929]}
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
    // { stg4_ld41_merged459[root = 0, stg4_ld42, stg4_ld41] -> stg4[1 + 2stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 549 }
    // { stg4_ld41_merged459[root = 0, stg4_ld42, stg4_ld41] -> stg4[2stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 549 }
  // # of banks: 2
  stg4_stg4_1_merged398_98_to_stg4_stg4_ld41_merged459_96_cache stg4_stg4_1_merged398_98_to_stg4_stg4_ld41_merged459_96;
  stg4_stg4_1_merged398_99_to_stg4_stg4_ld41_merged459_97_cache stg4_stg4_1_merged398_99_to_stg4_stg4_ld41_merged459_97;
};



inline void stg4_stg4_1_merged398_98_write(hw_uint<16>& stg4_stg4_1_merged398_98, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_1_merged398_98_to_stg4_stg4_ld41_merged459_96.push(stg4_stg4_1_merged398_98);
}

inline void stg4_stg4_1_merged398_99_write(hw_uint<16>& stg4_stg4_1_merged398_99, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
  stg4.stg4_stg4_1_merged398_99_to_stg4_stg4_ld41_merged459_97.push(stg4_stg4_1_merged398_99);
}

inline hw_uint<16> stg4_stg4_ld41_merged459_96_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg4_ld41_merged459_96 read pattern: { stg4_ld41_merged459[root = 0, stg4_ld42, stg4_ld41] -> stg4[1 + 2stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 549 }
  // Read schedule : { stg4_ld41_merged459[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_stg4_1_merged398_98 = stg4.stg4_stg4_1_merged398_98_to_stg4_stg4_ld41_merged459_96.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_1_merged398_98;
  return 0;
}

inline hw_uint<16> stg4_stg4_ld41_merged459_97_select(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_stg4_ld41_merged459_97 read pattern: { stg4_ld41_merged459[root = 0, stg4_ld42, stg4_ld41] -> stg4[2stg4_ld41, -10 + stg4_ld42] : 0 <= stg4_ld42 <= 1939 and 0 <= stg4_ld41 <= 549 }
  // Read schedule : { stg4_ld41_merged459[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  // Write schedule: { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_stg4_1_merged398_99 = stg4.stg4_stg4_1_merged398_99_to_stg4_stg4_ld41_merged459_97.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_1_merged398_99;
  return 0;
}

// # of bundles = 2
// stg4_1_merged398_write
//	stg4_stg4_1_merged398_98
//	stg4_stg4_1_merged398_99
inline void stg4_stg4_1_merged398_write_bundle_write(hw_uint<32>& stg4_1_merged398_write, stg4_cache& stg4, int root, int stg4_0, int stg4_1, int dynamic_address) {
	hw_uint<16> stg4_stg4_1_merged398_98_res = stg4_1_merged398_write.extract<0, 15>();
	stg4_stg4_1_merged398_98_write(stg4_stg4_1_merged398_98_res, stg4, root, stg4_0, stg4_1, dynamic_address);
	hw_uint<16> stg4_stg4_1_merged398_99_res = stg4_1_merged398_write.extract<16, 31>();
	stg4_stg4_1_merged398_99_write(stg4_stg4_1_merged398_99_res, stg4, root, stg4_0, stg4_1, dynamic_address);
}

// stg4_ld41_merged459_read
//	stg4_stg4_ld41_merged459_96
//	stg4_stg4_ld41_merged459_97
inline hw_uint<32> stg4_stg4_ld41_merged459_read_bundle_read(stg4_cache& stg4, int root, int stg4_ld42, int stg4_ld41, int dynamic_address) {
  // # of ports in bundle: 2
    // stg4_stg4_ld41_merged459_96
    // stg4_stg4_ld41_merged459_97

	hw_uint<32> result;
	hw_uint<16> stg4_stg4_ld41_merged459_96_res = stg4_stg4_ld41_merged459_96_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<0, 32>(result, stg4_stg4_ld41_merged459_96_res);
	hw_uint<16> stg4_stg4_ld41_merged459_97_res = stg4_stg4_ld41_merged459_97_select(stg4, root, stg4_ld42, stg4_ld41, dynamic_address);
	set_at<16, 32>(result, stg4_stg4_ld41_merged459_97_res);
	return result;
}

struct stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4_cache {
	// RAM Box: {[1, 1097], [-10, 1929]}
	// Capacity: 1102
	// # of read delays: 4
  // 0, 1, 551, 1101
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 549> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 549> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_550() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_551() {
		return f4;
	}

	inline hw_uint<16> peek_1100() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1101() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 549
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 549 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 549
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 549 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4_cache {
	// RAM Box: {[0, 1098], [-10, 1928]}
	// Capacity: 1102
	// # of read delays: 5
  // 0, 1, 550, 551, 1101
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 548> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 549> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_549() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_550() {
		return f4;
	}

	inline hw_uint<16> peek_551() {
		return f6;
	}

	inline hw_uint<16> peek_1100() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1101() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 549
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 549 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 548
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 548 reading from capacity: 1
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
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
    // { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // # of banks: 2
  stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4_cache stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4;
  stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4_cache stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4;
};



inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_write(hw_uint<16>& stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4.push(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90);
}

inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_write(hw_uint<16>& stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
  stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4.push(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91);
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_82_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_82 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4.peek_1101();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_83_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_83 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4.peek_551();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_84_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_84 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2 + 2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4.peek_550();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_85_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_85 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_86_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_86 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2stg5_1, -10 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4.peek_1101();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_87_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_87 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4.peek_551();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_88_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_88 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[1 + 2stg5_1, -9 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_merged_banks_4.peek_551();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90;
  return 0;
}

inline hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_89_select(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_FIFO_buf104_stg5_1_merged401_89 read pattern: { stg5_1_merged401[root = 0, stg5_0, stg5_1] -> stg4_FIFO_buf104[2stg5_1, -8 + stg5_0] : 0 <= stg5_0 <= 1937 and 0 <= stg5_1 <= 548 }
  // Read schedule : { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
  auto value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91 = stg4_FIFO_buf104.stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_merged_banks_4.peek_1();
  return value_stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91;
  return 0;
}

// # of bundles = 2
// stg4_to_gp_1240_ld105_merged451_write
//	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90
//	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91
inline void stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_write_bundle_write(hw_uint<32>& stg4_to_gp_1240_ld105_merged451_write, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg4_to_gp_1240_ld106, int stg4_to_gp_1240_ld105, int dynamic_address) {
	hw_uint<16> stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_res = stg4_to_gp_1240_ld105_merged451_write.extract<0, 15>();
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_write(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_90_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
	hw_uint<16> stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_res = stg4_to_gp_1240_ld105_merged451_write.extract<16, 31>();
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_write(stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_91_res, stg4_FIFO_buf104, root, stg4_to_gp_1240_ld106, stg4_to_gp_1240_ld105, dynamic_address);
}

// stg5_1_merged401_read
//	stg4_FIFO_buf104_stg5_1_merged401_82
//	stg4_FIFO_buf104_stg5_1_merged401_83
//	stg4_FIFO_buf104_stg5_1_merged401_84
//	stg4_FIFO_buf104_stg5_1_merged401_85
//	stg4_FIFO_buf104_stg5_1_merged401_86
//	stg4_FIFO_buf104_stg5_1_merged401_87
//	stg4_FIFO_buf104_stg5_1_merged401_88
//	stg4_FIFO_buf104_stg5_1_merged401_89
inline hw_uint<128> stg4_FIFO_buf104_stg5_1_merged401_read_bundle_read(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int root, int stg5_0, int stg5_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg4_FIFO_buf104_stg5_1_merged401_82
    // stg4_FIFO_buf104_stg5_1_merged401_83
    // stg4_FIFO_buf104_stg5_1_merged401_84
    // stg4_FIFO_buf104_stg5_1_merged401_85
    // stg4_FIFO_buf104_stg5_1_merged401_86
    // stg4_FIFO_buf104_stg5_1_merged401_87
    // stg4_FIFO_buf104_stg5_1_merged401_88
    // stg4_FIFO_buf104_stg5_1_merged401_89

	hw_uint<128> result;
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_82_res = stg4_FIFO_buf104_stg5_1_merged401_82_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<0, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_82_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_83_res = stg4_FIFO_buf104_stg5_1_merged401_83_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<16, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_83_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_84_res = stg4_FIFO_buf104_stg5_1_merged401_84_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<32, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_84_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_85_res = stg4_FIFO_buf104_stg5_1_merged401_85_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<48, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_85_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_86_res = stg4_FIFO_buf104_stg5_1_merged401_86_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<64, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_86_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_87_res = stg4_FIFO_buf104_stg5_1_merged401_87_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<80, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_87_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_88_res = stg4_FIFO_buf104_stg5_1_merged401_88_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<96, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_88_res);
	hw_uint<16> stg4_FIFO_buf104_stg5_1_merged401_89_res = stg4_FIFO_buf104_stg5_1_merged401_89_select(stg4_FIFO_buf104, root, stg5_0, stg5_1, dynamic_address);
	set_at<112, 128>(result, stg4_FIFO_buf104_stg5_1_merged401_89_res);
	return result;
}

struct stg5_stg5_1_merged401_80_to_stg5_stg5_ld45_merged435_78_cache {
	// RAM Box: {[1, 1097], [-9, 1928]}
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

struct stg5_stg5_1_merged401_81_to_stg5_stg5_ld45_merged435_79_cache {
	// RAM Box: {[0, 1096], [-9, 1928]}
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
    // { stg5_ld45_merged435[root = 0, stg5_ld46, stg5_ld45] -> stg5[1 + 2stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 548 }
    // { stg5_ld45_merged435[root = 0, stg5_ld46, stg5_ld45] -> stg5[2stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 548 }
  // # of banks: 2
  stg5_stg5_1_merged401_80_to_stg5_stg5_ld45_merged435_78_cache stg5_stg5_1_merged401_80_to_stg5_stg5_ld45_merged435_78;
  stg5_stg5_1_merged401_81_to_stg5_stg5_ld45_merged435_79_cache stg5_stg5_1_merged401_81_to_stg5_stg5_ld45_merged435_79;
};



inline void stg5_stg5_1_merged401_80_write(hw_uint<16>& stg5_stg5_1_merged401_80, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_1_merged401_80_to_stg5_stg5_ld45_merged435_78.push(stg5_stg5_1_merged401_80);
}

inline void stg5_stg5_1_merged401_81_write(hw_uint<16>& stg5_stg5_1_merged401_81, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
  stg5.stg5_stg5_1_merged401_81_to_stg5_stg5_ld45_merged435_79.push(stg5_stg5_1_merged401_81);
}

inline hw_uint<16> stg5_stg5_ld45_merged435_78_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg5_ld45_merged435_78 read pattern: { stg5_ld45_merged435[root = 0, stg5_ld46, stg5_ld45] -> stg5[1 + 2stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 548 }
  // Read schedule : { stg5_ld45_merged435[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_stg5_1_merged401_80 = stg5.stg5_stg5_1_merged401_80_to_stg5_stg5_ld45_merged435_78.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_1_merged401_80;
  return 0;
}

inline hw_uint<16> stg5_stg5_ld45_merged435_79_select(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_stg5_ld45_merged435_79 read pattern: { stg5_ld45_merged435[root = 0, stg5_ld46, stg5_ld45] -> stg5[2stg5_ld45, -9 + stg5_ld46] : 0 <= stg5_ld46 <= 1937 and 0 <= stg5_ld45 <= 548 }
  // Read schedule : { stg5_ld45_merged435[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  // Write schedule: { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_stg5_1_merged401_81 = stg5.stg5_stg5_1_merged401_81_to_stg5_stg5_ld45_merged435_79.peek(/* one reader or all rams */ 0);
  return value_stg5_stg5_1_merged401_81;
  return 0;
}

// # of bundles = 2
// stg5_1_merged401_write
//	stg5_stg5_1_merged401_80
//	stg5_stg5_1_merged401_81
inline void stg5_stg5_1_merged401_write_bundle_write(hw_uint<32>& stg5_1_merged401_write, stg5_cache& stg5, int root, int stg5_0, int stg5_1, int dynamic_address) {
	hw_uint<16> stg5_stg5_1_merged401_80_res = stg5_1_merged401_write.extract<0, 15>();
	stg5_stg5_1_merged401_80_write(stg5_stg5_1_merged401_80_res, stg5, root, stg5_0, stg5_1, dynamic_address);
	hw_uint<16> stg5_stg5_1_merged401_81_res = stg5_1_merged401_write.extract<16, 31>();
	stg5_stg5_1_merged401_81_write(stg5_stg5_1_merged401_81_res, stg5, root, stg5_0, stg5_1, dynamic_address);
}

// stg5_ld45_merged435_read
//	stg5_stg5_ld45_merged435_78
//	stg5_stg5_ld45_merged435_79
inline hw_uint<32> stg5_stg5_ld45_merged435_read_bundle_read(stg5_cache& stg5, int root, int stg5_ld46, int stg5_ld45, int dynamic_address) {
  // # of ports in bundle: 2
    // stg5_stg5_ld45_merged435_78
    // stg5_stg5_ld45_merged435_79

	hw_uint<32> result;
	hw_uint<16> stg5_stg5_ld45_merged435_78_res = stg5_stg5_ld45_merged435_78_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<0, 32>(result, stg5_stg5_ld45_merged435_78_res);
	hw_uint<16> stg5_stg5_ld45_merged435_79_res = stg5_stg5_ld45_merged435_79_select(stg5, root, stg5_ld46, stg5_ld45, dynamic_address);
	set_at<16, 32>(result, stg5_stg5_ld45_merged435_79_res);
	return result;
}

struct stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4_cache {
	// RAM Box: {[1, 1095], [-9, 1928]}
	// Capacity: 1100
	// # of read delays: 4
  // 0, 1, 550, 1099
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 548> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 548> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_549() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_550() {
		return f4;
	}

	inline hw_uint<16> peek_1098() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1099() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 548
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 548 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 548
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 548 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4_cache {
	// RAM Box: {[0, 1096], [-9, 1927]}
	// Capacity: 1100
	// # of read delays: 5
  // 0, 1, 549, 550, 1099
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 547> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 548> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_549() {
		return f4;
	}

	inline hw_uint<16> peek_550() {
		return f6;
	}

	inline hw_uint<16> peek_1098() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1099() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 548
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 548 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 547
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 547 reading from capacity: 1
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
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
    // { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // # of banks: 2
  stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4_cache stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4;
  stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4_cache stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4;
};



inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_write(hw_uint<16>& stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4.push(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72);
}

inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_write(hw_uint<16>& stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
  stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4.push(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73);
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_64_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_64 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4.peek_1099();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_65_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_65 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4.peek_550();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_66_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_66 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2 + 2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4.peek_549();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_67_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_67 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_68_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_68 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2stg6_1, -9 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4.peek_1099();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_69_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_69 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4.peek_550();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_70_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_70 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[1 + 2stg6_1, -8 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_merged_banks_4.peek_550();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72;
  return 0;
}

inline hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_71_select(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_FIFO_buf108_stg6_1_merged404_71 read pattern: { stg6_1_merged404[root = 0, stg6_0, stg6_1] -> stg5_FIFO_buf108[2stg6_1, -7 + stg6_0] : 0 <= stg6_0 <= 1935 and 0 <= stg6_1 <= 547 }
  // Read schedule : { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
  auto value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73 = stg5_FIFO_buf108.stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_merged_banks_4.peek_1();
  return value_stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73;
  return 0;
}

// # of bundles = 2
// stg5_to_gp_1344_ld109_merged445_write
//	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72
//	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73
inline void stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_write_bundle_write(hw_uint<32>& stg5_to_gp_1344_ld109_merged445_write, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg5_to_gp_1344_ld110, int stg5_to_gp_1344_ld109, int dynamic_address) {
	hw_uint<16> stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_res = stg5_to_gp_1344_ld109_merged445_write.extract<0, 15>();
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_write(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_72_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
	hw_uint<16> stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_res = stg5_to_gp_1344_ld109_merged445_write.extract<16, 31>();
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_write(stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_73_res, stg5_FIFO_buf108, root, stg5_to_gp_1344_ld110, stg5_to_gp_1344_ld109, dynamic_address);
}

// stg6_1_merged404_read
//	stg5_FIFO_buf108_stg6_1_merged404_64
//	stg5_FIFO_buf108_stg6_1_merged404_65
//	stg5_FIFO_buf108_stg6_1_merged404_66
//	stg5_FIFO_buf108_stg6_1_merged404_67
//	stg5_FIFO_buf108_stg6_1_merged404_68
//	stg5_FIFO_buf108_stg6_1_merged404_69
//	stg5_FIFO_buf108_stg6_1_merged404_70
//	stg5_FIFO_buf108_stg6_1_merged404_71
inline hw_uint<128> stg5_FIFO_buf108_stg6_1_merged404_read_bundle_read(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int root, int stg6_0, int stg6_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg5_FIFO_buf108_stg6_1_merged404_64
    // stg5_FIFO_buf108_stg6_1_merged404_65
    // stg5_FIFO_buf108_stg6_1_merged404_66
    // stg5_FIFO_buf108_stg6_1_merged404_67
    // stg5_FIFO_buf108_stg6_1_merged404_68
    // stg5_FIFO_buf108_stg6_1_merged404_69
    // stg5_FIFO_buf108_stg6_1_merged404_70
    // stg5_FIFO_buf108_stg6_1_merged404_71

	hw_uint<128> result;
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_64_res = stg5_FIFO_buf108_stg6_1_merged404_64_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<0, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_64_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_65_res = stg5_FIFO_buf108_stg6_1_merged404_65_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<16, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_65_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_66_res = stg5_FIFO_buf108_stg6_1_merged404_66_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<32, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_66_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_67_res = stg5_FIFO_buf108_stg6_1_merged404_67_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<48, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_67_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_68_res = stg5_FIFO_buf108_stg6_1_merged404_68_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<64, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_68_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_69_res = stg5_FIFO_buf108_stg6_1_merged404_69_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<80, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_69_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_70_res = stg5_FIFO_buf108_stg6_1_merged404_70_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<96, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_70_res);
	hw_uint<16> stg5_FIFO_buf108_stg6_1_merged404_71_res = stg5_FIFO_buf108_stg6_1_merged404_71_select(stg5_FIFO_buf108, root, stg6_0, stg6_1, dynamic_address);
	set_at<112, 128>(result, stg5_FIFO_buf108_stg6_1_merged404_71_res);
	return result;
}

struct stg6_stg6_1_merged404_62_to_stg6_stg6_ld49_merged439_60_cache {
	// RAM Box: {[1, 1095], [-8, 1927]}
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

struct stg6_stg6_1_merged404_63_to_stg6_stg6_ld49_merged439_61_cache {
	// RAM Box: {[0, 1094], [-8, 1927]}
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
    // { stg6_ld49_merged439[root = 0, stg6_ld50, stg6_ld49] -> stg6[1 + 2stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 547 }
    // { stg6_ld49_merged439[root = 0, stg6_ld50, stg6_ld49] -> stg6[2stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 547 }
  // # of banks: 2
  stg6_stg6_1_merged404_62_to_stg6_stg6_ld49_merged439_60_cache stg6_stg6_1_merged404_62_to_stg6_stg6_ld49_merged439_60;
  stg6_stg6_1_merged404_63_to_stg6_stg6_ld49_merged439_61_cache stg6_stg6_1_merged404_63_to_stg6_stg6_ld49_merged439_61;
};



inline void stg6_stg6_1_merged404_62_write(hw_uint<16>& stg6_stg6_1_merged404_62, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_1_merged404_62_to_stg6_stg6_ld49_merged439_60.push(stg6_stg6_1_merged404_62);
}

inline void stg6_stg6_1_merged404_63_write(hw_uint<16>& stg6_stg6_1_merged404_63, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
  stg6.stg6_stg6_1_merged404_63_to_stg6_stg6_ld49_merged439_61.push(stg6_stg6_1_merged404_63);
}

inline hw_uint<16> stg6_stg6_ld49_merged439_60_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg6_ld49_merged439_60 read pattern: { stg6_ld49_merged439[root = 0, stg6_ld50, stg6_ld49] -> stg6[1 + 2stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 547 }
  // Read schedule : { stg6_ld49_merged439[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_stg6_1_merged404_62 = stg6.stg6_stg6_1_merged404_62_to_stg6_stg6_ld49_merged439_60.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_1_merged404_62;
  return 0;
}

inline hw_uint<16> stg6_stg6_ld49_merged439_61_select(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_stg6_ld49_merged439_61 read pattern: { stg6_ld49_merged439[root = 0, stg6_ld50, stg6_ld49] -> stg6[2stg6_ld49, -8 + stg6_ld50] : 0 <= stg6_ld50 <= 1935 and 0 <= stg6_ld49 <= 547 }
  // Read schedule : { stg6_ld49_merged439[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  // Write schedule: { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_stg6_1_merged404_63 = stg6.stg6_stg6_1_merged404_63_to_stg6_stg6_ld49_merged439_61.peek(/* one reader or all rams */ 0);
  return value_stg6_stg6_1_merged404_63;
  return 0;
}

// # of bundles = 2
// stg6_1_merged404_write
//	stg6_stg6_1_merged404_62
//	stg6_stg6_1_merged404_63
inline void stg6_stg6_1_merged404_write_bundle_write(hw_uint<32>& stg6_1_merged404_write, stg6_cache& stg6, int root, int stg6_0, int stg6_1, int dynamic_address) {
	hw_uint<16> stg6_stg6_1_merged404_62_res = stg6_1_merged404_write.extract<0, 15>();
	stg6_stg6_1_merged404_62_write(stg6_stg6_1_merged404_62_res, stg6, root, stg6_0, stg6_1, dynamic_address);
	hw_uint<16> stg6_stg6_1_merged404_63_res = stg6_1_merged404_write.extract<16, 31>();
	stg6_stg6_1_merged404_63_write(stg6_stg6_1_merged404_63_res, stg6, root, stg6_0, stg6_1, dynamic_address);
}

// stg6_ld49_merged439_read
//	stg6_stg6_ld49_merged439_60
//	stg6_stg6_ld49_merged439_61
inline hw_uint<32> stg6_stg6_ld49_merged439_read_bundle_read(stg6_cache& stg6, int root, int stg6_ld50, int stg6_ld49, int dynamic_address) {
  // # of ports in bundle: 2
    // stg6_stg6_ld49_merged439_60
    // stg6_stg6_ld49_merged439_61

	hw_uint<32> result;
	hw_uint<16> stg6_stg6_ld49_merged439_60_res = stg6_stg6_ld49_merged439_60_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<0, 32>(result, stg6_stg6_ld49_merged439_60_res);
	hw_uint<16> stg6_stg6_ld49_merged439_61_res = stg6_stg6_ld49_merged439_61_select(stg6, root, stg6_ld50, stg6_ld49, dynamic_address);
	set_at<16, 32>(result, stg6_stg6_ld49_merged439_61_res);
	return result;
}

struct stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4_cache {
	// RAM Box: {[1, 1093], [-8, 1927]}
	// Capacity: 1098
	// # of read delays: 4
  // 0, 1, 549, 1097
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 547> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 547> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_548() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_549() {
		return f4;
	}

	inline hw_uint<16> peek_1096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1097() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 547
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 547 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 547
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 547 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4_cache {
	// RAM Box: {[0, 1094], [-8, 1926]}
	// Capacity: 1098
	// # of read delays: 5
  // 0, 1, 548, 549, 1097
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 546> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 547> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_547() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_548() {
		return f4;
	}

	inline hw_uint<16> peek_549() {
		return f6;
	}

	inline hw_uint<16> peek_1096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1097() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 547
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 547 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 546
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 546 reading from capacity: 1
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
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
    // { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // # of banks: 2
  stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4_cache stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4;
  stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4_cache stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4;
};



inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_write(hw_uint<16>& stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4.push(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54);
}

inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_write(hw_uint<16>& stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
  stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4.push(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55);
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_46_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_46 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4.peek_1097();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_47_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_47 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4.peek_549();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_48_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_48 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2 + 2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4.peek_548();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_49_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_49 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_50_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_50 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2stg7_1, -8 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4.peek_1097();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_51_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_51 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4.peek_549();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_52_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_52 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[1 + 2stg7_1, -7 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_merged_banks_4.peek_549();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54;
  return 0;
}

inline hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_53_select(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_FIFO_buf112_stg7_1_merged407_53 read pattern: { stg7_1_merged407[root = 0, stg7_0, stg7_1] -> stg6_FIFO_buf112[2stg7_1, -6 + stg7_0] : 0 <= stg7_0 <= 1933 and 0 <= stg7_1 <= 546 }
  // Read schedule : { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
  auto value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55 = stg6_FIFO_buf112.stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_merged_banks_4.peek_1();
  return value_stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55;
  return 0;
}

// # of bundles = 2
// stg6_to_gp_1448_ld113_merged447_write
//	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54
//	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55
inline void stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_write_bundle_write(hw_uint<32>& stg6_to_gp_1448_ld113_merged447_write, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg6_to_gp_1448_ld114, int stg6_to_gp_1448_ld113, int dynamic_address) {
	hw_uint<16> stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_res = stg6_to_gp_1448_ld113_merged447_write.extract<0, 15>();
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_write(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_54_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
	hw_uint<16> stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_res = stg6_to_gp_1448_ld113_merged447_write.extract<16, 31>();
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_write(stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_55_res, stg6_FIFO_buf112, root, stg6_to_gp_1448_ld114, stg6_to_gp_1448_ld113, dynamic_address);
}

// stg7_1_merged407_read
//	stg6_FIFO_buf112_stg7_1_merged407_46
//	stg6_FIFO_buf112_stg7_1_merged407_47
//	stg6_FIFO_buf112_stg7_1_merged407_48
//	stg6_FIFO_buf112_stg7_1_merged407_49
//	stg6_FIFO_buf112_stg7_1_merged407_50
//	stg6_FIFO_buf112_stg7_1_merged407_51
//	stg6_FIFO_buf112_stg7_1_merged407_52
//	stg6_FIFO_buf112_stg7_1_merged407_53
inline hw_uint<128> stg6_FIFO_buf112_stg7_1_merged407_read_bundle_read(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int root, int stg7_0, int stg7_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg6_FIFO_buf112_stg7_1_merged407_46
    // stg6_FIFO_buf112_stg7_1_merged407_47
    // stg6_FIFO_buf112_stg7_1_merged407_48
    // stg6_FIFO_buf112_stg7_1_merged407_49
    // stg6_FIFO_buf112_stg7_1_merged407_50
    // stg6_FIFO_buf112_stg7_1_merged407_51
    // stg6_FIFO_buf112_stg7_1_merged407_52
    // stg6_FIFO_buf112_stg7_1_merged407_53

	hw_uint<128> result;
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_46_res = stg6_FIFO_buf112_stg7_1_merged407_46_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<0, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_46_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_47_res = stg6_FIFO_buf112_stg7_1_merged407_47_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<16, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_47_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_48_res = stg6_FIFO_buf112_stg7_1_merged407_48_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<32, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_48_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_49_res = stg6_FIFO_buf112_stg7_1_merged407_49_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<48, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_49_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_50_res = stg6_FIFO_buf112_stg7_1_merged407_50_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<64, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_50_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_51_res = stg6_FIFO_buf112_stg7_1_merged407_51_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<80, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_51_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_52_res = stg6_FIFO_buf112_stg7_1_merged407_52_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<96, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_52_res);
	hw_uint<16> stg6_FIFO_buf112_stg7_1_merged407_53_res = stg6_FIFO_buf112_stg7_1_merged407_53_select(stg6_FIFO_buf112, root, stg7_0, stg7_1, dynamic_address);
	set_at<112, 128>(result, stg6_FIFO_buf112_stg7_1_merged407_53_res);
	return result;
}

struct stg7_stg7_1_merged407_44_to_stg7_stg7_ld53_merged461_42_cache {
	// RAM Box: {[1, 1093], [-7, 1926]}
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

struct stg7_stg7_1_merged407_45_to_stg7_stg7_ld53_merged461_43_cache {
	// RAM Box: {[0, 1092], [-7, 1926]}
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
    // { stg7_ld53_merged461[root = 0, stg7_ld54, stg7_ld53] -> stg7[1 + 2stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 546 }
    // { stg7_ld53_merged461[root = 0, stg7_ld54, stg7_ld53] -> stg7[2stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 546 }
  // # of banks: 2
  stg7_stg7_1_merged407_44_to_stg7_stg7_ld53_merged461_42_cache stg7_stg7_1_merged407_44_to_stg7_stg7_ld53_merged461_42;
  stg7_stg7_1_merged407_45_to_stg7_stg7_ld53_merged461_43_cache stg7_stg7_1_merged407_45_to_stg7_stg7_ld53_merged461_43;
};



inline void stg7_stg7_1_merged407_44_write(hw_uint<16>& stg7_stg7_1_merged407_44, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_1_merged407_44_to_stg7_stg7_ld53_merged461_42.push(stg7_stg7_1_merged407_44);
}

inline void stg7_stg7_1_merged407_45_write(hw_uint<16>& stg7_stg7_1_merged407_45, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
  stg7.stg7_stg7_1_merged407_45_to_stg7_stg7_ld53_merged461_43.push(stg7_stg7_1_merged407_45);
}

inline hw_uint<16> stg7_stg7_ld53_merged461_42_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg7_ld53_merged461_42 read pattern: { stg7_ld53_merged461[root = 0, stg7_ld54, stg7_ld53] -> stg7[1 + 2stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 546 }
  // Read schedule : { stg7_ld53_merged461[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_stg7_1_merged407_44 = stg7.stg7_stg7_1_merged407_44_to_stg7_stg7_ld53_merged461_42.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_1_merged407_44;
  return 0;
}

inline hw_uint<16> stg7_stg7_ld53_merged461_43_select(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_stg7_ld53_merged461_43 read pattern: { stg7_ld53_merged461[root = 0, stg7_ld54, stg7_ld53] -> stg7[2stg7_ld53, -7 + stg7_ld54] : 0 <= stg7_ld54 <= 1933 and 0 <= stg7_ld53 <= 546 }
  // Read schedule : { stg7_ld53_merged461[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  // Write schedule: { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_stg7_1_merged407_45 = stg7.stg7_stg7_1_merged407_45_to_stg7_stg7_ld53_merged461_43.peek(/* one reader or all rams */ 0);
  return value_stg7_stg7_1_merged407_45;
  return 0;
}

// # of bundles = 2
// stg7_1_merged407_write
//	stg7_stg7_1_merged407_44
//	stg7_stg7_1_merged407_45
inline void stg7_stg7_1_merged407_write_bundle_write(hw_uint<32>& stg7_1_merged407_write, stg7_cache& stg7, int root, int stg7_0, int stg7_1, int dynamic_address) {
	hw_uint<16> stg7_stg7_1_merged407_44_res = stg7_1_merged407_write.extract<0, 15>();
	stg7_stg7_1_merged407_44_write(stg7_stg7_1_merged407_44_res, stg7, root, stg7_0, stg7_1, dynamic_address);
	hw_uint<16> stg7_stg7_1_merged407_45_res = stg7_1_merged407_write.extract<16, 31>();
	stg7_stg7_1_merged407_45_write(stg7_stg7_1_merged407_45_res, stg7, root, stg7_0, stg7_1, dynamic_address);
}

// stg7_ld53_merged461_read
//	stg7_stg7_ld53_merged461_42
//	stg7_stg7_ld53_merged461_43
inline hw_uint<32> stg7_stg7_ld53_merged461_read_bundle_read(stg7_cache& stg7, int root, int stg7_ld54, int stg7_ld53, int dynamic_address) {
  // # of ports in bundle: 2
    // stg7_stg7_ld53_merged461_42
    // stg7_stg7_ld53_merged461_43

	hw_uint<32> result;
	hw_uint<16> stg7_stg7_ld53_merged461_42_res = stg7_stg7_ld53_merged461_42_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<0, 32>(result, stg7_stg7_ld53_merged461_42_res);
	hw_uint<16> stg7_stg7_ld53_merged461_43_res = stg7_stg7_ld53_merged461_43_select(stg7, root, stg7_ld54, stg7_ld53, dynamic_address);
	set_at<16, 32>(result, stg7_stg7_ld53_merged461_43_res);
	return result;
}

struct stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4_cache {
	// RAM Box: {[1, 1091], [-7, 1926]}
	// Capacity: 1096
	// # of read delays: 4
  // 0, 1, 548, 1095
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 546> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 546> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_547() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_548() {
		return f4;
	}

	inline hw_uint<16> peek_1094() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1095() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 546
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 546 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 546
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 546 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4_cache {
	// RAM Box: {[0, 1092], [-7, 1925]}
	// Capacity: 1096
	// # of read delays: 5
  // 0, 1, 547, 548, 1095
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 545> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 546> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_546() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_547() {
		return f4;
	}

	inline hw_uint<16> peek_548() {
		return f6;
	}

	inline hw_uint<16> peek_1094() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1095() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 546
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 546 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 545
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 545 reading from capacity: 1
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
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
    // { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // # of banks: 2
  stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4_cache stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4;
  stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4_cache stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4;
};



inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_write(hw_uint<16>& stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4.push(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36);
}

inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_write(hw_uint<16>& stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
  stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4.push(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37);
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_28_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_28 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4.peek_1095();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_29_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_29 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4.peek_548();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_30_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_30 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2 + 2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4.peek_547();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_31_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_31 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_32_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_32 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2stg8_1, -7 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4.peek_1095();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_33_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_33 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4.peek_548();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_34_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_34 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[1 + 2stg8_1, -6 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_merged_banks_4.peek_548();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36;
  return 0;
}

inline hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_35_select(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_FIFO_buf116_stg8_1_merged410_35 read pattern: { stg8_1_merged410[root = 0, stg8_0, stg8_1] -> stg7_FIFO_buf116[2stg8_1, -5 + stg8_0] : 0 <= stg8_0 <= 1931 and 0 <= stg8_1 <= 545 }
  // Read schedule : { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
  auto value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37 = stg7_FIFO_buf116.stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_merged_banks_4.peek_1();
  return value_stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37;
  return 0;
}

// # of bundles = 2
// stg7_to_gp_1552_ld117_merged485_write
//	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36
//	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37
inline void stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_write_bundle_write(hw_uint<32>& stg7_to_gp_1552_ld117_merged485_write, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg7_to_gp_1552_ld118, int stg7_to_gp_1552_ld117, int dynamic_address) {
	hw_uint<16> stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_res = stg7_to_gp_1552_ld117_merged485_write.extract<0, 15>();
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_write(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_36_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
	hw_uint<16> stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_res = stg7_to_gp_1552_ld117_merged485_write.extract<16, 31>();
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_write(stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_37_res, stg7_FIFO_buf116, root, stg7_to_gp_1552_ld118, stg7_to_gp_1552_ld117, dynamic_address);
}

// stg8_1_merged410_read
//	stg7_FIFO_buf116_stg8_1_merged410_28
//	stg7_FIFO_buf116_stg8_1_merged410_29
//	stg7_FIFO_buf116_stg8_1_merged410_30
//	stg7_FIFO_buf116_stg8_1_merged410_31
//	stg7_FIFO_buf116_stg8_1_merged410_32
//	stg7_FIFO_buf116_stg8_1_merged410_33
//	stg7_FIFO_buf116_stg8_1_merged410_34
//	stg7_FIFO_buf116_stg8_1_merged410_35
inline hw_uint<128> stg7_FIFO_buf116_stg8_1_merged410_read_bundle_read(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int root, int stg8_0, int stg8_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg7_FIFO_buf116_stg8_1_merged410_28
    // stg7_FIFO_buf116_stg8_1_merged410_29
    // stg7_FIFO_buf116_stg8_1_merged410_30
    // stg7_FIFO_buf116_stg8_1_merged410_31
    // stg7_FIFO_buf116_stg8_1_merged410_32
    // stg7_FIFO_buf116_stg8_1_merged410_33
    // stg7_FIFO_buf116_stg8_1_merged410_34
    // stg7_FIFO_buf116_stg8_1_merged410_35

	hw_uint<128> result;
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_28_res = stg7_FIFO_buf116_stg8_1_merged410_28_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<0, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_28_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_29_res = stg7_FIFO_buf116_stg8_1_merged410_29_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<16, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_29_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_30_res = stg7_FIFO_buf116_stg8_1_merged410_30_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<32, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_30_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_31_res = stg7_FIFO_buf116_stg8_1_merged410_31_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<48, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_31_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_32_res = stg7_FIFO_buf116_stg8_1_merged410_32_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<64, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_32_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_33_res = stg7_FIFO_buf116_stg8_1_merged410_33_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<80, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_33_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_34_res = stg7_FIFO_buf116_stg8_1_merged410_34_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<96, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_34_res);
	hw_uint<16> stg7_FIFO_buf116_stg8_1_merged410_35_res = stg7_FIFO_buf116_stg8_1_merged410_35_select(stg7_FIFO_buf116, root, stg8_0, stg8_1, dynamic_address);
	set_at<112, 128>(result, stg7_FIFO_buf116_stg8_1_merged410_35_res);
	return result;
}

struct stg8_stg8_1_merged410_26_to_stg8_stg8_ld57_merged463_24_cache {
	// RAM Box: {[1, 1091], [-6, 1925]}
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

struct stg8_stg8_1_merged410_27_to_stg8_stg8_ld57_merged463_25_cache {
	// RAM Box: {[0, 1090], [-6, 1925]}
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
    // { stg8_ld57_merged463[root = 0, stg8_ld58, stg8_ld57] -> stg8[1 + 2stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 545 }
    // { stg8_ld57_merged463[root = 0, stg8_ld58, stg8_ld57] -> stg8[2stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 545 }
  // # of banks: 2
  stg8_stg8_1_merged410_26_to_stg8_stg8_ld57_merged463_24_cache stg8_stg8_1_merged410_26_to_stg8_stg8_ld57_merged463_24;
  stg8_stg8_1_merged410_27_to_stg8_stg8_ld57_merged463_25_cache stg8_stg8_1_merged410_27_to_stg8_stg8_ld57_merged463_25;
};



inline void stg8_stg8_1_merged410_26_write(hw_uint<16>& stg8_stg8_1_merged410_26, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_1_merged410_26_to_stg8_stg8_ld57_merged463_24.push(stg8_stg8_1_merged410_26);
}

inline void stg8_stg8_1_merged410_27_write(hw_uint<16>& stg8_stg8_1_merged410_27, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
  stg8.stg8_stg8_1_merged410_27_to_stg8_stg8_ld57_merged463_25.push(stg8_stg8_1_merged410_27);
}

inline hw_uint<16> stg8_stg8_ld57_merged463_24_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg8_ld57_merged463_24 read pattern: { stg8_ld57_merged463[root = 0, stg8_ld58, stg8_ld57] -> stg8[1 + 2stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 545 }
  // Read schedule : { stg8_ld57_merged463[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_stg8_1_merged410_26 = stg8.stg8_stg8_1_merged410_26_to_stg8_stg8_ld57_merged463_24.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_1_merged410_26;
  return 0;
}

inline hw_uint<16> stg8_stg8_ld57_merged463_25_select(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_stg8_ld57_merged463_25 read pattern: { stg8_ld57_merged463[root = 0, stg8_ld58, stg8_ld57] -> stg8[2stg8_ld57, -6 + stg8_ld58] : 0 <= stg8_ld58 <= 1931 and 0 <= stg8_ld57 <= 545 }
  // Read schedule : { stg8_ld57_merged463[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  // Write schedule: { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_stg8_1_merged410_27 = stg8.stg8_stg8_1_merged410_27_to_stg8_stg8_ld57_merged463_25.peek(/* one reader or all rams */ 0);
  return value_stg8_stg8_1_merged410_27;
  return 0;
}

// # of bundles = 2
// stg8_1_merged410_write
//	stg8_stg8_1_merged410_26
//	stg8_stg8_1_merged410_27
inline void stg8_stg8_1_merged410_write_bundle_write(hw_uint<32>& stg8_1_merged410_write, stg8_cache& stg8, int root, int stg8_0, int stg8_1, int dynamic_address) {
	hw_uint<16> stg8_stg8_1_merged410_26_res = stg8_1_merged410_write.extract<0, 15>();
	stg8_stg8_1_merged410_26_write(stg8_stg8_1_merged410_26_res, stg8, root, stg8_0, stg8_1, dynamic_address);
	hw_uint<16> stg8_stg8_1_merged410_27_res = stg8_1_merged410_write.extract<16, 31>();
	stg8_stg8_1_merged410_27_write(stg8_stg8_1_merged410_27_res, stg8, root, stg8_0, stg8_1, dynamic_address);
}

// stg8_ld57_merged463_read
//	stg8_stg8_ld57_merged463_24
//	stg8_stg8_ld57_merged463_25
inline hw_uint<32> stg8_stg8_ld57_merged463_read_bundle_read(stg8_cache& stg8, int root, int stg8_ld58, int stg8_ld57, int dynamic_address) {
  // # of ports in bundle: 2
    // stg8_stg8_ld57_merged463_24
    // stg8_stg8_ld57_merged463_25

	hw_uint<32> result;
	hw_uint<16> stg8_stg8_ld57_merged463_24_res = stg8_stg8_ld57_merged463_24_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<0, 32>(result, stg8_stg8_ld57_merged463_24_res);
	hw_uint<16> stg8_stg8_ld57_merged463_25_res = stg8_stg8_ld57_merged463_25_select(stg8, root, stg8_ld58, stg8_ld57, dynamic_address);
	set_at<16, 32>(result, stg8_stg8_ld57_merged463_25_res);
	return result;
}

struct stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4_cache {
	// RAM Box: {[1, 1089], [-6, 1925]}
	// Capacity: 1094
	// # of read delays: 4
  // 0, 1, 547, 1093
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 545> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 545> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_546() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_547() {
		return f4;
	}

	inline hw_uint<16> peek_1092() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1093() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 545
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 545 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 545
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 545 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4_cache {
	// RAM Box: {[0, 1090], [-6, 1924]}
	// Capacity: 1094
	// # of read delays: 5
  // 0, 1, 546, 547, 1093
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 544> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 545> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_545() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_546() {
		return f4;
	}

	inline hw_uint<16> peek_547() {
		return f6;
	}

	inline hw_uint<16> peek_1092() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1093() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 545
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 545 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 544
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 544 reading from capacity: 1
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
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
    // { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // # of banks: 2
  stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4_cache stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4;
  stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4_cache stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4;
};



inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_write(hw_uint<16>& stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4.push(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18);
}

inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_write(hw_uint<16>& stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
  stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4.push(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19);
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_10_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_10 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4.peek_1093();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_11_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_11 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4.peek_547();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_12_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_12 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2 + 2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4.peek_546();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_13_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_13 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_14_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_14 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2stg9_1, -6 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4.peek_1093();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_15_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_15 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4.peek_547();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_16_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_16 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[1 + 2stg9_1, -5 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_merged_banks_4.peek_547();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18;
  return 0;
}

inline hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_17_select(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_FIFO_buf120_stg9_1_merged413_17 read pattern: { stg9_1_merged413[root = 0, stg9_0, stg9_1] -> stg8_FIFO_buf120[2stg9_1, -4 + stg9_0] : 0 <= stg9_0 <= 1929 and 0 <= stg9_1 <= 544 }
  // Read schedule : { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
  auto value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19 = stg8_FIFO_buf120.stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_merged_banks_4.peek_1();
  return value_stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19;
  return 0;
}

// # of bundles = 2
// stg8_to_gp_1656_ld121_merged443_write
//	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18
//	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19
inline void stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_write_bundle_write(hw_uint<32>& stg8_to_gp_1656_ld121_merged443_write, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg8_to_gp_1656_ld122, int stg8_to_gp_1656_ld121, int dynamic_address) {
	hw_uint<16> stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_res = stg8_to_gp_1656_ld121_merged443_write.extract<0, 15>();
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_write(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_18_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
	hw_uint<16> stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_res = stg8_to_gp_1656_ld121_merged443_write.extract<16, 31>();
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_write(stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_19_res, stg8_FIFO_buf120, root, stg8_to_gp_1656_ld122, stg8_to_gp_1656_ld121, dynamic_address);
}

// stg9_1_merged413_read
//	stg8_FIFO_buf120_stg9_1_merged413_10
//	stg8_FIFO_buf120_stg9_1_merged413_11
//	stg8_FIFO_buf120_stg9_1_merged413_12
//	stg8_FIFO_buf120_stg9_1_merged413_13
//	stg8_FIFO_buf120_stg9_1_merged413_14
//	stg8_FIFO_buf120_stg9_1_merged413_15
//	stg8_FIFO_buf120_stg9_1_merged413_16
//	stg8_FIFO_buf120_stg9_1_merged413_17
inline hw_uint<128> stg8_FIFO_buf120_stg9_1_merged413_read_bundle_read(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int root, int stg9_0, int stg9_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg8_FIFO_buf120_stg9_1_merged413_10
    // stg8_FIFO_buf120_stg9_1_merged413_11
    // stg8_FIFO_buf120_stg9_1_merged413_12
    // stg8_FIFO_buf120_stg9_1_merged413_13
    // stg8_FIFO_buf120_stg9_1_merged413_14
    // stg8_FIFO_buf120_stg9_1_merged413_15
    // stg8_FIFO_buf120_stg9_1_merged413_16
    // stg8_FIFO_buf120_stg9_1_merged413_17

	hw_uint<128> result;
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_10_res = stg8_FIFO_buf120_stg9_1_merged413_10_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<0, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_10_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_11_res = stg8_FIFO_buf120_stg9_1_merged413_11_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<16, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_11_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_12_res = stg8_FIFO_buf120_stg9_1_merged413_12_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<32, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_12_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_13_res = stg8_FIFO_buf120_stg9_1_merged413_13_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<48, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_13_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_14_res = stg8_FIFO_buf120_stg9_1_merged413_14_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<64, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_14_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_15_res = stg8_FIFO_buf120_stg9_1_merged413_15_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<80, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_15_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_16_res = stg8_FIFO_buf120_stg9_1_merged413_16_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<96, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_16_res);
	hw_uint<16> stg8_FIFO_buf120_stg9_1_merged413_17_res = stg8_FIFO_buf120_stg9_1_merged413_17_select(stg8_FIFO_buf120, root, stg9_0, stg9_1, dynamic_address);
	set_at<112, 128>(result, stg8_FIFO_buf120_stg9_1_merged413_17_res);
	return result;
}

struct stg9_stg9_1_merged413_8_to_stg9_stg9_ld61_merged465_6_cache {
	// RAM Box: {[1, 1089], [-5, 1924]}
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

struct stg9_stg9_1_merged413_9_to_stg9_stg9_ld61_merged465_7_cache {
	// RAM Box: {[0, 1088], [-5, 1924]}
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
    // { stg9_ld61_merged465[root = 0, stg9_ld62, stg9_ld61] -> stg9[1 + 2stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 544 }
    // { stg9_ld61_merged465[root = 0, stg9_ld62, stg9_ld61] -> stg9[2stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 544 }
  // # of banks: 2
  stg9_stg9_1_merged413_8_to_stg9_stg9_ld61_merged465_6_cache stg9_stg9_1_merged413_8_to_stg9_stg9_ld61_merged465_6;
  stg9_stg9_1_merged413_9_to_stg9_stg9_ld61_merged465_7_cache stg9_stg9_1_merged413_9_to_stg9_stg9_ld61_merged465_7;
};



inline void stg9_stg9_1_merged413_8_write(hw_uint<16>& stg9_stg9_1_merged413_8, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_1_merged413_8_to_stg9_stg9_ld61_merged465_6.push(stg9_stg9_1_merged413_8);
}

inline void stg9_stg9_1_merged413_9_write(hw_uint<16>& stg9_stg9_1_merged413_9, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
  stg9.stg9_stg9_1_merged413_9_to_stg9_stg9_ld61_merged465_7.push(stg9_stg9_1_merged413_9);
}

inline hw_uint<16> stg9_stg9_ld61_merged465_6_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg9_ld61_merged465_6 read pattern: { stg9_ld61_merged465[root = 0, stg9_ld62, stg9_ld61] -> stg9[1 + 2stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 544 }
  // Read schedule : { stg9_ld61_merged465[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_stg9_1_merged413_8 = stg9.stg9_stg9_1_merged413_8_to_stg9_stg9_ld61_merged465_6.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_1_merged413_8;
  return 0;
}

inline hw_uint<16> stg9_stg9_ld61_merged465_7_select(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_stg9_ld61_merged465_7 read pattern: { stg9_ld61_merged465[root = 0, stg9_ld62, stg9_ld61] -> stg9[2stg9_ld61, -5 + stg9_ld62] : 0 <= stg9_ld62 <= 1929 and 0 <= stg9_ld61 <= 544 }
  // Read schedule : { stg9_ld61_merged465[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  // Write schedule: { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_stg9_1_merged413_9 = stg9.stg9_stg9_1_merged413_9_to_stg9_stg9_ld61_merged465_7.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_1_merged413_9;
  return 0;
}

// # of bundles = 2
// stg9_1_merged413_write
//	stg9_stg9_1_merged413_8
//	stg9_stg9_1_merged413_9
inline void stg9_stg9_1_merged413_write_bundle_write(hw_uint<32>& stg9_1_merged413_write, stg9_cache& stg9, int root, int stg9_0, int stg9_1, int dynamic_address) {
	hw_uint<16> stg9_stg9_1_merged413_8_res = stg9_1_merged413_write.extract<0, 15>();
	stg9_stg9_1_merged413_8_write(stg9_stg9_1_merged413_8_res, stg9, root, stg9_0, stg9_1, dynamic_address);
	hw_uint<16> stg9_stg9_1_merged413_9_res = stg9_1_merged413_write.extract<16, 31>();
	stg9_stg9_1_merged413_9_write(stg9_stg9_1_merged413_9_res, stg9, root, stg9_0, stg9_1, dynamic_address);
}

// stg9_ld61_merged465_read
//	stg9_stg9_ld61_merged465_6
//	stg9_stg9_ld61_merged465_7
inline hw_uint<32> stg9_stg9_ld61_merged465_read_bundle_read(stg9_cache& stg9, int root, int stg9_ld62, int stg9_ld61, int dynamic_address) {
  // # of ports in bundle: 2
    // stg9_stg9_ld61_merged465_6
    // stg9_stg9_ld61_merged465_7

	hw_uint<32> result;
	hw_uint<16> stg9_stg9_ld61_merged465_6_res = stg9_stg9_ld61_merged465_6_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<0, 32>(result, stg9_stg9_ld61_merged465_6_res);
	hw_uint<16> stg9_stg9_ld61_merged465_7_res = stg9_stg9_ld61_merged465_7_select(stg9, root, stg9_ld62, stg9_ld61, dynamic_address);
	set_at<16, 32>(result, stg9_stg9_ld61_merged465_7_res);
	return result;
}

struct stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4_cache {
	// RAM Box: {[1, 1087], [-5, 1924]}
	// Capacity: 1092
	// # of read delays: 4
  // 0, 1, 546, 1091
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 544> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 544> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_545() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_546() {
		return f4;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_1091() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 544
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 544 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 544
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 544 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4_cache {
	// RAM Box: {[0, 1088], [-5, 1923]}
	// Capacity: 1092
	// # of read delays: 5
  // 0, 1, 545, 546, 1091
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 543> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 544> f7;
	hw_uint<16> f8;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_544() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_545() {
		return f4;
	}

	inline hw_uint<16> peek_546() {
		return f6;
	}

	inline hw_uint<16> peek_1090() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1091() {
		return f8;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 544
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 544 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 543
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 543 reading from capacity: 1
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
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
    // { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // # of banks: 2
  stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4_cache stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4;
  stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4_cache stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4;
};



inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_write(hw_uint<16>& stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4.push(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0);
}

inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_write(hw_uint<16>& stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
  stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4.push(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1);
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_244_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_244 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4.peek_1091();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_245_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_245 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4.peek_546();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_246_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_246 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2 + 2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4.peek_545();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_247_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_247 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_248_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_248 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2stg10_1, -5 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4.peek_1091();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_249_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_249 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4.peek_546();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_250_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_250 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[1 + 2stg10_1, -4 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_merged_banks_4.peek_546();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0;
  return 0;
}

inline hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_251_select(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_FIFO_buf124_stg10_1_merged416_251 read pattern: { stg10_1_merged416[root = 0, stg10_0, stg10_1] -> stg9_FIFO_buf124[2stg10_1, -3 + stg10_0] : 0 <= stg10_0 <= 1927 and 0 <= stg10_1 <= 543 }
  // Read schedule : { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
  // Write schedule: { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
  auto value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1 = stg9_FIFO_buf124.stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_merged_banks_4.peek_1();
  return value_stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1;
  return 0;
}

// # of bundles = 2
// stg10_1_merged416_read
//	stg9_FIFO_buf124_stg10_1_merged416_244
//	stg9_FIFO_buf124_stg10_1_merged416_245
//	stg9_FIFO_buf124_stg10_1_merged416_246
//	stg9_FIFO_buf124_stg10_1_merged416_247
//	stg9_FIFO_buf124_stg10_1_merged416_248
//	stg9_FIFO_buf124_stg10_1_merged416_249
//	stg9_FIFO_buf124_stg10_1_merged416_250
//	stg9_FIFO_buf124_stg10_1_merged416_251
inline hw_uint<128> stg9_FIFO_buf124_stg10_1_merged416_read_bundle_read(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg10_0, int stg10_1, int dynamic_address) {
  // # of ports in bundle: 8
    // stg9_FIFO_buf124_stg10_1_merged416_244
    // stg9_FIFO_buf124_stg10_1_merged416_245
    // stg9_FIFO_buf124_stg10_1_merged416_246
    // stg9_FIFO_buf124_stg10_1_merged416_247
    // stg9_FIFO_buf124_stg10_1_merged416_248
    // stg9_FIFO_buf124_stg10_1_merged416_249
    // stg9_FIFO_buf124_stg10_1_merged416_250
    // stg9_FIFO_buf124_stg10_1_merged416_251

	hw_uint<128> result;
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_244_res = stg9_FIFO_buf124_stg10_1_merged416_244_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<0, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_244_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_245_res = stg9_FIFO_buf124_stg10_1_merged416_245_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<16, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_245_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_246_res = stg9_FIFO_buf124_stg10_1_merged416_246_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<32, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_246_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_247_res = stg9_FIFO_buf124_stg10_1_merged416_247_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<48, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_247_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_248_res = stg9_FIFO_buf124_stg10_1_merged416_248_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<64, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_248_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_249_res = stg9_FIFO_buf124_stg10_1_merged416_249_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<80, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_249_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_250_res = stg9_FIFO_buf124_stg10_1_merged416_250_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<96, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_250_res);
	hw_uint<16> stg9_FIFO_buf124_stg10_1_merged416_251_res = stg9_FIFO_buf124_stg10_1_merged416_251_select(stg9_FIFO_buf124, root, stg10_0, stg10_1, dynamic_address);
	set_at<112, 128>(result, stg9_FIFO_buf124_stg10_1_merged416_251_res);
	return result;
}

// stg9_to_gp_360_ld125_merged453_write
//	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0
//	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1
inline void stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_write_bundle_write(hw_uint<32>& stg9_to_gp_360_ld125_merged453_write, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int root, int stg9_to_gp_360_ld126, int stg9_to_gp_360_ld125, int dynamic_address) {
	hw_uint<16> stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_res = stg9_to_gp_360_ld125_merged453_write.extract<0, 15>();
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_write(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_0_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
	hw_uint<16> stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_res = stg9_to_gp_360_ld125_merged453_write.extract<16, 31>();
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_write(stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_1_res, stg9_FIFO_buf124, root, stg9_to_gp_360_ld126, stg9_to_gp_360_ld125, dynamic_address);
}

// Operation logic
inline void in_1_merged383(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_off_chip, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m__lp_2_m_in_1__p__1_rp___p__0_c_____1_m__lp_in_0__p___m_15_rp___p__0_value = in_off_chip.read();
	auto compute_result = in_1_cu381(in_off_chip_1_m__lp_2_m_in_1__p__1_rp___p__0_c_____1_m__lp_in_0__p___m_15_rp___p__0_value);
	// Produce: in
	in_in_1_merged383_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_ld1_merged437(in_cache& in, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_to_gp_20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_2_m_in_ld1__p__1_rp__c______lp_in_ld2__p___m_15_rp__value = in_in_ld1_merged437_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = in_ld1_cu436(in__lp_2_m_in_ld1__p__1_rp__c______lp_in_ld2__p___m_15_rp__value);
	// Produce: in_to_gp_20
	in_to_gp_20.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_0_in_ld2_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_to_gp_20) {

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

// schedule: { in_ld1_merged437[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 554; in_1_merged383[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
//   { in_ld1_merged437[d0 = 0, d1, d2] -> [0, d1, d2, 1] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
// Condition for in_ld1_merged437(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { in_1_merged383[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
// Condition for in_1_merged383(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 0 <= i1 <= 1949 and 0 <= i2 <= 554 and 0 <= i3 <= 1 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1949; i1++) {
	    for (int i2 = 0; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_1_merged383(in_off_chip /* buf name */, in, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_ld1_merged437(in /* buf name */, in_to_gp_20, 0, ((1*i1)), ((1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg14_to_gp_128_ld93_merged473(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg14_to_gp_128, stg14_FIFO_buf92_cache& stg14_FIFO_buf92, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_to_gp_128
	auto stg14_to_gp_128__lp_2_m_stg14_to_gp_128_ld93__p__1_rp__c____stg14_to_gp_128_ld94_value = stg14_to_gp_128.read();
	auto compute_result = stg14_to_gp_128_ld93_cu472(stg14_to_gp_128__lp_2_m_stg14_to_gp_128_ld93__p__1_rp__c____stg14_to_gp_128_ld94_value);
	// Produce: stg14_FIFO_buf92
	stg14_FIFO_buf92_stg14_to_gp_128_ld93_merged473_write_bundle_write(/* arg names */compute_result, stg14_FIFO_buf92, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacdynl_2_1_merged431(stg14_FIFO_buf92_cache& stg14_FIFO_buf92, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */jacdynl_2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14_FIFO_buf92
	auto stg14_FIFO_buf92_1_m__lp_2_m_jacdynl_2_1__p__1_rp___p__0_c____1_m_jacdynl_2_0__p__0_value = stg14_FIFO_buf92_jacdynl_2_1_merged431_read_bundle_read(stg14_FIFO_buf92/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacdynl_2_1_cu429(stg14_FIFO_buf92_1_m__lp_2_m_jacdynl_2_1__p__1_rp___p__0_c____1_m_jacdynl_2_0__p__0_value);
	// Produce: jacdynl_2
	jacdynl_2.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_jacdynl_2_0_stg14_to_gp_128_ld94_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg14_to_gp_128, HWStream<hw_uint<32> >& /* get_args num ports = 2 */jacdynl_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_jacdynl_2_0_stg14_to_gp_128_ld94__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  stg14_FIFO_buf92_cache stg14_FIFO_buf92;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { jacdynl_2_1_merged431[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 539; stg14_to_gp_128_ld93_merged473[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
//   { jacdynl_2_1_merged431[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 48] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
// Condition for jacdynl_2_1_merged431(((((-48 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg14_to_gp_128_ld93_merged473[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 47] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
// Condition for stg14_to_gp_128_ld93_merged473(((((-47 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 30 <= i1 <= 1949 and 15 <= i2 <= 554 and 47 <= i3 <= 48 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 30; i1 <= 1949; i1++) {
	    for (int i2 = 15; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg14_to_gp_128_ld93_merged473(stg14_to_gp_128 /* buf name */, stg14_FIFO_buf92, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          jacdynl_2_1_merged431(stg14_FIFO_buf92 /* buf name */, jacdynl_2, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg2_to_gp_1032_ld97_merged475(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg2_to_gp_1032, stg2_FIFO_buf96_cache& stg2_FIFO_buf96, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_to_gp_1032
	auto stg2_to_gp_1032__lp_2_m_stg2_to_gp_1032_ld97__p__1_rp__c______lp_stg2_to_gp_1032_ld98__p___m_12_rp__value = stg2_to_gp_1032.read();
	auto compute_result = stg2_to_gp_1032_ld97_cu474(stg2_to_gp_1032__lp_2_m_stg2_to_gp_1032_ld97__p__1_rp__c______lp_stg2_to_gp_1032_ld98__p___m_12_rp__value);
	// Produce: stg2_FIFO_buf96
	stg2_FIFO_buf96_stg2_to_gp_1032_ld97_merged475_write_bundle_write(/* arg names */compute_result, stg2_FIFO_buf96, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_1_merged395(stg2_FIFO_buf96_cache& stg2_FIFO_buf96, stg3_cache& stg3, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2_FIFO_buf96
	auto stg2_FIFO_buf96_1_m__lp_2_m_stg3_1__p__1_rp___p__0_c_____1_m__lp_stg3_0__p___m_11_rp___p___m_1_value = stg2_FIFO_buf96_stg3_1_merged395_read_bundle_read(stg2_FIFO_buf96/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_1_cu393(stg2_FIFO_buf96_1_m__lp_2_m_stg3_1__p__1_rp___p__0_c_____1_m__lp_stg3_0__p___m_11_rp___p___m_1_value);
	// Produce: stg3
	stg3_stg3_1_merged395_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_ld37_merged457(stg3_cache& stg3, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg3_to_gp_1136, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3__lp_2_m_stg3_ld37__p__1_rp__c______lp_stg3_ld38__p___m_11_rp__value = stg3_stg3_ld37_merged457_read_bundle_read(stg3/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_ld37_cu456(stg3__lp_2_m_stg3_ld37__p__1_rp__c______lp_stg3_ld38__p___m_11_rp__value);
	// Produce: stg3_to_gp_1136
	stg3_to_gp_1136.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg2_to_gp_1032_ld98_stg3_0_stg3_ld38_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg2_to_gp_1032, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg3_to_gp_1136) {

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

// schedule: { stg3_ld37_merged457[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 550; stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550; stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
//   { stg3_ld37_merged457[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 13] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
// Condition for stg3_ld37_merged457(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg3_1_merged395[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 12] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
// Condition for stg3_1_merged395(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg2_to_gp_1032_ld97_merged475[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 11] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
// Condition for stg2_to_gp_1032_ld97_merged475(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 8 <= i1 <= 1949 and 4 <= i2 <= 554 and 12 <= i3 <= 13; [0, i1, i2, 11] : 6 <= i1 <= 1949 and 3 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 6; i1 <= 1949; i1++) {
	    for (int i2 = 3; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg2_to_gp_1032_ld97_merged475(stg2_to_gp_1032 /* buf name */, stg2_FIFO_buf96, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg3_1_merged395(stg2_FIFO_buf96 /* buf name */, stg3, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	        // { [i0, i1, i2] : i1 >= 8 and i2 >= 4 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : -4 + i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((-4 + 1*i2)) >= 0)))) {
	          stg3_ld37_merged457(stg3 /* buf name */, stg3_to_gp_1136, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg3_to_gp_1136_ld101_merged483(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg3_to_gp_1136, stg3_FIFO_buf100_cache& stg3_FIFO_buf100, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_to_gp_1136
	auto stg3_to_gp_1136__lp_2_m_stg3_to_gp_1136_ld101__p__1_rp__c______lp_stg3_to_gp_1136_ld102__p___m_11_rp__value = stg3_to_gp_1136.read();
	auto compute_result = stg3_to_gp_1136_ld101_cu482(stg3_to_gp_1136__lp_2_m_stg3_to_gp_1136_ld101__p__1_rp__c______lp_stg3_to_gp_1136_ld102__p___m_11_rp__value);
	// Produce: stg3_FIFO_buf100
	stg3_FIFO_buf100_stg3_to_gp_1136_ld101_merged483_write_bundle_write(/* arg names */compute_result, stg3_FIFO_buf100, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_1_merged398(stg3_FIFO_buf100_cache& stg3_FIFO_buf100, stg4_cache& stg4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg3_FIFO_buf100
	auto stg3_FIFO_buf100_1_m__lp_2_m_stg4_1__p__1_rp___p__0_c_____1_m__lp_stg4_0__p___m_10_rp___p___m_1_value = stg3_FIFO_buf100_stg4_1_merged398_read_bundle_read(stg3_FIFO_buf100/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_1_cu396(stg3_FIFO_buf100_1_m__lp_2_m_stg4_1__p__1_rp___p__0_c_____1_m__lp_stg4_0__p___m_10_rp___p___m_1_value);
	// Produce: stg4
	stg4_stg4_1_merged398_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_ld41_merged459(stg4_cache& stg4, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg4_to_gp_1240, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4__lp_2_m_stg4_ld41__p__1_rp__c______lp_stg4_ld42__p___m_10_rp__value = stg4_stg4_ld41_merged459_read_bundle_read(stg4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_ld41_cu458(stg4__lp_2_m_stg4_ld41__p__1_rp__c______lp_stg4_ld42__p___m_10_rp__value);
	// Produce: stg4_to_gp_1240
	stg4_to_gp_1240.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg3_to_gp_1136_ld102_stg4_0_stg4_ld42_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg3_to_gp_1136, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg4_to_gp_1240) {

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

// schedule: { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549; stg4_ld41_merged459[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 549; stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
//   { stg4_1_merged398[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 15] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
// Condition for stg4_1_merged398(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg4_ld41_merged459[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 16] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
// Condition for stg4_ld41_merged459(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg3_to_gp_1136_ld101_merged483[d0 = 0, d1, d2] -> [0, 8 + d1, 4 + d2, 14] : 0 <= d1 <= 1941 and 0 <= d2 <= 550 }
// Condition for stg3_to_gp_1136_ld101_merged483(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-4 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 10 <= i1 <= 1949 and 5 <= i2 <= 554 and 15 <= i3 <= 16; [0, i1, i2, 14] : 8 <= i1 <= 1949 and 4 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 8; i1 <= 1949; i1++) {
	    for (int i2 = 4; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg3_to_gp_1136_ld101_merged483(stg3_to_gp_1136 /* buf name */, stg3_FIFO_buf100, 0, ((-8 + 1*i1)), ((-4 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          stg4_1_merged398(stg3_FIFO_buf100 /* buf name */, stg4, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	        // { [i0, i1, i2] : i1 >= 10 and i2 >= 5 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -5 + i2 >= 0 }
	        if ((((((-10 + 1*i1)) >= 0) && (((-5 + 1*i2)) >= 0)))) {
	          stg4_ld41_merged459(stg4 /* buf name */, stg4_to_gp_1240, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg4_to_gp_1240_ld105_merged451(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg4_to_gp_1240, stg4_FIFO_buf104_cache& stg4_FIFO_buf104, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_to_gp_1240
	auto stg4_to_gp_1240__lp_2_m_stg4_to_gp_1240_ld105__p__1_rp__c______lp_stg4_to_gp_1240_ld106__p___m_10_rp__value = stg4_to_gp_1240.read();
	auto compute_result = stg4_to_gp_1240_ld105_cu450(stg4_to_gp_1240__lp_2_m_stg4_to_gp_1240_ld105__p__1_rp__c______lp_stg4_to_gp_1240_ld106__p___m_10_rp__value);
	// Produce: stg4_FIFO_buf104
	stg4_FIFO_buf104_stg4_to_gp_1240_ld105_merged451_write_bundle_write(/* arg names */compute_result, stg4_FIFO_buf104, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_1_merged401(stg4_FIFO_buf104_cache& stg4_FIFO_buf104, stg5_cache& stg5, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg4_FIFO_buf104
	auto stg4_FIFO_buf104_1_m__lp_2_m_stg5_1__p__1_rp___p__0_c_____1_m__lp_stg5_0__p___m_9_rp___p___m_1_value = stg4_FIFO_buf104_stg5_1_merged401_read_bundle_read(stg4_FIFO_buf104/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_1_cu399(stg4_FIFO_buf104_1_m__lp_2_m_stg5_1__p__1_rp___p__0_c_____1_m__lp_stg5_0__p___m_9_rp___p___m_1_value);
	// Produce: stg5
	stg5_stg5_1_merged401_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_ld45_merged435(stg5_cache& stg5, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg5_to_gp_1344, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5__lp_2_m_stg5_ld45__p__1_rp__c______lp_stg5_ld46__p___m_9_rp__value = stg5_stg5_ld45_merged435_read_bundle_read(stg5/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_ld45_cu434(stg5__lp_2_m_stg5_ld45__p__1_rp__c______lp_stg5_ld46__p___m_9_rp__value);
	// Produce: stg5_to_gp_1344
	stg5_to_gp_1344.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg4_to_gp_1240_ld106_stg5_0_stg5_ld46_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg4_to_gp_1240, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg5_to_gp_1344) {

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

// schedule: { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548; stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549; stg5_ld45_merged435[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
//   { stg5_1_merged401[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 18] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
// Condition for stg5_1_merged401(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg4_to_gp_1240_ld105_merged451[d0 = 0, d1, d2] -> [0, 10 + d1, 5 + d2, 17] : 0 <= d1 <= 1939 and 0 <= d2 <= 549 }
// Condition for stg4_to_gp_1240_ld105_merged451(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-5 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg5_ld45_merged435[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 19] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
// Condition for stg5_ld45_merged435(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 12 <= i1 <= 1949 and 6 <= i2 <= 554 and 18 <= i3 <= 19; [0, i1, i2, 17] : 10 <= i1 <= 1949 and 5 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 10; i1 <= 1949; i1++) {
	    for (int i2 = 5; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg4_to_gp_1240_ld105_merged451(stg4_to_gp_1240 /* buf name */, stg4_FIFO_buf104, 0, ((-10 + 1*i1)), ((-5 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg5_1_merged401(stg4_FIFO_buf104 /* buf name */, stg5, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	        // { [i0, i1, i2] : i1 >= 12 and i2 >= 6 }
	          // { [i0, i1, i2] : -12 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-12 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          stg5_ld45_merged435(stg5 /* buf name */, stg5_to_gp_1344, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg5_to_gp_1344_ld109_merged445(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg5_to_gp_1344, stg5_FIFO_buf108_cache& stg5_FIFO_buf108, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_to_gp_1344
	auto stg5_to_gp_1344__lp_2_m_stg5_to_gp_1344_ld109__p__1_rp__c______lp_stg5_to_gp_1344_ld110__p___m_9_rp__value = stg5_to_gp_1344.read();
	auto compute_result = stg5_to_gp_1344_ld109_cu444(stg5_to_gp_1344__lp_2_m_stg5_to_gp_1344_ld109__p__1_rp__c______lp_stg5_to_gp_1344_ld110__p___m_9_rp__value);
	// Produce: stg5_FIFO_buf108
	stg5_FIFO_buf108_stg5_to_gp_1344_ld109_merged445_write_bundle_write(/* arg names */compute_result, stg5_FIFO_buf108, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_1_merged404(stg5_FIFO_buf108_cache& stg5_FIFO_buf108, stg6_cache& stg6, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg5_FIFO_buf108
	auto stg5_FIFO_buf108_1_m__lp_2_m_stg6_1__p__1_rp___p__0_c_____1_m__lp_stg6_0__p___m_8_rp___p___m_1_value = stg5_FIFO_buf108_stg6_1_merged404_read_bundle_read(stg5_FIFO_buf108/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_1_cu402(stg5_FIFO_buf108_1_m__lp_2_m_stg6_1__p__1_rp___p__0_c_____1_m__lp_stg6_0__p___m_8_rp___p___m_1_value);
	// Produce: stg6
	stg6_stg6_1_merged404_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_ld49_merged439(stg6_cache& stg6, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg6_to_gp_1448, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6__lp_2_m_stg6_ld49__p__1_rp__c______lp_stg6_ld50__p___m_8_rp__value = stg6_stg6_ld49_merged439_read_bundle_read(stg6/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_ld49_cu438(stg6__lp_2_m_stg6_ld49__p__1_rp__c______lp_stg6_ld50__p___m_8_rp__value);
	// Produce: stg6_to_gp_1448
	stg6_to_gp_1448.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg5_to_gp_1344_ld110_stg6_0_stg6_ld50_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg5_to_gp_1344, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg6_to_gp_1448) {

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

// schedule: { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547; stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548; stg6_ld49_merged439[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
//   { stg6_1_merged404[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 21] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
// Condition for stg6_1_merged404(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg5_to_gp_1344_ld109_merged445[d0 = 0, d1, d2] -> [0, 12 + d1, 6 + d2, 20] : 0 <= d1 <= 1937 and 0 <= d2 <= 548 }
// Condition for stg5_to_gp_1344_ld109_merged445(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-12 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg6_ld49_merged439[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 22] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
// Condition for stg6_ld49_merged439(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 1949 and 7 <= i2 <= 554 and 21 <= i3 <= 22; [0, i1, i2, 20] : 12 <= i1 <= 1949 and 6 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 12; i1 <= 1949; i1++) {
	    for (int i2 = 6; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg5_to_gp_1344_ld109_merged445(stg5_to_gp_1344 /* buf name */, stg5_FIFO_buf108, 0, ((-12 + 1*i1)), ((-6 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          stg6_1_merged404(stg5_FIFO_buf108 /* buf name */, stg6, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	        // { [i0, i1, i2] : i1 >= 14 and i2 >= 7 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -7 + i2 >= 0 }
	        if ((((((-14 + 1*i1)) >= 0) && (((-7 + 1*i2)) >= 0)))) {
	          stg6_ld49_merged439(stg6 /* buf name */, stg6_to_gp_1448, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg6_to_gp_1448_ld113_merged447(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg6_to_gp_1448, stg6_FIFO_buf112_cache& stg6_FIFO_buf112, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_to_gp_1448
	auto stg6_to_gp_1448__lp_2_m_stg6_to_gp_1448_ld113__p__1_rp__c______lp_stg6_to_gp_1448_ld114__p___m_8_rp__value = stg6_to_gp_1448.read();
	auto compute_result = stg6_to_gp_1448_ld113_cu446(stg6_to_gp_1448__lp_2_m_stg6_to_gp_1448_ld113__p__1_rp__c______lp_stg6_to_gp_1448_ld114__p___m_8_rp__value);
	// Produce: stg6_FIFO_buf112
	stg6_FIFO_buf112_stg6_to_gp_1448_ld113_merged447_write_bundle_write(/* arg names */compute_result, stg6_FIFO_buf112, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_1_merged407(stg6_FIFO_buf112_cache& stg6_FIFO_buf112, stg7_cache& stg7, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg6_FIFO_buf112
	auto stg6_FIFO_buf112_1_m__lp_2_m_stg7_1__p__1_rp___p__0_c_____1_m__lp_stg7_0__p___m_7_rp___p___m_1_value = stg6_FIFO_buf112_stg7_1_merged407_read_bundle_read(stg6_FIFO_buf112/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_1_cu405(stg6_FIFO_buf112_1_m__lp_2_m_stg7_1__p__1_rp___p__0_c_____1_m__lp_stg7_0__p___m_7_rp___p___m_1_value);
	// Produce: stg7
	stg7_stg7_1_merged407_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_ld53_merged461(stg7_cache& stg7, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg7_to_gp_1552, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7__lp_2_m_stg7_ld53__p__1_rp__c______lp_stg7_ld54__p___m_7_rp__value = stg7_stg7_ld53_merged461_read_bundle_read(stg7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_ld53_cu460(stg7__lp_2_m_stg7_ld53__p__1_rp__c______lp_stg7_ld54__p___m_7_rp__value);
	// Produce: stg7_to_gp_1552
	stg7_to_gp_1552.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg6_to_gp_1448_ld114_stg7_0_stg7_ld54_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg6_to_gp_1448, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg7_to_gp_1552) {

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

// schedule: { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546; stg7_ld53_merged461[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 546; stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
//   { stg7_1_merged407[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 24] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
// Condition for stg7_1_merged407(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg7_ld53_merged461[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 25] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
// Condition for stg7_ld53_merged461(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg6_to_gp_1448_ld113_merged447[d0 = 0, d1, d2] -> [0, 14 + d1, 7 + d2, 23] : 0 <= d1 <= 1935 and 0 <= d2 <= 547 }
// Condition for stg6_to_gp_1448_ld113_merged447(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-7 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 16 <= i1 <= 1949 and 8 <= i2 <= 554 and 24 <= i3 <= 25; [0, i1, i2, 23] : 14 <= i1 <= 1949 and 7 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 14; i1 <= 1949; i1++) {
	    for (int i2 = 7; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg6_to_gp_1448_ld113_merged447(stg6_to_gp_1448 /* buf name */, stg6_FIFO_buf112, 0, ((-14 + 1*i1)), ((-7 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	          // { [i0, i1, i2] : -16 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-16 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg7_1_merged407(stg6_FIFO_buf112 /* buf name */, stg7, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	        // { [i0, i1, i2] : i1 >= 16 and i2 >= 8 }
	          // { [i0, i1, i2] : -16 + i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	        if ((((((-16 + 1*i1)) >= 0) && (((-8 + 1*i2)) >= 0)))) {
	          stg7_ld53_merged461(stg7 /* buf name */, stg7_to_gp_1552, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg7_to_gp_1552_ld117_merged485(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg7_to_gp_1552, stg7_FIFO_buf116_cache& stg7_FIFO_buf116, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_to_gp_1552
	auto stg7_to_gp_1552__lp_2_m_stg7_to_gp_1552_ld117__p__1_rp__c______lp_stg7_to_gp_1552_ld118__p___m_7_rp__value = stg7_to_gp_1552.read();
	auto compute_result = stg7_to_gp_1552_ld117_cu484(stg7_to_gp_1552__lp_2_m_stg7_to_gp_1552_ld117__p__1_rp__c______lp_stg7_to_gp_1552_ld118__p___m_7_rp__value);
	// Produce: stg7_FIFO_buf116
	stg7_FIFO_buf116_stg7_to_gp_1552_ld117_merged485_write_bundle_write(/* arg names */compute_result, stg7_FIFO_buf116, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_1_merged410(stg7_FIFO_buf116_cache& stg7_FIFO_buf116, stg8_cache& stg8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg7_FIFO_buf116
	auto stg7_FIFO_buf116_1_m__lp_2_m_stg8_1__p__1_rp___p__0_c_____1_m__lp_stg8_0__p___m_6_rp___p___m_1_value = stg7_FIFO_buf116_stg8_1_merged410_read_bundle_read(stg7_FIFO_buf116/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_1_cu408(stg7_FIFO_buf116_1_m__lp_2_m_stg8_1__p__1_rp___p__0_c_____1_m__lp_stg8_0__p___m_6_rp___p___m_1_value);
	// Produce: stg8
	stg8_stg8_1_merged410_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_ld57_merged463(stg8_cache& stg8, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg8_to_gp_1656, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8__lp_2_m_stg8_ld57__p__1_rp__c______lp_stg8_ld58__p___m_6_rp__value = stg8_stg8_ld57_merged463_read_bundle_read(stg8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_ld57_cu462(stg8__lp_2_m_stg8_ld57__p__1_rp__c______lp_stg8_ld58__p___m_6_rp__value);
	// Produce: stg8_to_gp_1656
	stg8_to_gp_1656.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg7_to_gp_1552_ld118_stg8_0_stg8_ld58_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg7_to_gp_1552, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg8_to_gp_1656) {

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

// schedule: { stg8_ld57_merged463[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 545; stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545; stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
//   { stg8_ld57_merged463[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 28] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
// Condition for stg8_ld57_merged463(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg8_1_merged410[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 27] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
// Condition for stg8_1_merged410(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg7_to_gp_1552_ld117_merged485[d0 = 0, d1, d2] -> [0, 16 + d1, 8 + d2, 26] : 0 <= d1 <= 1933 and 0 <= d2 <= 546 }
// Condition for stg7_to_gp_1552_ld117_merged485(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-16 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 18 <= i1 <= 1949 and 9 <= i2 <= 554 and 27 <= i3 <= 28; [0, i1, i2, 26] : 16 <= i1 <= 1949 and 8 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 16; i1 <= 1949; i1++) {
	    for (int i2 = 8; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg7_to_gp_1552_ld117_merged485(stg7_to_gp_1552 /* buf name */, stg7_FIFO_buf116, 0, ((-16 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	          // { [i0, i1, i2] : -18 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-18 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          stg8_1_merged410(stg7_FIFO_buf116 /* buf name */, stg8, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	        // { [i0, i1, i2] : i1 >= 18 and i2 >= 9 }
	          // { [i0, i1, i2] : -18 + i1 >= 0 }
	          // { [i0, i1, i2] : -9 + i2 >= 0 }
	        if ((((((-18 + 1*i1)) >= 0) && (((-9 + 1*i2)) >= 0)))) {
	          stg8_ld57_merged463(stg8 /* buf name */, stg8_to_gp_1656, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg8_to_gp_1656_ld121_merged443(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg8_to_gp_1656, stg8_FIFO_buf120_cache& stg8_FIFO_buf120, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_to_gp_1656
	auto stg8_to_gp_1656__lp_2_m_stg8_to_gp_1656_ld121__p__1_rp__c______lp_stg8_to_gp_1656_ld122__p___m_6_rp__value = stg8_to_gp_1656.read();
	auto compute_result = stg8_to_gp_1656_ld121_cu442(stg8_to_gp_1656__lp_2_m_stg8_to_gp_1656_ld121__p__1_rp__c______lp_stg8_to_gp_1656_ld122__p___m_6_rp__value);
	// Produce: stg8_FIFO_buf120
	stg8_FIFO_buf120_stg8_to_gp_1656_ld121_merged443_write_bundle_write(/* arg names */compute_result, stg8_FIFO_buf120, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_1_merged413(stg8_FIFO_buf120_cache& stg8_FIFO_buf120, stg9_cache& stg9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg8_FIFO_buf120
	auto stg8_FIFO_buf120_1_m__lp_2_m_stg9_1__p__1_rp___p__0_c_____1_m__lp_stg9_0__p___m_5_rp___p___m_1_value = stg8_FIFO_buf120_stg9_1_merged413_read_bundle_read(stg8_FIFO_buf120/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_1_cu411(stg8_FIFO_buf120_1_m__lp_2_m_stg9_1__p__1_rp___p__0_c_____1_m__lp_stg9_0__p___m_5_rp___p___m_1_value);
	// Produce: stg9
	stg9_stg9_1_merged413_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_ld61_merged465(stg9_cache& stg9, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg9_to_gp_360, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9__lp_2_m_stg9_ld61__p__1_rp__c______lp_stg9_ld62__p___m_5_rp__value = stg9_stg9_ld61_merged465_read_bundle_read(stg9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_ld61_cu464(stg9__lp_2_m_stg9_ld61__p__1_rp__c______lp_stg9_ld62__p___m_5_rp__value);
	// Produce: stg9_to_gp_360
	stg9_to_gp_360.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg8_to_gp_1656_ld122_stg9_0_stg9_ld62_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg8_to_gp_1656, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg9_to_gp_360) {

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

// schedule: { stg9_ld61_merged465[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 544; stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545; stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
//   { stg9_ld61_merged465[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 31] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
// Condition for stg9_ld61_merged465(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg8_to_gp_1656_ld121_merged443[d0 = 0, d1, d2] -> [0, 18 + d1, 9 + d2, 29] : 0 <= d1 <= 1931 and 0 <= d2 <= 545 }
// Condition for stg8_to_gp_1656_ld121_merged443(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-18 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-9 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg9_1_merged413[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 30] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
// Condition for stg9_1_merged413(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 20 <= i1 <= 1949 and 10 <= i2 <= 554 and 30 <= i3 <= 31; [0, i1, i2, 29] : 18 <= i1 <= 1949 and 9 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 18; i1 <= 1949; i1++) {
	    for (int i2 = 9; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg8_to_gp_1656_ld121_merged443(stg8_to_gp_1656 /* buf name */, stg8_FIFO_buf120, 0, ((-18 + 1*i1)), ((-9 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	          // { [i0, i1, i2] : -20 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-20 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg9_1_merged413(stg8_FIFO_buf120 /* buf name */, stg9, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	        // { [i0, i1, i2] : i1 >= 20 and i2 >= 10 }
	          // { [i0, i1, i2] : -20 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-20 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          stg9_ld61_merged465(stg9 /* buf name */, stg9_to_gp_360, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void in_to_gp_20_ld65_merged467(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_to_gp_20, in_FIFO_buf64_cache& in_FIFO_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_to_gp_20
	auto in_to_gp_20__lp_2_m_in_to_gp_20_ld65__p__1_rp__c______lp_in_to_gp_20_ld66__p___m_15_rp__value = in_to_gp_20.read();
	auto compute_result = in_to_gp_20_ld65_cu466(in_to_gp_20__lp_2_m_in_to_gp_20_ld65__p__1_rp__c______lp_in_to_gp_20_ld66__p___m_15_rp__value);
	// Produce: in_FIFO_buf64
	in_FIFO_buf64_in_to_gp_20_ld65_merged467_write_bundle_write(/* arg names */compute_result, in_FIFO_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_1_merged386(in_FIFO_buf64_cache& in_FIFO_buf64, stg0_cache& stg0, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_FIFO_buf64
	auto in_FIFO_buf64_1_m__lp_2_m_stg0_1__p__1_rp___p__0_c_____1_m__lp_stg0_0__p___m_14_rp___p___m_1_value = in_FIFO_buf64_stg0_1_merged386_read_bundle_read(in_FIFO_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_1_cu384(in_FIFO_buf64_1_m__lp_2_m_stg0_1__p__1_rp___p__0_c_____1_m__lp_stg0_0__p___m_14_rp___p___m_1_value);
	// Produce: stg0
	stg0_stg0_1_merged386_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_ld5_merged374(stg0_cache& stg0, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg0_to_gp_84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0__lp_2_m_stg0_ld5__p__1_rp__c______lp_stg0_ld6__p___m_14_rp__value = stg0_stg0_ld5_merged374_read_bundle_read(stg0/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_ld5_cu373(stg0__lp_2_m_stg0_ld5__p__1_rp__c______lp_stg0_ld6__p___m_14_rp__value);
	// Produce: stg0_to_gp_84
	stg0_to_gp_84.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_in_to_gp_20_ld66_stg0_0_stg0_ld6_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_to_gp_20, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg0_to_gp_84) {

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

// schedule: { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553; stg0_ld5_merged374[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 553; in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
//   { stg0_1_merged386[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
// Condition for stg0_1_merged386(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg0_ld5_merged374[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 4] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
// Condition for stg0_ld5_merged374(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { in_to_gp_20_ld65_merged467[d0 = 0, d1, d2] -> [0, d1, d2, 2] : 0 <= d1 <= 1949 and 0 <= d2 <= 554 }
// Condition for in_to_gp_20_ld65_merged467(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1949 and 0 < i2 <= 554 and 3 <= i3 <= 4; [0, i1, i2, 2] : 0 <= i1 <= 1949 and 0 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 0; i1 <= 1949; i1++) {
	    for (int i2 = 0; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          in_to_gp_20_ld65_merged467(in_to_gp_20 /* buf name */, in_FIFO_buf64, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          stg0_1_merged386(in_FIFO_buf64 /* buf name */, stg0, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          stg0_ld5_merged374(stg0 /* buf name */, stg0_to_gp_84, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg9_to_gp_360_ld125_merged453(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg9_to_gp_360, stg9_FIFO_buf124_cache& stg9_FIFO_buf124, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_to_gp_360
	auto stg9_to_gp_360__lp_2_m_stg9_to_gp_360_ld125__p__1_rp__c______lp_stg9_to_gp_360_ld126__p___m_5_rp__value = stg9_to_gp_360.read();
	auto compute_result = stg9_to_gp_360_ld125_cu452(stg9_to_gp_360__lp_2_m_stg9_to_gp_360_ld125__p__1_rp__c______lp_stg9_to_gp_360_ld126__p___m_5_rp__value);
	// Produce: stg9_FIFO_buf124
	stg9_FIFO_buf124_stg9_to_gp_360_ld125_merged453_write_bundle_write(/* arg names */compute_result, stg9_FIFO_buf124, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_1_merged416(stg9_FIFO_buf124_cache& stg9_FIFO_buf124, stg10_cache& stg10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg9_FIFO_buf124
	auto stg9_FIFO_buf124_1_m__lp_2_m_stg10_1__p__1_rp___p__0_c_____1_m__lp_stg10_0__p___m_4_rp___p___m_1_value = stg9_FIFO_buf124_stg10_1_merged416_read_bundle_read(stg9_FIFO_buf124/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_1_cu414(stg9_FIFO_buf124_1_m__lp_2_m_stg10_1__p__1_rp___p__0_c_____1_m__lp_stg10_0__p___m_4_rp___p___m_1_value);
	// Produce: stg10
	stg10_stg10_1_merged416_write_bundle_write(/* arg names */compute_result, stg10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg10_ld13_merged378(stg10_cache& stg10, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg10_to_gp_412, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10
	auto stg10__lp_2_m_stg10_ld13__p__1_rp__c______lp_stg10_ld14__p___m_4_rp__value = stg10_stg10_ld13_merged378_read_bundle_read(stg10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg10_ld13_cu377(stg10__lp_2_m_stg10_ld13__p__1_rp__c______lp_stg10_ld14__p___m_4_rp__value);
	// Produce: stg10_to_gp_412
	stg10_to_gp_412.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_0_stg10_ld14_stg9_to_gp_360_ld126_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg9_to_gp_360, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg10_to_gp_412) {

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

// schedule: { stg10_ld13_merged378[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 543; stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544; stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
//   { stg10_ld13_merged378[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 34] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
// Condition for stg10_ld13_merged378(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg9_to_gp_360_ld125_merged453[d0 = 0, d1, d2] -> [0, 20 + d1, 10 + d2, 32] : 0 <= d1 <= 1929 and 0 <= d2 <= 544 }
// Condition for stg9_to_gp_360_ld125_merged453(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-20 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg10_1_merged416[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 33] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
// Condition for stg10_1_merged416(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 22 <= i1 <= 1949 and 11 <= i2 <= 554 and 33 <= i3 <= 34; [0, i1, i2, 32] : 20 <= i1 <= 1949 and 10 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 20; i1 <= 1949; i1++) {
	    for (int i2 = 10; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg9_to_gp_360_ld125_merged453(stg9_to_gp_360 /* buf name */, stg9_FIFO_buf124, 0, ((-20 + 1*i1)), ((-10 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	          // { [i0, i1, i2] : -22 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-22 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          stg10_1_merged416(stg9_FIFO_buf124 /* buf name */, stg10, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	        // { [i0, i1, i2] : i1 >= 22 and i2 >= 11 }
	          // { [i0, i1, i2] : -22 + i1 >= 0 }
	          // { [i0, i1, i2] : -11 + i2 >= 0 }
	        if ((((((-22 + 1*i1)) >= 0) && (((-11 + 1*i2)) >= 0)))) {
	          stg10_ld13_merged378(stg10 /* buf name */, stg10_to_gp_412, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg10_to_gp_412_ld77_merged469(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg10_to_gp_412, stg10_FIFO_buf76_cache& stg10_FIFO_buf76, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_to_gp_412
	auto stg10_to_gp_412__lp_2_m_stg10_to_gp_412_ld77__p__1_rp__c______lp_stg10_to_gp_412_ld78__p___m_4_rp__value = stg10_to_gp_412.read();
	auto compute_result = stg10_to_gp_412_ld77_cu468(stg10_to_gp_412__lp_2_m_stg10_to_gp_412_ld77__p__1_rp__c______lp_stg10_to_gp_412_ld78__p___m_4_rp__value);
	// Produce: stg10_FIFO_buf76
	stg10_FIFO_buf76_stg10_to_gp_412_ld77_merged469_write_bundle_write(/* arg names */compute_result, stg10_FIFO_buf76, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_1_merged419(stg10_FIFO_buf76_cache& stg10_FIFO_buf76, stg11_cache& stg11, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg10_FIFO_buf76
	auto stg10_FIFO_buf76_1_m__lp_2_m_stg11_1__p__1_rp___p__0_c_____1_m__lp_stg11_0__p___m_3_rp___p___m_1_value = stg10_FIFO_buf76_stg11_1_merged419_read_bundle_read(stg10_FIFO_buf76/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_1_cu417(stg10_FIFO_buf76_1_m__lp_2_m_stg11_1__p__1_rp___p__0_c_____1_m__lp_stg11_0__p___m_3_rp___p___m_1_value);
	// Produce: stg11
	stg11_stg11_1_merged419_write_bundle_write(/* arg names */compute_result, stg11, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg11_ld17_merged479(stg11_cache& stg11, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg11_to_gp_516, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11
	auto stg11__lp_2_m_stg11_ld17__p__1_rp__c______lp_stg11_ld18__p___m_3_rp__value = stg11_stg11_ld17_merged479_read_bundle_read(stg11/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg11_ld17_cu478(stg11__lp_2_m_stg11_ld17__p__1_rp__c______lp_stg11_ld18__p___m_3_rp__value);
	// Produce: stg11_to_gp_516
	stg11_to_gp_516.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg10_to_gp_412_ld78_stg11_0_stg11_ld18_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg10_to_gp_412, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg11_to_gp_516) {

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

// schedule: { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542; stg11_ld17_merged479[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 542; stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
//   { stg11_1_merged419[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 36] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
// Condition for stg11_1_merged419(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg11_ld17_merged479[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 37] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
// Condition for stg11_ld17_merged479(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg10_to_gp_412_ld77_merged469[d0 = 0, d1, d2] -> [0, 22 + d1, 11 + d2, 35] : 0 <= d1 <= 1927 and 0 <= d2 <= 543 }
// Condition for stg10_to_gp_412_ld77_merged469(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-22 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-11 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 24 <= i1 <= 1949 and 12 <= i2 <= 554 and 36 <= i3 <= 37; [0, i1, i2, 35] : 22 <= i1 <= 1949 and 11 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 22; i1 <= 1949; i1++) {
	    for (int i2 = 11; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg10_to_gp_412_ld77_merged469(stg10_to_gp_412 /* buf name */, stg10_FIFO_buf76, 0, ((-22 + 1*i1)), ((-11 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	          // { [i0, i1, i2] : -24 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-24 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg11_1_merged419(stg10_FIFO_buf76 /* buf name */, stg11, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	        // { [i0, i1, i2] : i1 >= 24 and i2 >= 12 }
	          // { [i0, i1, i2] : -24 + i1 >= 0 }
	          // { [i0, i1, i2] : -12 + i2 >= 0 }
	        if ((((((-24 + 1*i1)) >= 0) && (((-12 + 1*i2)) >= 0)))) {
	          stg11_ld17_merged479(stg11 /* buf name */, stg11_to_gp_516, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg11_to_gp_516_ld81_merged471(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg11_to_gp_516, stg11_FIFO_buf80_cache& stg11_FIFO_buf80, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_to_gp_516
	auto stg11_to_gp_516__lp_2_m_stg11_to_gp_516_ld81__p__1_rp__c______lp_stg11_to_gp_516_ld82__p___m_3_rp__value = stg11_to_gp_516.read();
	auto compute_result = stg11_to_gp_516_ld81_cu470(stg11_to_gp_516__lp_2_m_stg11_to_gp_516_ld81__p__1_rp__c______lp_stg11_to_gp_516_ld82__p___m_3_rp__value);
	// Produce: stg11_FIFO_buf80
	stg11_FIFO_buf80_stg11_to_gp_516_ld81_merged471_write_bundle_write(/* arg names */compute_result, stg11_FIFO_buf80, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_1_merged422(stg11_FIFO_buf80_cache& stg11_FIFO_buf80, stg12_cache& stg12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg11_FIFO_buf80
	auto stg11_FIFO_buf80_1_m__lp_2_m_stg12_1__p__1_rp___p__0_c_____1_m__lp_stg12_0__p___m_2_rp___p___m_1_value = stg11_FIFO_buf80_stg12_1_merged422_read_bundle_read(stg11_FIFO_buf80/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_1_cu420(stg11_FIFO_buf80_1_m__lp_2_m_stg12_1__p__1_rp___p__0_c_____1_m__lp_stg12_0__p___m_2_rp___p___m_1_value);
	// Produce: stg12
	stg12_stg12_1_merged422_write_bundle_write(/* arg names */compute_result, stg12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg12_ld21_merged487(stg12_cache& stg12, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg12_to_gp_620, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12
	auto stg12__lp_2_m_stg12_ld21__p__1_rp__c______lp_stg12_ld22__p___m_2_rp__value = stg12_stg12_ld21_merged487_read_bundle_read(stg12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg12_ld21_cu486(stg12__lp_2_m_stg12_ld21__p__1_rp__c______lp_stg12_ld22__p___m_2_rp__value);
	// Produce: stg12_to_gp_620
	stg12_to_gp_620.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg11_to_gp_516_ld82_stg12_0_stg12_ld22_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg11_to_gp_516, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg12_to_gp_620) {

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

// schedule: { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541; stg12_ld21_merged487[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 541; stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
//   { stg12_1_merged422[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 39] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
// Condition for stg12_1_merged422(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg12_ld21_merged487[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 40] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
// Condition for stg12_ld21_merged487(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg11_to_gp_516_ld81_merged471[d0 = 0, d1, d2] -> [0, 24 + d1, 12 + d2, 38] : 0 <= d1 <= 1925 and 0 <= d2 <= 542 }
// Condition for stg11_to_gp_516_ld81_merged471(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-24 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-12 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 26 <= i1 <= 1949 and 13 <= i2 <= 554 and 39 <= i3 <= 40; [0, i1, i2, 38] : 24 <= i1 <= 1949 and 12 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 24; i1 <= 1949; i1++) {
	    for (int i2 = 12; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg11_to_gp_516_ld81_merged471(stg11_to_gp_516 /* buf name */, stg11_FIFO_buf80, 0, ((-24 + 1*i1)), ((-12 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	          // { [i0, i1, i2] : -26 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-26 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          stg12_1_merged422(stg11_FIFO_buf80 /* buf name */, stg12, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	        // { [i0, i1, i2] : i1 >= 26 and i2 >= 13 }
	          // { [i0, i1, i2] : -26 + i1 >= 0 }
	          // { [i0, i1, i2] : -13 + i2 >= 0 }
	        if ((((((-26 + 1*i1)) >= 0) && (((-13 + 1*i2)) >= 0)))) {
	          stg12_ld21_merged487(stg12 /* buf name */, stg12_to_gp_620, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg12_to_gp_620_ld85_merged481(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg12_to_gp_620, stg12_FIFO_buf84_cache& stg12_FIFO_buf84, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_to_gp_620
	auto stg12_to_gp_620__lp_2_m_stg12_to_gp_620_ld85__p__1_rp__c______lp_stg12_to_gp_620_ld86__p___m_2_rp__value = stg12_to_gp_620.read();
	auto compute_result = stg12_to_gp_620_ld85_cu480(stg12_to_gp_620__lp_2_m_stg12_to_gp_620_ld85__p__1_rp__c______lp_stg12_to_gp_620_ld86__p___m_2_rp__value);
	// Produce: stg12_FIFO_buf84
	stg12_FIFO_buf84_stg12_to_gp_620_ld85_merged481_write_bundle_write(/* arg names */compute_result, stg12_FIFO_buf84, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_1_merged425(stg12_FIFO_buf84_cache& stg12_FIFO_buf84, stg13_cache& stg13, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg12_FIFO_buf84
	auto stg12_FIFO_buf84_1_m__lp_2_m_stg13_1__p__1_rp___p__0_c_____1_m__lp_stg13_0__p___m_1_rp___p___m_1_value = stg12_FIFO_buf84_stg13_1_merged425_read_bundle_read(stg12_FIFO_buf84/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_1_cu423(stg12_FIFO_buf84_1_m__lp_2_m_stg13_1__p__1_rp___p__0_c_____1_m__lp_stg13_0__p___m_1_rp___p___m_1_value);
	// Produce: stg13
	stg13_stg13_1_merged425_write_bundle_write(/* arg names */compute_result, stg13, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg13_ld25_merged376(stg13_cache& stg13, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg13_to_gp_724, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13
	auto stg13__lp_2_m_stg13_ld25__p__1_rp__c______lp_stg13_ld26__p___m_1_rp__value = stg13_stg13_ld25_merged376_read_bundle_read(stg13/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg13_ld25_cu375(stg13__lp_2_m_stg13_ld25__p__1_rp__c______lp_stg13_ld26__p___m_1_rp__value);
	// Produce: stg13_to_gp_724
	stg13_to_gp_724.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg12_to_gp_620_ld86_stg13_0_stg13_ld26_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg12_to_gp_620, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg13_to_gp_724) {

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

// schedule: { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541; stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540; stg13_ld25_merged376[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
//   { stg12_to_gp_620_ld85_merged481[d0 = 0, d1, d2] -> [0, 26 + d1, 13 + d2, 41] : 0 <= d1 <= 1923 and 0 <= d2 <= 541 }
// Condition for stg12_to_gp_620_ld85_merged481(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-26 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-13 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg13_1_merged425[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 42] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
// Condition for stg13_1_merged425(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg13_ld25_merged376[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 43] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
// Condition for stg13_ld25_merged376(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 28 <= i1 <= 1949 and 14 <= i2 <= 554 and 42 <= i3 <= 43; [0, i1, i2, 41] : 26 <= i1 <= 1949 and 13 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 26; i1 <= 1949; i1++) {
	    for (int i2 = 13; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg12_to_gp_620_ld85_merged481(stg12_to_gp_620 /* buf name */, stg12_FIFO_buf84, 0, ((-26 + 1*i1)), ((-13 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	          // { [i0, i1, i2] : -28 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-28 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg13_1_merged425(stg12_FIFO_buf84 /* buf name */, stg13, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	        // { [i0, i1, i2] : i1 >= 28 and i2 >= 14 }
	          // { [i0, i1, i2] : -28 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-28 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          stg13_ld25_merged376(stg13 /* buf name */, stg13_to_gp_724, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg13_to_gp_724_ld89_merged380(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg13_to_gp_724, stg13_FIFO_buf88_cache& stg13_FIFO_buf88, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_to_gp_724
	auto stg13_to_gp_724__lp_2_m_stg13_to_gp_724_ld89__p__1_rp__c______lp_stg13_to_gp_724_ld90__p___m_1_rp__value = stg13_to_gp_724.read();
	auto compute_result = stg13_to_gp_724_ld89_cu379(stg13_to_gp_724__lp_2_m_stg13_to_gp_724_ld89__p__1_rp__c______lp_stg13_to_gp_724_ld90__p___m_1_rp__value);
	// Produce: stg13_FIFO_buf88
	stg13_FIFO_buf88_stg13_to_gp_724_ld89_merged380_write_bundle_write(/* arg names */compute_result, stg13_FIFO_buf88, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_1_merged428(stg13_FIFO_buf88_cache& stg13_FIFO_buf88, stg14_cache& stg14, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg13_FIFO_buf88
	auto stg13_FIFO_buf88_1_m__lp_2_m_stg14_1__p__1_rp___p__0_c____1_m_stg14_0__p___m_1_value = stg13_FIFO_buf88_stg14_1_merged428_read_bundle_read(stg13_FIFO_buf88/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_1_cu426(stg13_FIFO_buf88_1_m__lp_2_m_stg14_1__p__1_rp___p__0_c____1_m_stg14_0__p___m_1_value);
	// Produce: stg14
	stg14_stg14_1_merged428_write_bundle_write(/* arg names */compute_result, stg14, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg14_ld29_merged433(stg14_cache& stg14, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg14_to_gp_128, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg14
	auto stg14__lp_2_m_stg14_ld29__p__1_rp__c____stg14_ld30_value = stg14_stg14_ld29_merged433_read_bundle_read(stg14/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg14_ld29_cu432(stg14__lp_2_m_stg14_ld29__p__1_rp__c____stg14_ld30_value);
	// Produce: stg14_to_gp_128
	stg14_to_gp_128.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg13_to_gp_724_ld90_stg14_0_stg14_ld30_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg13_to_gp_724, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg14_to_gp_128) {

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

// schedule: { stg14_ld29_merged433[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 539; stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539; stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
//   { stg14_ld29_merged433[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 46] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
// Condition for stg14_ld29_merged433(((((-46 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg14_1_merged428[d0 = 0, d1, d2] -> [0, 30 + d1, 15 + d2, 45] : 0 <= d1 <= 1919 and 0 <= d2 <= 539 }
// Condition for stg14_1_merged428(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-30 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-15 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg13_to_gp_724_ld89_merged380[d0 = 0, d1, d2] -> [0, 28 + d1, 14 + d2, 44] : 0 <= d1 <= 1921 and 0 <= d2 <= 540 }
// Condition for stg13_to_gp_724_ld89_merged380(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-28 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 30 <= i1 <= 1949 and 15 <= i2 <= 554 and 45 <= i3 <= 46; [0, i1, i2, 44] : 28 <= i1 <= 1949 and 14 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 28; i1 <= 1949; i1++) {
	    for (int i2 = 14; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg13_to_gp_724_ld89_merged380(stg13_to_gp_724 /* buf name */, stg13_FIFO_buf88, 0, ((-28 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	          // { [i0, i1, i2] : -30 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-30 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          stg14_1_merged428(stg13_FIFO_buf88 /* buf name */, stg14, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	        // { [i0, i1, i2] : i1 >= 30 and i2 >= 15 }
	          // { [i0, i1, i2] : -30 + i1 >= 0 }
	          // { [i0, i1, i2] : -15 + i2 >= 0 }
	        if ((((((-30 + 1*i1)) >= 0) && (((-15 + 1*i2)) >= 0)))) {
	          stg14_ld29_merged433(stg14 /* buf name */, stg14_to_gp_128, 0, ((-30 + 1*i1)), ((-15 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg0_to_gp_84_ld69_merged449(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg0_to_gp_84, stg0_FIFO_buf68_cache& stg0_FIFO_buf68, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_to_gp_84
	auto stg0_to_gp_84__lp_2_m_stg0_to_gp_84_ld69__p__1_rp__c______lp_stg0_to_gp_84_ld70__p___m_14_rp__value = stg0_to_gp_84.read();
	auto compute_result = stg0_to_gp_84_ld69_cu448(stg0_to_gp_84__lp_2_m_stg0_to_gp_84_ld69__p__1_rp__c______lp_stg0_to_gp_84_ld70__p___m_14_rp__value);
	// Produce: stg0_FIFO_buf68
	stg0_FIFO_buf68_stg0_to_gp_84_ld69_merged449_write_bundle_write(/* arg names */compute_result, stg0_FIFO_buf68, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_1_merged389(stg0_FIFO_buf68_cache& stg0_FIFO_buf68, stg1_cache& stg1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg0_FIFO_buf68
	auto stg0_FIFO_buf68_1_m__lp_2_m_stg1_1__p__1_rp___p__0_c_____1_m__lp_stg1_0__p___m_13_rp___p___m_1_value = stg0_FIFO_buf68_stg1_1_merged389_read_bundle_read(stg0_FIFO_buf68/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_1_cu387(stg0_FIFO_buf68_1_m__lp_2_m_stg1_1__p__1_rp___p__0_c_____1_m__lp_stg1_0__p___m_13_rp___p___m_1_value);
	// Produce: stg1
	stg1_stg1_1_merged389_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_ld9_merged477(stg1_cache& stg1, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg1_to_gp_98, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1__lp_2_m_stg1_ld9__p__1_rp__c______lp_stg1_ld10__p___m_13_rp__value = stg1_stg1_ld9_merged477_read_bundle_read(stg1/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_ld9_cu476(stg1__lp_2_m_stg1_ld9__p__1_rp__c______lp_stg1_ld10__p___m_13_rp__value);
	// Produce: stg1_to_gp_98
	stg1_to_gp_98.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg0_to_gp_84_ld70_stg1_0_stg1_ld10_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg0_to_gp_84, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg1_to_gp_98) {

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

// schedule: { stg1_ld9_merged477[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 552; stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553; stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
//   { stg1_ld9_merged477[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 7] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
// Condition for stg1_ld9_merged477(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg0_to_gp_84_ld69_merged449[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 5] : 0 <= d1 <= 1947 and 0 <= d2 <= 553 }
// Condition for stg0_to_gp_84_ld69_merged449(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg1_1_merged389[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 6] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
// Condition for stg1_1_merged389(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 4 <= i1 <= 1949 and 2 <= i2 <= 554 and 6 <= i3 <= 7; [0, i1, i2, 5] : 2 <= i1 <= 1949 and 0 < i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 2; i1 <= 1949; i1++) {
	    for (int i2 = 1; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg0_to_gp_84_ld69_merged449(stg0_to_gp_84 /* buf name */, stg0_FIFO_buf68, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg1_1_merged389(stg0_FIFO_buf68 /* buf name */, stg1, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	        // { [i0, i1, i2] : i1 >= 4 and i2 >= 2 }
	          // { [i0, i1, i2] : -4 + i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	        if ((((((-4 + 1*i1)) >= 0) && (((-2 + 1*i2)) >= 0)))) {
	          stg1_ld9_merged477(stg1 /* buf name */, stg1_to_gp_98, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void stg1_to_gp_98_ld73_merged441(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg1_to_gp_98, stg1_FIFO_buf72_cache& stg1_FIFO_buf72, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_to_gp_98
	auto stg1_to_gp_98__lp_2_m_stg1_to_gp_98_ld73__p__1_rp__c______lp_stg1_to_gp_98_ld74__p___m_13_rp__value = stg1_to_gp_98.read();
	auto compute_result = stg1_to_gp_98_ld73_cu440(stg1_to_gp_98__lp_2_m_stg1_to_gp_98_ld73__p__1_rp__c______lp_stg1_to_gp_98_ld74__p___m_13_rp__value);
	// Produce: stg1_FIFO_buf72
	stg1_FIFO_buf72_stg1_to_gp_98_ld73_merged441_write_bundle_write(/* arg names */compute_result, stg1_FIFO_buf72, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_1_merged392(stg1_FIFO_buf72_cache& stg1_FIFO_buf72, stg2_cache& stg2, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg1_FIFO_buf72
	auto stg1_FIFO_buf72_1_m__lp_2_m_stg2_1__p__1_rp___p__0_c_____1_m__lp_stg2_0__p___m_12_rp___p___m_1_value = stg1_FIFO_buf72_stg2_1_merged392_read_bundle_read(stg1_FIFO_buf72/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_1_cu390(stg1_FIFO_buf72_1_m__lp_2_m_stg2_1__p__1_rp___p__0_c_____1_m__lp_stg2_0__p___m_12_rp___p___m_1_value);
	// Produce: stg2
	stg2_stg2_1_merged392_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_ld33_merged455(stg2_cache& stg2, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */stg2_to_gp_1032, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2__lp_2_m_stg2_ld33__p__1_rp__c______lp_stg2_ld34__p___m_12_rp__value = stg2_stg2_ld33_merged455_read_bundle_read(stg2/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_ld33_cu454(stg2__lp_2_m_stg2_ld33__p__1_rp__c______lp_stg2_ld34__p___m_12_rp__value);
	// Produce: stg2_to_gp_1032
	stg2_to_gp_1032.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_stg1_to_gp_98_ld74_stg2_0_stg2_ld34_(HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg1_to_gp_98, HWStream<hw_uint<32> >& /* get_args num ports = 2 */stg2_to_gp_1032) {

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

// schedule: { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552; stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551; stg2_ld33_merged455[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
//   { stg1_to_gp_98_ld73_merged441[d0 = 0, d1, d2] -> [0, 4 + d1, 2 + d2, 8] : 0 <= d1 <= 1945 and 0 <= d2 <= 552 }
// Condition for stg1_to_gp_98_ld73_merged441(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-4 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg2_1_merged392[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 9] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
// Condition for stg2_1_merged392(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))
//   { stg2_ld33_merged455[d0 = 0, d1, d2] -> [0, 6 + d1, 3 + d2, 10] : 0 <= d1 <= 1943 and 0 <= d2 <= 551 }
// Condition for stg2_ld33_merged455(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((1949 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((554 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 6 <= i1 <= 1949 and 3 <= i2 <= 554 and 9 <= i3 <= 10; [0, i1, i2, 8] : 4 <= i1 <= 1949 and 2 <= i2 <= 554 }
	// # sets: 1
	for (int i0 = 0; i0 <= 0; i0++) {
	  for (int i1 = 4; i1 <= 1949; i1++) {
	    for (int i2 = 2; i2 <= 554; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          stg1_to_gp_98_ld73_merged441(stg1_to_gp_98 /* buf name */, stg1_FIFO_buf72, 0, ((-4 + 1*i1)), ((-2 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          stg2_1_merged392(stg1_FIFO_buf72 /* buf name */, stg2, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	        // { [i0, i1, i2] : i1 >= 6 and i2 >= 3 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -3 + i2 >= 0 }
	        if ((((((-6 + 1*i1)) >= 0) && (((-3 + 1*i2)) >= 0)))) {
	          stg2_ld33_merged455(stg2 /* buf name */, stg2_to_gp_1032, 0, ((-6 + 1*i1)), ((-3 + 1*i2)));
	        }
	      }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void jacdynl_2_opt(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */jacdynl_2) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacdynl_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  HWStream< hw_uint<32> > in_to_gp_20;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_to_gp_20.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg14_to_gp_128;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg14_to_gp_128.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg2_to_gp_1032;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg2_to_gp_1032.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg3_to_gp_1136;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg3_to_gp_1136.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg4_to_gp_1240;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg4_to_gp_1240.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg5_to_gp_1344;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg5_to_gp_1344.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg6_to_gp_1448;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg6_to_gp_1448.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg7_to_gp_1552;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg7_to_gp_1552.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg8_to_gp_1656;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg8_to_gp_1656.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg9_to_gp_360;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg9_to_gp_360.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg0_to_gp_84;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg0_to_gp_84.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg10_to_gp_412;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg10_to_gp_412.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg11_to_gp_516;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg11_to_gp_516.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg12_to_gp_620;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg12_to_gp_620.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg13_to_gp_724;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg13_to_gp_724.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > stg1_to_gp_98;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=stg1_to_gp_98.values depth=500
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
  Extracted_jacdynl_2_0_stg14_to_gp_128_ld94_(stg14_to_gp_128, jacdynl_2);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacdynl_2_opt_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 2 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */jacdynl_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    jacdynl_2_opt(in_off_chip, jacdynl_2);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_1_merged383[root = 0, in_0, in_1] -> in_off_chip[1 + 2in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 554; in_1_merged383[root = 0, in_0, in_1] -> in_off_chip[2in_1, -15 + in_0] : 0 <= in_0 <= 1949 and 0 <= in_1 <= 554 }
const int in_1_merged383_read_pipe0_num_transfers = 1082250;
  // { jacdynl_2_1_merged431[root = 0, jacdynl_2_0, jacdynl_2_1] -> jacdynl_2[1 + 2jacdynl_2_1, jacdynl_2_0] : 0 <= jacdynl_2_0 <= 1919 and 0 <= jacdynl_2_1 <= 539; jacdynl_2_1_merged431[root = 0, jacdynl_2_0, jacdynl_2_1] -> jacdynl_2[2jacdynl_2_1, jacdynl_2_0] : 0 <= jacdynl_2_0 <= 1919 and 0 <= jacdynl_2_1 <= 539 }
const int jacdynl_2_1_merged431_write_pipe0_num_transfers = 1036800;


extern "C" {

void jacdynl_2_opt_accel(hw_uint<32>* in_1_merged383_read_pipe0, hw_uint<32>* jacdynl_2_1_merged431_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_1_merged383_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacdynl_2_1_merged431_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_1_merged383_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = jacdynl_2_1_merged431_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_1_merged383_read_pipe0_channel;
  static HWStream<hw_uint<32> > jacdynl_2_1_merged431_write_pipe0_channel;

  burst_read<32>(in_1_merged383_read_pipe0, in_1_merged383_read_pipe0_channel, in_1_merged383_read_pipe0_num_transfers*size);

  jacdynl_2_opt_wrapper(in_1_merged383_read_pipe0_channel, jacdynl_2_1_merged431_write_pipe0_channel, size);

  burst_write<32>(jacdynl_2_1_merged431_write_pipe0, jacdynl_2_1_merged431_write_pipe0_channel, jacdynl_2_1_merged431_write_pipe0_num_transfers*size);
}

}
extern "C" {

void jacdynl_2_opt_rdai(HWStream<hw_uint<32> >& in_1_merged383_read_pipe0, HWStream<hw_uint<32> >&  jacdynl_2_1_merged431_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_1_merged383_read_pipe0
#pragma HLS INTERFACE axis register port = jacdynl_2_1_merged431_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  jacdynl_2_opt(in_1_merged383_read_pipe0, jacdynl_2_1_merged431_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

