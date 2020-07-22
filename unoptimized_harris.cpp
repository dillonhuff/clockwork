#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: harris_compute.h
#include "harris_compute.h"

#include "hw_classes.h"

struct cim_output_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[0, 57], [0, 57]}
	// Capacity: 3364
  hw_uint<16> RAM[3364];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3364)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3364);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3364)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3364);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_output_stencil_cache {
  // # of banks: 1
  cim_output_stencil_all_inputs_to_all_outputs_cache cim_output_stencil_all_inputs_to_all_outputs;
};



inline void cim_output_stencil_hcompute_cim_output_stencil_54_write(hw_uint<16>& cim_output_stencil_hcompute_cim_output_stencil_54, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  cim_output_stencil.cim_output_stencil_all_inputs_to_all_outputs.write(cim_output_stencil_hcompute_cim_output_stencil_54, (cim_output_s0_x - 0) * 1 + (cim_output_s0_y - 0) * 58);
}

inline hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_74_select(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_output_stencil_hcompute_hw_output_stencil_74 read pattern: { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> cim_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
  auto value_cim_output_stencil_hcompute_cim_output_stencil_54 = cim_output_stencil.cim_output_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 58);
  return value_cim_output_stencil_hcompute_cim_output_stencil_54;
  return 0;
}

// # of bundles = 2
// hcompute_cim_output_stencil_write
//	cim_output_stencil_hcompute_cim_output_stencil_54
inline void cim_output_stencil_hcompute_cim_output_stencil_write_bundle_write(hw_uint<16>& hcompute_cim_output_stencil_write, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
	hw_uint<16> cim_output_stencil_hcompute_cim_output_stencil_54_res = hcompute_cim_output_stencil_write.extract<0, 15>();
	cim_output_stencil_hcompute_cim_output_stencil_54_write(cim_output_stencil_hcompute_cim_output_stencil_54_res, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
}

// hcompute_hw_output_stencil_read
//	cim_output_stencil_hcompute_hw_output_stencil_74
inline hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil_cache& cim_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // cim_output_stencil_hcompute_hw_output_stencil_74

	hw_uint<16> result;
	hw_uint<16> cim_output_stencil_hcompute_hw_output_stencil_74_res = cim_output_stencil_hcompute_hw_output_stencil_74_select(cim_output_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, cim_output_stencil_hcompute_hw_output_stencil_74_res);
	return result;
}

#include "hw_classes.h"

struct cim_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
  hw_uint<16> RAM[3721];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct cim_stencil_cache {
  // # of banks: 1
  cim_stencil_all_inputs_to_all_outputs_cache cim_stencil_all_inputs_to_all_outputs;
};



