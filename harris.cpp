#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: harris_compute.h
#include "harris_compute.h"

struct cim_output_stencil_op_hcompute_cim_output_stencil_65_to_cim_output_stencil_op_hcompute_hw_output_stencil_46_cache {
	// RAM Box: {[0, 57], [0, 57]}
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

struct cim_output_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  // # of banks: 1
  cim_output_stencil_op_hcompute_cim_output_stencil_65_to_cim_output_stencil_op_hcompute_hw_output_stencil_46_cache cim_output_stencil_op_hcompute_cim_output_stencil_65_to_cim_output_stencil_op_hcompute_hw_output_stencil_46;
};



inline void cim_output_stencil_op_hcompute_cim_output_stencil_65_write(hw_uint<16>& cim_output_stencil_op_hcompute_cim_output_stencil_65, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  cim_output_stencil.cim_output_stencil_op_hcompute_cim_output_stencil_65_to_cim_output_stencil_op_hcompute_hw_output_stencil_46.push(cim_output_stencil_op_hcompute_cim_output_stencil_65);
}

inline hw_uint<16> cim_output_stencil_op_hcompute_hw_output_stencil_46_select(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_output_stencil_op_hcompute_hw_output_stencil_46 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  // Read schedule : { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  auto value_cim_output_stencil_op_hcompute_cim_output_stencil_65 = cim_output_stencil.cim_output_stencil_op_hcompute_cim_output_stencil_65_to_cim_output_stencil_op_hcompute_hw_output_stencil_46.peek(/* one reader or all rams */ 0);
  return value_cim_output_stencil_op_hcompute_cim_output_stencil_65;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_output_stencil_write
//	cim_output_stencil_op_hcompute_cim_output_stencil_65
inline void cim_output_stencil_op_hcompute_cim_output_stencil_write_bundle_write(hw_uint<16>& op_hcompute_cim_output_stencil_write, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
	hw_uint<16> cim_output_stencil_op_hcompute_cim_output_stencil_65_res = op_hcompute_cim_output_stencil_write.extract<0, 15>();
	cim_output_stencil_op_hcompute_cim_output_stencil_65_write(cim_output_stencil_op_hcompute_cim_output_stencil_65_res, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	cim_output_stencil_op_hcompute_hw_output_stencil_46
inline hw_uint<16> cim_output_stencil_op_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // cim_output_stencil_op_hcompute_hw_output_stencil_46

	hw_uint<16> result;
	hw_uint<16> cim_output_stencil_op_hcompute_hw_output_stencil_46_res = cim_output_stencil_op_hcompute_hw_output_stencil_46_select(cim_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, cim_output_stencil_op_hcompute_hw_output_stencil_46_res);
	return result;
}

struct cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
	// Capacity: 123
	// # of read delays: 9
  // 0, 1, 2, 60, 61, 62, 120, 121, 122
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 57> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 57> f11;
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

	inline hw_uint<16> peek_59() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_60() {
		return f6;
	}

	inline hw_uint<16> peek_61() {
		return f8;
	}

	inline hw_uint<16> peek_62() {
		return f10;
	}

	inline hw_uint<16> peek_119() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_120() {
		return f12;
	}

	inline hw_uint<16> peek_121() {
		return f14;
	}

	inline hw_uint<16> peek_122() {
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
    // cap: 1 reading from capacity: 57
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 57 reading from capacity: 1
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
    // cap: 1 reading from capacity: 57
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 57 reading from capacity: 1
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

struct cim_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
    // { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // # of banks: 1
  cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9_cache cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9;
};



inline void cim_stencil_op_hcompute_cim_stencil_61_write(hw_uint<16>& cim_stencil_op_hcompute_cim_stencil_61, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.push(cim_stencil_op_hcompute_cim_stencil_61);
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_66_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_66 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_122();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_67_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_67 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_61();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_68_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_68 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_121();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_69_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_69 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_120();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_70_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_70 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_62();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_71_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_71 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_60();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_72_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_72 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, -1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_2();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_73_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_73 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_1();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_74_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_cim_output_stencil_74 read pattern: { op_hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_y, 1 + cim_output_s0_x] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  // Read schedule : { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_cim_stencil_op_hcompute_cim_stencil_61 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_61_merged_banks_9.peek_0();
  return value_cim_stencil_op_hcompute_cim_stencil_61;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_output_stencil_read
//	cim_stencil_op_hcompute_cim_output_stencil_66
//	cim_stencil_op_hcompute_cim_output_stencil_67
//	cim_stencil_op_hcompute_cim_output_stencil_68
//	cim_stencil_op_hcompute_cim_output_stencil_69
//	cim_stencil_op_hcompute_cim_output_stencil_70
//	cim_stencil_op_hcompute_cim_output_stencil_71
//	cim_stencil_op_hcompute_cim_output_stencil_72
//	cim_stencil_op_hcompute_cim_output_stencil_73
//	cim_stencil_op_hcompute_cim_output_stencil_74
inline hw_uint<144> cim_stencil_op_hcompute_cim_output_stencil_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_op_hcompute_cim_output_stencil_66
    // cim_stencil_op_hcompute_cim_output_stencil_67
    // cim_stencil_op_hcompute_cim_output_stencil_68
    // cim_stencil_op_hcompute_cim_output_stencil_69
    // cim_stencil_op_hcompute_cim_output_stencil_70
    // cim_stencil_op_hcompute_cim_output_stencil_71
    // cim_stencil_op_hcompute_cim_output_stencil_72
    // cim_stencil_op_hcompute_cim_output_stencil_73
    // cim_stencil_op_hcompute_cim_output_stencil_74

	hw_uint<144> result;
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_66_res = cim_stencil_op_hcompute_cim_output_stencil_66_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<0, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_66_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_67_res = cim_stencil_op_hcompute_cim_output_stencil_67_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<16, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_67_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_68_res = cim_stencil_op_hcompute_cim_output_stencil_68_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<32, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_68_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_69_res = cim_stencil_op_hcompute_cim_output_stencil_69_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<48, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_69_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_70_res = cim_stencil_op_hcompute_cim_output_stencil_70_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<64, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_70_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_71_res = cim_stencil_op_hcompute_cim_output_stencil_71_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<80, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_71_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_72_res = cim_stencil_op_hcompute_cim_output_stencil_72_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<96, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_72_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_73_res = cim_stencil_op_hcompute_cim_output_stencil_73_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<112, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_73_res);
	hw_uint<16> cim_stencil_op_hcompute_cim_output_stencil_74_res = cim_stencil_op_hcompute_cim_output_stencil_74_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<128, 144>(result, cim_stencil_op_hcompute_cim_output_stencil_74_res);
	return result;
}

// op_hcompute_cim_stencil_write
//	cim_stencil_op_hcompute_cim_stencil_61
inline void cim_stencil_op_hcompute_cim_stencil_write_bundle_write(hw_uint<16>& op_hcompute_cim_stencil_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
	hw_uint<16> cim_stencil_op_hcompute_cim_stencil_61_res = op_hcompute_cim_stencil_write.extract<0, 15>();
	cim_stencil_op_hcompute_cim_stencil_61_write(cim_stencil_op_hcompute_cim_stencil_61_res, cim_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
}

struct grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxx_stencil_8_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
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

struct grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxy_stencil_5_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
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

struct grad_x_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_y, lxx_s0_x] : -2 <= lxx_s0_y <= 59 and -2 <= lxx_s0_x <= 59 }
    // { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
  // # of banks: 2
  grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxx_stencil_8_cache grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxx_stencil_8;
  grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxy_stencil_5_cache grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxy_stencil_5;
};



