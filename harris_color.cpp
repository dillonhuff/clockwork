#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: harris_color_compute.h
#include "harris_color_compute.h"

struct cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_cache {
	// RAM Box: {[0, 67], [0, 66]}
	// Capacity: 70
	// # of read delays: 6
  // 0, 1, 34, 35, 68, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 32> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 32> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_35() {
		return f6;
	}

	inline hw_uint<16> peek_67() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_68() {
		return f8;
	}

	inline hw_uint<16> peek_69() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 32
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 32 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_cache {
	// RAM Box: {[0, 67], [1, 67]}
	// Capacity: 70
	// # of read delays: 6
  // 0, 1, 34, 35, 68, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 32> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 32> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_35() {
		return f6;
	}

	inline hw_uint<16> peek_67() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_68() {
		return f8;
	}

	inline hw_uint<16> peek_69() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 32
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 32 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
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
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 3 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 3 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 3 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // # of banks: 2
  cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9_cache cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9;
  cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9_cache cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9;
};



inline void cim_stencil_op_hcompute_cim_stencil_182_write(hw_uint<16>& cim_stencil_op_hcompute_cim_stencil_182, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.push(cim_stencil_op_hcompute_cim_stencil_182);
}

inline void cim_stencil_op_hcompute_cim_stencil_1_178_write(hw_uint<16>& cim_stencil_op_hcompute_cim_stencil_1_178, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.push(cim_stencil_op_hcompute_cim_stencil_1_178);
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_101_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_101 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_69();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_102_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_102 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_35();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_103_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_103 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_69();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_104_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_104 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_68();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_105_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_105 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_35();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_106_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_106 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_34();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_107_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_107 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_1();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_108_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_108 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_1();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_109_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_109 read pattern: { op_hcompute_hw_output_glb_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_0();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_91_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_91 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_69();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_92_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_92 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_34();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_93_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_93 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_68();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_94_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_94 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[hw_output_s0_y_yi, 3 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_68();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_95_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_95 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_35();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_96_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_96 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[1 + hw_output_s0_y_yi, 3 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_34();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_97_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_97 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 1 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_1();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_98_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_98 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 2 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_182 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_182_merged_banks_9.peek_0();
  return value_cim_stencil_op_hcompute_cim_stencil_182;
  return 0;
}

inline hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_99_select(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // cim_stencil_op_hcompute_hw_output_glb_stencil_1_99 read pattern: { op_hcompute_hw_output_glb_stencil_1[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi_xi] -> cim_stencil[2 + hw_output_s0_y_yi, 3 + 2hw_output_s0_x_xi_xi] : 0 <= hw_output_s0_y_yi <= 65 and 0 <= hw_output_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_cim_stencil_op_hcompute_cim_stencil_1_178 = cim_stencil.cim_stencil_op_hcompute_cim_stencil_1_178_merged_banks_9.peek_0();
  return value_cim_stencil_op_hcompute_cim_stencil_1_178;
  return 0;
}

// # of bundles = 4
// op_hcompute_cim_stencil_1_write
//	cim_stencil_op_hcompute_cim_stencil_1_178
inline void cim_stencil_op_hcompute_cim_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_cim_stencil_1_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
	hw_uint<16> cim_stencil_op_hcompute_cim_stencil_1_178_res = op_hcompute_cim_stencil_1_write.extract<0, 15>();
	cim_stencil_op_hcompute_cim_stencil_1_178_write(cim_stencil_op_hcompute_cim_stencil_1_178_res, cim_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
}

// op_hcompute_cim_stencil_write
//	cim_stencil_op_hcompute_cim_stencil_182
inline void cim_stencil_op_hcompute_cim_stencil_write_bundle_write(hw_uint<16>& op_hcompute_cim_stencil_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
	hw_uint<16> cim_stencil_op_hcompute_cim_stencil_182_res = op_hcompute_cim_stencil_write.extract<0, 15>();
	cim_stencil_op_hcompute_cim_stencil_182_write(cim_stencil_op_hcompute_cim_stencil_182_res, cim_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_1_read
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_91
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_92
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_93
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_94
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_95
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_96
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_97
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_98
//	cim_stencil_op_hcompute_hw_output_glb_stencil_1_99
inline hw_uint<144> cim_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_91
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_92
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_93
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_94
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_95
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_96
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_97
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_98
    // cim_stencil_op_hcompute_hw_output_glb_stencil_1_99

	hw_uint<144> result;
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_91_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_91_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_91_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_92_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_92_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<16, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_92_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_93_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_93_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<32, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_93_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_94_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_94_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<48, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_94_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_95_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_95_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<64, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_95_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_96_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_96_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<80, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_96_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_97_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_97_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<96, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_97_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_98_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_98_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<112, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_98_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_1_99_res = cim_stencil_op_hcompute_hw_output_glb_stencil_1_99_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<128, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_1_99_res);
	return result;
}

// op_hcompute_hw_output_glb_stencil_read
//	cim_stencil_op_hcompute_hw_output_glb_stencil_101
//	cim_stencil_op_hcompute_hw_output_glb_stencil_102
//	cim_stencil_op_hcompute_hw_output_glb_stencil_103
//	cim_stencil_op_hcompute_hw_output_glb_stencil_104
//	cim_stencil_op_hcompute_hw_output_glb_stencil_105
//	cim_stencil_op_hcompute_hw_output_glb_stencil_106
//	cim_stencil_op_hcompute_hw_output_glb_stencil_107
//	cim_stencil_op_hcompute_hw_output_glb_stencil_108
//	cim_stencil_op_hcompute_hw_output_glb_stencil_109
inline hw_uint<144> cim_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_op_hcompute_hw_output_glb_stencil_101
    // cim_stencil_op_hcompute_hw_output_glb_stencil_102
    // cim_stencil_op_hcompute_hw_output_glb_stencil_103
    // cim_stencil_op_hcompute_hw_output_glb_stencil_104
    // cim_stencil_op_hcompute_hw_output_glb_stencil_105
    // cim_stencil_op_hcompute_hw_output_glb_stencil_106
    // cim_stencil_op_hcompute_hw_output_glb_stencil_107
    // cim_stencil_op_hcompute_hw_output_glb_stencil_108
    // cim_stencil_op_hcompute_hw_output_glb_stencil_109

	hw_uint<144> result;
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_101_res = cim_stencil_op_hcompute_hw_output_glb_stencil_101_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<0, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_101_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_102_res = cim_stencil_op_hcompute_hw_output_glb_stencil_102_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<16, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_102_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_103_res = cim_stencil_op_hcompute_hw_output_glb_stencil_103_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<32, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_103_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_104_res = cim_stencil_op_hcompute_hw_output_glb_stencil_104_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<48, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_104_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_105_res = cim_stencil_op_hcompute_hw_output_glb_stencil_105_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<64, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_105_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_106_res = cim_stencil_op_hcompute_hw_output_glb_stencil_106_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<80, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_106_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_107_res = cim_stencil_op_hcompute_hw_output_glb_stencil_107_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<96, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_107_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_108_res = cim_stencil_op_hcompute_hw_output_glb_stencil_108_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<112, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_108_res);
	hw_uint<16> cim_stencil_op_hcompute_hw_output_glb_stencil_109_res = cim_stencil_op_hcompute_hw_output_glb_stencil_109_select(cim_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
	set_at<128, 144>(result, cim_stencil_op_hcompute_hw_output_glb_stencil_109_res);
	return result;
}

struct grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13_cache {
	// RAM Box: {[0, 69], [0, 68]}
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

struct grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11_cache {
	// RAM Box: {[0, 69], [1, 69]}
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

struct grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5_cache {
	// RAM Box: {[0, 69], [1, 69]}
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

struct grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8_cache {
	// RAM Box: {[0, 69], [0, 68]}
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

struct grad_x_unclamp_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x_x] -> grad_x_unclamp_stencil[2 + lxx_s0_y, 2lxx_s0_x_x] : -2 <= lxx_s0_y <= 67 and 0 <= lxx_s0_x_x <= 34 }
    // { op_hcompute_lxx_stencil_1[root = 0, lxx_s0_y, lxx_s0_x_x] -> grad_x_unclamp_stencil[2 + lxx_s0_y, 1 + 2lxx_s0_x_x] : -2 <= lxx_s0_y <= 67 and 0 <= lxx_s0_x_x <= 34 }
    // { op_hcompute_lxy_stencil_1[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_x_unclamp_stencil[2 + lxy_s0_y, 1 + 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
    // { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_x_unclamp_stencil[2 + lxy_s0_y, 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
  // # of banks: 4
  grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13_cache grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13;
  grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11_cache grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11;
  grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5_cache grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5;
  grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8_cache grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8;
};



inline void grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_write(hw_uint<16>& grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168, grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
  grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13.push(grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168);
  grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8.push(grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168);
}

inline void grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_write(hw_uint<16>& grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160, grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
  grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11.push(grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160);
  grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5.push(grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160);
}

inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13_select(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13 read pattern: { op_hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x_x] -> grad_x_unclamp_stencil[2 + lxx_s0_y, 2lxx_s0_x_x] : -2 <= lxx_s0_y <= 67 and 0 <= lxx_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168 = grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13.peek(/* one reader or all rams */ 0);
  return value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168;
  return 0;
}

inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11_select(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11 read pattern: { op_hcompute_lxx_stencil_1[root = 0, lxx_s0_y, lxx_s0_x_x] -> grad_x_unclamp_stencil[2 + lxx_s0_y, 1 + 2lxx_s0_x_x] : -2 <= lxx_s0_y <= 67 and 0 <= lxx_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160 = grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11.peek(/* one reader or all rams */ 0);
  return value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160;
  return 0;
}

inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5_select(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5 read pattern: { op_hcompute_lxy_stencil_1[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_x_unclamp_stencil[2 + lxy_s0_y, 1 + 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160 = grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5.peek(/* one reader or all rams */ 0);
  return value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160;
  return 0;
}

inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8_select(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8 read pattern: { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_x_unclamp_stencil[2 + lxy_s0_y, 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168 = grad_x_unclamp_stencil.grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_to_grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8.peek(/* one reader or all rams */ 0);
  return value_grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168;
  return 0;
}

// # of bundles = 6
// op_hcompute_grad_x_unclamp_stencil_2_write
//	grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168
inline void grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_grad_x_unclamp_stencil_2_write, grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
	hw_uint<16> grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_res = op_hcompute_grad_x_unclamp_stencil_2_write.extract<0, 15>();
	grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_write(grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_168_res, grad_x_unclamp_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
}

// op_hcompute_grad_x_unclamp_stencil_3_write
//	grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160
inline void grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_grad_x_unclamp_stencil_3_write, grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
	hw_uint<16> grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_res = op_hcompute_grad_x_unclamp_stencil_3_write.extract<0, 15>();
	grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_write(grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_160_res, grad_x_unclamp_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
}

// op_hcompute_lxx_stencil_1_read
//	grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11
inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_read_bundle_read(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11

	hw_uint<16> result;
	hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11_res = grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11_select(grad_x_unclamp_stencil, root, lxx_s0_y, lxx_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_11_res);
	return result;
}

// op_hcompute_lxx_stencil_read
//	grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13
inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxx_stencil_read_bundle_read(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13

	hw_uint<16> result;
	hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13_res = grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13_select(grad_x_unclamp_stencil, root, lxx_s0_y, lxx_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_x_unclamp_stencil_op_hcompute_lxx_stencil_13_res);
	return result;
}

// op_hcompute_lxy_stencil_1_read
//	grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5
inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_read_bundle_read(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5_res = grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5_select(grad_x_unclamp_stencil, root, lxy_s0_y, lxy_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_5_res);
	return result;
}

// op_hcompute_lxy_stencil_read
//	grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8
inline hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8

	hw_uint<16> result;
	hw_uint<16> grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8_res = grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8_select(grad_x_unclamp_stencil, root, lxy_s0_y, lxy_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_x_unclamp_stencil_op_hcompute_lxy_stencil_8_res);
	return result;
}

struct grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169_cache {
	// RAM Box: {[0, 69], [0, 68]}
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

struct grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161_cache {
	// RAM Box: {[0, 69], [1, 69]}
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

struct grad_x_unclamp_stencil_clkwrk_dsa8_cache {
  // Reader addrs...
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> grad_x_unclamp_stencil_clkwrk_dsa8[2 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> grad_x_unclamp_stencil_clkwrk_dsa8[2 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // # of banks: 2
  grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169_cache grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169;
  grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161_cache grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161;
};



inline void grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_write(hw_uint<16>& grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177, grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s0_y, int grad_x_unclamp_s0_x_x, int dynamic_address) {
  grad_x_unclamp_stencil_clkwrk_dsa8.grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169.push(grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177);
}

inline void grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_write(hw_uint<16>& grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176, grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s0_y, int grad_x_unclamp_s0_x_x, int dynamic_address) {
  grad_x_unclamp_stencil_clkwrk_dsa8.grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161.push(grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176);
}

inline hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169_select(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> grad_x_unclamp_stencil_clkwrk_dsa8[2 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_x_unclamp_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 14] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177 = grad_x_unclamp_stencil_clkwrk_dsa8.grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169.peek(/* one reader or all rams */ 0);
  return value_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177;
  return 0;
}

inline hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161_select(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> grad_x_unclamp_stencil_clkwrk_dsa8[2 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_x_unclamp_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 15] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176 = grad_x_unclamp_stencil_clkwrk_dsa8.grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_to_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161.peek(/* one reader or all rams */ 0);
  return value_grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176;
  return 0;
}

// # of bundles = 4
// op_hcompute_grad_x_unclamp_stencil_1_write
//	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176
inline void grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_grad_x_unclamp_stencil_1_write, grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s0_y, int grad_x_unclamp_s0_x_x, int dynamic_address) {
	hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_res = op_hcompute_grad_x_unclamp_stencil_1_write.extract<0, 15>();
	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_write(grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_176_res, grad_x_unclamp_stencil_clkwrk_dsa8, root, grad_x_unclamp_s0_y, grad_x_unclamp_s0_x_x, dynamic_address);
}

// op_hcompute_grad_x_unclamp_stencil_2_read
//	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169
inline hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_read_bundle_read(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169

	hw_uint<16> result;
	hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169_res = grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169_select(grad_x_unclamp_stencil_clkwrk_dsa8, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<0, 16>(result, grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_169_res);
	return result;
}

// op_hcompute_grad_x_unclamp_stencil_3_read
//	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161
inline hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_read_bundle_read(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161

	hw_uint<16> result;
	hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161_res = grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161_select(grad_x_unclamp_stencil_clkwrk_dsa8, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<0, 16>(result, grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_161_res);
	return result;
}

// op_hcompute_grad_x_unclamp_stencil_write
//	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177
inline void grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_write_bundle_write(hw_uint<16>& op_hcompute_grad_x_unclamp_stencil_write, grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s0_y, int grad_x_unclamp_s0_x_x, int dynamic_address) {
	hw_uint<16> grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_res = op_hcompute_grad_x_unclamp_stencil_write.extract<0, 15>();
	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_write(grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_177_res, grad_x_unclamp_stencil_clkwrk_dsa8, root, grad_x_unclamp_s0_y, grad_x_unclamp_s0_x_x, dynamic_address);
}

struct grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6_cache {
	// RAM Box: {[0, 69], [1, 69]}
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

struct grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9_cache {
	// RAM Box: {[0, 69], [0, 68]}
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

struct grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1_cache {
	// RAM Box: {[0, 69], [1, 69]}
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

struct grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3_cache {
	// RAM Box: {[0, 69], [0, 68]}
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

struct grad_y_unclamp_stencil_cache {
  // Reader addrs...
    // { op_hcompute_lxy_stencil_1[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_y_unclamp_stencil[2 + lxy_s0_y, 1 + 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
    // { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_y_unclamp_stencil[2 + lxy_s0_y, 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
    // { op_hcompute_lyy_stencil_1[root = 0, lyy_s0_y, lyy_s0_x_x] -> grad_y_unclamp_stencil[2 + lyy_s0_y, 1 + 2lyy_s0_x_x] : -2 <= lyy_s0_y <= 67 and 0 <= lyy_s0_x_x <= 34 }
    // { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x_x] -> grad_y_unclamp_stencil[2 + lyy_s0_y, 2lyy_s0_x_x] : -2 <= lyy_s0_y <= 67 and 0 <= lyy_s0_x_x <= 34 }
  // # of banks: 4
  grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6_cache grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6;
  grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9_cache grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9;
  grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1_cache grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1;
  grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3_cache grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3;
};



inline void grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_write(hw_uint<16>& grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
  grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9.push(grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150);
  grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3.push(grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150);
}

inline void grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_write(hw_uint<16>& grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
  grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6.push(grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142);
  grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1.push(grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142);
}

inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6_select(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6 read pattern: { op_hcompute_lxy_stencil_1[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_y_unclamp_stencil[2 + lxy_s0_y, 1 + 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142 = grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6.peek(/* one reader or all rams */ 0);
  return value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142;
  return 0;
}

inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9_select(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9 read pattern: { op_hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x_x] -> grad_y_unclamp_stencil[2 + lxy_s0_y, 2lxy_s0_x_x] : -2 <= lxy_s0_y <= 67 and 0 <= lxy_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150 = grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9.peek(/* one reader or all rams */ 0);
  return value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150;
  return 0;
}

inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1_select(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1 read pattern: { op_hcompute_lyy_stencil_1[root = 0, lyy_s0_y, lyy_s0_x_x] -> grad_y_unclamp_stencil[2 + lyy_s0_y, 1 + 2lyy_s0_x_x] : -2 <= lyy_s0_y <= 67 and 0 <= lyy_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142 = grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1.peek(/* one reader or all rams */ 0);
  return value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142;
  return 0;
}

inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3_select(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3 read pattern: { op_hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x_x] -> grad_y_unclamp_stencil[2 + lyy_s0_y, 2lyy_s0_x_x] : -2 <= lyy_s0_y <= 67 and 0 <= lyy_s0_x_x <= 34 }
  // Read schedule : { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150 = grad_y_unclamp_stencil.grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_to_grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3.peek(/* one reader or all rams */ 0);
  return value_grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150;
  return 0;
}

// # of bundles = 6
// op_hcompute_grad_y_unclamp_stencil_2_write
//	grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150
inline void grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_grad_y_unclamp_stencil_2_write, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
	hw_uint<16> grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_res = op_hcompute_grad_y_unclamp_stencil_2_write.extract<0, 15>();
	grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_write(grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_150_res, grad_y_unclamp_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
}

// op_hcompute_grad_y_unclamp_stencil_3_write
//	grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142
inline void grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_grad_y_unclamp_stencil_3_write, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
	hw_uint<16> grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_res = op_hcompute_grad_y_unclamp_stencil_3_write.extract<0, 15>();
	grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_write(grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_142_res, grad_y_unclamp_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
}

// op_hcompute_lxy_stencil_1_read
//	grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6
inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_read_bundle_read(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6

	hw_uint<16> result;
	hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6_res = grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6_select(grad_y_unclamp_stencil, root, lxy_s0_y, lxy_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_6_res);
	return result;
}

// op_hcompute_lxy_stencil_read
//	grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9
inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9

	hw_uint<16> result;
	hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9_res = grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9_select(grad_y_unclamp_stencil, root, lxy_s0_y, lxy_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_y_unclamp_stencil_op_hcompute_lxy_stencil_9_res);
	return result;
}

// op_hcompute_lyy_stencil_1_read
//	grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1
inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_read_bundle_read(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1

	hw_uint<16> result;
	hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1_res = grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1_select(grad_y_unclamp_stencil, root, lyy_s0_y, lyy_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_1_res);
	return result;
}

// op_hcompute_lyy_stencil_read
//	grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3
inline hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lyy_stencil_read_bundle_read(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3

	hw_uint<16> result;
	hw_uint<16> grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3_res = grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3_select(grad_y_unclamp_stencil, root, lyy_s0_y, lyy_s0_x_x, dynamic_address);
	set_at<0, 16>(result, grad_y_unclamp_stencil_op_hcompute_lyy_stencil_3_res);
	return result;
}

struct grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151_cache {
	// RAM Box: {[0, 69], [0, 68]}
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

struct grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143_cache {
	// RAM Box: {[0, 69], [1, 69]}
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

struct grad_y_unclamp_stencil_clkwrk_dsa9_cache {
  // Reader addrs...
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> grad_y_unclamp_stencil_clkwrk_dsa9[2 + grad_y_unclamp_s1_y, 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> grad_y_unclamp_stencil_clkwrk_dsa9[2 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // # of banks: 2
  grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151_cache grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151;
  grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143_cache grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143;
};



inline void grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_write(hw_uint<16>& grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159, grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s0_y, int grad_y_unclamp_s0_x_x, int dynamic_address) {
  grad_y_unclamp_stencil_clkwrk_dsa9.grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151.push(grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159);
}

inline void grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_write(hw_uint<16>& grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158, grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s0_y, int grad_y_unclamp_s0_x_x, int dynamic_address) {
  grad_y_unclamp_stencil_clkwrk_dsa9.grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143.push(grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158);
}

inline hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151_select(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> grad_y_unclamp_stencil_clkwrk_dsa9[2 + grad_y_unclamp_s1_y, 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_y_unclamp_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 24] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159 = grad_y_unclamp_stencil_clkwrk_dsa9.grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151.peek(/* one reader or all rams */ 0);
  return value_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159;
  return 0;
}

inline hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143_select(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> grad_y_unclamp_stencil_clkwrk_dsa9[2 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_grad_y_unclamp_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 25] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158 = grad_y_unclamp_stencil_clkwrk_dsa9.grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_to_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143.peek(/* one reader or all rams */ 0);
  return value_grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158;
  return 0;
}

// # of bundles = 4
// op_hcompute_grad_y_unclamp_stencil_1_write
//	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158
inline void grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_grad_y_unclamp_stencil_1_write, grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s0_y, int grad_y_unclamp_s0_x_x, int dynamic_address) {
	hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_res = op_hcompute_grad_y_unclamp_stencil_1_write.extract<0, 15>();
	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_write(grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_158_res, grad_y_unclamp_stencil_clkwrk_dsa9, root, grad_y_unclamp_s0_y, grad_y_unclamp_s0_x_x, dynamic_address);
}

// op_hcompute_grad_y_unclamp_stencil_2_read
//	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151
inline hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_read_bundle_read(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151

	hw_uint<16> result;
	hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151_res = grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151_select(grad_y_unclamp_stencil_clkwrk_dsa9, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<0, 16>(result, grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_151_res);
	return result;
}

// op_hcompute_grad_y_unclamp_stencil_3_read
//	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143
inline hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_read_bundle_read(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143

	hw_uint<16> result;
	hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143_res = grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143_select(grad_y_unclamp_stencil_clkwrk_dsa9, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<0, 16>(result, grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_143_res);
	return result;
}

// op_hcompute_grad_y_unclamp_stencil_write
//	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159
inline void grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_write_bundle_write(hw_uint<16>& op_hcompute_grad_y_unclamp_stencil_write, grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s0_y, int grad_y_unclamp_s0_x_x, int dynamic_address) {
	hw_uint<16> grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_res = op_hcompute_grad_y_unclamp_stencil_write.extract<0, 15>();
	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_write(grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_159_res, grad_y_unclamp_stencil_clkwrk_dsa9, root, grad_y_unclamp_s0_y, grad_y_unclamp_s0_x_x, dynamic_address);
}

struct gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_cache {
	// RAM Box: {[0, 71], [0, 70]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 34> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_37() {
		return f6;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_72() {
		return f8;
	}

	inline hw_uint<16> peek_73() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_cache {
	// RAM Box: {[0, 71], [1, 71]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 34> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_37() {
		return f6;
	}

	inline hw_uint<16> peek_71() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_72() {
		return f8;
	}

	inline hw_uint<16> peek_73() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct gray_stencil_cache {
  // Reader addrs...
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 2 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 2 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 2 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 3 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 3 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 3 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 3 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
    // { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 3 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // # of banks: 2
  gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12_cache gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12;
  gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12_cache gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12;
};



inline void gray_stencil_op_hcompute_gray_stencil_138_write(hw_uint<16>& gray_stencil_op_hcompute_gray_stencil_138, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.push(gray_stencil_op_hcompute_gray_stencil_138);
}

inline void gray_stencil_op_hcompute_gray_stencil_1_134_write(hw_uint<16>& gray_stencil_op_hcompute_gray_stencil_1_134, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.push(gray_stencil_op_hcompute_gray_stencil_1_134);
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 2 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_36();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 2 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_37();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175 read pattern: { op_hcompute_grad_x_unclamp_stencil_2[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 2 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_37();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[4 + grad_x_unclamp_s1_y, 3 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[3 + grad_x_unclamp_s1_y, 3 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_36();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 1 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167_select(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167 read pattern: { op_hcompute_grad_x_unclamp_stencil_3[root = 0, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x] -> gray_stencil[2 + grad_x_unclamp_s1_y, 3 + 2grad_x_unclamp_s1_x_x] : -2 <= grad_x_unclamp_s1_y <= 67 and 0 <= grad_x_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157 read pattern: { op_hcompute_grad_y_unclamp_stencil_2[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_73();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 2 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_138 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_138_merged_banks_12.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_138;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[2 + grad_y_unclamp_s1_y, 3 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_72();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 1 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_1();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

inline hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149_select(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149 read pattern: { op_hcompute_grad_y_unclamp_stencil_3[root = 0, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x] -> gray_stencil[4 + grad_y_unclamp_s1_y, 3 + 2grad_y_unclamp_s1_x_x] : -2 <= grad_y_unclamp_s1_y <= 67 and 0 <= grad_y_unclamp_s1_x_x <= 34 }
  // Read schedule : { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  // Write schedule: { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_gray_stencil_op_hcompute_gray_stencil_1_134 = gray_stencil.gray_stencil_op_hcompute_gray_stencil_1_134_merged_banks_12.peek_0();
  return value_gray_stencil_op_hcompute_gray_stencil_1_134;
  return 0;
}

// # of bundles = 6
// op_hcompute_grad_x_unclamp_stencil_2_read
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175
inline hw_uint<96> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175

	hw_uint<96> result;
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<0, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_170_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<16, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_171_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<32, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_172_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<48, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_173_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<64, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_174_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<80, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_175_res);
	return result;
}

// op_hcompute_grad_x_unclamp_stencil_3_read
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166
//	gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167
inline hw_uint<96> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166
    // gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167

	hw_uint<96> result;
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<0, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_162_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<16, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_163_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<32, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_164_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<48, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_165_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<64, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_166_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167_res = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167_select(gray_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, dynamic_address);
	set_at<80, 96>(result, gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_167_res);
	return result;
}

// op_hcompute_grad_y_unclamp_stencil_2_read
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157
inline hw_uint<96> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157

	hw_uint<96> result;
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<0, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_152_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<16, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_153_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<32, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_154_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<48, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_155_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<64, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_156_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<80, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_157_res);
	return result;
}

// op_hcompute_grad_y_unclamp_stencil_3_read
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148
//	gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149
inline hw_uint<96> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_read_bundle_read(gray_stencil_cache& gray_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 6
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148
    // gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149

	hw_uint<96> result;
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<0, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_144_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<16, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_145_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<32, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_146_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<48, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_147_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<64, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_148_res);
	hw_uint<16> gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149_res = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149_select(gray_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, dynamic_address);
	set_at<80, 96>(result, gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_149_res);
	return result;
}

// op_hcompute_gray_stencil_1_write
//	gray_stencil_op_hcompute_gray_stencil_1_134
inline void gray_stencil_op_hcompute_gray_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_gray_stencil_1_write, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
	hw_uint<16> gray_stencil_op_hcompute_gray_stencil_1_134_res = op_hcompute_gray_stencil_1_write.extract<0, 15>();
	gray_stencil_op_hcompute_gray_stencil_1_134_write(gray_stencil_op_hcompute_gray_stencil_1_134_res, gray_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
}

// op_hcompute_gray_stencil_write
//	gray_stencil_op_hcompute_gray_stencil_138
inline void gray_stencil_op_hcompute_gray_stencil_write_bundle_write(hw_uint<16>& op_hcompute_gray_stencil_write, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
	hw_uint<16> gray_stencil_op_hcompute_gray_stencil_138_res = op_hcompute_gray_stencil_write.extract<0, 15>();
	gray_stencil_op_hcompute_gray_stencil_138_write(gray_stencil_op_hcompute_gray_stencil_138_res, gray_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
}

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121_cache {
	// RAM Box: {[0, 71], [0, 70], [0, 0]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119_cache {
	// RAM Box: {[0, 71], [0, 70], [1, 1]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117_cache {
	// RAM Box: {[0, 71], [0, 70], [2, 2]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115_cache {
	// RAM Box: {[0, 71], [1, 71], [0, 0]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113_cache {
	// RAM Box: {[0, 71], [1, 71], [1, 1]}
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

struct hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111_cache {
	// RAM Box: {[0, 71], [1, 71], [2, 2]}
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

struct hw_input_global_wrapper_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
    // { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // # of banks: 6
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113;
  hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111_cache hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111;
};



inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124);
}

inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_write(hw_uint<16>& hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111.push(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122);
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 2hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111_select(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111 read pattern: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[root = 0, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x] -> hw_input_global_wrapper_glb_stencil[3 + hw_input_global_wrapper_global_wrapper_s0_y, 1 + 2hw_input_global_wrapper_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_global_wrapper_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122 = hw_input_global_wrapper_glb_stencil.hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_to_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122;
  return 0;
}

// # of bundles = 12
// op_hcompute_hw_input_global_wrapper_glb_stencil_1_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_1_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_res = op_hcompute_hw_input_global_wrapper_glb_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_130_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_2_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_2_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_res = op_hcompute_hw_input_global_wrapper_glb_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_128_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_3_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_3_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_res = op_hcompute_hw_input_global_wrapper_glb_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_126_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_4_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_4_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_res = op_hcompute_hw_input_global_wrapper_glb_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_124_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_5_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_5_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_res = op_hcompute_hw_input_global_wrapper_glb_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_122_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_glb_stencil_write
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132
inline void hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_glb_stencil_write, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_res = op_hcompute_hw_input_global_wrapper_glb_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_write(hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_132_res, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_119_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_117_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_115_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_113_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_111_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read
//	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121
inline hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121

	hw_uint<16> result;
	hw_uint<16> hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121_res = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121_select(hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
	set_at<0, 16>(result, hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_121_res);
	return result;
}

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139_cache {
	// RAM Box: {[0, 71], [0, 70], [1, 1]}
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

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140_cache {
	// RAM Box: {[0, 71], [0, 70], [2, 2]}
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

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141_cache {
	// RAM Box: {[0, 71], [0, 70], [0, 0]}
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

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135_cache {
	// RAM Box: {[0, 71], [1, 71], [1, 1]}
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

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136_cache {
	// RAM Box: {[0, 71], [1, 71], [2, 2]}
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

struct hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137_cache {
	// RAM Box: {[0, 71], [1, 71], [0, 0]}
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

struct hw_input_global_wrapper_global_wrapper_stencil_cache {
  // Reader addrs...
    // { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
    // { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
    // { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
    // { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 2gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
    // { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 2gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
    // { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 2gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // # of banks: 6
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136;
  hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137_cache hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137;
};



inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112);
}

inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_write(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
  hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136.push(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110);
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139 read pattern: { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140 read pattern: { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141 read pattern: { op_hcompute_gray_stencil[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 2gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135 read pattern: { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 2gray_s0_x_x, 1] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136 read pattern: { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 2gray_s0_x_x, 2] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110;
  return 0;
}

inline hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137_select(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137 read pattern: { op_hcompute_gray_stencil_1[root = 0, gray_s0_y, gray_s0_x_x] -> hw_input_global_wrapper_global_wrapper_stencil[3 + gray_s0_y, 1 + 2gray_s0_x_x, 0] : -3 <= gray_s0_y <= 68 and 0 <= gray_s0_x_x <= 35 }
  // Read schedule : { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  // Write schedule: { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
  auto value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114 = hw_input_global_wrapper_global_wrapper_stencil.hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_to_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137.peek(/* one reader or all rams */ 0);
  return value_hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114;
  return 0;
}

// # of bundles = 8
// op_hcompute_gray_stencil_1_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137
inline hw_uint<48> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137

	hw_uint<48> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<0, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_135_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<16, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_136_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<32, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_137_res);
	return result;
}

// op_hcompute_gray_stencil_read
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141
inline hw_uint<48> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int gray_s0_y, int gray_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 3
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140
    // hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141

	hw_uint<48> result;
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<0, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_139_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<16, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_140_res);
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141_res = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141_select(hw_input_global_wrapper_global_wrapper_stencil, root, gray_s0_y, gray_s0_x_x, dynamic_address);
	set_at<32, 48>(result, hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_141_res);
	return result;
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_118_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_116_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_114_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_112_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_110_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

// op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write
//	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120
inline void hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x, int dynamic_address) {
	hw_uint<16> hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_res = op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write.extract<0, 15>();
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_write(hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_120_res, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, dynamic_address);
}

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87_cache {
	// RAM Box: {[0, 65], [1, 65]}
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

struct hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89_cache {
	// RAM Box: {[0, 65], [0, 64]}
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

struct hw_output_glb_stencil_cache {
  // Reader addrs...
    // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 32 }
    // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 32 }
  // # of banks: 2
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87;
  hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89_cache hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89;
};



inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100);
}

inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_write(hw_uint<16>& hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
  hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87.push(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90);
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87 read pattern: { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 1 + 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 45] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90;
  return 0;
}

inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89_select(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89 read pattern: { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_glb_stencil[hw_output_global_wrapper_s0_y_yi, 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 32 }
  // Read schedule : { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  // Write schedule: { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
  auto value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100 = hw_output_glb_stencil.hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_to_hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89.peek(/* one reader or all rams */ 0);
  return value_hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100;
  return 0;
}

// # of bundles = 4
// op_hcompute_hw_output_glb_stencil_1_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_1_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_res = op_hcompute_hw_output_glb_stencil_1_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_90_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_glb_stencil_write
//	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100
inline void hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_output_glb_stencil_write, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi, int dynamic_address) {
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_res = op_hcompute_hw_output_glb_stencil_write.extract<0, 15>();
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_write(hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_100_res, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, dynamic_address);
}

// op_hcompute_hw_output_global_wrapper_stencil_1_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_87_res);
	return result;
}

// op_hcompute_hw_output_global_wrapper_stencil_read
//	hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89
inline hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89

	hw_uint<16> result;
	hw_uint<16> hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89_res = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89_select(hw_output_glb_stencil, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, dynamic_address);
	set_at<0, 16>(result, hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_89_res);
	return result;
}

struct lgxx_stencil_op_hcompute_lgxx_stencil_2_73_to_lgxx_stencil_op_hcompute_cim_stencil_183_cache {
	// RAM Box: {[0, 67], [0, 66]}
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

struct lgxx_stencil_op_hcompute_lgxx_stencil_3_62_to_lgxx_stencil_op_hcompute_cim_stencil_1_179_cache {
	// RAM Box: {[0, 67], [1, 67]}
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
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x_x] -> lgxx_stencil[1 + cim_s0_y, 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
    // { op_hcompute_cim_stencil_1[root = 0, cim_s0_y, cim_s0_x_x] -> lgxx_stencil[1 + cim_s0_y, 1 + 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // # of banks: 2
  lgxx_stencil_op_hcompute_lgxx_stencil_2_73_to_lgxx_stencil_op_hcompute_cim_stencil_183_cache lgxx_stencil_op_hcompute_lgxx_stencil_2_73_to_lgxx_stencil_op_hcompute_cim_stencil_183;
  lgxx_stencil_op_hcompute_lgxx_stencil_3_62_to_lgxx_stencil_op_hcompute_cim_stencil_1_179_cache lgxx_stencil_op_hcompute_lgxx_stencil_3_62_to_lgxx_stencil_op_hcompute_cim_stencil_1_179;
};



inline void lgxx_stencil_op_hcompute_lgxx_stencil_2_73_write(hw_uint<16>& lgxx_stencil_op_hcompute_lgxx_stencil_2_73, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_op_hcompute_lgxx_stencil_2_73_to_lgxx_stencil_op_hcompute_cim_stencil_183.push(lgxx_stencil_op_hcompute_lgxx_stencil_2_73);
}

inline void lgxx_stencil_op_hcompute_lgxx_stencil_3_62_write(hw_uint<16>& lgxx_stencil_op_hcompute_lgxx_stencil_3_62, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_op_hcompute_lgxx_stencil_3_62_to_lgxx_stencil_op_hcompute_cim_stencil_1_179.push(lgxx_stencil_op_hcompute_lgxx_stencil_3_62);
}

inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_183_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxx_stencil_op_hcompute_cim_stencil_183 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x_x] -> lgxx_stencil[1 + cim_s0_y, 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // Read schedule : { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxx_stencil_op_hcompute_lgxx_stencil_2_73 = lgxx_stencil.lgxx_stencil_op_hcompute_lgxx_stencil_2_73_to_lgxx_stencil_op_hcompute_cim_stencil_183.peek(/* one reader or all rams */ 0);
  return value_lgxx_stencil_op_hcompute_lgxx_stencil_2_73;
  return 0;
}

inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_1_179_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxx_stencil_op_hcompute_cim_stencil_1_179 read pattern: { op_hcompute_cim_stencil_1[root = 0, cim_s0_y, cim_s0_x_x] -> lgxx_stencil[1 + cim_s0_y, 1 + 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // Read schedule : { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxx_stencil_op_hcompute_lgxx_stencil_3_62 = lgxx_stencil.lgxx_stencil_op_hcompute_lgxx_stencil_3_62_to_lgxx_stencil_op_hcompute_cim_stencil_1_179.peek(/* one reader or all rams */ 0);
  return value_lgxx_stencil_op_hcompute_lgxx_stencil_3_62;
  return 0;
}

// # of bundles = 4
// op_hcompute_cim_stencil_1_read
//	lgxx_stencil_op_hcompute_cim_stencil_1_179
inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_1_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_op_hcompute_cim_stencil_1_179

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_1_179_res = lgxx_stencil_op_hcompute_cim_stencil_1_179_select(lgxx_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_op_hcompute_cim_stencil_1_179_res);
	return result;
}

// op_hcompute_cim_stencil_read
//	lgxx_stencil_op_hcompute_cim_stencil_183
inline hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_op_hcompute_cim_stencil_183

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_op_hcompute_cim_stencil_183_res = lgxx_stencil_op_hcompute_cim_stencil_183_select(lgxx_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_op_hcompute_cim_stencil_183_res);
	return result;
}

// op_hcompute_lgxx_stencil_2_write
//	lgxx_stencil_op_hcompute_lgxx_stencil_2_73
inline void lgxx_stencil_op_hcompute_lgxx_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_2_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_op_hcompute_lgxx_stencil_2_73_res = op_hcompute_lgxx_stencil_2_write.extract<0, 15>();
	lgxx_stencil_op_hcompute_lgxx_stencil_2_73_write(lgxx_stencil_op_hcompute_lgxx_stencil_2_73_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
}

// op_hcompute_lgxx_stencil_3_write
//	lgxx_stencil_op_hcompute_lgxx_stencil_3_62
inline void lgxx_stencil_op_hcompute_lgxx_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_3_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_op_hcompute_lgxx_stencil_3_62_res = op_hcompute_lgxx_stencil_3_write.extract<0, 15>();
	lgxx_stencil_op_hcompute_lgxx_stencil_3_62_write(lgxx_stencil_op_hcompute_lgxx_stencil_3_62_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
}

struct lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74_cache {
	// RAM Box: {[0, 67], [0, 66]}
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

struct lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63_cache {
	// RAM Box: {[0, 67], [1, 67]}
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

struct lgxx_stencil_clkwrk_dsa10_cache {
  // Reader addrs...
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lgxx_stencil_clkwrk_dsa10[1 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lgxx_stencil_clkwrk_dsa10[1 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // # of banks: 2
  lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74_cache lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74;
  lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63_cache lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63;
};



inline void lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_write(hw_uint<16>& lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84, lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s0_y, int lgxx_s0_x_x, int dynamic_address) {
  lgxx_stencil_clkwrk_dsa10.lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63.push(lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84);
}

inline void lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_write(hw_uint<16>& lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85, lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s0_y, int lgxx_s0_x_x, int dynamic_address) {
  lgxx_stencil_clkwrk_dsa10.lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74.push(lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85);
}

inline hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74_select(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lgxx_stencil_clkwrk_dsa10[1 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxx_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 20] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85 = lgxx_stencil_clkwrk_dsa10.lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74.peek(/* one reader or all rams */ 0);
  return value_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85;
  return 0;
}

inline hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63_select(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lgxx_stencil_clkwrk_dsa10[1 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 21] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84 = lgxx_stencil_clkwrk_dsa10.lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_to_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63.peek(/* one reader or all rams */ 0);
  return value_lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84;
  return 0;
}

// # of bundles = 4
// op_hcompute_lgxx_stencil_1_write
//	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84
inline void lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_1_write, lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s0_y, int lgxx_s0_x_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_res = op_hcompute_lgxx_stencil_1_write.extract<0, 15>();
	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_write(lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_84_res, lgxx_stencil_clkwrk_dsa10, root, lgxx_s0_y, lgxx_s0_x_x, dynamic_address);
}

// op_hcompute_lgxx_stencil_2_read
//	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74
inline hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_read_bundle_read(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74_res = lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74_select(lgxx_stencil_clkwrk_dsa10, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_74_res);
	return result;
}

// op_hcompute_lgxx_stencil_3_read
//	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63
inline hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_read_bundle_read(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63_res = lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63_select(lgxx_stencil_clkwrk_dsa10, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_63_res);
	return result;
}

// op_hcompute_lgxx_stencil_write
//	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85
inline void lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgxx_stencil_write, lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s0_y, int lgxx_s0_x_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_res = op_hcompute_lgxx_stencil_write.extract<0, 15>();
	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_write(lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_85_res, lgxx_stencil_clkwrk_dsa10, root, lgxx_s0_y, lgxx_s0_x_x, dynamic_address);
}

struct lgxy_stencil_op_hcompute_lgxy_stencil_2_49_to_lgxy_stencil_op_hcompute_cim_stencil_184_cache {
	// RAM Box: {[0, 67], [0, 66]}
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

struct lgxy_stencil_op_hcompute_lgxy_stencil_3_38_to_lgxy_stencil_op_hcompute_cim_stencil_1_180_cache {
	// RAM Box: {[0, 67], [1, 67]}
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
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x_x] -> lgxy_stencil[1 + cim_s0_y, 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
    // { op_hcompute_cim_stencil_1[root = 0, cim_s0_y, cim_s0_x_x] -> lgxy_stencil[1 + cim_s0_y, 1 + 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // # of banks: 2
  lgxy_stencil_op_hcompute_lgxy_stencil_2_49_to_lgxy_stencil_op_hcompute_cim_stencil_184_cache lgxy_stencil_op_hcompute_lgxy_stencil_2_49_to_lgxy_stencil_op_hcompute_cim_stencil_184;
  lgxy_stencil_op_hcompute_lgxy_stencil_3_38_to_lgxy_stencil_op_hcompute_cim_stencil_1_180_cache lgxy_stencil_op_hcompute_lgxy_stencil_3_38_to_lgxy_stencil_op_hcompute_cim_stencil_1_180;
};



inline void lgxy_stencil_op_hcompute_lgxy_stencil_2_49_write(hw_uint<16>& lgxy_stencil_op_hcompute_lgxy_stencil_2_49, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_op_hcompute_lgxy_stencil_2_49_to_lgxy_stencil_op_hcompute_cim_stencil_184.push(lgxy_stencil_op_hcompute_lgxy_stencil_2_49);
}

inline void lgxy_stencil_op_hcompute_lgxy_stencil_3_38_write(hw_uint<16>& lgxy_stencil_op_hcompute_lgxy_stencil_3_38, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_op_hcompute_lgxy_stencil_3_38_to_lgxy_stencil_op_hcompute_cim_stencil_1_180.push(lgxy_stencil_op_hcompute_lgxy_stencil_3_38);
}

inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_184_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxy_stencil_op_hcompute_cim_stencil_184 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x_x] -> lgxy_stencil[1 + cim_s0_y, 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // Read schedule : { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxy_stencil_op_hcompute_lgxy_stencil_2_49 = lgxy_stencil.lgxy_stencil_op_hcompute_lgxy_stencil_2_49_to_lgxy_stencil_op_hcompute_cim_stencil_184.peek(/* one reader or all rams */ 0);
  return value_lgxy_stencil_op_hcompute_lgxy_stencil_2_49;
  return 0;
}

inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_1_180_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxy_stencil_op_hcompute_cim_stencil_1_180 read pattern: { op_hcompute_cim_stencil_1[root = 0, cim_s0_y, cim_s0_x_x] -> lgxy_stencil[1 + cim_s0_y, 1 + 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // Read schedule : { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxy_stencil_op_hcompute_lgxy_stencil_3_38 = lgxy_stencil.lgxy_stencil_op_hcompute_lgxy_stencil_3_38_to_lgxy_stencil_op_hcompute_cim_stencil_1_180.peek(/* one reader or all rams */ 0);
  return value_lgxy_stencil_op_hcompute_lgxy_stencil_3_38;
  return 0;
}

// # of bundles = 4
// op_hcompute_cim_stencil_1_read
//	lgxy_stencil_op_hcompute_cim_stencil_1_180
inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_1_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_op_hcompute_cim_stencil_1_180

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_1_180_res = lgxy_stencil_op_hcompute_cim_stencil_1_180_select(lgxy_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_op_hcompute_cim_stencil_1_180_res);
	return result;
}

// op_hcompute_cim_stencil_read
//	lgxy_stencil_op_hcompute_cim_stencil_184
inline hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_op_hcompute_cim_stencil_184

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_op_hcompute_cim_stencil_184_res = lgxy_stencil_op_hcompute_cim_stencil_184_select(lgxy_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_op_hcompute_cim_stencil_184_res);
	return result;
}

// op_hcompute_lgxy_stencil_2_write
//	lgxy_stencil_op_hcompute_lgxy_stencil_2_49
inline void lgxy_stencil_op_hcompute_lgxy_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_2_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_op_hcompute_lgxy_stencil_2_49_res = op_hcompute_lgxy_stencil_2_write.extract<0, 15>();
	lgxy_stencil_op_hcompute_lgxy_stencil_2_49_write(lgxy_stencil_op_hcompute_lgxy_stencil_2_49_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
}

// op_hcompute_lgxy_stencil_3_write
//	lgxy_stencil_op_hcompute_lgxy_stencil_3_38
inline void lgxy_stencil_op_hcompute_lgxy_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_3_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_op_hcompute_lgxy_stencil_3_38_res = op_hcompute_lgxy_stencil_3_write.extract<0, 15>();
	lgxy_stencil_op_hcompute_lgxy_stencil_3_38_write(lgxy_stencil_op_hcompute_lgxy_stencil_3_38_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
}

struct lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50_cache {
	// RAM Box: {[0, 67], [0, 66]}
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

struct lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39_cache {
	// RAM Box: {[0, 67], [1, 67]}
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

struct lgxy_stencil_clkwrk_dsa11_cache {
  // Reader addrs...
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lgxy_stencil_clkwrk_dsa11[1 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lgxy_stencil_clkwrk_dsa11[1 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // # of banks: 2
  lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50_cache lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50;
  lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39_cache lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39;
};



inline void lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_write(hw_uint<16>& lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60, lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s0_y, int lgxy_s0_x_x, int dynamic_address) {
  lgxy_stencil_clkwrk_dsa11.lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39.push(lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60);
}

inline void lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_write(hw_uint<16>& lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61, lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s0_y, int lgxy_s0_x_x, int dynamic_address) {
  lgxy_stencil_clkwrk_dsa11.lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50.push(lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61);
}

inline hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50_select(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lgxy_stencil_clkwrk_dsa11[1 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 30] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61 = lgxy_stencil_clkwrk_dsa11.lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50.peek(/* one reader or all rams */ 0);
  return value_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61;
  return 0;
}

inline hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39_select(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lgxy_stencil_clkwrk_dsa11[1 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 31] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60 = lgxy_stencil_clkwrk_dsa11.lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_to_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39.peek(/* one reader or all rams */ 0);
  return value_lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60;
  return 0;
}

// # of bundles = 4
// op_hcompute_lgxy_stencil_1_write
//	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60
inline void lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_1_write, lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s0_y, int lgxy_s0_x_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_res = op_hcompute_lgxy_stencil_1_write.extract<0, 15>();
	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_write(lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_60_res, lgxy_stencil_clkwrk_dsa11, root, lgxy_s0_y, lgxy_s0_x_x, dynamic_address);
}

// op_hcompute_lgxy_stencil_2_read
//	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50
inline hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_read_bundle_read(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50_res = lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50_select(lgxy_stencil_clkwrk_dsa11, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_50_res);
	return result;
}

// op_hcompute_lgxy_stencil_3_read
//	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39
inline hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_read_bundle_read(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39_res = lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39_select(lgxy_stencil_clkwrk_dsa11, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_39_res);
	return result;
}

// op_hcompute_lgxy_stencil_write
//	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61
inline void lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgxy_stencil_write, lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s0_y, int lgxy_s0_x_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_res = op_hcompute_lgxy_stencil_write.extract<0, 15>();
	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_write(lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_61_res, lgxy_stencil_clkwrk_dsa11, root, lgxy_s0_y, lgxy_s0_x_x, dynamic_address);
}

struct lgyy_stencil_op_hcompute_lgyy_stencil_2_25_to_lgyy_stencil_op_hcompute_cim_stencil_185_cache {
	// RAM Box: {[0, 67], [0, 66]}
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

struct lgyy_stencil_op_hcompute_lgyy_stencil_3_14_to_lgyy_stencil_op_hcompute_cim_stencil_1_181_cache {
	// RAM Box: {[0, 67], [1, 67]}
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
    // { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x_x] -> lgyy_stencil[1 + cim_s0_y, 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
    // { op_hcompute_cim_stencil_1[root = 0, cim_s0_y, cim_s0_x_x] -> lgyy_stencil[1 + cim_s0_y, 1 + 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // # of banks: 2
  lgyy_stencil_op_hcompute_lgyy_stencil_2_25_to_lgyy_stencil_op_hcompute_cim_stencil_185_cache lgyy_stencil_op_hcompute_lgyy_stencil_2_25_to_lgyy_stencil_op_hcompute_cim_stencil_185;
  lgyy_stencil_op_hcompute_lgyy_stencil_3_14_to_lgyy_stencil_op_hcompute_cim_stencil_1_181_cache lgyy_stencil_op_hcompute_lgyy_stencil_3_14_to_lgyy_stencil_op_hcompute_cim_stencil_1_181;
};



inline void lgyy_stencil_op_hcompute_lgyy_stencil_2_25_write(hw_uint<16>& lgyy_stencil_op_hcompute_lgyy_stencil_2_25, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_op_hcompute_lgyy_stencil_2_25_to_lgyy_stencil_op_hcompute_cim_stencil_185.push(lgyy_stencil_op_hcompute_lgyy_stencil_2_25);
}

inline void lgyy_stencil_op_hcompute_lgyy_stencil_3_14_write(hw_uint<16>& lgyy_stencil_op_hcompute_lgyy_stencil_3_14, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_op_hcompute_lgyy_stencil_3_14_to_lgyy_stencil_op_hcompute_cim_stencil_1_181.push(lgyy_stencil_op_hcompute_lgyy_stencil_3_14);
}

inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_185_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgyy_stencil_op_hcompute_cim_stencil_185 read pattern: { op_hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x_x] -> lgyy_stencil[1 + cim_s0_y, 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // Read schedule : { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgyy_stencil_op_hcompute_lgyy_stencil_2_25 = lgyy_stencil.lgyy_stencil_op_hcompute_lgyy_stencil_2_25_to_lgyy_stencil_op_hcompute_cim_stencil_185.peek(/* one reader or all rams */ 0);
  return value_lgyy_stencil_op_hcompute_lgyy_stencil_2_25;
  return 0;
}

inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_1_181_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgyy_stencil_op_hcompute_cim_stencil_1_181 read pattern: { op_hcompute_cim_stencil_1[root = 0, cim_s0_y, cim_s0_x_x] -> lgyy_stencil[1 + cim_s0_y, 1 + 2cim_s0_x_x] : -1 <= cim_s0_y <= 66 and 0 <= cim_s0_x_x <= 33 }
  // Read schedule : { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgyy_stencil_op_hcompute_lgyy_stencil_3_14 = lgyy_stencil.lgyy_stencil_op_hcompute_lgyy_stencil_3_14_to_lgyy_stencil_op_hcompute_cim_stencil_1_181.peek(/* one reader or all rams */ 0);
  return value_lgyy_stencil_op_hcompute_lgyy_stencil_3_14;
  return 0;
}

// # of bundles = 4
// op_hcompute_cim_stencil_1_read
//	lgyy_stencil_op_hcompute_cim_stencil_1_181
inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_1_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_op_hcompute_cim_stencil_1_181

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_1_181_res = lgyy_stencil_op_hcompute_cim_stencil_1_181_select(lgyy_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_op_hcompute_cim_stencil_1_181_res);
	return result;
}

// op_hcompute_cim_stencil_read
//	lgyy_stencil_op_hcompute_cim_stencil_185
inline hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_op_hcompute_cim_stencil_185

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_op_hcompute_cim_stencil_185_res = lgyy_stencil_op_hcompute_cim_stencil_185_select(lgyy_stencil, root, cim_s0_y, cim_s0_x_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_op_hcompute_cim_stencil_185_res);
	return result;
}

// op_hcompute_lgyy_stencil_2_write
//	lgyy_stencil_op_hcompute_lgyy_stencil_2_25
inline void lgyy_stencil_op_hcompute_lgyy_stencil_2_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_2_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_op_hcompute_lgyy_stencil_2_25_res = op_hcompute_lgyy_stencil_2_write.extract<0, 15>();
	lgyy_stencil_op_hcompute_lgyy_stencil_2_25_write(lgyy_stencil_op_hcompute_lgyy_stencil_2_25_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
}

// op_hcompute_lgyy_stencil_3_write
//	lgyy_stencil_op_hcompute_lgyy_stencil_3_14
inline void lgyy_stencil_op_hcompute_lgyy_stencil_3_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_3_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_op_hcompute_lgyy_stencil_3_14_res = op_hcompute_lgyy_stencil_3_write.extract<0, 15>();
	lgyy_stencil_op_hcompute_lgyy_stencil_3_14_write(lgyy_stencil_op_hcompute_lgyy_stencil_3_14_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
}

struct lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26_cache {
	// RAM Box: {[0, 67], [0, 66]}
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

struct lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15_cache {
	// RAM Box: {[0, 67], [1, 67]}
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

struct lgyy_stencil_clkwrk_dsa12_cache {
  // Reader addrs...
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lgyy_stencil_clkwrk_dsa12[1 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lgyy_stencil_clkwrk_dsa12[1 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // # of banks: 2
  lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26_cache lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26;
  lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15_cache lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15;
};



inline void lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_write(hw_uint<16>& lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36, lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s0_y, int lgyy_s0_x_x, int dynamic_address) {
  lgyy_stencil_clkwrk_dsa12.lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15.push(lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36);
}

inline void lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_write(hw_uint<16>& lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37, lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s0_y, int lgyy_s0_x_x, int dynamic_address) {
  lgyy_stencil_clkwrk_dsa12.lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26.push(lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37);
}

inline hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26_select(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lgyy_stencil_clkwrk_dsa12[1 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgyy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 36] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37 = lgyy_stencil_clkwrk_dsa12.lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26.peek(/* one reader or all rams */ 0);
  return value_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37;
  return 0;
}

inline hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15_select(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lgyy_stencil_clkwrk_dsa12[1 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 37] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  auto value_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36 = lgyy_stencil_clkwrk_dsa12.lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_to_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15.peek(/* one reader or all rams */ 0);
  return value_lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36;
  return 0;
}

// # of bundles = 4
// op_hcompute_lgyy_stencil_1_write
//	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36
inline void lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_1_write, lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s0_y, int lgyy_s0_x_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_res = op_hcompute_lgyy_stencil_1_write.extract<0, 15>();
	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_write(lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_36_res, lgyy_stencil_clkwrk_dsa12, root, lgyy_s0_y, lgyy_s0_x_x, dynamic_address);
}

// op_hcompute_lgyy_stencil_2_read
//	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26
inline hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_read_bundle_read(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26_res = lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26_select(lgyy_stencil_clkwrk_dsa12, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_26_res);
	return result;
}

// op_hcompute_lgyy_stencil_3_read
//	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15
inline hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_read_bundle_read(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15_res = lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15_select(lgyy_stencil_clkwrk_dsa12, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_15_res);
	return result;
}

// op_hcompute_lgyy_stencil_write
//	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37
inline void lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lgyy_stencil_write, lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s0_y, int lgyy_s0_x_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_res = op_hcompute_lgyy_stencil_write.extract<0, 15>();
	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_write(lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_37_res, lgyy_stencil_clkwrk_dsa12, root, lgyy_s0_y, lgyy_s0_x_x, dynamic_address);
}

struct lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_cache {
	// RAM Box: {[0, 69], [0, 68]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_cache {
	// RAM Box: {[0, 69], [1, 69]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
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
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 3 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 3 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 3 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
    // { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // # of banks: 2
  lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9_cache lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9;
  lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9_cache lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9;
};



inline void lxx_stencil_op_hcompute_lxx_stencil_12_write(hw_uint<16>& lxx_stencil_op_hcompute_lxx_stencil_12, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.push(lxx_stencil_op_hcompute_lxx_stencil_12);
}

inline void lxx_stencil_op_hcompute_lxx_stencil_1_10_write(hw_uint<16>& lxx_stencil_op_hcompute_lxx_stencil_1_10, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.push(lxx_stencil_op_hcompute_lxx_stencil_1_10);
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_75_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_75 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_71();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_76_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_76 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_71();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_77_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_77 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_70();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_78_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_78 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_36();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_79_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_79 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_36();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_80_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_80 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_35();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_81_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_81 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_1();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_82_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_82 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_0();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_83_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_2_83 read pattern: { op_hcompute_lgxx_stencil_2[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_1();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_64_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_64 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_71();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_65_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_65 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_70();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_66_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_66 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[1 + lgxx_s1_y, 3 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_70();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_67_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_67 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_36();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_68_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_68 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_35();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_69_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_69 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[2 + lgxx_s1_y, 3 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_35();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_70_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_70 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 1 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_1();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_71_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_71 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 3 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_1_10 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_1_10_merged_banks_9.peek_0();
  return value_lxx_stencil_op_hcompute_lxx_stencil_1_10;
  return 0;
}

inline hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_72_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxx_stencil_op_hcompute_lgxx_stencil_3_72 read pattern: { op_hcompute_lgxx_stencil_3[root = 0, lgxx_s1_y, lgxx_s1_x_x] -> lxx_stencil[3 + lgxx_s1_y, 2 + 2lgxx_s1_x_x] : -1 <= lgxx_s1_y <= 66 and 0 <= lgxx_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxx_stencil_op_hcompute_lxx_stencil_12 = lxx_stencil.lxx_stencil_op_hcompute_lxx_stencil_12_merged_banks_9.peek_0();
  return value_lxx_stencil_op_hcompute_lxx_stencil_12;
  return 0;
}

// # of bundles = 4
// op_hcompute_lgxx_stencil_2_read
//	lxx_stencil_op_hcompute_lgxx_stencil_2_75
//	lxx_stencil_op_hcompute_lgxx_stencil_2_76
//	lxx_stencil_op_hcompute_lgxx_stencil_2_77
//	lxx_stencil_op_hcompute_lgxx_stencil_2_78
//	lxx_stencil_op_hcompute_lgxx_stencil_2_79
//	lxx_stencil_op_hcompute_lgxx_stencil_2_80
//	lxx_stencil_op_hcompute_lgxx_stencil_2_81
//	lxx_stencil_op_hcompute_lgxx_stencil_2_82
//	lxx_stencil_op_hcompute_lgxx_stencil_2_83
inline hw_uint<144> lxx_stencil_op_hcompute_lgxx_stencil_2_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_op_hcompute_lgxx_stencil_2_75
    // lxx_stencil_op_hcompute_lgxx_stencil_2_76
    // lxx_stencil_op_hcompute_lgxx_stencil_2_77
    // lxx_stencil_op_hcompute_lgxx_stencil_2_78
    // lxx_stencil_op_hcompute_lgxx_stencil_2_79
    // lxx_stencil_op_hcompute_lgxx_stencil_2_80
    // lxx_stencil_op_hcompute_lgxx_stencil_2_81
    // lxx_stencil_op_hcompute_lgxx_stencil_2_82
    // lxx_stencil_op_hcompute_lgxx_stencil_2_83

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_75_res = lxx_stencil_op_hcompute_lgxx_stencil_2_75_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_75_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_76_res = lxx_stencil_op_hcompute_lgxx_stencil_2_76_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_76_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_77_res = lxx_stencil_op_hcompute_lgxx_stencil_2_77_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_77_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_78_res = lxx_stencil_op_hcompute_lgxx_stencil_2_78_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_78_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_79_res = lxx_stencil_op_hcompute_lgxx_stencil_2_79_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_79_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_80_res = lxx_stencil_op_hcompute_lgxx_stencil_2_80_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_80_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_81_res = lxx_stencil_op_hcompute_lgxx_stencil_2_81_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_81_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_82_res = lxx_stencil_op_hcompute_lgxx_stencil_2_82_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_82_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_2_83_res = lxx_stencil_op_hcompute_lgxx_stencil_2_83_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_2_83_res);
	return result;
}

// op_hcompute_lgxx_stencil_3_read
//	lxx_stencil_op_hcompute_lgxx_stencil_3_64
//	lxx_stencil_op_hcompute_lgxx_stencil_3_65
//	lxx_stencil_op_hcompute_lgxx_stencil_3_66
//	lxx_stencil_op_hcompute_lgxx_stencil_3_67
//	lxx_stencil_op_hcompute_lgxx_stencil_3_68
//	lxx_stencil_op_hcompute_lgxx_stencil_3_69
//	lxx_stencil_op_hcompute_lgxx_stencil_3_70
//	lxx_stencil_op_hcompute_lgxx_stencil_3_71
//	lxx_stencil_op_hcompute_lgxx_stencil_3_72
inline hw_uint<144> lxx_stencil_op_hcompute_lgxx_stencil_3_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_op_hcompute_lgxx_stencil_3_64
    // lxx_stencil_op_hcompute_lgxx_stencil_3_65
    // lxx_stencil_op_hcompute_lgxx_stencil_3_66
    // lxx_stencil_op_hcompute_lgxx_stencil_3_67
    // lxx_stencil_op_hcompute_lgxx_stencil_3_68
    // lxx_stencil_op_hcompute_lgxx_stencil_3_69
    // lxx_stencil_op_hcompute_lgxx_stencil_3_70
    // lxx_stencil_op_hcompute_lgxx_stencil_3_71
    // lxx_stencil_op_hcompute_lgxx_stencil_3_72

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_64_res = lxx_stencil_op_hcompute_lgxx_stencil_3_64_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_64_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_65_res = lxx_stencil_op_hcompute_lgxx_stencil_3_65_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_65_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_66_res = lxx_stencil_op_hcompute_lgxx_stencil_3_66_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_66_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_67_res = lxx_stencil_op_hcompute_lgxx_stencil_3_67_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_67_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_68_res = lxx_stencil_op_hcompute_lgxx_stencil_3_68_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_68_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_69_res = lxx_stencil_op_hcompute_lgxx_stencil_3_69_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_69_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_70_res = lxx_stencil_op_hcompute_lgxx_stencil_3_70_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_70_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_71_res = lxx_stencil_op_hcompute_lgxx_stencil_3_71_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_71_res);
	hw_uint<16> lxx_stencil_op_hcompute_lgxx_stencil_3_72_res = lxx_stencil_op_hcompute_lgxx_stencil_3_72_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_op_hcompute_lgxx_stencil_3_72_res);
	return result;
}

// op_hcompute_lxx_stencil_1_write
//	lxx_stencil_op_hcompute_lxx_stencil_1_10
inline void lxx_stencil_op_hcompute_lxx_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lxx_stencil_1_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_op_hcompute_lxx_stencil_1_10_res = op_hcompute_lxx_stencil_1_write.extract<0, 15>();
	lxx_stencil_op_hcompute_lxx_stencil_1_10_write(lxx_stencil_op_hcompute_lxx_stencil_1_10_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x_x, dynamic_address);
}

// op_hcompute_lxx_stencil_write
//	lxx_stencil_op_hcompute_lxx_stencil_12
inline void lxx_stencil_op_hcompute_lxx_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lxx_stencil_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_op_hcompute_lxx_stencil_12_res = op_hcompute_lxx_stencil_write.extract<0, 15>();
	lxx_stencil_op_hcompute_lxx_stencil_12_write(lxx_stencil_op_hcompute_lxx_stencil_12_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x_x, dynamic_address);
}

struct lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_cache {
	// RAM Box: {[0, 69], [1, 69]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_cache {
	// RAM Box: {[0, 69], [0, 68]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
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
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 3 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 3 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 3 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
    // { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // # of banks: 2
  lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9_cache lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9;
  lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9_cache lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9;
};



inline void lxy_stencil_op_hcompute_lxy_stencil_1_4_write(hw_uint<16>& lxy_stencil_op_hcompute_lxy_stencil_1_4, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.push(lxy_stencil_op_hcompute_lxy_stencil_1_4);
}

inline void lxy_stencil_op_hcompute_lxy_stencil_7_write(hw_uint<16>& lxy_stencil_op_hcompute_lxy_stencil_7, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.push(lxy_stencil_op_hcompute_lxy_stencil_7);
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_51_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_51 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_71();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_52_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_52 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_71();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_53_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_53 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_70();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_54_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_54 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_36();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_55_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_55 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_36();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_56_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_56 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_35();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_57_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_57 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_1();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_58_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_58 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_0();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_59_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_2_59 read pattern: { op_hcompute_lgxy_stencil_2[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_1();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_40_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_40 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_71();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_41_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_41 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_70();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_42_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_42 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[1 + lgxy_s1_y, 3 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_70();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_43_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_43 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_36();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_44_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_44 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_35();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_45_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_45 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[2 + lgxy_s1_y, 3 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_35();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_46_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_46 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 1 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_1();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_47_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_47 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 3 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_1_4 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_1_4_merged_banks_9.peek_0();
  return value_lxy_stencil_op_hcompute_lxy_stencil_1_4;
  return 0;
}

inline hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_48_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lxy_stencil_op_hcompute_lgxy_stencil_3_48 read pattern: { op_hcompute_lgxy_stencil_3[root = 0, lgxy_s1_y, lgxy_s1_x_x] -> lxy_stencil[3 + lgxy_s1_y, 2 + 2lgxy_s1_x_x] : -1 <= lgxy_s1_y <= 66 and 0 <= lgxy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lxy_stencil_op_hcompute_lxy_stencil_7 = lxy_stencil.lxy_stencil_op_hcompute_lxy_stencil_7_merged_banks_9.peek_0();
  return value_lxy_stencil_op_hcompute_lxy_stencil_7;
  return 0;
}

// # of bundles = 4
// op_hcompute_lgxy_stencil_2_read
//	lxy_stencil_op_hcompute_lgxy_stencil_2_51
//	lxy_stencil_op_hcompute_lgxy_stencil_2_52
//	lxy_stencil_op_hcompute_lgxy_stencil_2_53
//	lxy_stencil_op_hcompute_lgxy_stencil_2_54
//	lxy_stencil_op_hcompute_lgxy_stencil_2_55
//	lxy_stencil_op_hcompute_lgxy_stencil_2_56
//	lxy_stencil_op_hcompute_lgxy_stencil_2_57
//	lxy_stencil_op_hcompute_lgxy_stencil_2_58
//	lxy_stencil_op_hcompute_lgxy_stencil_2_59
inline hw_uint<144> lxy_stencil_op_hcompute_lgxy_stencil_2_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_op_hcompute_lgxy_stencil_2_51
    // lxy_stencil_op_hcompute_lgxy_stencil_2_52
    // lxy_stencil_op_hcompute_lgxy_stencil_2_53
    // lxy_stencil_op_hcompute_lgxy_stencil_2_54
    // lxy_stencil_op_hcompute_lgxy_stencil_2_55
    // lxy_stencil_op_hcompute_lgxy_stencil_2_56
    // lxy_stencil_op_hcompute_lgxy_stencil_2_57
    // lxy_stencil_op_hcompute_lgxy_stencil_2_58
    // lxy_stencil_op_hcompute_lgxy_stencil_2_59

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_51_res = lxy_stencil_op_hcompute_lgxy_stencil_2_51_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_51_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_52_res = lxy_stencil_op_hcompute_lgxy_stencil_2_52_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_52_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_53_res = lxy_stencil_op_hcompute_lgxy_stencil_2_53_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_53_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_54_res = lxy_stencil_op_hcompute_lgxy_stencil_2_54_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_54_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_55_res = lxy_stencil_op_hcompute_lgxy_stencil_2_55_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_55_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_56_res = lxy_stencil_op_hcompute_lgxy_stencil_2_56_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_56_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_57_res = lxy_stencil_op_hcompute_lgxy_stencil_2_57_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_57_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_58_res = lxy_stencil_op_hcompute_lgxy_stencil_2_58_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_58_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_2_59_res = lxy_stencil_op_hcompute_lgxy_stencil_2_59_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_2_59_res);
	return result;
}

// op_hcompute_lgxy_stencil_3_read
//	lxy_stencil_op_hcompute_lgxy_stencil_3_40
//	lxy_stencil_op_hcompute_lgxy_stencil_3_41
//	lxy_stencil_op_hcompute_lgxy_stencil_3_42
//	lxy_stencil_op_hcompute_lgxy_stencil_3_43
//	lxy_stencil_op_hcompute_lgxy_stencil_3_44
//	lxy_stencil_op_hcompute_lgxy_stencil_3_45
//	lxy_stencil_op_hcompute_lgxy_stencil_3_46
//	lxy_stencil_op_hcompute_lgxy_stencil_3_47
//	lxy_stencil_op_hcompute_lgxy_stencil_3_48
inline hw_uint<144> lxy_stencil_op_hcompute_lgxy_stencil_3_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_op_hcompute_lgxy_stencil_3_40
    // lxy_stencil_op_hcompute_lgxy_stencil_3_41
    // lxy_stencil_op_hcompute_lgxy_stencil_3_42
    // lxy_stencil_op_hcompute_lgxy_stencil_3_43
    // lxy_stencil_op_hcompute_lgxy_stencil_3_44
    // lxy_stencil_op_hcompute_lgxy_stencil_3_45
    // lxy_stencil_op_hcompute_lgxy_stencil_3_46
    // lxy_stencil_op_hcompute_lgxy_stencil_3_47
    // lxy_stencil_op_hcompute_lgxy_stencil_3_48

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_40_res = lxy_stencil_op_hcompute_lgxy_stencil_3_40_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_40_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_41_res = lxy_stencil_op_hcompute_lgxy_stencil_3_41_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_41_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_42_res = lxy_stencil_op_hcompute_lgxy_stencil_3_42_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_42_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_43_res = lxy_stencil_op_hcompute_lgxy_stencil_3_43_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_43_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_44_res = lxy_stencil_op_hcompute_lgxy_stencil_3_44_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_44_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_45_res = lxy_stencil_op_hcompute_lgxy_stencil_3_45_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_45_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_46_res = lxy_stencil_op_hcompute_lgxy_stencil_3_46_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_46_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_47_res = lxy_stencil_op_hcompute_lgxy_stencil_3_47_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_47_res);
	hw_uint<16> lxy_stencil_op_hcompute_lgxy_stencil_3_48_res = lxy_stencil_op_hcompute_lgxy_stencil_3_48_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_op_hcompute_lgxy_stencil_3_48_res);
	return result;
}

// op_hcompute_lxy_stencil_1_write
//	lxy_stencil_op_hcompute_lxy_stencil_1_4
inline void lxy_stencil_op_hcompute_lxy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lxy_stencil_1_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_op_hcompute_lxy_stencil_1_4_res = op_hcompute_lxy_stencil_1_write.extract<0, 15>();
	lxy_stencil_op_hcompute_lxy_stencil_1_4_write(lxy_stencil_op_hcompute_lxy_stencil_1_4_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x_x, dynamic_address);
}

// op_hcompute_lxy_stencil_write
//	lxy_stencil_op_hcompute_lxy_stencil_7
inline void lxy_stencil_op_hcompute_lxy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lxy_stencil_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_op_hcompute_lxy_stencil_7_res = op_hcompute_lxy_stencil_write.extract<0, 15>();
	lxy_stencil_op_hcompute_lxy_stencil_7_write(lxy_stencil_op_hcompute_lxy_stencil_7_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x_x, dynamic_address);
}

struct lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_cache {
	// RAM Box: {[0, 69], [1, 69]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_cache {
	// RAM Box: {[0, 69], [0, 68]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
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
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 3 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 3 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 3 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
    // { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // # of banks: 2
  lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9_cache lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9;
  lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9_cache lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9;
};



inline void lyy_stencil_op_hcompute_lyy_stencil_1_0_write(hw_uint<16>& lyy_stencil_op_hcompute_lyy_stencil_1_0, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.push(lyy_stencil_op_hcompute_lyy_stencil_1_0);
}

inline void lyy_stencil_op_hcompute_lyy_stencil_2_write(hw_uint<16>& lyy_stencil_op_hcompute_lyy_stencil_2, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.push(lyy_stencil_op_hcompute_lyy_stencil_2);
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_27_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_27 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_71();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_28_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_28 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_71();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_29_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_29 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_70();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_30_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_30 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_36();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_31_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_31 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_36();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_32_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_32 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_35();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_33_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_33 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_1();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_34_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_34 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_0();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_35_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_2_35 read pattern: { op_hcompute_lgyy_stencil_2[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_1();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_16_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_16 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_71();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_17_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_17 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_70();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_18_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_18 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[1 + lgyy_s1_y, 3 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_70();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_19_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_19 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_36();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_20_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_20 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_35();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_21_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_21 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[2 + lgyy_s1_y, 3 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_35();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_22_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_22 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 1 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_1();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_23_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_23 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 3 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_1_0 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_1_0_merged_banks_9.peek_0();
  return value_lyy_stencil_op_hcompute_lyy_stencil_1_0;
  return 0;
}

inline hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_24_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // lyy_stencil_op_hcompute_lgyy_stencil_3_24 read pattern: { op_hcompute_lgyy_stencil_3[root = 0, lgyy_s1_y, lgyy_s1_x_x] -> lyy_stencil[3 + lgyy_s1_y, 2 + 2lgyy_s1_x_x] : -1 <= lgyy_s1_y <= 66 and 0 <= lgyy_s1_x_x <= 33 }
  // Read schedule : { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
  // Write schedule: { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
  auto value_lyy_stencil_op_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_op_hcompute_lyy_stencil_2_merged_banks_9.peek_0();
  return value_lyy_stencil_op_hcompute_lyy_stencil_2;
  return 0;
}

// # of bundles = 4
// op_hcompute_lgyy_stencil_2_read
//	lyy_stencil_op_hcompute_lgyy_stencil_2_27
//	lyy_stencil_op_hcompute_lgyy_stencil_2_28
//	lyy_stencil_op_hcompute_lgyy_stencil_2_29
//	lyy_stencil_op_hcompute_lgyy_stencil_2_30
//	lyy_stencil_op_hcompute_lgyy_stencil_2_31
//	lyy_stencil_op_hcompute_lgyy_stencil_2_32
//	lyy_stencil_op_hcompute_lgyy_stencil_2_33
//	lyy_stencil_op_hcompute_lgyy_stencil_2_34
//	lyy_stencil_op_hcompute_lgyy_stencil_2_35
inline hw_uint<144> lyy_stencil_op_hcompute_lgyy_stencil_2_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_op_hcompute_lgyy_stencil_2_27
    // lyy_stencil_op_hcompute_lgyy_stencil_2_28
    // lyy_stencil_op_hcompute_lgyy_stencil_2_29
    // lyy_stencil_op_hcompute_lgyy_stencil_2_30
    // lyy_stencil_op_hcompute_lgyy_stencil_2_31
    // lyy_stencil_op_hcompute_lgyy_stencil_2_32
    // lyy_stencil_op_hcompute_lgyy_stencil_2_33
    // lyy_stencil_op_hcompute_lgyy_stencil_2_34
    // lyy_stencil_op_hcompute_lgyy_stencil_2_35

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_27_res = lyy_stencil_op_hcompute_lgyy_stencil_2_27_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_27_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_28_res = lyy_stencil_op_hcompute_lgyy_stencil_2_28_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_28_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_29_res = lyy_stencil_op_hcompute_lgyy_stencil_2_29_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_29_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_30_res = lyy_stencil_op_hcompute_lgyy_stencil_2_30_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_30_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_31_res = lyy_stencil_op_hcompute_lgyy_stencil_2_31_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_31_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_32_res = lyy_stencil_op_hcompute_lgyy_stencil_2_32_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_32_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_33_res = lyy_stencil_op_hcompute_lgyy_stencil_2_33_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_33_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_34_res = lyy_stencil_op_hcompute_lgyy_stencil_2_34_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_34_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_2_35_res = lyy_stencil_op_hcompute_lgyy_stencil_2_35_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_2_35_res);
	return result;
}

// op_hcompute_lgyy_stencil_3_read
//	lyy_stencil_op_hcompute_lgyy_stencil_3_16
//	lyy_stencil_op_hcompute_lgyy_stencil_3_17
//	lyy_stencil_op_hcompute_lgyy_stencil_3_18
//	lyy_stencil_op_hcompute_lgyy_stencil_3_19
//	lyy_stencil_op_hcompute_lgyy_stencil_3_20
//	lyy_stencil_op_hcompute_lgyy_stencil_3_21
//	lyy_stencil_op_hcompute_lgyy_stencil_3_22
//	lyy_stencil_op_hcompute_lgyy_stencil_3_23
//	lyy_stencil_op_hcompute_lgyy_stencil_3_24
inline hw_uint<144> lyy_stencil_op_hcompute_lgyy_stencil_3_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_op_hcompute_lgyy_stencil_3_16
    // lyy_stencil_op_hcompute_lgyy_stencil_3_17
    // lyy_stencil_op_hcompute_lgyy_stencil_3_18
    // lyy_stencil_op_hcompute_lgyy_stencil_3_19
    // lyy_stencil_op_hcompute_lgyy_stencil_3_20
    // lyy_stencil_op_hcompute_lgyy_stencil_3_21
    // lyy_stencil_op_hcompute_lgyy_stencil_3_22
    // lyy_stencil_op_hcompute_lgyy_stencil_3_23
    // lyy_stencil_op_hcompute_lgyy_stencil_3_24

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_16_res = lyy_stencil_op_hcompute_lgyy_stencil_3_16_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_16_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_17_res = lyy_stencil_op_hcompute_lgyy_stencil_3_17_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_17_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_18_res = lyy_stencil_op_hcompute_lgyy_stencil_3_18_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_18_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_19_res = lyy_stencil_op_hcompute_lgyy_stencil_3_19_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_19_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_20_res = lyy_stencil_op_hcompute_lgyy_stencil_3_20_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_20_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_21_res = lyy_stencil_op_hcompute_lgyy_stencil_3_21_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_21_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_22_res = lyy_stencil_op_hcompute_lgyy_stencil_3_22_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_22_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_23_res = lyy_stencil_op_hcompute_lgyy_stencil_3_23_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_23_res);
	hw_uint<16> lyy_stencil_op_hcompute_lgyy_stencil_3_24_res = lyy_stencil_op_hcompute_lgyy_stencil_3_24_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_op_hcompute_lgyy_stencil_3_24_res);
	return result;
}

// op_hcompute_lyy_stencil_1_write
//	lyy_stencil_op_hcompute_lyy_stencil_1_0
inline void lyy_stencil_op_hcompute_lyy_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_lyy_stencil_1_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_op_hcompute_lyy_stencil_1_0_res = op_hcompute_lyy_stencil_1_write.extract<0, 15>();
	lyy_stencil_op_hcompute_lyy_stencil_1_0_write(lyy_stencil_op_hcompute_lyy_stencil_1_0_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x_x, dynamic_address);
}

// op_hcompute_lyy_stencil_write
//	lyy_stencil_op_hcompute_lyy_stencil_2
inline void lyy_stencil_op_hcompute_lyy_stencil_write_bundle_write(hw_uint<16>& op_hcompute_lyy_stencil_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_op_hcompute_lyy_stencil_2_res = op_hcompute_lyy_stencil_write.extract<0, 15>();
	lyy_stencil_op_hcompute_lyy_stencil_2_write(lyy_stencil_op_hcompute_lyy_stencil_2_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x_x, dynamic_address);
}

// Total re-use buffer capacity: 11360 bits


// Operation logic
inline void op_hcompute_hw_input_global_wrapper_glb_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_0, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_0
	auto hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__c__0_value = hw_input_stencil_clkwrk_0.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__c__0_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_1(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_1, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_1
	auto hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__c__1_value = hw_input_stencil_clkwrk_1.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__c__1_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_2(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_2, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_2
	auto hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__c__2_value = hw_input_stencil_clkwrk_2.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_3_rp__c__2_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_3(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_3, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_3
	auto hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_2_rp__c__0_value = hw_input_stencil_clkwrk_3.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_2_rp__c__0_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_4(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_4, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_4
	auto hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_2_rp__c__1_value = hw_input_stencil_clkwrk_4.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_4(hw_input_stencil_clkwrk_4_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_2_rp__c__1_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_glb_stencil_5(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_stencil_clkwrk_5, hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, int root, int hw_input_global_wrapper_s0_y, int hw_input_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_stencil_clkwrk_5
	auto hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_2_rp__c__2_value = hw_input_stencil_clkwrk_5.read();
	auto compute_result = hcompute_hw_input_global_wrapper_glb_stencil_5(hw_input_stencil_clkwrk_5_hw_input_global_wrapper_s0_y_c___lp__lp_hw_input_global_wrapper_s0_x_x_m_2_rp___p___m_2_rp__c__2_value);
	// Produce: hw_input_global_wrapper_glb_stencil
	hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_glb_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_glb_stencil, root, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__c__0_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__c__0_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__c__1_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__c__1_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__c__2_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp__c__2_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__c__0_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__c__0_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__c__1_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__c__1_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil_cache& hw_input_global_wrapper_glb_stencil, hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, int root, int hw_input_global_wrapper_global_wrapper_s0_y, int hw_input_global_wrapper_global_wrapper_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_glb_stencil
	auto hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__c__2_value = hw_input_global_wrapper_glb_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_read_bundle_read(hw_input_global_wrapper_glb_stencil/* source_delay */, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil__lp_hw_input_global_wrapper_global_wrapper_s0_y__p__3_rp__c___lp__lp_hw_input_global_wrapper_global_wrapper_s0_x_x_m_2_rp___p__1_rp__c__2_value);
	// Produce: hw_input_global_wrapper_global_wrapper_stencil
	hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5_write_bundle_write(/* arg names */compute_result, hw_input_global_wrapper_global_wrapper_stencil, root, hw_input_global_wrapper_global_wrapper_s0_y, hw_input_global_wrapper_global_wrapper_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_gray_stencil(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp_gray_s0_x_x_m_2_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_gray_stencil(hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp_gray_s0_x_x_m_2_rp__c__1_value);
	// Produce: gray_stencil
	gray_stencil_op_hcompute_gray_stencil_write_bundle_write(/* arg names */compute_result, gray_stencil, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_gray_stencil_1(hw_input_global_wrapper_global_wrapper_stencil_cache& hw_input_global_wrapper_global_wrapper_stencil, gray_stencil_cache& gray_stencil, int root, int gray_s0_y, int gray_s0_x_x) {
  // Dynamic address computation

	// Consume: hw_input_global_wrapper_global_wrapper_stencil
	auto hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp__lp_gray_s0_x_x_m_2_rp___p__1_rp__c__1_value = hw_input_global_wrapper_global_wrapper_stencil_op_hcompute_gray_stencil_1_read_bundle_read(hw_input_global_wrapper_global_wrapper_stencil/* source_delay */, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_gray_stencil_1(hw_input_global_wrapper_global_wrapper_stencil__lp_gray_s0_y__p__3_rp__c___lp__lp_gray_s0_x_x_m_2_rp___p__1_rp__c__1_value);
	// Produce: gray_stencil
	gray_stencil_op_hcompute_gray_stencil_1_write_bundle_write(/* arg names */compute_result, gray_stencil, root, gray_s0_y, gray_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_x_unclamp_stencil(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s0_y, int grad_x_unclamp_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_grad_x_unclamp_stencil();
	// Produce: grad_x_unclamp_stencil_clkwrk_dsa8
	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_write_bundle_write(/* arg names */compute_result, grad_x_unclamp_stencil_clkwrk_dsa8, root, grad_x_unclamp_s0_y, grad_x_unclamp_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_x_unclamp_stencil_1(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, int root, int grad_x_unclamp_s0_y, int grad_x_unclamp_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_grad_x_unclamp_stencil_1();
	// Produce: grad_x_unclamp_stencil_clkwrk_dsa8
	grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_1_write_bundle_write(/* arg names */compute_result, grad_x_unclamp_stencil_clkwrk_dsa8, root, grad_x_unclamp_s0_y, grad_x_unclamp_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_x_unclamp_stencil_2(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, gray_stencil_cache& gray_stencil, grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x) {
  // Dynamic address computation

	// Consume: grad_x_unclamp_stencil_clkwrk_dsa8
	auto grad_x_unclamp_stencil_clkwrk_dsa8__lp_grad_x_unclamp_s1_y__p__2_rp__c___lp_grad_x_unclamp_s1_x_x_m_2_rp__value = grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_2_read_bundle_read(grad_x_unclamp_stencil_clkwrk_dsa8/* source_delay */, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_grad_x_unclamp_s1_y__p__3_rp__c___lp__lp_grad_x_unclamp_s1_x_x_m_2_rp___p__2_rp__value = gray_stencil_op_hcompute_grad_x_unclamp_stencil_2_read_bundle_read(gray_stencil/* source_delay */, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_grad_x_unclamp_stencil_2(grad_x_unclamp_stencil_clkwrk_dsa8__lp_grad_x_unclamp_s1_y__p__2_rp__c___lp_grad_x_unclamp_s1_x_x_m_2_rp__value, gray_stencil__lp_grad_x_unclamp_s1_y__p__3_rp__c___lp__lp_grad_x_unclamp_s1_x_x_m_2_rp___p__2_rp__value);
	// Produce: grad_x_unclamp_stencil
	grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_2_write_bundle_write(/* arg names */compute_result, grad_x_unclamp_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_x_unclamp_stencil_3(grad_x_unclamp_stencil_clkwrk_dsa8_cache& grad_x_unclamp_stencil_clkwrk_dsa8, gray_stencil_cache& gray_stencil, grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, int root, int grad_x_unclamp_s1_y, int grad_x_unclamp_s1_x_x) {
  // Dynamic address computation

	// Consume: grad_x_unclamp_stencil_clkwrk_dsa8
	auto grad_x_unclamp_stencil_clkwrk_dsa8__lp_grad_x_unclamp_s1_y__p__2_rp__c___lp__lp_grad_x_unclamp_s1_x_x_m_2_rp___p__1_rp__value = grad_x_unclamp_stencil_clkwrk_dsa8_op_hcompute_grad_x_unclamp_stencil_3_read_bundle_read(grad_x_unclamp_stencil_clkwrk_dsa8/* source_delay */, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_grad_x_unclamp_s1_y__p__3_rp__c___lp__lp_grad_x_unclamp_s1_x_x_m_2_rp___p__1_rp__value = gray_stencil_op_hcompute_grad_x_unclamp_stencil_3_read_bundle_read(gray_stencil/* source_delay */, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_grad_x_unclamp_stencil_3(grad_x_unclamp_stencil_clkwrk_dsa8__lp_grad_x_unclamp_s1_y__p__2_rp__c___lp__lp_grad_x_unclamp_s1_x_x_m_2_rp___p__1_rp__value, gray_stencil__lp_grad_x_unclamp_s1_y__p__3_rp__c___lp__lp_grad_x_unclamp_s1_x_x_m_2_rp___p__1_rp__value);
	// Produce: grad_x_unclamp_stencil
	grad_x_unclamp_stencil_op_hcompute_grad_x_unclamp_stencil_3_write_bundle_write(/* arg names */compute_result, grad_x_unclamp_stencil, root, grad_x_unclamp_s1_y, grad_x_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lxx_stencil(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x_x) {
  // Dynamic address computation

	// Consume: grad_x_unclamp_stencil
	auto grad_x_unclamp_stencil__lp_lxx_s0_y__p__2_rp__c___lp_lxx_s0_x_x_m_2_rp__value = grad_x_unclamp_stencil_op_hcompute_lxx_stencil_read_bundle_read(grad_x_unclamp_stencil/* source_delay */, root, lxx_s0_y, lxx_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lxx_stencil(grad_x_unclamp_stencil__lp_lxx_s0_y__p__2_rp__c___lp_lxx_s0_x_x_m_2_rp__value);
	// Produce: lxx_stencil
	lxx_stencil_op_hcompute_lxx_stencil_write_bundle_write(/* arg names */compute_result, lxx_stencil, root, lxx_s0_y, lxx_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lxx_stencil_1(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x_x) {
  // Dynamic address computation

	// Consume: grad_x_unclamp_stencil
	auto grad_x_unclamp_stencil__lp_lxx_s0_y__p__2_rp__c___lp__lp_lxx_s0_x_x_m_2_rp___p__1_rp__value = grad_x_unclamp_stencil_op_hcompute_lxx_stencil_1_read_bundle_read(grad_x_unclamp_stencil/* source_delay */, root, lxx_s0_y, lxx_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lxx_stencil_1(grad_x_unclamp_stencil__lp_lxx_s0_y__p__2_rp__c___lp__lp_lxx_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: lxx_stencil
	lxx_stencil_op_hcompute_lxx_stencil_1_write_bundle_write(/* arg names */compute_result, lxx_stencil, root, lxx_s0_y, lxx_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxx_stencil(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s0_y, int lgxx_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil();
	// Produce: lgxx_stencil_clkwrk_dsa10
	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_write_bundle_write(/* arg names */compute_result, lgxx_stencil_clkwrk_dsa10, root, lgxx_s0_y, lgxx_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, int root, int lgxx_s0_y, int lgxx_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil_1();
	// Produce: lgxx_stencil_clkwrk_dsa10
	lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_1_write_bundle_write(/* arg names */compute_result, lgxx_stencil_clkwrk_dsa10, root, lgxx_s0_y, lgxx_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxx_stencil_2(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, lxx_stencil_cache& lxx_stencil, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil_clkwrk_dsa10
	auto lgxx_stencil_clkwrk_dsa10__lp_lgxx_s1_y__p__1_rp__c___lp_lgxx_s1_x_x_m_2_rp__value = lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_2_read_bundle_read(lgxx_stencil_clkwrk_dsa10/* source_delay */, root, lgxx_s1_y, lgxx_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lxx_stencil
	auto lxx_stencil__lp_lgxx_s1_y__p__1_rp__c___lp_lgxx_s1_x_x_m_2_rp__value = lxx_stencil_op_hcompute_lgxx_stencil_2_read_bundle_read(lxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgxx_stencil_2(lgxx_stencil_clkwrk_dsa10__lp_lgxx_s1_y__p__1_rp__c___lp_lgxx_s1_x_x_m_2_rp__value, lxx_stencil__lp_lgxx_s1_y__p__1_rp__c___lp_lgxx_s1_x_x_m_2_rp__value);
	// Produce: lgxx_stencil
	lgxx_stencil_op_hcompute_lgxx_stencil_2_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxx_stencil_3(lgxx_stencil_clkwrk_dsa10_cache& lgxx_stencil_clkwrk_dsa10, lxx_stencil_cache& lxx_stencil, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil_clkwrk_dsa10
	auto lgxx_stencil_clkwrk_dsa10__lp_lgxx_s1_y__p__1_rp__c___lp__lp_lgxx_s1_x_x_m_2_rp___p__1_rp__value = lgxx_stencil_clkwrk_dsa10_op_hcompute_lgxx_stencil_3_read_bundle_read(lgxx_stencil_clkwrk_dsa10/* source_delay */, root, lgxx_s1_y, lgxx_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lxx_stencil
	auto lxx_stencil__lp_lgxx_s1_y__p__1_rp__c___lp__lp_lgxx_s1_x_x_m_2_rp___p__1_rp__value = lxx_stencil_op_hcompute_lgxx_stencil_3_read_bundle_read(lxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgxx_stencil_3(lgxx_stencil_clkwrk_dsa10__lp_lgxx_s1_y__p__1_rp__c___lp__lp_lgxx_s1_x_x_m_2_rp___p__1_rp__value, lxx_stencil__lp_lgxx_s1_y__p__1_rp__c___lp__lp_lgxx_s1_x_x_m_2_rp___p__1_rp__value);
	// Produce: lgxx_stencil
	lgxx_stencil_op_hcompute_lgxx_stencil_3_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_y_unclamp_stencil(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s0_y, int grad_y_unclamp_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_grad_y_unclamp_stencil();
	// Produce: grad_y_unclamp_stencil_clkwrk_dsa9
	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_write_bundle_write(/* arg names */compute_result, grad_y_unclamp_stencil_clkwrk_dsa9, root, grad_y_unclamp_s0_y, grad_y_unclamp_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_y_unclamp_stencil_1(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, int root, int grad_y_unclamp_s0_y, int grad_y_unclamp_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_grad_y_unclamp_stencil_1();
	// Produce: grad_y_unclamp_stencil_clkwrk_dsa9
	grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_1_write_bundle_write(/* arg names */compute_result, grad_y_unclamp_stencil_clkwrk_dsa9, root, grad_y_unclamp_s0_y, grad_y_unclamp_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_y_unclamp_stencil_2(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, gray_stencil_cache& gray_stencil, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x) {
  // Dynamic address computation

	// Consume: grad_y_unclamp_stencil_clkwrk_dsa9
	auto grad_y_unclamp_stencil_clkwrk_dsa9__lp_grad_y_unclamp_s1_y__p__2_rp__c___lp_grad_y_unclamp_s1_x_x_m_2_rp__value = grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_2_read_bundle_read(grad_y_unclamp_stencil_clkwrk_dsa9/* source_delay */, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_grad_y_unclamp_s1_y__p__4_rp__c___lp__lp_grad_y_unclamp_s1_x_x_m_2_rp___p__1_rp__value = gray_stencil_op_hcompute_grad_y_unclamp_stencil_2_read_bundle_read(gray_stencil/* source_delay */, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_grad_y_unclamp_stencil_2(grad_y_unclamp_stencil_clkwrk_dsa9__lp_grad_y_unclamp_s1_y__p__2_rp__c___lp_grad_y_unclamp_s1_x_x_m_2_rp__value, gray_stencil__lp_grad_y_unclamp_s1_y__p__4_rp__c___lp__lp_grad_y_unclamp_s1_x_x_m_2_rp___p__1_rp__value);
	// Produce: grad_y_unclamp_stencil
	grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_2_write_bundle_write(/* arg names */compute_result, grad_y_unclamp_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_grad_y_unclamp_stencil_3(grad_y_unclamp_stencil_clkwrk_dsa9_cache& grad_y_unclamp_stencil_clkwrk_dsa9, gray_stencil_cache& gray_stencil, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, int root, int grad_y_unclamp_s1_y, int grad_y_unclamp_s1_x_x) {
  // Dynamic address computation

	// Consume: grad_y_unclamp_stencil_clkwrk_dsa9
	auto grad_y_unclamp_stencil_clkwrk_dsa9__lp_grad_y_unclamp_s1_y__p__2_rp__c___lp__lp_grad_y_unclamp_s1_x_x_m_2_rp___p__1_rp__value = grad_y_unclamp_stencil_clkwrk_dsa9_op_hcompute_grad_y_unclamp_stencil_3_read_bundle_read(grad_y_unclamp_stencil_clkwrk_dsa9/* source_delay */, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: gray_stencil
	auto gray_stencil__lp_grad_y_unclamp_s1_y__p__4_rp__c___lp__lp_grad_y_unclamp_s1_x_x_m_2_rp___p__2_rp__value = gray_stencil_op_hcompute_grad_y_unclamp_stencil_3_read_bundle_read(gray_stencil/* source_delay */, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_grad_y_unclamp_stencil_3(grad_y_unclamp_stencil_clkwrk_dsa9__lp_grad_y_unclamp_s1_y__p__2_rp__c___lp__lp_grad_y_unclamp_s1_x_x_m_2_rp___p__1_rp__value, gray_stencil__lp_grad_y_unclamp_s1_y__p__4_rp__c___lp__lp_grad_y_unclamp_s1_x_x_m_2_rp___p__2_rp__value);
	// Produce: grad_y_unclamp_stencil
	grad_y_unclamp_stencil_op_hcompute_grad_y_unclamp_stencil_3_write_bundle_write(/* arg names */compute_result, grad_y_unclamp_stencil, root, grad_y_unclamp_s1_y, grad_y_unclamp_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lxy_stencil(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x_x) {
  // Dynamic address computation

	// Consume: grad_x_unclamp_stencil
	auto grad_x_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp_lxy_s0_x_x_m_2_rp__value = grad_x_unclamp_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_x_unclamp_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: grad_y_unclamp_stencil
	auto grad_y_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp_lxy_s0_x_x_m_2_rp__value = grad_y_unclamp_stencil_op_hcompute_lxy_stencil_read_bundle_read(grad_y_unclamp_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lxy_stencil(grad_x_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp_lxy_s0_x_x_m_2_rp__value, grad_y_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp_lxy_s0_x_x_m_2_rp__value);
	// Produce: lxy_stencil
	lxy_stencil_op_hcompute_lxy_stencil_write_bundle_write(/* arg names */compute_result, lxy_stencil, root, lxy_s0_y, lxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lxy_stencil_1(grad_x_unclamp_stencil_cache& grad_x_unclamp_stencil, grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x_x) {
  // Dynamic address computation

	// Consume: grad_x_unclamp_stencil
	auto grad_x_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp__lp_lxy_s0_x_x_m_2_rp___p__1_rp__value = grad_x_unclamp_stencil_op_hcompute_lxy_stencil_1_read_bundle_read(grad_x_unclamp_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: grad_y_unclamp_stencil
	auto grad_y_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp__lp_lxy_s0_x_x_m_2_rp___p__1_rp__value = grad_y_unclamp_stencil_op_hcompute_lxy_stencil_1_read_bundle_read(grad_y_unclamp_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lxy_stencil_1(grad_x_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp__lp_lxy_s0_x_x_m_2_rp___p__1_rp__value, grad_y_unclamp_stencil__lp_lxy_s0_y__p__2_rp__c___lp__lp_lxy_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: lxy_stencil
	lxy_stencil_op_hcompute_lxy_stencil_1_write_bundle_write(/* arg names */compute_result, lxy_stencil, root, lxy_s0_y, lxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxy_stencil(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s0_y, int lgxy_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxy_stencil();
	// Produce: lgxy_stencil_clkwrk_dsa11
	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_write_bundle_write(/* arg names */compute_result, lgxy_stencil_clkwrk_dsa11, root, lgxy_s0_y, lgxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, int root, int lgxy_s0_y, int lgxy_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxy_stencil_1();
	// Produce: lgxy_stencil_clkwrk_dsa11
	lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_1_write_bundle_write(/* arg names */compute_result, lgxy_stencil_clkwrk_dsa11, root, lgxy_s0_y, lgxy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxy_stencil_2(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, lxy_stencil_cache& lxy_stencil, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x) {
  // Dynamic address computation

	// Consume: lgxy_stencil_clkwrk_dsa11
	auto lgxy_stencil_clkwrk_dsa11__lp_lgxy_s1_y__p__1_rp__c___lp_lgxy_s1_x_x_m_2_rp__value = lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_2_read_bundle_read(lgxy_stencil_clkwrk_dsa11/* source_delay */, root, lgxy_s1_y, lgxy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lxy_stencil
	auto lxy_stencil__lp_lgxy_s1_y__p__1_rp__c___lp_lgxy_s1_x_x_m_2_rp__value = lxy_stencil_op_hcompute_lgxy_stencil_2_read_bundle_read(lxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgxy_stencil_2(lgxy_stencil_clkwrk_dsa11__lp_lgxy_s1_y__p__1_rp__c___lp_lgxy_s1_x_x_m_2_rp__value, lxy_stencil__lp_lgxy_s1_y__p__1_rp__c___lp_lgxy_s1_x_x_m_2_rp__value);
	// Produce: lgxy_stencil
	lgxy_stencil_op_hcompute_lgxy_stencil_2_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgxy_stencil_3(lgxy_stencil_clkwrk_dsa11_cache& lgxy_stencil_clkwrk_dsa11, lxy_stencil_cache& lxy_stencil, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x_x) {
  // Dynamic address computation

	// Consume: lgxy_stencil_clkwrk_dsa11
	auto lgxy_stencil_clkwrk_dsa11__lp_lgxy_s1_y__p__1_rp__c___lp__lp_lgxy_s1_x_x_m_2_rp___p__1_rp__value = lgxy_stencil_clkwrk_dsa11_op_hcompute_lgxy_stencil_3_read_bundle_read(lgxy_stencil_clkwrk_dsa11/* source_delay */, root, lgxy_s1_y, lgxy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lxy_stencil
	auto lxy_stencil__lp_lgxy_s1_y__p__1_rp__c___lp__lp_lgxy_s1_x_x_m_2_rp___p__1_rp__value = lxy_stencil_op_hcompute_lgxy_stencil_3_read_bundle_read(lxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgxy_stencil_3(lgxy_stencil_clkwrk_dsa11__lp_lgxy_s1_y__p__1_rp__c___lp__lp_lgxy_s1_x_x_m_2_rp___p__1_rp__value, lxy_stencil__lp_lgxy_s1_y__p__1_rp__c___lp__lp_lgxy_s1_x_x_m_2_rp___p__1_rp__value);
	// Produce: lgxy_stencil
	lgxy_stencil_op_hcompute_lgxy_stencil_3_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lyy_stencil(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x_x) {
  // Dynamic address computation

	// Consume: grad_y_unclamp_stencil
	auto grad_y_unclamp_stencil__lp_lyy_s0_y__p__2_rp__c___lp_lyy_s0_x_x_m_2_rp__value = grad_y_unclamp_stencil_op_hcompute_lyy_stencil_read_bundle_read(grad_y_unclamp_stencil/* source_delay */, root, lyy_s0_y, lyy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lyy_stencil(grad_y_unclamp_stencil__lp_lyy_s0_y__p__2_rp__c___lp_lyy_s0_x_x_m_2_rp__value);
	// Produce: lyy_stencil
	lyy_stencil_op_hcompute_lyy_stencil_write_bundle_write(/* arg names */compute_result, lyy_stencil, root, lyy_s0_y, lyy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lyy_stencil_1(grad_y_unclamp_stencil_cache& grad_y_unclamp_stencil, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x_x) {
  // Dynamic address computation

	// Consume: grad_y_unclamp_stencil
	auto grad_y_unclamp_stencil__lp_lyy_s0_y__p__2_rp__c___lp__lp_lyy_s0_x_x_m_2_rp___p__1_rp__value = grad_y_unclamp_stencil_op_hcompute_lyy_stencil_1_read_bundle_read(grad_y_unclamp_stencil/* source_delay */, root, lyy_s0_y, lyy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lyy_stencil_1(grad_y_unclamp_stencil__lp_lyy_s0_y__p__2_rp__c___lp__lp_lyy_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: lyy_stencil
	lyy_stencil_op_hcompute_lyy_stencil_1_write_bundle_write(/* arg names */compute_result, lyy_stencil, root, lyy_s0_y, lyy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgyy_stencil(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s0_y, int lgyy_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil();
	// Produce: lgyy_stencil_clkwrk_dsa12
	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_write_bundle_write(/* arg names */compute_result, lgyy_stencil_clkwrk_dsa12, root, lgyy_s0_y, lgyy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, int root, int lgyy_s0_y, int lgyy_s0_x_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil_1();
	// Produce: lgyy_stencil_clkwrk_dsa12
	lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_1_write_bundle_write(/* arg names */compute_result, lgyy_stencil_clkwrk_dsa12, root, lgyy_s0_y, lgyy_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgyy_stencil_2(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, lyy_stencil_cache& lyy_stencil, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x) {
  // Dynamic address computation

	// Consume: lgyy_stencil_clkwrk_dsa12
	auto lgyy_stencil_clkwrk_dsa12__lp_lgyy_s1_y__p__1_rp__c___lp_lgyy_s1_x_x_m_2_rp__value = lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_2_read_bundle_read(lgyy_stencil_clkwrk_dsa12/* source_delay */, root, lgyy_s1_y, lgyy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lyy_stencil
	auto lyy_stencil__lp_lgyy_s1_y__p__1_rp__c___lp_lgyy_s1_x_x_m_2_rp__value = lyy_stencil_op_hcompute_lgyy_stencil_2_read_bundle_read(lyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgyy_stencil_2(lgyy_stencil_clkwrk_dsa12__lp_lgyy_s1_y__p__1_rp__c___lp_lgyy_s1_x_x_m_2_rp__value, lyy_stencil__lp_lgyy_s1_y__p__1_rp__c___lp_lgyy_s1_x_x_m_2_rp__value);
	// Produce: lgyy_stencil
	lgyy_stencil_op_hcompute_lgyy_stencil_2_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_lgyy_stencil_3(lgyy_stencil_clkwrk_dsa12_cache& lgyy_stencil_clkwrk_dsa12, lyy_stencil_cache& lyy_stencil, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x_x) {
  // Dynamic address computation

	// Consume: lgyy_stencil_clkwrk_dsa12
	auto lgyy_stencil_clkwrk_dsa12__lp_lgyy_s1_y__p__1_rp__c___lp__lp_lgyy_s1_x_x_m_2_rp___p__1_rp__value = lgyy_stencil_clkwrk_dsa12_op_hcompute_lgyy_stencil_3_read_bundle_read(lgyy_stencil_clkwrk_dsa12/* source_delay */, root, lgyy_s1_y, lgyy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lyy_stencil
	auto lyy_stencil__lp_lgyy_s1_y__p__1_rp__c___lp__lp_lgyy_s1_x_x_m_2_rp___p__1_rp__value = lyy_stencil_op_hcompute_lgyy_stencil_3_read_bundle_read(lyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_lgyy_stencil_3(lgyy_stencil_clkwrk_dsa12__lp_lgyy_s1_y__p__1_rp__c___lp__lp_lgyy_s1_x_x_m_2_rp___p__1_rp__value, lyy_stencil__lp_lgyy_s1_y__p__1_rp__c___lp__lp_lgyy_s1_x_x_m_2_rp___p__1_rp__value);
	// Produce: lgyy_stencil
	lgyy_stencil_op_hcompute_lgyy_stencil_3_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_cim_stencil(lgxx_stencil_cache& lgxx_stencil, lgxy_stencil_cache& lgxy_stencil, lgyy_stencil_cache& lgyy_stencil, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil__lp_cim_s0_y__p__1_rp__c___lp_cim_s0_x_x_m_2_rp__value = lgxx_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxx_stencil/* source_delay */, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lgxy_stencil
	auto lgxy_stencil__lp_cim_s0_y__p__1_rp__c___lp_cim_s0_x_x_m_2_rp__value = lgxy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgxy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lgyy_stencil
	auto lgyy_stencil__lp_cim_s0_y__p__1_rp__c___lp_cim_s0_x_x_m_2_rp__value = lgyy_stencil_op_hcompute_cim_stencil_read_bundle_read(lgyy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_cim_stencil(lgxx_stencil__lp_cim_s0_y__p__1_rp__c___lp_cim_s0_x_x_m_2_rp__value, lgxy_stencil__lp_cim_s0_y__p__1_rp__c___lp_cim_s0_x_x_m_2_rp__value, lgyy_stencil__lp_cim_s0_y__p__1_rp__c___lp_cim_s0_x_x_m_2_rp__value);
	// Produce: cim_stencil
	cim_stencil_op_hcompute_cim_stencil_write_bundle_write(/* arg names */compute_result, cim_stencil, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_cim_stencil_1(lgxx_stencil_cache& lgxx_stencil, lgxy_stencil_cache& lgxy_stencil, lgyy_stencil_cache& lgyy_stencil, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil__lp_cim_s0_y__p__1_rp__c___lp__lp_cim_s0_x_x_m_2_rp___p__1_rp__value = lgxx_stencil_op_hcompute_cim_stencil_1_read_bundle_read(lgxx_stencil/* source_delay */, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lgxy_stencil
	auto lgxy_stencil__lp_cim_s0_y__p__1_rp__c___lp__lp_cim_s0_x_x_m_2_rp___p__1_rp__value = lgxy_stencil_op_hcompute_cim_stencil_1_read_bundle_read(lgxy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	// Consume: lgyy_stencil
	auto lgyy_stencil__lp_cim_s0_y__p__1_rp__c___lp__lp_cim_s0_x_x_m_2_rp___p__1_rp__value = lgyy_stencil_op_hcompute_cim_stencil_1_read_bundle_read(lgyy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_cim_stencil_1(lgxx_stencil__lp_cim_s0_y__p__1_rp__c___lp__lp_cim_s0_x_x_m_2_rp___p__1_rp__value, lgxy_stencil__lp_cim_s0_y__p__1_rp__c___lp__lp_cim_s0_x_x_m_2_rp___p__1_rp__value, lgyy_stencil__lp_cim_s0_y__p__1_rp__c___lp__lp_cim_s0_x_x_m_2_rp___p__1_rp__value);
	// Produce: cim_stencil
	cim_stencil_op_hcompute_cim_stencil_1_write_bundle_write(/* arg names */compute_result, cim_stencil, root, cim_s0_y, cim_s0_x_x, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil(cim_stencil_cache& cim_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: cim_stencil
	auto cim_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_2_rp__value = cim_stencil_op_hcompute_hw_output_glb_stencil_read_bundle_read(cim_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil(cim_stencil_hw_output_s0_y_yi_c___lp_hw_output_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_glb_stencil_1(cim_stencil_cache& cim_stencil, hw_output_glb_stencil_cache& hw_output_glb_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: cim_stencil
	auto cim_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value = cim_stencil_op_hcompute_hw_output_glb_stencil_1_read_bundle_read(cim_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_glb_stencil_1(cim_stencil_hw_output_s0_y_yi_c___lp__lp_hw_output_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_glb_stencil
	hw_output_glb_stencil_op_hcompute_hw_output_glb_stencil_1_write_bundle_write(/* arg names */compute_result, hw_output_glb_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_6, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp__value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_6
	hw_output_global_wrapper_stencil_clkwrk_6.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_cache& hw_output_glb_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_7, int root, int hw_output_global_wrapper_s0_y_yi, int hw_output_global_wrapper_s0_x_xi_xi) {
  // Dynamic address computation

	// Consume: hw_output_glb_stencil
	auto hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__value = hw_output_glb_stencil_op_hcompute_hw_output_global_wrapper_stencil_1_read_bundle_read(hw_output_glb_stencil/* source_delay */, root, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil_hw_output_global_wrapper_s0_y_yi_c___lp__lp_hw_output_global_wrapper_s0_x_xi_xi_m_2_rp___p__1_rp__value);
	// Produce: hw_output_global_wrapper_stencil_clkwrk_7
	hw_output_global_wrapper_stencil_clkwrk_7.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void harris_color(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_7) {

#ifndef __SYNTHESIS__
  ofstream debug_file("harris_color_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  cim_stencil_cache cim_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  grad_x_unclamp_stencil_cache grad_x_unclamp_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  grad_x_unclamp_stencil_clkwrk_dsa8_cache grad_x_unclamp_stencil_clkwrk_dsa8;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  grad_y_unclamp_stencil_cache grad_y_unclamp_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  grad_y_unclamp_stencil_clkwrk_dsa9_cache grad_y_unclamp_stencil_clkwrk_dsa9;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  gray_stencil_cache gray_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_glb_stencil_cache hw_input_global_wrapper_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_input_global_wrapper_global_wrapper_stencil_cache hw_input_global_wrapper_global_wrapper_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  hw_output_glb_stencil_cache hw_output_glb_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxx_stencil_cache lgxx_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxx_stencil_clkwrk_dsa10_cache lgxx_stencil_clkwrk_dsa10;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxy_stencil_cache lgxy_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgxy_stencil_clkwrk_dsa11_cache lgxy_stencil_clkwrk_dsa11;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgyy_stencil_cache lgyy_stencil;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  lgyy_stencil_clkwrk_dsa12_cache lgyy_stencil_clkwrk_dsa12;
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
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32; op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_grad_x_unclamp_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 15] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 31] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_grad_y_unclamp_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 25] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_grad_y_unclamp_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 24] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 37] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_lgyy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 36] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32; op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 32; op_hcompute_lgxx_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 20] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 45] : 0 <= d1 <= 65 and 0 <= d2 <= 32; op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 21] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_lgxy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 30] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33; op_hcompute_grad_x_unclamp_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 14] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34; op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 35; op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
//   { op_hcompute_lyy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 35] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_lyy_stencil_1(((((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 11] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 43] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
// Condition for op_hcompute_hw_output_glb_stencil_1(((((-43 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_gray_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 13] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_gray_stencil_1(((((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lxx_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 19] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_lxx_stencil_1(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_x_unclamp_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 15] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_x_unclamp_stencil_1(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 31] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxy_stencil_1(((((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_cim_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 41] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_cim_stencil_1(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_x_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 17] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_x_unclamp_stencil_3(((((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_y_unclamp_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 25] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_y_unclamp_stencil_1(((((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxx_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 22] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxx_stencil_2(((((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_x_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 16] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_x_unclamp_stencil_2(((((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_y_unclamp_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 24] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_y_unclamp_stencil(((((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 7] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(((((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_1[d0 = 0, d1, d2] -> [0, d1, d2, 1] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_1(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 33] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxy_stencil_3(((((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lxx_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 18] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_lxx_stencil(((((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgyy_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 37] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgyy_stencil_1(((((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 9] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(((((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_cim_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 40] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_cim_stencil(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxx_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 23] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxx_stencil_3(((((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgyy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 36] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgyy_stencil(((((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 0] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil(((((1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgyy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 38] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgyy_stencil_2(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_glb_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 42] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
// Condition for op_hcompute_hw_output_glb_stencil(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_y_unclamp_stencil_2[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 26] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_y_unclamp_stencil_2(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 44] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil(((((-44 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxx_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 20] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxx_stencil(((((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgyy_stencil_3[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 39] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgyy_stencil_3(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_y_unclamp_stencil_3[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 27] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_y_unclamp_stencil_3(((((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lxy_stencil_1[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 29] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_lxy_stencil_1(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_3[d0 = 0, d1, d2] -> [0, d1, d2, 3] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_3(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_output_global_wrapper_stencil_1[d0 = 0, d1, d2] -> [0, 3 + d1, 3 + d2, 45] : 0 <= d1 <= 65 and 0 <= d2 <= 32 }
// Condition for op_hcompute_hw_output_global_wrapper_stencil_1(((((-45 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-3 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxx_stencil_1[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 21] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxx_stencil_1(((((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_gray_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 12] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_gray_stencil(((((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 8] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(((((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxy_stencil[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 30] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxy_stencil(((((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 10] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lgxy_stencil_2[d0 = 0, d1, d2] -> [0, 2 + d1, 2 + d2, 32] : -1 <= d1 <= 66 and 0 <= d2 <= 33 }
// Condition for op_hcompute_lgxy_stencil_2(((((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_grad_x_unclamp_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 14] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_grad_x_unclamp_stencil(((((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_4[d0 = 0, d1, d2] -> [0, d1, d2, 4] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_4(((((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lxy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 28] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_lxy_stencil(((((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_lyy_stencil[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 34] : -2 <= d1 <= 67 and 0 <= d2 <= 34 }
// Condition for op_hcompute_lyy_stencil(((((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((1 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_5[d0 = 0, d1, d2] -> [0, d1, d2, 5] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_5(((((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_global_wrapper_stencil[d0 = 0, d1, d2] -> [0, d1, d2, 6] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))
//   { op_hcompute_hw_input_global_wrapper_glb_stencil_2[d0 = 0, d1, d2] -> [0, d1, d2, 2] : -3 <= d1 <= 68 and 0 <= d2 <= 35 }
// Condition for op_hcompute_hw_input_global_wrapper_glb_stencil_2(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((3 + 1*i1)) >= 0) && (((68 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((35 + -1*i2)) >= 0)))

	for (int c1 = -3; c1 <= 68; c1 += 1){ 
	#pragma hls_pipeline_init_interval 1 
	  for (int c2 = 0; c2 <= 35; c2 += 1) { 
	    op_hcompute_hw_input_global_wrapper_glb_stencil(hw_input_stencil_clkwrk_0 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_1(hw_input_stencil_clkwrk_1 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_2(hw_input_stencil_clkwrk_2 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_3(hw_input_stencil_clkwrk_3 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_4(hw_input_stencil_clkwrk_4 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_glb_stencil_5(hw_input_stencil_clkwrk_5 /* buf name */, hw_input_global_wrapper_glb_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_input_global_wrapper_glb_stencil /* buf name */, hw_input_global_wrapper_global_wrapper_stencil, 0, c1, c2);
	    op_hcompute_gray_stencil(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, gray_stencil, 0, c1, c2);
	    op_hcompute_gray_stencil_1(hw_input_global_wrapper_global_wrapper_stencil /* buf name */, gray_stencil, 0, c1, c2);
	    if (c1 >= -1 && c2 >= 1) {
	      op_hcompute_grad_x_unclamp_stencil(grad_x_unclamp_stencil_clkwrk_dsa8, 0, c1 - 1, c2 - 1);
	      op_hcompute_grad_x_unclamp_stencil_1(grad_x_unclamp_stencil_clkwrk_dsa8, 0, c1 - 1, c2 - 1);
	      op_hcompute_grad_x_unclamp_stencil_2(grad_x_unclamp_stencil_clkwrk_dsa8 /* buf name */, gray_stencil /* buf name */, grad_x_unclamp_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_grad_x_unclamp_stencil_3(grad_x_unclamp_stencil_clkwrk_dsa8 /* buf name */, gray_stencil /* buf name */, grad_x_unclamp_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lxx_stencil(grad_x_unclamp_stencil /* buf name */, lxx_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lxx_stencil_1(grad_x_unclamp_stencil /* buf name */, lxx_stencil, 0, c1 - 1, c2 - 1);
	      if (c1 >= 1 && c2 >= 2) {
	        op_hcompute_lgxx_stencil(lgxx_stencil_clkwrk_dsa10, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxx_stencil_1(lgxx_stencil_clkwrk_dsa10, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxx_stencil_2(lgxx_stencil_clkwrk_dsa10 /* buf name */, lxx_stencil /* buf name */, lgxx_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxx_stencil_3(lgxx_stencil_clkwrk_dsa10 /* buf name */, lxx_stencil /* buf name */, lgxx_stencil, 0, c1 - 2, c2 - 2);
	      }
	      op_hcompute_grad_y_unclamp_stencil(grad_y_unclamp_stencil_clkwrk_dsa9, 0, c1 - 1, c2 - 1);
	      op_hcompute_grad_y_unclamp_stencil_1(grad_y_unclamp_stencil_clkwrk_dsa9, 0, c1 - 1, c2 - 1);
	      op_hcompute_grad_y_unclamp_stencil_2(grad_y_unclamp_stencil_clkwrk_dsa9 /* buf name */, gray_stencil /* buf name */, grad_y_unclamp_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_grad_y_unclamp_stencil_3(grad_y_unclamp_stencil_clkwrk_dsa9 /* buf name */, gray_stencil /* buf name */, grad_y_unclamp_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lxy_stencil(grad_x_unclamp_stencil /* buf name */, grad_y_unclamp_stencil /* buf name */, lxy_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lxy_stencil_1(grad_x_unclamp_stencil /* buf name */, grad_y_unclamp_stencil /* buf name */, lxy_stencil, 0, c1 - 1, c2 - 1);
	      if (c1 >= 1 && c2 >= 2) {
	        op_hcompute_lgxy_stencil(lgxy_stencil_clkwrk_dsa11, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxy_stencil_1(lgxy_stencil_clkwrk_dsa11, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxy_stencil_2(lgxy_stencil_clkwrk_dsa11 /* buf name */, lxy_stencil /* buf name */, lgxy_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgxy_stencil_3(lgxy_stencil_clkwrk_dsa11 /* buf name */, lxy_stencil /* buf name */, lgxy_stencil, 0, c1 - 2, c2 - 2);
	      }
	      op_hcompute_lyy_stencil(grad_y_unclamp_stencil /* buf name */, lyy_stencil, 0, c1 - 1, c2 - 1);
	      op_hcompute_lyy_stencil_1(grad_y_unclamp_stencil /* buf name */, lyy_stencil, 0, c1 - 1, c2 - 1);
	      if (c1 >= 1 && c2 >= 2) {
	        op_hcompute_lgyy_stencil(lgyy_stencil_clkwrk_dsa12, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgyy_stencil_1(lgyy_stencil_clkwrk_dsa12, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgyy_stencil_2(lgyy_stencil_clkwrk_dsa12 /* buf name */, lyy_stencil /* buf name */, lgyy_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_lgyy_stencil_3(lgyy_stencil_clkwrk_dsa12 /* buf name */, lyy_stencil /* buf name */, lgyy_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_cim_stencil(lgxx_stencil /* buf name */, lgxy_stencil /* buf name */, lgyy_stencil /* buf name */, cim_stencil, 0, c1 - 2, c2 - 2);
	        op_hcompute_cim_stencil_1(lgxx_stencil /* buf name */, lgxy_stencil /* buf name */, lgyy_stencil /* buf name */, cim_stencil, 0, c1 - 2, c2 - 2);
	        if (c1 >= 3 && c2 >= 3) {
	          op_hcompute_hw_output_glb_stencil(cim_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 3);
	          op_hcompute_hw_output_glb_stencil_1(cim_stencil /* buf name */, hw_output_glb_stencil, 0, c1 - 3, c2 - 3);
	          op_hcompute_hw_output_global_wrapper_stencil(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_6, 0, c1 - 3, c2 - 3);
	          op_hcompute_hw_output_global_wrapper_stencil_1(hw_output_glb_stencil /* buf name */, hw_output_global_wrapper_stencil_clkwrk_7, 0, c1 - 3, c2 - 3);
	        }
	      }
	    }
	  }
	
	 } 
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void harris_color_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_0, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_1, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_2, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_3, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_4, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_stencil_clkwrk_5, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_6, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_global_wrapper_stencil_clkwrk_7, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    harris_color(hw_input_stencil_clkwrk_0, hw_input_stencil_clkwrk_1, hw_input_stencil_clkwrk_2, hw_input_stencil_clkwrk_3, hw_input_stencil_clkwrk_4, hw_input_stencil_clkwrk_5, hw_output_global_wrapper_stencil_clkwrk_6, hw_output_global_wrapper_stencil_clkwrk_7);
  }
}
#ifdef __SYNTHESIS__
  // { op_hcompute_hw_input_global_wrapper_glb_stencil[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_0[hw_input_global_wrapper_s0_y, -3 + 2hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers = 2592;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_1[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_1[hw_input_global_wrapper_s0_y, -3 + 2hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers = 2592;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_2[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_2[hw_input_global_wrapper_s0_y, -3 + 2hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers = 2592;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_3[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_3[hw_input_global_wrapper_s0_y, -2 + 2hw_input_global_wrapper_s0_x_x, 0] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers = 2592;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_4[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_4[hw_input_global_wrapper_s0_y, -2 + 2hw_input_global_wrapper_s0_x_x, 1] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_num_transfers = 2592;
  // { op_hcompute_hw_input_global_wrapper_glb_stencil_5[root = 0, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_x_x] -> hw_input_stencil_clkwrk_5[hw_input_global_wrapper_s0_y, -2 + 2hw_input_global_wrapper_s0_x_x, 2] : -3 <= hw_input_global_wrapper_s0_y <= 68 and 0 <= hw_input_global_wrapper_s0_x_x <= 35 }
const int op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_num_transfers = 2592;
  // { op_hcompute_hw_output_global_wrapper_stencil[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_6[hw_output_global_wrapper_s0_y_yi, 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 32 }
const int op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers = 2178;
  // { op_hcompute_hw_output_global_wrapper_stencil_1[root = 0, hw_output_global_wrapper_s0_y_yi, hw_output_global_wrapper_s0_x_xi_xi] -> hw_output_global_wrapper_stencil_clkwrk_7[hw_output_global_wrapper_s0_y_yi, 1 + 2hw_output_global_wrapper_s0_x_xi_xi] : 0 <= hw_output_global_wrapper_s0_y_yi <= 65 and 0 <= hw_output_global_wrapper_s0_x_xi_xi <= 32 }
const int op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers = 2178;


extern "C" {

void harris_color_accel(hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, hw_uint<16>* op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, hw_uint<16>* op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem3
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_num_transfers*size);
  burst_read<16>(op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_num_transfers*size);

  harris_color_wrapper(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0_channel, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0_num_transfers*size);
  burst_write<16>(op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_channel, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0_num_transfers*size);
}

}
extern "C" {

void harris_color_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, HWStream<hw_uint<16> >& op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_write_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  harris_color(op_hcompute_hw_input_global_wrapper_glb_stencil_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_1_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_2_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_3_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_4_read_pipe0, op_hcompute_hw_input_global_wrapper_glb_stencil_5_read_pipe0, op_hcompute_hw_output_global_wrapper_stencil_write_pipe0, op_hcompute_hw_output_global_wrapper_stencil_1_write_pipe0);

}

}
#endif //__SYNTHESIS__