inline void cim_stencil_hcompute_cim_stencil_50_write(hw_uint<16>& cim_stencil_hcompute_cim_stencil_50, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  cim_stencil.cim_stencil_all_inputs_to_all_outputs.write(cim_stencil_hcompute_cim_stencil_50, (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_55_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_55 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_56_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_56 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_57_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_57 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_58_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_58 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, -1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (-1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_59_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_59 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_60_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_60 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_61_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_61 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[-1 + cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_62_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_62 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

inline hw_uint<16> cim_stencil_hcompute_cim_output_stencil_63_select(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // cim_stencil_hcompute_cim_output_stencil_63 read pattern: { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> cim_stencil[1 + cim_output_s0_x, 1 + cim_output_s0_y] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
  auto value_cim_stencil_hcompute_cim_stencil_50 = cim_stencil.cim_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + cim_output_s0_x - -1) * 1 + (1 + cim_output_s0_y - -1) * 61);
  return value_cim_stencil_hcompute_cim_stencil_50;
  return 0;
}

// # of bundles = 2
// hcompute_cim_output_stencil_read
//	cim_stencil_hcompute_cim_output_stencil_55
//	cim_stencil_hcompute_cim_output_stencil_56
//	cim_stencil_hcompute_cim_output_stencil_57
//	cim_stencil_hcompute_cim_output_stencil_58
//	cim_stencil_hcompute_cim_output_stencil_59
//	cim_stencil_hcompute_cim_output_stencil_60
//	cim_stencil_hcompute_cim_output_stencil_61
//	cim_stencil_hcompute_cim_output_stencil_62
//	cim_stencil_hcompute_cim_output_stencil_63
inline hw_uint<144> cim_stencil_hcompute_cim_output_stencil_read_bundle_read(cim_stencil_cache& cim_stencil, int root, int cim_output_s0_y, int cim_output_s0_x, int dynamic_address) {
  // # of ports in bundle: 9
    // cim_stencil_hcompute_cim_output_stencil_55
    // cim_stencil_hcompute_cim_output_stencil_56
    // cim_stencil_hcompute_cim_output_stencil_57
    // cim_stencil_hcompute_cim_output_stencil_58
    // cim_stencil_hcompute_cim_output_stencil_59
    // cim_stencil_hcompute_cim_output_stencil_60
    // cim_stencil_hcompute_cim_output_stencil_61
    // cim_stencil_hcompute_cim_output_stencil_62
    // cim_stencil_hcompute_cim_output_stencil_63

	hw_uint<144> result;
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_55_res = cim_stencil_hcompute_cim_output_stencil_55_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<0, 144>(result, cim_stencil_hcompute_cim_output_stencil_55_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_56_res = cim_stencil_hcompute_cim_output_stencil_56_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<16, 144>(result, cim_stencil_hcompute_cim_output_stencil_56_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_57_res = cim_stencil_hcompute_cim_output_stencil_57_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<32, 144>(result, cim_stencil_hcompute_cim_output_stencil_57_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_58_res = cim_stencil_hcompute_cim_output_stencil_58_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<48, 144>(result, cim_stencil_hcompute_cim_output_stencil_58_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_59_res = cim_stencil_hcompute_cim_output_stencil_59_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<64, 144>(result, cim_stencil_hcompute_cim_output_stencil_59_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_60_res = cim_stencil_hcompute_cim_output_stencil_60_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<80, 144>(result, cim_stencil_hcompute_cim_output_stencil_60_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_61_res = cim_stencil_hcompute_cim_output_stencil_61_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<96, 144>(result, cim_stencil_hcompute_cim_output_stencil_61_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_62_res = cim_stencil_hcompute_cim_output_stencil_62_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<112, 144>(result, cim_stencil_hcompute_cim_output_stencil_62_res);
	hw_uint<16> cim_stencil_hcompute_cim_output_stencil_63_res = cim_stencil_hcompute_cim_output_stencil_63_select(cim_stencil, root, cim_output_s0_y, cim_output_s0_x, dynamic_address);
	set_at<128, 144>(result, cim_stencil_hcompute_cim_output_stencil_63_res);
	return result;
}

// hcompute_cim_stencil_write
//	cim_stencil_hcompute_cim_stencil_50
inline void cim_stencil_hcompute_cim_stencil_write_bundle_write(hw_uint<16>& hcompute_cim_stencil_write, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
	hw_uint<16> cim_stencil_hcompute_cim_stencil_50_res = hcompute_cim_stencil_write.extract<0, 15>();
	cim_stencil_hcompute_cim_stencil_50_write(cim_stencil_hcompute_cim_stencil_50_res, cim_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct grad_x_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
  hw_uint<16> RAM[4096];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct grad_x_stencil_cache {
  // # of banks: 1
  grad_x_stencil_all_inputs_to_all_outputs_cache grad_x_stencil_all_inputs_to_all_outputs;
};



inline void grad_x_stencil_hcompute_grad_x_stencil_38_write(hw_uint<16>& grad_x_stencil_hcompute_grad_x_stencil_38, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.write(grad_x_stencil_hcompute_grad_x_stencil_38, (grad_x_s0_x - -2) * 1 + (grad_x_s0_y - -2) * 64);
}

inline hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_65_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_hcompute_lxx_stencil_65 read pattern: { hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> grad_x_stencil[lxx_s0_x, lxx_s0_y] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61 }
  auto value_grad_x_stencil_hcompute_grad_x_stencil_38 = grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
  return value_grad_x_stencil_hcompute_grad_x_stencil_38;
  return 0;
}

inline hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_48_select(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_x_stencil_hcompute_lxy_stencil_48 read pattern: { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_x_stencil[lxy_s0_x, lxy_s0_y] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
  auto value_grad_x_stencil_hcompute_grad_x_stencil_38 = grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  return value_grad_x_stencil_hcompute_grad_x_stencil_38;
  return 0;
}

// # of bundles = 3
// hcompute_grad_x_stencil_write
//	grad_x_stencil_hcompute_grad_x_stencil_38
inline void grad_x_stencil_hcompute_grad_x_stencil_write_bundle_write(hw_uint<16>& hcompute_grad_x_stencil_write, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
	hw_uint<16> grad_x_stencil_hcompute_grad_x_stencil_38_res = hcompute_grad_x_stencil_write.extract<0, 15>();
	grad_x_stencil_hcompute_grad_x_stencil_38_write(grad_x_stencil_hcompute_grad_x_stencil_38_res, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
}

// hcompute_lxx_stencil_read
//	grad_x_stencil_hcompute_lxx_stencil_65
inline hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_hcompute_lxx_stencil_65

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_hcompute_lxx_stencil_65_res = grad_x_stencil_hcompute_lxx_stencil_65_select(grad_x_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_hcompute_lxx_stencil_65_res);
	return result;
}

// hcompute_lxy_stencil_read
//	grad_x_stencil_hcompute_lxy_stencil_48
inline hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil_cache& grad_x_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_x_stencil_hcompute_lxy_stencil_48

	hw_uint<16> result;
	hw_uint<16> grad_x_stencil_hcompute_lxy_stencil_48_res = grad_x_stencil_hcompute_lxy_stencil_48_select(grad_x_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_x_stencil_hcompute_lxy_stencil_48_res);
	return result;
}

#include "hw_classes.h"

struct grad_y_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
  hw_uint<16> RAM[4096];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct grad_y_stencil_cache {
  // # of banks: 1
  grad_y_stencil_all_inputs_to_all_outputs_cache grad_y_stencil_all_inputs_to_all_outputs;
};



inline void grad_y_stencil_hcompute_grad_y_stencil_66_write(hw_uint<16>& grad_y_stencil_hcompute_grad_y_stencil_66, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.write(grad_y_stencil_hcompute_grad_y_stencil_66, (grad_y_s0_x - -2) * 1 + (grad_y_s0_y - -2) * 64);
}

inline hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_49_select(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_hcompute_lxy_stencil_49 read pattern: { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> grad_y_stencil[lxy_s0_x, lxy_s0_y] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
  auto value_grad_y_stencil_hcompute_grad_y_stencil_66 = grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
  return value_grad_y_stencil_hcompute_grad_y_stencil_66;
  return 0;
}

inline hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_3_select(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // grad_y_stencil_hcompute_lyy_stencil_3 read pattern: { hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> grad_y_stencil[lyy_s0_x, lyy_s0_y] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
  auto value_grad_y_stencil_hcompute_grad_y_stencil_66 = grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
  return value_grad_y_stencil_hcompute_grad_y_stencil_66;
  return 0;
}

// # of bundles = 3
// hcompute_grad_y_stencil_write
//	grad_y_stencil_hcompute_grad_y_stencil_66
inline void grad_y_stencil_hcompute_grad_y_stencil_write_bundle_write(hw_uint<16>& hcompute_grad_y_stencil_write, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
	hw_uint<16> grad_y_stencil_hcompute_grad_y_stencil_66_res = hcompute_grad_y_stencil_write.extract<0, 15>();
	grad_y_stencil_hcompute_grad_y_stencil_66_write(grad_y_stencil_hcompute_grad_y_stencil_66_res, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
}

// hcompute_lxy_stencil_read
//	grad_y_stencil_hcompute_lxy_stencil_49
inline hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_hcompute_lxy_stencil_49

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_hcompute_lxy_stencil_49_res = grad_y_stencil_hcompute_lxy_stencil_49_select(grad_y_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_hcompute_lxy_stencil_49_res);
	return result;
}

// hcompute_lyy_stencil_read
//	grad_y_stencil_hcompute_lyy_stencil_3
inline hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil_cache& grad_y_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // grad_y_stencil_hcompute_lyy_stencil_3

	hw_uint<16> result;
	hw_uint<16> grad_y_stencil_hcompute_lyy_stencil_3_res = grad_y_stencil_hcompute_lyy_stencil_3_select(grad_y_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
	set_at<0, 16>(result, grad_y_stencil_hcompute_lyy_stencil_3_res);
	return result;
}

#include "hw_classes.h"

struct lgxx_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
  hw_uint<16> RAM[3721];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgxx_stencil_cache {
  // # of banks: 1
  lgxx_stencil_all_inputs_to_all_outputs_cache lgxx_stencil_all_inputs_to_all_outputs;
};



inline void lgxx_stencil_hcompute_lgxx_stencil_0_write(hw_uint<16>& lgxx_stencil_hcompute_lgxx_stencil_0, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.write(lgxx_stencil_hcompute_lgxx_stencil_0, (lgxx_s0_x - -1) * 1 + (lgxx_s0_y - -1) * 61);
}

inline void lgxx_stencil_hcompute_lgxx_stencil_1_27_write(hw_uint<16>& lgxx_stencil_hcompute_lgxx_stencil_1_27, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.write(lgxx_stencil_hcompute_lgxx_stencil_1_27, (lgxx_s1_x - -1) * 1 + (lgxx_s1_y - -1) * 61);
}

inline hw_uint<16> lgxx_stencil_hcompute_cim_stencil_51_select(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_hcompute_cim_stencil_51 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxx_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgxx_stencil_hcompute_lgxx_stencil_0 = lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgxx_stencil_hcompute_lgxx_stencil_0;
  return 0;
}

inline hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_28_select(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxx_stencil_hcompute_lgxx_stencil_1_28 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lgxx_stencil[lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lgxx_stencil_hcompute_lgxx_stencil_0 = lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxx_s1_x - -1) * 1 + (lgxx_s1_y - -1) * 61);
  return value_lgxx_stencil_hcompute_lgxx_stencil_0;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgxx_stencil_hcompute_cim_stencil_51
inline hw_uint<16> lgxx_stencil_hcompute_cim_stencil_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_hcompute_cim_stencil_51

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_hcompute_cim_stencil_51_res = lgxx_stencil_hcompute_cim_stencil_51_select(lgxx_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_hcompute_cim_stencil_51_res);
	return result;
}

// hcompute_lgxx_stencil_1_read
//	lgxx_stencil_hcompute_lgxx_stencil_1_28
inline hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxx_stencil_hcompute_lgxx_stencil_1_28

	hw_uint<16> result;
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_28_res = lgxx_stencil_hcompute_lgxx_stencil_1_28_select(lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxx_stencil_hcompute_lgxx_stencil_1_28_res);
	return result;
}

// hcompute_lgxx_stencil_1_write
//	lgxx_stencil_hcompute_lgxx_stencil_1_27
inline void lgxx_stencil_hcompute_lgxx_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgxx_stencil_1_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_1_27_res = hcompute_lgxx_stencil_1_write.extract<0, 15>();
	lgxx_stencil_hcompute_lgxx_stencil_1_27_write(lgxx_stencil_hcompute_lgxx_stencil_1_27_res, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
}

// hcompute_lgxx_stencil_write
//	lgxx_stencil_hcompute_lgxx_stencil_0
inline void lgxx_stencil_hcompute_lgxx_stencil_write_bundle_write(hw_uint<16>& hcompute_lgxx_stencil_write, lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x, int dynamic_address) {
	hw_uint<16> lgxx_stencil_hcompute_lgxx_stencil_0_res = hcompute_lgxx_stencil_write.extract<0, 15>();
	lgxx_stencil_hcompute_lgxx_stencil_0_write(lgxx_stencil_hcompute_lgxx_stencil_0_res, lgxx_stencil, root, lgxx_s0_y, lgxx_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lgxy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
  hw_uint<16> RAM[3721];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgxy_stencil_cache {
  // # of banks: 1
  lgxy_stencil_all_inputs_to_all_outputs_cache lgxy_stencil_all_inputs_to_all_outputs;
};



inline void lgxy_stencil_hcompute_lgxy_stencil_15_write(hw_uint<16>& lgxy_stencil_hcompute_lgxy_stencil_15, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.write(lgxy_stencil_hcompute_lgxy_stencil_15, (lgxy_s0_x - -1) * 1 + (lgxy_s0_y - -1) * 61);
}

inline void lgxy_stencil_hcompute_lgxy_stencil_1_4_write(hw_uint<16>& lgxy_stencil_hcompute_lgxy_stencil_1_4, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.write(lgxy_stencil_hcompute_lgxy_stencil_1_4, (lgxy_s1_x - -1) * 1 + (lgxy_s1_y - -1) * 61);
}

inline hw_uint<16> lgxy_stencil_hcompute_cim_stencil_52_select(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_hcompute_cim_stencil_52 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgxy_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgxy_stencil_hcompute_lgxy_stencil_15 = lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgxy_stencil_hcompute_lgxy_stencil_15;
  return 0;
}

inline hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_5_select(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgxy_stencil_hcompute_lgxy_stencil_1_5 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lgxy_stencil[lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lgxy_stencil_hcompute_lgxy_stencil_15 = lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxy_s1_x - -1) * 1 + (lgxy_s1_y - -1) * 61);
  return value_lgxy_stencil_hcompute_lgxy_stencil_15;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgxy_stencil_hcompute_cim_stencil_52
inline hw_uint<16> lgxy_stencil_hcompute_cim_stencil_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_hcompute_cim_stencil_52

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_hcompute_cim_stencil_52_res = lgxy_stencil_hcompute_cim_stencil_52_select(lgxy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_hcompute_cim_stencil_52_res);
	return result;
}

// hcompute_lgxy_stencil_1_read
//	lgxy_stencil_hcompute_lgxy_stencil_1_5
inline hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgxy_stencil_hcompute_lgxy_stencil_1_5

	hw_uint<16> result;
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_5_res = lgxy_stencil_hcompute_lgxy_stencil_1_5_select(lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgxy_stencil_hcompute_lgxy_stencil_1_5_res);
	return result;
}

// hcompute_lgxy_stencil_1_write
//	lgxy_stencil_hcompute_lgxy_stencil_1_4
inline void lgxy_stencil_hcompute_lgxy_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgxy_stencil_1_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_1_4_res = hcompute_lgxy_stencil_1_write.extract<0, 15>();
	lgxy_stencil_hcompute_lgxy_stencil_1_4_write(lgxy_stencil_hcompute_lgxy_stencil_1_4_res, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
}

// hcompute_lgxy_stencil_write
//	lgxy_stencil_hcompute_lgxy_stencil_15
inline void lgxy_stencil_hcompute_lgxy_stencil_write_bundle_write(hw_uint<16>& hcompute_lgxy_stencil_write, lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x, int dynamic_address) {
	hw_uint<16> lgxy_stencil_hcompute_lgxy_stencil_15_res = hcompute_lgxy_stencil_write.extract<0, 15>();
	lgxy_stencil_hcompute_lgxy_stencil_15_write(lgxy_stencil_hcompute_lgxy_stencil_15_res, lgxy_stencil, root, lgxy_s0_y, lgxy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lgyy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-1, 59], [-1, 59]}
	// Capacity: 3721
  hw_uint<16> RAM[3721];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3721)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3721);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lgyy_stencil_cache {
  // # of banks: 1
  lgyy_stencil_all_inputs_to_all_outputs_cache lgyy_stencil_all_inputs_to_all_outputs;
};



inline void lgyy_stencil_hcompute_lgyy_stencil_1_write(hw_uint<16>& lgyy_stencil_hcompute_lgyy_stencil_1, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.write(lgyy_stencil_hcompute_lgyy_stencil_1, (lgyy_s0_x - -1) * 1 + (lgyy_s0_y - -1) * 61);
}

inline void lgyy_stencil_hcompute_lgyy_stencil_1_16_write(hw_uint<16>& lgyy_stencil_hcompute_lgyy_stencil_1_16, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.write(lgyy_stencil_hcompute_lgyy_stencil_1_16, (lgyy_s1_x - -1) * 1 + (lgyy_s1_y - -1) * 61);
}

inline hw_uint<16> lgyy_stencil_hcompute_cim_stencil_53_select(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_hcompute_cim_stencil_53 read pattern: { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> lgyy_stencil[cim_s0_x, cim_s0_y] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
  auto value_lgyy_stencil_hcompute_lgyy_stencil_1 = lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (cim_s0_x - -1) * 1 + (cim_s0_y - -1) * 61);
  return value_lgyy_stencil_hcompute_lgyy_stencil_1;
  return 0;
}

inline hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_17_select(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lgyy_stencil_hcompute_lgyy_stencil_1_17 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lgyy_stencil[lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lgyy_stencil_hcompute_lgyy_stencil_1 = lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgyy_s1_x - -1) * 1 + (lgyy_s1_y - -1) * 61);
  return value_lgyy_stencil_hcompute_lgyy_stencil_1;
  return 0;
}

// # of bundles = 4
// hcompute_cim_stencil_read
//	lgyy_stencil_hcompute_cim_stencil_53
inline hw_uint<16> lgyy_stencil_hcompute_cim_stencil_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int cim_s0_y, int cim_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_hcompute_cim_stencil_53

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_hcompute_cim_stencil_53_res = lgyy_stencil_hcompute_cim_stencil_53_select(lgyy_stencil, root, cim_s0_y, cim_s0_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_hcompute_cim_stencil_53_res);
	return result;
}

// hcompute_lgyy_stencil_1_read
//	lgyy_stencil_hcompute_lgyy_stencil_1_17
inline hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // lgyy_stencil_hcompute_lgyy_stencil_1_17

	hw_uint<16> result;
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_17_res = lgyy_stencil_hcompute_lgyy_stencil_1_17_select(lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 16>(result, lgyy_stencil_hcompute_lgyy_stencil_1_17_res);
	return result;
}

// hcompute_lgyy_stencil_1_write
//	lgyy_stencil_hcompute_lgyy_stencil_1_16
inline void lgyy_stencil_hcompute_lgyy_stencil_1_write_bundle_write(hw_uint<16>& hcompute_lgyy_stencil_1_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_16_res = hcompute_lgyy_stencil_1_write.extract<0, 15>();
	lgyy_stencil_hcompute_lgyy_stencil_1_16_write(lgyy_stencil_hcompute_lgyy_stencil_1_16_res, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
}

// hcompute_lgyy_stencil_write
//	lgyy_stencil_hcompute_lgyy_stencil_1
inline void lgyy_stencil_hcompute_lgyy_stencil_write_bundle_write(hw_uint<16>& hcompute_lgyy_stencil_write, lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x, int dynamic_address) {
	hw_uint<16> lgyy_stencil_hcompute_lgyy_stencil_1_res = hcompute_lgyy_stencil_write.extract<0, 15>();
	lgyy_stencil_hcompute_lgyy_stencil_1_write(lgyy_stencil_hcompute_lgyy_stencil_1_res, lgyy_stencil, root, lgyy_s0_y, lgyy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lxx_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
  hw_uint<16> RAM[4096];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxx_stencil_cache {
  // # of banks: 1
  lxx_stencil_all_inputs_to_all_outputs_cache lxx_stencil_all_inputs_to_all_outputs;
};



inline void lxx_stencil_hcompute_lxx_stencil_64_write(hw_uint<16>& lxx_stencil_hcompute_lxx_stencil_64, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
  lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.write(lxx_stencil_hcompute_lxx_stencil_64, (lxx_s0_x - -2) * 1 + (lxx_s0_y - -2) * 64);
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_29_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_29 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_30_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_30 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_31_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_31 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, -1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (-1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_32_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_32 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_33_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_33 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_34_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_34 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_35_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_35 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[-1 + lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_36_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_36 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[1 + lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

inline hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_37_select(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxx_stencil_hcompute_lgxx_stencil_1_37 read pattern: { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> lxx_stencil[lgxx_s1_x, 1 + lgxx_s1_y] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
  auto value_lxx_stencil_hcompute_lxx_stencil_64 = lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxx_s1_x - -2) * 1 + (1 + lgxx_s1_y - -2) * 64);
  return value_lxx_stencil_hcompute_lxx_stencil_64;
  return 0;
}

// # of bundles = 2
// hcompute_lgxx_stencil_1_read
//	lxx_stencil_hcompute_lgxx_stencil_1_29
//	lxx_stencil_hcompute_lgxx_stencil_1_30
//	lxx_stencil_hcompute_lgxx_stencil_1_31
//	lxx_stencil_hcompute_lgxx_stencil_1_32
//	lxx_stencil_hcompute_lgxx_stencil_1_33
//	lxx_stencil_hcompute_lgxx_stencil_1_34
//	lxx_stencil_hcompute_lgxx_stencil_1_35
//	lxx_stencil_hcompute_lgxx_stencil_1_36
//	lxx_stencil_hcompute_lgxx_stencil_1_37
inline hw_uint<144> lxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxx_stencil_hcompute_lgxx_stencil_1_29
    // lxx_stencil_hcompute_lgxx_stencil_1_30
    // lxx_stencil_hcompute_lgxx_stencil_1_31
    // lxx_stencil_hcompute_lgxx_stencil_1_32
    // lxx_stencil_hcompute_lgxx_stencil_1_33
    // lxx_stencil_hcompute_lgxx_stencil_1_34
    // lxx_stencil_hcompute_lgxx_stencil_1_35
    // lxx_stencil_hcompute_lgxx_stencil_1_36
    // lxx_stencil_hcompute_lgxx_stencil_1_37

	hw_uint<144> result;
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_29_res = lxx_stencil_hcompute_lgxx_stencil_1_29_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<0, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_29_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_30_res = lxx_stencil_hcompute_lgxx_stencil_1_30_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<16, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_30_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_31_res = lxx_stencil_hcompute_lgxx_stencil_1_31_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<32, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_31_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_32_res = lxx_stencil_hcompute_lgxx_stencil_1_32_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<48, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_32_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_33_res = lxx_stencil_hcompute_lgxx_stencil_1_33_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<64, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_33_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_34_res = lxx_stencil_hcompute_lgxx_stencil_1_34_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<80, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_34_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_35_res = lxx_stencil_hcompute_lgxx_stencil_1_35_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<96, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_35_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_36_res = lxx_stencil_hcompute_lgxx_stencil_1_36_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<112, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_36_res);
	hw_uint<16> lxx_stencil_hcompute_lgxx_stencil_1_37_res = lxx_stencil_hcompute_lgxx_stencil_1_37_select(lxx_stencil, root, lgxx_s1_y, lgxx_s1_x, dynamic_address);
	set_at<128, 144>(result, lxx_stencil_hcompute_lgxx_stencil_1_37_res);
	return result;
}

// hcompute_lxx_stencil_write
//	lxx_stencil_hcompute_lxx_stencil_64
inline void lxx_stencil_hcompute_lxx_stencil_write_bundle_write(hw_uint<16>& hcompute_lxx_stencil_write, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x, int dynamic_address) {
	hw_uint<16> lxx_stencil_hcompute_lxx_stencil_64_res = hcompute_lxx_stencil_write.extract<0, 15>();
	lxx_stencil_hcompute_lxx_stencil_64_write(lxx_stencil_hcompute_lxx_stencil_64_res, lxx_stencil, root, lxx_s0_y, lxx_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lxy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
  hw_uint<16> RAM[4096];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lxy_stencil_cache {
  // # of banks: 1
  lxy_stencil_all_inputs_to_all_outputs_cache lxy_stencil_all_inputs_to_all_outputs;
};



inline void lxy_stencil_hcompute_lxy_stencil_47_write(hw_uint<16>& lxy_stencil_hcompute_lxy_stencil_47, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
  lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.write(lxy_stencil_hcompute_lxy_stencil_47, (lxy_s0_x - -2) * 1 + (lxy_s0_y - -2) * 64);
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_10_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_10 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_11_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_11 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_12_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_12 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_13_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_13 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_14_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_14 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, 1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_6_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_6 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_7_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_7 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_8_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_8 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[1 + lgxy_s1_x, -1 + lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgxy_s1_x - -2) * 1 + (-1 + lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

inline hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_9_select(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lxy_stencil_hcompute_lgxy_stencil_1_9 read pattern: { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> lxy_stencil[-1 + lgxy_s1_x, lgxy_s1_y] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
  auto value_lxy_stencil_hcompute_lxy_stencil_47 = lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgxy_s1_x - -2) * 1 + (lgxy_s1_y - -2) * 64);
  return value_lxy_stencil_hcompute_lxy_stencil_47;
  return 0;
}

// # of bundles = 2
// hcompute_lgxy_stencil_1_read
//	lxy_stencil_hcompute_lgxy_stencil_1_6
//	lxy_stencil_hcompute_lgxy_stencil_1_7
//	lxy_stencil_hcompute_lgxy_stencil_1_8
//	lxy_stencil_hcompute_lgxy_stencil_1_9
//	lxy_stencil_hcompute_lgxy_stencil_1_10
//	lxy_stencil_hcompute_lgxy_stencil_1_11
//	lxy_stencil_hcompute_lgxy_stencil_1_12
//	lxy_stencil_hcompute_lgxy_stencil_1_13
//	lxy_stencil_hcompute_lgxy_stencil_1_14
inline hw_uint<144> lxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lxy_stencil_hcompute_lgxy_stencil_1_6
    // lxy_stencil_hcompute_lgxy_stencil_1_7
    // lxy_stencil_hcompute_lgxy_stencil_1_8
    // lxy_stencil_hcompute_lgxy_stencil_1_9
    // lxy_stencil_hcompute_lgxy_stencil_1_10
    // lxy_stencil_hcompute_lgxy_stencil_1_11
    // lxy_stencil_hcompute_lgxy_stencil_1_12
    // lxy_stencil_hcompute_lgxy_stencil_1_13
    // lxy_stencil_hcompute_lgxy_stencil_1_14

	hw_uint<144> result;
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_6_res = lxy_stencil_hcompute_lgxy_stencil_1_6_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<0, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_6_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_7_res = lxy_stencil_hcompute_lgxy_stencil_1_7_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<16, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_7_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_8_res = lxy_stencil_hcompute_lgxy_stencil_1_8_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<32, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_8_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_9_res = lxy_stencil_hcompute_lgxy_stencil_1_9_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<48, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_9_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_10_res = lxy_stencil_hcompute_lgxy_stencil_1_10_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<64, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_10_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_11_res = lxy_stencil_hcompute_lgxy_stencil_1_11_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<80, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_11_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_12_res = lxy_stencil_hcompute_lgxy_stencil_1_12_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<96, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_12_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_13_res = lxy_stencil_hcompute_lgxy_stencil_1_13_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<112, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_13_res);
	hw_uint<16> lxy_stencil_hcompute_lgxy_stencil_1_14_res = lxy_stencil_hcompute_lgxy_stencil_1_14_select(lxy_stencil, root, lgxy_s1_y, lgxy_s1_x, dynamic_address);
	set_at<128, 144>(result, lxy_stencil_hcompute_lgxy_stencil_1_14_res);
	return result;
}

// hcompute_lxy_stencil_write
//	lxy_stencil_hcompute_lxy_stencil_47
inline void lxy_stencil_hcompute_lxy_stencil_write_bundle_write(hw_uint<16>& hcompute_lxy_stencil_write, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x, int dynamic_address) {
	hw_uint<16> lxy_stencil_hcompute_lxy_stencil_47_res = hcompute_lxy_stencil_write.extract<0, 15>();
	lxy_stencil_hcompute_lxy_stencil_47_write(lxy_stencil_hcompute_lxy_stencil_47_res, lxy_stencil, root, lxy_s0_y, lxy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct lyy_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-2, 61], [-2, 61]}
	// Capacity: 4096
  hw_uint<16> RAM[4096];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4096)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4096);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct lyy_stencil_cache {
  // # of banks: 1
  lyy_stencil_all_inputs_to_all_outputs_cache lyy_stencil_all_inputs_to_all_outputs;
};



inline void lyy_stencil_hcompute_lyy_stencil_2_write(hw_uint<16>& lyy_stencil_hcompute_lyy_stencil_2, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
  lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.write(lyy_stencil_hcompute_lyy_stencil_2, (lyy_s0_x - -2) * 1 + (lyy_s0_y - -2) * 64);
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_18_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_18 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_19_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_19 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_20_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_20 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, -1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (-1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_21_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_21 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_22_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_22 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_23_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_23 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_24_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_24 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[-1 + lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_25_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_25 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[1 + lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

inline hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_26_select(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lyy_stencil_hcompute_lgyy_stencil_1_26 read pattern: { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> lyy_stencil[lgyy_s1_x, 1 + lgyy_s1_y] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
  auto value_lyy_stencil_hcompute_lyy_stencil_2 = lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (lgyy_s1_x - -2) * 1 + (1 + lgyy_s1_y - -2) * 64);
  return value_lyy_stencil_hcompute_lyy_stencil_2;
  return 0;
}

// # of bundles = 2
// hcompute_lgyy_stencil_1_read
//	lyy_stencil_hcompute_lgyy_stencil_1_18
//	lyy_stencil_hcompute_lgyy_stencil_1_19
//	lyy_stencil_hcompute_lgyy_stencil_1_20
//	lyy_stencil_hcompute_lgyy_stencil_1_21
//	lyy_stencil_hcompute_lgyy_stencil_1_22
//	lyy_stencil_hcompute_lgyy_stencil_1_23
//	lyy_stencil_hcompute_lgyy_stencil_1_24
//	lyy_stencil_hcompute_lgyy_stencil_1_25
//	lyy_stencil_hcompute_lgyy_stencil_1_26
inline hw_uint<144> lyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // lyy_stencil_hcompute_lgyy_stencil_1_18
    // lyy_stencil_hcompute_lgyy_stencil_1_19
    // lyy_stencil_hcompute_lgyy_stencil_1_20
    // lyy_stencil_hcompute_lgyy_stencil_1_21
    // lyy_stencil_hcompute_lgyy_stencil_1_22
    // lyy_stencil_hcompute_lgyy_stencil_1_23
    // lyy_stencil_hcompute_lgyy_stencil_1_24
    // lyy_stencil_hcompute_lgyy_stencil_1_25
    // lyy_stencil_hcompute_lgyy_stencil_1_26

	hw_uint<144> result;
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_18_res = lyy_stencil_hcompute_lgyy_stencil_1_18_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<0, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_18_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_19_res = lyy_stencil_hcompute_lgyy_stencil_1_19_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<16, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_19_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_20_res = lyy_stencil_hcompute_lgyy_stencil_1_20_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<32, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_20_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_21_res = lyy_stencil_hcompute_lgyy_stencil_1_21_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<48, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_21_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_22_res = lyy_stencil_hcompute_lgyy_stencil_1_22_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<64, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_22_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_23_res = lyy_stencil_hcompute_lgyy_stencil_1_23_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<80, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_23_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_24_res = lyy_stencil_hcompute_lgyy_stencil_1_24_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<96, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_24_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_25_res = lyy_stencil_hcompute_lgyy_stencil_1_25_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<112, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_25_res);
	hw_uint<16> lyy_stencil_hcompute_lgyy_stencil_1_26_res = lyy_stencil_hcompute_lgyy_stencil_1_26_select(lyy_stencil, root, lgyy_s1_y, lgyy_s1_x, dynamic_address);
	set_at<128, 144>(result, lyy_stencil_hcompute_lgyy_stencil_1_26_res);
	return result;
}

// hcompute_lyy_stencil_write
//	lyy_stencil_hcompute_lyy_stencil_2
inline void lyy_stencil_hcompute_lyy_stencil_write_bundle_write(hw_uint<16>& hcompute_lyy_stencil_write, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x, int dynamic_address) {
	hw_uint<16> lyy_stencil_hcompute_lyy_stencil_2_res = hcompute_lyy_stencil_write.extract<0, 15>();
	lyy_stencil_hcompute_lyy_stencil_2_write(lyy_stencil_hcompute_lyy_stencil_2_res, lyy_stencil, root, lyy_s0_y, lyy_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct padded16_stencil_all_inputs_to_all_outputs_cache {
	// RAM Box: {[-3, 63], [-3, 63]}
	// Capacity: 4489
  hw_uint<16> RAM[4489];
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 4489)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 4489);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct padded16_stencil_cache {
  // # of banks: 1
  padded16_stencil_all_inputs_to_all_outputs_cache padded16_stencil_all_inputs_to_all_outputs;
};



inline void padded16_stencil_hcompute_padded16_stencil_45_write(hw_uint<16>& padded16_stencil_hcompute_padded16_stencil_45, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x, int dynamic_address) {
  padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.write(padded16_stencil_hcompute_padded16_stencil_45, (padded16_s0_x - -3) * 1 + (padded16_s0_y - -3) * 67);
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_39_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_39 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, -1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (-1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_40_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_40 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, 1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_41_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_41 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[1 + grad_x_s0_x, grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + grad_x_s0_x - -3) * 1 + (grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_42_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_42 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, -1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (-1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_43_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_43 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_44_select(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_x_stencil_44 read pattern: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> padded16_stencil[-1 + grad_x_s0_x, 1 + grad_x_s0_y] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + grad_x_s0_x - -3) * 1 + (1 + grad_x_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_67_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_67 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[-1 + grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_68_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_68 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_69_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_69 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[1 + grad_y_s0_x, -1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + grad_y_s0_x - -3) * 1 + (-1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_70_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_70 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[-1 + grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (-1 + grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_71_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_71 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[1 + grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (1 + grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

inline hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_72_select(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // padded16_stencil_hcompute_grad_y_stencil_72 read pattern: { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> padded16_stencil[grad_y_s0_x, 1 + grad_y_s0_y] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
  auto value_padded16_stencil_hcompute_padded16_stencil_45 = padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.read(/*ram type address*/ (grad_y_s0_x - -3) * 1 + (1 + grad_y_s0_y - -3) * 67);
  return value_padded16_stencil_hcompute_padded16_stencil_45;
  return 0;
}

// # of bundles = 3
// hcompute_grad_x_stencil_read
//	padded16_stencil_hcompute_grad_x_stencil_39
//	padded16_stencil_hcompute_grad_x_stencil_40
//	padded16_stencil_hcompute_grad_x_stencil_41
//	padded16_stencil_hcompute_grad_x_stencil_42
//	padded16_stencil_hcompute_grad_x_stencil_43
//	padded16_stencil_hcompute_grad_x_stencil_44
inline hw_uint<96> padded16_stencil_hcompute_grad_x_stencil_read_bundle_read(padded16_stencil_cache& padded16_stencil, int root, int grad_x_s0_y, int grad_x_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_stencil_hcompute_grad_x_stencil_39
    // padded16_stencil_hcompute_grad_x_stencil_40
    // padded16_stencil_hcompute_grad_x_stencil_41
    // padded16_stencil_hcompute_grad_x_stencil_42
    // padded16_stencil_hcompute_grad_x_stencil_43
    // padded16_stencil_hcompute_grad_x_stencil_44

	hw_uint<96> result;
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_39_res = padded16_stencil_hcompute_grad_x_stencil_39_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_stencil_hcompute_grad_x_stencil_39_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_40_res = padded16_stencil_hcompute_grad_x_stencil_40_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_stencil_hcompute_grad_x_stencil_40_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_41_res = padded16_stencil_hcompute_grad_x_stencil_41_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_stencil_hcompute_grad_x_stencil_41_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_42_res = padded16_stencil_hcompute_grad_x_stencil_42_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_stencil_hcompute_grad_x_stencil_42_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_43_res = padded16_stencil_hcompute_grad_x_stencil_43_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_stencil_hcompute_grad_x_stencil_43_res);
	hw_uint<16> padded16_stencil_hcompute_grad_x_stencil_44_res = padded16_stencil_hcompute_grad_x_stencil_44_select(padded16_stencil, root, grad_x_s0_y, grad_x_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_stencil_hcompute_grad_x_stencil_44_res);
	return result;
}

// hcompute_grad_y_stencil_read
//	padded16_stencil_hcompute_grad_y_stencil_67
//	padded16_stencil_hcompute_grad_y_stencil_68
//	padded16_stencil_hcompute_grad_y_stencil_69
//	padded16_stencil_hcompute_grad_y_stencil_70
//	padded16_stencil_hcompute_grad_y_stencil_71
//	padded16_stencil_hcompute_grad_y_stencil_72
inline hw_uint<96> padded16_stencil_hcompute_grad_y_stencil_read_bundle_read(padded16_stencil_cache& padded16_stencil, int root, int grad_y_s0_y, int grad_y_s0_x, int dynamic_address) {
  // # of ports in bundle: 6
    // padded16_stencil_hcompute_grad_y_stencil_67
    // padded16_stencil_hcompute_grad_y_stencil_68
    // padded16_stencil_hcompute_grad_y_stencil_69
    // padded16_stencil_hcompute_grad_y_stencil_70
    // padded16_stencil_hcompute_grad_y_stencil_71
    // padded16_stencil_hcompute_grad_y_stencil_72

	hw_uint<96> result;
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_67_res = padded16_stencil_hcompute_grad_y_stencil_67_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<0, 96>(result, padded16_stencil_hcompute_grad_y_stencil_67_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_68_res = padded16_stencil_hcompute_grad_y_stencil_68_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<16, 96>(result, padded16_stencil_hcompute_grad_y_stencil_68_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_69_res = padded16_stencil_hcompute_grad_y_stencil_69_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<32, 96>(result, padded16_stencil_hcompute_grad_y_stencil_69_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_70_res = padded16_stencil_hcompute_grad_y_stencil_70_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<48, 96>(result, padded16_stencil_hcompute_grad_y_stencil_70_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_71_res = padded16_stencil_hcompute_grad_y_stencil_71_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<64, 96>(result, padded16_stencil_hcompute_grad_y_stencil_71_res);
	hw_uint<16> padded16_stencil_hcompute_grad_y_stencil_72_res = padded16_stencil_hcompute_grad_y_stencil_72_select(padded16_stencil, root, grad_y_s0_y, grad_y_s0_x, dynamic_address);
	set_at<80, 96>(result, padded16_stencil_hcompute_grad_y_stencil_72_res);
	return result;
}

// hcompute_padded16_stencil_write
//	padded16_stencil_hcompute_padded16_stencil_45
inline void padded16_stencil_hcompute_padded16_stencil_write_bundle_write(hw_uint<16>& hcompute_padded16_stencil_write, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x, int dynamic_address) {
	hw_uint<16> padded16_stencil_hcompute_padded16_stencil_45_res = hcompute_padded16_stencil_write.extract<0, 15>();
	padded16_stencil_hcompute_padded16_stencil_45_write(padded16_stencil_hcompute_padded16_stencil_45_res, padded16_stencil, root, padded16_s0_y, padded16_s0_x, dynamic_address);
}



// Operation logic
inline void hcompute_lgxx_stencil(lgxx_stencil_cache& lgxx_stencil, int root, int lgxx_s0_y, int lgxx_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxx_stencil();
	// Produce: lgxx_stencil
	lgxx_stencil_hcompute_lgxx_stencil_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s0_y, lgxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgyy_stencil(lgyy_stencil_cache& lgyy_stencil, int root, int lgyy_s0_y, int lgyy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgyy_stencil();
	// Produce: lgyy_stencil
	lgyy_stencil_hcompute_lgyy_stencil_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s0_y, lgyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lyy_stencil(grad_y_stencil_cache& grad_y_stencil, lyy_stencil_cache& lyy_stencil, int root, int lyy_s0_y, int lyy_s0_x) {
  // Dynamic address computation

	// Consume: grad_y_stencil
	auto grad_y_stencil_lyy_s0_x_c__lyy_s0_y_value = grad_y_stencil_hcompute_lyy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lyy_stencil(grad_y_stencil_lyy_s0_x_c__lyy_s0_y_value);
	// Produce: lyy_stencil
	lyy_stencil_hcompute_lyy_stencil_write_bundle_write(/* arg names */compute_result, lyy_stencil, root, lyy_s0_y, lyy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxy_stencil_1(lgxy_stencil_cache& lgxy_stencil, lxy_stencil_cache& lxy_stencil, int root, int lgxy_s1_y, int lgxy_s1_x) {
  // Dynamic address computation

	// Consume: lgxy_stencil
	auto lgxy_stencil_lgxy_s1_x_c__lgxy_s1_y_value = lgxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lgxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lxy_stencil
	auto lxy_stencil__lp_lgxy_s1_x__p___m_1_rp__c___lp_lgxy_s1_y__p___m_1_rp__value = lxy_stencil_hcompute_lgxy_stencil_1_read_bundle_read(lxy_stencil/* source_delay */, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgxy_stencil_1(lgxy_stencil_lgxy_s1_x_c__lgxy_s1_y_value, lxy_stencil__lp_lgxy_s1_x__p___m_1_rp__c___lp_lgxy_s1_y__p___m_1_rp__value);
	// Produce: lgxy_stencil
	lgxy_stencil_hcompute_lgxy_stencil_1_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s1_y, lgxy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxy_stencil(lgxy_stencil_cache& lgxy_stencil, int root, int lgxy_s0_y, int lgxy_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_lgxy_stencil();
	// Produce: lgxy_stencil
	lgxy_stencil_hcompute_lgxy_stencil_write_bundle_write(/* arg names */compute_result, lgxy_stencil, root, lgxy_s0_y, lgxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgyy_stencil_1(lgyy_stencil_cache& lgyy_stencil, lyy_stencil_cache& lyy_stencil, int root, int lgyy_s1_y, int lgyy_s1_x) {
  // Dynamic address computation

	// Consume: lgyy_stencil
	auto lgyy_stencil_lgyy_s1_x_c__lgyy_s1_y_value = lgyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lgyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lyy_stencil
	auto lyy_stencil__lp_lgyy_s1_x__p___m_1_rp__c___lp_lgyy_s1_y__p___m_1_rp__value = lyy_stencil_hcompute_lgyy_stencil_1_read_bundle_read(lyy_stencil/* source_delay */, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgyy_stencil_1(lgyy_stencil_lgyy_s1_x_c__lgyy_s1_y_value, lyy_stencil__lp_lgyy_s1_x__p___m_1_rp__c___lp_lgyy_s1_y__p___m_1_rp__value);
	// Produce: lgyy_stencil
	lgyy_stencil_hcompute_lgyy_stencil_1_write_bundle_write(/* arg names */compute_result, lgyy_stencil, root, lgyy_s1_y, lgyy_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lgxx_stencil_1(lgxx_stencil_cache& lgxx_stencil, lxx_stencil_cache& lxx_stencil, int root, int lgxx_s1_y, int lgxx_s1_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil_lgxx_s1_x_c__lgxx_s1_y_value = lgxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lgxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lxx_stencil
	auto lxx_stencil__lp_lgxx_s1_x__p___m_1_rp__c___lp_lgxx_s1_y__p___m_1_rp__value = lxx_stencil_hcompute_lgxx_stencil_1_read_bundle_read(lxx_stencil/* source_delay */, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lgxx_stencil_1(lgxx_stencil_lgxx_s1_x_c__lgxx_s1_y_value, lxx_stencil__lp_lgxx_s1_x__p___m_1_rp__c___lp_lgxx_s1_y__p___m_1_rp__value);
	// Produce: lgxx_stencil
	lgxx_stencil_hcompute_lgxx_stencil_1_write_bundle_write(/* arg names */compute_result, lgxx_stencil, root, lgxx_s1_y, lgxx_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_grad_x_stencil(padded16_stencil_cache& padded16_stencil, grad_x_stencil_cache& grad_x_stencil, int root, int grad_x_s0_y, int grad_x_s0_x) {
  // Dynamic address computation

	// Consume: padded16_stencil
	auto padded16_stencil__lp_grad_x_s0_x__p__1_rp__c___lp_grad_x_s0_y__p___m_1_rp__value = padded16_stencil_hcompute_grad_x_stencil_read_bundle_read(padded16_stencil/* source_delay */, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_grad_x_stencil(padded16_stencil__lp_grad_x_s0_x__p__1_rp__c___lp_grad_x_s0_y__p___m_1_rp__value);
	// Produce: grad_x_stencil
	grad_x_stencil_hcompute_grad_x_stencil_write_bundle_write(/* arg names */compute_result, grad_x_stencil, root, grad_x_s0_y, grad_x_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_padded16_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_input_copy_stencil, padded16_stencil_cache& padded16_stencil, int root, int padded16_s0_y, int padded16_s0_x) {
  // Dynamic address computation

	// Consume: hw_input_copy_stencil
	auto hw_input_copy_stencil_padded16_s0_x_c__padded16_s0_y_value = hw_input_copy_stencil.read();
	auto compute_result = hcompute_padded16_stencil(hw_input_copy_stencil_padded16_s0_x_c__padded16_s0_y_value);
	// Produce: padded16_stencil
	padded16_stencil_hcompute_padded16_stencil_write_bundle_write(/* arg names */compute_result, padded16_stencil, root, padded16_s0_y, padded16_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lxy_stencil(grad_x_stencil_cache& grad_x_stencil, grad_y_stencil_cache& grad_y_stencil, lxy_stencil_cache& lxy_stencil, int root, int lxy_s0_y, int lxy_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxy_s0_x_c__lxy_s0_y_value = grad_x_stencil_hcompute_lxy_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: grad_y_stencil
	auto grad_y_stencil_lxy_s0_x_c__lxy_s0_y_value = grad_y_stencil_hcompute_lxy_stencil_read_bundle_read(grad_y_stencil/* source_delay */, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lxy_stencil(grad_x_stencil_lxy_s0_x_c__lxy_s0_y_value, grad_y_stencil_lxy_s0_x_c__lxy_s0_y_value);
	// Produce: lxy_stencil
	lxy_stencil_hcompute_lxy_stencil_write_bundle_write(/* arg names */compute_result, lxy_stencil, root, lxy_s0_y, lxy_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_cim_stencil(lgxx_stencil_cache& lgxx_stencil, lgxy_stencil_cache& lgxy_stencil, lgyy_stencil_cache& lgyy_stencil, cim_stencil_cache& cim_stencil, int root, int cim_s0_y, int cim_s0_x) {
  // Dynamic address computation

	// Consume: lgxx_stencil
	auto lgxx_stencil_cim_s0_x_c__cim_s0_y_value = lgxx_stencil_hcompute_cim_stencil_read_bundle_read(lgxx_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgxy_stencil
	auto lgxy_stencil_cim_s0_x_c__cim_s0_y_value = lgxy_stencil_hcompute_cim_stencil_read_bundle_read(lgxy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lgyy_stencil
	auto lgyy_stencil_cim_s0_x_c__cim_s0_y_value = lgyy_stencil_hcompute_cim_stencil_read_bundle_read(lgyy_stencil/* source_delay */, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_cim_stencil(lgxx_stencil_cim_s0_x_c__cim_s0_y_value, lgxy_stencil_cim_s0_x_c__cim_s0_y_value, lgyy_stencil_cim_s0_x_c__cim_s0_y_value);
	// Produce: cim_stencil
	cim_stencil_hcompute_cim_stencil_write_bundle_write(/* arg names */compute_result, cim_stencil, root, cim_s0_y, cim_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_cim_output_stencil(cim_stencil_cache& cim_stencil, cim_output_stencil_cache& cim_output_stencil, int root, int cim_output_s0_y, int cim_output_s0_x) {
  // Dynamic address computation

	// Consume: cim_stencil
	auto cim_stencil__lp_cim_output_s0_x__p___m_1_rp__c___lp_cim_output_s0_y__p___m_1_rp__value = cim_stencil_hcompute_cim_output_stencil_read_bundle_read(cim_stencil/* source_delay */, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_cim_output_stencil(cim_stencil__lp_cim_output_s0_x__p___m_1_rp__c___lp_cim_output_s0_y__p___m_1_rp__value);
	// Produce: cim_output_stencil
	cim_output_stencil_hcompute_cim_output_stencil_write_bundle_write(/* arg names */compute_result, cim_output_stencil, root, cim_output_s0_y, cim_output_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_lxx_stencil(grad_x_stencil_cache& grad_x_stencil, lxx_stencil_cache& lxx_stencil, int root, int lxx_s0_y, int lxx_s0_x) {
  // Dynamic address computation

	// Consume: grad_x_stencil
	auto grad_x_stencil_lxx_s0_x_c__lxx_s0_y_value = grad_x_stencil_hcompute_lxx_stencil_read_bundle_read(grad_x_stencil/* source_delay */, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_lxx_stencil(grad_x_stencil_lxx_s0_x_c__lxx_s0_y_value);
	// Produce: lxx_stencil
	lxx_stencil_hcompute_lxx_stencil_write_bundle_write(/* arg names */compute_result, lxx_stencil, root, lxx_s0_y, lxx_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_grad_y_stencil(padded16_stencil_cache& padded16_stencil, grad_y_stencil_cache& grad_y_stencil, int root, int grad_y_s0_y, int grad_y_s0_x) {
  // Dynamic address computation

	// Consume: padded16_stencil
	auto padded16_stencil__lp_grad_y_s0_x__p___m_1_rp__c___lp_grad_y_s0_y__p___m_1_rp__value = padded16_stencil_hcompute_grad_y_stencil_read_bundle_read(padded16_stencil/* source_delay */, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_grad_y_stencil(padded16_stencil__lp_grad_y_s0_x__p___m_1_rp__c___lp_grad_y_s0_y__p___m_1_rp__value);
	// Produce: grad_y_stencil
	grad_y_stencil_hcompute_grad_y_stencil_write_bundle_write(/* arg names */compute_result, grad_y_stencil, root, grad_y_s0_y, grad_y_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void hcompute_hw_output_stencil(cim_output_stencil_cache& cim_output_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: cim_output_stencil
	auto cim_output_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value = cim_output_stencil_hcompute_hw_output_stencil_read_bundle_read(cim_output_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(cim_output_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_harris(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_harris_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  cim_output_stencil_cache cim_output_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=cim_output_stencil.cim_output_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  cim_stencil_cache cim_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=cim_stencil.cim_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  grad_x_stencil_cache grad_x_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=grad_x_stencil.grad_x_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  grad_y_stencil_cache grad_y_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=grad_y_stencil.grad_y_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  lgxx_stencil_cache lgxx_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=lgxx_stencil.lgxx_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  lgxy_stencil_cache lgxy_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=lgxy_stencil.lgxy_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  lgyy_stencil_cache lgyy_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=lgyy_stencil.lgyy_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  lxx_stencil_cache lxx_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=lxx_stencil.lxx_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  lxy_stencil_cache lxy_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=lxy_stencil.lxy_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  lyy_stencil_cache lyy_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=lyy_stencil.lyy_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
  padded16_stencil_cache padded16_stencil;
#ifdef __VIVADO_SYNTH__
#pragma HLS array_partition variable=padded16_stencil.padded16_stencil_all_inputs_to_all_outputs.RAM dim=0 complete
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> [0, 0, 1, grad_x_s0_y, 0, grad_x_s0_x, 0] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61; hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 14, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57; hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> [0, 0, 2, lxx_s0_y, 0, lxx_s0_x, 0] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61; hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> [0, 0, 13, cim_output_s0_y, 0, cim_output_s0_x, 0] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57; hcompute_lgyy_stencil[root = 0, lgyy_s0_y, lgyy_s0_x] -> [0, 0, 10, lgyy_s0_y, 0, lgyy_s0_x, 0] : -1 <= lgyy_s0_y <= 59 and -1 <= lgyy_s0_x <= 59; hcompute_lgxy_stencil[root = 0, lgxy_s0_y, lgxy_s0_x] -> [0, 0, 7, lgxy_s0_y, 0, lgxy_s0_x, 0] : -1 <= lgxy_s0_y <= 59 and -1 <= lgxy_s0_x <= 59; hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> [0, 0, 11, lgyy_s1_y, 0, lgyy_s1_x, 0] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59; hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> [0, 0, 4, lgxx_s1_y, 0, lgxx_s1_x, 0] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59; hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> [0, 0, 12, cim_s0_y, 0, cim_s0_x, 0] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59; hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> [0, 0, 6, lxy_s0_y, 0, lxy_s0_x, 0] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61; hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> [0, 0, 5, grad_y_s0_y, 0, grad_y_s0_x, 0] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61; hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> [0, 0, 8, lgxy_s1_y, 0, lgxy_s1_x, 0] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59; hcompute_lgxx_stencil[root = 0, lgxx_s0_y, lgxx_s0_x] -> [0, 0, 3, lgxx_s0_y, 0, lgxx_s0_x, 0] : -1 <= lgxx_s0_y <= 59 and -1 <= lgxx_s0_x <= 59; hcompute_padded16_stencil[root = 0, padded16_s0_y, padded16_s0_x] -> [0, 0, 0, padded16_s0_y, 0, padded16_s0_x, 0] : -3 <= padded16_s0_y <= 63 and -3 <= padded16_s0_x <= 63; hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> [0, 0, 9, lyy_s0_y, 0, lyy_s0_x, 0] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
//   { hcompute_grad_x_stencil[root = 0, grad_x_s0_y, grad_x_s0_x] -> [0, 0, 1, grad_x_s0_y, 0, grad_x_s0_x, 0] : -2 <= grad_x_s0_y <= 61 and -2 <= grad_x_s0_x <= 61 }
// Condition for hcompute_grad_x_stencil(((i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 14, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
// Condition for hcompute_hw_output_stencil(((i6 == 0) && (i4 == 0) && (-14 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (57 - i3 >= 0) && (i5 >= 0) && (57 - i5 >= 0)))
//   { hcompute_lxx_stencil[root = 0, lxx_s0_y, lxx_s0_x] -> [0, 0, 2, lxx_s0_y, 0, lxx_s0_x, 0] : -2 <= lxx_s0_y <= 61 and -2 <= lxx_s0_x <= 61 }
// Condition for hcompute_lxx_stencil(((i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_cim_output_stencil[root = 0, cim_output_s0_y, cim_output_s0_x] -> [0, 0, 13, cim_output_s0_y, 0, cim_output_s0_x, 0] : 0 <= cim_output_s0_y <= 57 and 0 <= cim_output_s0_x <= 57 }
// Condition for hcompute_cim_output_stencil(((i6 == 0) && (i4 == 0) && (-13 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (57 - i3 >= 0) && (i5 >= 0) && (57 - i5 >= 0)))
//   { hcompute_lgyy_stencil[root = 0, lgyy_s0_y, lgyy_s0_x] -> [0, 0, 10, lgyy_s0_y, 0, lgyy_s0_x, 0] : -1 <= lgyy_s0_y <= 59 and -1 <= lgyy_s0_x <= 59 }
// Condition for hcompute_lgyy_stencil(((i6 == 0) && (i4 == 0) && (-10 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgxy_stencil[root = 0, lgxy_s0_y, lgxy_s0_x] -> [0, 0, 7, lgxy_s0_y, 0, lgxy_s0_x, 0] : -1 <= lgxy_s0_y <= 59 and -1 <= lgxy_s0_x <= 59 }
// Condition for hcompute_lgxy_stencil(((i6 == 0) && (i4 == 0) && (-7 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgyy_stencil_1[root = 0, lgyy_s1_y, lgyy_s1_x] -> [0, 0, 11, lgyy_s1_y, 0, lgyy_s1_x, 0] : -1 <= lgyy_s1_y <= 59 and -1 <= lgyy_s1_x <= 59 }
// Condition for hcompute_lgyy_stencil_1(((i6 == 0) && (i4 == 0) && (-11 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgxx_stencil_1[root = 0, lgxx_s1_y, lgxx_s1_x] -> [0, 0, 4, lgxx_s1_y, 0, lgxx_s1_x, 0] : -1 <= lgxx_s1_y <= 59 and -1 <= lgxx_s1_x <= 59 }
// Condition for hcompute_lgxx_stencil_1(((i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_cim_stencil[root = 0, cim_s0_y, cim_s0_x] -> [0, 0, 12, cim_s0_y, 0, cim_s0_x, 0] : -1 <= cim_s0_y <= 59 and -1 <= cim_s0_x <= 59 }
// Condition for hcompute_cim_stencil(((i6 == 0) && (i4 == 0) && (-12 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lxy_stencil[root = 0, lxy_s0_y, lxy_s0_x] -> [0, 0, 6, lxy_s0_y, 0, lxy_s0_x, 0] : -2 <= lxy_s0_y <= 61 and -2 <= lxy_s0_x <= 61 }
// Condition for hcompute_lxy_stencil(((i6 == 0) && (i4 == 0) && (-6 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_grad_y_stencil[root = 0, grad_y_s0_y, grad_y_s0_x] -> [0, 0, 5, grad_y_s0_y, 0, grad_y_s0_x, 0] : -2 <= grad_y_s0_y <= 61 and -2 <= grad_y_s0_x <= 61 }
// Condition for hcompute_grad_y_stencil(((i6 == 0) && (i4 == 0) && (-5 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))
//   { hcompute_lgxy_stencil_1[root = 0, lgxy_s1_y, lgxy_s1_x] -> [0, 0, 8, lgxy_s1_y, 0, lgxy_s1_x, 0] : -1 <= lgxy_s1_y <= 59 and -1 <= lgxy_s1_x <= 59 }
// Condition for hcompute_lgxy_stencil_1(((i6 == 0) && (i4 == 0) && (-8 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_lgxx_stencil[root = 0, lgxx_s0_y, lgxx_s0_x] -> [0, 0, 3, lgxx_s0_y, 0, lgxx_s0_x, 0] : -1 <= lgxx_s0_y <= 59 and -1 <= lgxx_s0_x <= 59 }
// Condition for hcompute_lgxx_stencil(((i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (1 + i3 >= 0) && (59 - i3 >= 0) && (1 + i5 >= 0) && (59 - i5 >= 0)))
//   { hcompute_padded16_stencil[root = 0, padded16_s0_y, padded16_s0_x] -> [0, 0, 0, padded16_s0_y, 0, padded16_s0_x, 0] : -3 <= padded16_s0_y <= 63 and -3 <= padded16_s0_x <= 63 }
// Condition for hcompute_padded16_stencil(((i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (3 + i3 >= 0) && (63 - i3 >= 0) && (3 + i5 >= 0) && (63 - i5 >= 0)))
//   { hcompute_lyy_stencil[root = 0, lyy_s0_y, lyy_s0_x] -> [0, 0, 9, lyy_s0_y, 0, lyy_s0_x, 0] : -2 <= lyy_s0_y <= 61 and -2 <= lyy_s0_x <= 61 }
// Condition for hcompute_lyy_stencil(((i6 == 0) && (i4 == 0) && (-9 + i2 == 0) && (i1 == 0) && (i0 == 0) && (2 + i3 >= 0) && (61 - i3 >= 0) && (2 + i5 >= 0) && (61 - i5 >= 0)))

  /*
{
  for (int c3 = -3; c3 <= 63; c3 += 1)
    for (int c5 = -3; c5 <= 63; c5 += 1)
      hcompute_padded16_stencil(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_grad_x_stencil(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_lxx_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxx_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxx_stencil_1(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_grad_y_stencil(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_lxy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgxy_stencil_1(0, c3, c5);
  for (int c3 = -2; c3 <= 61; c3 += 1)
    for (int c5 = -2; c5 <= 61; c5 += 1)
      hcompute_lyy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgyy_stencil(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_lgyy_stencil_1(0, c3, c5);
  for (int c3 = -1; c3 <= 59; c3 += 1)
    for (int c5 = -1; c5 <= 59; c5 += 1)
      hcompute_cim_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 57; c3 += 1)
    for (int c5 = 0; c5 <= 57; c5 += 1)
      hcompute_cim_output_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 57; c3 += 1)
    for (int c5 = 0; c5 <= 57; c5 += 1)
      hcompute_hw_output_stencil(0, c3, c5);
}

  */
	{
	  for (int c3 = -3; c3 <= 63; c3 += 1)
	    for (int c5 = -3; c5 <= 63; c5 += 1)
	      hcompute_padded16_stencil(hw_input_copy_stencil /* buf name */, padded16_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_grad_x_stencil(padded16_stencil /* buf name */, grad_x_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_lxx_stencil(grad_x_stencil /* buf name */, lxx_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxx_stencil(lgxx_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxx_stencil_1(lgxx_stencil /* buf name */, lxx_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_grad_y_stencil(padded16_stencil /* buf name */, grad_y_stencil, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_lxy_stencil(grad_x_stencil /* buf name */, grad_y_stencil /* buf name */, lxy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxy_stencil(lgxy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgxy_stencil_1(lgxy_stencil /* buf name */, lxy_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = -2; c3 <= 61; c3 += 1)
	    for (int c5 = -2; c5 <= 61; c5 += 1)
	      hcompute_lyy_stencil(grad_y_stencil /* buf name */, lyy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgyy_stencil(lgyy_stencil, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_lgyy_stencil_1(lgyy_stencil /* buf name */, lyy_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = -1; c3 <= 59; c3 += 1)
	    for (int c5 = -1; c5 <= 59; c5 += 1)
	      hcompute_cim_stencil(lgxx_stencil /* buf name */, lgxy_stencil /* buf name */, lgyy_stencil /* buf name */, cim_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 57; c3 += 1)
	    for (int c5 = 0; c5 <= 57; c5 += 1)
	      hcompute_cim_output_stencil(cim_stencil /* buf name */, cim_output_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 57; c3 += 1)
	    for (int c5 = 0; c5 <= 57; c5 += 1)
	      hcompute_hw_output_stencil(cim_output_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_harris_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_harris(hw_input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { hcompute_padded16_stencil[root = 0, padded16_s0_y, padded16_s0_x] -> hw_input_copy_stencil[padded16_s0_x, padded16_s0_y] : -3 <= padded16_s0_y <= 63 and -3 <= padded16_s0_x <= 63 }
const int hcompute_padded16_stencil_read_pipe0_num_transfers = 4489;
  // { hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 57 and 0 <= hw_output_s0_x_xi <= 57 }
const int hcompute_hw_output_stencil_write_pipe0_num_transfers = 3364;


extern "C" {

void unoptimized_harris_accel(hw_uint<16>* hcompute_padded16_stencil_read_pipe0, hw_uint<16>* hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = hcompute_padded16_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = hcompute_padded16_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > hcompute_padded16_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(hcompute_padded16_stencil_read_pipe0, hcompute_padded16_stencil_read_pipe0_channel, hcompute_padded16_stencil_read_pipe0_num_transfers*size);

  unoptimized_harris_wrapper(hcompute_padded16_stencil_read_pipe0_channel, hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(hcompute_hw_output_stencil_write_pipe0, hcompute_hw_output_stencil_write_pipe0_channel, hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
#endif //__VIVADO_SYNTH__