inline void grad_x_stencil_op_hcompute_grad_x_stencil_54_write(hw_uint<16>& grad_x_stencil_op_hcompute_grad_x_stencil_54, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  grad_x_stencil.grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxx_stencil_8.push(grad_x_stencil_op_hcompute_grad_x_stencil_54);
  grad_x_stencil.grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxy_stencil_5.push(grad_x_stencil_op_hcompute_grad_x_stencil_54);
}

inline hw_uint<16> grad_x_stencil_op_hcompute_lxx_stencil_8_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_stencil_op_hcompute_lxx_stencil_8 read pattern: { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_y, lxx_s0_x] : -2 <= lxx_s0_y <= 59 and -2 <= lxx_s0_x <= 59 }
  // Read schedule : { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_grad_x_stencil_op_hcompute_grad_x_stencil_54 = grad_x_stencil.grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxx_stencil_8.peek(/* one reader or all rams */ 0);
  return value_grad_x_stencil_op_hcompute_grad_x_stencil_54;
  return 0;
}

inline hw_uint<16> grad_x_stencil_op_hcompute_lxy_stencil_5_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_stencil_op_hcompute_lxy_stencil_5 read pattern: { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
  // Read schedule : { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_grad_x_stencil_op_hcompute_grad_x_stencil_54 = grad_x_stencil.grad_x_stencil_op_hcompute_grad_x_stencil_54_to_grad_x_stencil_op_hcompute_lxy_stencil_5.peek(/* one reader or all rams */ 0);
  return value_grad_x_stencil_op_hcompute_grad_x_stencil_54;
  return 0;
}

// # of bundles = 3
// op_hcompute_grad_x_stencil_write
//	grad_x_stencil_op_hcompute_grad_x_stencil_54
inline void grad_x_stencil_op_hcompute_grad_x_stencil_write_bundle_write(hw_uint<16>& op_hcompute_grad_x_stencil_write, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
	hw_uint<16> grad_x_stencil_op_hcompute_grad_x_stencil_54_res = op_hcompute_grad_x_stencil_write.extract<0, 15>();
	grad_x_stencil_op_hcompute_grad_x_stencil_54_write(grad_x_stencil_op_hcompute_grad_x_stencil_54_res, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
}

// op_hcompute_lxx_stencil_read
//	grad_x_stencil_op_hcompute_lxx_stencil_8
inline hw_uint<16> grad_x_stencil_op_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_op_hcompute_lxx_stencil_8

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_op_hcompute_lxx_stencil_8_res = grad_x_stencil_op_hcompute_lxx_stencil_8_select(grad_x_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_op_hcompute_lxx_stencil_8_res);
	return result;
}

// op_hcompute_lxy_stencil_read
//	grad_x_stencil_op_hcompute_lxy_stencil_5
inline hw_uint<16> grad_x_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_op_hcompute_lxy_stencil_5

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_op_hcompute_lxy_stencil_5_res = grad_x_stencil_op_hcompute_lxy_stencil_5_select(grad_x_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_op_hcompute_lxy_stencil_5_res);
	return result;
}

struct grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lxy_stencil_6_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
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

struct grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lyy_stencil_3_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
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

struct grad_y_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
    // { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_y, lyy_s0_x] : -2 <= lyy_s0_y <= 59 and -2 <= lyy_s0_x <= 59 }
  // # of banks: 2
  grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lxy_stencil_6_cache grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lxy_stencil_6;
  grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lyy_stencil_3_cache grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lyy_stencil_3;
};



inline void grad_y_stencil_op_hcompute_grad_y_stencil_47_write(hw_uint<16>& grad_y_stencil_op_hcompute_grad_y_stencil_47, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  grad_y_stencil.grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lxy_stencil_6.push(grad_y_stencil_op_hcompute_grad_y_stencil_47);
  grad_y_stencil.grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lyy_stencil_3.push(grad_y_stencil_op_hcompute_grad_y_stencil_47);
}

inline hw_uint<16> grad_y_stencil_op_hcompute_lxy_stencil_6_select(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_stencil_op_hcompute_lxy_stencil_6 read pattern: { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_y, lxy_s0_x] : -2 <= lxy_s0_y <= 59 and -2 <= lxy_s0_x <= 59 }
  // Read schedule : { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_grad_y_stencil_op_hcompute_grad_y_stencil_47 = grad_y_stencil.grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lxy_stencil_6.peek(/* one reader or all rams */ 0);
  return value_grad_y_stencil_op_hcompute_grad_y_stencil_47;
  return 0;
}

inline hw_uint<16> grad_y_stencil_op_hcompute_lyy_stencil_3_select(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_stencil_op_hcompute_lyy_stencil_3 read pattern: { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_y, lyy_s0_x] : -2 <= lyy_s0_y <= 59 and -2 <= lyy_s0_x <= 59 }
  // Read schedule : { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_grad_y_stencil_op_hcompute_grad_y_stencil_47 = grad_y_stencil.grad_y_stencil_op_hcompute_grad_y_stencil_47_to_grad_y_stencil_op_hcompute_lyy_stencil_3.peek(/* one reader or all rams */ 0);
  return value_grad_y_stencil_op_hcompute_grad_y_stencil_47;
  return 0;
}

// # of bundles = 3
// op_hcompute_grad_y_stencil_write
//	grad_y_stencil_op_hcompute_grad_y_stencil_47
inline void grad_y_stencil_op_hcompute_grad_y_stencil_write_bundle_write(hw_uint<16>& op_hcompute_grad_y_stencil_write, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
	hw_uint<16> grad_y_stencil_op_hcompute_grad_y_stencil_47_res = op_hcompute_grad_y_stencil_write.extract<0, 15>();
	grad_y_stencil_op_hcompute_grad_y_stencil_47_write(grad_y_stencil_op_hcompute_grad_y_stencil_47_res, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
}

// op_hcompute_lxy_stencil_read
//	grad_y_stencil_op_hcompute_lxy_stencil_6
inline hw_uint<16> grad_y_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_op_hcompute_lxy_stencil_6

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_op_hcompute_lxy_stencil_6_res = grad_y_stencil_op_hcompute_lxy_stencil_6_select(grad_y_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_op_hcompute_lxy_stencil_6_res);
	return result;
}

