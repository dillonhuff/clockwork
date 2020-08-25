#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gaussian_compute.h
#include "gaussian_compute.h"

#include "hw_classes.h"

struct blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3844];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3844);
  }
  ~blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3844)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3844);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3844)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3844);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct blur_stencil_cache {
  // # of banks: 1
  blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17_cache blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17;
};



inline void blur_stencil_op_hcompute_blur_stencil_14_write(hw_uint<16>& blur_stencil_op_hcompute_blur_stencil_14, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
  blur_stencil.blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17.write(blur_stencil_op_hcompute_blur_stencil_14, (blur_s0_x - 0) * 1 + (blur_s0_y - 0) * 62);
}

inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_17_select(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_stencil_op_hcompute_hw_output_stencil_17 read pattern: { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> blur_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
  auto value_blur_stencil_op_hcompute_blur_stencil_14 = blur_stencil.blur_stencil_op_hcompute_blur_stencil_14_to_blur_stencil_op_hcompute_hw_output_stencil_17.read(/*ram type address*/ (hw_output_s0_x_xi - 0) * 1 + (hw_output_s0_y_yi - 0) * 62);
  return value_blur_stencil_op_hcompute_blur_stencil_14;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_stencil_write
//	blur_stencil_op_hcompute_blur_stencil_14
inline void blur_stencil_op_hcompute_blur_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_stencil_write, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
	hw_uint<16> blur_stencil_op_hcompute_blur_stencil_14_res = op_hcompute_blur_stencil_write.extract<0, 15>();
	blur_stencil_op_hcompute_blur_stencil_14_write(blur_stencil_op_hcompute_blur_stencil_14_res, blur_stencil, root, blur_s0_y, blur_s0_x, dynamic_address);
}

// op_hcompute_hw_output_stencil_read
//	blur_stencil_op_hcompute_hw_output_stencil_17
inline hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil_cache& blur_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_stencil_op_hcompute_hw_output_stencil_17

	hw_uint<16> result;
	hw_uint<16> blur_stencil_op_hcompute_hw_output_stencil_17_res = blur_stencil_op_hcompute_hw_output_stencil_17_select(blur_stencil, root, hw_output_s0_y_yi, hw_output_s0_x_xi, dynamic_address);
	set_at<0, 16>(result, blur_stencil_op_hcompute_hw_output_stencil_17_res);
	return result;
}

#include "hw_classes.h"

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3844];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3844);
  }
  ~blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3844)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3844);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3844)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3844);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_cache {
	// RAM Box: {[0, 61], [0, 61]}
	// Capacity: 3844
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[3844];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*3844);
  }
  ~blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
  inline hw_uint<16> read(const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3844)) {
    cout << "Read error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3844);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return RAM[addr];
  }



	inline void write(const hw_uint<16> value, const int addr) {
#ifndef __VIVADO_SYNTH__
    if (addr < 0 || !(addr < 3844)) {
    cout << "Write error: Address " << addr << " is out of bounds" << endl;
    }
    assert(addr < 3844);
    assert(addr >= 0);
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    RAM[addr] = value;
  }

};

struct blur_unnormalized_stencil_cache {
  // # of banks: 2
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15;
  blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_cache blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4;
};



inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15.write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3, (blur_unnormalized_s1_x - 0) * 1 + (blur_unnormalized_s1_y - 0) * 62);
}

inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_write(hw_uint<16>& blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
  blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4.write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2, (blur_unnormalized_s0_x - 0) * 1 + (blur_unnormalized_s0_y - 0) * 62);
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_15_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_unnormalized_stencil_op_hcompute_blur_stencil_15 read pattern: { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x] -> blur_unnormalized_stencil[blur_s0_x, blur_s0_y] : 0 <= blur_s0_y <= 61 and 0 <= blur_s0_x <= 61 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_to_blur_unnormalized_stencil_op_hcompute_blur_stencil_15.read(/*ram type address*/ (blur_s0_x - 0) * 1 + (blur_s0_y - 0) * 62);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3;
  return 0;
}

inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_select(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> blur_unnormalized_stencil[blur_unnormalized_s1_x, blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2 = blur_unnormalized_stencil.blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_to_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4.read(/*ram type address*/ (blur_unnormalized_s1_x - 0) * 1 + (blur_unnormalized_s1_y - 0) * 62);
  return value_blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2;
  return 0;
}

// # of bundles = 4
// op_hcompute_blur_stencil_read
//	blur_unnormalized_stencil_op_hcompute_blur_stencil_15
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_s0_y, int blur_s0_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_stencil_15

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_stencil_15_res = blur_unnormalized_stencil_op_hcompute_blur_stencil_15_select(blur_unnormalized_stencil, root, blur_s0_y, blur_s0_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_stencil_15_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_1_read
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4
inline hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 1
    // blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4

	hw_uint<16> result;
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_res = blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_select(blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 16>(result, blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_4_res);
	return result;
}

// op_hcompute_blur_unnormalized_stencil_1_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_1_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_res = op_hcompute_blur_unnormalized_stencil_1_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_3_res, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
}

// op_hcompute_blur_unnormalized_stencil_write
//	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2
inline void blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write_bundle_write(hw_uint<16>& op_hcompute_blur_unnormalized_stencil_write, blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x, int dynamic_address) {
	hw_uint<16> blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_res = op_hcompute_blur_unnormalized_stencil_write.extract<0, 15>();
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_write(blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_2_res, blur_unnormalized_stencil, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x, dynamic_address);
}

#include "hw_classes.h"

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 4096
#ifdef __VIVADO_SYNTH__
  hw_uint<16> RAM[4096];
#endif //__VIVADO_SYNTH__
#ifndef __VIVADO_SYNTH__
  hw_uint<16>* RAM;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_cache() {
    RAM = (hw_uint<16>*) malloc(sizeof(hw_uint<16>)*4096);
  }
  ~hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_cache() {
    free(RAM);
  }
#endif //__VIVADO_SYNTH__
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

struct hw_input_stencil_cache {
  // # of banks: 9
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8;
  hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_cache hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9;
};



inline void hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_uint<16>& hw_input_stencil_op_hcompute_hw_input_stencil_0, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
  hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9.write(hw_input_stencil_op_hcompute_hw_input_stencil_0, (hw_input_s0_x - 0) * 1 + (hw_input_s0_y - 0) * 64);
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[2 + blur_unnormalized_s1_x, 1 + blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10.read(/*ram type address*/ (2 + blur_unnormalized_s1_x - 0) * 1 + (1 + blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[blur_unnormalized_s1_x, 2 + blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11.read(/*ram type address*/ (blur_unnormalized_s1_x - 0) * 1 + (2 + blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[2 + blur_unnormalized_s1_x, 2 + blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12.read(/*ram type address*/ (2 + blur_unnormalized_s1_x - 0) * 1 + (2 + blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[1 + blur_unnormalized_s1_x, 2 + blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13.read(/*ram type address*/ (1 + blur_unnormalized_s1_x - 0) * 1 + (2 + blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[blur_unnormalized_s1_x, blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5.read(/*ram type address*/ (blur_unnormalized_s1_x - 0) * 1 + (blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[1 + blur_unnormalized_s1_x, blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6.read(/*ram type address*/ (1 + blur_unnormalized_s1_x - 0) * 1 + (blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[2 + blur_unnormalized_s1_x, blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7.read(/*ram type address*/ (2 + blur_unnormalized_s1_x - 0) * 1 + (blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[blur_unnormalized_s1_x, 1 + blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8.read(/*ram type address*/ (blur_unnormalized_s1_x - 0) * 1 + (1 + blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

inline hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_select(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9 read pattern: { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> hw_input_stencil[1 + blur_unnormalized_s1_x, 1 + blur_unnormalized_s1_y] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
  auto value_hw_input_stencil_op_hcompute_hw_input_stencil_0 = hw_input_stencil.hw_input_stencil_op_hcompute_hw_input_stencil_0_to_hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9.read(/*ram type address*/ (1 + blur_unnormalized_s1_x - 0) * 1 + (1 + blur_unnormalized_s1_y - 0) * 64);
  return value_hw_input_stencil_op_hcompute_hw_input_stencil_0;
  return 0;
}

// # of bundles = 2
// op_hcompute_blur_unnormalized_stencil_1_read
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12
//	hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13
inline hw_uint<144> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x, int dynamic_address) {
  // # of ports in bundle: 9
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12
    // hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13

	hw_uint<144> result;
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<0, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_5_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<16, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_6_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<32, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_7_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<48, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_8_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<64, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_9_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<80, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_10_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<96, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_11_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<112, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_12_res);
	hw_uint<16> hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_res = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_select(hw_input_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, dynamic_address);
	set_at<128, 144>(result, hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_13_res);
	return result;
}

// op_hcompute_hw_input_stencil_write
//	hw_input_stencil_op_hcompute_hw_input_stencil_0
inline void hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(hw_uint<16>& op_hcompute_hw_input_stencil_write, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x, int dynamic_address) {
	hw_uint<16> hw_input_stencil_op_hcompute_hw_input_stencil_0_res = op_hcompute_hw_input_stencil_write.extract<0, 15>();
	hw_input_stencil_op_hcompute_hw_input_stencil_0_write(hw_input_stencil_op_hcompute_hw_input_stencil_0_res, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, dynamic_address);
}



// Operation logic
inline void op_hcompute_hw_input_stencil(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */input_copy_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int hw_input_s0_y, int hw_input_s0_x) {
  // Dynamic address computation

	// Consume: input_copy_stencil
	auto input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_value = input_copy_stencil.read();
	auto compute_result = hcompute_hw_input_stencil(input_copy_stencil_hw_input_s0_x_c__hw_input_s0_y_value);
	// Produce: hw_input_stencil
	hw_input_stencil_op_hcompute_hw_input_stencil_write_bundle_write(/* arg names */compute_result, hw_input_stencil, root, hw_input_s0_y, hw_input_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, int root, int blur_unnormalized_s0_y, int blur_unnormalized_s0_x) {
  // Dynamic address computation

	auto compute_result = hcompute_blur_unnormalized_stencil();
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s0_y, blur_unnormalized_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, hw_input_stencil_cache& hw_input_stencil, int root, int blur_unnormalized_s1_y, int blur_unnormalized_s1_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_unnormalized_s1_x_c__blur_unnormalized_s1_y_value = blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: hw_input_stencil
	auto hw_input_stencil_blur_unnormalized_s1_x_c__blur_unnormalized_s1_y_value = hw_input_stencil_op_hcompute_blur_unnormalized_stencil_1_read_bundle_read(hw_input_stencil/* source_delay */, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil_blur_unnormalized_s1_x_c__blur_unnormalized_s1_y_value, hw_input_stencil_blur_unnormalized_s1_x_c__blur_unnormalized_s1_y_value);
	// Produce: blur_unnormalized_stencil
	blur_unnormalized_stencil_op_hcompute_blur_unnormalized_stencil_1_write_bundle_write(/* arg names */compute_result, blur_unnormalized_stencil, root, blur_unnormalized_s1_y, blur_unnormalized_s1_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_blur_stencil(blur_unnormalized_stencil_cache& blur_unnormalized_stencil, blur_stencil_cache& blur_stencil, int root, int blur_s0_y, int blur_s0_x) {
  // Dynamic address computation

	// Consume: blur_unnormalized_stencil
	auto blur_unnormalized_stencil_blur_s0_x_c__blur_s0_y_value = blur_unnormalized_stencil_op_hcompute_blur_stencil_read_bundle_read(blur_unnormalized_stencil/* source_delay */, root, blur_s0_y, blur_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_blur_stencil(blur_unnormalized_stencil_blur_s0_x_c__blur_s0_y_value);
	// Produce: blur_stencil
	blur_stencil_op_hcompute_blur_stencil_write_bundle_write(/* arg names */compute_result, blur_stencil, root, blur_s0_y, blur_s0_x, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void op_hcompute_hw_output_stencil(blur_stencil_cache& blur_stencil, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */hw_output_stencil, int root, int hw_output_s0_y_yi, int hw_output_s0_x_xi) {
  // Dynamic address computation

	// Consume: blur_stencil
	auto blur_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value = blur_stencil_op_hcompute_hw_output_stencil_read_bundle_read(blur_stencil/* source_delay */, root, hw_output_s0_y_yi, hw_output_s0_x_xi, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = hcompute_hw_output_stencil(blur_stencil_hw_output_s0_x_xi_c__hw_output_s0_y_yi_value);
	// Produce: hw_output_stencil
	hw_output_stencil.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void unoptimized_gaussian(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("unoptimized_gaussian_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  blur_stencil_cache blur_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  blur_unnormalized_stencil_cache blur_unnormalized_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  hw_input_stencil_cache hw_input_stencil;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { op_hcompute_blur_unnormalized_stencil[root = 0, blur_unnormalized_s0_y, blur_unnormalized_s0_x] -> [0, 0, 1, blur_unnormalized_s0_y, 0, blur_unnormalized_s0_x, 0] : 0 <= blur_unnormalized_s0_y <= 61 and 0 <= blur_unnormalized_s0_x <= 61; op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63; op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x] -> [0, 0, 3, blur_s0_y, 0, blur_s0_x, 0] : 0 <= blur_s0_y <= 61 and 0 <= blur_s0_x <= 61; op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> [0, 0, 2, blur_unnormalized_s1_y, 0, blur_unnormalized_s1_x, 0] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61; op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
//   { op_hcompute_blur_unnormalized_stencil[root = 0, blur_unnormalized_s0_y, blur_unnormalized_s0_x] -> [0, 0, 1, blur_unnormalized_s0_y, 0, blur_unnormalized_s0_x, 0] : 0 <= blur_unnormalized_s0_y <= 61 and 0 <= blur_unnormalized_s0_x <= 61 }
// Condition for op_hcompute_blur_unnormalized_stencil(((i6 == 0) && (i4 == 0) && (-1 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0)))
//   { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> [0, 0, 0, hw_input_s0_y, 0, hw_input_s0_x, 0] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
// Condition for op_hcompute_hw_input_stencil(((i6 == 0) && (i4 == 0) && (i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (63 - i3 >= 0) && (i5 >= 0) && (63 - i5 >= 0)))
//   { op_hcompute_blur_stencil[root = 0, blur_s0_y, blur_s0_x] -> [0, 0, 3, blur_s0_y, 0, blur_s0_x, 0] : 0 <= blur_s0_y <= 61 and 0 <= blur_s0_x <= 61 }
// Condition for op_hcompute_blur_stencil(((i6 == 0) && (i4 == 0) && (-3 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0)))
//   { op_hcompute_blur_unnormalized_stencil_1[root = 0, blur_unnormalized_s1_y, blur_unnormalized_s1_x] -> [0, 0, 2, blur_unnormalized_s1_y, 0, blur_unnormalized_s1_x, 0] : 0 <= blur_unnormalized_s1_y <= 61 and 0 <= blur_unnormalized_s1_x <= 61 }
// Condition for op_hcompute_blur_unnormalized_stencil_1(((i6 == 0) && (i4 == 0) && (-2 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0)))
//   { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [0, 0, 4, hw_output_s0_y_yi, 0, hw_output_s0_x_xi, 0] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
// Condition for op_hcompute_hw_output_stencil(((i6 == 0) && (i4 == 0) && (-4 + i2 == 0) && (i1 == 0) && (i0 == 0) && (i3 >= 0) && (61 - i3 >= 0) && (i5 >= 0) && (61 - i5 >= 0)))

  /*
{
  for (int c3 = 0; c3 <= 63; c3 += 1)
    for (int c5 = 0; c5 <= 63; c5 += 1)
      op_hcompute_hw_input_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 61; c3 += 1)
    for (int c5 = 0; c5 <= 61; c5 += 1)
      op_hcompute_blur_unnormalized_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 61; c3 += 1)
    for (int c5 = 0; c5 <= 61; c5 += 1)
      op_hcompute_blur_unnormalized_stencil_1(0, c3, c5);
  for (int c3 = 0; c3 <= 61; c3 += 1)
    for (int c5 = 0; c5 <= 61; c5 += 1)
      op_hcompute_blur_stencil(0, c3, c5);
  for (int c3 = 0; c3 <= 61; c3 += 1)
    for (int c5 = 0; c5 <= 61; c5 += 1)
      op_hcompute_hw_output_stencil(0, c3, c5);
}

  */
	{
	  for (int c3 = 0; c3 <= 63; c3 += 1)
	    for (int c5 = 0; c5 <= 63; c5 += 1)
	      op_hcompute_hw_input_stencil(input_copy_stencil /* buf name */, hw_input_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_blur_unnormalized_stencil(blur_unnormalized_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_blur_unnormalized_stencil_1(blur_unnormalized_stencil /* buf name */, hw_input_stencil /* buf name */, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_blur_stencil(blur_unnormalized_stencil /* buf name */, blur_stencil, 0, c3, c5);
	  for (int c3 = 0; c3 <= 61; c3 += 1)
	    for (int c5 = 0; c5 <= 61; c5 += 1)
	      op_hcompute_hw_output_stencil(blur_stencil /* buf name */, hw_output_stencil, 0, c3, c5);
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void unoptimized_gaussian_wrapper(HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */input_copy_stencil, HWStream<hw_uint<16> >& /* no bundle get_args num ports = 1 */hw_output_stencil, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    unoptimized_gaussian(input_copy_stencil, hw_output_stencil);
  }
}
#ifdef __VIVADO_SYNTH__
  // { op_hcompute_hw_output_stencil[root = 0, hw_output_s0_y_yi, hw_output_s0_x_xi] -> hw_output_stencil[hw_output_s0_x_xi, hw_output_s0_y_yi] : 0 <= hw_output_s0_y_yi <= 61 and 0 <= hw_output_s0_x_xi <= 61 }
const int op_hcompute_hw_output_stencil_write_pipe0_num_transfers = 3844;
  // { op_hcompute_hw_input_stencil[root = 0, hw_input_s0_y, hw_input_s0_x] -> input_copy_stencil[hw_input_s0_x, hw_input_s0_y] : 0 <= hw_input_s0_y <= 63 and 0 <= hw_input_s0_x <= 63 }
const int op_hcompute_hw_input_stencil_read_pipe0_num_transfers = 4096;


extern "C" {

void unoptimized_gaussian_accel(hw_uint<16>* op_hcompute_hw_input_stencil_read_pipe0, hw_uint<16>* op_hcompute_hw_output_stencil_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_input_stencil_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = op_hcompute_hw_output_stencil_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_input_stencil_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = op_hcompute_hw_output_stencil_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<16> > op_hcompute_hw_input_stencil_read_pipe0_channel;
  static HWStream<hw_uint<16> > op_hcompute_hw_output_stencil_write_pipe0_channel;

  burst_read<16>(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_input_stencil_read_pipe0_num_transfers*size);

  unoptimized_gaussian_wrapper(op_hcompute_hw_input_stencil_read_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_channel, size);

  burst_write<16>(op_hcompute_hw_output_stencil_write_pipe0, op_hcompute_hw_output_stencil_write_pipe0_channel, op_hcompute_hw_output_stencil_write_pipe0_num_transfers*size);
}

}
extern "C" {

void unoptimized_gaussian_rdai(HWStream<hw_uint<16> >& op_hcompute_hw_input_stencil_read_pipe0, HWStream<hw_uint<16> >&  op_hcompute_hw_output_stencil_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = op_hcompute_hw_input_stencil_read_pipe0
#pragma HLS INTERFACE axis register port = op_hcompute_hw_output_stencil_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  unoptimized_gaussian(op_hcompute_hw_input_stencil_read_pipe0, op_hcompute_hw_output_stencil_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