// op_hcompute_lyy_stencil_read
//	grad_y_stencil_op_hcompute_lyy_stencil_3
inline hw_uint<16> grad_y_stencil_op_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_op_hcompute_lyy_stencil_3

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_op_hcompute_lyy_stencil_3_res = grad_y_stencil_op_hcompute_lyy_stencil_3_select(grad_y_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_op_hcompute_lyy_stencil_3_res);
	return result;
}

struct lgxx_stencil_op_hcompute_lgxx_stencil_1_33_to_lgxx_stencil_op_hcompute_cim_stencil_62_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
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

struct lgxx_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // # of banks: 1
  lgxx_stencil_op_hcompute_lgxx_stencil_1_33_to_lgxx_stencil_op_hcompute_cim_stencil_62_cache lgxx_stencil_op_hcompute_lgxx_stencil_1_33_to_lgxx_stencil_op_hcompute_cim_stencil_62;
};



inline void lgxx_stencil_op_hcompute_lgxx_stencil_1_33_write(hw_uint<16>& lgxx_stencil_op_hcompute_lgxx_stencil_1_33, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_op_hcompute_lgxx_stencil_1_33_to_lgxx_stencil_op_hcompute_cim_stencil_62.push(lgxx_stencil_op_hcompute_lgxx_stencil_1_33);
}

inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_62_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxx_stencil_op_hcompute_cim_stencil_62 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // Read schedule : { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_lgxx_stencil_op_hcompute_lgxx_stencil_1_33 = lgxx_stencil.lgxx_stencil_op_hcompute_lgxx_stencil_1_33_to_lgxx_stencil_op_hcompute_cim_stencil_62.peek(/* one reader or all rams */ 0);
  return value_lgxx_stencil_op_hcompute_lgxx_stencil_1_33;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_stencil_read
//	lgxx_stencil_op_hcompute_cim_stencil_62
inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_op_hcompute_cim_stencil_62

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_62_res = lgxx_stencil_op_hcompute_cim_stencil_62_select(lgxx_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_op_hcompute_cim_stencil_62_res);
	return result;
}

// op_hcompute_lgxx_stencil_1_write
//	lgxx_stencil_op_hcompute_lgxx_stencil_1_33
inline void lgxx_stencil_op_hcompute_lgxx_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_1_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_op_hcompute_lgxx_stencil_1_33_res = op_hcompute_lgxx_stencil_1_write.extract<0, 15>();
	lgxx_stencil_op_hcompute_lgxx_stencil_1_33_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_33_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
}

struct lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
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

struct lgxx_stencil_clkwrk_dsa0_cache {
  // Reader addrs...
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil_clkwrk_dsa0[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // # of banks: 1
  lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_cache lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34;
};



inline void lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_write(hw_uint<16>& lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44, lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
  lgxx_stencil_clkwrk_dsa0.lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34.push(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44);
}

inline hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_select(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil_clkwrk_dsa0[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lgxx_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44 = lgxx_stencil_clkwrk_dsa0.lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_to_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34.peek(/* one reader or all rams */ 0);
  return value_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxx_stencil_1_read
//	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34
inline hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_res = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_select(lgxx_stencil_clkwrk_dsa0, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_34_res);
	return result;
}

// op_hcompute_lgxx_stencil_write
//	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44
inline void lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_write, lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_res = op_hcompute_lgxx_stencil_write.extract<0, 15>();
	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_44_res, lgxx_stencil_clkwrk_dsa0, root, lgxx_s0_y, lgxx_s0_x, dynamic_address);
}

struct lgxy_stencil_op_hcompute_lgxy_stencil_1_21_to_lgxy_stencil_op_hcompute_cim_stencil_63_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
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

struct lgxy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // # of banks: 1
  lgxy_stencil_op_hcompute_lgxy_stencil_1_21_to_lgxy_stencil_op_hcompute_cim_stencil_63_cache lgxy_stencil_op_hcompute_lgxy_stencil_1_21_to_lgxy_stencil_op_hcompute_cim_stencil_63;
};



inline void lgxy_stencil_op_hcompute_lgxy_stencil_1_21_write(hw_uint<16>& lgxy_stencil_op_hcompute_lgxy_stencil_1_21, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_op_hcompute_lgxy_stencil_1_21_to_lgxy_stencil_op_hcompute_cim_stencil_63.push(lgxy_stencil_op_hcompute_lgxy_stencil_1_21);
}

inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_63_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxy_stencil_op_hcompute_cim_stencil_63 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // Read schedule : { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_lgxy_stencil_op_hcompute_lgxy_stencil_1_21 = lgxy_stencil.lgxy_stencil_op_hcompute_lgxy_stencil_1_21_to_lgxy_stencil_op_hcompute_cim_stencil_63.peek(/* one reader or all rams */ 0);
  return value_lgxy_stencil_op_hcompute_lgxy_stencil_1_21;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_stencil_read
//	lgxy_stencil_op_hcompute_cim_stencil_63
inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_op_hcompute_cim_stencil_63

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_63_res = lgxy_stencil_op_hcompute_cim_stencil_63_select(lgxy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_op_hcompute_cim_stencil_63_res);
	return result;
}

// op_hcompute_lgxy_stencil_1_write
//	lgxy_stencil_op_hcompute_lgxy_stencil_1_21
inline void lgxy_stencil_op_hcompute_lgxy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_1_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_op_hcompute_lgxy_stencil_1_21_res = op_hcompute_lgxy_stencil_1_write.extract<0, 15>();
	lgxy_stencil_op_hcompute_lgxy_stencil_1_21_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_21_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
}

struct lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
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

struct lgxy_stencil_clkwrk_dsa1_cache {
  // Reader addrs...
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil_clkwrk_dsa1[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // # of banks: 1
  lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_cache lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22;
};



inline void lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_write(hw_uint<16>& lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32, lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
  lgxy_stencil_clkwrk_dsa1.lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22.push(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32);
}

inline hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_select(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil_clkwrk_dsa1[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lgxy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32 = lgxy_stencil_clkwrk_dsa1.lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_to_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22.peek(/* one reader or all rams */ 0);
  return value_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxy_stencil_1_read
//	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22
inline hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_res = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_select(lgxy_stencil_clkwrk_dsa1, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_22_res);
	return result;
}

// op_hcompute_lgxy_stencil_write
//	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32
inline void lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_write, lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_res = op_hcompute_lgxy_stencil_write.extract<0, 15>();
	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_32_res, lgxy_stencil_clkwrk_dsa1, root, lgxy_s0_y, lgxy_s0_x, dynamic_address);
}

struct lgyy_stencil_op_hcompute_lgyy_stencil_1_9_to_lgyy_stencil_op_hcompute_cim_stencil_64_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
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

struct lgyy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // # of banks: 1
  lgyy_stencil_op_hcompute_lgyy_stencil_1_9_to_lgyy_stencil_op_hcompute_cim_stencil_64_cache lgyy_stencil_op_hcompute_lgyy_stencil_1_9_to_lgyy_stencil_op_hcompute_cim_stencil_64;
};



inline void lgyy_stencil_op_hcompute_lgyy_stencil_1_9_write(hw_uint<16>& lgyy_stencil_op_hcompute_lgyy_stencil_1_9, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_op_hcompute_lgyy_stencil_1_9_to_lgyy_stencil_op_hcompute_cim_stencil_64.push(lgyy_stencil_op_hcompute_lgyy_stencil_1_9);
}

inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_64_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgyy_stencil_op_hcompute_cim_stencil_64 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_y, cim_s0_x] : -1 <= cim_s0_y <= 58 and -1 <= cim_s0_x <= 58 }
  // Read schedule : { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_lgyy_stencil_op_hcompute_lgyy_stencil_1_9 = lgyy_stencil.lgyy_stencil_op_hcompute_lgyy_stencil_1_9_to_lgyy_stencil_op_hcompute_cim_stencil_64.peek(/* one reader or all rams */ 0);
  return value_lgyy_stencil_op_hcompute_lgyy_stencil_1_9;
  return 0;
}

// # of bundles = 2
// op_hcompute_cim_stencil_read
//	lgyy_stencil_op_hcompute_cim_stencil_64
inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_op_hcompute_cim_stencil_64

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_64_res = lgyy_stencil_op_hcompute_cim_stencil_64_select(lgyy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_op_hcompute_cim_stencil_64_res);
	return result;
}

// op_hcompute_lgyy_stencil_1_write
//	lgyy_stencil_op_hcompute_lgyy_stencil_1_9
inline void lgyy_stencil_op_hcompute_lgyy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_1_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_op_hcompute_lgyy_stencil_1_9_res = op_hcompute_lgyy_stencil_1_write.extract<0, 15>();
	lgyy_stencil_op_hcompute_lgyy_stencil_1_9_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_9_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
}

struct lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_cache {
	// RAM Box: {[-1, 58], [-1, 58]}
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

struct lgyy_stencil_clkwrk_dsa2_cache {
  // Reader addrs...
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil_clkwrk_dsa2[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // # of banks: 1
  lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_cache lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10;
};



inline void lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_write(hw_uint<16>& lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20, lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
  lgyy_stencil_clkwrk_dsa2.lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10.push(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20);
}

inline hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_select(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil_clkwrk_dsa2[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lgyy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 10] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  auto value_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20 = lgyy_stencil_clkwrk_dsa2.lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_to_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10.peek(/* one reader or all rams */ 0);
  return value_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgyy_stencil_1_read
//	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10
inline hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_res = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_select(lgyy_stencil_clkwrk_dsa2, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_10_res);
	return result;
}

// op_hcompute_lgyy_stencil_write
//	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20
inline void lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_write, lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_res = op_hcompute_lgyy_stencil_write.extract<0, 15>();
	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_20_res, lgyy_stencil_clkwrk_dsa2, root, lgyy_s0_y, lgyy_s0_x, dynamic_address);
}

struct lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 127
	// # of read delays: 9
  // 0, 1, 2, 62, 63, 64, 124, 125, 126
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 59> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 59> f11;
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

	inline hw_uint<16> peek_61() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_62() {
		return f6;
	}

	inline hw_uint<16> peek_63() {
		return f8;
	}

	inline hw_uint<16> peek_64() {
		return f10;
	}

	inline hw_uint<16> peek_123() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_124() {
		return f12;
	}

	inline hw_uint<16> peek_125() {
		return f14;
	}

	inline hw_uint<16> peek_126() {
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
    // cap: 1 reading from capacity: 59
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 59 reading from capacity: 1
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
    // cap: 1 reading from capacity: 59
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 59 reading from capacity: 1
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

struct lxx_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
    // { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // # of banks: 1
  lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9_cache lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9;
};



inline void lxx_stencil_op_hcompute_lxx_stencil_7_write(hw_uint<16>& lxx_stencil_op_hcompute_lxx_stencil_7, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.push(lxx_stencil_op_hcompute_lxx_stencil_7);
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_35_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_35 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_126();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_36_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_36 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_125();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_37_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_37 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_124();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_38_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_38 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_64();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_39_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_39 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_63();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_40_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_40 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_62();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_41_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_41 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, -1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_2();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_42_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_42 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_0();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_43_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_1_43 read pattern: { op_hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_y, lgxx_s1_x] : -1 <= lgxx_s1_y <= 58 and -1 <= lgxx_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_7 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_7_merged_banks_9.peek_1();
  return value_lxx_stencil_op_hcompute_lxx_stencil_7;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxx_stencil_1_read
//	lxx_stencil_op_hcompute_lgxx_stencil_1_35
//	lxx_stencil_op_hcompute_lgxx_stencil_1_36
//	lxx_stencil_op_hcompute_lgxx_stencil_1_37
//	lxx_stencil_op_hcompute_lgxx_stencil_1_38
//	lxx_stencil_op_hcompute_lgxx_stencil_1_39
//	lxx_stencil_op_hcompute_lgxx_stencil_1_40
//	lxx_stencil_op_hcompute_lgxx_stencil_1_41
//	lxx_stencil_op_hcompute_lgxx_stencil_1_42
//	lxx_stencil_op_hcompute_lgxx_stencil_1_43
inline hw_uint<144> lxx_stencil_op_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_op_hcompute_lgxx_stencil_1_35
    // lxx_stencil_op_hcompute_lgxx_stencil_1_36
    // lxx_stencil_op_hcompute_lgxx_stencil_1_37
    // lxx_stencil_op_hcompute_lgxx_stencil_1_38
    // lxx_stencil_op_hcompute_lgxx_stencil_1_39
    // lxx_stencil_op_hcompute_lgxx_stencil_1_40
    // lxx_stencil_op_hcompute_lgxx_stencil_1_41
    // lxx_stencil_op_hcompute_lgxx_stencil_1_42
    // lxx_stencil_op_hcompute_lgxx_stencil_1_43

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_35_res = lxx_stencil_op_hcompute_lgxx_stencil_1_35_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_35_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_36_res = lxx_stencil_op_hcompute_lgxx_stencil_1_36_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_36_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_37_res = lxx_stencil_op_hcompute_lgxx_stencil_1_37_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_37_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_38_res = lxx_stencil_op_hcompute_lgxx_stencil_1_38_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_38_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_39_res = lxx_stencil_op_hcompute_lgxx_stencil_1_39_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_39_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_40_res = lxx_stencil_op_hcompute_lgxx_stencil_1_40_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_40_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_41_res = lxx_stencil_op_hcompute_lgxx_stencil_1_41_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_41_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_42_res = lxx_stencil_op_hcompute_lgxx_stencil_1_42_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_42_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_1_43_res = lxx_stencil_op_hcompute_lgxx_stencil_1_43_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_1_43_res);
	return result;
}

// op_hcompute_lxx_stencil_write
//	lxx_stencil_op_hcompute_lxx_stencil_7
inline void lxx_stencil_op_hcompute_lxx_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lxx_stencil_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_op_hcompute_lxx_stencil_7_res = op_hcompute_lxx_stencil_write.extract<0, 15>();
	lxx_stencil_op_hcompute_lxx_stencil_7_write(lxx_stencil_op_hcompute_lxx_stencil_7_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
}

struct lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 127
	// # of read delays: 9
  // 0, 1, 2, 62, 63, 64, 124, 125, 126
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 59> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 59> f11;
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

	inline hw_uint<16> peek_61() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_62() {
		return f6;
	}

	inline hw_uint<16> peek_63() {
		return f8;
	}

	inline hw_uint<16> peek_64() {
		return f10;
	}

	inline hw_uint<16> peek_123() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_124() {
		return f12;
	}

	inline hw_uint<16> peek_125() {
		return f14;
	}

	inline hw_uint<16> peek_126() {
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
    // cap: 1 reading from capacity: 59
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 59 reading from capacity: 1
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
    // cap: 1 reading from capacity: 59
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 59 reading from capacity: 1
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

struct lxy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
    // { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // # of banks: 1
  lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9_cache lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9;
};



inline void lxy_stencil_op_hcompute_lxy_stencil_4_write(hw_uint<16>& lxy_stencil_op_hcompute_lxy_stencil_4, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.push(lxy_stencil_op_hcompute_lxy_stencil_4);
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_23_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_23 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_126();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_24_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_24 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_125();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_25_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_25 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_124();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_26_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_26 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_64();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_27_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_27 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_63();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_28_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_28 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_62();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_29_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_29 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, -1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_2();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_30_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_30 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_0();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_31_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_1_31 read pattern: { op_hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_y, lgxy_s1_x] : -1 <= lgxy_s1_y <= 58 and -1 <= lgxy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_4_merged_banks_9.peek_1();
  return value_lxy_stencil_op_hcompute_lxy_stencil_4;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgxy_stencil_1_read
//	lxy_stencil_op_hcompute_lgxy_stencil_1_23
//	lxy_stencil_op_hcompute_lgxy_stencil_1_24
//	lxy_stencil_op_hcompute_lgxy_stencil_1_25
//	lxy_stencil_op_hcompute_lgxy_stencil_1_26
//	lxy_stencil_op_hcompute_lgxy_stencil_1_27
//	lxy_stencil_op_hcompute_lgxy_stencil_1_28
//	lxy_stencil_op_hcompute_lgxy_stencil_1_29
//	lxy_stencil_op_hcompute_lgxy_stencil_1_30
//	lxy_stencil_op_hcompute_lgxy_stencil_1_31
inline hw_uint<144> lxy_stencil_op_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_op_hcompute_lgxy_stencil_1_23
    // lxy_stencil_op_hcompute_lgxy_stencil_1_24
    // lxy_stencil_op_hcompute_lgxy_stencil_1_25
    // lxy_stencil_op_hcompute_lgxy_stencil_1_26
    // lxy_stencil_op_hcompute_lgxy_stencil_1_27
    // lxy_stencil_op_hcompute_lgxy_stencil_1_28
    // lxy_stencil_op_hcompute_lgxy_stencil_1_29
    // lxy_stencil_op_hcompute_lgxy_stencil_1_30
    // lxy_stencil_op_hcompute_lgxy_stencil_1_31

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_23_res = lxy_stencil_op_hcompute_lgxy_stencil_1_23_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_23_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_24_res = lxy_stencil_op_hcompute_lgxy_stencil_1_24_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_24_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_25_res = lxy_stencil_op_hcompute_lgxy_stencil_1_25_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_25_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_26_res = lxy_stencil_op_hcompute_lgxy_stencil_1_26_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_26_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_27_res = lxy_stencil_op_hcompute_lgxy_stencil_1_27_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_27_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_28_res = lxy_stencil_op_hcompute_lgxy_stencil_1_28_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_28_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_29_res = lxy_stencil_op_hcompute_lgxy_stencil_1_29_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_29_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_30_res = lxy_stencil_op_hcompute_lgxy_stencil_1_30_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_30_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_1_31_res = lxy_stencil_op_hcompute_lgxy_stencil_1_31_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_1_31_res);
	return result;
}

// op_hcompute_lxy_stencil_write
//	lxy_stencil_op_hcompute_lxy_stencil_4
inline void lxy_stencil_op_hcompute_lxy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lxy_stencil_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_op_hcompute_lxy_stencil_4_res = op_hcompute_lxy_stencil_write.extract<0, 15>();
	lxy_stencil_op_hcompute_lxy_stencil_4_write(lxy_stencil_op_hcompute_lxy_stencil_4_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
}

struct lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_cache {
	// RAM Box: {[-2, 59], [-2, 59]}
	// Capacity: 127
	// # of read delays: 9
  // 0, 1, 2, 62, 63, 64, 124, 125, 126
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 59> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 59> f11;
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

	inline hw_uint<16> peek_61() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_62() {
		return f6;
	}

	inline hw_uint<16> peek_63() {
		return f8;
	}

	inline hw_uint<16> peek_64() {
		return f10;
	}

	inline hw_uint<16> peek_123() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f11.back();
	}

	inline hw_uint<16> peek_124() {
		return f12;
	}

	inline hw_uint<16> peek_125() {
		return f14;
	}

	inline hw_uint<16> peek_126() {
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
    // cap: 1 reading from capacity: 59
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 59 reading from capacity: 1
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
    // cap: 1 reading from capacity: 59
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 59 reading from capacity: 1
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

struct lyy_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
    // { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // # of banks: 1
  lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_cache lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9;
};



inline void lyy_stencil_op_hcompute_lyy_stencil_2_write(hw_uint<16>& lyy_stencil_op_hcompute_lyy_stencil_2, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.push(lyy_stencil_op_hcompute_lyy_stencil_2);
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_11_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_11 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_126();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_12_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_12 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_125();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_13_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_13 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_124();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_14_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_14 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_64();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_15_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_15 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_63();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_16_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_16 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_62();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_17_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_17 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, -1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_2();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_18_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_18 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_0();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_19_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_1_19 read pattern: { op_hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_y, lgyy_s1_x] : -1 <= lgyy_s1_y <= 58 and -1 <= lgyy_s1_x <= 58 }
  // Read schedule : { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_1();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

// # of bundles = 2
// op_hcompute_lgyy_stencil_1_read
//	lyy_stencil_op_hcompute_lgyy_stencil_1_11
//	lyy_stencil_op_hcompute_lgyy_stencil_1_12
//	lyy_stencil_op_hcompute_lgyy_stencil_1_13
//	lyy_stencil_op_hcompute_lgyy_stencil_1_14
//	lyy_stencil_op_hcompute_lgyy_stencil_1_15
//	lyy_stencil_op_hcompute_lgyy_stencil_1_16
//	lyy_stencil_op_hcompute_lgyy_stencil_1_17
//	lyy_stencil_op_hcompute_lgyy_stencil_1_18
//	lyy_stencil_op_hcompute_lgyy_stencil_1_19
inline hw_uint<144> lyy_stencil_op_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_op_hcompute_lgyy_stencil_1_11
    // lyy_stencil_op_hcompute_lgyy_stencil_1_12
    // lyy_stencil_op_hcompute_lgyy_stencil_1_13
    // lyy_stencil_op_hcompute_lgyy_stencil_1_14
    // lyy_stencil_op_hcompute_lgyy_stencil_1_15
    // lyy_stencil_op_hcompute_lgyy_stencil_1_16
    // lyy_stencil_op_hcompute_lgyy_stencil_1_17
    // lyy_stencil_op_hcompute_lgyy_stencil_1_18
    // lyy_stencil_op_hcompute_lgyy_stencil_1_19

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_11_res = lyy_stencil_op_hcompute_lgyy_stencil_1_11_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_11_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_12_res = lyy_stencil_op_hcompute_lgyy_stencil_1_12_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_12_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_13_res = lyy_stencil_op_hcompute_lgyy_stencil_1_13_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_13_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_14_res = lyy_stencil_op_hcompute_lgyy_stencil_1_14_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_14_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_15_res = lyy_stencil_op_hcompute_lgyy_stencil_1_15_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_15_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_16_res = lyy_stencil_op_hcompute_lgyy_stencil_1_16_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_16_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_17_res = lyy_stencil_op_hcompute_lgyy_stencil_1_17_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_17_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_18_res = lyy_stencil_op_hcompute_lgyy_stencil_1_18_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_18_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_1_19_res = lyy_stencil_op_hcompute_lgyy_stencil_1_19_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_1_19_res);
	return result;
}

// op_hcompute_lyy_stencil_write
//	lyy_stencil_op_hcompute_lyy_stencil_2
inline void lyy_stencil_op_hcompute_lyy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lyy_stencil_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_op_hcompute_lyy_stencil_2_res = op_hcompute_lyy_stencil_write.extract<0, 15>();
	lyy_stencil_op_hcompute_lyy_stencil_2_write(lyy_stencil_op_hcompute_lyy_stencil_2_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
}

struct padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12_cache {
	// RAM Box: {[-3, 60], [-3, 60]}
	// Capacity: 131
	// # of read delays: 8
  // 0, 1, 2, 64, 66, 128, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
	hw_uint<16> f6;
	hw_uint<16> f7;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 61> f9;
	hw_uint<16> f10;
	hw_uint<16> f12;
	hw_uint<16> f14;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_2() {
		return f4;
	}

	inline hw_uint<16> peek_63() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_64() {
		return f6;
	}

	inline hw_uint<16> peek_65() {
		return f7;
	}

	inline hw_uint<16> peek_66() {
		return f8;
	}

	inline hw_uint<16> peek_127() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_128() {
		return f10;
	}

	inline hw_uint<16> peek_129() {
		return f12;
	}

	inline hw_uint<16> peek_130() {
		return f14;
	}



	inline void push(const hw_uint<16> value) {
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
    // cap: 1 reading from capacity: 61
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 61 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f7;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f7 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 61 reading from capacity: 1
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

struct padded16_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
    // { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // # of banks: 1
  padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12_cache padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12;
};



inline void padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_write(hw_uint<16>& padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0, padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int padded16_global_wrapper_s0_y, int padded16_global_wrapper_s0_x, int dynamic_address) {
  padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.push(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0);
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_128();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_0();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, 1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_64();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_130();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_66();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60 read pattern: { op_hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_global_wrapper_stencil[1 + grad_x_s0_y, -1 + grad_x_s0_x] : -2 <= grad_x_s0_y <= 59 and -2 <= grad_x_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_2();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_130();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_129();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[-1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_128();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, -1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_2();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, 1 + grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_0();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

inline hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_select(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53 read pattern: { op_hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_global_wrapper_stencil[1 + grad_y_s0_y, grad_y_s0_x] : -2 <= grad_y_s0_y <= 59 and -2 <= grad_y_s0_x <= 59 }
  // Read schedule : { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
  // Write schedule: { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
  auto value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0 = padded16_global_wrapper_stencil.padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_merged_banks_12.peek_1();
  return value_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0;
  return 0;
}

// # of bundles = 3
// op_hcompute_grad_x_stencil_read
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59
//	padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60
inline hw_uint<96> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_bundle_read(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59
    // padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60

	hw_uint<96> result;
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_55_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_56_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_57_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_58_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_59_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_res = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_select(padded16_global_wrapper_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_60_res);
	return result;
}

// op_hcompute_grad_y_stencil_read
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52
//	padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53
inline hw_uint<96> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_bundle_read(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52
    // padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53

	hw_uint<96> result;
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_48_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_49_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_50_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_51_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_52_res);
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_res = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_select(padded16_global_wrapper_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_53_res);
	return result;
}

// op_hcompute_padded16_global_wrapper_stencil_write
//	padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0
inline void padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_padded16_global_wrapper_stencil_write, padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int padded16_global_wrapper_s0_y, int padded16_global_wrapper_s0_x, int dynamic_address) {
	hw_uint<16> padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_res = op_hcompute_padded16_global_wrapper_stencil_write.extract<0, 15>();
	padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_0_res, padded16_global_wrapper_stencil, root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x, dynamic_address);
}

// Total re-use buffer capacity: 10080 bits


// Operation logic
inline void op_hcompute_padded16_global_wrapper_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */padded16_stencil, padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, int root, int padded16_global_wrapper_s0_y, int padded16_global_wrapper_s0_x) {
  // Dynamic address computation

	// Consume: padded16_stencil
	auto padded16_stencil_padded16_global_wrapper_s0_y_c__padded16_global_wrapper_s0_x_value = padded16_stencil.read();
	auto compute_result = hcompute_padded16_global_wrapper_stencil(padded16_stencil_padded16_global_wrapper_s0_y_c__padded16_global_wrapper_s0_x_value);
	// Produce: padded16_global_wrapper_stencil
	padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, padded16_global_wrapper_stencil, root, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_x_stencil(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x) {
  // Dynamic address computation

	// Consume: padded16_global_wrapper_stencil
	auto padded16_global_wrapper_stencil__lp_grad_x_s0_y__p___m_1_rp__c___lp_grad_x_s0_x__p__1_rp__value = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_bundle_read(padded16_global_wrapper_stencil/* source_delay */, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_grad_x_stencil(padded16_global_wrapper_stencil__lp_grad_x_s0_y__p___m_1_rp__c___lp_grad_x_s0_x__p__1_rp__value);
	// Produce: grad_x_stencil
	grad_x_stencil_op_hcompute_grad_x_stencil_write_bundle_write(/* arg names */compute_result, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lxx_stencil(grad_x_stencil_cache& grad_x_stencil, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxx_s0_y_c__lxx_s0_x_value = grad_x_stencil_op_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lxx_stencil(grad_x_stencil_lxx_s0_y_c__lxx_s0_x_value);
	// Produce: lxx_stencil
	lxx_stencil_op_hcompute_lxx_stencil_write_bundle_write(/* arg names */compute_result, lxx_stencil, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxx_stencil(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, int root, int lgxx_s0_y, int lgxx_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil();
	// Produce: lgxx_stencil_clkwrk_dsa0
	lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_bundle_write(/* arg names */compute_result, lgxx_stencil_clkwrk_dsa0, root, lgxx_s0_y, lgxx_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa0_cache& lgxx_stencil_clkwrk_dsa0, lxx_stencil_cache& lxx_stencil, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil_clkwrk_dsa0
	auto lgxx_stencil_clkwrk_dsa0_lgxx_s1_y_c__lgxx_s1_x_value = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_clkwrk_dsa0/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lxx_stencil
	auto lxx_stencil__lp_lgxx_s1_y__p___m_1_rp__c___lp_lgxx_s1_x__p___m_1_rp__value = lxx_stencil_op_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa0_lgxx_s1_y_c__lgxx_s1_x_value, lxx_stencil__lp_lgxx_s1_y__p___m_1_rp__c___lp_lgxx_s1_x__p___m_1_rp__value);
	// Produce: lgxx_stencil
	lgxx_stencil_op_hcompute_lgxx_stencil_1_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_y_stencil(padded16_global_wrapper_stencil_cache& padded16_global_wrapper_stencil, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x) {
  // Dynamic address computation

	// Consume: padded16_global_wrapper_stencil
	auto padded16_global_wrapper_stencil__lp_grad_y_s0_y__p___m_1_rp__c___lp_grad_y_s0_x__p___m_1_rp__value = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_bundle_read(padded16_global_wrapper_stencil/* source_delay */, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_grad_y_stencil(padded16_global_wrapper_stencil__lp_grad_y_s0_y__p___m_1_rp__c___lp_grad_y_s0_x__p___m_1_rp__value);
	// Produce: grad_y_stencil
	grad_y_stencil_op_hcompute_grad_y_stencil_write_bundle_write(/* arg names */compute_result, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lxy_stencil(grad_x_stencil_cache& grad_x_stencil, grad_y_stencil_cache& grad_y_stencil, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxy_s0_y_c__lxy_s0_x_value = grad_x_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: grad_y_stencil
	auto grad_y_stencil_lxy_s0_y_c__lxy_s0_x_value = grad_y_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lxy_stencil(grad_x_stencil_lxy_s0_y_c__lxy_s0_x_value, grad_y_stencil_lxy_s0_y_c__lxy_s0_x_value);
	// Produce: lxy_stencil
	lxy_stencil_op_hcompute_lxy_stencil_write_bundle_write(/* arg names */compute_result, lxy_stencil, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxy_stencil(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, int root, int lgxy_s0_y, int lgxy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxy_stencil();
	// Produce: lgxy_stencil_clkwrk_dsa1
	lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_bundle_write(/* arg names */compute_result, lgxy_stencil_clkwrk_dsa1, root, lgxy_s0_y, lgxy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa1_cache& lgxy_stencil_clkwrk_dsa1, lxy_stencil_cache& lxy_stencil, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x) {
  // Dynamic address computation

	// Consume: lgxy_stencil_clkwrk_dsa1
	auto lgxy_stencil_clkwrk_dsa1_lgxy_s1_y_c__lgxy_s1_x_value = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_clkwrk_dsa1/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lxy_stencil
	auto lxy_stencil__lp_lgxy_s1_y__p___m_1_rp__c___lp_lgxy_s1_x__p___m_1_rp__value = lxy_stencil_op_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa1_lgxy_s1_y_c__lgxy_s1_x_value, lxy_stencil__lp_lgxy_s1_y__p___m_1_rp__c___lp_lgxy_s1_x__p___m_1_rp__value);
	// Produce: lgxy_stencil
	lgxy_stencil_op_hcompute_lgxy_stencil_1_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lyy_stencil(grad_y_stencil_cache& grad_y_stencil, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x) {
  // Dynamic address computation

	// Consume: grad_y_stencil
	auto grad_y_stencil_lyy_s0_y_c__lyy_s0_x_value = grad_y_stencil_op_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lyy_stencil(grad_y_stencil_lyy_s0_y_c__lyy_s0_x_value);
	// Produce: lyy_stencil
	lyy_stencil_op_hcompute_lyy_stencil_write_bundle_write(/* arg names */compute_result, lyy_stencil, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgyy_stencil(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, int root, int lgyy_s0_y, int lgyy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil();
	// Produce: lgyy_stencil_clkwrk_dsa2
	lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_bundle_write(/* arg names */compute_result, lgyy_stencil_clkwrk_dsa2, root, lgyy_s0_y, lgyy_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa2_cache& lgyy_stencil_clkwrk_dsa2, lyy_stencil_cache& lyy_stencil, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x) {
  // Dynamic address computation

	// Consume: lgyy_stencil_clkwrk_dsa2
	auto lgyy_stencil_clkwrk_dsa2_lgyy_s1_y_c__lgyy_s1_x_value = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_clkwrk_dsa2/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lyy_stencil
	auto lyy_stencil__lp_lgyy_s1_y__p___m_1_rp__c___lp_lgyy_s1_x__p___m_1_rp__value = lyy_stencil_op_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa2_lgyy_s1_y_c__lgyy_s1_x_value, lyy_stencil__lp_lgyy_s1_y__p___m_1_rp__c___lp_lgyy_s1_x__p___m_1_rp__value);
	// Produce: lgyy_stencil
	lgyy_stencil_op_hcompute_lgyy_stencil_1_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_cim_stencil(lgxx_stencil_cache& lgxx_stencil, lgxy_stencil_cache& lgxy_stencil, lgyy_stencil_cache& lgyy_stencil, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil_cim_s0_y_c__cim_s0_x_value = lgxx_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxx_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lgxy_stencil
	auto lgxy_stencil_cim_s0_y_c__cim_s0_x_value = lgxy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lgyy_stencil
	auto lgyy_stencil_cim_s0_y_c__cim_s0_x_value = lgyy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgyy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_cim_stencil(lgxx_stencil_cim_s0_y_c__cim_s0_x_value, lgxy_stencil_cim_s0_y_c__cim_s0_x_value, lgyy_stencil_cim_s0_y_c__cim_s0_x_value);
	// Produce: cim_stencil
	cim_stencil_op_hcompute_cim_stencil_write_bundle_write(/* arg names */compute_result, cim_stencil, root, cim_s0_y, cim_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_cim_output_stencil(cim_stencil_cache& cim_stencil, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x) {
  // Dynamic address computation

	// Consume: cim_stencil
	auto cim_stencil__lp_cim_output_s0_y__p___m_1_rp__c___lp_cim_output_s0_x__p___m_1_rp__value = cim_stencil_op_hcompute_cim_output_stencil_read_bundle_read(cim_stencil/* source_delay */, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_cim_output_stencil(cim_stencil__lp_cim_output_s0_y__p___m_1_rp__c___lp_cim_output_s0_x__p___m_1_rp__value);
	// Produce: cim_output_stencil
	cim_output_stencil_op_hcompute_cim_output_stencil_write_bundle_write(/* arg names */compute_result, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_stencil(cim_output_stencil_cache& cim_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: cim_output_stencil
	auto cim_output_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value = cim_output_stencil_op_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_stencil(cim_output_stencil_hw_output_s0_y_yi_c__hw_output_s0_x_xi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void harris(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */padded16_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __SYNTHESIS__
  ofstream debug_file("harris_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  cim_output_stencil_cache cim_output_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  cim_stencil_cache cim_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  grad_x_stencil_cache grad_x_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  grad_y_stencil_cache grad_y_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxx_stencil_cache lgxx_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxx_stencil_clkwrk_dsa0_cache lgxx_stencil_clkwrk_dsa0;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxy_stencil_cache lgxy_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxy_stencil_clkwrk_dsa1_cache lgxy_stencil_clkwrk_dsa1;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgyy_stencil_cache lgyy_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgyy_stencil_clkwrk_dsa2_cache lgyy_stencil_clkwrk_dsa2;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lxx_stencil_cache lxx_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lxy_stencil_cache lxy_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lyy_stencil_cache lyy_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  padded16_global_wrapper_stencil_cache padded16_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59; op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59; op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59; op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_lgxx_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59; op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59; op_hcompute_lgyy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 10] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_lgxy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : -1 <= d1 <= 58 and -1 <= d2 <= 58; op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : 0 <= d1 <= 57 and 0 <= d2 <= 57; op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
//   { op_hcompute_grad_y_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 5] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
// Condition for op_hcompute_grad_y_stencil(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 4] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_lgxx_stencil_1(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_cim_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 13] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_cim_output_stencil(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
// Condition for op_hcompute_lxy_stencil(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 2] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
// Condition for op_hcompute_lxx_stencil(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 11] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_lgyy_stencil_1(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lgxx_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 3] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_lgxx_stencil(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_grad_x_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
// Condition for op_hcompute_grad_x_stencil(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 8] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_lgxy_stencil_1(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 9] : -2 <= d1 <= 59 and -2 <= d2 <= 59 }
// Condition for op_hcompute_lyy_stencil(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lgyy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 10] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_lgyy_stencil(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 12] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_cim_stencil(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_lgxy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 7] : -1 <= d1 <= 58 and -1 <= d2 <= 58 }
// Condition for op_hcompute_lgxy_stencil(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 14] : 0 <= d1 <= 57 and 0 <= d2 <= 57 }
// Condition for op_hcompute_hw_output_stencil(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { op_hcompute_padded16_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 60 and -3 <= d2 <= 60 }
// Condition for op_hcompute_padded16_global_wrapper_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((60 + -1*i1)) >= 0) && (((3 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))

	for (int c1 = -3; c1 <= 60; c1 += 1)  for (int c2 = -3; c2 <= 60; c2 += 1) {
	#pragma hls_pipeline_init_interval 1 
	for (int c1 = -3; c1 <= 60; c1 += 1)  for (int c2 = -3; c2 <= 60; c2 += 1) {
	    if (c1 >= -1 && c2 >= -1) {
	      op_hcompute_grad_x_stencil(padded16_global_wrapper_stencil /* buf name */, grad_x_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lxx_stencil(grad_x_stencil /* buf name */, lxx_stencil, 0, c1 - 1, c2 - 1);
	      if (c1 >= 1 && c2 >= 1) {
	        op_hcompute_lgxx_stencil(lgxx_stencil_clkwrk_dsa0, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa0 /* buf name */, lxx_stencil /* buf name */, lgxx_stencil, 0, c1 - 2, c2 - 2);
	      }
	      op_hcompute_grad_y_stencil(padded16_global_wrapper_stencil /* buf name */, grad_y_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lxy_stencil(grad_x_stencil /* buf name */, grad_y_stencil /* buf name */, lxy_stencil, 0, c1 - 1, c2 - 1);
	      if (c1 >= 1 && c2 >= 1) {
	        op_hcompute_lgxy_stencil(lgxy_stencil_clkwrk_dsa1, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa1 /* buf name */, lxy_stencil /* buf name */, lgxy_stencil, 0, c1 - 2, c2 - 2);
	      }
	      op_hcompute_lyy_stencil(grad_y_stencil /* buf name */, lyy_stencil, 0, c1 - 1, c2 - 1);
	      if (c1 >= 1 && c2 >= 1) {
	        op_hcompute_lgyy_stencil(lgyy_stencil_clkwrk_dsa2, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa2 /* buf name */, lyy_stencil /* buf name */, lgyy_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_cim_stencil(lgxx_stencil /* buf name */, lgxy_stencil /* buf name */, lgyy_stencil /* buf name */, cim_stencil, 0, c1 - 2, c2 - 2);
	        if (c1 >= 3 && c2 >= 3) {
	          op_hcompute_cim_output_stencil(cim_stencil /* buf name */, cim_output_stencil, 0, c1 - 3, c2 - 3);
	          op_hcompute_hw_output_stencil(cim_output_stencil /* buf name */, hw_output_stencil, 0, c1 - 3, c2 - 3);
	        }
	      }
	    }
	  }
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void harris_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */padded16_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    harris(padded16_stencil, hw_output_stencil);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_y_yi, hw_output_s0_x_xi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3364;
  // { op_hcompute_padded16_global_wrapper_stencil[root = 0, padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] -> padded16_stencil[padded16_global_wrapper_s0_y, padded16_global_wrapper_s0_x] : -3 <= padded16_global_wrapper_s0_y <= 60 and -3 <= padded16_global_wrapper_s0_x <= 60 }
const int op_hcompute_padded16_global_wrapper_stencil_read_pipe0_num_transfers = 4096;


extern "C" {

void harris_accel(hw_uint<16>* op_hcompute_padded16_global_wrapper_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_padded16_global_wrapper_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_padded16_global_wrapper_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_padded16_global_wrapper_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_padded16_global_wrapper_stencil_read_pipe0, op_hcompute_padded16_global_wrapper_stencil_read_pipe0_channel, op_hcompute_padded16_global_wrapper_stencil_read_pipe0_num_transfers*size);

  harris_wrapper(op_hcompute_padded16_global_wrapper_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void harris_rdai(HWStream<hw_uint<16> >& op_hcompute_padded16_global_wrapper_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_padded16_global_wrapper_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  harris(op_hcompute_padded16_global_wrapper_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__SYNTHESIS__

